/* f_0x100cbde0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100cbde0(Guest* g)
{
    double d127;
    double d128;
    double d129;
    double d158;
    double d159;
    double d161;
    double d162;
    double d164;
    double d165;
    double d167;
    double d168;
    double d172;
    double d173;
    double d174;
    double d190;
    double d191;
    double d193;
    double d195;
    double d197;
    double d20;
    double d204;
    double d208;
    double d21;
    double d22;
    double d241;
    double d242;
    double d246;
    double d248;
    double d252;
    double d256;
    double d257;
    double d261;
    double d263;
    double d267;
    double d270;
    double d271;
    double d275;
    double d276;
    double d278;
    double d344;
    double d345;
    double d349;
    double d353;
    double d357;
    double d358;
    double d362;
    double d364;
    double d368;
    double d371;
    double d372;
    double d376;
    double d377;
    double d379;
    double d411;
    double d46;
    double d47;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_100;
    uint32_t loc_108;
    double loc_108_f;
    uint32_t loc_10c;
    uint32_t loc_114;
    uint32_t loc_118;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_128;
    uint32_t loc_140;
    uint32_t loc_f0;
    uint32_t loc_fc;
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
    uint32_t t16;
    uint32_t t160;
    uint32_t t163;
    uint32_t t166;
    uint32_t t169;
    uint32_t t17;
    uint32_t t170;
    uint32_t t171;
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
    uint32_t t192;
    uint32_t t194;
    uint32_t t196;
    uint32_t t198;
    uint32_t t199;
    uint32_t t2;
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t209;
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
    uint32_t t243;
    uint32_t t244;
    uint32_t t245;
    uint32_t t247;
    uint32_t t249;
    uint32_t t25;
    uint32_t t250;
    uint32_t t251;
    uint32_t t253;
    uint32_t t254;
    uint32_t t255;
    uint32_t t258;
    uint32_t t259;
    uint32_t t26;
    uint32_t t260;
    uint32_t t262;
    uint32_t t264;
    uint32_t t265;
    uint32_t t266;
    uint32_t t268;
    uint32_t t269;
    uint32_t t27;
    uint32_t t272;
    uint32_t t273;
    uint32_t t274;
    uint32_t t277;
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
    uint32_t t346;
    uint32_t t347;
    uint32_t t348;
    uint32_t t35;
    uint32_t t350;
    uint32_t t351;
    uint32_t t352;
    uint32_t t354;
    uint32_t t355;
    uint32_t t356;
    uint32_t t359;
    uint32_t t36;
    uint32_t t360;
    uint32_t t361;
    uint32_t t363;
    uint32_t t365;
    uint32_t t366;
    uint32_t t367;
    uint32_t t369;
    uint32_t t37;
    uint32_t t370;
    uint32_t t373;
    uint32_t t374;
    uint32_t t375;
    uint32_t t378;
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
    uint32_t t412;
    uint32_t t413;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
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
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 356u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cbe02u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x13cu); in_esi = rd32(sp0 - 0x138u); in_ebp = rd32(sp0 - 0x134u); in_ebx = rd32(sp0 - 0x130u); loc_128 = rd32(sp0 - 0x128u); loc_120 = rd32(sp0 - 0x120u); g->ebp = rd32(sp0 - 0x134u); g->ebx = rd32(sp0 - 0x130u); g->edi = rd32(sp0 - 0x13cu); g->esi = rd32(sp0 - 0x138u); goto E_100cbe02;
    case 0x100cbe1du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x13cu); in_esi = rd32(sp0 - 0x138u); in_ebp = rd32(sp0 - 0x134u); in_ebx = rd32(sp0 - 0x130u); loc_128 = rd32(sp0 - 0x128u); loc_120 = rd32(sp0 - 0x120u); g->ebp = rd32(sp0 - 0x134u); g->ebx = rd32(sp0 - 0x130u); g->edi = rd32(sp0 - 0x13cu); g->esi = rd32(sp0 - 0x138u); goto E_100cbe1d;
    case 0x100cbe28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100cbe28;
    case 0x100cbe32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_100cbe32;
    case 0x100cbe4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbe4e;
    case 0x100cbe59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_f0 = rd32(sp0 - 0xf0u); goto E_100cbe59;
    case 0x100cbe6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_100cbe6a;
    case 0x100cbe7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_100cbe7a;
    case 0x100cbe82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_100cbe82;
    case 0x100cbe87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_100cbe87;
    case 0x100cbe94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_100cbe94;
    case 0x100cbe9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbe9b;
    case 0x100cbe9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbe9f;
    case 0x100cbea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbea6;
    case 0x100cbeaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbeaa;
    case 0x100cbeafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_100cbeaf;
    case 0x100cbee0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cbee0;
    case 0x100cbeefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cbeef;
    case 0x100cbef6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbef6;
    case 0x100cbf17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbf17;
    case 0x100cbf21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbf21;
    case 0x100cbf27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbf27;
    case 0x100cbf3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbf3c;
    case 0x100cbf44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbf44;
    case 0x100cbf51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbf51;
    case 0x100cbf6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_11c = rd32(sp0 - 0x11cu); goto E_100cbf6b;
    case 0x100cbf75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbf75;
    case 0x100cbf89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbf89;
    case 0x100cbf93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbf93;
    case 0x100cbf9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbf9c;
    case 0x100cbfa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbfa6;
    case 0x100cbfafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbfaf;
    case 0x100cbfb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbfb6;
    case 0x100cbfbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbfbe;
    case 0x100cbfcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbfca;
    case 0x100cbfcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbfcf;
    case 0x100cbfddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbfdd;
    case 0x100cbfe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cbfe8;
    case 0x100cc000u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc000;
    case 0x100cc009u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc009;
    case 0x100cc020u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc020;
    case 0x100cc036u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc036;
    case 0x100cc03au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc03a;
    case 0x100cc048u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc048;
    case 0x100cc052u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc052;
    case 0x100cc05au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc05a;
    case 0x100cc064u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc064;
    case 0x100cc06cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc06c;
    case 0x100cc07au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc07a;
    case 0x100cc086u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc086;
    case 0x100cc08du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc08d;
    case 0x100cc095u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc095;
    case 0x100cc09fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc09f;
    case 0x100cc0a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0a7;
    case 0x100cc0b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0b1;
    case 0x100cc0b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0b9;
    case 0x100cc0c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0c3;
    case 0x100cc0c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0c7;
    case 0x100cc0d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0d5;
    case 0x100cc0ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0dd;
    case 0x100cc0dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0df;
    case 0x100cc0e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0e9;
    case 0x100cc0f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0f1;
    case 0x100cc0fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0fb;
    case 0x100cc0ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc0ff;
    case 0x100cc10du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc10d;
    case 0x100cc115u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc115;
    case 0x100cc11du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc11d;
    case 0x100cc130u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc130;
    case 0x100cc13au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc13a;
    case 0x100cc142u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc142;
    case 0x100cc14cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc14c;
    case 0x100cc154u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc154;
    case 0x100cc15eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc15e;
    case 0x100cc163u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc163;
    case 0x100cc16du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc16d;
    case 0x100cc175u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc175;
    case 0x100cc179u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc179;
    case 0x100cc18du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc18d;
    case 0x100cc196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc196;
    case 0x100cc1c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc1c9;
    case 0x100cc1ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc1cc;
    case 0x100cc1d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc1d5;
    case 0x100cc208u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc208;
    case 0x100cc20bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc20b;
    case 0x100cc214u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc214;
    case 0x100cc247u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc247;
    case 0x100cc24au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc24a;
    case 0x100cc253u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc253;
    case 0x100cc286u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc286;
    case 0x100cc289u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc289;
    case 0x100cc293u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc293;
    case 0x100cc297u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc297;
    case 0x100cc2a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc2a6;
    case 0x100cc2aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc2ae;
    case 0x100cc2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc2bc;
    case 0x100cc2c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc2c6;
    case 0x100cc2cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc2ca;
    case 0x100cc2d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc2d4;
    case 0x100cc2dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc2dc;
    case 0x100cc2eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc2ea;
    case 0x100cc2f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc2f5;
    case 0x100cc312u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc312;
    case 0x100cc31cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc31c;
    case 0x100cc330u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc330;
    case 0x100cc333u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc333;
    case 0x100cc343u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc343;
    case 0x100cc353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc353;
    case 0x100cc35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc35e;
    case 0x100cc36eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc36e;
    case 0x100cc38au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc38a;
    case 0x100cc393u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc393;
    case 0x100cc3acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc3ac;
    case 0x100cc3beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc3be;
    case 0x100cc3d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc3d0;
    case 0x100cc3e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108 = rd32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); goto E_100cc3e8;
    case 0x100cc3f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc3f4;
    case 0x100cc3ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc3ff;
    case 0x100cc411u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc411;
    case 0x100cc419u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); goto E_100cc419;
    case 0x100cc428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); goto E_100cc428;
    case 0x100cc430u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); goto E_100cc430;
    case 0x100cc441u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); goto E_100cc441;
    case 0x100cc449u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_100 = rd32(sp0 - 0x100u); goto E_100cc449;
    case 0x100cc45au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_100 = rd32(sp0 - 0x100u); goto E_100cc45a;
    case 0x100cc462u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); goto E_100cc462;
    case 0x100cc477u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108 = rd32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); goto E_100cc477;
    case 0x100cc48cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108 = rd32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc48c;
    case 0x100cc48eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108 = rd32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc48e;
    case 0x100cc4a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4a7;
    case 0x100cc4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4a9;
    case 0x100cc4bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4bb;
    case 0x100cc4c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4c2;
    case 0x100cc4cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4ca;
    case 0x100cc4d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4d1;
    case 0x100cc4d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4d7;
    case 0x100cc4ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4dd;
    case 0x100cc4eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4ea;
    case 0x100cc4f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_108_f = rdf32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc4f2;
    case 0x100cc513u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc513;
    case 0x100cc522u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc522;
    case 0x100cc53eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc53e;
    case 0x100cc547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc547;
    case 0x100cc551u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc551;
    case 0x100cc55bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc55b;
    case 0x100cc561u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc561;
    case 0x100cc567u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc567;
    case 0x100cc571u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc571;
    case 0x100cc579u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc579;
    case 0x100cc584u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc584;
    case 0x100cc58fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc58f;
    case 0x100cc596u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc596;
    case 0x100cc59bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc59b;
    case 0x100cc59fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc59f;
    case 0x100cc5abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc5ab;
    case 0x100cc5b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc5b9;
    case 0x100cc5c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc5c5;
    case 0x100cc5ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc5cc;
    case 0x100cc5d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc5d6;
    case 0x100cc5dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc5da;
    case 0x100cc5f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc5f5;
    case 0x100cc651u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc651;
    case 0x100cc667u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc667;
    case 0x100cc68du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc68d;
    case 0x100cc69bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc69b;
    case 0x100cc6b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_11c = rd32(sp0 - 0x11cu); goto E_100cc6b4;
    case 0x100cc6beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc6be;
    case 0x100cc6cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc6cb;
    case 0x100cc6deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc6de;
    case 0x100cc6e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc6e8;
    case 0x100cc6f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc6f5;
    case 0x100cc6fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc6fd;
    case 0x100cc709u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc709;
    case 0x100cc713u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc713;
    case 0x100cc717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc717;
    case 0x100cc721u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc721;
    case 0x100cc72eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc72e;
    case 0x100cc741u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc741;
    case 0x100cc74bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc74b;
    case 0x100cc758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc758;
    case 0x100cc760u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc760;
    case 0x100cc76au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc76a;
    case 0x100cc76cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc76c;
    case 0x100cc778u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc778;
    case 0x100cc782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc782;
    case 0x100cc786u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc786;
    case 0x100cc790u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc790;
    case 0x100cc79du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc79d;
    case 0x100cc7b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc7b0;
    case 0x100cc7bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc7ba;
    case 0x100cc7c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc7c7;
    case 0x100cc7cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc7cf;
    case 0x100cc7d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc7d9;
    case 0x100cc7dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc7db;
    case 0x100cc7e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc7e7;
    case 0x100cc7f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cc7f1;
    case 0x100cc7f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc7f5;
    case 0x100cc813u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc813;
    case 0x100cc828u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc828;
    case 0x100cc832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc832;
    case 0x100cc83au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc83a;
    case 0x100cc83fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc83f;
    case 0x100cc846u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc846;
    case 0x100cc84au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc84a;
    case 0x100cc854u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc854;
    case 0x100cc858u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc858;
    case 0x100cc85fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc85f;
    case 0x100cc864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc864;
    case 0x100cc86bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc86b;
    case 0x100cc870u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc870;
    case 0x100cc87du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc87d;
    case 0x100cc87fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc87f;
    case 0x100cc890u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc890;
    case 0x100cc89bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc89b;
    case 0x100cc8aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc8aa;
    case 0x100cc8b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc8b6;
    case 0x100cc8c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc8c2;
    case 0x100cc8d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc8d3;
    case 0x100cc8deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc8de;
    case 0x100cc8f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_140 = rd32(sp0 - 0x140u); goto E_100cc8f5;
    case 0x100cc906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100cc906;
    case 0x100cc924u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_10c = rd32(sp0 - 0x10cu); goto E_100cc924;
    case 0x100cc935u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_10c = rd32(sp0 - 0x10cu); goto E_100cc935;
    case 0x100cc93cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_10c = rd32(sp0 - 0x10cu); goto E_100cc93c;
    case 0x100cc93eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_140 = rd32(sp0 - 0x140u); loc_10c = rd32(sp0 - 0x10cu); goto E_100cc93e;
    case 0x100cc955u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cc955;
    case 0x100cc95cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cc95c;
    case 0x100cc967u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100cc967;
    case 0x100cc969u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc969;
    case 0x100cc973u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc973;
    case 0x100cc977u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc977;
    case 0x100cc981u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc981;
    case 0x100cc989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc989;
    case 0x100cc98du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc98d;
    case 0x100cc98fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc98f;
    case 0x100cc999u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc999;
    case 0x100cc99du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc99d;
    case 0x100cc9a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9a4;
    case 0x100cc9acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9ac;
    case 0x100cc9b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9b0;
    case 0x100cc9b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9b4;
    case 0x100cc9c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9c0;
    case 0x100cc9c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9c7;
    case 0x100cc9cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9ca;
    case 0x100cc9d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9d5;
    case 0x100cc9dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9dc;
    case 0x100cc9e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9e1;
    case 0x100cc9e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cc9e9;
    case 0x100cca01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca01;
    case 0x100cca08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca08;
    case 0x100cca0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca0f;
    case 0x100cca19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cca19;
    case 0x100cca2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca2a;
    case 0x100cca41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca41;
    case 0x100cca4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cca4b;
    case 0x100cca58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca58;
    case 0x100cca63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca63;
    case 0x100cca6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca6e;
    case 0x100cca75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca75;
    case 0x100cca7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca7a;
    case 0x100cca84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca84;
    case 0x100cca86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca86;
    case 0x100cca91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca91;
    case 0x100cca98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca98;
    case 0x100cca9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100cca9d;
    case 0x100ccaa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccaa5;
    case 0x100ccab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccab1;
    case 0x100ccac3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccac3;
    case 0x100ccacdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccacd;
    case 0x100ccacfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccacf;
    case 0x100ccadbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccadb;
    case 0x100ccae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccae5;
    case 0x100ccae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccae9;
    case 0x100ccaf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccaf3;
    case 0x100ccb00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb00;
    case 0x100ccb13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb13;
    case 0x100ccb1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccb1d;
    case 0x100ccb2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb2a;
    case 0x100ccb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb32;
    case 0x100ccb3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccb3c;
    case 0x100ccb3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb3e;
    case 0x100ccb4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb4a;
    case 0x100ccb54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccb54;
    case 0x100ccb58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb58;
    case 0x100ccb62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccb62;
    case 0x100ccb6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb6f;
    case 0x100ccb82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb82;
    case 0x100ccb8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccb8c;
    case 0x100ccb99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccb99;
    case 0x100ccba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccba1;
    case 0x100ccbabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccbab;
    case 0x100ccbadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccbad;
    case 0x100ccbb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccbb9;
    case 0x100ccbc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ccbc3;
    case 0x100ccbc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100ccbc7;
    case 0x100ccbe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_140 = rd32(sp0 - 0x140u); goto E_100ccbe5;
    case 0x100ccbfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccbfa;
    case 0x100ccc04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc04;
    case 0x100ccc0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc0c;
    case 0x100ccc11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc11;
    case 0x100ccc18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc18;
    case 0x100ccc1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc1c;
    case 0x100ccc26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc26;
    case 0x100ccc2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc2a;
    case 0x100ccc31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc31;
    case 0x100ccc36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc36;
    case 0x100ccc3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc3d;
    case 0x100ccc42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc42;
    case 0x100ccc4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_140 = rd32(sp0 - 0x140u); goto E_100ccc4f;
    case 0x100ccc51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc51;
    case 0x100ccc62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc62;
    case 0x100ccc6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc6d;
    case 0x100ccc77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc77;
    case 0x100ccc7du: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc7d;
    case 0x100ccc87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc87;
    case 0x100ccc93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc93;
    case 0x100ccc9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccc9f;
    case 0x100ccca1u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccca1;
    case 0x100cccabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100cccab;
    case 0x100cccb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100cccb7;
    case 0x100cccc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_140 = rd32(sp0 - 0x140u); goto E_100cccc3;
    case 0x100cccd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100cccd4;
    case 0x100cccdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100cccdf;
    case 0x100cccf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_140 = rd32(sp0 - 0x140u); goto E_100cccf6;
    case 0x100ccd0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccd0e;
    case 0x100ccd29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccd29;
    case 0x100ccd31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccd31;
    case 0x100ccd3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccd3c;
    case 0x100ccd51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccd51;
    case 0x100ccd59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccd59;
    case 0x100ccd63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccd63;
    case 0x100ccd6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100ccd6c;
    case 0x100ccd78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100ccd78;
    case 0x100ccd82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100ccd82;
    case 0x100ccd8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100ccd8b;
    case 0x100ccd94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100ccd94;
    case 0x100ccd9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_140 = rd32(sp0 - 0x140u); goto E_100ccd9e;
    case 0x100ccda8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100ccda8;
    case 0x100ccdb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100ccdb3;
    case 0x100ccdc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100ccdc6;
    case 0x100ccdc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100ccdc8;
    case 0x100ccddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100ccddc;
    case 0x100ccde7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100ccde7;
    case 0x100ccdfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100ccdfa;
    case 0x100cce00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cce00;
    case 0x100cce0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cce0e;
    default: break;
    }
#endif

    COW_AT(100cbde0)
    wr32(sp0 - 0x130u, in_ebx);
    wr32(sp0 - 0x134u, in_ebp);
    wr32(sp0 - 0x138u, in_esi);
    wr32(sp0 - 0x13cu, in_edi);
    wr32(sp0 - 0x128u, 0u);
    wr32(sp0 - 0x120u, 0u);
    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
        loc_128 = 0u;
        loc_120 = 0u;
    }
    else
    {
        eax = rd32(self + 0x70u);
    COW_AT(100cbe02)
        t1 = rd32(eax + 0x12cu) >> 0x11u & 1u;
        wr32(sp0 - 0x128u, t1);
        t2 = rd8(eax + 0x130u) & 1u;
        wr32(sp0 - 0x120u, t2);
        eax = t2;
        loc_128 = t1;
        loc_120 = t2;
    }
    COW_AT(100cbe1d)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x13cu;
    t3 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(100cbe28)
    wr32(sp0 - 0xf0u, rd32(eax));
    if (rd32(eax) != 0u)
    {
        ebp = rd32(eax);
        loc_f0 = rd32(eax);
        goto L_100cbe59;
    }
    COW_AT(100cbe32)
    t5 = rd8(self + 0xb2u);
    wr8(self + 0xb0u, 1u);
    wr8(self + 0xb2u, (uint8_t)(t5 | 1u));
    g->esp = sp0 - 0x13cu;
    cow_fastcall(g, COW_IMG(0x100cce60u), self, edx, 0);
    COW_AT(100cbe4e)
    g->ebx = rd32(sp0 - 0x130u);
    g->esi = rd32(sp0 - 0x138u);
    g->edi = rd32(sp0 - 0x13cu);
    g->ebp = rd32(sp0 - 0x134u);
    return;
L_100cbe59: ;
    COW_AT(100cbe59)
    t6 = rd32(self + 0x70u);
    wr8(sp0 - 0x129u, 0u);
    wr8(sp0 - 0x121u, 0u);
    if (t6 == 0u)
    {
        eax = t6;
    }
    else
    {
        eax = t6;
    COW_AT(100cbe6a)
        t7 = rd32(eax + 0x120u);
        if (t7 >> 7u & 1u)
        {
            edx = t7 >> 7u;
            goto L_100cbe82;
        }
        ecx = t7;
        edx = t7 >> 7u;
    COW_AT(100cbe7a)
        if (!(ecx >> 8u & 1u)) goto L_100cbe87;
L_100cbe82: ;
    COW_AT(100cbe82)
        wr8(sp0 - 0x129u, 1u);
L_100cbe87: ;
    COW_AT(100cbe87)
        if (!(rd32(eax + 0x12cu) >> 0x1bu & 1u))
        {
            eax = rd32(eax + 0x12cu) >> 0x1bu;
        }
        else
        {
            eax = rd32(eax + 0x12cu) >> 0x1bu;
    COW_AT(100cbe94)
            g->eax = eax;
            g->esp = sp0 - 0x13cu;
            t8 = cow_fastcall(g, COW_IMG(0x100845b0u), self, edx, 0);
            t9 = g->edx;
            eax = t8;
            edx = t9;
    COW_AT(100cbe9b)
            if (eax != 0u) goto L_100cbeaa;
    COW_AT(100cbe9f)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x13cu;
            t10 = cow_thiscall(g, COW_IMG(0x10084580u), self, 0);
            t11 = g->edx;
            eax = t10;
            edx = t11;
    COW_AT(100cbea6)
            if (eax == 0u)
            {
                loc_f0 = rd32(sp0 - 0xf0u);
                goto L_100cbeaf;
            }
L_100cbeaa: ;
    COW_AT(100cbeaa)
            wr8(sp0 - 0x121u, 1u);
            loc_f0 = rd32(sp0 - 0xf0u);
        }
    }
L_100cbeaf: ;
    COW_AT(100cbeaf)
    wr32(sp0 - 0x140u, COW_IMG(0x104574b8u));
    wr32(sp0 - 0x144u, 0x100u);
    t12 = rd32(COW_IMG(0x1045666cu));
    wr8(COW_IMG(0x10457460u), 1u);
    wr8(COW_IMG(0x104570fcu), 0u);
    wr8(COW_IMG(0x104572b0u), 0u);
    wr8(COW_IMG(0x104570f0u), 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t13 = cow_thiscall(g, COW_IMG(0x1000bd50u), t12, 2, 0x100u, COW_IMG(0x104574b8u));
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(100cbee0)
    wr32(sp0 - 0x140u, COW_IMG(0x104574b8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t15 = cow_thiscall(g, COW_IMG(0x100279f0u), COW_IMG(0x1045b780u), 1, COW_IMG(0x104574b8u));
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(100cbeef)
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t17 = cow_bridge_indirect(g, COW_IMG(0x100cb4e0u), 0u, 32u, (const uint32_t[]){rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u)}, self, g->edx, eax, 128u);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(100cbef6)
    d20 = (double)rdf32(self + 0x664u);
    if ((cow_fsw(g, d20, (double)rdf32(COW_IMG(0x10329a34u)), 1u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d20, (double)rdf32(COW_IMG(0x10329a34u)), 1u) & 0x100u;
        edi = rd32(self + 0x660u) & 0xffffffu;
        x0 = d20;
    COW_AT(100cbf21)
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1033138cu)));
    }
    else
    {
        eax = cow_fsw(g, d20, (double)rdf32(COW_IMG(0x10329a34u)), 1u) & 0x100u;
        edi = rd32(self + 0x660u) & 0xffffffu;
        x0 = d20;
    COW_AT(100cbf17)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(100cbf27)
    d21 = fr(g, x0 * (double)rdf32(self + 0x59cu));
    if ((cow_fsw(g, d21, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d21, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
        x0 = d21;
    }
    else
    {
        eax = cow_fsw(g, d21, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
        x0 = d21;
    COW_AT(100cbf3c)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(100cbf44)
    d22 = fr(g, (double)rdf32(COW_IMG(0x1032ae60u)) * x0);
    fpush(g, d22);
    g->esp = sp0 - 0x13cu;
    t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t23;
    COW_AT(100cbf51)
    t24 = edi | eax << 0x18u;
    wr32(sp0 - 0x11cu, t24);
    if (x0 < (double)rdf32(COW_IMG(0x1032a1a8u)))
    {
        eax = eax << 0x18u | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u);
        goto L_100cc6b4;
    }
    eax = eax << 0x18u | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u);
    loc_11c = t24;
    COW_AT(100cbf6b)
    g->eax = eax;
    g->esp = sp0 - 0x13cu;
    t25 = cow_thiscall(g, rd32(rd32(self) + 0x3e0u), self, 0);
    eax = t25;
    COW_AT(100cbf75)
    wr16(COW_IMG(0x1045b814u), (uint16_t)eax);
    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u) != 0x21u)
    {
        eax = rd32(COW_IMG(0x1065cb04u));
        goto L_100cbfaf;
    }
    eax = rd32(COW_IMG(0x1065cb04u));
    COW_AT(100cbf89)
    g->eax = eax;
    g->edx = rd32(self);
    t26 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t27 = cow_thiscall(g, rd32(t26 + 0x218u), self, 0);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(100cbf93)
    if (eax == 8u) goto L_100cc2dc;
    COW_AT(100cbf9c)
    g->eax = rd32(self);
    g->edx = edx;
    t30 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t31 = cow_thiscall(g, rd32(t30 + 0x218u), self, 0);
    t32 = g->ecx;
    t33 = g->edx;
    eax = t31;
    ecx = t32;
    edx = t33;
    COW_AT(100cbfa6)
    if (eax == 9u) goto L_100cc2dc;
L_100cbfaf: ;
    COW_AT(100cbfaf)
    g->eax = eax;
    g->edx = rd32(self);
    t34 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t35 = cow_thiscall(g, rd32(t34 + 0x40u), self, 0);
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(100cbfb6)
    if (eax == 0u) goto L_100cc2dc;
    COW_AT(100cbfbe)
    if (rd32(COW_IMG(0x10456accu)) == 1u) goto L_100cc2dc;
    COW_AT(100cbfca)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t38 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(100cbfcf)
    wr32(sp0 - 0x140u, eax + 0x44u);
    g->eax = rd32(self);
    g->edx = edx;
    t40 = rd32(self);
    g->esp = sp0 - 0x140u;
    t41 = cow_thiscall(g, rd32(t40 + 0x1bcu), self, 0);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(100cbfdd)
    wr32(sp0 - 0x144u, eax);
    wr32(sp0 - 0x148u, sp0 - 0xecu);
    g->eax = eax;
    g->ecx = sp0 - 0xecu;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t43 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xecu, eax, rd32(sp0 - 0x140u));
    t44 = g->ecx;
    t45 = g->edx;
    eax = t43;
    ecx = t44;
    edx = t45;
    COW_AT(100cbfe8)
    d46 = (double)rdf32(sp0 - 0xe8u);
    if (d46 < (double)rdf32(COW_IMG(0x1032c084u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x1032c084u)), 0u);
        goto L_100cc2dc;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x1032c084u)), 0u);
    COW_AT(100cc000)
    if (rd32(COW_IMG(0x10456accu)) != 2u) goto L_100cc020;
    COW_AT(100cc009)
    if ((double)rdf32(COW_IMG(0x1045b80cu)) < (double)rdf32(COW_IMG(0x10331380u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1045b80cu)), (double)rdf32(COW_IMG(0x10331380u)), 0u);
        goto L_100cc11d;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1045b80cu)), (double)rdf32(COW_IMG(0x10331380u)), 0u);
L_100cc020: ;
    COW_AT(100cc020)
    d47 = (double)rdf32(self + 0xbcu);
    wrf32(COW_IMG(0x1045b80cu), (float)d47);
    g->eax = eax;
    g->edx = rd32(self);
    t48 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t49 = cow_thiscall(g, rd32(t48 + 0x304u), self, 0);
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(100cc036)
    if ((uint8_t)eax == 0u) goto L_100cc07a;
    COW_AT(100cc03a)
    if (rd32(self + 0x768u) == 0u) goto L_100cc11d;
    edi = rd32(self + 0x768u);
    COW_AT(100cc048)
    g->eax = rd32(edi);
    g->edx = edx;
    t52 = rd32(edi);
    g->esp = sp0 - 0x13cu;
    t53 = cow_thiscall(g, rd32(t52 + 0x34cu), edi, 0);
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(100cc052)
    if (eax != 0u) goto L_100cc2dc;
    COW_AT(100cc05a)
    g->eax = eax;
    g->edx = rd32(edi);
    t56 = rd32(edi);
    g->esp = sp0 - 0x13cu;
    t57 = cow_thiscall(g, rd32(t56 + 0x358u), edi, 0);
    t58 = g->ecx;
    t59 = g->edx;
    eax = t57;
    ecx = t58;
    edx = t59;
    COW_AT(100cc064)
    if (eax == 0u) goto L_100cc11d;
    COW_AT(100cc06c)
    wr16(COW_IMG(0x1045b77au), 3u);
L_100cc18d: ;
    COW_AT(100cc18d)
    if (rd8(COW_IMG(0x1048a328u)) & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048a328u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048a328u));
    COW_AT(100cc196)
        wr32(sp0 - 0x140u, COW_IMG(0x100cce50u));
        wr32(COW_IMG(0x1048a318u), 0u);
        wr8(COW_IMG(0x1048a328u), (uint8_t)(eax | 1u));
        wr32(COW_IMG(0x1048a31cu), 0u);
        wr32(COW_IMG(0x1048a320u), 0x40800000u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x13cu;
        t112 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100cce50u));
        t113 = g->ecx;
        t114 = g->edx;
        eax = t112;
        ecx = t113;
        edx = t114;
    COW_AT(100cc1c9)
    }
    COW_AT(100cc1cc)
    if ((rd8(COW_IMG(0x1048a328u)) & 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048a328u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048a328u));
    COW_AT(100cc1d5)
        wr32(sp0 - 0x140u, COW_IMG(0x100cce40u));
        wr32(COW_IMG(0x1048a30cu), 0u);
        wr8(COW_IMG(0x1048a328u), (uint8_t)(eax | 2u));
        wr32(COW_IMG(0x1048a310u), 0u);
        wr32(COW_IMG(0x1048a314u), 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 2u);
        g->esp = sp0 - 0x13cu;
        t115 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100cce40u));
        t116 = g->ecx;
        t117 = g->edx;
        eax = t115;
        ecx = t116;
        edx = t117;
    COW_AT(100cc208)
    }
    COW_AT(100cc20b)
    if ((rd8(COW_IMG(0x1048a328u)) & 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048a328u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048a328u));
    COW_AT(100cc214)
        wr32(sp0 - 0x140u, COW_IMG(0x100cce30u));
        wr32(COW_IMG(0x1048a338u), 0u);
        wr8(COW_IMG(0x1048a328u), (uint8_t)(eax | 4u));
        wr32(COW_IMG(0x1048a33cu), 0xbf800000u);
        wr32(COW_IMG(0x1048a340u), 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 4u);
        g->esp = sp0 - 0x13cu;
        t118 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100cce30u));
        t119 = g->ecx;
        t120 = g->edx;
        eax = t118;
        ecx = t119;
        edx = t120;
    COW_AT(100cc247)
    }
    COW_AT(100cc24a)
    if ((rd8(COW_IMG(0x1048a328u)) & 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048a328u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048a328u));
    COW_AT(100cc253)
        wr32(sp0 - 0x140u, COW_IMG(0x100cce20u));
        wr32(COW_IMG(0x1048a32cu), 0u);
        wr8(COW_IMG(0x1048a328u), (uint8_t)(eax | 8u));
        wr32(COW_IMG(0x1048a330u), 0xbf800000u);
        wr32(COW_IMG(0x1048a334u), 0u);
        g->eax = eax;
        g->esp = sp0 - 0x13cu;
        t121 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100cce20u));
        eax = t121;
    COW_AT(100cc286)
    }
    COW_AT(100cc289)
    g->eax = eax;
    g->edx = rd32(self);
    t122 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t123 = cow_thiscall(g, rd32(t122 + 0x404u), self, 0);
    t124 = g->ecx;
    t125 = g->edx;
    eax = t123;
    ecx = t124;
    edx = t125;
    COW_AT(100cc293)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(100cc2ea)
        if (rd32(rd32(COW_IMG(0x1048a308u))) == 1u)
        {
            eax = rd32(rd32(COW_IMG(0x1048a308u))) - 1u;
    COW_AT(100cc312)
            g->eax = eax;
            g->edx = rd32(self);
            t130 = rd32(self);
            g->esp = sp0 - 0x13cu;
            t131 = cow_thiscall(g, rd32(t130 + 0x1bcu), self, 0);
            t132 = g->edx;
            eax = t131;
            edx = t132;
    COW_AT(100cc31c)
            wr32(sp0 - 0x140u, eax);
            t133 = rd32(COW_IMG(0x1048a308u)) + 0x34u;
            wr32(sp0 - 0x144u, t133);
            wr32(sp0 - 0x148u, sp0 - 0xecu);
            g->eax = t133;
            g->esp = sp0 - 0x13cu;
            t134 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xecu, t133, eax);
            eax = t134;
    COW_AT(100cc330)
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1048a308u))) - 1u;
            ecx = rd32(COW_IMG(0x1048a308u));
    COW_AT(100cc2f5)
            d127 = (double)(float)-(double)rdf32(ecx + 0x40u);
            wrf32(sp0 - 0xecu, (float)d127);
            d128 = (double)(float)-(double)rdf32(ecx + 0x44u);
            wrf32(sp0 - 0xe8u, (float)d128);
            d129 = (double)(float)-(double)rdf32(ecx + 0x48u);
            wrf32(sp0 - 0xe4u, (float)d129);
        }
    }
    else
    {
    COW_AT(100cc297)
        wr32(sp0 - 0x140u, COW_IMG(0x1048a32cu));
        wr32(sp0 - 0x144u, sp0 - 0xecu);
        g->eax = sp0 - 0xecu;
        g->esp = sp0 - 0x13cu;
        t126 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xecu, COW_IMG(0x1048a32cu));
        eax = t126;
    COW_AT(100cc2a6)
    }
    COW_AT(100cc333)
    wr32(sp0 - 0x140u, sp0 - 0xecu);
    g->edx = sp0 - 0xecu;
    g->esp = sp0 - 0x13cu;
    cow_call_regs(g, COW_IMG(0x10033ea0u), eax, self + 0x6bcu, g->edx, 0, 1, sp0 - 0xecu);
    t135 = g->edx;
    edx = t135;
    COW_AT(100cc343)
    g->eax = rd32(self);
    g->edx = edx;
    t136 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t137 = cow_thiscall(g, rd32(t136 + 0x1bcu), self, 0);
    t138 = g->ecx;
    t139 = g->edx;
    eax = t137;
    ecx = t138;
    edx = t139;
    COW_AT(100cc353)
    wr32(sp0 - 0x140u, eax);
    wr32(sp0 - 0x144u, COW_IMG(0x1048a30cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t140 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x1048a30cu), eax);
    t141 = g->ecx;
    t142 = g->edx;
    eax = t140;
    ecx = t141;
    edx = t142;
    COW_AT(100cc35e)
    wr32(sp0 - 0x148u, self + 0x6d0u);
    wr32(sp0 - 0x14cu, COW_IMG(0x1048a30cu));
    wr32(sp0 - 0x150u, COW_IMG(0x1048a318u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x144u;
    t143 = cow_cdecl(g, COW_IMG(0x10027120u), 3, COW_IMG(0x1048a318u), COW_IMG(0x1048a30cu), self + 0x6d0u);
    t144 = g->ecx;
    t145 = g->edx;
    eax = t143;
    ecx = t144;
    edx = t145;
    COW_AT(100cc36e)
    wr32(sp0 - 0x140u, COW_IMG(0x1048a338u));
    wr32(sp0 - 0x144u, COW_IMG(0x1048a30cu));
    wr32(sp0 - 0x148u, COW_IMG(0x1048a318u));
    wr32(sp0 - 0x14cu, COW_IMG(0x1045b7c0u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t146 = cow_stdcall(g, COW_IMG(0x102d8019u), 4, COW_IMG(0x1045b7c0u), COW_IMG(0x1048a318u), COW_IMG(0x1048a30cu), COW_IMG(0x1048a338u));
    t147 = g->edx;
    eax = t146;
    edx = t147;
    COW_AT(100cc38a)
    g->eax = eax;
    g->esp = sp0 - 0x13cu;
    t148 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xc0u, 0);
    eax = t148;
    COW_AT(100cc393)
    wr32(sp0 - 0x140u, self + 0x918u);
    wr32(sp0 - 0x144u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, COW_IMG(0x100282c0u), COW_IMG(0x1045b7c0u), 2, sp0 - 0x80u, self + 0x918u);
    t149 = g->edx;
    edx = t149;
    COW_AT(100cc3ac)
    wr32(sp0 - 0x140u, sp0 - 0x80u);
    wr32(sp0 - 0x144u, sp0 - 0x118u);
    g->ecx = sp0 - 0x118u;
    g->esp = sp0 - 0x13cu;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x118u, sp0 - 0x80u);
    t150 = g->ecx;
    ecx = t150;
    COW_AT(100cc3be)
    wr32(sp0 - 0x148u, sp0 - 0x80u);
    wr32(sp0 - 0x14cu, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x144u;
    t151 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x100u, sp0 - 0x80u);
    t152 = g->edx;
    eax = t151;
    edx = t152;
    COW_AT(100cc3d0)
    wr32(sp0 - 0x108u, 7u);
    ebp = self + 0x928u;
    edi = sp0 - 0x70u;
    loc_108 = 7u;
    loc_118 = rd32(sp0 - 0x118u);
    loc_114 = rd32(sp0 - 0x114u);
    loc_100 = rd32(sp0 - 0x100u);
    loc_fc = rd32(sp0 - 0xfcu);
L_100cc3e8: ;
    COW_AT(100cc3e8)
    wr32(sp0 - 0x140u, ebp);
    wr32(sp0 - 0x144u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t153 = cow_thiscall(g, COW_IMG(0x100282c0u), COW_IMG(0x1045b7c0u), 2, edi, ebp);
    t154 = g->edx;
    eax = t153;
    edx = t154;
    COW_AT(100cc3f4)
    wr32(sp0 - 0x140u, edi);
    wr32(sp0 - 0x144u, sp0 - 0xe0u);
    g->eax = eax;
    g->ecx = sp0 - 0xe0u;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t155 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xe0u, edi);
    t156 = g->ecx;
    t157 = g->edx;
    eax = t155;
    ecx = t156;
    edx = t157;
    COW_AT(100cc3ff)
    d158 = (double)rdf32(sp0 - 0x118u);
    d159 = (double)rdf32(sp0 - 0xe0u);
    if (d158 < d159)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d158, d159, 0u);
        loc_118 = rd32(sp0 - 0x118u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d158, d159, 0u);
    COW_AT(100cc411)
        t160 = rd32(sp0 - 0xe0u);
        wr32(sp0 - 0x118u, t160);
        edx = t160;
        loc_118 = t160;
    }
    COW_AT(100cc419)
    d161 = (double)rdf32(sp0 - 0x114u);
    d162 = (double)rdf32(sp0 - 0xdcu);
    if (d161 < d162)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d161, d162, 0u);
        loc_114 = rd32(sp0 - 0x114u);
    }
    else
    {
    COW_AT(100cc428)
        t163 = rd32(sp0 - 0xdcu);
        wr32(sp0 - 0x114u, t163);
        eax = t163;
        loc_114 = t163;
    }
    COW_AT(100cc430)
    d164 = (double)rdf32(sp0 - 0x100u);
    d165 = (double)rdf32(sp0 - 0xe0u);
    if ((cow_fsw(g, d164, d165, 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d164, d165, 0u) & 0x4100u;
        loc_100 = rd32(sp0 - 0x100u);
    }
    else
    {
        eax = cow_fsw(g, d164, d165, 0u) & 0x4100u;
    COW_AT(100cc441)
        t166 = rd32(sp0 - 0xe0u);
        wr32(sp0 - 0x100u, t166);
        ecx = t166;
        loc_100 = t166;
    }
    COW_AT(100cc449)
    d167 = (double)rdf32(sp0 - 0xfcu);
    d168 = (double)rdf32(sp0 - 0xdcu);
    if ((cow_fsw(g, d167, d168, 0u) & 0x4100u) == 0u)
    {
        loc_fc = rd32(sp0 - 0xfcu);
    }
    else
    {
    COW_AT(100cc45a)
        t169 = rd32(sp0 - 0xdcu);
        wr32(sp0 - 0xfcu, t169);
        edx = t169;
        loc_fc = t169;
    }
    COW_AT(100cc462)
    t170 = rd32(sp0 - 0x108u) - 1u;
    t171 = rd32(sp0 - 0x108u);
    wr32(sp0 - 0x108u, t170);
    if (t171 != 1u)
    {
        eax = t170;
        ebp = ebp + 0x10u;
        edi = edi + 0x10u;
        loc_108 = t170;
        goto L_100cc3e8;
    }
    eax = t170;
    COW_AT(100cc477)
    d172 = fr(g, cow_bits2f(loc_100) - cow_bits2f(loc_118));
    if (!(d172 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d172, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d172;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d172, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d172;
    COW_AT(100cc48c)
        x0 = -x0;
    }
    COW_AT(100cc48e)
    wrf32(sp0 - 0x108u, (float)(double)(float)x0);
    d173 = fr(g, cow_bits2f(loc_fc) - cow_bits2f(loc_114));
    if (!(d173 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d173, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        loc_108_f = (double)(float)x0;
        x0 = d173;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d173, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        loc_108_f = (double)(float)x0;
        x0 = d173;
    COW_AT(100cc4a7)
        x0 = -x0;
    }
    COW_AT(100cc4a9)
    if (rd16(COW_IMG(0x1045b77au)) != 1u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_108_f, x0, 1u);
    COW_AT(100cc4ca)
        if ((eax & 0x4100u) != 0u)
        {
            eax = eax & 0x4100u;
        }
        else
        {
            eax = eax & 0x4100u;
    COW_AT(100cc4d1)
            x0 = loc_108_f;
        }
    COW_AT(100cc4d7)
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x10331388u)));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_108_f, x0, 1u);
    COW_AT(100cc4bb)
        if ((eax & 0x4100u) != 0u)
        {
            eax = eax & 0x4100u;
        }
        else
        {
            eax = eax & 0x4100u;
    COW_AT(100cc4c2)
            x0 = loc_108_f;
        }
    }
    COW_AT(100cc4dd)
    if (!(x0 < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
    COW_AT(100cc4ea)
        x0 = (double)rdf32(COW_IMG(0x10329a18u));
    }
    COW_AT(100cc4f2)
    wrf32(COW_IMG(0x1045b810u), (float)x0);
    d174 = fr(g, (double)rdf32(COW_IMG(0x1045b810u)) * (double)rdf32(COW_IMG(0x10331384u)));
    wr32(sp0 - 0x140u, ecx);
    wrf32(sp0 - 0x140u, (float)(double)(float)d174);
    wr32(sp0 - 0x144u, self + 0x6d0u);
    wr32(sp0 - 0x148u, COW_IMG(0x1048a318u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t175 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, COW_IMG(0x1048a318u), self + 0x6d0u, cow_f2bits((double)(float)d174));
    t176 = g->ecx;
    t177 = g->edx;
    eax = t175;
    ecx = t176;
    edx = t177;
    COW_AT(100cc513)
    wr32(sp0 - 0x14cu, COW_IMG(0x1048a30cu));
    wr32(sp0 - 0x150u, COW_IMG(0x1048a318u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x148u;
    t178 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, COW_IMG(0x1048a318u), COW_IMG(0x1048a30cu));
    t179 = g->ecx;
    t180 = g->edx;
    eax = t178;
    ecx = t179;
    edx = t180;
    COW_AT(100cc522)
    wr32(sp0 - 0x140u, COW_IMG(0x1048a338u));
    wr32(sp0 - 0x144u, COW_IMG(0x1048a30cu));
    wr32(sp0 - 0x148u, COW_IMG(0x1048a318u));
    wr32(sp0 - 0x14cu, COW_IMG(0x1045b7c0u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t181 = cow_stdcall(g, COW_IMG(0x102d8019u), 4, COW_IMG(0x1045b7c0u), COW_IMG(0x1048a318u), COW_IMG(0x1048a30cu), COW_IMG(0x1048a338u));
    t182 = g->edx;
    eax = t181;
    edx = t182;
    COW_AT(100cc53e)
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t183 = g->edx;
    edx = t183;
    COW_AT(100cc547)
    g->eax = rd32(self);
    g->edx = edx;
    t184 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t185 = cow_thiscall(g, rd32(t184 + 0x304u), self, 0);
    t186 = g->edx;
    eax = t185;
    edx = t186;
    COW_AT(100cc551)
    if ((uint8_t)eax != 0u) goto L_100cc9e9;
    COW_AT(100cc55b)
    if (rd32(sp0 - 0x128u) != 0u) goto L_100cc5ab;
    COW_AT(100cc561)
    if (rd32(sp0 - 0x120u) != 0u) goto L_100cc5ab;
    COW_AT(100cc567)
    if (rd8(self + 0x9f8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x9f8u);
        goto L_100cc5cc;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x9f8u);
    COW_AT(100cc571)
    if (rd8(sp0 - 0x129u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x129u);
        goto L_100cc5cc;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x129u);
    COW_AT(100cc579)
    if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x4cu) != 0u) goto L_100cc5cc;
    ecx = rd32(COW_IMG(0x103d3cb8u));
    COW_AT(100cc584)
    g->eax = eax;
    t187 = rd32(self + 0x9f0u);
    g->esp = sp0 - 0x13cu;
    t188 = cow_stdcall(g, COW_IMG(0x10014d50u), 0);
    eax = t188;
    edi = t187;
    COW_AT(100cc58f)
    if ((int32_t)(eax & 0x80000003u) >= 0)
    {
        eax = eax & 0x80000003u;
    }
    else
    {
        eax = eax & 0x80000003u;
    COW_AT(100cc596)
        eax = (eax - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(100cc59b)
    if (eax == edi) goto L_100cc5cc;
    COW_AT(100cc59f)
    if (rd32(self + 0x9f4u) == 0u) goto L_100cc69b;
L_100cc5ab: ;
    COW_AT(100cc5ab)
    if (rd8(self + 0xa04u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xa04u);
        goto L_100cc967;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xa04u);
    COW_AT(100cc5b9)
    if (rd8(sp0 - 0x129u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x129u);
        goto L_100cc967;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x129u);
    COW_AT(100cc5c5)
    ebx = (self + 0x6d0u & 0xffffff00u) | 1u;
L_100cc969: ;
    COW_AT(100cc969)
    g->eax = eax;
    g->edx = rd32(self);
    t213 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t214 = cow_thiscall(g, rd32(t213 + 0x34cu), self, 0);
    t215 = g->edx;
    eax = t214;
    edx = t215;
    COW_AT(100cc973)
    if (eax != 0u)
    {
    COW_AT(100cc977)
        if (rd32(self + 0x768u) != 0u)
        {
            ecx = rd32(self + 0x768u);
    COW_AT(100cc981)
            g->eax = rd32(ecx);
            t216 = rd32(ecx);
            g->esp = sp0 - 0x13cu;
            t217 = cow_thiscall(g, rd32(t216 + 0x304u), ecx, 0);
            eax = t217;
    COW_AT(100cc989)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(100cc98d)
                ebx = ebx & 0xffffff00u;
            }
        }
    }
    COW_AT(100cc98f)
    g->eax = eax;
    g->edx = rd32(self);
    t218 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t219 = cow_thiscall(g, rd32(t218 + 0x358u), self, 0);
    t220 = g->edx;
    eax = t219;
    edx = t220;
    COW_AT(100cc999)
    if (eax != 0u) goto L_100cc9e9;
    COW_AT(100cc99d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t221 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t222 = g->edx;
    eax = t221;
    edx = t222;
    COW_AT(100cc9a4)
    wr32(sp0 - 0x140u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t223 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    t224 = g->ecx;
    t225 = g->edx;
    eax = t223;
    ecx = t224;
    edx = t225;
    COW_AT(100cc9ac)
    if ((uint8_t)eax != 0u) goto L_100cc9e9;
    COW_AT(100cc9b0)
    if ((uint8_t)ebx == 0u) goto L_100cc9e9;
    COW_AT(100cc9b4)
    if (rd32(COW_IMG(0x10456c00u)) == 1u)
    {
        eax = rd32(COW_IMG(0x10456c00u)) - 1u;
        goto L_100cca86;
    }
    eax = rd32(COW_IMG(0x10456c00u)) - 1u;
    COW_AT(100cc9c0)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_100cca63;
    }
    eax = eax - 1u;
    COW_AT(100cc9c7)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100cc9e9;
    }
    eax = eax - 1u;
    COW_AT(100cc9ca)
    g->eax = eax;
    g->edx = edx;
    t226 = rd32(self + 0x9fcu);
    g->esp = sp0 - 0x13cu;
    t227 = cow_stdcall(g, COW_IMG(0x10014d50u), 0);
    t228 = g->edx;
    eax = t227;
    edx = t228;
    edi = t226;
    COW_AT(100cc9d5)
    if ((int32_t)(eax & 0x80000003u) >= 0)
    {
        eax = eax & 0x80000003u;
    }
    else
    {
        eax = eax & 0x80000003u;
    COW_AT(100cc9dc)
        eax = (eax - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(100cc9e1)
    if (eax != edi) goto L_100ccaa5;
L_100cc9e9: ;
    COW_AT(100cc9e9)
    wr8(self + 0xa04u, 0u);
    wr8(COW_IMG(0x10457460u), 1u);
    wr32(self + 0xa00u, 1u);
L_100cca01: ;
    COW_AT(100cca01)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t235 = cow_thiscall(g, COW_IMG(0x100d5b10u), self, 0);
    t236 = g->edx;
    eax = t235;
    edx = t236;
    COW_AT(100cca08)
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    cow_call_regs(g, COW_IMG(0x100d6d30u), eax, self, g->edx, 1, 0);
    t237 = g->edx;
    edx = t237;
    COW_AT(100cca0f)
    g->eax = rd32(self);
    g->edx = edx;
    t238 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t239 = cow_thiscall(g, rd32(t238 + 0x110u), self, 0);
    t240 = g->edx;
    d241 = cow_take_float(g);
    eax = t239;
    edx = t240;
    x0 = d241;
    COW_AT(100cca19)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100ccadb;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cca2a)
    d242 = (double)rdf32(self + 0x760u);
    if (!(d242 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100ccacf;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d242, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cca41)
    g->eax = eax;
    g->edx = rd32(self);
    t243 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t244 = cow_thiscall(g, rd32(t243 + 0x110u), self, 0);
    t245 = g->edx;
    d246 = cow_take_float(g);
    eax = t244;
    edx = t245;
    x0 = d246;
    COW_AT(100cca4b)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100ccac3)
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
        t247 = g->edx;
        d248 = cow_take_float(g);
        edx = t247;
        x0 = d248;
    COW_AT(100ccacd)
    }
    else
    {
    COW_AT(100cca58)
        x0 = (double)rdf32(self + 0x754u);
    }
L_100ccae5: ;
    COW_AT(100ccae5)
    wrf32(sp0 - 0x128u, (float)(double)(float)x0);
L_100ccae9: ;
    COW_AT(100ccae9)
    g->eax = rd32(self);
    g->edx = edx;
    t253 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t254 = cow_thiscall(g, rd32(t253 + 0x110u), self, 0);
    t255 = g->edx;
    d256 = cow_take_float(g);
    eax = t254;
    edx = t255;
    x0 = d256;
    COW_AT(100ccaf3)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100ccb4a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100ccb00)
    d257 = (double)rdf32(self + 0x75cu);
    if (!(d257 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100ccb3e;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d257, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100ccb13)
    g->eax = eax;
    g->edx = rd32(self);
    t258 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t259 = cow_thiscall(g, rd32(t258 + 0x110u), self, 0);
    t260 = g->edx;
    d261 = cow_take_float(g);
    eax = t259;
    edx = t260;
    x0 = d261;
    COW_AT(100ccb1d)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100ccb32)
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
        t262 = g->edx;
        d263 = cow_take_float(g);
        edx = t262;
        x0 = d263;
    COW_AT(100ccb3c)
    }
    else
    {
    COW_AT(100ccb2a)
        x0 = (double)rdf32(self + 0x754u);
    }
L_100ccb54: ;
    COW_AT(100ccb54)
    wrf32(sp0 - 0x120u, (float)(double)(float)x0);
L_100ccb58: ;
    COW_AT(100ccb58)
    g->eax = rd32(self);
    t268 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t269 = cow_thiscall(g, rd32(t268 + 0x110u), self, 0);
    d270 = cow_take_float(g);
    eax = t269;
    x0 = d270;
    COW_AT(100ccb62)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100ccbb9;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100ccb6f)
    d271 = (double)rdf32(self + 0x758u);
    if (!(d271 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100ccbad;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d271, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100ccb82)
    g->eax = eax;
    g->edx = rd32(self);
    t272 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t273 = cow_thiscall(g, rd32(t272 + 0x110u), self, 0);
    t274 = g->edx;
    d275 = cow_take_float(g);
    eax = t273;
    edx = t274;
    x0 = d275;
    COW_AT(100ccb8c)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100ccba1)
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
        d276 = cow_take_float(g);
        x0 = d276;
    COW_AT(100ccbab)
    }
    else
    {
    COW_AT(100ccb99)
        x0 = (double)rdf32(self + 0x754u);
    }
L_100ccbc3: ;
    COW_AT(100ccbc3)
    wrf32(sp0 - 0x108u, (float)(double)(float)x0);
L_100ccbc7: ;
    COW_AT(100ccbc7)
    wr32(sp0 - 0x140u, 0x3f800000u);
    t279 = rd32(sp0 - 0x128u);
    wr32(sp0 - 0x144u, t279);
    t280 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t280);
    t281 = rd32(sp0 - 0x108u);
    wr32(sp0 - 0x14cu, t281);
    wr32(sp0 - 0x150u, sp0 - 0xd0u);
    g->eax = sp0 - 0xd0u;
    g->edx = t281;
    g->esp = sp0 - 0x13cu;
    t282 = cow_cdecl(g, COW_IMG(0x10026e30u), 5, sp0 - 0xd0u, t281, t280, t279, 0x3f800000u);
    t283 = g->edx;
    eax = t282;
    edx = t283;
    COW_AT(100ccbe5)
    wr32(sp0 - 0x140u, sp0 - 0xd0u);
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, COW_IMG(0x10027ae0u), self + 0x998u, 1, sp0 - 0xd0u);
    t284 = g->edx;
    edx = t284;
    COW_AT(100ccbfa)
    if (rd32(self + 0x5f8u) == 0u)
    {
        eax = rd32(self + 0x5f8u);
    COW_AT(100ccc11)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        t286 = cow_thiscall(g, COW_IMG(0x10084640u), self, 0);
        t287 = g->edx;
        eax = t286;
        edx = t287;
    COW_AT(100ccc18)
        if (eax != 0u) goto L_100ccc51;
    COW_AT(100ccc1c)
        if ((int8_t)rd8(self + 0x878u) <= 0)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x878u);
            goto L_100ccc2a;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0x878u);
    COW_AT(100ccc26)
        if ((uint8_t)eax != 3u) goto L_100ccc42;
L_100ccc2a: ;
    COW_AT(100ccc2a)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        t288 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t289 = g->edx;
        eax = t288;
        edx = t289;
    COW_AT(100ccc31)
        if (eax == 2u) goto L_100ccc42;
    COW_AT(100ccc36)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        t290 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t291 = g->edx;
        eax = t290;
        edx = t291;
    COW_AT(100ccc3d)
        if (eax != 3u) goto L_100ccc51;
L_100ccc42: ;
    COW_AT(100ccc42)
        wr32(sp0 - 0x140u, 0x3e400000u);
        wr32(sp0 - 0x144u, self + 0x998u);
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x100d54c0u), self, 2, self + 0x998u, 0x3e400000u);
    COW_AT(100ccc4f)
L_100cccc3: ;
    COW_AT(100cccc3)
        wr32(sp0 - 0x140u, self + 0x60cu);
        g->eax = rd32(self);
        g->edx = self + 0x60cu;
        t310 = rd32(self);
        g->esp = sp0 - 0x140u;
        t311 = cow_thiscall(g, rd32(t310 + 0x1bcu), self, 0);
        t312 = g->edx;
        eax = t311;
        edx = t312;
    COW_AT(100cccd4)
        wr32(sp0 - 0x144u, eax);
        wr32(sp0 - 0x148u, sp0 - 0x100u);
        g->eax = eax;
        g->esp = sp0 - 0x13cu;
        t313 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x100u, eax, rd32(sp0 - 0x140u));
        eax = t313;
    COW_AT(100cccdf)
        wr32(sp0 - 0xf4u, 0x3f800000u);
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x10027cd0u), self + 0x998u, 1, sp0 - 0x100u);
        t314 = g->edx;
        edx = t314;
    }
    else
    {
        eax = rd32(self + 0x5f8u);
    COW_AT(100ccc04)
        wr32(sp0 - 0x140u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x100279f0u), self + 0x998u, 1, eax);
        t285 = g->edx;
        edx = t285;
    COW_AT(100ccc0c)
    }
    COW_AT(100cccf6)
    wr32(sp0 - 0x140u, self + 0x848u);
    wr32(sp0 - 0x144u, sp0 - 0x118u);
    wr8(COW_IMG(0x10457538u), 0u);
    g->esp = sp0 - 0x13cu;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x118u, self + 0x848u);
    COW_AT(100ccd0e)
    t315 = rd32(rd32(sp0 - 0xf0u) + 0xbcu);
    wr32(sp0 - 0x10cu, t315);
    g->eax = t315;
    g->edx = rd32(self);
    t316 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t317 = cow_thiscall(g, rd32(t316 + 0x304u), self, 0);
    t318 = g->edx;
    eax = t317;
    edx = t318;
    COW_AT(100ccd29)
    if ((uint8_t)eax != 0u) goto L_100ccdc8;
    COW_AT(100ccd31)
    if (rd8(sp0 - 0x129u) == 1u) goto L_100ccdc8;
    COW_AT(100ccd3c)
    t319 = rd32(COW_IMG(0x1048a350u)) + 1u;
    t320 = rd32(COW_IMG(0x1048a350u));
    t321 = rd32(COW_IMG(0x1048a354u));
    wr32(COW_IMG(0x1048a350u), t319);
    if ((int32_t)(t320 + 1u) < (int32_t)t321) goto L_100ccd94;
    eax = t319;
    COW_AT(100ccd51)
    if (rd8(sp0 - 0x121u) != 0u) goto L_100ccd94;
    COW_AT(100ccd59)
    if (rd32(self + 0x768u) == 0u) goto L_100ccd78;
    eax = rd32(self + 0x768u);
    COW_AT(100ccd63)
    if (rd32(eax + 0x6a4u) != 4u) goto L_100ccd78;
    COW_AT(100ccd6c)
    t322 = rd32(sp0 - 0x11cu);
    wr32(sp0 - 0x140u, t322);
    wr32(sp0 - 0x144u, sp0 - 0x118u);
    eax = t322;
    loc_140 = t322;
L_100ccd9e: ;
    COW_AT(100ccd9e)
    g->eax = eax;
    g->edx = rd32(self);
    t324 = rd32(self);
    g->esp = sp0 - 0x144u;
    t325 = cow_thiscall(g, rd32(t324 + 0x1c0u), self, 0);
    t326 = g->edx;
    eax = t325;
    edx = t326;
    COW_AT(100ccda8)
    wr32(sp0 - 0x148u, eax);
    g->eax = rd32(self);
    g->edx = edx;
    t327 = rd32(self);
    g->esp = sp0 - 0x148u;
    t328 = cow_thiscall(g, rd32(t327 + 0x1bcu), self, 0);
    t329 = g->edx;
    eax = t328;
    edx = t329;
    COW_AT(100ccdb3)
    wr32(sp0 - 0x14cu, eax);
    wr32(sp0 - 0x150u, sp0 - 0xd0u);
    wr32(sp0 - 0x154u, self + 0x998u);
    wr32(sp0 - 0x158u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t330 = cow_thiscall(g, COW_IMG(0x1002b6e0u), self + 0x674u, 7, self, self + 0x998u, sp0 - 0xd0u, eax, rd32(sp0 - 0x148u), sp0 - 0x118u, rd32(sp0 - 0x140u));
    t331 = g->edx;
    eax = t330;
    edx = t331;
    COW_AT(100ccdc6)
L_100cce00: ;
    COW_AT(100cce00)
    wr8(self + 0xb0u, 0u);
    g->esp = sp0 - 0x13cu;
    cow_fastcall(g, COW_IMG(0x100cce60u), self, edx, 0);
    COW_AT(100cce0e)
    g->ebx = rd32(sp0 - 0x130u);
    g->esi = rd32(sp0 - 0x138u);
    g->edi = rd32(sp0 - 0x13cu);
    g->ebp = rd32(sp0 - 0x134u);
    return;
L_100cc07a: ;
    COW_AT(100cc07a)
    if ((int32_t)rd32(self + 0x728u) <= 1) goto L_100cc2dc;
    COW_AT(100cc086)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t60 = cow_thiscall(g, COW_IMG(0x10085490u), self, 0);
    t61 = g->ecx;
    t62 = g->edx;
    eax = t60;
    ecx = t61;
    edx = t62;
    COW_AT(100cc08d)
    if ((uint8_t)eax == 0u) goto L_100cc2ae;
    COW_AT(100cc095)
    g->eax = rd32(self);
    g->edx = edx;
    t63 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t64 = cow_thiscall(g, rd32(t63 + 0x34cu), self, 0);
    t65 = g->edx;
    eax = t64;
    edx = t65;
    COW_AT(100cc09f)
    if (eax != 0u) goto L_100cc163;
    COW_AT(100cc0a7)
    g->eax = eax;
    g->edx = rd32(self);
    t66 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t67 = cow_thiscall(g, rd32(t66 + 0x358u), self, 0);
    t68 = g->edx;
    eax = t67;
    edx = t68;
    COW_AT(100cc0b1)
    if (eax != 0u) goto L_100cc163;
    COW_AT(100cc0b9)
    g->eax = rd32(self);
    g->edx = edx;
    t69 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t70 = cow_thiscall(g, rd32(t69 + 0x360u), self, 0);
    t71 = g->edx;
    eax = t70;
    edx = t71;
    COW_AT(100cc0c3)
    if (eax == 0u) goto L_100cc0df;
    COW_AT(100cc0c7)
    if (rd32(self + 0x768u) == 0u)
    {
        ecx = rd32(self + 0x768u);
        goto L_100cc2dc;
    }
    ecx = rd32(self + 0x768u);
    COW_AT(100cc0d5)
    g->eax = eax;
    g->edx = rd32(ecx);
    t72 = rd32(ecx);
    g->esp = sp0 - 0x13cu;
    t73 = cow_thiscall(g, rd32(t72 + 0x304u), ecx, 0);
    t74 = g->ecx;
    t75 = g->edx;
    eax = t73;
    ecx = t74;
    edx = t75;
    COW_AT(100cc0dd)
L_100cc115: ;
    COW_AT(100cc115)
    if ((uint8_t)eax == 0u) goto L_100cc2dc;
L_100cc11d: ;
    COW_AT(100cc11d)
    wr16(COW_IMG(0x1045b77au), 1u);
    wr32(COW_IMG(0x1045b80cu), 0u);
    goto L_100cc18d;
L_100cc0df: ;
    COW_AT(100cc0df)
    g->eax = rd32(self);
    g->edx = edx;
    t76 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t77 = cow_thiscall(g, rd32(t76 + 0x394u), self, 0);
    t78 = g->ecx;
    t79 = g->edx;
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(100cc0e9)
    if (eax != 0u) goto L_100cc2dc;
    COW_AT(100cc0f1)
    g->eax = eax;
    g->edx = rd32(self);
    t80 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t81 = cow_thiscall(g, rd32(t80 + 0x36cu), self, 0);
    t82 = g->edx;
    eax = t81;
    edx = t82;
    COW_AT(100cc0fb)
    if (eax == 0u) goto L_100cc130;
    COW_AT(100cc0ff)
    if (rd32(self + 0x768u) == 0u)
    {
        ecx = rd32(self + 0x768u);
        goto L_100cc2dc;
    }
    ecx = rd32(self + 0x768u);
    COW_AT(100cc10d)
    g->eax = rd32(ecx);
    g->edx = edx;
    t83 = rd32(ecx);
    g->esp = sp0 - 0x13cu;
    t84 = cow_thiscall(g, rd32(t83 + 0x304u), ecx, 0);
    t85 = g->ecx;
    t86 = g->edx;
    eax = t84;
    ecx = t85;
    edx = t86;
    goto L_100cc115;
L_100cc130: ;
    COW_AT(100cc130)
    g->eax = eax;
    g->edx = rd32(self);
    t87 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t88 = cow_thiscall(g, rd32(t87 + 0x384u), self, 0);
    t89 = g->ecx;
    t90 = g->edx;
    eax = t88;
    ecx = t89;
    edx = t90;
    COW_AT(100cc13a)
    if (eax != 0u) goto L_100cc2dc;
    COW_AT(100cc142)
    g->eax = rd32(self);
    g->edx = edx;
    t91 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t92 = cow_thiscall(g, rd32(t91 + 0x378u), self, 0);
    t93 = g->ecx;
    t94 = g->edx;
    eax = t92;
    ecx = t93;
    edx = t94;
    COW_AT(100cc14c)
    if (eax != 0u) goto L_100cc2dc;
    COW_AT(100cc154)
    g->eax = eax;
    g->edx = rd32(self);
    t95 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t96 = cow_thiscall(g, rd32(t95 + 0x3a4u), self, 0);
    t97 = g->ecx;
    t98 = g->edx;
    eax = t96;
    ecx = t97;
    edx = t98;
    COW_AT(100cc15e)
L_100cc2d4: ;
    COW_AT(100cc2d4)
    if (eax == 0u) goto L_100cc179;
L_100cc2dc: ;
    COW_AT(100cc2dc)
    wr16(COW_IMG(0x1045b77au), 3u);
    goto L_100cc18d;
L_100cc163: ;
    COW_AT(100cc163)
    if (rd32(self + 0x768u) == 0u)
    {
        ecx = rd32(self + 0x768u);
        goto L_100cc179;
    }
    ecx = rd32(self + 0x768u);
    COW_AT(100cc16d)
    g->eax = rd32(ecx);
    g->edx = edx;
    t99 = rd32(ecx);
    g->esp = sp0 - 0x13cu;
    t100 = cow_thiscall(g, rd32(t99 + 0x304u), ecx, 0);
    t101 = g->ecx;
    t102 = g->edx;
    eax = t100;
    ecx = t101;
    edx = t102;
    COW_AT(100cc175)
    if ((uint8_t)eax != 0u) goto L_100cc11d;
L_100cc179: ;
    COW_AT(100cc179)
    t111 = rd8(self + 0x17cu);
    wr16(COW_IMG(0x1045b77au), -(t111 != 0u) & 2u);
    ecx = -(t111 != 0u) & 2u;
    goto L_100cc18d;
L_100cc2ae: ;
    COW_AT(100cc2ae)
    if (rd32(self + 0x768u) == 0u) goto L_100cc179;
    edi = rd32(self + 0x768u);
    COW_AT(100cc2bc)
    g->eax = eax;
    g->edx = rd32(edi);
    t103 = rd32(edi);
    g->esp = sp0 - 0x13cu;
    t104 = cow_thiscall(g, rd32(t103 + 0x34cu), edi, 0);
    t105 = g->ecx;
    t106 = g->edx;
    eax = t104;
    ecx = t105;
    edx = t106;
    COW_AT(100cc2c6)
    if (eax != 0u) goto L_100cc2dc;
    COW_AT(100cc2ca)
    g->eax = rd32(edi);
    g->edx = edx;
    t107 = rd32(edi);
    g->esp = sp0 - 0x13cu;
    t108 = cow_thiscall(g, rd32(t107 + 0x358u), edi, 0);
    t109 = g->ecx;
    t110 = g->edx;
    eax = t108;
    ecx = t109;
    edx = t110;
    goto L_100cc2d4;
L_100cc5cc: ;
    COW_AT(100cc5cc)
    g->eax = eax;
    g->esp = sp0 - 0x13cu;
    t189 = cow_thiscall(g, rd32(rd32(self) + 0x358u), self, 0);
    eax = t189;
    COW_AT(100cc5d6)
    if (eax != 0u) goto L_100cc5ab;
    COW_AT(100cc5da)
    d190 = (double)rdf32(self + 0x900u);
    d191 = (double)rdf32(COW_IMG(0x103295d8u));
    wr8(self + 0x9f8u, (uint8_t)eax);
    if ((cow_fsw(g, d190, d191, 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d190, d191, 0u) & 0x100u;
        goto L_100cc5ab;
    }
    COW_AT(100cc5f5)
    t192 = rd32(self + 0x90cu);
    d193 = fr(g, (double)rdf32(self + 0x910u) - (double)rdf32(self + 0x900u));
    wr32(sp0 - 0x10cu, t192);
    wr32(sp0 - 0x140u, 0u);
    t194 = rd32(self + 0x8f8u);
    d195 = fr(g, d193 * (double)rdf32(COW_IMG(0x10329ce4u)));
    wr32(sp0 - 0x118u, t194);
    wr32(sp0 - 0x144u, 1u);
    t196 = rd32(self + 0x8fcu);
    wr32(sp0 - 0x114u, t196);
    d197 = fr(g, d195 + (double)rdf32(self + 0x900u));
    wr32(sp0 - 0x148u, 1u);
    wr32(sp0 - 0x14cu, rd32(COW_IMG(0x10456d58u)));
    wr32(sp0 - 0x150u, rd32(COW_IMG(0x10456d50u)));
    t198 = rd32(self + 0x908u);
    wr32(sp0 - 0x110u, t198);
    wrf32(sp0 - 0x128u, (float)(double)(float)d197);
    g->eax = t198;
    g->ecx = rd32(COW_IMG(0x10456d58u));
    g->edx = rd32(COW_IMG(0x10456d50u));
    t199 = rd32(COW_IMG(0x10456d58u));
    t200 = rd32(COW_IMG(0x10456d50u));
    g->esp = sp0 - 0x150u;
    t201 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
    t202 = g->ecx;
    t203 = g->edx;
    eax = t201;
    ecx = t202;
    edx = t203;
    COW_AT(100cc651)
    wr32(sp0 - 0x154u, ecx);
    wr32(sp0 - 0x108u, (uint16_t)eax);
    d204 = (double)(float)(double)(int32_t)(uint16_t)eax;
    wrf32(sp0 - 0x154u, (float)d204);
    g->eax = (uint16_t)eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t205 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
    t206 = g->ecx;
    t207 = g->edx;
    eax = t205;
    ecx = t206;
    edx = t207;
    COW_AT(100cc667)
    wr32(sp0 - 0x158u, ecx);
    wr32(sp0 - 0x108u, (uint16_t)eax);
    d208 = (double)(float)(double)(int32_t)(uint16_t)eax;
    wrf32(sp0 - 0x158u, (float)d208);
    t209 = rd32(sp0 - 0x128u);
    wr32(sp0 - 0x15cu, t209);
    wr32(sp0 - 0x160u, sp0 - 0x118u);
    g->ebx = self + 0x6d0u;
    g->eax = t209;
    g->esp = sp0 - 0x13cu;
    t210 = cow_thiscall(g, COW_IMG(0x1006c280u), self + 0x8f0u, 9, sp0 - 0x118u, t209, cow_f2bits(d208), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u));
    eax = t210;
    COW_AT(100cc68d)
    wr32(self + 0x9f4u, eax);
    if (eax != 0u) goto L_100cc5ab;
L_100cc69b: ;
    COW_AT(100cc69b)
    t211 = rd8(self + 0xb2u);
    t212 = rd32(sp0 - 0xf0u);
    wr8(self + 0xb0u, 1u);
    wr8(self + 0xb2u, (uint8_t)(t211 | 1u));
    eax = (eax & 0xffffff00u) | t211 | 1u;
    ebp = t212;
L_100cc6b4: ;
    COW_AT(100cc6b4)
    g->eax = eax;
    g->edx = rd32(self);
    t341 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t342 = cow_thiscall(g, rd32(t341 + 0x110u), self, 0);
    t343 = g->edx;
    d344 = cow_take_float(g);
    eax = t342;
    edx = t343;
    x0 = d344;
    COW_AT(100cc6be)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100cc709;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cc6cb)
    d345 = (double)rdf32(self + 0x760u);
    if (!(d345 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100cc6fd;
    COW_AT(100cc6de)
    g->eax = rd32(self);
    g->edx = edx;
    t346 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t347 = cow_thiscall(g, rd32(t346 + 0x110u), self, 0);
    t348 = g->edx;
    d349 = cow_take_float(g);
    eax = t347;
    edx = t348;
    x0 = d349;
    COW_AT(100cc6e8)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100cc709;
    }
    COW_AT(100cc6f5)
    x0 = (double)rdf32(self + 0x754u);
L_100cc713: ;
    COW_AT(100cc713)
    wrf32(sp0 - 0x11cu, (float)(double)(float)x0);
L_100cc717: ;
    COW_AT(100cc717)
    g->eax = rd32(self);
    g->edx = edx;
    t354 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t355 = cow_thiscall(g, rd32(t354 + 0x110u), self, 0);
    t356 = g->edx;
    d357 = cow_take_float(g);
    eax = t355;
    edx = t356;
    x0 = d357;
    COW_AT(100cc721)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100cc778;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cc72e)
    d358 = (double)rdf32(self + 0x75cu);
    if (!(d358 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100cc76c;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d358, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cc741)
    g->eax = eax;
    g->edx = rd32(self);
    t359 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t360 = cow_thiscall(g, rd32(t359 + 0x110u), self, 0);
    t361 = g->edx;
    d362 = cow_take_float(g);
    eax = t360;
    edx = t361;
    x0 = d362;
    COW_AT(100cc74b)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100cc760)
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
        t363 = g->edx;
        d364 = cow_take_float(g);
        edx = t363;
        x0 = d364;
    COW_AT(100cc76a)
    }
    else
    {
    COW_AT(100cc758)
        x0 = (double)rdf32(self + 0x754u);
    }
L_100cc782: ;
    COW_AT(100cc782)
    wrf32(sp0 - 0x120u, (float)(double)(float)x0);
L_100cc786: ;
    COW_AT(100cc786)
    g->eax = rd32(self);
    t369 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t370 = cow_thiscall(g, rd32(t369 + 0x110u), self, 0);
    d371 = cow_take_float(g);
    eax = t370;
    x0 = d371;
    COW_AT(100cc790)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100cc7e7;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cc79d)
    d372 = (double)rdf32(self + 0x758u);
    if (!(d372 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100cc7db;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d372, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cc7b0)
    g->eax = eax;
    g->edx = rd32(self);
    t373 = rd32(self);
    g->esp = sp0 - 0x13cu;
    t374 = cow_thiscall(g, rd32(t373 + 0x110u), self, 0);
    t375 = g->edx;
    d376 = cow_take_float(g);
    eax = t374;
    edx = t375;
    x0 = d376;
    COW_AT(100cc7ba)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100cc7cf)
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
        d377 = cow_take_float(g);
        x0 = d377;
    COW_AT(100cc7d9)
    }
    else
    {
    COW_AT(100cc7c7)
        x0 = (double)rdf32(self + 0x754u);
    }
L_100cc7f1: ;
    COW_AT(100cc7f1)
    wrf32(sp0 - 0x128u, (float)(double)(float)x0);
L_100cc7f5: ;
    COW_AT(100cc7f5)
    wr32(sp0 - 0x140u, 0x3f800000u);
    t380 = rd32(sp0 - 0x11cu);
    wr32(sp0 - 0x144u, t380);
    t381 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t381);
    t382 = rd32(sp0 - 0x128u);
    wr32(sp0 - 0x14cu, t382);
    wr32(sp0 - 0x150u, sp0 - 0xd0u);
    g->eax = sp0 - 0xd0u;
    g->edx = t382;
    g->esp = sp0 - 0x13cu;
    t383 = cow_cdecl(g, COW_IMG(0x10026e30u), 5, sp0 - 0xd0u, t382, t381, t380, 0x3f800000u);
    t384 = g->edx;
    eax = t383;
    edx = t384;
    COW_AT(100cc813)
    wr32(sp0 - 0x140u, sp0 - 0xd0u);
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, COW_IMG(0x10027ae0u), self + 0x998u, 1, sp0 - 0xd0u);
    t385 = g->edx;
    edx = t385;
    COW_AT(100cc828)
    if (rd32(self + 0x5f8u) == 0u)
    {
        eax = rd32(self + 0x5f8u);
    COW_AT(100cc83f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        t387 = cow_thiscall(g, COW_IMG(0x10084640u), self, 0);
        t388 = g->edx;
        eax = t387;
        edx = t388;
    COW_AT(100cc846)
        if (eax != 0u) goto L_100cc87f;
    COW_AT(100cc84a)
        if ((int8_t)rd8(self + 0x878u) <= 0)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x878u);
            goto L_100cc858;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0x878u);
    COW_AT(100cc854)
        if ((uint8_t)eax != 3u) goto L_100cc870;
L_100cc858: ;
    COW_AT(100cc858)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        t389 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t390 = g->edx;
        eax = t389;
        edx = t390;
    COW_AT(100cc85f)
        if (eax == 2u) goto L_100cc870;
    COW_AT(100cc864)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        t391 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t392 = g->edx;
        eax = t391;
        edx = t392;
    COW_AT(100cc86b)
        if (eax != 3u) goto L_100cc87f;
L_100cc870: ;
    COW_AT(100cc870)
        wr32(sp0 - 0x140u, 0x3e400000u);
        wr32(sp0 - 0x144u, self + 0x998u);
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x100d54c0u), self, 2, self + 0x998u, 0x3e400000u);
    COW_AT(100cc87d)
L_100cc8c2: ;
    COW_AT(100cc8c2)
        wr32(sp0 - 0x140u, self + 0x60cu);
        g->eax = rd32(self);
        g->edx = self + 0x60cu;
        t403 = rd32(self);
        g->esp = sp0 - 0x140u;
        t404 = cow_thiscall(g, rd32(t403 + 0x1bcu), self, 0);
        t405 = g->edx;
        eax = t404;
        edx = t405;
    COW_AT(100cc8d3)
        wr32(sp0 - 0x144u, eax);
        wr32(sp0 - 0x148u, sp0 - 0x100u);
        g->eax = eax;
        g->esp = sp0 - 0x13cu;
        t406 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x100u, eax, rd32(sp0 - 0x140u));
        eax = t406;
    COW_AT(100cc8de)
        wr32(sp0 - 0xf4u, 0x3f800000u);
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x10027cd0u), self + 0x998u, 1, sp0 - 0x100u);
        t407 = g->edx;
        edx = t407;
    }
    else
    {
        eax = rd32(self + 0x5f8u);
    COW_AT(100cc832)
        wr32(sp0 - 0x140u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x100279f0u), self + 0x998u, 1, eax);
        t386 = g->edx;
        edx = t386;
    COW_AT(100cc83a)
    }
    COW_AT(100cc8f5)
    wr32(sp0 - 0x140u, self + 0x848u);
    wr32(sp0 - 0x144u, sp0 - 0x118u);
    g->eax = self + 0x848u;
    g->ecx = sp0 - 0x118u;
    g->esp = sp0 - 0x13cu;
    t408 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x118u, self + 0x848u);
    t409 = g->ecx;
    eax = t408;
    ecx = t409;
    COW_AT(100cc906)
    t410 = rd32(ebp + 0xbcu);
    wr32(sp0 - 0x10cu, t410);
    if (cow_bits2f(t410) == (double)rdf32(COW_IMG(0x1032a3f0u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(t410), (double)rdf32(COW_IMG(0x1032a3f0u)), 0u);
        edx = t410;
        goto L_100cc93c;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(t410), (double)rdf32(COW_IMG(0x1032a3f0u)), 0u);
    edx = t410;
    loc_10c = t410;
    COW_AT(100cc924)
    if (cow_bits2f(loc_10c) == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_10c), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100cc93c;
    }
    COW_AT(100cc935)
    wr32(sp0 - 0x140u, sp0 - 0x118u);
    eax = sp0 - 0x118u;
    loc_140 = sp0 - 0x118u;
L_100cc93e: ;
    COW_AT(100cc93e)
    wr32(sp0 - 0x144u, ecx);
    d411 = (double)(float)(double)rdf32(self + 0xbcu);
    wrf32(sp0 - 0x144u, (float)d411);
    wr32(sp0 - 0x148u, self + 0x998u);
    wr32(sp0 - 0x14cu, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t412 = cow_thiscall(g, COW_IMG(0x1002c2d0u), self + 0x674u, 4, self, self + 0x998u, cow_f2bits(d411), loc_140);
    t413 = g->edx;
    eax = t412;
    edx = t413;
    COW_AT(100cc955)
    g->esp = sp0 - 0x13cu;
    cow_fastcall(g, COW_IMG(0x100cce60u), self, edx, 0);
    COW_AT(100cc95c)
    g->ebx = rd32(sp0 - 0x130u);
    g->esi = rd32(sp0 - 0x138u);
    g->edi = rd32(sp0 - 0x13cu);
    g->ebp = rd32(sp0 - 0x134u);
    return;
L_100cc6fd: ;
    COW_AT(100cc6fd)
    t350 = rd32(self + 0x760u);
    wr32(sp0 - 0x11cu, t350);
    goto L_100cc717;
L_100cc709: ;
    COW_AT(100cc709)
    g->edx = rd32(self);
    t351 = rd32(self);
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, rd32(t351 + 0x110u), self, 0);
    t352 = g->edx;
    d353 = cow_take_float(g);
    edx = t352;
    x0 = d353;
    goto L_100cc713;
L_100cc76c: ;
    COW_AT(100cc76c)
    t365 = rd32(self + 0x75cu);
    wr32(sp0 - 0x120u, t365);
    goto L_100cc786;
L_100cc778: ;
    COW_AT(100cc778)
    g->edx = rd32(self);
    t366 = rd32(self);
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, rd32(t366 + 0x110u), self, 0);
    t367 = g->edx;
    d368 = cow_take_float(g);
    edx = t367;
    x0 = d368;
    goto L_100cc782;
L_100cc7db: ;
    COW_AT(100cc7db)
    t378 = rd32(self + 0x758u);
    wr32(sp0 - 0x128u, t378);
    goto L_100cc7f5;
L_100cc7e7: ;
    COW_AT(100cc7e7)
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
    d379 = cow_take_float(g);
    x0 = d379;
    goto L_100cc7f1;
L_100cc87f: ;
    COW_AT(100cc87f)
    wr32(sp0 - 0x140u, self + 0x62cu);
    g->eax = rd32(self);
    g->edx = self + 0x62cu;
    t393 = rd32(self);
    g->esp = sp0 - 0x140u;
    t394 = cow_thiscall(g, rd32(t393 + 0x1c0u), self, 0);
    t395 = g->edx;
    eax = t394;
    edx = t395;
    COW_AT(100cc890)
    wr32(sp0 - 0x144u, eax);
    wr32(sp0 - 0x148u, sp0 - 0x118u);
    g->eax = eax;
    g->esp = sp0 - 0x13cu;
    t396 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x118u, eax, rd32(sp0 - 0x140u));
    eax = t396;
    COW_AT(100cc89b)
    t397 = rd32(sp0 - 0x118u);
    wr32(sp0 - 0x140u, t397);
    g->edx = t397;
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, COW_IMG(0x10027b80u), self + 0x998u, 1, t397);
    t398 = g->edx;
    edx = t398;
    COW_AT(100cc8aa)
    t399 = rd32(sp0 - 0x114u);
    wr32(sp0 - 0x140u, t399);
    g->eax = t399;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t400 = cow_thiscall(g, COW_IMG(0x10027bd0u), self + 0x998u, 1, t399);
    t401 = g->edx;
    eax = t400;
    edx = t401;
    COW_AT(100cc8b6)
    t402 = rd32(sp0 - 0x110u);
    wr32(sp0 - 0x140u, t402);
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, COW_IMG(0x10027c20u), self + 0x998u, 1, t402);
    goto L_100cc8c2;
L_100cc93c: ;
    COW_AT(100cc93c)
    wr32(sp0 - 0x140u, 0u);
    loc_140 = 0u;
    goto L_100cc93e;
L_100cc967: ;
    COW_AT(100cc967)
    ebx = self + 0x6d0u & 0xffffff00u;
    goto L_100cc969;
L_100cca63: ;
    COW_AT(100cca63)
    g->eax = eax;
    g->edx = edx;
    t229 = rd32(self + 0x9fcu);
    g->esp = sp0 - 0x13cu;
    t230 = cow_stdcall(g, COW_IMG(0x10014d50u), 0);
    t231 = g->edx;
    eax = t230;
    edx = t231;
    edi = t229;
    COW_AT(100cca6e)
    if ((int32_t)(eax & 0x80000003u) >= 0)
    {
        eax = eax & 0x80000003u;
    }
    else
    {
        eax = eax & 0x80000003u;
    COW_AT(100cca75)
        eax = (eax - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(100cca7a)
    if (!((eax ^ edi) & 1u))
    {
        eax = eax ^ edi;
        goto L_100cc9e9;
    }
    eax = eax ^ edi;
    COW_AT(100cca84)
L_100ccaa5: ;
    COW_AT(100ccaa5)
    if (rd32(self + 0xa00u) == 0u) goto L_100cc9e9;
    COW_AT(100ccab1)
    wr8(COW_IMG(0x10457460u), 0u);
    wr32(self + 0xa00u, 0u);
    goto L_100cca01;
L_100cca86: ;
    COW_AT(100cca86)
    g->eax = eax;
    g->edx = edx;
    t232 = rd32(self + 0x9fcu);
    g->esp = sp0 - 0x13cu;
    t233 = cow_stdcall(g, COW_IMG(0x10014d50u), 0);
    t234 = g->edx;
    eax = t233;
    edx = t234;
    edi = t232;
    COW_AT(100cca91)
    if ((int32_t)(eax & 0x80000003u) >= 0)
    {
        eax = eax & 0x80000003u;
    }
    else
    {
        eax = eax & 0x80000003u;
    COW_AT(100cca98)
        eax = (eax - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(100cca9d)
    if (eax != edi) goto L_100cc9e9;
    goto L_100ccaa5;
L_100ccacf: ;
    COW_AT(100ccacf)
    t249 = rd32(self + 0x760u);
    wr32(sp0 - 0x128u, t249);
    goto L_100ccae9;
L_100ccadb: ;
    COW_AT(100ccadb)
    g->edx = rd32(self);
    t250 = rd32(self);
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, rd32(t250 + 0x110u), self, 0);
    t251 = g->edx;
    d252 = cow_take_float(g);
    edx = t251;
    x0 = d252;
    goto L_100ccae5;
L_100ccb3e: ;
    COW_AT(100ccb3e)
    t264 = rd32(self + 0x75cu);
    wr32(sp0 - 0x120u, t264);
    goto L_100ccb58;
L_100ccb4a: ;
    COW_AT(100ccb4a)
    g->edx = rd32(self);
    t265 = rd32(self);
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, rd32(t265 + 0x110u), self, 0);
    t266 = g->edx;
    d267 = cow_take_float(g);
    edx = t266;
    x0 = d267;
    goto L_100ccb54;
L_100ccbad: ;
    COW_AT(100ccbad)
    t277 = rd32(self + 0x758u);
    wr32(sp0 - 0x108u, t277);
    goto L_100ccbc7;
L_100ccbb9: ;
    COW_AT(100ccbb9)
    g->esp = sp0 - 0x13cu;
    cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
    d278 = cow_take_float(g);
    x0 = d278;
    goto L_100ccbc3;
L_100ccc51: ;
    COW_AT(100ccc51)
    wr32(sp0 - 0x140u, self + 0x62cu);
    g->eax = rd32(self);
    g->edx = self + 0x62cu;
    t292 = rd32(self);
    g->esp = sp0 - 0x140u;
    t293 = cow_thiscall(g, rd32(t292 + 0x1c0u), self, 0);
    t294 = g->edx;
    eax = t293;
    edx = t294;
    COW_AT(100ccc62)
    wr32(sp0 - 0x144u, eax);
    wr32(sp0 - 0x148u, sp0 - 0x118u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t295 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x118u, eax, rd32(sp0 - 0x140u));
    t296 = g->edx;
    eax = t295;
    edx = t296;
    COW_AT(100ccc6d)
    g->eax = eax;
    g->esp = sp0 - 0x13cu;
    t297 = cow_thiscall(g, COW_IMG(0x100843b0u), self, 0);
    eax = t297;
    COW_AT(100ccc77)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(100ccca1)
        t304 = rd32(sp0 - 0x118u);
        wr32(sp0 - 0x140u, t304);
        g->edx = t304;
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x10027b80u), self + 0x998u, 1, t304);
        t305 = g->edx;
        edx = t305;
    COW_AT(100cccab)
        t306 = rd32(sp0 - 0x114u);
        wr32(sp0 - 0x140u, t306);
        g->eax = t306;
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        t307 = cow_thiscall(g, COW_IMG(0x10027bd0u), self + 0x998u, 1, t306);
        t308 = g->edx;
        eax = t307;
        edx = t308;
    COW_AT(100cccb7)
        t309 = rd32(sp0 - 0x110u);
        wr32(sp0 - 0x140u, t309);
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x10027c20u), self + 0x998u, 1, t309);
    }
    else
    {
    COW_AT(100ccc7d)
        t298 = rd32(sp0 - 0x110u);
        wr32(sp0 - 0x140u, t298);
        g->edx = t298;
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x10027c20u), self + 0x998u, 1, t298);
        t299 = g->edx;
        edx = t299;
    COW_AT(100ccc87)
        t300 = rd32(sp0 - 0x114u);
        wr32(sp0 - 0x140u, t300);
        g->eax = t300;
        g->edx = edx;
        g->esp = sp0 - 0x13cu;
        t301 = cow_thiscall(g, COW_IMG(0x10027bd0u), self + 0x998u, 1, t300);
        t302 = g->edx;
        eax = t301;
        edx = t302;
    COW_AT(100ccc93)
        t303 = rd32(sp0 - 0x118u);
        wr32(sp0 - 0x140u, t303);
        g->esp = sp0 - 0x13cu;
        cow_thiscall(g, COW_IMG(0x10027b80u), self + 0x998u, 1, t303);
    COW_AT(100ccc9f)
    }
    goto L_100cccc3;
L_100ccd78: ;
    COW_AT(100ccd78)
    if (rd32(self + 0x76cu) == 0u)
    {
        eax = rd32(self + 0x76cu);
        goto L_100ccd8b;
    }
    eax = rd32(self + 0x76cu);
    COW_AT(100ccd82)
    if (rd32(eax + 0x6a4u) == 4u) goto L_100ccd94;
L_100ccd8b: ;
    COW_AT(100ccd8b)
    if ((int32_t)rd32(self + 0x728u) > 1) goto L_100cce00;
L_100ccd94: ;
    COW_AT(100ccd94)
    t323 = rd32(sp0 - 0x11cu);
    wr32(sp0 - 0x140u, t323);
    wr32(sp0 - 0x144u, sp0 - 0x118u);
    eax = sp0 - 0x118u;
    loc_140 = t323;
    goto L_100ccd9e;
L_100ccdc8: ;
    COW_AT(100ccdc8)
    t332 = rd32(sp0 - 0x11cu);
    wr32(sp0 - 0x140u, t332);
    wr32(sp0 - 0x144u, sp0 - 0x118u);
    g->eax = sp0 - 0x118u;
    g->edx = rd32(self);
    t333 = rd32(self);
    g->esp = sp0 - 0x144u;
    t334 = cow_thiscall(g, rd32(t333 + 0x1c0u), self, 0);
    t335 = g->edx;
    eax = t334;
    edx = t335;
    COW_AT(100ccddc)
    wr32(sp0 - 0x148u, eax);
    g->eax = rd32(self);
    g->edx = edx;
    t336 = rd32(self);
    g->esp = sp0 - 0x148u;
    t337 = cow_thiscall(g, rd32(t336 + 0x1bcu), self, 0);
    t338 = g->edx;
    eax = t337;
    edx = t338;
    COW_AT(100ccde7)
    wr32(sp0 - 0x14cu, eax);
    wr32(sp0 - 0x150u, sp0 - 0xd0u);
    wr32(sp0 - 0x154u, self + 0x998u);
    wr32(sp0 - 0x158u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t339 = cow_thiscall(g, COW_IMG(0x1002b6e0u), self + 0x674u, 7, self, self + 0x998u, sp0 - 0xd0u, eax, rd32(sp0 - 0x148u), sp0 - 0x118u, rd32(sp0 - 0x140u));
    t340 = g->edx;
    eax = t339;
    edx = t340;
    COW_AT(100ccdfa)
    wr32(COW_IMG(0x1048a350u), rd32(COW_IMG(0x1048a350u)) + 1u);
    goto L_100cce00;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cbde0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cbe02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_120;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x13cu);
        in_esi = rd32(sp0 - 0x138u);
        in_ebp = rd32(sp0 - 0x134u);
        in_ebx = rd32(sp0 - 0x130u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_120 = rd32(sp0 - 0x120u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_120;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x13cu);
        in_esi = rd32(sp0 - 0x138u);
        in_ebp = rd32(sp0 - 0x134u);
        in_ebx = rd32(sp0 - 0x130u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_120 = rd32(sp0 - 0x120u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe28u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cbe4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cbe59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe6au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe9bu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbe9fu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbea6u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbeaau:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbeafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbee0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbeefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbef6u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf17u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf21u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf27u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf3cu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf44u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf51u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf75u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf89u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf93u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbf9cu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbfa6u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbfafu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbfb6u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbfbeu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbfcau:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbfcfu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbfddu:
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
        g->esp = sp0 - 0x140u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100cbfe8u:
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
        g->esp = sp0 - 0x148u;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc000u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc009u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc020u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc036u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc03au:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc048u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc052u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc05au:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc064u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc06cu:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc07au:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc086u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc08du:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc095u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc09fu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0a7u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0b1u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0b9u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0c3u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0c7u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0d5u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0ddu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0dfu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0e9u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0f1u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0fbu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc0ffu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc10du:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc115u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc11du:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc130u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc13au:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc142u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc14cu:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc154u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc15eu:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc163u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc16du:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc175u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = 1u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc179u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc18du:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc196u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc1c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x140u;
        (void)sp0;
        return 1;
    }
    case 0x100cc1ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc1d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc208u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x140u;
        (void)sp0;
        return 1;
    }
    case 0x100cc20bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc214u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc247u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x140u;
        (void)sp0;
        return 1;
    }
    case 0x100cc24au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc253u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc286u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x140u;
        (void)sp0;
        return 1;
    }
    case 0x100cc289u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc293u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc297u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc2a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x144u;
        wr32(sp0 - 0x144u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc2aeu:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc2bcu:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc2c6u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc2cau:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc2d4u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc2dcu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc2eau:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc2f5u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc312u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc31cu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc330u:
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
        g->esp = sp0 - 0x148u;
        wr32(sp0 - 0x148u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc333u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc343u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x140u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc353u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x140u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100cc35eu:
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
        g->esp = sp0 - 0x144u;
        g->ebx = self + 0x6d0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc36eu:
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
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x6d0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc38au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc393u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc3acu:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x144u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100cc3beu:
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
        g->esp = sp0 - 0x144u;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100cc3d0u:
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
        g->esp = sp0 - 0x14cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100cc3e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_108;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108 = rd32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100cc3f4u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100cc3ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x144u;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc411u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc419u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_118;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc428u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_118;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc430u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc441u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc449u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc45au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc462u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc477u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_108;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108 = rd32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc48cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_108;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108 = rd32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc48eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_108;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108 = rd32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc4f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        double loc_108_f;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_140;
        uint32_t loc_fc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_108_f = rdf32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc513u:
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
        g->esp = sp0 - 0x148u;
        g->ebx = self + 0x6d0u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100cc522u:
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
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x6d0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc53eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc547u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc551u:
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
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc55bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc561u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc567u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc571u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc579u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc584u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc58fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc596u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc59bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc59fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc5abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc5b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc5c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc5ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc5d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc5dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc5f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc651u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        wr32(sp0 - 0x148u, 1u);
        wr32(sp0 - 0x144u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100cc667u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x154u;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc68du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        wr32(sp0 - 0x160u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cc69bu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc6b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc6beu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc6cbu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc6deu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc6e8u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc6f5u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc6fdu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc709u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc713u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc717u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc721u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc72eu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc741u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc74bu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc758u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc760u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc76au:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc76cu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc778u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc782u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc786u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc790u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc79du:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc7b0u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc7bau:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc7c7u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc7cfu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc7d9u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc7dbu:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc7e7u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc7f1u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc7f5u:
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
        g->esp = sp0 - 0x13cu;
        (void)sp0;
        return 1;
    }
    case 0x100cc813u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x150u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc828u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc832u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc83au:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc83fu:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc846u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc84au:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc854u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc858u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc85fu:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc864u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc86bu:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc870u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc87du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc87fu:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc890u:
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
        g->esp = sp0 - 0x140u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc89bu:
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
        g->esp = sp0 - 0x148u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cc8aau:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cc8b6u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cc8c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc8d3u:
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
        g->esp = sp0 - 0x140u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc8deu:
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
        g->esp = sp0 - 0x148u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100cc8f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc906u:
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
        g->esp = sp0 - 0x144u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cc924u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cc935u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cc93cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cc93eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_140 = rd32(sp0 - 0x140u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x140u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cc955u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc95cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cc967u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebx = self + 0x6d0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc969u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc973u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc977u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc981u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc989u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc98du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc98fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc999u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc99du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9d5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cc9e9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca01u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca08u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca0fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca19u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca41u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca4bu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca58u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca6eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca75u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca84u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca91u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca98u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100cca9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccaa5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccab1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccac3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccacdu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccacfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccadbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccae5u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccae9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccaf3u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb1du:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb32u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb3cu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb4au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb54u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb58u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb62u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb82u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb8cu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccb99u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccba1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccbabu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccbadu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccbb9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccbc3u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccbc7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ccbe5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x150u;
        g->ebp = 0u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccbfau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc04u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc11u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc18u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc26u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc31u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc36u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc3du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc42u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc51u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc62u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x140u;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc6du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x148u;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc7du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ecx = self + 0x998u;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc87u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc93u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccc9fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccca1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ecx = self + 0x998u;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cccabu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cccb7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cccc3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cccd4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x140u;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100cccdfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x148u;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x148u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100cccf6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd0eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x144u;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd31u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd51u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd59u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd6cu:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd78u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x13cu;
        g->ebp = 0u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd82u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd8bu:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd94u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccd9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_140;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x144u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccda8u:
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
        g->esp = sp0 - 0x144u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccdb3u:
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
        g->esp = sp0 - 0x148u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccdc6u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccdc8u:
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
        g->esp = sp0 - 0x13cu;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccddcu:
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
        g->esp = sp0 - 0x144u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccde7u:
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
        g->esp = sp0 - 0x148u;
        g->edi = self + 0x998u;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100ccdfau:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cce00u:
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
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100cce0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x150u, sp0 - 0xd0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cbde0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100cbde0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
