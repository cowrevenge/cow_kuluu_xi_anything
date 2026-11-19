/* f_0x1002dc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1002dc10(Guest* g)
{
    double d102;
    double d111;
    double d130;
    double d131;
    double d85;
    double d86;
    double d87;
    double d88;
    double d93;
    double d97;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_38;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
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
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t98;
    uint32_t t99;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 152u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002dc24u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); goto E_1002dc24;
    case 0x1002dca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; in_esi = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); goto E_1002dca7;
    case 0x1002dcb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; in_esi = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); goto E_1002dcb2;
    case 0x1002dcbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; in_esi = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); goto E_1002dcbb;
    case 0x1002dcccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1002dccc;
    case 0x1002dcd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1002dcd7;
    case 0x1002dce2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1002dce2;
    case 0x1002dce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1002dce8;
    case 0x1002dd03u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd03;
    case 0x1002dd07u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd07;
    case 0x1002dd0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd0f;
    case 0x1002dd11u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd11;
    case 0x1002dd1du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd1d;
    case 0x1002dd38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd38;
    case 0x1002dd3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd3c;
    case 0x1002dd44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd44;
    case 0x1002dd46u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd46;
    case 0x1002dd50u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd50;
    case 0x1002dd57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd57;
    case 0x1002dd5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd5e;
    case 0x1002dd64u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd64;
    case 0x1002dd7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd7f;
    case 0x1002dd83u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd83;
    case 0x1002dd8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd8b;
    case 0x1002dd8du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd8d;
    case 0x1002dd99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dd99;
    case 0x1002ddb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002ddb4;
    case 0x1002ddb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002ddb8;
    case 0x1002ddc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002ddc0;
    case 0x1002ddc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ddc2;
    case 0x1002ddc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ddc8;
    case 0x1002ddd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ddd1;
    case 0x1002ddd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ddd5;
    case 0x1002ddd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ddd9;
    case 0x1002dddbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002dddb;
    case 0x1002dde4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002dde4;
    case 0x1002ddecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ddec;
    case 0x1002ddf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ddf0;
    case 0x1002ddf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002ddf2;
    case 0x1002ddf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002ddf9;
    case 0x1002de0au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de0a;
    case 0x1002de13u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de13;
    case 0x1002de17u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de17;
    case 0x1002de1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de1b;
    case 0x1002de1du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de1d;
    case 0x1002de26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de26;
    case 0x1002de2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de2a;
    case 0x1002de2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de2e;
    case 0x1002de30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de30;
    case 0x1002de36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de36;
    case 0x1002de3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de3f;
    case 0x1002de43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de43;
    case 0x1002de47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de47;
    case 0x1002de49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de49;
    case 0x1002de52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de52;
    case 0x1002de56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de56;
    case 0x1002de5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002de5a;
    case 0x1002de5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1002de5c;
    case 0x1002dec8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dec8;
    case 0x1002dedeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_1002dede;
    case 0x1002df00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_1002df00;
    case 0x1002df16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_1002df16;
    case 0x1002df2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_1002df2e;
    case 0x1002df46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_1002df46;
    case 0x1002df5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_1002df5e;
    case 0x1002df76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_1002df76;
    case 0x1002df8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_1002df8d;
    case 0x1002dfa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dfa4;
    case 0x1002dfb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dfb9;
    case 0x1002dfc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dfc8;
    case 0x1002dfd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dfd8;
    case 0x1002dfefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002dfef;
    case 0x1002e00au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002e00a;
    case 0x1002e033u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002e033;
    case 0x1002e055u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002e055;
    case 0x1002e062u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002e062;
    case 0x1002e06fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002e06f;
    case 0x1002e07au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1002e07a;
    case 0x1002e08bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e08b;
    case 0x1002e093u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e093;
    case 0x1002e0a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e0a2;
    case 0x1002e0a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e0a9;
    case 0x1002e0ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e0cc;
    case 0x1002e0d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e0d4;
    case 0x1002e0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e0d9;
    case 0x1002e0fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e0fc;
    case 0x1002e101u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e101;
    case 0x1002e156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e156;
    case 0x1002e15au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e15a;
    case 0x1002e171u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e171;
    case 0x1002e18cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e18c;
    case 0x1002e193u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e193;
    case 0x1002e198u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e198;
    case 0x1002e1b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e1b5;
    case 0x1002e1bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e1bc;
    case 0x1002e1c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e1c1;
    case 0x1002e1e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e1e6;
    case 0x1002e1edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e1ed;
    case 0x1002e1f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e1f2;
    case 0x1002e204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e204;
    case 0x1002e209u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e209;
    case 0x1002e229u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e229;
    case 0x1002e234u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e234;
    case 0x1002e241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e241;
    case 0x1002e249u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e249;
    case 0x1002e254u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e254;
    case 0x1002e26bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e26b;
    case 0x1002e28au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e28a;
    case 0x1002e2a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e2a2;
    case 0x1002e2bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e2ba;
    case 0x1002e2d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e2d2;
    case 0x1002e2eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e2ea;
    case 0x1002e303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e303;
    case 0x1002e31bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e31b;
    case 0x1002e336u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e336;
    case 0x1002e349u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e349;
    case 0x1002e353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e353;
    case 0x1002e35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e35e;
    case 0x1002e36au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e36a;
    case 0x1002e36eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e36e;
    case 0x1002e371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e371;
    case 0x1002e386u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e386;
    case 0x1002e39au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e39a;
    case 0x1002e3afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e3af;
    case 0x1002e3bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e3ba;
    case 0x1002e3d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e3d1;
    case 0x1002e3f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e3f0;
    case 0x1002e408u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e408;
    case 0x1002e420u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e420;
    case 0x1002e438u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e438;
    case 0x1002e450u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e450;
    case 0x1002e469u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e469;
    case 0x1002e481u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e481;
    case 0x1002e49cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e49c;
    case 0x1002e4adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e4ad;
    case 0x1002e4b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e4b1;
    case 0x1002e4b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e4b4;
    case 0x1002e4c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e4c9;
    case 0x1002e4ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e4dd;
    case 0x1002e4f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e4f9;
    case 0x1002e511u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e511;
    case 0x1002e529u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e529;
    case 0x1002e541u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e541;
    case 0x1002e558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002e558;
    case 0x1002e56fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e56f;
    case 0x1002e5d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e5d2;
    case 0x1002e5e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e5e6;
    case 0x1002e5feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e5fe;
    case 0x1002e616u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e616;
    case 0x1002e61bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e61b;
    case 0x1002e62fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e62f;
    case 0x1002e635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e635;
    case 0x1002e63cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e63c;
    case 0x1002e644u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e644;
    case 0x1002e650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e650;
    case 0x1002e654u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e654;
    case 0x1002e657u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e657;
    case 0x1002e66cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e66c;
    case 0x1002e678u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e678;
    case 0x1002e692u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e692;
    case 0x1002e698u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e698;
    case 0x1002e6a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e6a1;
    case 0x1002e6aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e6aa;
    case 0x1002e6bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e6bc;
    case 0x1002e6c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e6c8;
    case 0x1002e6d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e6d1;
    case 0x1002e6deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e6de;
    case 0x1002e6ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e6eb;
    case 0x1002e6f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e6f8;
    case 0x1002e703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e703;
    case 0x1002e71eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e71e;
    case 0x1002e74bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e74b;
    case 0x1002e770u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e770;
    case 0x1002e77du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e77d;
    case 0x1002e78au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e78a;
    case 0x1002e7b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e7b9;
    case 0x1002e7d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e7d2;
    case 0x1002e7e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e7e4;
    case 0x1002e7f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e7f0;
    case 0x1002e7fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e7fd;
    case 0x1002e817u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e817;
    case 0x1002e81fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e81f;
    case 0x1002e824u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e824;
    case 0x1002e82fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e82f;
    case 0x1002e83cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e83c;
    case 0x1002e849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e849;
    case 0x1002e856u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e856;
    case 0x1002e861u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e861;
    case 0x1002e87cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e87c;
    case 0x1002e8adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e8ad;
    case 0x1002e8c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e8c5;
    case 0x1002e8d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e8d2;
    case 0x1002e8dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e8df;
    case 0x1002e90eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e90e;
    case 0x1002e914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e914;
    case 0x1002e928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e928;
    case 0x1002e935u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002e935;
    case 0x1002e94fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e94f;
    case 0x1002e957u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e957;
    case 0x1002e95cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e95c;
    case 0x1002e967u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e967;
    case 0x1002e974u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e974;
    case 0x1002e981u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e981;
    case 0x1002e98eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e98e;
    case 0x1002e999u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e999;
    case 0x1002e9b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e9b4;
    case 0x1002e9e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e9e4;
    case 0x1002e9fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002e9fb;
    case 0x1002ea08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ea08;
    case 0x1002ea15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ea15;
    case 0x1002ea46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ea46;
    case 0x1002ea4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ea4c;
    case 0x1002ea60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ea60;
    case 0x1002ea72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ea72;
    case 0x1002ea7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ea7a;
    case 0x1002ea7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ea7f;
    case 0x1002ea8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ea8a;
    case 0x1002ea97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ea97;
    case 0x1002eaa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eaa4;
    case 0x1002eab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eab1;
    case 0x1002eabcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eabc;
    case 0x1002ead6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ead6;
    case 0x1002eb07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eb07;
    case 0x1002eb1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eb1f;
    case 0x1002eb2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eb2c;
    case 0x1002eb39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eb39;
    case 0x1002eb68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eb68;
    case 0x1002eb70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eb70;
    case 0x1002eb74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eb74;
    case 0x1002eb85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eb85;
    case 0x1002eb94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eb94;
    case 0x1002eb98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002eb98;
    case 0x1002eba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002eba7;
    case 0x1002ebb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ebb7;
    case 0x1002ebc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ebc4;
    case 0x1002ebcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ebcf;
    case 0x1002ebdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ebde;
    case 0x1002ebe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ebe6;
    case 0x1002ebefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ebef;
    case 0x1002ebfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ebfc;
    case 0x1002ec09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ec09;
    case 0x1002ec16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ec16;
    case 0x1002ec21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ec21;
    case 0x1002ec3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ec3c;
    case 0x1002ec68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ec68;
    case 0x1002ec8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ec8d;
    case 0x1002ec9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ec9a;
    case 0x1002eca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eca7;
    case 0x1002ecd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ecd8;
    case 0x1002ecf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ecf3;
    case 0x1002ecfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ecfb;
    case 0x1002ed08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ed08;
    case 0x1002ed22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ed22;
    case 0x1002ed2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ed2a;
    case 0x1002ed2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ed2f;
    case 0x1002ed3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ed3a;
    case 0x1002ed47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ed47;
    case 0x1002ed54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ed54;
    case 0x1002ed61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ed61;
    case 0x1002ed6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ed6c;
    case 0x1002ed87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ed87;
    case 0x1002edb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002edb7;
    case 0x1002edceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002edce;
    case 0x1002eddbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eddb;
    case 0x1002ede8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ede8;
    case 0x1002ee19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ee19;
    case 0x1002ee1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ee1f;
    case 0x1002ee33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ee33;
    case 0x1002ee40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ee40;
    case 0x1002ee5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ee5a;
    case 0x1002ee62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ee62;
    case 0x1002ee67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ee67;
    case 0x1002ee72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ee72;
    case 0x1002ee7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ee7f;
    case 0x1002ee8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ee8c;
    case 0x1002ee99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ee99;
    case 0x1002eea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eea4;
    case 0x1002eebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eebe;
    case 0x1002eeefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002eeef;
    case 0x1002ef07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ef07;
    case 0x1002ef14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ef14;
    case 0x1002ef21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ef21;
    case 0x1002ef50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ef50;
    case 0x1002ef56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ef56;
    case 0x1002ef6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002ef6a;
    case 0x1002ef7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ef7c;
    case 0x1002ef84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ef84;
    case 0x1002ef89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ef89;
    case 0x1002ef94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002ef94;
    case 0x1002efa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002efa1;
    case 0x1002efaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002efae;
    case 0x1002efbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002efbb;
    case 0x1002efc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002efc6;
    case 0x1002efe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002efe1;
    case 0x1002f011u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002f011;
    case 0x1002f028u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002f028;
    case 0x1002f035u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002f035;
    case 0x1002f042u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002f042;
    case 0x1002f073u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002f073;
    case 0x1002f07bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002f07b;
    case 0x1002f07fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002f07f;
    case 0x1002f090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002f090;
    case 0x1002f092u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1002f092;
    case 0x1002f096u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002f096;
    case 0x1002f0b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002f0b2;
    case 0x1002f0b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_1002f0b8;
    case 0x1002f0c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); goto E_1002f0c9;
    default: break;
    }
#endif

    COW_AT(1002dc10)
    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x44u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x1002f1c0u), 1, 0u);
    t1 = g->edx;
    edx = t1;
    COW_AT(1002dc24)
    t2 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x10457550u), rd32(COW_IMG(0x1045ec20u)));
    t3 = rd8(t2 + 0x921u);
    wr32(arg5, 0u);
    wr8(sp0 - 0x4du, (uint8_t)t3);
    wr32(arg6, 0u);
    t4 = rd32(self + 0x36u);
    wr32(sp0 - 0x48u, t4);
    t5 = rd32(self + 0x42u);
    wr16(COW_IMG(0x1045b618u), rd16(t5));
    t6 = rd32(self + 0x42u);
    wr8(sp0 - 0x4eu, 0u);
    wr16(COW_IMG(0x1045b61au), rd16(t6 + 2u));
    t7 = rd32(self + 0x48u);
    t8 = rd32(self + 0x5eu);
    wr32(COW_IMG(0x1045b620u), t7);
    wr32(sp0 - 0x4cu, 0u);
    t9 = t7 + rd16(rd32(self + 0x42u)) * 4u;
    wr32(COW_IMG(0x1045b61cu), t9);
    if (rd32(t8 + 0x40u) == 0u)
    {
        loc_54 = in_ebx;
        loc_58 = in_ebp;
        loc_5c = in_esi;
        loc_60 = in_edi;
        goto L_1002f0c9;
    }
    ebp = t8;
    loc_48 = t4;
    COW_AT(1002dca7)
    if (rd32(ebp + 0x4cu) == 0u)
    {
        loc_54 = in_ebx;
        loc_58 = in_ebp;
        loc_5c = in_esi;
        loc_60 = in_edi;
        goto L_1002f0c9;
    }
    eax = rd32(ebp + 0x4cu);
    COW_AT(1002dcb2)
    if (rd8(COW_IMG(0x10457460u)) != 0u) goto L_1002dccc;
    COW_AT(1002dcbb)
    if (rd8(arg2 + 0xb8u) == 1u)
    {
        esi = in_esi;
        loc_54 = in_ebx;
        loc_58 = in_ebp;
        loc_5c = in_esi;
        loc_60 = in_edi;
        loc_44 = self;
        loc_4c = 0u;
        goto L_1002de5c;
    }
L_1002dccc: ;
    COW_AT(1002dccc)
    if (rd32(ebp + 0x44u) == 0u)
    {
        loc_54 = in_ebx;
        loc_58 = in_ebp;
        loc_5c = in_esi;
        loc_60 = in_edi;
        goto L_1002f0c9;
    }
    COW_AT(1002dcd7)
    if (rd32(ebp + 0x48u) == 0u)
    {
        loc_54 = in_ebx;
        loc_58 = in_ebp;
        loc_5c = in_esi;
        loc_60 = in_edi;
        goto L_1002f0c9;
    }
    COW_AT(1002dce2)
    esi = ebp + 0x8eu;
    loc_54 = in_ebx;
    loc_58 = in_ebp;
    loc_5c = in_esi;
    loc_60 = in_edi;
    loc_44 = self;
    loc_4c = 0u;
L_1002dce8: ;
    COW_AT(1002dce8)
    wr32(sp0 - 0x64u, 0x2000u);
    wr32(sp0 - 0x68u, esi);
    t10 = rd32(ebp + 0x58u) * 0xcu;
    wr32(sp0 - 0x6cu, t10);
    wr32(sp0 - 0x70u, 0u);
    t11 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x74u, t11);
    g->eax = t11;
    g->edx = rd32(rd32(ebp + 0x44u));
    t12 = rd32(rd32(ebp + 0x44u));
    g->esp = sp0 - 0x60u;
    t13 = cow_thiscall(g, rd32(t12 + 0x2cu), t10, 5, t11, 0u, t10, esi, 0x2000u);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(1002dd03)
    if (eax == 0u) goto L_1002dd11;
    COW_AT(1002dd07)
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0u);   /* kernel32.dll!Sleep */
    COW_AT(1002dd0f)
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_60 = rd32(sp0 - 0x60u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_48 = rd32(sp0 - 0x48u);
    loc_4c = rd32(sp0 - 0x4cu);
    goto L_1002dce8;
L_1002dd11: ;
    COW_AT(1002dd11)
    wr32(ebp + 0x92u, 0u);
    esi = ebp + 0x92u;
L_1002dd1d: ;
    COW_AT(1002dd1d)
    wr32(sp0 - 0x64u, 0x2000u);
    wr32(sp0 - 0x68u, esi);
    t16 = rd32(ebp + 0x58u) * 0xcu;
    wr32(sp0 - 0x6cu, t16);
    wr32(sp0 - 0x70u, 0u);
    t17 = rd32(ebp + 0x48u);
    wr32(sp0 - 0x74u, t17);
    g->eax = t17;
    g->edx = rd32(rd32(ebp + 0x48u));
    t18 = rd32(rd32(ebp + 0x48u));
    g->esp = sp0 - 0x60u;
    t19 = cow_thiscall(g, rd32(t18 + 0x2cu), t16, 5, t17, 0u, t16, esi, 0x2000u);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(1002dd38)
    if (eax == 0u) goto L_1002dd46;
    COW_AT(1002dd3c)
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0u);   /* kernel32.dll!Sleep */
    COW_AT(1002dd44)
    goto L_1002dd1d;
L_1002dd46: ;
    COW_AT(1002dd46)
    if (!(rd8(self + 0x34u) & 1u)) goto L_1002ddf2;
    COW_AT(1002dd50)
    if (rd32(ebp + 0x50u) == 0u) goto L_1002ddc2;
    COW_AT(1002dd57)
    if (rd32(ebp + 0x54u) == 0u) goto L_1002ddc2;
    COW_AT(1002dd5e)
    esi = ebp + 0x96u;
L_1002dd64: ;
    COW_AT(1002dd64)
    wr32(sp0 - 0x64u, 0x2000u);
    wr32(sp0 - 0x68u, esi);
    t22 = rd32(ebp + 0x58u) * 0xcu;
    wr32(sp0 - 0x6cu, t22);
    wr32(sp0 - 0x70u, 0u);
    t23 = rd32(ebp + 0x50u);
    wr32(sp0 - 0x74u, t23);
    g->eax = t23;
    g->edx = rd32(rd32(ebp + 0x50u));
    t24 = rd32(rd32(ebp + 0x50u));
    g->esp = sp0 - 0x60u;
    t25 = cow_thiscall(g, rd32(t24 + 0x2cu), t22, 5, t23, 0u, t22, esi, 0x2000u);
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    COW_AT(1002dd7f)
    if (eax == 0u) goto L_1002dd8d;
    COW_AT(1002dd83)
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0u);   /* kernel32.dll!Sleep */
    COW_AT(1002dd8b)
    goto L_1002dd64;
L_1002dd8d: ;
    COW_AT(1002dd8d)
    wr32(ebp + 0x9au, 0u);
    esi = ebp + 0x9au;
L_1002dd99: ;
    COW_AT(1002dd99)
    wr32(sp0 - 0x64u, 0x2000u);
    wr32(sp0 - 0x68u, esi);
    t28 = rd32(ebp + 0x58u) * 0xcu;
    wr32(sp0 - 0x6cu, t28);
    wr32(sp0 - 0x70u, 0u);
    t29 = rd32(ebp + 0x54u);
    wr32(sp0 - 0x74u, t29);
    g->eax = t29;
    g->edx = rd32(rd32(ebp + 0x54u));
    t30 = rd32(rd32(ebp + 0x54u));
    g->esp = sp0 - 0x60u;
    t31 = cow_thiscall(g, rd32(t30 + 0x2cu), t28, 5, t29, 0u, t28, esi, 0x2000u);
    t32 = g->ecx;
    t33 = g->edx;
    eax = t31;
    ecx = t32;
    edx = t33;
    COW_AT(1002ddb4)
    if (eax == 0u) goto L_1002ddf2;
    COW_AT(1002ddb8)
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0u);   /* kernel32.dll!Sleep */
    COW_AT(1002ddc0)
    goto L_1002dd99;
L_1002ddc2: ;
    COW_AT(1002ddc2)
    esi = rd32(COW_IMG(0x103290f8u));
L_1002ddc8: ;
    COW_AT(1002ddc8)
    t34 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x64u, t34);
    g->eax = t34;
    g->edx = rd32(t34);
    t35 = rd32(t34);
    g->esp = sp0 - 0x60u;
    t36 = cow_thiscall(g, rd32(t35 + 0x30u), ecx, 1, t34);
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(1002ddd1)
    if (eax == 0u) goto L_1002dddb;
    COW_AT(1002ddd5)
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t39 = g->ecx;
    ecx = t39;
    COW_AT(1002ddd9)
    goto L_1002ddc8;
L_1002dddb: ;
    COW_AT(1002dddb)
    t40 = rd32(ebp + 0x48u);
    wr32(sp0 - 0x64u, t40);
    g->eax = t40;
    g->edx = edx;
    t41 = rd32(t40);
    g->esp = sp0 - 0x60u;
    t42 = cow_thiscall(g, rd32(t41 + 0x30u), t41, 1, t40);
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(1002dde4)
    if (eax == 0u)
    {
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        goto L_1002f0c9;
    }
    COW_AT(1002ddec)
    wr32(sp0 - 0x64u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t45 = g->edx;
    edx = t45;
    COW_AT(1002ddf0)
    goto L_1002dddb;
L_1002ddf2: ;
    COW_AT(1002ddf2)
    g->ebp = ebp;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, COW_IMG(0x1002f1d0u), self, 0);
    COW_AT(1002ddf9)
    t46 = rd32(COW_IMG(0x103290f8u));
    wr8(arg2 + 0xb8u, 1u);
    edx = arg2;
    esi = t46;
L_1002de0a: ;
    COW_AT(1002de0a)
    t47 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x64u, t47);
    g->eax = t47;
    g->edx = edx;
    t48 = rd32(t47);
    g->esp = sp0 - 0x60u;
    t49 = cow_thiscall(g, rd32(t48 + 0x30u), t48, 1, t47);
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(1002de13)
    if (eax == 0u) goto L_1002de1d;
    COW_AT(1002de17)
    wr32(sp0 - 0x64u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t52 = g->edx;
    edx = t52;
    COW_AT(1002de1b)
    goto L_1002de0a;
L_1002de1d: ;
    COW_AT(1002de1d)
    t53 = rd32(ebp + 0x48u);
    wr32(sp0 - 0x64u, t53);
    g->eax = t53;
    g->edx = rd32(t53);
    t54 = rd32(t53);
    g->esp = sp0 - 0x60u;
    t55 = cow_thiscall(g, rd32(t54 + 0x30u), ecx, 1, t53);
    t56 = g->ecx;
    t57 = g->edx;
    eax = t55;
    ecx = t56;
    edx = t57;
    COW_AT(1002de26)
    if (eax == 0u) goto L_1002de30;
    COW_AT(1002de2a)
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t58 = g->ecx;
    ecx = t58;
    COW_AT(1002de2e)
    goto L_1002de1d;
L_1002de30: ;
    COW_AT(1002de30)
    if (!(rd8(self + 0x34u) & 1u))
    {
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        goto L_1002de5c;
    }
L_1002de36: ;
    COW_AT(1002de36)
    t59 = rd32(ebp + 0x50u);
    wr32(sp0 - 0x64u, t59);
    g->eax = t59;
    g->edx = edx;
    t60 = rd32(t59);
    g->esp = sp0 - 0x60u;
    t61 = cow_thiscall(g, rd32(t60 + 0x30u), t60, 1, t59);
    t62 = g->ecx;
    t63 = g->edx;
    eax = t61;
    ecx = t62;
    edx = t63;
    COW_AT(1002de3f)
    if (eax == 0u) goto L_1002de49;
    COW_AT(1002de43)
    wr32(sp0 - 0x64u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t64 = g->edx;
    edx = t64;
    COW_AT(1002de47)
    goto L_1002de36;
L_1002de49: ;
    COW_AT(1002de49)
    t65 = rd32(ebp + 0x54u);
    wr32(sp0 - 0x64u, t65);
    g->eax = t65;
    g->edx = rd32(t65);
    t66 = rd32(t65);
    g->esp = sp0 - 0x60u;
    t67 = cow_thiscall(g, rd32(t66 + 0x30u), ecx, 1, t65);
    t68 = g->ecx;
    t69 = g->edx;
    eax = t67;
    ecx = t68;
    edx = t69;
    COW_AT(1002de52)
    if (eax == 0u)
    {
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        goto L_1002de5c;
    }
    COW_AT(1002de56)
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t70 = g->ecx;
    ecx = t70;
    COW_AT(1002de5a)
    goto L_1002de49;
L_1002de5c: ;
    COW_AT(1002de5c)
    wr32(sp0 - 0x40u, 0u);
    t71 = ((rd32(COW_IMG(0x103515bcu)) >> 7u & 0xfffffffeu) * (rd32(COW_IMG(0x104574acu)) >> 8u) & 0xff00u) | ((((rd32(COW_IMG(0x104574acu)) >> 8u & 0xffff0000u) | rd16(COW_IMG(0x103515beu))) * ((esi & 0xffff0000u) | rd16(COW_IMG(0x104574aeu))) & 0x7f80u) | 0xffc00000u) << 9u | (uint8_t)(rd32(COW_IMG(0x103515bcu)) * rd32(COW_IMG(0x104574acu)) >> 7u);
    wr32(sp0 - 0x64u, t71);
    wr32(sp0 - 0x68u, 0x3cu);
    t72 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t72);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t72) + 0xc8u), rd32(t72), 3, t72, 0x3cu, t71);
    ebx = t71;
    COW_AT(1002dec8)
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    t73 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t73);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t73) + 0xf4u), rd32(t73), 3, t73, 0u, 0u);
    COW_AT(1002dede)
    t74 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1045b648u), 0u);
    wr32(COW_IMG(0x1045b64cu), 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 2u);
    wr32(sp0 - 0x6cu, 0u);
    t75 = rd32(t74 + 0xcu);
    wr32(sp0 - 0x70u, t75);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t75) + 0xfcu), rd32(t75), 4, t75, 0u, 2u, 0u);
    COW_AT(1002df00)
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 5u);
    wr32(sp0 - 0x6cu, 0u);
    t76 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t76);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t76) + 0xfcu), rd32(t76), 4, t76, 0u, 5u, 0u);
    COW_AT(1002df16)
    wr32(sp0 - 0x64u, 5u);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 1u);
    t77 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t77);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t77) + 0xfcu), rd32(t77), 4, t77, 1u, 1u, 5u);
    COW_AT(1002df2e)
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 3u);
    wr32(sp0 - 0x6cu, 1u);
    t78 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t78);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t78) + 0xfcu), rd32(t78), 4, t78, 1u, 3u, 3u);
    COW_AT(1002df46)
    wr32(sp0 - 0x64u, 6u);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, 1u);
    t79 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t79);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t79) + 0xfcu), rd32(t79), 4, t79, 1u, 4u, 6u);
    COW_AT(1002df5e)
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 6u);
    wr32(sp0 - 0x6cu, 1u);
    t80 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t80);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t80, 1u, 6u, 3u);
    COW_AT(1002df76)
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x18u);
    wr32(sp0 - 0x6cu, 1u);
    t81 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t81);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t81) + 0xfcu), rd32(t81), 4, t81, 1u, 0x18u, 0u);
    COW_AT(1002df8d)
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0xbu);
    wr32(sp0 - 0x6cu, 1u);
    t82 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t82);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t82) + 0xfcu), rd32(t82), 4, t82, 1u, 0xbu, 0u);
    COW_AT(1002dfa4)
    if (rd8(rd32(sp0 - 0x44u) + 0x33u) - 2u > 0x30u)
    {
        eax = rd8(rd32(sp0 - 0x44u) + 0x33u) - 2u;
        edx = rd32(sp0 - 0x44u);
        goto L_1002e07a;
    }
    eax = rd8(rd32(sp0 - 0x44u) + 0x33u) - 2u;
    edx = rd32(sp0 - 0x44u);
    COW_AT(1002dfb9)
    t83 = rd32(COW_IMG(0x1002f0d4u) + rd8(COW_IMG(0x1002f0f8u) + eax) * 4u);
    switch (t83 - RD)
    {
    case 0x1002dfc8u: goto L_1002dfc8;
    case 0x1002dfd8u: goto L_1002dfd8;
    case 0x1002dfefu: goto L_1002dfef;
    case 0x1002e00au: goto L_1002e00a;
    case 0x1002e033u: goto L_1002e033;
    case 0x1002e055u: goto L_1002e055;
    case 0x1002e062u: goto L_1002e062;
    case 0x1002e06fu: goto L_1002e06f;
    case 0x1002e07au: goto L_1002e07a;
    default: rt_fatal(g, COW_IMG(0x1002dfc1u), "switch");
    }
    return;
L_1002dfc8: ;
    COW_AT(1002dfc8)
    wr8(arg2 + 0xa9u, 1u);
    edx = arg2;
L_1002e07a: ;
    COW_AT(1002e07a)
    if (rd16(rd32(sp0 - 0x48u)) == 0xffffu)
    {
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        goto L_1002f0c9;
    }
    eax = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x48u));
    esi = rd32(sp0 - 0x48u);
    edi = 0u;
    loc_48 = rd32(sp0 - 0x48u);
    loc_4c = rd32(sp0 - 0x4cu);
L_1002e08b: ;
    COW_AT(1002e08b)
    if ((int8_t)(eax >> 8u) >= 0)
    {
    COW_AT(1002e678)
        if ((int32_t)(uint16_t)eax > 17235)
        {
            eax = (uint16_t)eax;
            ecx = loc_48;
            esi = rd16(loc_48 + 2u);
            goto L_1002ebc4;
        }
        ecx = loc_48;
        esi = rd16(loc_48 + 2u);
        zf = (uint16_t)eax == 0x4353u;
        eax = (uint16_t)eax;
    COW_AT(1002e692)
        if (zf) goto L_1002ebb7;
    COW_AT(1002e698)
        if (eax == 0x43u) goto L_1002eba7;
    COW_AT(1002e6a1)
        if (eax != 0x54u) goto L_1002f0b8;
    COW_AT(1002e6aa)
        wr32(sp0 - 0x38u, esi * 3u);
        if (rd8(ebp + 0x68u) == 0u)
        {
            eax = (esi * 3u & 0xffffff00u) | rd8(ebp + 0x68u);
            loc_38 = esi * 3u;
        }
        else
        {
            eax = (esi * 3u & 0xffffff00u) | rd8(ebp + 0x68u);
            loc_38 = esi * 3u;
    COW_AT(1002e6bc)
            if (rd8(sp0 - 0x4eu) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x4eu);
    COW_AT(1002e6c8)
                t170 = rd32(ebp + 0x64u);
                wr32(sp0 - 0x64u, t170);
                g->eax = eax;
                g->ecx = t170;
                g->esp = sp0 - 0x60u;
                t171 = cow_cdecl(g, COW_IMG(0x1002f1c0u), 1, t170);
                t172 = g->ecx;
                eax = t171;
                ecx = t172;
    COW_AT(1002e6d1)
                wr32(sp0 - 0x68u, 0xcu);
                t173 = rd32(ebp + 0x44u);
                wr32(sp0 - 0x6cu, t173);
                wr32(sp0 - 0x70u, 0u);
                g->ecx = ecx;
                g->edx = t173;
                g->esp = sp0 - 0x64u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t173, 0xcu);
                t174 = g->ecx;
                t175 = g->edx;
                ecx = t174;
                edx = t175;
    COW_AT(1002e6de)
                wr32(sp0 - 0x74u, 0xcu);
                t176 = rd32(ebp + 0x48u);
                wr32(sp0 - 0x78u, t176);
                wr32(sp0 - 0x7cu, 1u);
                g->eax = t176;
                g->edx = edx;
                g->esp = sp0 - 0x70u;
                t177 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t176, 0xcu);
                t178 = g->edx;
                eax = t177;
                edx = t178;
    COW_AT(1002e6eb)
                wr32(sp0 - 0x80u, 8u);
                t179 = rd32(ebp + 0x4cu);
                wr32(sp0 - 0x84u, t179);
                wr32(sp0 - 0x88u, 2u);
                g->eax = eax;
                g->ecx = t179;
                g->edx = edx;
                g->esp = sp0 - 0x7cu;
                t180 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t179, 8u);
                t181 = g->ecx;
                t182 = g->edx;
                eax = t180;
                ecx = t181;
                edx = t182;
    COW_AT(1002e6f8)
                wr32(sp0 - 0x8cu, 0u);
                wr32(sp0 - 0x90u, 0u);
                wr32(sp0 - 0x94u, 3u);
                g->esp = sp0 - 0x88u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
    COW_AT(1002e703)
                wr32(sp0 - 0x64u, 0u);
                t183 = rd32(ebp + 0x40u);
                wr32(sp0 - 0x68u, t183);
                t184 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t184);
                g->edx = t183;
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t184, t183, 0u);
                t185 = g->edx;
                edx = t185;
    COW_AT(1002e71e)
                wr32(sp0 - 0x64u, esi);
                wr32(sp0 - 0x68u, edi);
                t186 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t186);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 4u);
                g->ebx = ebx;
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t186, edi, esi);
    COW_AT(1002e74b)
                t187 = esi + rd32(COW_IMG(0x104574a8u));
                t188 = rd32(COW_IMG(0x10456908u));
                wr32(COW_IMG(0x104574a8u), t187);
                t189 = rd32(sp0 - 0x44u);
                wr32(COW_IMG(0x10456908u), t188 + 1u);
                if (!(rd8(t189 + 0x34u) & 1u))
                {
                    loc_38 = rd32(sp0 - 0x38u);
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_4c = rd32(sp0 - 0x4cu);
                }
                else
                {
                    ecx = t188 + 1u;
                    edx = t189;
    COW_AT(1002e770)
                    wr32(sp0 - 0x64u, 0xcu);
                    t190 = rd32(ebp + 0x50u);
                    wr32(sp0 - 0x68u, t190);
                    wr32(sp0 - 0x6cu, 0u);
                    g->eax = t190;
                    g->edx = edx;
                    g->esp = sp0 - 0x60u;
                    t191 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t190, 0xcu);
                    t192 = g->edx;
                    eax = t191;
                    edx = t192;
    COW_AT(1002e77d)
                    wr32(sp0 - 0x70u, 0xcu);
                    t193 = rd32(ebp + 0x54u);
                    wr32(sp0 - 0x74u, t193);
                    wr32(sp0 - 0x78u, 1u);
                    g->esp = sp0 - 0x6cu;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t193, 0xcu);
    COW_AT(1002e78a)
                    wr32(sp0 - 0x64u, esi);
                    wr32(sp0 - 0x68u, edi);
                    t194 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t194);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 4u);
                    g->ebx = ebx;
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t194, edi, esi);
    COW_AT(1002e7b9)
                    t195 = esi + rd32(COW_IMG(0x104574a8u));
                    t196 = rd32(COW_IMG(0x10456908u));
                    wr32(COW_IMG(0x104574a8u), t195);
                    wr32(COW_IMG(0x10456908u), t196 + 1u);
                    loc_38 = rd32(sp0 - 0x38u);
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_4c = rd32(sp0 - 0x4cu);
                }
            }
    COW_AT(1002e7d2)
            t197 = esi * 0x1eu + loc_48 + 4u;
            wr32(sp0 - 0x48u, t197);
            eax = t197;
            edx = loc_48;
            loc_48 = t197;
        }
    COW_AT(1002e7e4)
        if (rd8(sp0 - 0x4eu) != 0u) goto L_1002eb98;
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x4eu);
    COW_AT(1002e7f0)
        if (rd8(COW_IMG(0x104570fcu)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104570fcu));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104570fcu));
    COW_AT(1002e7fd)
            wr32(sp0 - 0x64u, COW_IMG(0x10457158u));
            wr32(sp0 - 0x68u, ebx);
            wr32(sp0 - 0x6cu, COW_IMG(0x1045b648u));
            g->eax = eax;
            g->ecx = arg2 + 0x8cu;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t198 = cow_stdcall(g, COW_IMG(0x10025c40u), 3, COW_IMG(0x1045b648u), ebx, COW_IMG(0x10457158u));
            t199 = g->ecx;
            t200 = g->edx;
            eax = t198;
            ecx = t199;
            edx = t200;
    COW_AT(1002e817)
            if ((uint8_t)eax == 0u)
            {
                loc_38 = rd32(sp0 - 0x38u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
            else
            {
    COW_AT(1002e81f)
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x60u;
                t201 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
                t202 = g->ecx;
                eax = t201;
                ecx = t202;
    COW_AT(1002e824)
                if (rd8(ebp + 0x68u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(ebp + 0x68u);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(ebp + 0x68u);
    COW_AT(1002e82f)
                    wr32(sp0 - 0x64u, 0xcu);
                    t203 = rd32(ebp + 0x44u);
                    wr32(sp0 - 0x68u, t203);
                    wr32(sp0 - 0x6cu, 0u);
                    g->ecx = ecx;
                    g->edx = t203;
                    g->esp = sp0 - 0x60u;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t203, 0xcu);
                    t204 = g->ecx;
                    t205 = g->edx;
                    ecx = t204;
                    edx = t205;
    COW_AT(1002e83c)
                    wr32(sp0 - 0x70u, 0xcu);
                    t206 = rd32(ebp + 0x48u);
                    wr32(sp0 - 0x74u, t206);
                    wr32(sp0 - 0x78u, 1u);
                    g->eax = t206;
                    g->edx = edx;
                    g->esp = sp0 - 0x6cu;
                    t207 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t206, 0xcu);
                    t208 = g->edx;
                    eax = t207;
                    edx = t208;
    COW_AT(1002e849)
                    wr32(sp0 - 0x7cu, 8u);
                    t209 = rd32(ebp + 0x4cu);
                    wr32(sp0 - 0x80u, t209);
                    wr32(sp0 - 0x84u, 2u);
                    g->eax = eax;
                    g->ecx = t209;
                    g->edx = edx;
                    g->esp = sp0 - 0x78u;
                    t210 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t209, 8u);
                    t211 = g->ecx;
                    t212 = g->edx;
                    eax = t210;
                    ecx = t211;
                    edx = t212;
    COW_AT(1002e856)
                    wr32(sp0 - 0x88u, 0u);
                    wr32(sp0 - 0x8cu, 0u);
                    wr32(sp0 - 0x90u, 3u);
                    g->esp = sp0 - 0x84u;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
    COW_AT(1002e861)
                    wr32(sp0 - 0x64u, 0u);
                    t213 = rd32(ebp + 0x40u);
                    wr32(sp0 - 0x68u, t213);
                    t214 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x6cu, t214);
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t214, t213, 0u);
    COW_AT(1002e87c)
                    wr32(sp0 - 0x64u, esi);
                    t215 = rd32(sp0 - 0x4cu);
                    wr32(sp0 - 0x68u, t215);
                    t216 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t216);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 4u);
                    g->ebx = ebx;
                    g->eax = t216;
                    g->esp = sp0 - 0x60u;
                    t217 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t216, t215, esi);
                    eax = t217;
                    edi = t215;
    COW_AT(1002e8ad)
                    t218 = rd32(COW_IMG(0x10456908u)) + 1u;
                    t219 = rd32(sp0 - 0x44u);
                    wr32(COW_IMG(0x10456908u), t218);
                    if (!(rd8(t219 + 0x34u) & 1u))
                    {
                        eax = (eax & 0xffffff00u) | rd8(t219 + 0x34u);
                    }
                    else
                    {
                        ecx = t218;
                        edx = t219;
    COW_AT(1002e8c5)
                        wr32(sp0 - 0x64u, 0xcu);
                        t220 = rd32(ebp + 0x50u);
                        wr32(sp0 - 0x68u, t220);
                        wr32(sp0 - 0x6cu, 0u);
                        g->eax = t220;
                        g->edx = edx;
                        g->esp = sp0 - 0x60u;
                        t221 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t220, 0xcu);
                        t222 = g->edx;
                        eax = t221;
                        edx = t222;
    COW_AT(1002e8d2)
                        wr32(sp0 - 0x70u, 0xcu);
                        t223 = rd32(ebp + 0x54u);
                        wr32(sp0 - 0x74u, t223);
                        wr32(sp0 - 0x78u, 1u);
                        g->esp = sp0 - 0x6cu;
                        cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t223, 0xcu);
    COW_AT(1002e8df)
                        wr32(sp0 - 0x64u, esi);
                        wr32(sp0 - 0x68u, edi);
                        t224 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                        wr32(sp0 - 0x6cu, t224);
                        wr32(sp0 - 0x70u, 0u);
                        wr32(sp0 - 0x74u, 4u);
                        g->ebx = ebx;
                        g->eax = rd32(ebp + 0x60u);
                        t225 = rd32(ebp + 0x60u);
                        g->esp = sp0 - 0x60u;
                        t226 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t224, edi, esi);
                        eax = t226;
    COW_AT(1002e90e)
                        wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
                    }
                }
    COW_AT(1002e914)
                t227 = rd32(sp0 - 0x40u);
                wr32(sp0 - 0x64u, t227);
                g->eax = eax;
                g->edx = arg2;
                g->esp = sp0 - 0x60u;
                t228 = cow_stdcall(g, COW_IMG(0x10025f70u), 1, t227);
                t229 = g->edx;
                eax = t228;
                edx = t229;
                loc_38 = rd32(sp0 - 0x38u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
        }
    COW_AT(1002e928)
        if (rd8(COW_IMG(0x104572b0u)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104572b0u));
        }
        else
        {
    COW_AT(1002e935)
            wr32(sp0 - 0x64u, COW_IMG(0x104574f8u));
            wr32(sp0 - 0x68u, ebx);
            wr32(sp0 - 0x6cu, COW_IMG(0x1045b648u));
            g->eax = arg2;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t230 = cow_thiscall(g, COW_IMG(0x10025330u), arg2 + 0x90u, 3, COW_IMG(0x1045b648u), ebx, COW_IMG(0x104574f8u));
            t231 = g->ecx;
            t232 = g->edx;
            eax = t230;
            ecx = t231;
            edx = t232;
    COW_AT(1002e94f)
            if ((uint8_t)eax == 0u)
            {
                loc_38 = rd32(sp0 - 0x38u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
            else
            {
    COW_AT(1002e957)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                t233 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
                t234 = g->edx;
                eax = t233;
                edx = t234;
    COW_AT(1002e95c)
                if (rd8(ebp + 0x68u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(ebp + 0x68u);
    COW_AT(1002e967)
                    wr32(sp0 - 0x64u, 0xcu);
                    t235 = rd32(ebp + 0x44u);
                    wr32(sp0 - 0x68u, t235);
                    wr32(sp0 - 0x6cu, 0u);
                    g->eax = eax;
                    g->ecx = t235;
                    g->esp = sp0 - 0x60u;
                    t236 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t235, 0xcu);
                    t237 = g->ecx;
                    eax = t236;
                    ecx = t237;
    COW_AT(1002e974)
                    wr32(sp0 - 0x70u, 0xcu);
                    t238 = rd32(ebp + 0x48u);
                    wr32(sp0 - 0x74u, t238);
                    wr32(sp0 - 0x78u, 1u);
                    g->ecx = ecx;
                    g->edx = t238;
                    g->esp = sp0 - 0x6cu;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t238, 0xcu);
                    t239 = g->ecx;
                    t240 = g->edx;
                    ecx = t239;
                    edx = t240;
    COW_AT(1002e981)
                    wr32(sp0 - 0x7cu, 8u);
                    t241 = rd32(ebp + 0x4cu);
                    wr32(sp0 - 0x80u, t241);
                    wr32(sp0 - 0x84u, 2u);
                    g->eax = t241;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x78u;
                    t242 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t241, 8u);
                    t243 = g->ecx;
                    t244 = g->edx;
                    eax = t242;
                    ecx = t243;
                    edx = t244;
    COW_AT(1002e98e)
                    wr32(sp0 - 0x88u, 0u);
                    wr32(sp0 - 0x8cu, 0u);
                    wr32(sp0 - 0x90u, 3u);
                    g->esp = sp0 - 0x84u;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
    COW_AT(1002e999)
                    wr32(sp0 - 0x64u, 0u);
                    t245 = rd32(ebp + 0x40u);
                    wr32(sp0 - 0x68u, t245);
                    t246 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x6cu, t246);
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), t245, 3, t246, t245, 0u);
    COW_AT(1002e9b4)
                    wr32(sp0 - 0x64u, esi);
                    t247 = rd32(sp0 - 0x4cu);
                    wr32(sp0 - 0x68u, t247);
                    t248 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t248);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 4u);
                    g->ebx = ebx;
                    g->eax = rd32(ebp + 0x60u);
                    g->edx = t248;
                    t249 = rd32(ebp + 0x60u);
                    g->esp = sp0 - 0x60u;
                    t250 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t248, t247, esi);
                    t251 = g->edx;
                    eax = t250;
                    edx = t251;
                    edi = t247;
    COW_AT(1002e9e4)
                    t252 = rd32(COW_IMG(0x10456908u)) + 1u;
                    wr32(COW_IMG(0x10456908u), t252);
                    if (rd8(rd32(sp0 - 0x44u) + 0x34u) & 1u)
                    {
                        ecx = rd32(sp0 - 0x44u);
    COW_AT(1002e9fb)
                        wr32(sp0 - 0x64u, 0xcu);
                        t253 = rd32(ebp + 0x50u);
                        wr32(sp0 - 0x68u, t253);
                        wr32(sp0 - 0x6cu, 0u);
                        g->ecx = ecx;
                        g->edx = t253;
                        g->esp = sp0 - 0x60u;
                        cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t253, 0xcu);
                        t254 = g->ecx;
                        t255 = g->edx;
                        ecx = t254;
                        edx = t255;
    COW_AT(1002ea08)
                        wr32(sp0 - 0x70u, 0xcu);
                        t256 = rd32(ebp + 0x54u);
                        wr32(sp0 - 0x74u, t256);
                        wr32(sp0 - 0x78u, 1u);
                        g->esp = sp0 - 0x6cu;
                        cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t256, 0xcu);
    COW_AT(1002ea15)
                        wr32(sp0 - 0x64u, esi);
                        wr32(sp0 - 0x68u, edi);
                        t257 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                        wr32(sp0 - 0x6cu, t257);
                        wr32(sp0 - 0x70u, 0u);
                        wr32(sp0 - 0x74u, 4u);
                        g->ebx = ebx;
                        g->edx = (uint16_t)rd32(COW_IMG(0x1045b618u));
                        t258 = rd32(COW_IMG(0x1045b618u));
                        g->esp = sp0 - 0x60u;
                        cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t257, edi, esi);
                        t259 = g->edx;
                        edx = t259;
    COW_AT(1002ea46)
                        wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
                    }
                }
    COW_AT(1002ea4c)
                t260 = rd32(sp0 - 0x40u);
                wr32(sp0 - 0x64u, t260);
                g->eax = t260;
                g->esp = sp0 - 0x60u;
                t261 = cow_thiscall(g, COW_IMG(0x100255c0u), arg2 + 0x90u, 1, t260);
                eax = t261;
                loc_38 = rd32(sp0 - 0x38u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
        }
    COW_AT(1002ea60)
        wr32(sp0 - 0x64u, ebx);
        wr32(sp0 - 0x68u, COW_IMG(0x1045b648u));
        g->ebx = ebx;
        g->eax = eax;
        g->edx = arg2;
        g->esp = sp0 - 0x60u;
        t262 = cow_thiscall(g, COW_IMG(0x10033800u), arg2 + 0x48u, 2, COW_IMG(0x1045b648u), ebx);
        t263 = g->ecx;
        t264 = g->edx;
        eax = t262;
        ecx = t263;
        edx = t264;
    COW_AT(1002ea72)
        if ((uint8_t)eax == 0u) goto L_1002eb94;
    COW_AT(1002ea7a)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t265 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
        t266 = g->ecx;
        t267 = g->edx;
        eax = t265;
        ecx = t266;
        edx = t267;
    COW_AT(1002ea7f)
        if (rd8(ebp + 0x68u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ebp + 0x68u);
    COW_AT(1002eb70)
            edi = rd32(sp0 - 0x4cu);
        }
        else
        {
    COW_AT(1002ea8a)
            wr32(sp0 - 0x64u, 0xcu);
            t268 = rd32(ebp + 0x44u);
            wr32(sp0 - 0x68u, t268);
            wr32(sp0 - 0x6cu, 0u);
            g->eax = t268;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t269 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t268, 0xcu);
            t270 = g->edx;
            eax = t269;
            edx = t270;
    COW_AT(1002ea97)
            wr32(sp0 - 0x70u, 0xcu);
            t271 = rd32(ebp + 0x48u);
            wr32(sp0 - 0x74u, t271);
            wr32(sp0 - 0x78u, 1u);
            g->eax = eax;
            g->ecx = t271;
            g->esp = sp0 - 0x6cu;
            t272 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t271, 0xcu);
            t273 = g->ecx;
            eax = t272;
            ecx = t273;
    COW_AT(1002eaa4)
            wr32(sp0 - 0x7cu, 8u);
            t274 = rd32(ebp + 0x4cu);
            wr32(sp0 - 0x80u, t274);
            wr32(sp0 - 0x84u, 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = t274;
            g->esp = sp0 - 0x78u;
            t275 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t274, 8u);
            t276 = g->ecx;
            t277 = g->edx;
            eax = t275;
            ecx = t276;
            edx = t277;
    COW_AT(1002eab1)
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0u);
            wr32(sp0 - 0x90u, 3u);
            g->esp = sp0 - 0x84u;
            cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
    COW_AT(1002eabc)
            wr32(sp0 - 0x64u, 0u);
            t278 = rd32(ebp + 0x40u);
            wr32(sp0 - 0x68u, t278);
            t279 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x6cu, t279);
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t279, t278, 0u);
    COW_AT(1002ead6)
            wr32(sp0 - 0x64u, esi);
            t280 = rd32(sp0 - 0x4cu);
            wr32(sp0 - 0x68u, t280);
            t281 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
            wr32(sp0 - 0x6cu, t281);
            wr32(sp0 - 0x70u, 0u);
            wr32(sp0 - 0x74u, 4u);
            g->ebx = ebx;
            g->eax = t281;
            g->esp = sp0 - 0x60u;
            t282 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t281, t280, esi);
            eax = t282;
            edi = t280;
    COW_AT(1002eb07)
            t283 = rd32(COW_IMG(0x10456908u)) + 1u;
            t284 = rd32(sp0 - 0x44u);
            wr32(COW_IMG(0x10456908u), t283);
            if (!(rd8(t284 + 0x34u) & 1u))
            {
                eax = (eax & 0xffffff00u) | rd8(t284 + 0x34u);
            }
            else
            {
                ecx = t283;
                edx = t284;
    COW_AT(1002eb1f)
                wr32(sp0 - 0x64u, 0xcu);
                t285 = rd32(ebp + 0x50u);
                wr32(sp0 - 0x68u, t285);
                wr32(sp0 - 0x6cu, 0u);
                g->eax = t285;
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                t286 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t285, 0xcu);
                t287 = g->edx;
                eax = t286;
                edx = t287;
    COW_AT(1002eb2c)
                wr32(sp0 - 0x70u, 0xcu);
                t288 = rd32(ebp + 0x54u);
                wr32(sp0 - 0x74u, t288);
                wr32(sp0 - 0x78u, 1u);
                g->esp = sp0 - 0x6cu;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t288, 0xcu);
    COW_AT(1002eb39)
                wr32(sp0 - 0x64u, esi);
                wr32(sp0 - 0x68u, edi);
                t289 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t289);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 4u);
                g->ebx = ebx;
                g->eax = rd32(ebp + 0x60u);
                t290 = rd32(ebp + 0x60u);
                g->esp = sp0 - 0x60u;
                t291 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t289, edi, esi);
                eax = t291;
    COW_AT(1002eb68)
                wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
            }
        }
    COW_AT(1002eb74)
        t292 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x64u, t292);
        g->esp = sp0 - 0x60u;
        cow_fastcall(g, COW_IMG(0x10033a70u), arg2 + 0x48u, arg2, 1, t292);
        t293 = g->edx;
        edx = t293;
    COW_AT(1002eb85)
        t294 = rd32(sp0 - 0x38u);
        wr32(arg5, rd32(arg5) + t294);
        eax = t294;
        loc_48 = rd32(sp0 - 0x48u);
L_1002f0b2: ;
    COW_AT(1002f0b2)
        wr32(sp0 - 0x4cu, eax + edi);
        loc_4c = eax + edi;
        edi = eax + edi;
    }
    else
    {
    COW_AT(1002e093)
        if ((eax >> 4u & 0xfu) == 0u)
        {
    COW_AT(1002e5e6)
            wr32(sp0 - 0x64u, 2u);
            wr32(sp0 - 0x68u, 2u);
            wr32(sp0 - 0x6cu, 0u);
            t159 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x70u, t159);
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, rd32(rd32(t159) + 0xfcu), rd32(t159), 4, t159, 0u, 2u, 2u);
    COW_AT(1002e5fe)
            wr32(sp0 - 0x64u, 2u);
            wr32(sp0 - 0x68u, 5u);
            wr32(sp0 - 0x6cu, 0u);
            t160 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x70u, t160);
            g->edx = rd32(COW_IMG(0x1045666cu));
            t161 = rd32(COW_IMG(0x1045666cu));
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, rd32(rd32(t160) + 0xfcu), rd32(t160), 4, t160, 0u, 5u, 2u);
            t162 = g->edx;
            edx = t162;
    COW_AT(1002e616)
            if (!(rd8(esi) & 1u))
            {
    COW_AT(1002e61b)
                t163 = rd32(sp0 - 0x44u);
                wr32(sp0 - 0x64u, t163);
                wr32(sp0 - 0x68u, esi + 2u);
                g->eax = esi + 2u;
                g->edx = t163;
                g->esp = sp0 - 0x60u;
                t164 = cow_thiscall(g, COW_IMG(0x1003af10u), rd32(COW_IMG(0x1047b970u)), 2, esi + 2u, t163);
                t165 = g->edx;
                eax = t164;
                edx = t165;
    COW_AT(1002e62f)
                wr8(esi, rd8(esi) | 1u);
                wr32(esi + 2u, eax);
            }
    COW_AT(1002e635)
            if (rd32(esi + 2u) == 0u)
            {
                eax = rd32(esi + 2u);
            }
            else
            {
                eax = rd32(esi + 2u);
    COW_AT(1002e63c)
                if (eax != rd32(COW_IMG(0x1045b648u)))
                {
    COW_AT(1002e644)
                    wr32(COW_IMG(0x1045b648u), eax);
                    if (rd32(eax + 0x40u) == 0u)
                    {
    COW_AT(1002e654)
                        eax = rd32(eax + 0x44u);
                    }
                    else
                    {
                        ecx = rd32(eax + 0x40u);
    COW_AT(1002e650)
                        eax = ecx;
                    }
    COW_AT(1002e657)
                    wr32(sp0 - 0x64u, eax);
                    wr32(sp0 - 0x68u, 0u);
                    t166 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x6cu, t166);
                    g->eax = eax;
                    g->edx = rd32(t166);
                    t167 = rd32(t166);
                    g->esp = sp0 - 0x60u;
                    t168 = cow_thiscall(g, rd32(t167 + 0xf4u), t166, 3, t166, 0u, eax);
                    t169 = g->edx;
                    eax = t168;
                    edx = t169;
                }
            }
    COW_AT(1002e66c)
            wr32(sp0 - 0x48u, esi + 0x12u);
            loc_48 = esi + 0x12u;
            loc_4c = rd32(sp0 - 0x4cu);
        }
        else
        {
            eax = eax >> 4u & 0xfu;
    COW_AT(1002e0a2)
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
    COW_AT(1002e0a9)
                esi = loc_48 + 2u;
                edi = sp0 - 0x2cu;
                ecx = 0xbu;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                if (rd8(ebp + 0x69u) == 0u)
                {
                    eax = rd32(sp0 - 0x20u) >> 8u & 0xfu;
                }
                else
                {
                    eax = rd32(sp0 - 0x20u) >> 8u & 0xfu;
    COW_AT(1002e0cc)
                    if (rd16(sp0 - 0x10u) != 0u)
                    {
    COW_AT(1002e0d4)
                        eax = 8u;
                    }
                }
    COW_AT(1002e0d9)
                wr32(sp0 - 0x40u, 0u);
                t84 = rd8(arg2 + eax + 0xa8u);
                wr8(sp0 - 0x4eu, t84 != 0u);
                wr32(sp0 - 0x38u, COW_IMG(0x104572b8u));
                eax = COW_IMG(0x104572b8u);
                ecx = arg2;
                edx = (edx & 0xffffff00u) | t84;
                loc_40 = 0u;
                loc_38 = COW_IMG(0x104572b8u);
L_1002e0fc: ;
    COW_AT(1002e0fc)
                if (rd32(eax) != 0u)
                {
    COW_AT(1002e101)
                    d85 = (double)rdf32(sp0 - 0x1cu);
                    esi = loc_38;
                    edi = COW_IMG(0x10457568u);
                    ecx = 0x1au;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    d86 = fr(g, d85 * (double)rdf32(COW_IMG(0x1045756cu)));
                    wrf32(COW_IMG(0x1045756cu), (float)d86);
                    d87 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x10457570u)));
                    wrf32(COW_IMG(0x10457570u), (float)d87);
                    d88 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x10457574u)));
                    wr32(sp0 - 0x64u, COW_IMG(0x10457568u));
                    wr32(sp0 - 0x68u, loc_40);
                    t89 = rd32(COW_IMG(0x1045666cu));
                    wrf32(COW_IMG(0x10457574u), (float)d88);
                    g->edx = loc_40;
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, COW_IMG(0x1000bf30u), t89, 2, loc_40, COW_IMG(0x10457568u));
                    t90 = g->ecx;
                    t91 = g->edx;
                    ecx = t90;
                    edx = t91;
    COW_AT(1002e156)
                    eax = rd32(sp0 - 0x38u);
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_4c = rd32(sp0 - 0x4cu);
                }
    COW_AT(1002e15a)
                wr32(sp0 - 0x40u, loc_40 + 1u);
                wr32(sp0 - 0x38u, eax + 0x68u);
                if ((int32_t)(eax + 0x68u) < (int32_t)COW_IMG(0x10457458u))
                {
                    loc_40 = loc_40 + 1u;
                    loc_38 = eax + 0x68u;
                    eax = eax + 0x68u;
                    goto L_1002e0fc;
                }
                eax = eax + 0x68u;
    COW_AT(1002e171)
                wr32(sp0 - 0x38u, rd8(COW_IMG(0x104571dau)));
                g->edx = edx;
                t92 = rd8(COW_IMG(0x104571dau));
                d93 = fr(g, (double)(int32_t)rd8(COW_IMG(0x104571dau)) * (double)rdf32(sp0 - 0x1cu));
                fpush(g, d93);
                g->esp = sp0 - 0x60u;
                t94 = cow_call_regs(g, COW_IMG(0x10311c6cu), t92, g->ecx, g->edx, 1, 0);
                t95 = g->edx;
                eax = t94;
                edx = t95;
    COW_AT(1002e18c)
                if (eax > 0xffu)
                {
    COW_AT(1002e193)
                    eax = 0xffu;
                }
    COW_AT(1002e198)
                wr8(sp0 - 0x3au, (uint8_t)eax);
                wr32(sp0 - 0x38u, rd8(COW_IMG(0x104571d9u)));
                g->ecx = rd8(COW_IMG(0x104571d9u));
                g->edx = edx;
                t96 = rd8(COW_IMG(0x104571d9u));
                d97 = fr(g, (double)(int32_t)rd8(COW_IMG(0x104571d9u)) * (double)rdf32(sp0 - 0x1cu));
                fpush(g, d97);
                g->esp = sp0 - 0x60u;
                t98 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t99 = g->ecx;
                t100 = g->edx;
                eax = t98;
                ecx = t99;
                edx = t100;
    COW_AT(1002e1b5)
                if (eax > 0xffu)
                {
    COW_AT(1002e1bc)
                    eax = 0xffu;
                }
    COW_AT(1002e1c1)
                wr8(sp0 - 0x3bu, (uint8_t)eax);
                t101 = (uint8_t)rd32(COW_IMG(0x104571d8u));
                wr32(sp0 - 0x34u, t101);
                wr32(sp0 - 0x30u, 0u);
                d102 = fr(g, (double)(int64_t)cow_i64(t101, 0u) * (double)rdf32(sp0 - 0x1cu));
                fpush(g, d102);
                g->esp = sp0 - 0x60u;
                t103 = cow_call_regs(g, COW_IMG(0x10311c6cu), t101, g->ecx, g->edx, 1, 0);
                eax = t103;
    COW_AT(1002e1e6)
                if (eax > 0xffu)
                {
    COW_AT(1002e1ed)
                    eax = 0xffu;
                }
    COW_AT(1002e1f2)
                wr8(sp0 - 0x3cu, (uint8_t)eax);
                if (rd8(COW_IMG(0x104571dbu)) <= 0xffu)
                {
                    eax = rd8(COW_IMG(0x104571dbu));
                }
                else
                {
    COW_AT(1002e204)
                    eax = 0xffu;
                }
    COW_AT(1002e209)
                t104 = rd32(COW_IMG(0x1045666cu));
                wr8(sp0 - 0x39u, (uint8_t)eax);
                t105 = rd32(sp0 - 0x3cu);
                wr32(sp0 - 0x64u, t105);
                wr32(sp0 - 0x68u, 0x8bu);
                t106 = rd32(t104 + 0xcu);
                wr32(sp0 - 0x6cu, t106);
                g->eax = t106;
                g->edx = t105;
                t107 = rd32(rd32(t104 + 0xcu));
                g->esp = sp0 - 0x60u;
                t108 = cow_thiscall(g, rd32(t107 + 0xc8u), t107, 3, t106, 0x8bu, t105);
                t109 = g->ecx;
                t110 = g->edx;
                eax = t108;
                ecx = t109;
                edx = t110;
    COW_AT(1002e229)
                if (rd16(sp0 - 0x1eu) == 0u) goto L_1002e39a;
    COW_AT(1002e234)
                if (rd32(COW_IMG(0x1045745cu)) == 0u)
                {
                    eax = rd32(COW_IMG(0x1045745cu));
                    goto L_1002e39a;
                }
                eax = rd32(COW_IMG(0x1045745cu));
    COW_AT(1002e241)
                if (rd32(eax) == 0u) goto L_1002e39a;
    COW_AT(1002e249)
                if (rd8(sp0 - 0x4du) != 1u) goto L_1002e39a;
    COW_AT(1002e254)
                d111 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
                wr32(sp0 - 0x40u, 2u);
                g->edx = edx;
                fpush(g, d111);
                g->esp = sp0 - 0x60u;
                t112 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t113 = g->edx;
                eax = t112;
                edx = t113;
    COW_AT(1002e26b)
                t114 = (ebx & 0xffffffu) | eax << 0x18u;
                wr32(sp0 - 0x64u, t114);
                wr32(sp0 - 0x68u, 0x3cu);
                t115 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t115);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(t115) + 0xc8u), rd32(t115), 3, t115, 0x3cu, t114);
                ebx = t114;
    COW_AT(1002e28a)
                wr32(sp0 - 0x64u, 0x12u);
                wr32(sp0 - 0x68u, 1u);
                wr32(sp0 - 0x6cu, 1u);
                t116 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t116);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(t116) + 0xfcu), rd32(t116), 4, t116, 1u, 1u, 0x12u);
    COW_AT(1002e2a2)
                wr32(sp0 - 0x64u, 2u);
                wr32(sp0 - 0x68u, 3u);
                wr32(sp0 - 0x6cu, 1u);
                t117 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t117);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(t117) + 0xfcu), rd32(t117), 4, t117, 1u, 3u, 2u);
    COW_AT(1002e2ba)
                wr32(sp0 - 0x64u, 7u);
                wr32(sp0 - 0x68u, 4u);
                wr32(sp0 - 0x6cu, 1u);
                t118 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t118);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(t118) + 0xfcu), rd32(t118), 4, t118, 1u, 4u, 7u);
    COW_AT(1002e2d2)
                wr32(sp0 - 0x64u, 2u);
                wr32(sp0 - 0x68u, 6u);
                wr32(sp0 - 0x6cu, 1u);
                t119 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t119);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(t119) + 0xfcu), rd32(t119), 4, t119, 1u, 6u, 2u);
    COW_AT(1002e2ea)
                wr32(sp0 - 0x64u, COW_IMG(0x10457108u));
                wr32(sp0 - 0x68u, 0x11u);
                t120 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t120);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(t120) + 0x94u), rd32(t120), 3, t120, 0x11u, COW_IMG(0x10457108u));
    COW_AT(1002e303)
                wr32(sp0 - 0x64u, 3u);
                wr32(sp0 - 0x68u, 0x18u);
                wr32(sp0 - 0x6cu, 1u);
                t121 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t121);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(t121) + 0xfcu), rd32(t121), 4, t121, 1u, 0x18u, 3u);
    COW_AT(1002e31b)
                wr32(sp0 - 0x64u, 0x10001u);
                wr32(sp0 - 0x68u, 0xbu);
                wr32(sp0 - 0x6cu, 1u);
                t122 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t122);
                g->edx = rd32(COW_IMG(0x1045666cu));
                t123 = rd32(COW_IMG(0x1045666cu));
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(t122) + 0xfcu), rd32(t122), 4, t122, 1u, 0xbu, 0x10001u);
                t124 = g->edx;
                edx = t124;
    COW_AT(1002e336)
                t125 = rd32(COW_IMG(0x1045745cu));
                wr32(COW_IMG(0x1045b64cu), 0u);
                if (t125 == 0u) goto L_1002e5d2;
                eax = t125;
    COW_AT(1002e349)
                if (rd32(eax) == 0u) goto L_1002e5d2;
                eax = rd32(eax);
    COW_AT(1002e353)
                if (rd32(eax + 0x30u) == 0u) goto L_1002e5d2;
                eax = rd32(eax + 0x30u);
    COW_AT(1002e35e)
                wr32(COW_IMG(0x1045b64cu), eax);
                if (rd32(eax + 0x40u) == 0u)
                {
    COW_AT(1002e36e)
                    eax = rd32(eax + 0x44u);
                }
                else
                {
                    ecx = rd32(eax + 0x40u);
    COW_AT(1002e36a)
                    eax = ecx;
                }
    COW_AT(1002e371)
                wr32(sp0 - 0x64u, eax);
                wr32(sp0 - 0x68u, 1u);
                t126 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t126);
                g->edx = rd32(t126);
                t127 = rd32(t126);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(t127 + 0xf4u), t126, 3, t126, 1u, eax);
                t128 = g->edx;
                edx = t128;
    COW_AT(1002e386)
                t129 = rd32(sp0 - 0x48u) + 0x2eu;
                wr32(sp0 - 0x48u, t129);
                eax = t129;
                edi = rd32(sp0 - 0x4cu);
                loc_48 = t129;
                loc_4c = rd32(sp0 - 0x4cu);
            }
        }
    }
L_1002f0b8: ;
    COW_AT(1002f0b8)
    if (rd16(loc_48) != 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(loc_48);
        esi = loc_48;
        goto L_1002e08b;
    }
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_60 = rd32(sp0 - 0x60u);
L_1002f0c9: ;
    COW_AT(1002f0c9)
    g->ebx = loc_54;
    g->esi = loc_5c;
    g->edi = loc_60;
    g->ebp = loc_58;
    return;
L_1002dfd8: ;
    COW_AT(1002dfd8)
    wr8(arg2 + 0xa9u, 1u);
    wr8(arg2 + 0xaau, 1u);
    eax = arg2;
    goto L_1002e07a;
L_1002dfef: ;
    COW_AT(1002dfef)
    wr8(arg2 + 0xa9u, 1u);
    wr8(arg2 + 0xaau, 1u);
    wr8(arg2 + 0xabu, 1u);
    eax = arg2;
    goto L_1002e07a;
L_1002e00a: ;
    COW_AT(1002e00a)
    wr8(arg2 + 0xa9u, 1u);
    wr8(arg2 + 0xaau, 1u);
    wr8(arg2 + 0xabu, 1u);
    wr8(arg2 + 0xb0u, 1u);
    wr8(arg2 + 0xacu, 1u);
    eax = arg2;
    goto L_1002e07a;
L_1002e033: ;
    COW_AT(1002e033)
    wr8(arg2 + 0xa9u, 1u);
    wr8(arg2 + 0xaau, 1u);
    wr8(arg2 + 0xabu, 1u);
    wr8(arg2 + 0xb0u, 1u);
    eax = arg2;
    goto L_1002e07a;
L_1002e055: ;
    COW_AT(1002e055)
    wr8(arg2 + 0xadu, 1u);
    eax = arg2;
    goto L_1002e07a;
L_1002e062: ;
    COW_AT(1002e062)
    wr8(arg2 + 0xafu, 1u);
    goto L_1002e07a;
L_1002e06f: ;
    COW_AT(1002e06f)
    wr8(arg2 + 0xaeu, 1u);
    edx = arg2;
    goto L_1002e07a;
L_1002e39a: ;
    COW_AT(1002e39a)
    d130 = (double)rdf32(sp0 - 4u);
    if (d130 == rdf64(COW_IMG(0x1032a108u))) goto L_1002e4dd;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d130, rdf64(COW_IMG(0x1032a108u)), 0u);
    COW_AT(1002e3af)
    if (rd8(sp0 - 0x4du) != 1u) goto L_1002e4dd;
    COW_AT(1002e3ba)
    d131 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 - 0x40u, 1u);
    g->edx = edx;
    fpush(g, d131);
    g->esp = sp0 - 0x60u;
    t132 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t133 = g->edx;
    eax = t132;
    edx = t133;
    COW_AT(1002e3d1)
    t134 = (ebx & 0xffffffu) | eax << 0x18u;
    wr32(sp0 - 0x64u, t134);
    wr32(sp0 - 0x68u, 0x3cu);
    t135 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t135);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t135) + 0xc8u), rd32(t135), 3, t135, 0x3cu, t134);
    ebx = t134;
    COW_AT(1002e3f0)
    wr32(sp0 - 0x64u, 0x12u);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 1u);
    t136 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t136);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t136) + 0xfcu), rd32(t136), 4, t136, 1u, 1u, 0x12u);
    COW_AT(1002e408)
    wr32(sp0 - 0x64u, 2u);
    wr32(sp0 - 0x68u, 3u);
    wr32(sp0 - 0x6cu, 1u);
    t137 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t137);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t137) + 0xfcu), rd32(t137), 4, t137, 1u, 3u, 2u);
    COW_AT(1002e420)
    wr32(sp0 - 0x64u, 7u);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, 1u);
    t138 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t138);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t138) + 0xfcu), rd32(t138), 4, t138, 1u, 4u, 7u);
    COW_AT(1002e438)
    wr32(sp0 - 0x64u, 2u);
    wr32(sp0 - 0x68u, 6u);
    wr32(sp0 - 0x6cu, 1u);
    t139 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t139);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t139) + 0xfcu), rd32(t139), 4, t139, 1u, 6u, 2u);
    COW_AT(1002e450)
    wr32(sp0 - 0x64u, COW_IMG(0x10457198u));
    wr32(sp0 - 0x68u, 0x11u);
    t140 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t140);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t140) + 0x94u), rd32(t140), 3, t140, 0x11u, COW_IMG(0x10457198u));
    COW_AT(1002e469)
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 0x18u);
    wr32(sp0 - 0x6cu, 1u);
    t141 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t141);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t141) + 0xfcu), rd32(t141), 4, t141, 1u, 0x18u, 3u);
    COW_AT(1002e481)
    wr32(sp0 - 0x64u, 0x30001u);
    wr32(sp0 - 0x68u, 0xbu);
    wr32(sp0 - 0x6cu, 1u);
    t142 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t142);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t142) + 0xfcu), rd32(t142), 4, t142, 1u, 0xbu, 0x30001u);
    COW_AT(1002e49c)
    t143 = rd32(COW_IMG(0x104570f4u));
    wr32(COW_IMG(0x1045b64cu), t143);
    if (rd32(t143 + 0x40u) == 0u)
    {
        eax = t143;
    COW_AT(1002e4b1)
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(t143 + 0x40u);
    COW_AT(1002e4ad)
        eax = ecx;
    }
    COW_AT(1002e4b4)
    wr32(sp0 - 0x64u, eax);
    wr32(sp0 - 0x68u, 1u);
    t144 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t144);
    g->edx = t144;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t144) + 0xf4u), rd32(t144), 3, t144, 1u, eax);
    t145 = g->edx;
    edx = t145;
    COW_AT(1002e4c9)
    t146 = rd32(sp0 - 0x48u) + 0x2eu;
    wr32(sp0 - 0x48u, t146);
    eax = t146;
    edi = rd32(sp0 - 0x4cu);
    loc_48 = t146;
    loc_4c = rd32(sp0 - 0x4cu);
    goto L_1002f0b8;
L_1002e4dd: ;
    COW_AT(1002e4dd)
    wr32(sp0 - 0x64u, 5u);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 1u);
    wr32(sp0 - 0x40u, 0u);
    t147 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t147);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t147) + 0xfcu), rd32(t147), 4, t147, 1u, 1u, 5u);
    COW_AT(1002e4f9)
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 3u);
    wr32(sp0 - 0x6cu, 1u);
    t148 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t148);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t148) + 0xfcu), rd32(t148), 4, t148, 1u, 3u, 3u);
    COW_AT(1002e511)
    wr32(sp0 - 0x64u, 6u);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, 1u);
    t149 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t149);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t149) + 0xfcu), rd32(t149), 4, t149, 1u, 4u, 6u);
    COW_AT(1002e529)
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 6u);
    wr32(sp0 - 0x6cu, 1u);
    t150 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t150);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t150) + 0xfcu), rd32(t150), 4, t150, 1u, 6u, 3u);
    COW_AT(1002e541)
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x18u);
    wr32(sp0 - 0x6cu, 1u);
    t151 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t151);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t151) + 0xfcu), rd32(t151), 4, t151, 1u, 0x18u, 0u);
    COW_AT(1002e558)
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0xbu);
    wr32(sp0 - 0x6cu, 1u);
    t152 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t152);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t152) + 0xfcu), rd32(t152), 4, t152, 1u, 0xbu, 0u);
    COW_AT(1002e56f)
    t153 = rd32(sp0 - 0x2cu);
    t154 = ((t153 >> 7u & 0xfffffffeu) * (rd32(COW_IMG(0x104574acu)) >> 8u) & 0xff00u) | ((t153 >> 7u & 0xfffffe00u) * rd16(COW_IMG(0x104574aeu)) & 0xff0000u) | (uint8_t)(t153 * rd32(COW_IMG(0x104574acu)) >> 7u) | 0x80000000u;
    wr32(sp0 - 0x64u, t154);
    wr32(sp0 - 0x68u, 0x3cu);
    t155 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t155);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t156 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(rd32(t156 + 0xcu)) + 0xc8u), rd32(rd32(t156 + 0xcu)), 3, t155, 0x3cu, t154);
    t157 = g->edx;
    edx = t157;
    ebx = t154;
L_1002e5d2: ;
    COW_AT(1002e5d2)
    t158 = rd32(sp0 - 0x48u) + 0x2eu;
    wr32(sp0 - 0x48u, t158);
    eax = t158;
    edi = rd32(sp0 - 0x4cu);
    loc_48 = t158;
    loc_4c = rd32(sp0 - 0x4cu);
    goto L_1002f0b8;
L_1002eb94: ;
    COW_AT(1002eb94)
    edi = rd32(sp0 - 0x4cu);
    loc_38 = rd32(sp0 - 0x38u);
    loc_48 = rd32(sp0 - 0x48u);
L_1002eb98: ;
    COW_AT(1002eb98)
    wr32(arg5, loc_38 + rd32(arg5));
    eax = loc_38;
    goto L_1002f0b2;
L_1002eba7: ;
    COW_AT(1002eba7)
    t295 = ecx + esi * 0xau + 4u;
    wr32(sp0 - 0x48u, t295);
    eax = esi * 5u;
    loc_48 = t295;
    goto L_1002f0b8;
L_1002ebb7: ;
    COW_AT(1002ebb7)
    t296 = ecx + esi * 2u + 0xcu;
    wr32(sp0 - 0x48u, t296);
    edx = t296;
    loc_48 = t296;
    goto L_1002f0b8;
L_1002ebc4: ;
    COW_AT(1002ebc4)
    if (eax != 0x5453u) goto L_1002f0b8;
    COW_AT(1002ebcf)
    if (rd8(ebp + 0x68u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x4eu);
        goto L_1002ecf3;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x4eu);
    COW_AT(1002ebde)
    if ((uint8_t)eax != 0u) goto L_1002f096;
    COW_AT(1002ebe6)
    t297 = rd32(ebp + 0x64u);
    wr32(sp0 - 0x64u, t297);
    g->eax = t297;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t298 = cow_cdecl(g, COW_IMG(0x1002f1c0u), 1, t297);
    t299 = g->edx;
    eax = t298;
    edx = t299;
    COW_AT(1002ebef)
    wr32(sp0 - 0x68u, 0xcu);
    t300 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x6cu, t300);
    wr32(sp0 - 0x70u, 0u);
    g->eax = eax;
    g->ecx = t300;
    g->esp = sp0 - 0x64u;
    t301 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t300, 0xcu);
    t302 = g->ecx;
    eax = t301;
    ecx = t302;
    COW_AT(1002ebfc)
    wr32(sp0 - 0x74u, 0xcu);
    t303 = rd32(ebp + 0x48u);
    wr32(sp0 - 0x78u, t303);
    wr32(sp0 - 0x7cu, 1u);
    g->ecx = ecx;
    g->edx = t303;
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t303, 0xcu);
    t304 = g->ecx;
    t305 = g->edx;
    ecx = t304;
    edx = t305;
    COW_AT(1002ec09)
    wr32(sp0 - 0x80u, 8u);
    t306 = rd32(ebp + 0x4cu);
    wr32(sp0 - 0x84u, t306);
    wr32(sp0 - 0x88u, 2u);
    g->eax = t306;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t307 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t306, 8u);
    t308 = g->ecx;
    t309 = g->edx;
    eax = t307;
    ecx = t308;
    edx = t309;
    COW_AT(1002ec16)
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x94u, 3u);
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
    COW_AT(1002ec21)
    wr32(sp0 - 0x64u, 0u);
    t310 = rd32(ebp + 0x40u);
    wr32(sp0 - 0x68u, t310);
    t311 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t311);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), t310, 3, t311, t310, 0u);
    COW_AT(1002ec3c)
    wr32(sp0 - 0x64u, esi);
    wr32(sp0 - 0x68u, edi);
    t312 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
    wr32(sp0 - 0x6cu, t312);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, 5u);
    g->ebx = ebx;
    g->eax = (uint16_t)rd32(COW_IMG(0x1045b618u));
    t313 = rd32(COW_IMG(0x1045b618u));
    g->esp = sp0 - 0x60u;
    t314 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t312, edi, esi);
    eax = t314;
    COW_AT(1002ec68)
    t315 = rd32(COW_IMG(0x10456908u)) + 1u;
    t316 = rd32(COW_IMG(0x104574a8u));
    wr32(COW_IMG(0x10456908u), t315);
    t317 = rd32(sp0 - 0x44u);
    wr32(COW_IMG(0x104574a8u), esi + t316);
    if (!(rd8(t317 + 0x34u) & 1u))
    {
        edx = esi + t316;
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
    }
    else
    {
        ecx = t317;
    COW_AT(1002ec8d)
        wr32(sp0 - 0x64u, 0xcu);
        t318 = rd32(ebp + 0x50u);
        wr32(sp0 - 0x68u, t318);
        wr32(sp0 - 0x6cu, 0u);
        g->ecx = ecx;
        g->edx = t318;
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t318, 0xcu);
        t319 = g->ecx;
        t320 = g->edx;
        ecx = t319;
        edx = t320;
    COW_AT(1002ec9a)
        wr32(sp0 - 0x70u, 0xcu);
        t321 = rd32(ebp + 0x54u);
        wr32(sp0 - 0x74u, t321);
        wr32(sp0 - 0x78u, 1u);
        g->eax = t321;
        g->esp = sp0 - 0x6cu;
        t322 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t321, 0xcu);
        eax = t322;
    COW_AT(1002eca7)
        wr32(sp0 - 0x64u, esi);
        wr32(sp0 - 0x68u, edi);
        t323 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
        wr32(sp0 - 0x6cu, t323);
        wr32(sp0 - 0x70u, 0u);
        wr32(sp0 - 0x74u, 5u);
        g->ebx = ebx;
        g->edx = rd32(ebp + 0x60u);
        t324 = rd32(ebp + 0x60u);
        g->esp = sp0 - 0x60u;
        cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t323, edi, esi);
        t325 = g->edx;
        edx = t325;
    COW_AT(1002ecd8)
        t326 = esi + rd32(COW_IMG(0x104574a8u));
        t327 = rd32(COW_IMG(0x10456908u));
        wr32(COW_IMG(0x104574a8u), t326);
        wr32(COW_IMG(0x10456908u), t327 + 1u);
        eax = t327 + 1u;
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
    }
L_1002ecfb: ;
    COW_AT(1002ecfb)
    if (rd8(COW_IMG(0x104570fcu)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104570fcu));
    }
    else
    {
    COW_AT(1002ed08)
        wr32(sp0 - 0x64u, COW_IMG(0x10457158u));
        wr32(sp0 - 0x68u, ebx);
        wr32(sp0 - 0x6cu, COW_IMG(0x1045b648u));
        g->eax = arg2;
        g->ecx = arg2 + 0x8cu;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t328 = cow_stdcall(g, COW_IMG(0x10025c40u), 3, COW_IMG(0x1045b648u), ebx, COW_IMG(0x10457158u));
        t329 = g->ecx;
        t330 = g->edx;
        eax = t328;
        ecx = t329;
        edx = t330;
    COW_AT(1002ed22)
        if ((uint8_t)eax == 0u)
        {
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
        }
        else
        {
    COW_AT(1002ed2a)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t331 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
            t332 = g->edx;
            eax = t331;
            edx = t332;
    COW_AT(1002ed2f)
            if (rd8(ebp + 0x68u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(ebp + 0x68u);
    COW_AT(1002ed3a)
                wr32(sp0 - 0x64u, 0xcu);
                t333 = rd32(ebp + 0x44u);
                wr32(sp0 - 0x68u, t333);
                wr32(sp0 - 0x6cu, 0u);
                g->eax = eax;
                g->ecx = t333;
                g->esp = sp0 - 0x60u;
                t334 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t333, 0xcu);
                t335 = g->ecx;
                eax = t334;
                ecx = t335;
    COW_AT(1002ed47)
                wr32(sp0 - 0x70u, 0xcu);
                t336 = rd32(ebp + 0x48u);
                wr32(sp0 - 0x74u, t336);
                wr32(sp0 - 0x78u, 1u);
                g->ecx = ecx;
                g->edx = t336;
                g->esp = sp0 - 0x6cu;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t336, 0xcu);
                t337 = g->ecx;
                t338 = g->edx;
                ecx = t337;
                edx = t338;
    COW_AT(1002ed54)
                wr32(sp0 - 0x7cu, 8u);
                t339 = rd32(ebp + 0x4cu);
                wr32(sp0 - 0x80u, t339);
                wr32(sp0 - 0x84u, 2u);
                g->eax = t339;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x78u;
                t340 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t339, 8u);
                t341 = g->ecx;
                t342 = g->edx;
                eax = t340;
                ecx = t341;
                edx = t342;
    COW_AT(1002ed61)
                wr32(sp0 - 0x88u, 0u);
                wr32(sp0 - 0x8cu, 0u);
                wr32(sp0 - 0x90u, 3u);
                g->esp = sp0 - 0x84u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
    COW_AT(1002ed6c)
                wr32(sp0 - 0x64u, 0u);
                t343 = rd32(ebp + 0x40u);
                wr32(sp0 - 0x68u, t343);
                t344 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t344);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), t343, 3, t344, t343, 0u);
    COW_AT(1002ed87)
                wr32(sp0 - 0x64u, esi);
                t345 = rd32(sp0 - 0x4cu);
                wr32(sp0 - 0x68u, t345);
                t346 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t346);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 5u);
                g->ebx = ebx;
                g->eax = rd32(ebp + 0x60u);
                g->edx = t346;
                t347 = rd32(ebp + 0x60u);
                g->esp = sp0 - 0x60u;
                t348 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t346, t345, esi);
                t349 = g->edx;
                eax = t348;
                edx = t349;
                edi = t345;
    COW_AT(1002edb7)
                t350 = rd32(COW_IMG(0x10456908u)) + 1u;
                wr32(COW_IMG(0x10456908u), t350);
                if (rd8(rd32(sp0 - 0x44u) + 0x34u) & 1u)
                {
                    ecx = rd32(sp0 - 0x44u);
    COW_AT(1002edce)
                    wr32(sp0 - 0x64u, 0xcu);
                    t351 = rd32(ebp + 0x50u);
                    wr32(sp0 - 0x68u, t351);
                    wr32(sp0 - 0x6cu, 0u);
                    g->ecx = ecx;
                    g->edx = t351;
                    g->esp = sp0 - 0x60u;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t351, 0xcu);
                    t352 = g->ecx;
                    t353 = g->edx;
                    ecx = t352;
                    edx = t353;
    COW_AT(1002eddb)
                    wr32(sp0 - 0x70u, 0xcu);
                    t354 = rd32(ebp + 0x54u);
                    wr32(sp0 - 0x74u, t354);
                    wr32(sp0 - 0x78u, 1u);
                    g->esp = sp0 - 0x6cu;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t354, 0xcu);
    COW_AT(1002ede8)
                    wr32(sp0 - 0x64u, esi);
                    wr32(sp0 - 0x68u, edi);
                    t355 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t355);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 5u);
                    g->ebx = ebx;
                    g->edx = (uint16_t)rd32(COW_IMG(0x1045b618u));
                    t356 = rd32(COW_IMG(0x1045b618u));
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t355, edi, esi);
                    t357 = g->edx;
                    edx = t357;
    COW_AT(1002ee19)
                    wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
                }
            }
    COW_AT(1002ee1f)
            t358 = rd32(sp0 - 0x40u);
            wr32(sp0 - 0x64u, t358);
            g->eax = t358;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t359 = cow_stdcall(g, COW_IMG(0x10025f70u), 1, t358);
            t360 = g->edx;
            eax = t359;
            edx = t360;
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
        }
    }
    COW_AT(1002ee33)
    if (rd8(COW_IMG(0x104572b0u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104572b0u));
    COW_AT(1002ee40)
        wr32(sp0 - 0x64u, COW_IMG(0x104574f8u));
        wr32(sp0 - 0x68u, ebx);
        wr32(sp0 - 0x6cu, COW_IMG(0x1045b648u));
        g->eax = eax;
        g->edx = arg2;
        g->esp = sp0 - 0x60u;
        t361 = cow_thiscall(g, COW_IMG(0x10025330u), arg2 + 0x90u, 3, COW_IMG(0x1045b648u), ebx, COW_IMG(0x104574f8u));
        t362 = g->ecx;
        t363 = g->edx;
        eax = t361;
        ecx = t362;
        edx = t363;
    COW_AT(1002ee5a)
        if ((uint8_t)eax == 0u)
        {
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
        }
        else
        {
    COW_AT(1002ee62)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t364 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
            t365 = g->ecx;
            t366 = g->edx;
            eax = t364;
            ecx = t365;
            edx = t366;
    COW_AT(1002ee67)
            if (rd8(ebp + 0x68u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(ebp + 0x68u);
            }
            else
            {
    COW_AT(1002ee72)
                wr32(sp0 - 0x64u, 0xcu);
                t367 = rd32(ebp + 0x44u);
                wr32(sp0 - 0x68u, t367);
                wr32(sp0 - 0x6cu, 0u);
                g->eax = t367;
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                t368 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t367, 0xcu);
                t369 = g->edx;
                eax = t368;
                edx = t369;
    COW_AT(1002ee7f)
                wr32(sp0 - 0x70u, 0xcu);
                t370 = rd32(ebp + 0x48u);
                wr32(sp0 - 0x74u, t370);
                wr32(sp0 - 0x78u, 1u);
                g->eax = eax;
                g->ecx = t370;
                g->esp = sp0 - 0x6cu;
                t371 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t370, 0xcu);
                t372 = g->ecx;
                eax = t371;
                ecx = t372;
    COW_AT(1002ee8c)
                wr32(sp0 - 0x7cu, 8u);
                t373 = rd32(ebp + 0x4cu);
                wr32(sp0 - 0x80u, t373);
                wr32(sp0 - 0x84u, 2u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = t373;
                g->esp = sp0 - 0x78u;
                t374 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t373, 8u);
                t375 = g->ecx;
                t376 = g->edx;
                eax = t374;
                ecx = t375;
                edx = t376;
    COW_AT(1002ee99)
                wr32(sp0 - 0x88u, 0u);
                wr32(sp0 - 0x8cu, 0u);
                wr32(sp0 - 0x90u, 3u);
                g->esp = sp0 - 0x84u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
    COW_AT(1002eea4)
                wr32(sp0 - 0x64u, 0u);
                t377 = rd32(ebp + 0x40u);
                wr32(sp0 - 0x68u, t377);
                t378 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t378);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t378, t377, 0u);
    COW_AT(1002eebe)
                wr32(sp0 - 0x64u, esi);
                t379 = rd32(sp0 - 0x4cu);
                wr32(sp0 - 0x68u, t379);
                t380 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t380);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 5u);
                g->ebx = ebx;
                g->eax = t380;
                g->esp = sp0 - 0x60u;
                t381 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t380, t379, esi);
                eax = t381;
                edi = t379;
    COW_AT(1002eeef)
                t382 = rd32(COW_IMG(0x10456908u)) + 1u;
                t383 = rd32(sp0 - 0x44u);
                wr32(COW_IMG(0x10456908u), t382);
                if (!(rd8(t383 + 0x34u) & 1u))
                {
                    eax = (eax & 0xffffff00u) | rd8(t383 + 0x34u);
                }
                else
                {
                    ecx = t382;
                    edx = t383;
    COW_AT(1002ef07)
                    wr32(sp0 - 0x64u, 0xcu);
                    t384 = rd32(ebp + 0x50u);
                    wr32(sp0 - 0x68u, t384);
                    wr32(sp0 - 0x6cu, 0u);
                    g->eax = t384;
                    g->edx = edx;
                    g->esp = sp0 - 0x60u;
                    t385 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t384, 0xcu);
                    t386 = g->edx;
                    eax = t385;
                    edx = t386;
    COW_AT(1002ef14)
                    wr32(sp0 - 0x70u, 0xcu);
                    t387 = rd32(ebp + 0x54u);
                    wr32(sp0 - 0x74u, t387);
                    wr32(sp0 - 0x78u, 1u);
                    g->esp = sp0 - 0x6cu;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t387, 0xcu);
    COW_AT(1002ef21)
                    wr32(sp0 - 0x64u, esi);
                    wr32(sp0 - 0x68u, edi);
                    t388 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t388);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 5u);
                    g->ebx = ebx;
                    g->eax = rd32(ebp + 0x60u);
                    t389 = rd32(ebp + 0x60u);
                    g->esp = sp0 - 0x60u;
                    t390 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t388, edi, esi);
                    eax = t390;
    COW_AT(1002ef50)
                    wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
                }
            }
    COW_AT(1002ef56)
            t391 = rd32(sp0 - 0x40u);
            wr32(sp0 - 0x64u, t391);
            g->edx = arg2;
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, COW_IMG(0x100255c0u), arg2 + 0x90u, 1, t391);
            t392 = g->edx;
            edx = t392;
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
        }
    }
    COW_AT(1002ef6a)
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, COW_IMG(0x1045b648u));
    g->ebx = ebx;
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t393 = cow_thiscall(g, COW_IMG(0x10033800u), arg2 + 0x48u, 2, COW_IMG(0x1045b648u), ebx);
    t394 = g->ecx;
    t395 = g->edx;
    eax = t393;
    ecx = t394;
    edx = t395;
    COW_AT(1002ef7c)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(1002f092)
        edi = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
    }
    else
    {
    COW_AT(1002ef84)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t396 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
        t397 = g->edx;
        eax = t396;
        edx = t397;
    COW_AT(1002ef89)
        if (rd8(ebp + 0x68u) == 0u)
        {
    COW_AT(1002f07b)
            edi = rd32(sp0 - 0x4cu);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(ebp + 0x68u);
    COW_AT(1002ef94)
            wr32(sp0 - 0x64u, 0xcu);
            t398 = rd32(ebp + 0x44u);
            wr32(sp0 - 0x68u, t398);
            wr32(sp0 - 0x6cu, 0u);
            g->eax = eax;
            g->ecx = t398;
            g->esp = sp0 - 0x60u;
            t399 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t398, 0xcu);
            t400 = g->ecx;
            eax = t399;
            ecx = t400;
    COW_AT(1002efa1)
            wr32(sp0 - 0x70u, 0xcu);
            t401 = rd32(ebp + 0x48u);
            wr32(sp0 - 0x74u, t401);
            wr32(sp0 - 0x78u, 1u);
            g->ecx = ecx;
            g->edx = t401;
            g->esp = sp0 - 0x6cu;
            cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t401, 0xcu);
            t402 = g->ecx;
            t403 = g->edx;
            ecx = t402;
            edx = t403;
    COW_AT(1002efae)
            wr32(sp0 - 0x7cu, 8u);
            t404 = rd32(ebp + 0x4cu);
            wr32(sp0 - 0x80u, t404);
            wr32(sp0 - 0x84u, 2u);
            g->eax = t404;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x78u;
            t405 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t404, 8u);
            t406 = g->ecx;
            t407 = g->edx;
            eax = t405;
            ecx = t406;
            edx = t407;
    COW_AT(1002efbb)
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0u);
            wr32(sp0 - 0x90u, 3u);
            g->esp = sp0 - 0x84u;
            cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
    COW_AT(1002efc6)
            wr32(sp0 - 0x64u, 0u);
            t408 = rd32(ebp + 0x40u);
            wr32(sp0 - 0x68u, t408);
            t409 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x6cu, t409);
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), t408, 3, t409, t408, 0u);
    COW_AT(1002efe1)
            wr32(sp0 - 0x64u, esi);
            t410 = rd32(sp0 - 0x4cu);
            wr32(sp0 - 0x68u, t410);
            t411 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
            wr32(sp0 - 0x6cu, t411);
            wr32(sp0 - 0x70u, 0u);
            wr32(sp0 - 0x74u, 5u);
            g->ebx = ebx;
            g->eax = rd32(ebp + 0x60u);
            g->edx = t411;
            t412 = rd32(ebp + 0x60u);
            g->esp = sp0 - 0x60u;
            t413 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t411, t410, esi);
            t414 = g->edx;
            eax = t413;
            edx = t414;
            edi = t410;
    COW_AT(1002f011)
            t415 = rd32(COW_IMG(0x10456908u)) + 1u;
            wr32(COW_IMG(0x10456908u), t415);
            if (rd8(rd32(sp0 - 0x44u) + 0x34u) & 1u)
            {
                ecx = rd32(sp0 - 0x44u);
    COW_AT(1002f028)
                wr32(sp0 - 0x64u, 0xcu);
                t416 = rd32(ebp + 0x50u);
                wr32(sp0 - 0x68u, t416);
                wr32(sp0 - 0x6cu, 0u);
                g->ecx = ecx;
                g->edx = t416;
                g->esp = sp0 - 0x60u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t416, 0xcu);
                t417 = g->ecx;
                t418 = g->edx;
                ecx = t417;
                edx = t418;
    COW_AT(1002f035)
                wr32(sp0 - 0x70u, 0xcu);
                t419 = rd32(ebp + 0x54u);
                wr32(sp0 - 0x74u, t419);
                wr32(sp0 - 0x78u, 1u);
                g->eax = t419;
                g->esp = sp0 - 0x6cu;
                t420 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t419, 0xcu);
                eax = t420;
    COW_AT(1002f042)
                wr32(sp0 - 0x64u, esi);
                wr32(sp0 - 0x68u, edi);
                t421 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t421);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 5u);
                g->ebx = ebx;
                g->edx = rd32(ebp + 0x60u);
                t422 = rd32(ebp + 0x60u);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t421, edi, esi);
                t423 = g->edx;
                edx = t423;
    COW_AT(1002f073)
                wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
            }
        }
    COW_AT(1002f07f)
        t424 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x64u, t424);
        g->esp = sp0 - 0x60u;
        cow_fastcall(g, COW_IMG(0x10033a70u), arg2 + 0x48u, edx, 1, t424);
    COW_AT(1002f090)
        loc_48 = rd32(sp0 - 0x48u);
    }
L_1002f096: ;
    COW_AT(1002f096)
    t425 = esi + rd32(arg6) + 2u;
    wr32(arg6, t425);
    t426 = esi * 0xau + loc_48 + 0x18u;
    wr32(sp0 - 0x48u, t426);
    eax = esi + 2u;
    edx = t426;
    loc_48 = t426;
    goto L_1002f0b2;
L_1002ecf3: ;
    COW_AT(1002ecf3)
    if ((uint8_t)eax != 0u) goto L_1002f096;
    goto L_1002ecfb;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1002dc10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002dc24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x5cu, in_esi);
        wr32(sp0 - 0x44u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002dca7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_48;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        wr32(sp0 - 0x5cu, in_esi);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x44u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002dcb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_48;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        wr32(sp0 - 0x5cu, in_esi);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x44u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002dcbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_48;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        wr32(sp0 - 0x5cu, in_esi);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x44u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002dcccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_48;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x44u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002dcd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_48;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x44u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002dce2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_48;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x44u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002dce8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd5eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd64u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dd99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddb4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddc2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddc8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddd5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddd9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002dddbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002dde4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddf0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddf2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002ddf9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de2au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de47u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002de5cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dec8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        wr32(sp0 - 0x40u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1002dedeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002df00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002df16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002df2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002df46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002df5eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002df76u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002df8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dfa4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dfb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dfc8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dfd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002dfefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e00au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e033u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e055u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e062u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e06fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e07au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e08bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e093u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e0a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e0a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e0ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e0d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e0d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e0fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e101u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e156u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e15au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e171u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e18cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e193u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e198u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e1b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e1bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e1c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e1e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e1edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e1f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e204u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e209u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e229u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e234u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e241u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e249u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e254u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e26bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        wr32(sp0 - 0x40u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x1002e28au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e2a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e2bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e2d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e2eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e303u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e31bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e336u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e349u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e353u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e35eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e36au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e36eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e371u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e386u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e39au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e3afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e3bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e3d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        wr32(sp0 - 0x40u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1002e3f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e408u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e420u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e438u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e450u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e469u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e481u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e49cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e4adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e4b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e4b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e4c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e4ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e4f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e511u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e529u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e541u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e558u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002e56fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e5d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e5e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e5feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e616u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e61bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e62fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e635u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e63cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e644u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e650u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e654u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e657u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e66cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e678u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e692u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e698u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e6a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e6aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e6bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e6c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e6d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1002e6deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1002e6ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1002e6f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x1002e703u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1002e71eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e74bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e770u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e77du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002e78au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002e7b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e7d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e7e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e7f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e7fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e817u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e81fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e824u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e82fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e83cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002e849u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002e856u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1002e861u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1002e87cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e8adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e8c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e8d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002e8dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002e90eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e914u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e928u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e935u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e94fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e957u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e95cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e967u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e974u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002e981u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002e98eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1002e999u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1002e9b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e9e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002e9fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ea08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002ea15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002ea46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ea4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ea60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ea72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ea7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ea7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ea8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ea97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002eaa4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002eab1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1002eabcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1002ead6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eb07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eb1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eb2cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002eb39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002eb68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eb70u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eb74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eb85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eb94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eb98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eba7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ebb7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ebc4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ebcfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ebdeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ebe6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ebefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1002ebfcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1002ec09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1002ec16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x1002ec21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1002ec3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ec68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ec8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ec9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002eca7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002ecd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ecf3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ecfbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ed08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ed22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ed2au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ed2fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ed3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ed47u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002ed54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002ed61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1002ed6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1002ed87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002edb7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002edceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eddbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002ede8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee33u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee40u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee67u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002ee8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002ee99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1002eea4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1002eebeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002eeefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ef07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ef14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002ef21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002ef50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ef56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ef6au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ef7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ef84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ef89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002ef94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002efa1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002efaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002efbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1002efc6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1002efe1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f011u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f028u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f035u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1002f042u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1002f073u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f07bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f07fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f090u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f092u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f096u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f0b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f0b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002f0c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1002dc10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1002dc10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
