/* f_0x100d2f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100d2f60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d2f72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_100d2f72;
    case 0x100d2f82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_100d2f82;
    case 0x100d2f89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_100d2f89;
    case 0x100d2f8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_100d2f8b;
    case 0x100d2f9fu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d2f9f;
    case 0x100d2fb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100d2fb7;
    case 0x100d2fbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100d2fbc;
    case 0x100d2fc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100d2fc1;
    case 0x100d2fd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_44 = rd32(sp0 - 0x44u); goto E_100d2fd7;
    case 0x100d3005u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3005;
    case 0x100d3020u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3020;
    case 0x100d3024u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3024;
    case 0x100d3038u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3038;
    case 0x100d3083u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); goto E_100d3083;
    case 0x100d308bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d308b;
    case 0x100d308fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d308f;
    case 0x100d30a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d30a6;
    case 0x100d30b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d30b7;
    case 0x100d30dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_100d30db;
    case 0x100d3102u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_100d3102;
    case 0x100d3123u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_38 = rd32(sp0 - 0x38u); goto E_100d3123;
    case 0x100d312fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_38 = rd32(sp0 - 0x38u); goto E_100d312f;
    case 0x100d313du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_38 = rd32(sp0 - 0x38u); goto E_100d313d;
    case 0x100d3144u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_38 = rd32(sp0 - 0x38u); goto E_100d3144;
    case 0x100d314eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_38 = rd32(sp0 - 0x38u); goto E_100d314e;
    case 0x100d3158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_38 = rd32(sp0 - 0x38u); goto E_100d3158;
    case 0x100d3168u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d3168;
    case 0x100d3174u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d3174;
    case 0x100d318au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d318a;
    case 0x100d3199u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d3199;
    case 0x100d31b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d31b5;
    case 0x100d31c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d31c6;
    case 0x100d31e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d31e2;
    case 0x100d31f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d31f7;
    case 0x100d31fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d31fb;
    case 0x100d3221u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3221;
    case 0x100d3239u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3239;
    case 0x100d3241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3241;
    case 0x100d3251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3251;
    case 0x100d32abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d32ab;
    case 0x100d32bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100d32bd;
    case 0x100d32c9u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d32c9;
    case 0x100d32d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d32d9;
    case 0x100d32e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_100d32e5;
    case 0x100d32fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d32fd;
    case 0x100d3302u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3302;
    case 0x100d3331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3331;
    case 0x100d3350u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3350;
    case 0x100d3358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3358;
    case 0x100d336cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d336c;
    case 0x100d33acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d33ac;
    case 0x100d33c0u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d33c0;
    case 0x100d33cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d33cf;
    case 0x100d33d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d33d9;
    case 0x100d33dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d33db;
    case 0x100d340eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d340e;
    case 0x100d3416u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3416;
    case 0x100d342au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d342a;
    case 0x100d346au: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d346a;
    case 0x100d347cu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d347c;
    case 0x100d349fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d349f;
    case 0x100d34a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d34a4;
    case 0x100d34b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d34b6;
    case 0x100d34e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d34e8;
    case 0x100d3507u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3507;
    case 0x100d350fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d350f;
    case 0x100d3523u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3523;
    case 0x100d3563u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3563;
    case 0x100d3575u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3575;
    case 0x100d3598u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3598;
    case 0x100d359du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d359d;
    case 0x100d35aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d35aa;
    case 0x100d35ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d35dd;
    case 0x100d35e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d35e5;
    case 0x100d35f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d35f9;
    case 0x100d3639u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3639;
    case 0x100d3647u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3647;
    case 0x100d3660u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3660;
    case 0x100d366eu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d366e;
    case 0x100d3687u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3687;
    case 0x100d3695u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3695;
    case 0x100d36b0u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d36b0;
    case 0x100d36c2u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d36c2;
    case 0x100d36d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d36d5;
    case 0x100d36d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d36d6;
    case 0x100d36f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_100d36f9;
    case 0x100d3718u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3718;
    case 0x100d3720u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3720;
    case 0x100d3734u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3734;
    case 0x100d3774u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3774;
    case 0x100d3782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3782;
    case 0x100d3789u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3789;
    case 0x100d37a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d37a0;
    case 0x100d37aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d37aa;
    case 0x100d37d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_48 = rd32(sp0 - 0x48u); goto E_100d37d0;
    case 0x100d37ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d37dd;
    case 0x100d37f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d37f5;
    case 0x100d3809u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3809;
    case 0x100d384du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_5c = rd32(sp0 - 0x5cu); goto E_100d384d;
    case 0x100d385cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d385c;
    case 0x100d386cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100d386c;
    case 0x100d3871u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100d3871;
    case 0x100d3876u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100d3876;
    case 0x100d388cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_44 = rd32(sp0 - 0x44u); goto E_100d388c;
    case 0x100d38beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d38be;
    case 0x100d38d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d38d6;
    case 0x100d38e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100d38e6;
    case 0x100d38ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100d38eb;
    case 0x100d38f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100d38f0;
    case 0x100d3906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_44 = rd32(sp0 - 0x44u); goto E_100d3906;
    case 0x100d3934u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3934;
    case 0x100d3949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3949;
    case 0x100d395du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d395d;
    case 0x100d3990u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_5c = rd32(sp0 - 0x5cu); goto E_100d3990;
    case 0x100d3998u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3998;
    case 0x100d39b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d39b3;
    case 0x100d39c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d39c4;
    case 0x100d39e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100d39e8;
    case 0x100d3a0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100d3a0f;
    case 0x100d3a30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3a30;
    case 0x100d3a3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3a3c;
    case 0x100d3a4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3a4a;
    case 0x100d3a51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3a51;
    case 0x100d3a5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3a5b;
    case 0x100d3a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3a65;
    case 0x100d3a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3a75;
    case 0x100d3a81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3a81;
    case 0x100d3a97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3a97;
    case 0x100d3aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3aa6;
    case 0x100d3ac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3ac2;
    case 0x100d3ad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3ad3;
    case 0x100d3aefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3aef;
    case 0x100d3b04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3b04;
    case 0x100d3b08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3b08;
    case 0x100d3b2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3b2e;
    case 0x100d3b46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3b46;
    case 0x100d3b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3b56;
    case 0x100d3b96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3b96;
    case 0x100d3ba8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3ba8;
    case 0x100d3bb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3bb4;
    case 0x100d3bc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3bc8;
    case 0x100d3bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_5c = rd32(sp0 - 0x5cu); goto E_100d3bfb;
    case 0x100d3c03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3c03;
    case 0x100d3c0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3c0a;
    case 0x100d3c15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3c15;
    case 0x100d3c30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_100d3c30;
    case 0x100d3c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_100d3c41;
    case 0x100d3c65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3c65;
    case 0x100d3c8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3c8c;
    case 0x100d3cafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3caf;
    case 0x100d3cfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3cfa;
    case 0x100d3d0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d0b;
    case 0x100d3d16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d16;
    case 0x100d3d21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d21;
    case 0x100d3d29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d29;
    case 0x100d3d2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d2b;
    case 0x100d3d32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d32;
    case 0x100d3d3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d3e;
    case 0x100d3d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d4c;
    case 0x100d3d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d53;
    case 0x100d3d5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d5d;
    case 0x100d3d67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d67;
    case 0x100d3d77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d77;
    case 0x100d3d83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d83;
    case 0x100d3d99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3d99;
    case 0x100d3da8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3da8;
    case 0x100d3dc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3dc4;
    case 0x100d3dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3dd5;
    case 0x100d3df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3df1;
    case 0x100d3e06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3e06;
    case 0x100d3e0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3e0a;
    case 0x100d3e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3e30;
    case 0x100d3e48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3e48;
    case 0x100d3e58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3e58;
    case 0x100d3e98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3e98;
    case 0x100d3eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3eaa;
    case 0x100d3eb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3eb5;
    case 0x100d3ebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3ebd;
    case 0x100d3ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d3ed0;
    case 0x100d3ee9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3ee9;
    case 0x100d3efau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3efa;
    case 0x100d3f14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3f14;
    case 0x100d3f1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3f1e;
    case 0x100d3f44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_48 = rd32(sp0 - 0x48u); goto E_100d3f44;
    case 0x100d3f51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3f51;
    case 0x100d3f73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d3f73;
    case 0x100d3f87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3f87;
    case 0x100d3fc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3fc7;
    case 0x100d3fd4u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3fd4;
    case 0x100d3fe0u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3fe0;
    case 0x100d3febu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3feb;
    case 0x100d3ff7u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d3ff7;
    case 0x100d3ffeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d3ffe;
    case 0x100d4001u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); goto E_100d4001;
    case 0x100d4031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100d4031;
    case 0x100d4041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_100d4041;
    case 0x100d4064u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_100d4064;
    case 0x100d406bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); self = rd32(sp0 - 0x60u); goto E_100d406b;
    case 0x100d4074u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_68 = rd32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100d4074;
    case 0x100d4080u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); goto E_100d4080;
    case 0x100d40a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_100d40a7;
    case 0x100d40acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_100d40ac;
    case 0x100d40c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_48 = rd32(sp0 - 0x48u); goto E_100d40c3;
    default: break;
    }
#endif

    COW_AT(100d2f60)
    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = rd32(self + 0x70u);
    COW_AT(100d2f72)
        t1 = rd32(eax + 0x120u);
        if (t1 >> 7u & 1u)
        {
            eax = t1;
            goto L_100d2f89;
        }
        eax = t1;
    COW_AT(100d2f82)
        if (!(eax >> 8u & 1u))
        {
            eax = eax >> 8u;
            ebx = in_ebx & 0xffffff00u;
            goto L_100d2f8b;
        }
        eax = eax >> 8u;
L_100d2f89: ;
    COW_AT(100d2f89)
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
L_100d2f8b: ;
    COW_AT(100d2f8b)
    g->eax = eax;
    g->edx = rd32(self);
    t2 = rd32(self);
    g->esp = sp0 - 0x58u;
    t3 = cow_thiscall(g, rd32(t2 + 0x354u), self, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        goto L_100d32c9;
    }
    eax = t3;
    edx = t4;
    COW_AT(100d2f9f)
    t5 = rd32(self + 0x768u);
    wr32(sp0 - 0x34u, t5);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t6 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x44u, t6);
    if ((int32_t)t6 < 9)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        ebp = t5;
        loc_44 = t6;
        goto L_100d2fbc;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    ebp = t5;
    loc_44 = t6;
    COW_AT(100d2fb7)
    if ((int32_t)eax < 29) goto L_100d2fc1;
L_100d2fbc: ;
    COW_AT(100d2fbc)
    if ((int32_t)eax < 37) goto L_100d2fd7;
L_100d2fc1: ;
    COW_AT(100d2fc1)
    wr32(sp0 - 0x5cu, COW_IMG(0x1035fb3cu));
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    t9 = g->edx;
    wr32(sp0 - 0x44u, 0x20u);
    eax = 0x20u;
    edx = t9;
    loc_44 = 0x20u;
L_100d2fd7: ;
    COW_AT(100d2fd7)
    t10 = rd16(COW_IMG(0x1035f410u) + eax * 2u);
    wr32(sp0 - 0x5cu, t10);
    wr32(sp0 - 0x60u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t11 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, t10);
    t12 = g->edx;
    wr32(sp0 - 0x48u, rd32(t11));
    g->eax = rd32(t11);
    g->edx = t12;
    t13 = rd32(t11);
    t14 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_100d3020;
    }
    eax = t14;
    COW_AT(100d3005)
    t17 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x5cu, t17);
    t18 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x60u, t18);
    g->eax = eax;
    g->edx = t18;
    g->esp = sp0 - 0x58u;
    t19 = cow_thiscall(g, COW_IMG(0x100d0d40u), self, 2, t18, t17);
    t20 = g->edx;
    wr32(sp0 - 0x40u, 0u);
    eax = t19;
    edx = t20;
    esi = 0u;
    loc_40 = 0u;
L_100d308f: ;
    COW_AT(100d308f)
    wr32(sp0 - 0x5cu, esi);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t33 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, esi);
    t34 = g->edx;
    wr32(sp0 + 4u, t33);
    if ((uint32_t)((int32_t)t33 >> 0xcu) == esi)
    {
        edx = t34;
        ebx = t33;
        ebp = (uint32_t)((int32_t)t33 >> 0xcu);
    }
    else
    {
        edx = t34;
        ebx = t33;
    COW_AT(100d30a6)
        t35 = (ebx & 0xfffu) | esi << 0xcu;
        wr32(sp0 + 4u, t35);
        ebx = t35;
        ebp = esi;
    }
    COW_AT(100d30b7)
    t36 = rd32(COW_IMG(0x1035f378u) + rd32(sp0 - 0x44u) * 4u);
    wr32(sp0 - 0x38u, t36);
    if (rd32(ebp * 0x30u + t36) != 0u)
    {
        esi = ebp * 0x30u + t36;
        loc_38 = t36;
    COW_AT(100d30db)
        if ((int32_t)(ebx & 0xfffu) < (int32_t)(rd32(esi + 0xcu) + rd32(esi + 0x14u) + rd32(esi + 0x1cu) + rd32(esi + 0x2cu) + rd32(esi + 4u) + rd32(esi + 0x24u)))
        {
            edx = rd32(esi + 0xcu) + rd32(esi + 0x14u) + rd32(esi + 0x1cu) + rd32(esi + 0x2cu) + rd32(esi + 4u) + rd32(esi + 0x24u);
        }
        else
        {
            eax = ebx & 0xfffu;
    COW_AT(100d3102)
            t37 = rd32(sp0 - 0x44u);
            wr32(sp0 - 0x5cu, t37);
            t38 = rd32(sp0 - 0x40u);
            wr32(sp0 - 0x60u, t38);
            wr32(sp0 - 0x64u, ebx);
            wr32(sp0 - 0x68u, COW_IMG(0x1035fb0cu));
            g->edx = t38;
            g->esp = sp0 - 0x68u;
            cow_stdcall(g, COW_IMG(0x10017d30u), 0);
            t39 = g->edx;
            wr32(sp0 + 4u, ebp << 0xcu);
            edx = t39;
            ebx = ebp << 0xcu;
            loc_38 = rd32(sp0 - 0x38u);
        }
    COW_AT(100d3123)
        if (loc_38 != 0u)
        {
    COW_AT(100d312f)
            if ((int32_t)(ebx & 0xfffu) >= (int32_t)rd32(esi + 4u))
            {
                eax = ebx & 0xfffu;
                ecx = rd32(esi + 4u);
                goto L_100d3144;
            }
            eax = ebx & 0xfffu;
    COW_AT(100d313d)
            esi = rd32(esi);
L_100d31fb: ;
    COW_AT(100d31fb)
            wr32(sp0 - 0x5cu, eax + esi);
            wr32(sp0 - 0x60u, sp0 - 0x30u);
            g->eax = sp0 - 0x30u;
            g->edx = edx;
            g->esp = sp0 - 0x58u;
            t42 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 0x30u, eax + esi);
            t43 = g->edx;
            wr32(sp0 - 0x48u, rd32(t42));
            g->eax = rd32(t42);
            g->edx = t43;
            t44 = rd32(t42);
            t45 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
            t46 = g->ecx;
            t47 = g->edx;
            if ((uint8_t)t45 == 0u)
            {
                ecx = t46;
                edx = t47;
                esi = eax + esi;
    COW_AT(100d3239)
                if (rd32(sp0 - 0x34u) != 0u)
                {
                    eax = rd32(sp0 - 0x34u);
    COW_AT(100d3241)
                    wr32(sp0 - 0x5cu, 0x20u);
                    g->eax = eax;
                    g->esp = sp0 - 0x50u;
                    t51 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
                    t52 = g->edx;
                    if (t51 == 0u)
                    {
                        edx = t52;
                    }
                    else
                    {
                        eax = t51;
                        edx = t52;
                        ebp = t51;
    COW_AT(100d3251)
                        g->esp = sp0 - 0x58u;
                        cow_thiscall(g, COW_IMG(0x100814a0u), ebp + 4u, 0);
                        t53 = rd32(rd32(sp0 - 0x34u) + 0x9ecu);
                        wr32(ebp + 0x14u, 0u);
                        wr32(ebp, t53);
                        t54 = rd32(self + 0x9ecu);
                        wr32(ebp, t54);
                        g->eax = rd32(self);
                        g->edx = t54;
                        t55 = rd32(self);
                        t56 = cow_thiscall(g, rd32(t55 + 0x348u), self, 0);
                        t57 = g->edx;
                        t58 = rd32(sp0 - 0x34u);
                        wr32(ebp + 0x14u, t56);
                        wr32(sp0 - 0x5cu, t58);
                        g->edx = t57;
                        t59 = cow_thiscall(g, COW_IMG(0x100814f0u), ebp + 4u, 1, t58);
                        t60 = g->edx;
                        wr32(sp0 - 0x5cu, 0u);
                        wr32(sp0 - 0x60u, self);
                        wr32(sp0 - 0x64u, ebp);
                        wr32(sp0 - 0x68u, COW_IMG(0x100d0e80u));
                        wr32(ebp + 0x10u, self);
                        wr32(ebp + 0x18u, ebx);
                        wr32(ebp + 0x1cu, esi);
                        g->edx = t60;
                        cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0x48u, 4, COW_IMG(0x100d0e80u), ebp, self, 0u);
                        t61 = g->edx;
                        edx = t61;
                    }
                }
            }
            else
            {
                eax = t45;
    COW_AT(100d3221)
                wr32(sp0 - 0x5cu, 1u);
                t48 = rd32(self + 0x9ecu);
                wr32(sp0 - 0x60u, t48);
                wr32(sp0 - 0x64u, ebx);
                t49 = rd32(sp0 - 0x48u);
                wr32(sp0 - 0x68u, t49);
                g->edx = t49;
                g->esp = sp0 - 0x58u;
                cow_call_regs(g, COW_IMG(0x100d0b50u), eax, self, g->edx, 0, 4, t49, ebx, t48, 1u);
                t50 = g->edx;
                edx = t50;
            }
        }
    }
L_100d32ab: ;
    COW_AT(100d32ab)
    t62 = rd32(sp0 - 0x40u) + 1u;
    t63 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x40u, t62);
    if ((int32_t)(t63 + 1u) < 9)
    {
        eax = t62;
        loc_40 = t62;
        goto L_100d308b;
    }
    eax = t62;
    COW_AT(100d32bd)
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (eax & 0xffffff00u) | 1u;
L_100d3020: ;
    COW_AT(100d3020)
    if (ebp == 0u) goto L_100d3083;
    COW_AT(100d3024)
    wr32(sp0 - 0x5cu, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t21 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        goto L_100d4080;
    }
    eax = t21;
    edx = t23;
    esi = t21;
    COW_AT(100d3038)
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t24 = rd32(ebp + 0x9ecu);
    wr32(esi + 0x14u, 0u);
    wr32(esi, t24);
    t25 = rd32(self + 0x9ecu);
    wr32(esi, t25);
    g->eax = t24;
    g->edx = rd32(self);
    t26 = rd32(self);
    t27 = cow_thiscall(g, rd32(t26 + 0x348u), self, 0);
    t28 = g->edx;
    wr32(sp0 - 0x5cu, ebp);
    wr32(esi + 0x14u, t27);
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, ebp);
    t30 = g->edx;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, self);
    wr32(sp0 - 0x64u, esi);
    wr32(sp0 - 0x68u, COW_IMG(0x100d4100u));
    wr32(esi + 0x10u, self);
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0x48u, 4, COW_IMG(0x100d4100u), esi, self, 0u);
    t32 = g->edx;
    eax = t31;
    edx = t32;
L_100d3083: ;
    COW_AT(100d3083)
    wr32(sp0 - 0x40u, 0u);
    esi = 0u;
    loc_40 = 0u;
    goto L_100d308f;
L_100d308b: ;
    COW_AT(100d308b)
    esi = loc_40;
    goto L_100d308f;
L_100d3144: ;
    COW_AT(100d3144)
    if ((int32_t)eax >= (int32_t)(ecx + rd32(esi + 0xcu)))
    {
        edx = rd32(esi + 0xcu);
        goto L_100d3158;
    }
    edx = rd32(esi + 0xcu);
    COW_AT(100d314e)
    esi = rd32(esi + 8u) - ecx;
    goto L_100d31fb;
L_100d3158: ;
    COW_AT(100d3158)
    t40 = rd32(esi + 0x14u);
    wr32(sp0 - 0x3cu, t40);
    if ((int32_t)eax >= (int32_t)(ecx + edx + rd32(esi + 0x14u)))
    {
        ebx = t40;
        loc_3c = t40;
        goto L_100d3174;
    }
    COW_AT(100d3168)
    esi = rd32(esi + 0x10u) - ecx - edx;
L_100d31f7: ;
    COW_AT(100d31f7)
    ebx = rd32(sp0 + 4u);
    goto L_100d31fb;
L_100d3174: ;
    COW_AT(100d3174)
    t41 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x38u, t41);
    if ((int32_t)eax >= (int32_t)(ebx + ecx + edx + t41))
    {
        loc_38 = t41;
        goto L_100d3199;
    }
    COW_AT(100d318a)
    esi = rd32(esi + 0x18u) - ecx - edx - loc_3c;
    edx = loc_3c;
    goto L_100d31f7;
L_100d3199: ;
    COW_AT(100d3199)
    if ((int32_t)eax >= (int32_t)(ecx + edx + loc_38 + loc_3c + rd32(esi + 0x24u)))
    {
        ebx = loc_3c;
        goto L_100d31c6;
    }
    ebx = loc_3c;
    COW_AT(100d31b5)
    esi = rd32(esi + 0x20u) - ecx - edx - ebx - loc_38;
    edx = loc_38;
    goto L_100d31f7;
L_100d31c6: ;
    COW_AT(100d31c6)
    if ((int32_t)eax >= (int32_t)(ebx + ecx + edx + rd32(esi + 0x2cu) + loc_38 + rd32(esi + 0x24u))) goto L_100d32ab;
    ebx = rd32(esi + 0x24u);
    COW_AT(100d31e2)
    esi = rd32(esi + 0x28u) - ecx - edx - loc_3c - loc_38 - ebx;
    goto L_100d31f7;
L_100d32c9: ;
    COW_AT(100d32c9)
    g->eax = eax;
    g->edx = rd32(self);
    t64 = rd32(self);
    g->esp = sp0 - 0x58u;
    t65 = cow_thiscall(g, rd32(t64 + 0x34cu), self, 0);
    t66 = g->ecx;
    t67 = g->edx;
    if (t65 == 0u)
    {
        eax = t65;
        goto L_100d33ac;
    }
    eax = t65;
    ecx = t66;
    edx = t67;
    COW_AT(100d32d9)
    if ((uint8_t)ebx != 0u)
    {
        ebp = rd32(self + 0x768u);
        esi = 0u;
    }
    else
    {
        ebp = rd32(self + 0x768u);
    COW_AT(100d32e5)
        t68 = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u);
        wr32(sp0 - 0x5cu, t68);
        g->eax = t68;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t69 = cow_cdecl(g, COW_IMG(0x100fd3a0u), 1, t68);
        t70 = g->ecx;
        t71 = g->edx;
        if ((uint8_t)t69 == 0u)
        {
            eax = t69;
            ecx = t70;
            edx = t71;
            esi = 0u;
        }
        else
        {
            eax = t69;
            ecx = t70;
            edx = t71;
    COW_AT(100d32fd)
            esi = 1u;
        }
    }
    COW_AT(100d3302)
    wr32(sp0 - 0x5cu, esi);
    wr32(sp0 - 0x60u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t72 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 1u, esi);
    t73 = g->edx;
    wr32(sp0 - 0x5cu, t72);
    wr32(sp0 - 0x60u, sp0 + 4u);
    g->edx = t73;
    t74 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, t72);
    t75 = g->edx;
    wr32(sp0 - 0x48u, rd32(t74));
    g->eax = rd32(t74);
    g->edx = t75;
    t76 = rd32(t74);
    t77 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t78 = g->ecx;
    t79 = g->edx;
    if ((uint8_t)t77 == 0u)
    {
        eax = t77;
        ecx = t78;
        edx = t79;
        goto L_100d3350;
    }
    COW_AT(100d3331)
    t80 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x5cu, t80);
    t81 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x60u, t81);
    g->eax = t81;
    g->esp = sp0 - 0x58u;
    t82 = cow_fastcall(g, COW_IMG(0x100d0d70u), self, t80, 2, t81, t80);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (t82 & 0xffffff00u) | 1u;
L_100d3350: ;
    COW_AT(100d3350)
    if (ebp == 0u) goto L_100d4074;
    COW_AT(100d3358)
    wr32(sp0 - 0x5cu, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t83 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t84 = g->ecx;
    t85 = g->edx;
    if (t83 == 0u)
    {
        eax = t83;
        ecx = t84;
        edx = t85;
        goto L_100d4080;
    }
    eax = t83;
    edx = t85;
    esi = t83;
    COW_AT(100d336c)
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t86 = rd32(ebp + 0x9ecu);
    wr32(esi + 0x14u, 0u);
    wr32(esi, t86);
    t87 = rd32(self + 0x9ecu);
    wr32(esi, t87);
    g->eax = rd32(self);
    g->edx = t87;
    t88 = rd32(self);
    t89 = cow_thiscall(g, rd32(t88 + 0x348u), self, 0);
    t90 = g->edx;
    wr32(sp0 - 0x5cu, ebp);
    wr32(esi + 0x14u, t89);
    g->edx = t90;
    t91 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, ebp);
    t92 = g->edx;
    wr32(esi + 0x10u, self);
    wr32(sp0 - 0x5cu, 0u);
    eax = t91;
    edx = t92;
L_100d4064: ;
    COW_AT(100d4064)
    wr32(sp0 - 0x60u, self);
    wr32(sp0 - 0x64u, esi);
    wr32(sp0 - 0x68u, COW_IMG(0x100d4220u));
    loc_64 = esi;
    loc_68 = COW_IMG(0x100d4220u);
L_100d406b: ;
    COW_AT(100d406b)
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t282 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0x48u, 4, loc_68, loc_64, self, 0u);
    eax = t282;
L_100d4074: ;
    COW_AT(100d4074)
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (eax & 0xffffff00u) | 1u;
L_100d33ac: ;
    COW_AT(100d33ac)
    g->eax = eax;
    g->edx = rd32(self);
    t93 = rd32(self);
    g->esp = sp0 - 0x58u;
    t94 = cow_thiscall(g, rd32(t93 + 0x358u), self, 0);
    t95 = g->edx;
    if (t94 == 0u)
    {
        edx = t95;
        goto L_100d346a;
    }
    eax = t94;
    edx = t95;
    COW_AT(100d33c0)
    g->eax = eax;
    g->edx = edx;
    t96 = rd32(self + 0x768u);
    g->esp = sp0 - 0x58u;
    t97 = cow_thiscall(g, COW_IMG(0x10084720u), self, 0);
    t98 = g->ecx;
    t99 = g->edx;
    if (t97 == 0u)
    {
        ecx = t98;
        edx = t99;
        ebp = t96;
    COW_AT(100d33d9)
        eax = 0u;
    }
    else
    {
        eax = t97;
        edx = t99;
        ebp = t96;
    COW_AT(100d33cf)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t100 = cow_thiscall(g, COW_IMG(0x10084720u), self, 0);
        t101 = g->ecx;
        t102 = g->edx;
        eax = t100 - 1u;
        ecx = t101;
        edx = t102;
    }
    COW_AT(100d33db)
    wr32(sp0 - 0x5cu, eax);
    wr32(sp0 - 0x60u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t103 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 4u, eax);
    t104 = g->edx;
    wr32(sp0 - 0x5cu, t103);
    wr32(sp0 - 0x60u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = t104;
    t105 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, t103);
    t106 = g->edx;
    wr32(sp0 - 0x48u, rd32(t105));
    g->eax = rd32(t105);
    g->edx = t106;
    t107 = rd32(t105);
    t108 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t109 = g->ecx;
    t110 = g->edx;
    if ((uint8_t)t108 != 0u)
    {
        eax = t108;
        goto L_100d36f9;
    }
    eax = t108;
    ecx = t109;
    edx = t110;
    COW_AT(100d340e)
    if (ebp == 0u) goto L_100d4074;
    COW_AT(100d3416)
    wr32(sp0 - 0x5cu, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t111 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t112 = g->ecx;
    t113 = g->edx;
    if (t111 == 0u)
    {
        eax = t111;
        ecx = t112;
        edx = t113;
        goto L_100d4080;
    }
    eax = t111;
    edx = t113;
    esi = t111;
    COW_AT(100d342a)
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t114 = rd32(ebp + 0x9ecu);
    wr32(esi + 0x14u, 0u);
    wr32(esi, t114);
    t115 = rd32(self + 0x9ecu);
    wr32(esi, t115);
    g->eax = t114;
    g->edx = rd32(self);
    t116 = rd32(self);
    t117 = cow_thiscall(g, rd32(t116 + 0x348u), self, 0);
    t118 = g->edx;
    wr32(sp0 - 0x5cu, ebp);
    wr32(esi + 0x14u, t117);
    g->edx = t118;
    t119 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, ebp);
    t120 = g->edx;
    wr32(esi + 0x10u, self);
    wr32(sp0 - 0x5cu, 0u);
    eax = t119;
    edx = t120;
    goto L_100d4064;
L_100d346a: ;
    COW_AT(100d346a)
    g->eax = rd32(self);
    g->edx = edx;
    t121 = rd32(self);
    g->esp = sp0 - 0x58u;
    t122 = cow_thiscall(g, rd32(t121 + 0x360u), self, 0);
    t123 = g->edx;
    if (t122 == 0u)
    {
        edx = t123;
        goto L_100d3563;
    }
    eax = t122;
    COW_AT(100d347c)
    g->eax = eax;
    g->edx = rd32(self);
    t124 = rd32(self);
    t125 = rd32(self + 0x768u);
    g->esp = sp0 - 0x58u;
    t126 = cow_thiscall(g, rd32(t124 + 0x348u), self, 0);
    t127 = g->edx;
    t128 = rd32(self + 0x768u);
    t129 = cow_fastcall(g, COW_IMG(0x10084420u), t128, t127, 0);
    t130 = g->ecx;
    t131 = g->edx;
    if ((int32_t)t129 < 9)
    {
        eax = t129;
        ebp = t125;
        esi = t126 - 5u;
    }
    else
    {
        eax = t129;
        ecx = t130;
        edx = t131;
        ebp = t125;
        esi = t126 - 5u;
    COW_AT(100d349f)
        if ((int32_t)eax < 29)
        {
    COW_AT(100d34a4)
            wr32(sp0 - 0x5cu, COW_IMG(0x1035fad0u));
            g->esp = sp0 - 0x5cu;
            cow_stdcall(g, COW_IMG(0x10017d30u), 0);
            eax = 1u;
        }
    }
    COW_AT(100d34b6)
    t132 = rd16(COW_IMG(0x1035f598u) + eax * 2u);
    wr32(sp0 - 0x5cu, esi + t132);
    wr32(sp0 - 0x60u, sp0 + 4u);
    g->eax = esi + t132;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0x58u;
    t133 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, esi + t132);
    t134 = g->edx;
    wr32(sp0 - 0x48u, rd32(t133));
    g->eax = rd32(t133);
    g->edx = t134;
    t135 = rd32(t133);
    t136 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t137 = g->ecx;
    t138 = g->edx;
    if ((uint8_t)t136 == 0u)
    {
        eax = t136;
        ecx = t137;
        edx = t138;
        goto L_100d3507;
    }
    edx = t138;
    COW_AT(100d34e8)
    t139 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x5cu, t139);
    t140 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x60u, t140);
    g->eax = t139;
    g->esp = sp0 - 0x58u;
    t141 = cow_fastcall(g, COW_IMG(0x100d0d70u), self, edx, 2, t140, t139);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (t141 & 0xffffff00u) | 1u;
L_100d3507: ;
    COW_AT(100d3507)
    if (ebp == 0u) goto L_100d4074;
    COW_AT(100d350f)
    wr32(sp0 - 0x5cu, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t142 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t143 = g->ecx;
    t144 = g->edx;
    if (t142 == 0u)
    {
        eax = t142;
        ecx = t143;
        edx = t144;
        goto L_100d4080;
    }
    eax = t142;
    edx = t144;
    esi = t142;
    COW_AT(100d3523)
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t145 = rd32(ebp + 0x9ecu);
    wr32(esi + 0x14u, 0u);
    wr32(esi, t145);
    t146 = rd32(self + 0x9ecu);
    wr32(esi, t146);
    g->eax = t146;
    g->edx = rd32(self);
    t147 = rd32(self);
    t148 = cow_thiscall(g, rd32(t147 + 0x348u), self, 0);
    t149 = g->edx;
    wr32(sp0 - 0x5cu, ebp);
    wr32(esi + 0x14u, t148);
    g->edx = t149;
    t150 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, ebp);
    t151 = g->edx;
    wr32(esi + 0x10u, self);
    wr32(sp0 - 0x5cu, 0u);
    eax = t150;
    edx = t151;
    goto L_100d4064;
L_100d3563: ;
    COW_AT(100d3563)
    g->eax = rd32(self);
    g->edx = edx;
    t152 = rd32(self);
    g->esp = sp0 - 0x58u;
    t153 = cow_thiscall(g, rd32(t152 + 0x36cu), self, 0);
    t154 = g->edx;
    if (t153 == 0u)
    {
        edx = t154;
        goto L_100d3639;
    }
    eax = t153;
    COW_AT(100d3575)
    g->eax = eax;
    g->edx = rd32(self);
    t155 = rd32(self);
    t156 = rd32(self + 0x768u);
    g->esp = sp0 - 0x58u;
    t157 = cow_thiscall(g, rd32(t155 + 0x348u), self, 0);
    t158 = g->edx;
    t159 = rd32(self + 0x768u);
    t160 = cow_fastcall(g, COW_IMG(0x10084420u), t159, t158, 0);
    t161 = g->ecx;
    t162 = g->edx;
    if ((int32_t)t160 < 9)
    {
        eax = t160;
        ecx = t161;
        edx = t162;
        ebp = t156;
        esi = t157 - 0x3du;
    }
    else
    {
        eax = t160;
        ecx = t161;
        edx = t162;
        ebp = t156;
        esi = t157 - 0x3du;
    COW_AT(100d3598)
        if ((int32_t)eax < 29)
        {
    COW_AT(100d359d)
            wr32(sp0 - 0x5cu, COW_IMG(0x1035fa94u));
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t163 = cow_stdcall(g, COW_IMG(0x10017d30u), 0);
            t164 = g->ecx;
            t165 = g->edx;
            eax = t163;
            ecx = t164;
            edx = t165;
        }
    }
    COW_AT(100d35aa)
    wr32(sp0 - 0x5cu, esi);
    wr32(sp0 - 0x60u, 3u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t166 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 3u, esi);
    t167 = g->edx;
    wr32(sp0 - 0x5cu, t166);
    wr32(sp0 - 0x60u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = t167;
    t168 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, t166);
    t169 = g->edx;
    wr32(sp0 - 0x48u, rd32(t168));
    g->eax = rd32(t168);
    g->edx = t169;
    t170 = rd32(t168);
    t171 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t172 = g->ecx;
    t173 = g->edx;
    if ((uint8_t)t171 != 0u)
    {
        eax = t171;
        goto L_100d36f9;
    }
    eax = t171;
    ecx = t172;
    edx = t173;
    COW_AT(100d35dd)
    if (ebp == 0u) goto L_100d4074;
    COW_AT(100d35e5)
    wr32(sp0 - 0x5cu, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t174 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t175 = g->ecx;
    t176 = g->edx;
    if (t174 == 0u)
    {
        eax = t174;
        ecx = t175;
        edx = t176;
        goto L_100d4080;
    }
    eax = t174;
    edx = t176;
    esi = t174;
    COW_AT(100d35f9)
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t177 = rd32(ebp + 0x9ecu);
    wr32(esi + 0x14u, 0u);
    wr32(esi, t177);
    t178 = rd32(self + 0x9ecu);
    wr32(esi, t178);
    g->eax = t177;
    g->edx = rd32(self);
    t179 = rd32(self);
    t180 = cow_thiscall(g, rd32(t179 + 0x348u), self, 0);
    t181 = g->edx;
    wr32(sp0 - 0x5cu, ebp);
    wr32(esi + 0x14u, t180);
    g->edx = t181;
    t182 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, ebp);
    t183 = g->edx;
    wr32(esi + 0x10u, self);
    wr32(sp0 - 0x5cu, 0u);
    eax = t182;
    edx = t183;
    goto L_100d4064;
L_100d3639: ;
    COW_AT(100d3639)
    g->eax = rd32(self);
    g->edx = edx;
    t184 = rd32(self);
    g->esp = sp0 - 0x58u;
    t185 = cow_thiscall(g, rd32(t184 + 0x3a4u), self, 0);
    t186 = g->edx;
    if (t185 == 0u)
    {
        edx = t186;
        goto L_100d3660;
    }
    eax = t185;
    COW_AT(100d3647)
    g->eax = eax;
    g->edx = rd32(self);
    t187 = rd32(self);
    g->esp = sp0 - 0x58u;
    t188 = cow_thiscall(g, rd32(t187 + 0x348u), self, 0);
    t189 = g->edx;
    wr32(sp0 - 0x5cu, 0xce07u);
    edx = t189;
    ebx = rd32(self + t188 * 4u + 0x648u);
    loc_5c = 0xce07u;
L_100d36d6: ;
    COW_AT(100d36d6)
    wr32(sp0 - 0x60u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t212 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, loc_5c);
    t213 = g->edx;
    wr32(sp0 - 0x48u, rd32(t212));
    g->eax = rd32(t212);
    g->edx = t213;
    t214 = rd32(t212);
    t215 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t216 = g->ecx;
    t217 = g->edx;
    if ((uint8_t)t215 == 0u)
    {
        eax = t215;
        ecx = t216;
        edx = t217;
        goto L_100d3718;
    }
    eax = t215;
L_100d36f9: ;
    COW_AT(100d36f9)
    t283 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x5cu, t283);
    t284 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x60u, t284);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t285 = cow_fastcall(g, COW_IMG(0x100d0d70u), self, t284, 2, t284, t283);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (t285 & 0xffffff00u) | 1u;
L_100d3660: ;
    COW_AT(100d3660)
    g->eax = rd32(self);
    g->edx = edx;
    t190 = rd32(self);
    g->esp = sp0 - 0x58u;
    t191 = cow_thiscall(g, rd32(t190 + 0x394u), self, 0);
    t192 = g->edx;
    if (t191 == 0u)
    {
        edx = t192;
        goto L_100d3687;
    }
    eax = t191;
    COW_AT(100d366e)
    g->eax = eax;
    g->edx = rd32(self);
    t193 = rd32(self);
    g->esp = sp0 - 0x58u;
    t194 = cow_thiscall(g, rd32(t193 + 0x348u), self, 0);
    t195 = g->edx;
    wr32(sp0 - 0x5cu, 0xce07u);
    edx = t195;
    ebx = rd32(self + t194 * 4u + 0x648u);
    loc_5c = 0xce07u;
    goto L_100d36d6;
L_100d3687: ;
    COW_AT(100d3687)
    g->eax = rd32(self);
    g->edx = edx;
    t196 = rd32(self);
    g->esp = sp0 - 0x58u;
    t197 = cow_thiscall(g, rd32(t196 + 0x384u), self, 0);
    t198 = g->edx;
    if (t197 == 0u)
    {
        edx = t198;
        goto L_100d36b0;
    }
    eax = t197;
    COW_AT(100d3695)
    g->eax = eax;
    g->edx = rd32(self);
    t199 = rd32(self);
    g->esp = sp0 - 0x58u;
    t200 = cow_thiscall(g, rd32(t199 + 0x348u), self, 0);
    t201 = g->edx;
    g->eax = t200 - 0x35u;
    g->edx = t201;
    t202 = rd32(self + t200 * 4u + 0x69cu);
    t203 = cow_stdcall(g, COW_IMG(0x100d43e0u), 0);
    t204 = g->edx;
    eax = t203;
    edx = t204;
    ebx = t202;
L_100d36d5: ;
    COW_AT(100d36d5)
    wr32(sp0 - 0x5cu, eax);
    loc_5c = eax;
    goto L_100d36d6;
L_100d36b0: ;
    COW_AT(100d36b0)
    g->eax = rd32(self);
    g->edx = edx;
    t205 = rd32(self);
    g->esp = sp0 - 0x58u;
    t206 = cow_thiscall(g, rd32(t205 + 0x378u), self, 0);
    t207 = g->edx;
    if (t206 == 0u)
    {
        eax = t206;
        edx = t207;
        goto L_100d3774;
    }
    eax = t206;
    COW_AT(100d36c2)
    g->eax = eax;
    g->edx = rd32(self);
    t208 = rd32(self);
    t209 = rd32(self + 0x76cu);
    g->esp = sp0 - 0x58u;
    t210 = cow_thiscall(g, rd32(t208 + 0x348u), self, 0);
    t211 = g->edx;
    eax = t210 + 0xcbceu;
    edx = t211;
    ebx = t209;
    goto L_100d36d5;
L_100d3718: ;
    COW_AT(100d3718)
    if (ebx == 0u) goto L_100d4074;
    COW_AT(100d3720)
    wr32(sp0 - 0x5cu, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t218 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t219 = g->ecx;
    t220 = g->edx;
    if (t218 == 0u)
    {
        eax = t218;
        ecx = t219;
        edx = t220;
        goto L_100d4080;
    }
    eax = t218;
    edx = t220;
    esi = t218;
    COW_AT(100d3734)
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t221 = rd32(ebx + 0x9ecu);
    wr32(esi, t221);
    wr32(esi + 0x14u, 0u);
    t222 = rd32(self + 0x9ecu);
    wr32(esi, t222);
    g->eax = t221;
    g->edx = rd32(self);
    t223 = rd32(self);
    t224 = cow_thiscall(g, rd32(t223 + 0x348u), self, 0);
    t225 = g->edx;
    wr32(sp0 - 0x5cu, ebx);
    wr32(esi + 0x14u, t224);
    g->edx = t225;
    t226 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, ebx);
    t227 = g->edx;
    wr32(esi + 0x10u, self);
    wr32(sp0 - 0x5cu, 0u);
    eax = t226;
    edx = t227;
    goto L_100d4064;
L_100d3774: ;
    COW_AT(100d3774)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t228 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t229 = g->edx;
    if (t228 > 8u)
    {
        eax = t228;
        goto L_100d4074;
    }
    eax = t228;
    edx = t229;
    COW_AT(100d3782)
    t230 = rd32(COW_IMG(0x100d40dcu) + eax * 4u);
    switch (t230 - RD)
    {
    case 0x100d3789u: goto L_100d3789;
    case 0x100d385cu: goto L_100d385c;
    case 0x100d38d6u: goto L_100d38d6;
    case 0x100d3ee9u: goto L_100d3ee9;
    case 0x100d3fc7u: goto L_100d3fc7;
    case 0x100d4074u: goto L_100d4074;
    default: rt_fatal(g, COW_IMG(0x100d3782u), "switch");
    }
    return 0;
L_100d3789: ;
    COW_AT(100d3789)
    wr32(sp0 - 0x5cu, 9u);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t336 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, 9u);
    t337 = g->ecx;
    t338 = g->edx;
    t339 = (t336 & 0xffff00ffu) | (uint32_t)(uint8_t)(t336 >> 8u | 0x90u) << 8u;
    if ((t339 & 0xfffu) != 0u)
    {
        eax = t339 & 0xfffu;
        ecx = t337;
        edx = t338;
        ebx = t339;
    COW_AT(100d37aa)
        wr32(sp0 - 0x5cu, eax);
        wr32(sp0 - 0x60u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t340 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 0u, eax);
        t341 = g->edx;
        wr32(sp0 - 0x34u, t340);
        wr32(sp0 - 0x5cu, t340);
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        g->eax = sp0 - 0x30u;
        g->edx = t341;
        t342 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 0x30u, t340);
        t343 = g->edx;
        wr32(sp0 - 0x48u, rd32(t342));
        eax = rd32(t342);
        edx = t343;
        loc_48 = rd32(t342);
    }
    else
    {
        eax = t339 & 0xfffu;
        edx = t338;
        ebx = t339;
    COW_AT(100d37a0)
        wr32(sp0 - 0x48u, 0u);
        loc_48 = 0u;
    }
    COW_AT(100d37d0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t344 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t345 = g->ecx;
    t346 = g->edx;
    if ((uint8_t)t344 == 0u)
    {
        eax = t344;
        ecx = t345;
        edx = t346;
        goto L_100d37f5;
    }
    eax = t344;
    COW_AT(100d37dd)
    wr32(sp0 - 0x5cu, 1u);
    t347 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x60u, t347);
    wr32(sp0 - 0x64u, ebx);
    t348 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x68u, t348);
    g->edx = t348;
    g->esp = sp0 - 0x58u;
    t349 = cow_call_regs(g, COW_IMG(0x100d0b50u), eax, self, g->edx, 0, 4, t348, ebx, t347, 1u);
    t350 = g->edx;
    eax = t349;
    edx = t350;
L_100d384d: ;
    COW_AT(100d384d)
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t361 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t362 = g->edx;
    if (t361 == 0u)
    {
        eax = t361;
        goto L_100d4074;
    }
    eax = t361;
    edx = t362;
L_100d385c: ;
    COW_AT(100d385c)
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t363 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t364 = g->ecx;
    t365 = g->edx;
    wr32(sp0 - 0x44u, t363);
    if ((int32_t)t363 < 9)
    {
        eax = t363;
        ecx = t364;
        edx = t365;
        loc_44 = t363;
        goto L_100d3871;
    }
    eax = t363;
    ecx = t364;
    edx = t365;
    loc_44 = t363;
    COW_AT(100d386c)
    if ((int32_t)eax < 29) goto L_100d3876;
L_100d3871: ;
    COW_AT(100d3871)
    if ((int32_t)eax < 37) goto L_100d388c;
L_100d3876: ;
    COW_AT(100d3876)
    wr32(sp0 - 0x5cu, COW_IMG(0x1035fb3cu));
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    t366 = g->edx;
    wr32(sp0 - 0x44u, 1u);
    eax = 1u;
    edx = t366;
    loc_44 = 1u;
L_100d388c: ;
    COW_AT(100d388c)
    t367 = rd16(COW_IMG(0x1035f410u) + eax * 2u);
    wr32(sp0 - 0x5cu, t367);
    wr32(sp0 - 0x60u, sp0 - 0x24u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t368 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 0x24u, t367);
    t369 = g->edx;
    wr32(sp0 - 0x48u, rd32(t368));
    g->eax = rd32(t368);
    g->edx = t369;
    t370 = rd32(t368);
    t371 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t372 = g->ecx;
    t373 = g->edx;
    if ((uint8_t)t371 == 0u)
    {
        eax = t371;
        ecx = t372;
        edx = t373;
        goto L_100d3bb4;
    }
    COW_AT(100d38be)
    t374 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x5cu, t374);
    t375 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x60u, t375);
    g->eax = t375;
    g->edx = t374;
    g->esp = sp0 - 0x58u;
    t376 = cow_thiscall(g, COW_IMG(0x100d0d40u), self, 2, t375, t374);
    t377 = g->edx;
    eax = t376;
    edx = t377;
L_100d3bfb: ;
    COW_AT(100d3bfb)
    wr32(sp0 - 0x40u, 0u);
    loc_40 = 0u;
L_100d3c03: ;
    COW_AT(100d3c03)
    if ((int32_t)rd32(sp0 - 0x44u) < 29) goto L_100d3c15;
    COW_AT(100d3c0a)
    if ((int32_t)loc_40 > 5) goto L_100d3eaa;
L_100d3c15: ;
    COW_AT(100d3c15)
    wr32(sp0 - 0x5cu, loc_40);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t388 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, loc_40);
    wr32(sp0 - 0x3cu, t388);
    if ((uint32_t)((int32_t)t388 >> 0xcu) == loc_40)
    {
        ebx = t388;
        ebp = (uint32_t)((int32_t)t388 >> 0xcu);
        loc_3c = t388;
    }
    else
    {
        ebx = t388;
        esi = loc_40;
    COW_AT(100d3c30)
        t389 = (ebx & 0xfffu) | esi << 0xcu;
        wr32(sp0 - 0x3cu, t389);
        ebx = t389;
        ebp = esi;
        loc_3c = t389;
    }
    COW_AT(100d3c41)
    t390 = rd32(COW_IMG(0x1035f378u) + rd32(sp0 - 0x44u) * 4u);
    wr32(sp0 - 0x34u, t390);
    if (rd32(ebp * 0x30u + t390) == 0u)
    {
        edx = rd32(sp0 - 0x44u);
    }
    else
    {
        esi = ebp * 0x30u + t390;
        loc_34 = t390;
    COW_AT(100d3c65)
        if ((int32_t)(ebx & 0xfffu) < (int32_t)(rd32(esi + 0xcu) + rd32(esi + 0x14u) + rd32(esi + 0x1cu) + rd32(esi + 0x2cu) + rd32(esi + 4u) + rd32(esi + 0x24u)))
        {
            edx = rd32(esi + 0xcu) + rd32(esi + 0x14u) + rd32(esi + 0x1cu) + rd32(esi + 0x2cu) + rd32(esi + 4u) + rd32(esi + 0x24u);
        }
        else
        {
            eax = ebx & 0xfffu;
    COW_AT(100d3c8c)
            t391 = rd32(sp0 - 0x44u);
            wr32(sp0 - 0x5cu, t391);
            t392 = rd32(sp0 - 0x40u);
            wr32(sp0 - 0x60u, t392);
            wr32(sp0 - 0x64u, ebx);
            wr32(sp0 - 0x68u, COW_IMG(0x1035fb0cu));
            g->edx = t392;
            g->esp = sp0 - 0x68u;
            cow_stdcall(g, COW_IMG(0x10017d30u), 0);
            t393 = g->edx;
            wr32(sp0 - 0x3cu, ebp << 0xcu);
            edx = t393;
            ebx = ebp << 0xcu;
            loc_3c = ebp << 0xcu;
            loc_34 = rd32(sp0 - 0x34u);
        }
    COW_AT(100d3caf)
        wr16(sp0 - 0x14u, 0u);
        wr16(sp0 - 0x12u, 0x3fu);
        wr16(sp0 - 0x10u, 0x75u);
        wr16(sp0 - 0xeu, 0x8fu);
        wr16(sp0 - 0xcu, 0x1d7u);
        wr16(sp0 - 0xau, 0x1ffu);
        wr16(sp0 - 8u, 0x280u);
        wr16(sp0 - 6u, 0x2bfu);
        wr16(sp0 - 4u, 0x49cu);
        wr16(sp0 - 2u, 0x4abu);
        if (ebp == 7u)
        {
    COW_AT(100d3cfa)
            wr8(self + 0x8b5u, 1u);
            eax = 0u;
            ecx = ebx & 0xfffu;
L_100d3d0b: ;
    COW_AT(100d3d0b)
            if ((int32_t)ecx < (int32_t)rd16(eax * 2u + sp0 - 0x14u))
            {
                edx = rd16(eax * 2u + sp0 - 0x14u);
                goto L_100d3d21;
            }
    COW_AT(100d3d16)
            if ((int32_t)ecx <= (int32_t)rd16(eax * 2u + sp0 - 0x12u))
            {
                edx = rd16(eax * 2u + sp0 - 0x12u);
                goto L_100d3d2b;
            }
            edx = rd16(eax * 2u + sp0 - 0x12u);
L_100d3d21: ;
    COW_AT(100d3d21)
            if (eax + 2u < 0xau)
            {
                eax = eax + 2u;
                goto L_100d3d0b;
            }
    COW_AT(100d3d29)
        }
L_100d3d32: ;
    COW_AT(100d3d32)
        if (loc_34 != 0u)
        {
    COW_AT(100d3d3e)
            if ((int32_t)(ebx & 0xfffu) >= (int32_t)rd32(esi + 4u))
            {
                eax = ebx & 0xfffu;
                ecx = rd32(esi + 4u);
                goto L_100d3d53;
            }
            eax = ebx & 0xfffu;
    COW_AT(100d3d4c)
            esi = rd32(esi);
L_100d3e0a: ;
    COW_AT(100d3e0a)
            wr32(sp0 - 0x5cu, eax + esi);
            wr32(sp0 - 0x60u, sp0 - 0x20u);
            g->eax = sp0 - 0x20u;
            g->edx = edx;
            g->esp = sp0 - 0x58u;
            t396 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 0x20u, eax + esi);
            t397 = g->edx;
            wr32(sp0 - 0x48u, rd32(t396));
            g->eax = rd32(t396);
            g->edx = t397;
            t398 = rd32(t396);
            t399 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
            t400 = g->ecx;
            t401 = g->edx;
            if ((uint8_t)t399 == 0u)
            {
                ecx = t400;
                edx = t401;
                esi = eax + esi;
                eax = t399;
    COW_AT(100d3e48)
                wr32(sp0 - 0x5cu, 0x20u);
                g->eax = eax;
                g->esp = sp0 - 0x50u;
                t405 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
                t406 = g->edx;
                if (t405 == 0u)
                {
                    edx = t406;
                }
                else
                {
                    eax = t405;
                    edx = t406;
                    ebp = t405;
    COW_AT(100d3e58)
                    g->edx = edx;
                    g->esp = sp0 - 0x58u;
                    cow_thiscall(g, COW_IMG(0x100814a0u), ebp + 4u, 0);
                    t407 = g->edx;
                    wr32(sp0 - 0x5cu, self);
                    t408 = rd32(self + 0x9ecu);
                    wr32(ebp, t408);
                    wr32(ebp + 0x14u, 0u);
                    g->eax = t408;
                    g->edx = t407;
                    t409 = cow_thiscall(g, COW_IMG(0x100814f0u), ebp + 4u, 1, self);
                    t410 = g->edx;
                    wr32(sp0 - 0x5cu, 0u);
                    wr32(sp0 - 0x60u, self);
                    wr32(sp0 - 0x64u, ebp);
                    wr32(sp0 - 0x68u, COW_IMG(0x100d0e80u));
                    wr32(ebp + 0x10u, 0u);
                    wr32(ebp + 0x18u, ebx);
                    wr32(ebp + 0x1cu, esi);
                    g->edx = t410;
                    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0x48u, 4, COW_IMG(0x100d0e80u), ebp, self, 0u);
                    t411 = g->edx;
                    edx = t411;
                }
            }
            else
            {
                eax = t399;
    COW_AT(100d3e30)
                wr32(sp0 - 0x5cu, 1u);
                t402 = rd32(self + 0x9ecu);
                wr32(sp0 - 0x60u, t402);
                wr32(sp0 - 0x64u, ebx);
                t403 = rd32(sp0 - 0x48u);
                wr32(sp0 - 0x68u, t403);
                g->edx = t403;
                g->esp = sp0 - 0x58u;
                cow_call_regs(g, COW_IMG(0x100d0b50u), eax, self, g->edx, 0, 4, t403, ebx, t402, 1u);
                t404 = g->edx;
                edx = t404;
            }
        }
    }
L_100d3e98: ;
    COW_AT(100d3e98)
    t412 = rd32(sp0 - 0x40u) + 1u;
    t413 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x40u, t412);
    if ((int32_t)(t413 + 1u) < 9)
    {
        eax = t412;
        loc_40 = t412;
        goto L_100d3c03;
    }
    eax = t412;
L_100d3eaa: ;
    COW_AT(100d3eaa)
    if ((int32_t)rd32(sp0 - 0x44u) >= 9) goto L_100d4074;
    COW_AT(100d3eb5)
    if ((int32_t)rd32(sp0 + 4u) >= 0)
    {
        eax = rd32(sp0 + 4u);
        goto L_100d3ed0;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(100d3ebd)
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t414 = cow_thiscall(g, COW_IMG(0x100d1190u), self, 0);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (t414 & 0xffffff00u) | 1u;
L_100d37f5: ;
    COW_AT(100d37f5)
    wr32(sp0 - 0x5cu, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t351 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t352 = g->ecx;
    t353 = g->edx;
    if (t351 == 0u)
    {
        eax = t351;
        ecx = t352;
        edx = t353;
        goto L_100d4080;
    }
    eax = t351;
    edx = t353;
    esi = t351;
    COW_AT(100d3809)
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t354 = g->edx;
    wr32(sp0 - 0x5cu, self);
    t355 = rd32(self + 0x9ecu);
    wr32(esi, t355);
    wr32(esi + 0x14u, 0u);
    g->eax = t355;
    g->edx = t354;
    t356 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, self);
    t357 = g->edx;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, self);
    t358 = rd32(sp0 - 0x34u);
    wr32(esi + 0x1cu, t358);
    wr32(sp0 - 0x64u, esi);
    wr32(sp0 - 0x68u, COW_IMG(0x100d0e80u));
    wr32(esi + 0x10u, 0u);
    wr32(esi + 0x18u, ebx);
    g->edx = t357;
    t359 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0x48u, 4, COW_IMG(0x100d0e80u), esi, self, 0u);
    t360 = g->edx;
    eax = t359;
    edx = t360;
    goto L_100d384d;
L_100d38d6: ;
    COW_AT(100d38d6)
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t286 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t287 = g->ecx;
    t288 = g->edx;
    wr32(sp0 - 0x44u, t286);
    if ((int32_t)t286 < 9)
    {
        eax = t286;
        ecx = t287;
        edx = t288;
        loc_44 = t286;
        goto L_100d38eb;
    }
    eax = t286;
    ecx = t287;
    edx = t288;
    loc_44 = t286;
    COW_AT(100d38e6)
    if ((int32_t)eax < 29) goto L_100d38f0;
L_100d38eb: ;
    COW_AT(100d38eb)
    if ((int32_t)eax < 37) goto L_100d3906;
L_100d38f0: ;
    COW_AT(100d38f0)
    wr32(sp0 - 0x5cu, COW_IMG(0x1035fb3cu));
    g->esp = sp0 - 0x5cu;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    wr32(sp0 - 0x44u, 0x20u);
    eax = 0x20u;
    loc_44 = 0x20u;
L_100d3906: ;
    COW_AT(100d3906)
    t289 = rd16(COW_IMG(0x1035f410u) + eax * 2u);
    wr32(sp0 - 0x5cu, t289);
    wr32(sp0 - 0x60u, sp0 - 0x2cu);
    g->eax = eax;
    g->edx = sp0 - 0x2cu;
    g->esp = sp0 - 0x58u;
    t290 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 0x2cu, t289);
    t291 = g->edx;
    wr32(sp0 - 0x48u, rd32(t290));
    g->eax = rd32(t290);
    g->edx = t291;
    t292 = rd32(t290);
    t293 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t294 = g->ecx;
    t295 = g->edx;
    if ((uint8_t)t293 == 0u)
    {
        eax = t293;
        ecx = t294;
        edx = t295;
        goto L_100d3949;
    }
    edx = t295;
    COW_AT(100d3934)
    t296 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x5cu, t296);
    t297 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x60u, t297);
    g->eax = t296;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t298 = cow_thiscall(g, COW_IMG(0x100d0d40u), self, 2, t297, t296);
    t299 = g->edx;
    eax = t298;
    edx = t299;
L_100d3990: ;
    COW_AT(100d3990)
    wr32(sp0 - 0x40u, 0u);
    loc_40 = 0u;
L_100d3998: ;
    COW_AT(100d3998)
    wr32(sp0 - 0x5cu, loc_40);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t309 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, loc_40);
    t310 = g->edx;
    wr32(sp0 + 4u, t309);
    if ((uint32_t)((int32_t)t309 >> 0xcu) == loc_40)
    {
        edx = t310;
        ebx = t309;
        ebp = (uint32_t)((int32_t)t309 >> 0xcu);
    }
    else
    {
        edx = t310;
        ebx = t309;
        esi = loc_40;
    COW_AT(100d39b3)
        t311 = (ebx & 0xfffu) | esi << 0xcu;
        wr32(sp0 + 4u, t311);
        ebx = t311;
        ebp = esi;
    }
    COW_AT(100d39c4)
    t312 = rd32(COW_IMG(0x1035f378u) + rd32(sp0 - 0x44u) * 4u);
    wr32(sp0 - 0x34u, t312);
    if (rd32(ebp * 0x30u + t312) != 0u)
    {
        esi = ebp * 0x30u + t312;
        loc_34 = t312;
    COW_AT(100d39e8)
        if ((int32_t)(ebx & 0xfffu) < (int32_t)(rd32(esi + 0x14u) + rd32(esi + 0x1cu) + rd32(esi + 0x24u) + rd32(esi + 0x2cu) + rd32(esi + 0xcu) + rd32(esi + 4u)))
        {
            edx = rd32(esi + 0x14u) + rd32(esi + 0x1cu) + rd32(esi + 0x24u) + rd32(esi + 0x2cu) + rd32(esi + 0xcu) + rd32(esi + 4u);
        }
        else
        {
            eax = ebx & 0xfffu;
    COW_AT(100d3a0f)
            t313 = rd32(sp0 - 0x44u);
            wr32(sp0 - 0x5cu, t313);
            t314 = rd32(sp0 - 0x40u);
            wr32(sp0 - 0x60u, t314);
            wr32(sp0 - 0x64u, ebx);
            wr32(sp0 - 0x68u, COW_IMG(0x1035fb0cu));
            g->edx = t314;
            g->esp = sp0 - 0x68u;
            cow_stdcall(g, COW_IMG(0x10017d30u), 0);
            t315 = g->edx;
            wr32(sp0 + 4u, ebp << 0xcu);
            edx = t315;
            ebx = ebp << 0xcu;
            loc_34 = rd32(sp0 - 0x34u);
        }
    COW_AT(100d3a30)
        if (loc_34 != 0u)
        {
    COW_AT(100d3a3c)
            if ((int32_t)(ebx & 0xfffu) >= (int32_t)rd32(esi + 4u))
            {
                eax = ebx & 0xfffu;
                ecx = rd32(esi + 4u);
                goto L_100d3a51;
            }
            eax = ebx & 0xfffu;
    COW_AT(100d3a4a)
            esi = rd32(esi);
L_100d3b08: ;
    COW_AT(100d3b08)
            wr32(sp0 - 0x5cu, eax + esi);
            wr32(sp0 - 0x60u, sp0 - 0x28u);
            g->eax = sp0 - 0x28u;
            g->edx = edx;
            g->esp = sp0 - 0x58u;
            t318 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 0x28u, eax + esi);
            t319 = g->edx;
            wr32(sp0 - 0x48u, rd32(t318));
            g->eax = rd32(t318);
            g->edx = t319;
            t320 = rd32(t318);
            t321 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
            t322 = g->ecx;
            t323 = g->edx;
            if ((uint8_t)t321 == 0u)
            {
                ecx = t322;
                edx = t323;
                esi = eax + esi;
                eax = t321;
    COW_AT(100d3b46)
                wr32(sp0 - 0x5cu, 0x20u);
                g->eax = eax;
                g->esp = sp0 - 0x50u;
                t327 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
                t328 = g->edx;
                if (t327 == 0u)
                {
                    edx = t328;
                }
                else
                {
                    eax = t327;
                    edx = t328;
                    ebp = t327;
    COW_AT(100d3b56)
                    g->edx = edx;
                    g->esp = sp0 - 0x58u;
                    cow_thiscall(g, COW_IMG(0x100814a0u), ebp + 4u, 0);
                    t329 = g->edx;
                    wr32(sp0 - 0x5cu, self);
                    t330 = rd32(self + 0x9ecu);
                    wr32(ebp, t330);
                    wr32(ebp + 0x14u, 0u);
                    g->eax = t330;
                    g->edx = t329;
                    t331 = cow_thiscall(g, COW_IMG(0x100814f0u), ebp + 4u, 1, self);
                    t332 = g->edx;
                    wr32(sp0 - 0x5cu, 0u);
                    wr32(sp0 - 0x60u, self);
                    wr32(sp0 - 0x64u, ebp);
                    wr32(sp0 - 0x68u, COW_IMG(0x100d0e80u));
                    wr32(ebp + 0x10u, 0u);
                    wr32(ebp + 0x18u, ebx);
                    wr32(ebp + 0x1cu, esi);
                    g->edx = t332;
                    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0x48u, 4, COW_IMG(0x100d0e80u), ebp, self, 0u);
                    t333 = g->edx;
                    edx = t333;
                }
            }
            else
            {
                eax = t321;
    COW_AT(100d3b2e)
                wr32(sp0 - 0x5cu, 1u);
                t324 = rd32(self + 0x9ecu);
                wr32(sp0 - 0x60u, t324);
                wr32(sp0 - 0x64u, ebx);
                t325 = rd32(sp0 - 0x48u);
                wr32(sp0 - 0x68u, t325);
                g->edx = t325;
                g->esp = sp0 - 0x58u;
                cow_call_regs(g, COW_IMG(0x100d0b50u), eax, self, g->edx, 0, 4, t325, ebx, t324, 1u);
                t326 = g->edx;
                edx = t326;
            }
        }
    }
L_100d3b96: ;
    COW_AT(100d3b96)
    t334 = rd32(sp0 - 0x40u) + 1u;
    t335 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x40u, t334);
    if ((int32_t)(t335 + 1u) < 9)
    {
        eax = t334;
        loc_40 = t334;
        goto L_100d3998;
    }
    eax = t334;
    COW_AT(100d3ba8)
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (eax & 0xffffff00u) | 1u;
L_100d3949: ;
    COW_AT(100d3949)
    wr32(sp0 - 0x5cu, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t300 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t301 = g->ecx;
    t302 = g->edx;
    if (t300 == 0u)
    {
        eax = t300;
        ecx = t301;
        edx = t302;
        goto L_100d4080;
    }
    eax = t300;
    edx = t302;
    esi = t300;
    COW_AT(100d395d)
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t303 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    wr32(sp0 - 0x5cu, self);
    t304 = rd32(self + 0x9ecu);
    wr32(esi, t304);
    wr32(esi + 0x14u, 0u);
    g->edx = t304;
    t305 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, self);
    t306 = g->edx;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, self);
    wr32(sp0 - 0x64u, esi);
    wr32(sp0 - 0x68u, COW_IMG(0x100d4100u));
    wr32(esi + 0x10u, 0u);
    g->edx = t306;
    t307 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0x48u, 4, COW_IMG(0x100d4100u), esi, self, 0u);
    t308 = g->edx;
    eax = t307;
    edx = t308;
    goto L_100d3990;
L_100d3a51: ;
    COW_AT(100d3a51)
    if ((int32_t)eax >= (int32_t)(ecx + rd32(esi + 0xcu)))
    {
        edx = rd32(esi + 0xcu);
        goto L_100d3a65;
    }
    edx = rd32(esi + 0xcu);
    COW_AT(100d3a5b)
    esi = rd32(esi + 8u) - ecx;
    goto L_100d3b08;
L_100d3a65: ;
    COW_AT(100d3a65)
    t316 = rd32(esi + 0x14u);
    wr32(sp0 - 0x38u, t316);
    if ((int32_t)eax >= (int32_t)(ecx + edx + rd32(esi + 0x14u)))
    {
        ebx = t316;
        loc_38 = t316;
        goto L_100d3a81;
    }
    COW_AT(100d3a75)
    esi = rd32(esi + 0x10u) - ecx - edx;
L_100d3b04: ;
    COW_AT(100d3b04)
    ebx = rd32(sp0 + 4u);
    goto L_100d3b08;
L_100d3a81: ;
    COW_AT(100d3a81)
    t317 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x3cu, t317);
    if ((int32_t)eax >= (int32_t)(ebx + ecx + edx + t317))
    {
        loc_3c = t317;
        goto L_100d3aa6;
    }
    COW_AT(100d3a97)
    esi = rd32(esi + 0x18u) - ecx - edx - loc_38;
    edx = loc_38;
    goto L_100d3b04;
L_100d3aa6: ;
    COW_AT(100d3aa6)
    if ((int32_t)eax >= (int32_t)(ecx + edx + loc_38 + loc_3c + rd32(esi + 0x24u)))
    {
        ebx = loc_38;
        goto L_100d3ad3;
    }
    ebx = loc_38;
    COW_AT(100d3ac2)
    esi = rd32(esi + 0x20u) - ecx - edx - ebx - loc_3c;
    edx = loc_3c;
    goto L_100d3b04;
L_100d3ad3: ;
    COW_AT(100d3ad3)
    if ((int32_t)eax >= (int32_t)(ebx + ecx + edx + rd32(esi + 0x2cu) + loc_3c + rd32(esi + 0x24u))) goto L_100d3b96;
    ebx = rd32(esi + 0x24u);
    COW_AT(100d3aef)
    esi = rd32(esi + 0x28u) - ecx - edx - loc_38 - loc_3c - ebx;
    goto L_100d3b04;
L_100d3bb4: ;
    COW_AT(100d3bb4)
    wr32(sp0 - 0x5cu, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t378 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t379 = g->ecx;
    t380 = g->edx;
    if (t378 == 0u)
    {
        eax = t378;
        ecx = t379;
        edx = t380;
        goto L_100d4080;
    }
    eax = t378;
    edx = t380;
    esi = t378;
    COW_AT(100d3bc8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t381 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t382 = g->edx;
    t383 = rd32(self + 0x9ecu);
    wr32(esi, t383);
    wr32(sp0 - 0x5cu, self);
    wr32(esi + 0x14u, 0u);
    g->edx = t382;
    t384 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, self);
    t385 = g->edx;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, self);
    wr32(sp0 - 0x64u, esi);
    wr32(sp0 - 0x68u, COW_IMG(0x100d4100u));
    wr32(esi + 0x10u, 0u);
    g->edx = t385;
    t386 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0x48u, 4, COW_IMG(0x100d4100u), esi, self, 0u);
    t387 = g->edx;
    eax = t386;
    edx = t387;
    goto L_100d3bfb;
L_100d3d2b: ;
    COW_AT(100d3d2b)
    wr8(self + 0x8b5u, 0u);
    goto L_100d3d32;
L_100d3d53: ;
    COW_AT(100d3d53)
    if ((int32_t)eax >= (int32_t)(ecx + rd32(esi + 0xcu)))
    {
        edx = rd32(esi + 0xcu);
        goto L_100d3d67;
    }
    edx = rd32(esi + 0xcu);
    COW_AT(100d3d5d)
    esi = rd32(esi + 8u) - ecx;
    goto L_100d3e0a;
L_100d3d67: ;
    COW_AT(100d3d67)
    t394 = rd32(esi + 0x14u);
    wr32(sp0 - 0x38u, t394);
    if ((int32_t)eax >= (int32_t)(ecx + edx + rd32(esi + 0x14u)))
    {
        ebx = t394;
        loc_38 = t394;
        goto L_100d3d83;
    }
    COW_AT(100d3d77)
    esi = rd32(esi + 0x10u) - ecx - edx;
L_100d3e06: ;
    COW_AT(100d3e06)
    ebx = loc_3c;
    goto L_100d3e0a;
L_100d3d83: ;
    COW_AT(100d3d83)
    t395 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x34u, t395);
    if ((int32_t)eax >= (int32_t)(ebx + ecx + edx + t395))
    {
        loc_34 = t395;
        goto L_100d3da8;
    }
    COW_AT(100d3d99)
    esi = rd32(esi + 0x18u) - ecx - edx - loc_38;
    edx = loc_38;
    goto L_100d3e06;
L_100d3da8: ;
    COW_AT(100d3da8)
    if ((int32_t)eax >= (int32_t)(ecx + edx + loc_34 + loc_38 + rd32(esi + 0x24u)))
    {
        ebx = loc_38;
        goto L_100d3dd5;
    }
    ebx = loc_38;
    COW_AT(100d3dc4)
    esi = rd32(esi + 0x20u) - ecx - edx - ebx - loc_34;
    edx = loc_34;
    goto L_100d3e06;
L_100d3dd5: ;
    COW_AT(100d3dd5)
    if ((int32_t)eax >= (int32_t)(ebx + ecx + edx + rd32(esi + 0x2cu) + loc_34 + rd32(esi + 0x24u))) goto L_100d3e98;
    ebx = rd32(esi + 0x24u);
    COW_AT(100d3df1)
    esi = rd32(esi + 0x28u) - ecx - edx - loc_38 - loc_34 - ebx;
    goto L_100d3e06;
L_100d3ed0: ;
    COW_AT(100d3ed0)
    wr32(self + 0x8a0u, eax);
    wr8(self + 0x8a4u, 4u);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (eax & 0xffffff00u) | 1u;
L_100d3ee9: ;
    COW_AT(100d3ee9)
    wr32(sp0 - 0x5cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t231 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, 0u);
    t232 = g->edx;
    if (t231 != 0u)
    {
        eax = t231;
        edx = t232;
        goto L_100d3fc7;
    }
    eax = t231;
    edx = t232;
    COW_AT(100d3efa)
    wr32(sp0 - 0x5cu, 9u);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t233 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, 9u);
    t234 = g->ecx;
    t235 = g->edx;
    if ((t233 & 0xfffu) != 0u)
    {
        eax = t233 & 0xfffu;
        ecx = t234;
        edx = t235;
        ebp = t233 | 0x9000u;
    COW_AT(100d3f1e)
        wr32(sp0 - 0x5cu, eax);
        wr32(sp0 - 0x60u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t236 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 0u, eax);
        t237 = g->edx;
        wr32(sp0 - 0x34u, t236);
        wr32(sp0 - 0x5cu, t236);
        wr32(sp0 - 0x60u, sp0 - 0x1cu);
        g->edx = t237;
        t238 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 0x1cu, t236);
        t239 = g->edx;
        wr32(sp0 - 0x48u, rd32(t238));
        eax = rd32(t238);
        edx = t239;
        loc_48 = rd32(t238);
    }
    else
    {
        eax = t233 & 0xfffu;
        edx = t235;
        ebp = t233 | 0x9000u;
    COW_AT(100d3f14)
        wr32(sp0 - 0x48u, 0u);
        loc_48 = 0u;
    }
    COW_AT(100d3f44)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t240 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t241 = g->ecx;
    t242 = g->edx;
    if ((uint8_t)t240 == 0u)
    {
        eax = t240;
        ecx = t241;
        edx = t242;
        goto L_100d3f73;
    }
    COW_AT(100d3f51)
    wr32(sp0 - 0x5cu, 1u);
    t243 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x60u, t243);
    wr32(sp0 - 0x64u, ebp);
    t244 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x68u, t244);
    g->esp = sp0 - 0x58u;
    t245 = cow_call_regs(g, COW_IMG(0x100d0b50u), t244, self, g->edx, 0, 4, t244, ebp, t243, 1u);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (t245 & 0xffffff00u) | 1u;
L_100d3f73: ;
    COW_AT(100d3f73)
    wr32(sp0 - 0x5cu, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t246 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t247 = g->ecx;
    t248 = g->edx;
    if (t246 == 0u)
    {
        eax = t246;
        ecx = t247;
        edx = t248;
        goto L_100d4080;
    }
    eax = t246;
    edx = t248;
    esi = t246;
    COW_AT(100d3f87)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t249 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t250 = g->edx;
    wr32(sp0 - 0x5cu, self);
    t251 = rd32(self + 0x9ecu);
    wr32(esi, t251);
    wr32(esi + 0x14u, 0u);
    t252 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, self);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, self);
    wr32(sp0 - 0x64u, esi);
    t253 = rd32(sp0 - 0x34u);
    wr32(esi + 0x10u, 0u);
    wr32(esi + 0x18u, ebp);
    wr32(esi + 0x1cu, t253);
    wr32(sp0 - 0x68u, COW_IMG(0x100d0e80u));
    eax = t252;
    edx = t253;
    loc_64 = esi;
    loc_68 = COW_IMG(0x100d0e80u);
    goto L_100d406b;
L_100d3fc7: ;
    COW_AT(100d3fc7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t254 = cow_thiscall(g, COW_IMG(0x10083340u), self, 0);
    t255 = g->edx;
    if (t254 == 0u)
    {
        eax = t254;
        edx = t255;
    COW_AT(100d3fe0)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t259 = cow_thiscall(g, COW_IMG(0x10084670u), self, 0);
        t260 = g->edx;
        if ((uint8_t)t259 == 0u)
        {
            eax = t259;
            edx = t260;
    COW_AT(100d3ff7)
            wr32(sp0 - 0x5cu, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x58u;
            t264 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, 0u);
            t265 = g->ecx;
            t266 = g->edx;
            eax = t264;
            ecx = t265;
            edx = t266;
        }
        else
        {
            eax = t259;
            edx = t260;
    COW_AT(100d3feb)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x58u;
            t261 = cow_thiscall(g, COW_IMG(0x10084690u), self, 0);
            t262 = g->ecx;
            t263 = g->edx;
            eax = (uint16_t)t261;
            ecx = t262;
            edx = t263;
        }
    COW_AT(100d3ffe)
        wr32(sp0 - 0x5cu, eax);
        wr32(sp0 - 0x60u, 0u);
        loc_5c = eax;
        loc_60 = 0u;
    }
    else
    {
        eax = t254;
        edx = t255;
    COW_AT(100d3fd4)
        wr32(sp0 - 0x5cu, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x58u;
        t256 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, 0u);
        t257 = g->ecx;
        t258 = g->edx;
        wr32(sp0 - 0x5cu, t256);
        wr32(sp0 - 0x60u, 2u);
        eax = t256;
        ecx = t257;
        edx = t258;
        loc_5c = t256;
        loc_60 = 2u;
    }
    COW_AT(100d4001)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t267 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, loc_60, loc_5c);
    t268 = g->edx;
    wr32(sp0 - 0x5cu, t267);
    wr32(sp0 - 0x60u, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->edx = t268;
    t269 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 0x18u, t267);
    t270 = g->edx;
    wr32(sp0 - 0x48u, rd32(t269));
    g->eax = rd32(t269);
    g->edx = t270;
    t271 = rd32(t269);
    t272 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x48u, 0);
    t273 = g->ecx;
    t274 = g->edx;
    if ((uint8_t)t272 != 0u)
    {
        eax = t272;
        goto L_100d36f9;
    }
    eax = t272;
    ecx = t273;
    edx = t274;
    COW_AT(100d4031)
    wr32(sp0 - 0x5cu, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t275 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t276 = g->ecx;
    t277 = g->edx;
    if (t275 == 0u)
    {
        eax = t275;
        ecx = t276;
        edx = t277;
        goto L_100d4080;
    }
    eax = t275;
    edx = t277;
    esi = t275;
    COW_AT(100d4041)
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
    t278 = g->edx;
    wr32(sp0 - 0x5cu, self);
    t279 = rd32(self + 0x9ecu);
    wr32(esi, t279);
    wr32(esi + 0x14u, 0u);
    g->eax = t279;
    g->edx = t278;
    t280 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, self);
    t281 = g->edx;
    wr32(esi + 0x10u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    eax = t280;
    edx = t281;
    goto L_100d4064;
L_100d4080: ;
    COW_AT(100d4080)
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t415 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 0u, 0u);
    t416 = g->edx;
    wr32(sp0 - 0x5cu, t415);
    wr32(sp0 - 0x60u, sp0 + 4u);
    g->edx = t416;
    t417 = rd32(COW_IMG(0x1047d128u));
    t418 = cow_thiscall(g, COW_IMG(0x10072fd0u), t417, 2, sp0 + 4u, t415);
    t419 = g->ecx;
    t420 = g->edx;
    wr32(sp0 - 0x48u, rd32(t418));
    if (rd32(t418) == 0u)
    {
        eax = rd32(t418);
        ecx = t419;
        edx = t420;
        goto L_100d40c3;
    }
    eax = rd32(t418);
    ecx = t419;
    edx = t420;
    COW_AT(100d40a7)
    if (rd32(eax) == 0u) goto L_100d40c3;
    COW_AT(100d40ac)
    wr32(sp0 - 0x5cu, eax);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t421 = cow_thiscall(g, rd32(rd32(self) + 0x290u), self, 1, eax);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return t421 & 0xffffff00u;
L_100d40c3: ;
    COW_AT(100d40c3)
    wr32(sp0 - 0x5cu, COW_IMG(0x1035fa30u));
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t422 = cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return t422 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d2f60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d2f72u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x58u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x100d2f82u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x58u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x100d2f89u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x58u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x100d2f8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d2f9fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d2fb7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d2fbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d2fc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d2fd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3005u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3020u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3024u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3038u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3083u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d308bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d308fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d30a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d30b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d30dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3102u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3123u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d312fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d313du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3144u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d314eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3158u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3168u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3174u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d318au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3199u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d31b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d31c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d31e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d31f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d31fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3221u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100d3239u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100d3241u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100d3251u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100d32abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d32bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d32c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d32d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d32e5u:
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
        self = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d32fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3302u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3331u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3350u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3358u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d336cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d33acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d33c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d33cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d33d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d33dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d340eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3416u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d342au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d346au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d347cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d349fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d34a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d34b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d34e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3507u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d350fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3523u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3563u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3575u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3598u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d359du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d35aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d35ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d35e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d35f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3639u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3647u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3660u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d366eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3687u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3695u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d36b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d36c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d36d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d36d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100d36f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3718u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3720u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3734u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d3774u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3782u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3789u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d37a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d37aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d37d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d37ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d37f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3809u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d384du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d385cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d386cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3871u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3876u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d388cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d38beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100d38d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d38e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d38ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d38f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3906u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3934u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d3949u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d395du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d3990u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3998u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d39b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d39c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d39e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3a97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3aa6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3ac2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3ad3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3aefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3b04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3b08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3b2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100d3b46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100d3b56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100d3b96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3ba8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3bb4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100d3bc8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100d3bfbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3c03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3c0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3c15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3c30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3c41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3c65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3c8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3cafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3cfau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d3eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d67u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3d99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3da8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3dc4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3dd5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3df1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3e06u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3e0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3e30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100d3e48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100d3e58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100d3e98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3eaau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3eb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3ebdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3ed0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3ee9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3efau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3f14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3f1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3f44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3f51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3f73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3f87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3fc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d3fd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3fe0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3febu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3ff7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d3ffeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d4001u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100d4031u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100d4041u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100d4064u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x5cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100d406bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        self = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x5cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100d4074u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d4080u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100d40a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d40acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100d40c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d2f60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d2f60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
