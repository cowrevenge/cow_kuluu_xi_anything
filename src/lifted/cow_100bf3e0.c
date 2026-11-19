/* f_0x100bf3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100bf3e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_154;
    uint32_t loc_15c;
    uint32_t loc_160;
    uint32_t loc_164;
    uint32_t loc_168;
    uint32_t loc_16c;
    uint32_t loc_170;
    uint32_t loc_178;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 384u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100bf429u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); g->ebp = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf429;
    case 0x100bf45du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); g->ebp = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf45d;
    case 0x100bf470u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf470;
    case 0x100bf47bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf47b;
    case 0x100bf48fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf48f;
    case 0x100bf49eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf49e;
    case 0x100bf4aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf4aa;
    case 0x100bf4bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf4bc;
    case 0x100bf4d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf4d0;
    case 0x100bf4e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf4e4;
    case 0x100bf4f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf4f8;
    case 0x100bf508u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf508;
    case 0x100bf51cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf51c;
    case 0x100bf530u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf530;
    case 0x100bf544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf544;
    case 0x100bf562u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf562;
    case 0x100bf574u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf574;
    case 0x100bf5a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf5a5;
    case 0x100bf5b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf5b7;
    case 0x100bf5c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf5c9;
    case 0x100bf5dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf5db;
    case 0x100bf5deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf5de;
    case 0x100bf5e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf5e3;
    case 0x100bf5e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf5e6;
    case 0x100bf5e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf5e9;
    case 0x100bf600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf600;
    case 0x100bf616u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf616;
    case 0x100bf62au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf62a;
    case 0x100bf62fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf62f;
    case 0x100bf645u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf645;
    case 0x100bf678u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_170 = rd32(sp0 - 0x170u); loc_16c = rd32(sp0 - 0x16cu); goto E_100bf678;
    case 0x100bf683u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_170 = rd32(sp0 - 0x170u); loc_16c = rd32(sp0 - 0x16cu); goto E_100bf683;
    case 0x100bf69au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf69a;
    case 0x100bf6c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_170 = rd32(sp0 - 0x170u); loc_16c = rd32(sp0 - 0x16cu); goto E_100bf6c7;
    case 0x100bf6d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_170 = rd32(sp0 - 0x170u); loc_16c = rd32(sp0 - 0x16cu); goto E_100bf6d8;
    case 0x100bf6f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf6f5;
    case 0x100bf75fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf75f;
    case 0x100bf7acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf7ac;
    case 0x100bf7ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf7eb;
    case 0x100bf82au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf82a;
    case 0x100bf842u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf842;
    case 0x100bf862u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_178 = rd32(sp0 - 0x178u); goto E_100bf862;
    case 0x100bf87du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf87d;
    case 0x100bf89eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf89e;
    case 0x100bf8a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf8a1;
    case 0x100bf8a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf8a4;
    case 0x100bf8b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf8b5;
    case 0x100bf8c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf8c6;
    case 0x100bf8cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf8cd;
    case 0x100bf8d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf8d1;
    case 0x100bf8d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf8d8;
    case 0x100bf8e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf8e8;
    case 0x100bf8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf8fc;
    case 0x100bf909u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf909;
    case 0x100bf919u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf919;
    case 0x100bf96eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf96e;
    case 0x100bf9d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf9d1;
    case 0x100bf9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bf9f7;
    case 0x100bfa36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfa36;
    case 0x100bfa46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfa46;
    case 0x100bfa6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfa6b;
    case 0x100bfa7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfa7f;
    case 0x100bfa8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfa8a;
    case 0x100bfa9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfa9a;
    case 0x100bfab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfab4;
    case 0x100bfabdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfabd;
    case 0x100bfad7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bfad7;
    case 0x100bfb15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfb15;
    case 0x100bfb25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfb25;
    case 0x100bfb47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfb47;
    case 0x100bfb5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfb5b;
    case 0x100bfb66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfb66;
    case 0x100bfb76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfb76;
    case 0x100bfb90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfb90;
    case 0x100bfb99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfb99;
    case 0x100bfbb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bfbb3;
    case 0x100bfbf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfbf1;
    case 0x100bfc01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfc01;
    case 0x100bfc12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfc12;
    case 0x100bfc19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfc19;
    case 0x100bfc1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfc1d;
    case 0x100bfc24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfc24;
    case 0x100bfc2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfc2b;
    case 0x100bfc2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfc2f;
    case 0x100bfc46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfc46;
    case 0x100bfc4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfc4b;
    case 0x100bfc50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfc50;
    case 0x100bfc6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfc6a;
    case 0x100bfc75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfc75;
    case 0x100bfc7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfc7d;
    case 0x100bfc81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfc81;
    case 0x100bfc95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfc95;
    case 0x100bfca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfca2;
    case 0x100bfcb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfcb2;
    case 0x100bfcb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfcb6;
    case 0x100bfcbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfcbd;
    case 0x100bfcccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfccc;
    case 0x100bfcebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bfceb;
    case 0x100bfd38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfd38;
    case 0x100bfd48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfd48;
    case 0x100bfd4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfd4d;
    case 0x100bfd61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfd61;
    case 0x100bfd6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfd6e;
    case 0x100bfd7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfd7e;
    case 0x100bfd84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfd84;
    case 0x100bfd9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfd9e;
    case 0x100bfdb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfdb6;
    case 0x100bfde2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bfde2;
    case 0x100bfde6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bfde6;
    case 0x100bfe07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bfe07;
    case 0x100bfe0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bfe0b;
    case 0x100bfe10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bfe10;
    case 0x100bfe1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfe1e;
    case 0x100bfe41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bfe41;
    case 0x100bfe9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfe9b;
    case 0x100bfeabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_154 = rd32(sp0 - 0x154u); goto E_100bfeab;
    case 0x100bfebfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfebf;
    case 0x100bfeccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfecc;
    case 0x100bfedcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bfedc;
    case 0x100bff15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100bff15;
    case 0x100bff4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bff4f;
    case 0x100bff5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bff5f;
    case 0x100bff79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bff79;
    case 0x100bff99u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bff99;
    case 0x100bff9du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bff9d;
    case 0x100bff9fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bff9f;
    case 0x100bfff2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_16c = rd32(sp0 - 0x16cu); goto E_100bfff2;
    case 0x100c0015u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100c0015;
    case 0x100c0031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0031;
    case 0x100c0041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0041;
    case 0x100c0046u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0046;
    case 0x100c005au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c005a;
    case 0x100c0065u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0065;
    case 0x100c0075u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0075;
    case 0x100c008fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c008f;
    case 0x100c0098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c0098;
    case 0x100c00abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100c00ab;
    case 0x100c0111u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0111;
    case 0x100c0142u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c0142;
    case 0x100c018fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c018f;
    case 0x100c01dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x168u); in_esi = rd32(sp0 - 0x164u); in_ebp = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x160u); g->ebx = rd32(sp0 - 0x15cu); g->edi = rd32(sp0 - 0x168u); g->esi = rd32(sp0 - 0x164u); goto E_100c01dc;
    case 0x100c020du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c020d;
    case 0x100c0240u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0240;
    case 0x100c0273u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c0273;
    case 0x100c0278u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c0278;
    case 0x100c027bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c027b;
    case 0x100c027eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c027e;
    case 0x100c0287u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c0287;
    case 0x100c0290u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_16c = rd32(sp0 - 0x16cu); goto E_100c0290;
    case 0x100c0297u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_170 = rd32(sp0 - 0x170u); loc_16c = rd32(sp0 - 0x16cu); loc_168 = rd32(sp0 - 0x168u); loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); goto E_100c0297;
    case 0x100c02a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c02a8;
    case 0x100c02b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c02b2;
    case 0x100c02f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c02f1;
    case 0x100c0309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c0309;
    default: break;
    }
#endif

    COW_AT(100bf3e0)
    wr32(sp0 - 0x15cu, in_ebx);
    wr32(sp0 - 0x160u, in_ebp);
    wr32(sp0 - 0x164u, in_esi);
    wr32(sp0 - 0x168u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x168u;
    t1 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x140u, 0);
    t2 = g->edx;
    wr8(sp0 - 0x158u, 0u);
    wr8(sp0 - 0x157u, 0u);
    wr8(sp0 - 0x156u, 0u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10154dc0u), sp0 - 0xecu, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x102586b0u), sp0 - 0x104u, 0);
    t6 = g->edx;
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x102587f0u), sp0 - 0x114u, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd32(self + 0x6f0u) == 0u)
    {
        eax = rd32(self + 0x6f0u);
        ecx = t7;
        edx = t8;
    }
    else
    {
        edx = t8;
    COW_AT(100bf429)
        wr32(sp0 - 0x16cu, self + 0x110u);
        t9 = rd32(self + 0x704u);
        wr8(t9, 0u);
        g->eax = t9;
        g->edx = edx;
        g->esp = sp0 - 0x168u;
        t10 = cow_thiscall(g, COW_IMG(0x10259410u), self + 0x714u, 1, self + 0x110u);
        t11 = g->edx;
        t12 = rd32(self + 0x6f0u);
        wr8(self + 0x110u, 0u);
        wr32(self + 0x704u, t12);
        wr32(self + 0x6f0u, 0u);
        eax = t10;
        ecx = t12;
        edx = t11;
    }
    COW_AT(100bf45d)
    t13 = rd8(arg1);
    wr8(sp0 - 0x154u, (uint8_t)t13);
    if ((uint8_t)t13 != 0u)
    {
        ebx = (in_ebx & 0xffffff00u) | t13;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t13;
        ebx = (in_ebx & 0xffffff00u) | t13;
    COW_AT(100bf470)
        g->edx = edx;
        g->esp = sp0 - 0x168u;
        cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
        t14 = g->ecx;
        t15 = g->edx;
        ecx = t14;
        edx = t15;
    }
    COW_AT(100bf47b)
    wr8(self + 0x784u, 0u);
    if ((uint32_t)(int8_t)rd8(arg1) - 1u > 0x51u)
    {
        eax = (uint32_t)(int8_t)rd8(arg1) - 1u;
        loc_15c = in_ebx;
        loc_160 = in_ebp;
        loc_164 = in_esi;
        loc_168 = in_edi;
        goto L_100c0297;
    }
    eax = (uint32_t)(int8_t)rd8(arg1) - 1u;
    COW_AT(100bf48f)
    t16 = rd32(COW_IMG(0x100c033cu) + rd8(COW_IMG(0x100c03ccu) + eax) * 4u);
    switch (t16 - RD)
    {
    case 0x100bf49eu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf49e;
    case 0x100bf4aau: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4aa;
    case 0x100bf4bcu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4bc;
    case 0x100bf4d0u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4d0;
    case 0x100bf4e4u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4e4;
    case 0x100bf4f8u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4f8;
    case 0x100bf508u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf508;
    case 0x100bf51cu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf51c;
    case 0x100bf530u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf530;
    case 0x100bf544u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf544;
    case 0x100bf562u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf562;
    case 0x100bf5a5u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf5a5;
    case 0x100bf5b7u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf5b7;
    case 0x100bf5c9u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf5c9;
    case 0x100bf5dbu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf5db;
    case 0x100bf62au: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf62a;
    case 0x100bf645u: goto L_100bf645;
    case 0x100bf69au: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf69a;
    case 0x100bf6f5u: goto L_100bf6f5;
    case 0x100bf75fu: goto L_100bf75f;
    case 0x100bf7acu: goto L_100bf7ac;
    case 0x100bf7ebu: goto L_100bf7eb;
    case 0x100bf82au: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf82a;
    case 0x100bf842u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf842;
    case 0x100bf87du: goto L_100bf87d;
    case 0x100bf96eu: goto L_100bf96e;
    case 0x100bf9f7u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf9f7;
    case 0x100bfad7u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bfad7;
    case 0x100bfbb3u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bfbb3;
    case 0x100bfcebu: goto L_100bfceb;
    case 0x100bfe41u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bfe41;
    case 0x100bff15u: goto L_100bff15;
    case 0x100c0015u: goto L_100c0015;
    case 0x100c00abu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100c00ab;
    case 0x100c01dcu: goto L_100c01dc;
    case 0x100c0297u: edx = rd8(COW_IMG(0x100c03ccu) + eax); loc_15c = in_ebx; loc_160 = in_ebp; loc_164 = in_esi; loc_168 = in_edi; goto L_100c0297;
    default: rt_fatal(g, COW_IMG(0x100bf497u), "switch");
    }
    return 0;
L_100bf49e: ;
    COW_AT(100bf49e)
    wr8(self + 0x784u, 1u);
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
L_100c0297: ;
    COW_AT(100c0297)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t413 = cow_thiscall(g, COW_IMG(0x10259150u), self + 0x714u, 0);
    t414 = g->edx;
    if (t413 == 0u)
    {
        eax = t413;
        goto L_100c02f1;
    }
    eax = t413;
    edx = t414;
    COW_AT(100c02a8)
    if (rd8(self + 0x784u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x784u);
        goto L_100c02f1;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x784u);
    COW_AT(100c02b2)
    wr32(sp0 - 0x16cu, sp0 - 0x140u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t415 = cow_thiscall(g, COW_IMG(0x102599b0u), self + 0x714u, 1, sp0 - 0x140u);
    t416 = g->edx;
    t417 = cow_thiscall(g, COW_IMG(0x10259e00u), self + 0x714u, 0);
    t418 = rd32(self + 0xcu);
    wr32(sp0 - 0x16cu, t418);
    g->edx = t418;
    t419 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x140u, 1, t418);
    t420 = g->ecx;
    t421 = g->edx;
    wr32(sp0 - 0x170u, t419);
    t422 = rd32(self + 0x704u);
    wr32(sp0 - 0x174u, t422);
    g->edx = t421;
    g->esp = sp0 - 0x150u;
    t423 = cow_call_regs(g, COW_IMG(0x100c2bf0u), t422, t420, g->edx, 1, 9, t422, t419, rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    t424 = g->edx;
    wr32(self + 0x704u, t423);
    wr32(self + 0xcu, 0u);
    eax = t423;
    edx = t424;
L_100c0309: ;
    COW_AT(100c0309)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t426 = cow_thiscall(g, COW_IMG(0x10258790u), sp0 - 0x114u, 0);
    t427 = g->edx;
    g->edx = t427;
    t428 = cow_thiscall(g, COW_IMG(0x10258650u), sp0 - 0x104u, 0);
    t429 = g->edx;
    g->edx = t429;
    t430 = cow_thiscall(g, COW_IMG(0x10154d70u), sp0 - 0xecu, 0);
    t431 = g->edx;
    t432 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x140u, t431, 0);
    g->ebx = rd32(sp0 - 0x15cu);
    g->esi = rd32(sp0 - 0x164u);
    g->edi = rd32(sp0 - 0x168u);
    g->ebp = rd32(sp0 - 0x160u);
    return (t432 & 0xffffff00u) | 1u;
L_100bf4aa: ;
    COW_AT(100bf4aa)
    wr32(sp0 - 0x16cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t411 = cow_thiscall(g, COW_IMG(0x102591a0u), self + 0x714u, 1, 0u);
    t412 = g->edx;
    eax = t411;
    edx = t412;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf4bc: ;
    COW_AT(100bf4bc)
    wr32(sp0 - 0x16cu, 0xffffffffu);
    wr32(sp0 - 0x170u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t409 = cow_thiscall(g, COW_IMG(0x10259210u), self + 0x714u, 2, 0u, 0xffffffffu);
    t410 = g->edx;
    eax = t409;
    edx = t410;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf4d0: ;
    COW_AT(100bf4d0)
    wr32(sp0 - 0x16cu, 0xffffffffu);
    wr32(sp0 - 0x170u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t407 = cow_thiscall(g, COW_IMG(0x10259210u), self + 0x714u, 2, 1u, 0xffffffffu);
    t408 = g->edx;
    eax = t407;
    edx = t408;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf4e4: ;
    COW_AT(100bf4e4)
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t405 = cow_thiscall(g, COW_IMG(0x10259210u), self + 0x714u, 2, 1u, 0u);
    t406 = g->edx;
    eax = t405;
    edx = t406;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf4f8: ;
    COW_AT(100bf4f8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t403 = cow_thiscall(g, COW_IMG(0x10259280u), self + 0x714u, 0);
    t404 = g->edx;
    eax = t403;
    edx = t404;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf508: ;
    COW_AT(100bf508)
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t401 = cow_thiscall(g, COW_IMG(0x10259210u), self + 0x714u, 2, 0u, 0u);
    t402 = g->edx;
    eax = t401;
    edx = t402;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf51c: ;
    COW_AT(100bf51c)
    wr32(sp0 - 0x16cu, 1u);
    wr32(sp0 - 0x170u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t399 = cow_thiscall(g, COW_IMG(0x10259210u), self + 0x714u, 2, 0u, 1u);
    t400 = g->edx;
    eax = t399;
    edx = t400;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf530: ;
    COW_AT(100bf530)
    wr32(sp0 - 0x16cu, 2u);
    wr32(sp0 - 0x170u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t397 = cow_thiscall(g, COW_IMG(0x10259210u), self + 0x714u, 2, 0u, 2u);
    t398 = g->edx;
    eax = t397;
    edx = t398;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf544: ;
    COW_AT(100bf544)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x168u;
    t388 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x134u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t389 = g->ecx;
    t390 = g->edx;
    if (rd16(sp0 - 0x134u) != 1u)
    {
        eax = (t388 & 0xffff0000u) | rd16(sp0 - 0x134u);
        ecx = t389;
        goto L_100bf574;
    }
    eax = (t388 & 0xffff0000u) | rd16(sp0 - 0x134u);
    edx = t390;
L_100bf562: ;
    COW_AT(100bf562)
    wr32(sp0 - 0x16cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t391 = cow_thiscall(g, COW_IMG(0x102591a0u), self + 0x714u, 1, 1u);
    t392 = g->edx;
    eax = t391;
    edx = t392;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf574: ;
    COW_AT(100bf574)
    wr32(sp0 - 0x16cu, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0x170u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x174u, sp0 - 0x80u);
    g->ebx = ebx;
    g->eax = sp0 - 0x80u;
    g->edx = (uint32_t)(int16_t)eax;
    g->esp = sp0 - 0x160u;
    t393 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)eax, rd32(sp0 - 0x168u), rd32(sp0 - 0x164u));
    t394 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x80u);
    g->edx = t394;
    g->esp = sp0 - 0x168u;
    t395 = cow_thiscall(g, COW_IMG(0x10259410u), self + 0x714u, 1, sp0 - 0x80u);
    t396 = g->edx;
    eax = t395;
    edx = t396;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bf5a5: ;
    COW_AT(100bf5a5)
    wr32(sp0 - 0x16cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t386 = cow_thiscall(g, COW_IMG(0x10259340u), self + 0x714u, 1, 0u);
    t387 = g->edx;
    eax = t386;
    edx = t387;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf5b7: ;
    COW_AT(100bf5b7)
    wr32(sp0 - 0x16cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t384 = cow_thiscall(g, COW_IMG(0x10259340u), self + 0x714u, 1, 1u);
    t385 = g->edx;
    eax = t384;
    edx = t385;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf5c9: ;
    COW_AT(100bf5c9)
    wr32(sp0 - 0x16cu, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t382 = cow_thiscall(g, COW_IMG(0x10259340u), self + 0x714u, 1, 2u);
    t383 = g->edx;
    eax = t382;
    edx = t383;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf5db: ;
    COW_AT(100bf5db)
    eax = rd32(self + 0x38u);
L_100bf5de: ;
    COW_AT(100bf5de)
    if (eax == 0u)
    {
    COW_AT(100bf616)
        wr8(self + 0x6ecu, 1u);
        wr8(self + 0x6edu, 0u);
        eax = 0u;
        loc_15c = in_ebx;
        loc_160 = in_ebp;
        loc_164 = in_esi;
        loc_168 = in_edi;
    }
    else
    {
    COW_AT(100bf5e3)
        if (eax == 1u)
        {
    COW_AT(100bf600)
            wr8(self + 0x6ecu, 1u);
            wr8(self + 0x6edu, 1u);
            eax = 1u;
            loc_15c = in_ebx;
            loc_160 = in_ebp;
            loc_164 = in_esi;
            loc_168 = in_edi;
        }
        else
        {
            eax = eax - 1u;
    COW_AT(100bf5e6)
            if (eax != 1u)
            {
                eax = eax - 1u;
    COW_AT(100bf62f)
                t381 = rd8(sp0 - 0x154u);
                wr8(self + 0x6ecu, 1u);
                wr8(self + 0x6edu, (uint8_t)t381);
                eax = (eax & 0xffffff00u) | t381;
                loc_15c = in_ebx;
                loc_160 = in_ebp;
                loc_164 = in_esi;
                loc_168 = in_edi;
            }
            else
            {
    COW_AT(100bf5e9)
                wr8(self + 0x6ecu, 1u);
                wr8(self + 0x6edu, 2u);
                eax = 2u;
                loc_15c = in_ebx;
                loc_160 = in_ebp;
                loc_164 = in_esi;
                loc_168 = in_edi;
            }
        }
    }
    goto L_100c0297;
L_100bf62a: ;
    COW_AT(100bf62a)
    eax = rd32(self + 0x3cu);
    goto L_100bf5de;
L_100bf645: ;
    COW_AT(100bf645)
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->edx = sp0 - 0x150u;
    g->esp = sp0 - 0x168u;
    t370 = cow_call_regs(g, COW_IMG(0x100bdb80u), self + 0x50u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t371 = g->edx;
    t372 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t372);
    g->esp = sp0 - 0x174u;
    t373 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t372);
    t374 = rd32(self + 0x10u);
    wr32(sp0 - 0x16cu, t374);
    t375 = rd32(self + 0x38u);
    wr32(sp0 - 0x170u, t375);
    if (rd32(self + 0x28u) == 0u)
    {
        eax = t373;
        loc_16c = t374;
        loc_170 = t375;
    COW_AT(100bf683)
        t378 = rd32(self + 0x18u) != 1u;
        wr32(sp0 - 0x174u, t378);
        wr32(sp0 - 0x178u, eax);
        g->eax = eax;
        g->edx = t378;
        g->esp = sp0 - 0x168u;
        t379 = cow_thiscall(g, COW_IMG(0x10259590u), self + 0x714u, 4, eax, t378, loc_170, loc_16c);
        t380 = g->edx;
        eax = t379;
        edx = t380;
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
    }
    else
    {
        eax = t373;
        edx = t374;
        loc_16c = t374;
        loc_170 = t375;
    COW_AT(100bf678)
        wr32(sp0 - 0x174u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x168u;
        t376 = cow_thiscall(g, COW_IMG(0x10259650u), self + 0x714u, 3, eax, loc_170, loc_16c);
        t377 = g->edx;
        eax = t376;
        edx = t377;
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
    }
    goto L_100c0297;
L_100bf69a: ;
    COW_AT(100bf69a)
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x168u;
    t359 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t360 = g->ecx;
    t361 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t361);
    g->esp = sp0 - 0x174u;
    t362 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t361);
    t363 = rd32(self + 0x14u);
    wr32(sp0 - 0x16cu, t363);
    t364 = rd32(self + 0x3cu);
    wr32(sp0 - 0x170u, t364);
    if (rd32(self + 0x2cu) == 0u)
    {
        eax = t362;
        edx = t364;
        loc_16c = t363;
        loc_170 = t364;
    COW_AT(100bf6d8)
        t367 = rd32(self + 0x1cu) != 1u;
        wr32(sp0 - 0x174u, t367);
        wr32(sp0 - 0x178u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x168u;
        t368 = cow_thiscall(g, COW_IMG(0x10259590u), self + 0x714u, 4, eax, t367, loc_170, loc_16c);
        t369 = g->edx;
        eax = t368;
        edx = t369;
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
    }
    else
    {
        eax = t362;
        edx = t364;
        loc_16c = t363;
        loc_170 = t364;
    COW_AT(100bf6c7)
        wr32(sp0 - 0x174u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x168u;
        t365 = cow_thiscall(g, COW_IMG(0x10259650u), self + 0x714u, 3, eax, loc_170, loc_16c);
        t366 = g->edx;
        eax = t365;
        edx = t366;
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
    }
    goto L_100c0297;
L_100bf6f5: ;
    COW_AT(100bf6f5)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x150u);
    wr32(sp0 - 0x174u, arg1 + 1u);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = ecx;
    g->edx = sp0 - 0x134u;
    g->esp = sp0 - 0x16cu;
    t347 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t348 = g->ecx;
    t349 = g->edx;
    t350 = arg1 + t347 + 1u;
    wr32(sp0 - 0x170u, t350);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t350, g->ecx, t349, 1, 3, self + 0x50u, t350, sp0 - 0x134u);
    t351 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc50u);
    wr32(sp0 - 0x16cu, t351);
    wr32(sp0 - 0x170u, sp0 - 0x104u);
    t352 = rd32(COW_IMG(0x106671b4u));
    cow_fastcall(g, COW_IMG(0x10227590u), t352, rd32(self + 4u), 2, sp0 - 0x104u, t351);
    t353 = g->ecx;
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    wr32(sp0 - 0x170u, 0u);
    t354 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x174u, t354);
    g->eax = t354;
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x170u;
    t355 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t354);
    t356 = g->edx;
    wr32(sp0 - 0x174u, t355);
    g->edx = t356;
    g->esp = sp0 - 0x168u;
    t357 = cow_thiscall(g, COW_IMG(0x102596e0u), self + 0x714u, 3, t355, 0u, sp0 - 0x104u);
    t358 = g->edx;
    eax = t357;
    edx = t358;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf75f: ;
    COW_AT(100bf75f)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t340 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc50u);
    wr32(sp0 - 0x16cu, t340);
    wr32(sp0 - 0x170u, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    t341 = cow_fastcall(g, COW_IMG(0x10227680u), rd32(COW_IMG(0x106671b4u)), t340, 2, sp0 - 0x114u, t340);
    t342 = g->edx;
    g->edx = t342;
    t343 = cow_thiscall(g, COW_IMG(0x10258840u), sp0 - 0x114u, 0);
    t344 = g->edx;
    wr32(sp0 - 0x16cu, t343);
    g->edx = t344;
    t345 = cow_thiscall(g, COW_IMG(0x10259410u), self + 0x714u, 1, t343);
    t346 = g->edx;
    eax = t345;
    edx = t346;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf7ac: ;
    COW_AT(100bf7ac)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t334 = g->edx;
    t335 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x16cu, t335);
    g->eax = t335;
    g->edx = t334;
    t336 = cow_thiscall(g, COW_IMG(0x10167400u), rd32(COW_IMG(0x10621950u)), 1, t335);
    t337 = g->edx;
    wr32(sp0 - 0x16cu, t336);
    g->edx = t337;
    t338 = cow_thiscall(g, COW_IMG(0x10259410u), self + 0x714u, 1, t336);
    t339 = g->edx;
    eax = t338;
    edx = t339;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf7eb: ;
    COW_AT(100bf7eb)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x134u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t328 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x16cu, t328);
    g->eax = t328;
    g->edx = rd32(self + 4u);
    t329 = rd32(self + 4u);
    t330 = cow_thiscall(g, COW_IMG(0x10167410u), rd32(COW_IMG(0x10621950u)), 1, t328);
    t331 = g->edx;
    wr32(sp0 - 0x16cu, t330);
    g->edx = t331;
    t332 = cow_thiscall(g, COW_IMG(0x10259410u), self + 0x714u, 1, t330);
    t333 = g->edx;
    eax = t332;
    edx = t333;
    loc_15c = in_ebx;
    loc_160 = in_ebp;
    loc_164 = in_esi;
    loc_168 = in_edi;
    goto L_100c0297;
L_100bf82a: ;
    COW_AT(100bf82a)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x168u;
    t321 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x134u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t322 = g->ecx;
    t323 = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
    wr32(sp0 - 0x178u, t323);
    eax = t321;
    ecx = t322;
    edx = t323;
    loc_178 = t323;
L_100bf862: ;
    COW_AT(100bf862)
    wr32(sp0 - 0x17cu, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x174u;
    t324 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, loc_178);
    t325 = g->edx;
    wr32(sp0 - 0x16cu, t324);
    g->edx = t325;
    g->esp = sp0 - 0x168u;
    t326 = cow_thiscall(g, COW_IMG(0x10259410u), self + 0x714u, 1, t324);
    t327 = g->edx;
    eax = t326;
    edx = t327;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bf842: ;
    COW_AT(100bf842)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x134u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t319 = g->ecx;
    t320 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x178u, t320);
    eax = t320;
    ecx = t319;
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
    loc_178 = t320;
    goto L_100bf862;
L_100bf87d: ;
    COW_AT(100bf87d)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t294 = g->edx;
    if ((uint8_t)rd32(sp0 - 0x154u) == 0x50u)
    {
        edx = t294;
    COW_AT(100bf8c6)
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
    }
    else
    {
        eax = (uint8_t)rd32(sp0 - 0x154u) - 0x50u;
        edx = t294;
    COW_AT(100bf89e)
        if (eax == 1u)
        {
    COW_AT(100bf8b5)
            eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
            edx = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        }
        else
        {
            eax = eax - 1u;
    COW_AT(100bf8a1)
            if (eax != 1u)
            {
    COW_AT(100bf8cd)
                eax = rd32(sp0 - 0x154u);
            }
            else
            {
    COW_AT(100bf8a4)
                eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc50u);
            }
        }
    }
    COW_AT(100bf8d1)
    if (eax + 0xe000u != 0u)
    {
        eax = eax + 0xe000u;
        goto L_100bf8e8;
    }
    eax = eax + 0xe000u;
    COW_AT(100bf8d8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t295 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t296 = g->edx;
    eax = t295;
    edx = t296;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bf8e8: ;
    COW_AT(100bf8e8)
    wr32(sp0 - 0x16cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t297 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t298 = g->edx;
    if (t297 == 0u)
    {
        eax = t297;
        edx = t298;
        goto L_100c020d;
    }
    eax = t297;
    edx = t298;
    COW_AT(100bf8fc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t299 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t300 = g->edx;
    if (t299 != 0u)
    {
        eax = t299;
        edx = t300;
        ebx = t299;
    COW_AT(100bf919)
        wr32(sp0 - 0x16cu, 8u);
        wr32(sp0 - 0x170u, sp0 - 0x158u);
        g->eax = eax;
        g->esp = sp0 - 0x168u;
        t303 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x158u, 2, sp0 - 0x158u, 8u);
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        wr8(sp0 - 0x156u, 0u);
        g->edx = sp0 - 0x158u;
        t304 = cow_thiscall(g, COW_IMG(0x10259910u), self + 0x714u, 1, sp0 - 0x158u);
        t305 = g->edx;
        wr32(sp0 - 0x16cu, ebx);
        wr32(sp0 - 0x170u, 0u);
        wr32(sp0 - 0x174u, 0u);
        g->edx = t305;
        cow_thiscall(g, COW_IMG(0x10259480u), self + 0x714u, 3, 0u, 0u, ebx);
        t306 = g->ecx;
        t307 = g->edx;
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        g->eax = sp0 - 0x158u;
        g->edx = t307;
        t308 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x158u);
        t309 = g->edx;
        wr8(sp0 - 0x156u, 0u);
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        g->edx = t309;
        t310 = cow_thiscall(g, COW_IMG(0x10259910u), self + 0x714u, 1, sp0 - 0x158u);
        t311 = g->edx;
        eax = t310;
        edx = t311;
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
    }
    else
    {
        eax = t299;
        edx = t300;
    COW_AT(100bf909)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x168u;
        t301 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
        t302 = g->edx;
        eax = t301;
        edx = t302;
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
    }
    goto L_100c0297;
L_100bf96e: ;
    COW_AT(100bf96e)
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->edx = sp0 - 0x150u;
    g->esp = sp0 - 0x168u;
    t279 = cow_call_regs(g, COW_IMG(0x100bdb80u), eax, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t280 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x132u);
    wr32(sp0 - 0x170u, sp0 - 0x134u);
    t281 = arg1 + t279 + 1u;
    wr32(sp0 - 0x174u, t281);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->esp = sp0 - 0x16cu;
    t282 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x132u, g->ecx, t280, 1, 3, self + 0x50u, t281, sp0 - 0x134u);
    t283 = g->ecx;
    t284 = g->edx;
    wr32(sp0 - 0x170u, t281 + t282);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t281 + t282, g->ecx, t284, 1, 3, self + 0x50u, t281 + t282, sp0 - 0x132u);
    t285 = (uint32_t)(int16_t)rd16(sp0 - 0x132u);
    wr32(sp0 - 0x16cu, t285);
    t286 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x170u, t286);
    wr32(sp0 - 0x174u, sp0 - 0x104u);
    g->eax = sp0 - 0x104u;
    g->edx = t286;
    t287 = cow_thiscall(g, COW_IMG(0x10157050u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0x104u, t286, t285);
    t288 = g->edx;
    if (t287 == 0u)
    {
        eax = t287;
        edx = t288;
        goto L_100c020d;
    }
    eax = t287;
    COW_AT(100bf9d1)
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    wr32(sp0 - 0x170u, 0u);
    t289 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x174u, t289);
    g->eax = eax;
    g->edx = t289;
    g->esp = sp0 - 0x170u;
    t290 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t289);
    t291 = g->edx;
    wr32(sp0 - 0x174u, t290);
    g->edx = t291;
    g->esp = sp0 - 0x168u;
    t292 = cow_thiscall(g, COW_IMG(0x102596e0u), self + 0x714u, 3, t290, 0u, sp0 - 0x104u);
    t293 = g->edx;
    eax = t292;
    edx = t293;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bf9f7: ;
    COW_AT(100bf9f7)
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t249 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x14fu);
    t250 = arg1 + t249 + 1u;
    wr32(sp0 - 0x174u, t250);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x14fu;
    g->esp = sp0 - 0x16cu;
    t251 = cow_call_regs(g, COW_IMG(0x100bdb80u), t249, g->ecx, g->edx, 1, 3, self + 0x50u, t250, sp0 - 0x14fu);
    t252 = g->ecx;
    t253 = g->edx;
    wr32(sp0 - 0x170u, t250 + t251);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t252;
    g->esp = sp0 - 0x168u;
    t254 = cow_call_regs(g, COW_IMG(0x100bdbe0u), t250 + t251, g->ecx, t253, 1, 3, self + 0x50u, t250 + t251, sp0 - 0x134u);
    t255 = g->ecx;
    t256 = g->edx;
    if (rd16(sp0 - 0x134u) != 0u)
    {
        ecx = (t255 & 0xffff0000u) | rd16(sp0 - 0x134u);
        edx = t256;
        goto L_100bfa46;
    }
    eax = t254;
    edx = t256;
    COW_AT(100bfa36)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t257 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t258 = g->edx;
    eax = t257;
    edx = t258;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfa46: ;
    COW_AT(100bfa46)
    t259 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x16cu, t259);
    g->eax = t259;
    g->ecx = ecx;
    g->esp = sp0 - 0x168u;
    t260 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t259);
    t261 = g->ecx;
    t262 = rd8(sp0 - 0x14fu) != 0u;
    if ((uint8_t)ebx != 0x3au)
    {
        eax = (uint32_t)(int16_t)t261;
        edx = t262;
        ebp = t262;
        edi = t260;
        goto L_100bfa9a;
    }
    eax = (uint32_t)(int16_t)t261;
    edx = t262;
    ebp = t262;
    edi = t260;
    COW_AT(100bfa6b)
    wr32(sp0 - 0x16cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t263 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t264 = g->edx;
    if (t263 == 0u)
    {
        eax = t263;
        edx = t264;
        goto L_100c020d;
    }
    eax = t263;
    edx = t264;
    COW_AT(100bfa7f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t265 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t266 = g->edx;
    if (t265 != 0u)
    {
        eax = t265;
        goto L_100bfabd;
    }
    eax = t265;
    edx = t266;
    COW_AT(100bfa8a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t267 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t268 = g->edx;
    eax = t267;
    edx = t268;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfa9a: ;
    COW_AT(100bfa9a)
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, eax);
    g->esp = sp0 - 0x168u;
    t269 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, sp0 - 0xecu, edx, 1, 2, eax, sp0 - 0xecu);
    t270 = g->edx;
    g->edx = t270;
    t271 = cow_thiscall(g, COW_IMG(0x10154a40u), t269, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t272 = g->edx;
    if ((uint8_t)t271 == 0u)
    {
        eax = t271;
        edx = t272;
        goto L_100c020d;
    }
    eax = t271;
    edx = t272;
    COW_AT(100bfab4)
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    t273 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    eax = t273;
L_100bfabd: ;
    COW_AT(100bfabd)
    g->eax = eax;
    g->edx = rd32(eax);
    t274 = rd32(eax);
    g->esp = sp0 - 0x168u;
    t275 = cow_thiscall(g, rd32(t274 + 8u), eax, 0);
    t276 = g->edx;
    wr32(sp0 - 0x16cu, t275);
    wr32(sp0 - 0x170u, ebp);
    wr32(sp0 - 0x174u, edi);
    g->edx = t276;
    t277 = cow_thiscall(g, COW_IMG(0x102597e0u), self + 0x714u, 3, edi, ebp, t275);
    t278 = g->edx;
    eax = t277;
    edx = t278;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfad7: ;
    COW_AT(100bfad7)
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t220 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x14fu);
    t221 = arg1 + t220 + 1u;
    wr32(sp0 - 0x174u, t221);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x14fu;
    g->esp = sp0 - 0x16cu;
    t222 = cow_call_regs(g, COW_IMG(0x100bdb80u), t220, g->ecx, g->edx, 1, 3, self + 0x50u, t221, sp0 - 0x14fu);
    t223 = g->ecx;
    t224 = g->edx;
    wr32(sp0 - 0x170u, t221 + t222);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t225 = cow_call_regs(g, COW_IMG(0x100bdbe0u), t221 + t222, g->ecx, t224, 1, 3, self + 0x50u, t221 + t222, sp0 - 0x134u);
    t226 = g->edx;
    if ((uint32_t)(int16_t)rd16(sp0 - 0x134u) != 0u)
    {
        ecx = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        edx = t226;
        goto L_100bfb25;
    }
    eax = t225;
    edx = t226;
    COW_AT(100bfb15)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t227 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t228 = g->edx;
    eax = t227;
    edx = t228;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfb25: ;
    COW_AT(100bfb25)
    t229 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x16cu, t229);
    g->eax = t229;
    g->ecx = ecx;
    g->esp = sp0 - 0x168u;
    t230 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t229);
    t231 = g->ecx;
    t232 = rd8(sp0 - 0x14fu) != 0u;
    if ((uint8_t)ebx != 0x3cu)
    {
        ecx = t231;
        edx = t232;
        ebp = t232;
        edi = t230;
        goto L_100bfb76;
    }
    eax = (t230 & 0xffffff00u) | rd8(sp0 - 0x14fu);
    ecx = t231;
    edx = t232;
    ebp = t232;
    edi = t230;
    COW_AT(100bfb47)
    wr32(sp0 - 0x16cu, ecx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t233 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, ecx);
    t234 = g->edx;
    if (t233 == 0u)
    {
        eax = t233;
        edx = t234;
        goto L_100c020d;
    }
    eax = t233;
    edx = t234;
    COW_AT(100bfb5b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t235 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t236 = g->edx;
    if (t235 != 0u)
    {
        eax = t235;
        goto L_100bfb99;
    }
    eax = t235;
    edx = t236;
    COW_AT(100bfb66)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t237 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t238 = g->edx;
    eax = t237;
    edx = t238;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfb76: ;
    COW_AT(100bfb76)
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, ecx);
    g->esp = sp0 - 0x168u;
    t239 = cow_call_regs(g, COW_IMG(0x10153ff0u), sp0 - 0xecu, ecx, edx, 1, 2, ecx, sp0 - 0xecu);
    t240 = g->edx;
    g->edx = t240;
    t241 = cow_thiscall(g, COW_IMG(0x10154a40u), t239, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t242 = g->edx;
    if ((uint8_t)t241 == 0u)
    {
        eax = t241;
        edx = t242;
        goto L_100c020d;
    }
    eax = t241;
    edx = t242;
    COW_AT(100bfb90)
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    t243 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    eax = t243;
L_100bfb99: ;
    COW_AT(100bfb99)
    g->eax = eax;
    g->edx = rd32(eax);
    t244 = rd32(eax);
    g->esp = sp0 - 0x168u;
    t245 = cow_thiscall(g, rd32(t244 + 8u), eax, 0);
    t246 = g->edx;
    wr32(sp0 - 0x16cu, t245);
    wr32(sp0 - 0x170u, ebp);
    wr32(sp0 - 0x174u, edi);
    g->edx = t246;
    t247 = cow_thiscall(g, COW_IMG(0x10259820u), self + 0x714u, 3, edi, ebp, t245);
    t248 = g->edx;
    eax = t247;
    edx = t248;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfbb3: ;
    COW_AT(100bfbb3)
    wr32(sp0 - 0x16cu, sp0 - 0x14fu);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t185 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x14fu, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x14fu);
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x14eu);
    t186 = arg1 + t185 + 1u;
    wr32(sp0 - 0x174u, t186);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x14eu;
    g->esp = sp0 - 0x16cu;
    t187 = cow_call_regs(g, COW_IMG(0x100bdb80u), t185, g->ecx, g->edx, 1, 3, self + 0x50u, t186, sp0 - 0x14eu);
    t188 = g->ecx;
    t189 = g->edx;
    wr32(sp0 - 0x170u, t186 + t187);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t190 = cow_call_regs(g, COW_IMG(0x100bdbe0u), t186 + t187, g->ecx, t189, 1, 3, self + 0x50u, t186 + t187, sp0 - 0x134u);
    t191 = g->edx;
    if ((uint32_t)(int16_t)rd16(sp0 - 0x134u) != 0u)
    {
        ecx = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        goto L_100bfc01;
    }
    eax = t190;
    edx = t191;
    COW_AT(100bfbf1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t192 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t193 = g->edx;
    eax = t192;
    edx = t193;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfc01: ;
    COW_AT(100bfc01)
    if ((uint8_t)rd32(sp0 - 0x154u) - 0x40u > 5u)
    {
        eax = (uint8_t)rd32(sp0 - 0x154u) - 0x40u;
        goto L_100bfc2b;
    }
    eax = (uint8_t)rd32(sp0 - 0x154u) - 0x40u;
    COW_AT(100bfc12)
    t194 = rd32(COW_IMG(0x100c0420u) + eax * 4u);
    switch (t194 - RD)
    {
    case 0x100bfc19u: goto L_100bfc19;
    case 0x100bfc1du: goto L_100bfc1d;
    case 0x100bfc24u: goto L_100bfc24;
    default: rt_fatal(g, COW_IMG(0x100bfc12u), "switch");
    }
    return 0;
L_100bfc19: ;
    COW_AT(100bfc19)
    ebp = 0u;
L_100bfc2f: ;
    COW_AT(100bfc2f)
    t195 = (uint32_t)(int8_t)rd8(sp0 - 0x14fu);
    wr32(sp0 - 0x16cu, t195);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t195;
    g->esp = sp0 - 0x168u;
    t196 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t195);
    t197 = g->ecx;
    t198 = g->edx;
    wr32(sp0 - 0x154u, t196);
    if ((uint8_t)ebx == 0x40u)
    {
        eax = t196;
        ecx = t197;
        edx = t198;
        loc_154 = t196;
        goto L_100bfc81;
    }
    eax = t196;
    ecx = t197;
    edx = t198;
    loc_154 = t196;
    COW_AT(100bfc46)
    if ((uint8_t)ebx == 0x42u) goto L_100bfc81;
    COW_AT(100bfc4b)
    if ((uint8_t)ebx == 0x44u) goto L_100bfc81;
    COW_AT(100bfc50)
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, ecx);
    g->esp = sp0 - 0x168u;
    t199 = cow_call_regs(g, COW_IMG(0x10153ff0u), sp0 - 0xecu, ecx, edx, 1, 2, ecx, sp0 - 0xecu);
    t200 = g->edx;
    g->edx = t200;
    t201 = cow_thiscall(g, COW_IMG(0x10154a40u), t199, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t202 = g->edx;
    if ((uint8_t)t201 == 0u)
    {
        eax = t201;
        edx = t202;
        goto L_100c020d;
    }
    eax = t201;
    edx = t202;
    COW_AT(100bfc6a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t203 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    t204 = g->edx;
    eax = t203;
    edx = t204;
    edi = t203;
L_100bfc75: ;
    COW_AT(100bfc75)
    if (rd8(sp0 - 0x14eu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x14eu);
    COW_AT(100bfcb2)
        if ((uint8_t)eax != 1u)
        {
    COW_AT(100bfcbd)
            g->eax = eax;
            g->edx = rd32(edi);
            t211 = rd32(edi);
            g->esp = sp0 - 0x168u;
            t212 = cow_thiscall(g, rd32(t211 + 0x30u), edi, 0);
            t213 = g->edx;
            edx = t213;
            ebx = t212 == 2u;
        }
        else
        {
    COW_AT(100bfcb6)
            ebx = 1u;
        }
    }
    else
    {
    COW_AT(100bfc7d)
        ebx = 0u;
    }
    COW_AT(100bfccc)
    g->eax = rd32(edi);
    g->edx = edx;
    t214 = rd32(edi);
    g->esp = sp0 - 0x168u;
    t215 = cow_thiscall(g, rd32(t214 + 0x2cu), edi, 0);
    t216 = g->edx;
    wr32(sp0 - 0x16cu, t215);
    wr32(sp0 - 0x170u, ebx);
    t217 = rd32(sp0 - 0x154u);
    wr32(sp0 - 0x174u, t217);
    wr32(sp0 - 0x178u, ebp);
    g->edx = t216;
    t218 = cow_thiscall(g, COW_IMG(0x10259860u), self + 0x714u, 4, ebp, t217, ebx, t215);
    t219 = g->edx;
    eax = t218;
    edx = t219;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfc1d: ;
    COW_AT(100bfc1d)
    ebp = 1u;
    goto L_100bfc2f;
L_100bfc24: ;
    COW_AT(100bfc24)
    ebp = 2u;
    goto L_100bfc2f;
L_100bfc2b: ;
    COW_AT(100bfc2b)
    ebp = rd32(sp0 - 0x154u);
    goto L_100bfc2f;
L_100bfc81: ;
    COW_AT(100bfc81)
    wr32(sp0 - 0x16cu, ecx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t205 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, ecx);
    t206 = g->edx;
    if (t205 == 0u)
    {
        eax = t205;
        edx = t206;
        goto L_100c020d;
    }
    eax = t205;
    edx = t206;
    COW_AT(100bfc95)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t207 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t208 = g->edx;
    if (t207 != 0u)
    {
        eax = t207;
        edx = t208;
        edi = t207;
        goto L_100bfc75;
    }
    eax = t207;
    edx = t208;
    COW_AT(100bfca2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t209 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t210 = g->edx;
    eax = t209;
    edx = t210;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfceb: ;
    COW_AT(100bfceb)
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->edx = sp0 - 0x150u;
    g->esp = sp0 - 0x168u;
    t141 = cow_call_regs(g, COW_IMG(0x100bdb80u), eax, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t142 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x130u);
    wr32(sp0 - 0x170u, sp0 - 0x14fu);
    t143 = arg1 + t141 + 1u;
    wr32(sp0 - 0x174u, t143);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x14fu;
    g->edx = t142;
    g->esp = sp0 - 0x16cu;
    t144 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x130u, g->ecx, g->edx, 1, 3, self + 0x50u, t143, sp0 - 0x14fu);
    t145 = g->ecx;
    t146 = g->edx;
    wr32(sp0 - 0x170u, t143 + t144);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t145;
    g->esp = sp0 - 0x168u;
    t147 = cow_call_regs(g, COW_IMG(0x100bdbe0u), t143 + t144, g->ecx, t146, 1, 3, self + 0x50u, t143 + t144, sp0 - 0x130u);
    t148 = g->ecx;
    t149 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t149);
    g->ecx = t148;
    g->edx = t149;
    g->esp = sp0 - 0x174u;
    t150 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t149);
    t151 = g->ecx;
    t152 = g->edx;
    wr32(sp0 - 0x154u, t150);
    if ((uint32_t)(int16_t)rd16(sp0 - 0x130u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x130u);
        ecx = t151;
        edx = t152;
        loc_154 = t150;
        goto L_100bfd48;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x130u);
    edx = t152;
    loc_154 = t150;
    COW_AT(100bfd38)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t153 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t154 = g->edx;
    eax = t153;
    edx = t154;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfd48: ;
    COW_AT(100bfd48)
    if ((uint8_t)ebx != 0x32u) goto L_100bfd84;
    COW_AT(100bfd4d)
    wr32(sp0 - 0x16cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t155 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t156 = g->edx;
    if (t155 == 0u)
    {
        eax = t155;
        edx = t156;
        goto L_100c020d;
    }
    eax = t155;
    edx = t156;
    COW_AT(100bfd61)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t157 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t158 = g->ecx;
    t159 = g->edx;
    if (t157 != 0u)
    {
        ecx = t158;
        edx = t159;
        ebp = t157;
        goto L_100bfd7e;
    }
    eax = t157;
    edx = t159;
    COW_AT(100bfd6e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t160 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t161 = g->edx;
    eax = t160;
    edx = t161;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfd7e: ;
    COW_AT(100bfd7e)
    wr32(sp0 - 0x16cu, 2u);
    ebx = 0u;
    loc_16c = 2u;
L_100bfdb6: ;
    COW_AT(100bfdb6)
    wr32(sp0 - 0x170u, sp0 - 0x158u);
    g->eax = sp0 - 0x158u;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t171 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x158u, loc_16c);
    t172 = g->edx;
    wr8(sp0 - 0x156u, 0u);
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    g->edx = t172;
    t173 = cow_thiscall(g, COW_IMG(0x10259910u), self + 0x714u, 1, sp0 - 0x158u);
    t174 = g->edx;
    if (rd8(sp0 - 0x14fu) == 0u)
    {
        edx = t174;
        goto L_100bfe07;
    }
    eax = (t173 & 0xffffff00u) | rd8(sp0 - 0x14fu);
    edx = t174;
    COW_AT(100bfde2)
    if ((uint8_t)eax == 1u) goto L_100bfe0b;
    COW_AT(100bfde6)
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    g->eax = sp0 - 0x104u;
    g->esp = sp0 - 0x168u;
    t175 = cow_thiscall(g, rd32(rd32(ebp) + 0x28u), ebp, 1, sp0 - 0x104u);
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    wr32(sp0 - 0x170u, ebx);
    t176 = rd32(sp0 - 0x154u);
    wr32(sp0 - 0x174u, t176);
    g->edx = t176;
    t177 = cow_thiscall(g, COW_IMG(0x102596e0u), self + 0x714u, 3, t176, ebx, sp0 - 0x104u);
    t178 = g->edx;
    eax = t177;
    edx = t178;
L_100bfe1e: ;
    COW_AT(100bfe1e)
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    t182 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x158u);
    wr8(sp0 - 0x156u, 0u);
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    g->edx = sp0 - 0x158u;
    t183 = cow_thiscall(g, COW_IMG(0x10259910u), self + 0x714u, 1, sp0 - 0x158u);
    t184 = g->edx;
    eax = t183;
    edx = t184;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfd84: ;
    COW_AT(100bfd84)
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, eax);
    g->esp = sp0 - 0x168u;
    t162 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, sp0 - 0xecu, 1, 2, eax, sp0 - 0xecu);
    t163 = g->edx;
    g->edx = t163;
    t164 = cow_thiscall(g, COW_IMG(0x10154a40u), t162, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t165 = g->edx;
    if ((uint8_t)t164 == 0u)
    {
        eax = t164;
        edx = t165;
        goto L_100c020d;
    }
    eax = t164;
    edx = t165;
    COW_AT(100bfd9e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t166 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    t167 = g->edx;
    g->edx = t167;
    t168 = cow_thiscall(g, COW_IMG(0x10154f10u), sp0 - 0xecu, 0);
    t169 = g->ecx;
    t170 = g->edx;
    wr32(sp0 - 0x16cu, 3u);
    ecx = t169;
    edx = t170;
    ebx = t168;
    ebp = t166;
    loc_16c = 3u;
    goto L_100bfdb6;
L_100bfe07: ;
    COW_AT(100bfe07)
    eax = 0u;
L_100bfe10: ;
    COW_AT(100bfe10)
    wr32(sp0 - 0x16cu, ebp);
    wr32(sp0 - 0x170u, eax);
    t179 = rd32(sp0 - 0x154u);
    wr32(sp0 - 0x174u, t179);
    g->eax = t179;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t180 = cow_thiscall(g, COW_IMG(0x10259480u), self + 0x714u, 3, t179, eax, ebp);
    t181 = g->edx;
    eax = t180;
    edx = t181;
    goto L_100bfe1e;
L_100bfe0b: ;
    COW_AT(100bfe0b)
    eax = 1u;
    goto L_100bfe10;
L_100bfe41: ;
    COW_AT(100bfe41)
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t112 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    wr32(sp0 - 0x16cu, sp0 - 0x132u);
    wr32(sp0 - 0x170u, sp0 - 0x134u);
    t113 = arg1 + t112 + 1u;
    wr32(sp0 - 0x174u, t113);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x132u;
    g->esp = sp0 - 0x16cu;
    t114 = cow_call_regs(g, COW_IMG(0x100bdbe0u), t112, g->ecx, sp0 - 0x134u, 1, 3, self + 0x50u, t113, sp0 - 0x134u);
    t115 = g->ecx;
    t116 = g->edx;
    wr32(sp0 - 0x170u, t113 + t114);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t115;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t113 + t114, g->ecx, t116, 1, 3, self + 0x50u, t113 + t114, sp0 - 0x132u);
    t117 = g->ecx;
    t118 = g->edx;
    t119 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t119);
    g->eax = t119;
    g->edx = t118;
    g->esp = sp0 - 0x174u;
    t120 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t119);
    t121 = g->edx;
    t122 = rd16(sp0 - 0x134u) != 1u;
    wr32(sp0 - 0x154u, t122);
    if ((uint32_t)(int16_t)rd16(sp0 - 0x132u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x132u);
        edx = t121;
        ebp = t120;
        loc_154 = t122;
        goto L_100bfeab;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x132u);
    edx = t121;
    loc_154 = t122;
    COW_AT(100bfe9b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t123 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t124 = g->edx;
    eax = t123;
    edx = t124;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfeab: ;
    COW_AT(100bfeab)
    wr32(sp0 - 0x16cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t125 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t126 = g->edx;
    if (t125 == 0u)
    {
        eax = t125;
        edx = t126;
        goto L_100c020d;
    }
    eax = t125;
    edx = t126;
    COW_AT(100bfebf)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t127 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t128 = g->ecx;
    t129 = g->edx;
    if (t127 != 0u)
    {
        eax = t127;
        ecx = t128;
        ebx = t127;
        goto L_100bfedc;
    }
    eax = t127;
    edx = t129;
    COW_AT(100bfecc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t130 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t131 = g->edx;
    eax = t130;
    edx = t131;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bfedc: ;
    COW_AT(100bfedc)
    wr32(sp0 - 0x16cu, 2u);
    wr32(sp0 - 0x170u, sp0 - 0x158u);
    g->edx = sp0 - 0x158u;
    g->esp = sp0 - 0x168u;
    cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x158u, 2u);
    t132 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    wr8(sp0 - 0x156u, 0u);
    g->eax = sp0 - 0x158u;
    g->edx = t132;
    t133 = cow_thiscall(g, COW_IMG(0x10259910u), self + 0x714u, 1, sp0 - 0x158u);
    t134 = g->edx;
    wr32(sp0 - 0x16cu, ebx);
    t135 = rd32(sp0 - 0x154u);
    wr32(sp0 - 0x170u, t135);
    wr32(sp0 - 0x174u, ebp);
    t136 = cow_thiscall(g, COW_IMG(0x10259480u), self + 0x714u, 3, ebp, t135, ebx);
    t137 = g->ecx;
    eax = t136;
    ecx = t137;
L_100bfff2: ;
    COW_AT(100bfff2)
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    g->edx = sp0 - 0x158u;
    g->esp = sp0 - 0x168u;
    cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x158u);
    t138 = g->edx;
    wr8(sp0 - 0x156u, 0u);
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    g->eax = sp0 - 0x158u;
    g->edx = t138;
    t139 = cow_thiscall(g, COW_IMG(0x10259910u), self + 0x714u, 1, sp0 - 0x158u);
    t140 = g->edx;
    eax = t139;
    edx = t140;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bff15: ;
    COW_AT(100bff15)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x150u);
    wr32(sp0 - 0x174u, arg1 + 1u);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x150u;
    g->esp = sp0 - 0x16cu;
    t81 = cow_call_regs(g, COW_IMG(0x100bdb80u), eax, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t82 = g->ecx;
    t83 = g->edx;
    t84 = arg1 + t81 + 1u;
    wr32(sp0 - 0x170u, t84);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t82;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t84, g->ecx, t83, 1, 3, self + 0x50u, t84, sp0 - 0x134u);
    t85 = g->ecx;
    t86 = g->edx;
    t87 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t87);
    g->eax = t87;
    g->edx = t86;
    g->esp = sp0 - 0x174u;
    t88 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t87);
    t89 = g->edx;
    if ((uint32_t)(int16_t)rd16(sp0 - 0x134u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        edx = t89;
        ebx = t88;
        goto L_100bff5f;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
    edx = t89;
    COW_AT(100bff4f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t90 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t91 = g->edx;
    eax = t90;
    edx = t91;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100bff5f: ;
    COW_AT(100bff5f)
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, eax);
    g->esp = sp0 - 0x168u;
    t92 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, sp0 - 0xecu, edx, 1, 2, eax, sp0 - 0xecu);
    t93 = g->edx;
    g->edx = t93;
    t94 = cow_thiscall(g, COW_IMG(0x10154a40u), t92, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t95 = g->edx;
    if ((uint8_t)t94 == 0u)
    {
        eax = t94;
        edx = t95;
        goto L_100c020d;
    }
    eax = t94;
    edx = t95;
    COW_AT(100bff79)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t96 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    t97 = g->edx;
    g->edx = t97;
    t98 = cow_thiscall(g, COW_IMG(0x10154f10u), sp0 - 0xecu, 0);
    t99 = g->edx;
    if (t98 != 0u)
    {
        eax = t98;
        edx = t99;
        ebp = t96;
    COW_AT(100bff9d)
        wr32(sp0 - 0x16cu, 0u);
        loc_16c = 0u;
    }
    else
    {
        eax = t98;
        edx = t99;
        ebp = t96;
    COW_AT(100bff99)
        wr32(sp0 - 0x16cu, 1u);
        loc_16c = 1u;
    }
    COW_AT(100bff9f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t100 = cow_thiscall(g, COW_IMG(0x102591a0u), self + 0x714u, 1, loc_16c);
    t101 = g->edx;
    t102 = cow_thiscall(g, COW_IMG(0x102593b0u), self + 0x714u, 0);
    t103 = g->ecx;
    wr32(sp0 - 0x16cu, 3u);
    wr32(sp0 - 0x170u, sp0 - 0x158u);
    g->edx = sp0 - 0x158u;
    cow_thiscall_cdecl(g, COW_IMG(0x100be680u), t103, 2, sp0 - 0x158u, 3u);
    t104 = g->edx;
    wr8(sp0 - 0x156u, 0u);
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    cow_thiscall(g, COW_IMG(0x10259910u), self + 0x714u, 1, sp0 - 0x158u);
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    g->eax = sp0 - 0x104u;
    g->edx = rd32(ebp);
    t105 = rd32(ebp);
    t106 = cow_thiscall(g, rd32(t105 + 0x28u), ebp, 1, sp0 - 0x104u);
    t107 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    g->edx = t107;
    g->esp = sp0 - 0x16cu;
    t108 = cow_thiscall(g, COW_IMG(0x10154f10u), sp0 - 0xecu, 0);
    t109 = g->edx;
    wr32(sp0 - 0x170u, t108);
    wr32(sp0 - 0x174u, ebx);
    g->esp = sp0 - 0x168u;
    t110 = cow_thiscall(g, COW_IMG(0x102596e0u), self + 0x714u, 3, ebx, t108, sp0 - 0x104u);
    t111 = g->ecx;
    eax = t110;
    ecx = t111;
    goto L_100bfff2;
L_100c0015: ;
    COW_AT(100c0015)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t64 = g->edx;
    if ((uint32_t)(int16_t)rd16(sp0 - 0x134u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        edx = t64;
        goto L_100c0041;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
    edx = t64;
    COW_AT(100c0031)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t65 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t66 = g->edx;
    eax = t65;
    edx = t66;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100c0041: ;
    COW_AT(100c0041)
    if ((uint8_t)ebx != 0x38u) goto L_100c0075;
    COW_AT(100c0046)
    wr32(sp0 - 0x16cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t67 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t68 = g->edx;
    if (t67 == 0u)
    {
        eax = t67;
        edx = t68;
        goto L_100c020d;
    }
    eax = t67;
    edx = t68;
    COW_AT(100c005a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t69 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t70 = g->edx;
    if (t69 != 0u)
    {
        eax = t69;
        goto L_100c0098;
    }
    eax = t69;
    edx = t70;
    COW_AT(100c0065)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t71 = cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    goto L_100c0297;
L_100c0075: ;
    COW_AT(100c0075)
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, eax);
    g->esp = sp0 - 0x168u;
    t73 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, sp0 - 0xecu, edx, 1, 2, eax, sp0 - 0xecu);
    t74 = g->edx;
    g->edx = t74;
    t75 = cow_thiscall(g, COW_IMG(0x10154a40u), t73, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t76 = g->edx;
    if ((uint8_t)t75 == 0u)
    {
        eax = t75;
        edx = t76;
        goto L_100c020d;
    }
    eax = t75;
    edx = t76;
    COW_AT(100c008f)
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    t77 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    eax = t77;
L_100c0098: ;
    COW_AT(100c0098)
    wr8(self + 0x6ecu, 1u);
    g->eax = eax;
    g->edx = rd32(eax);
    t78 = rd32(eax);
    g->esp = sp0 - 0x168u;
    t79 = cow_thiscall(g, rd32(t78 + 8u), eax, 0);
    t80 = g->edx;
    eax = t79;
    edx = t80;
L_100c0273: ;
    COW_AT(100c0273)
    if (eax == 0u)
    {
    COW_AT(100c0290)
        wr8(self + 0x6edu, 0u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
    }
    else
    {
    COW_AT(100c0278)
        if (eax == 1u)
        {
            eax = eax - 1u;
    COW_AT(100c0287)
            wr8(self + 0x6edu, 1u);
            loc_15c = rd32(sp0 - 0x15cu);
            loc_160 = rd32(sp0 - 0x160u);
            loc_164 = rd32(sp0 - 0x164u);
            loc_168 = rd32(sp0 - 0x168u);
        }
        else
        {
            eax = eax - 1u;
    COW_AT(100c027b)
            if (eax != 1u)
            {
                eax = eax - 1u;
                loc_15c = rd32(sp0 - 0x15cu);
                loc_160 = rd32(sp0 - 0x160u);
                loc_164 = rd32(sp0 - 0x164u);
                loc_168 = rd32(sp0 - 0x168u);
            }
            else
            {
                eax = eax - 1u;
    COW_AT(100c027e)
                wr8(self + 0x6edu, 2u);
                loc_15c = rd32(sp0 - 0x15cu);
                loc_160 = rd32(sp0 - 0x160u);
                loc_164 = rd32(sp0 - 0x164u);
                loc_168 = rd32(sp0 - 0x168u);
            }
        }
    }
    goto L_100c0297;
L_100c00ab: ;
    COW_AT(100c00ab)
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t26 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x14fu);
    t27 = arg1 + t26 + 1u;
    wr32(sp0 - 0x174u, t27);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x14fu;
    g->esp = sp0 - 0x16cu;
    t28 = cow_call_regs(g, COW_IMG(0x100bdb80u), t26, g->ecx, g->edx, 1, 3, self + 0x50u, t27, sp0 - 0x14fu);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x170u, t27 + t28);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t29;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t27 + t28, g->ecx, t30, 1, 3, self + 0x50u, t27 + t28, sp0 - 0x134u);
    t31 = g->ecx;
    t32 = g->edx;
    t33 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t33);
    g->eax = t33;
    g->esp = sp0 - 0x174u;
    t34 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t33);
    t35 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x16cu, t35);
    g->eax = t35;
    g->edx = rd32(self + 4u);
    t36 = rd32(self + 4u);
    g->esp = sp0 - 0x168u;
    t37 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t35);
    t38 = g->edx;
    if (t37 == 0u)
    {
        eax = t37;
        edx = t38;
        goto L_100c020d;
    }
    edx = t38;
    ebp = t34;
    edi = t37;
    COW_AT(100c0111)
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, edi);
    wr32(sp0 - 0x174u, sp0 - 0x90u);
    g->eax = sp0 - 0x90u;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t39 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0x90u);
    t40 = g->edx;
    g->edx = t40;
    g->esp = sp0 - 0x168u;
    t41 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x170u), 0u);
    t42 = g->edx;
    t43 = cow_call_regs(g, COW_IMG(0x10257b40u), t41, sp0 - 0x90u, t42, 1, 0);
    t44 = g->edx;
    if ((int8_t)rd8(sp0 - 0x14fu) >= 1)
    {
        edx = t44;
        ebx = t41;
    COW_AT(100c018f)
        wr32(sp0 - 0x16cu, 2u);
        wr32(sp0 - 0x170u, edi);
        wr32(sp0 - 0x174u, sp0 - 0xb0u);
        g->eax = sp0 - 0xb0u;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        t54 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xb0u);
        t55 = g->edx;
        g->edx = t55;
        g->esp = sp0 - 0x168u;
        t56 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x170u), 2u);
        t57 = g->edx;
        wr32(sp0 - 0x16cu, t56);
        wr32(sp0 - 0x170u, ebx);
        wr32(sp0 - 0x174u, 2u);
        g->edx = t57;
        t58 = cow_thiscall(g, COW_IMG(0x102586d0u), sp0 - 0x104u, 3, 2u, ebx, t56);
        t59 = g->edx;
        t60 = cow_call_regs(g, COW_IMG(0x10257b40u), t58, sp0 - 0xb0u, t59, 1, 0);
        t61 = g->edx;
        wr32(sp0 - 0x16cu, sp0 - 0x104u);
        wr32(sp0 - 0x170u, 0u);
        wr32(sp0 - 0x174u, ebp);
        g->edx = t61;
        t62 = cow_thiscall(g, COW_IMG(0x102596e0u), self + 0x714u, 3, ebp, 0u, sp0 - 0x104u);
        t63 = g->edx;
        eax = t62;
        edx = t63;
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
    }
    else
    {
        eax = t43;
        edx = t44;
        ebx = t41;
    COW_AT(100c0142)
        wr32(sp0 - 0x16cu, 1u);
        wr32(sp0 - 0x170u, edi);
        wr32(sp0 - 0x174u, sp0 - 0xc0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        t45 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xc0u);
        t46 = g->edx;
        g->edx = t46;
        g->esp = sp0 - 0x168u;
        t47 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x170u), 1u);
        t48 = g->edx;
        wr32(sp0 - 0x16cu, t47);
        wr32(sp0 - 0x170u, ebx);
        wr32(sp0 - 0x174u, 1u);
        g->edx = t48;
        t49 = cow_thiscall(g, COW_IMG(0x102586d0u), sp0 - 0x104u, 3, 1u, ebx, t47);
        t50 = g->edx;
        t51 = cow_call_regs(g, COW_IMG(0x10257b40u), t49, sp0 - 0xc0u, t50, 1, 0);
        wr32(sp0 - 0x16cu, sp0 - 0x104u);
        wr32(sp0 - 0x170u, 0u);
        wr32(sp0 - 0x174u, ebp);
        g->edx = sp0 - 0x104u;
        t52 = cow_thiscall(g, COW_IMG(0x102596e0u), self + 0x714u, 3, ebp, 0u, sp0 - 0x104u);
        t53 = g->edx;
        eax = t52;
        edx = t53;
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
    }
    goto L_100c0297;
L_100c01dc: ;
    COW_AT(100c01dc)
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x134u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t17 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x16cu, t17);
    g->eax = t17;
    g->edx = rd32(self + 4u);
    t18 = rd32(self + 4u);
    t19 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t17);
    t20 = g->edx;
    if (t19 != 0u)
    {
        eax = t19;
        edx = t20;
        goto L_100c0240;
    }
    eax = t19;
    edx = t20;
L_100c020d: ;
    COW_AT(100c020d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t312 = cow_thiscall(g, COW_IMG(0x10258790u), sp0 - 0x114u, 0);
    t313 = g->edx;
    g->edx = t313;
    t314 = cow_thiscall(g, COW_IMG(0x10258650u), sp0 - 0x104u, 0);
    t315 = g->edx;
    g->edx = t315;
    t316 = cow_thiscall(g, COW_IMG(0x10154d70u), sp0 - 0xecu, 0);
    t317 = g->edx;
    t318 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x140u, t317, 0);
    g->ebx = rd32(sp0 - 0x15cu);
    g->esi = rd32(sp0 - 0x164u);
    g->edi = rd32(sp0 - 0x168u);
    g->ebp = rd32(sp0 - 0x160u);
    return t318 & 0xffffff00u;
L_100c0240: ;
    COW_AT(100c0240)
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, eax);
    wr32(sp0 - 0x174u, sp0 - 0xa0u);
    g->eax = sp0 - 0xa0u;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t21 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xa0u);
    t22 = g->edx;
    g->edx = t22;
    g->esp = sp0 - 0x168u;
    t23 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x170u), 0u);
    t24 = g->edx;
    cow_call_regs(g, COW_IMG(0x10257b40u), t23, sp0 - 0xa0u, t24, 1, 0);
    t25 = g->edx;
    wr8(self + 0x6ecu, 1u);
    eax = t23;
    edx = t25;
    goto L_100c0273;
L_100c02f1: ;
    COW_AT(100c02f1)
    t425 = rd32(self + 0x704u);
    wr32(self + 0x6f0u, t425);
    wr32(self + 0x704u, self + 0x110u);
    edx = self + 0x110u;
    goto L_100c0309;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100bf3e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100bf429u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x15cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100bf45du:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x15cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100bf470u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf47bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf48fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf49eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf4aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf4bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf4d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf4e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf4f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf508u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf51cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf530u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf544u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf562u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf574u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf5a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf5b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf5c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf5dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf5deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf5e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf5e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf5e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf600u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf616u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf62au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf62fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf645u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf678u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        uint32_t loc_170;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_170 = rd32(sp0 - 0x170u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x170u;
        g->ecx = self + 0x714u;
        (void)sp0;
        return 1;
    }
    case 0x100bf683u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        uint32_t loc_170;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_170 = rd32(sp0 - 0x170u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x170u;
        g->ecx = self + 0x714u;
        (void)sp0;
        return 1;
    }
    case 0x100bf69au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf6c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        uint32_t loc_170;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_170 = rd32(sp0 - 0x170u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100bf6d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        uint32_t loc_170;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_170 = rd32(sp0 - 0x170u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100bf6f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf75fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf7acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf7ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf82au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf842u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf862u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_178;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_178 = rd32(sp0 - 0x178u);
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf87du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf89eu:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf8a1u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf8a4u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf8b5u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf8c6u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf8cdu:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf8d1u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf8d8u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf8e8u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bf8fcu:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf909u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf919u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bf96eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf9d1u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x174u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x100bf9f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bfa36u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfa46u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfa6bu:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfa7fu:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfa8au:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfa9au:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfab4u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bfabdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfad7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bfb15u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfb25u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfb47u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfb5bu:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfb66u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfb76u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfb90u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bfb99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfbb3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bfbf1u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfc01u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfc12u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfc19u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfc1du:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfc24u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfc2bu:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfc2fu:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bfc46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfc4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfc50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfc6au:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bfc75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfc7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfc81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfc95u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfca2u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfcb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfcb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfcbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfcccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfcebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bfd38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x130u);
        (void)sp0;
        return 1;
    }
    case 0x100bfd48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x130u);
        (void)sp0;
        return 1;
    }
    case 0x100bfd4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x130u);
        (void)sp0;
        return 1;
    }
    case 0x100bfd61u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfd6eu:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfd7eu:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfd84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x130u);
        (void)sp0;
        return 1;
    }
    case 0x100bfd9eu:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bfdb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x16cu;
        (void)sp0;
        return 1;
    }
    case 0x100bfde2u:
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
        g->esp = sp0 - 0x168u;
        g->edi = self + 0x714u;
        wr32(sp0 - 0x170u, sp0 - 0x158u);
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100bfde6u:
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
        g->esp = sp0 - 0x168u;
        g->edi = self + 0x714u;
        wr32(sp0 - 0x170u, sp0 - 0x158u);
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100bfe07u:
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
        g->esp = sp0 - 0x168u;
        g->edi = self + 0x714u;
        wr32(sp0 - 0x170u, sp0 - 0x158u);
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100bfe0bu:
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
        g->esp = sp0 - 0x168u;
        g->edi = self + 0x714u;
        wr32(sp0 - 0x170u, sp0 - 0x158u);
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100bfe10u:
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
        g->esp = sp0 - 0x168u;
        g->edi = self + 0x714u;
        wr32(sp0 - 0x170u, sp0 - 0x158u);
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100bfe1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        g->edi = self + 0x714u;
        (void)sp0;
        return 1;
    }
    case 0x100bfe41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bfe9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x132u);
        (void)sp0;
        return 1;
    }
    case 0x100bfeabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_154 = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x132u);
        (void)sp0;
        return 1;
    }
    case 0x100bfebfu:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfeccu:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bfedcu:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100bff15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bff4fu:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bff5fu:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100bff79u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bff99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x168u;
        g->ecx = self + 0x714u;
        g->edi = self + 0x714u;
        wr32(sp0 - 0x16cu, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bff9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x168u;
        g->ecx = self + 0x714u;
        g->edi = self + 0x714u;
        wr32(sp0 - 0x16cu, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bff9fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x16cu;
        g->ecx = self + 0x714u;
        g->edi = self + 0x714u;
        (void)sp0;
        return 1;
    }
    case 0x100bfff2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        g->edi = self + 0x714u;
        (void)sp0;
        return 1;
    }
    case 0x100c0015u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0031u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100c0041u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100c0046u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100c005au:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0065u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0075u:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100c008fu:
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
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x16cu, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100c0098u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c00abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0111u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0142u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x174u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100c018fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x174u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100c01dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x168u);
        in_esi = rd32(sp0 - 0x164u);
        in_ebp = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c020du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0240u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0273u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0278u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c027bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c027eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0287u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0290u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_16c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0297u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
        uint32_t loc_168;
        uint32_t loc_16c;
        uint32_t loc_170;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_170 = rd32(sp0 - 0x170u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_168 = rd32(sp0 - 0x168u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c02a8u:
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
        g->esp = sp0 - 0x168u;
        g->edi = self + 0x714u;
        (void)sp0;
        return 1;
    }
    case 0x100c02b2u:
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
        g->esp = sp0 - 0x168u;
        g->edi = self + 0x714u;
        (void)sp0;
        return 1;
    }
    case 0x100c02f1u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x100c0309u:
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
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100bf3e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100bf3e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
