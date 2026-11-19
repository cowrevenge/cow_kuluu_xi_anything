/* f_0x10010d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10010d20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10010d4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_10010d4d;
    case 0x10010d54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_10010d54;
    case 0x10010d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010d64;
    case 0x10010d74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010d74;
    case 0x10010d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010d86;
    case 0x10010daau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10010daa;
    case 0x10010dbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_20 = rd32(sp0 - 0x20u); goto E_10010dbc;
    case 0x10010dd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10010dd1;
    case 0x10010e03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10010e03;
    case 0x10010e18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10010e18;
    case 0x10010e35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10010e35;
    case 0x10010e52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010e52;
    case 0x10010e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010e73;
    case 0x10010ea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10010ea0;
    case 0x10010eaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10010eae;
    case 0x10010ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10010ecb;
    case 0x10010ee8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010ee8;
    case 0x10010ef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010ef0;
    case 0x10010efeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10010efe;
    case 0x10010f12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010f12;
    case 0x10010f6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010f6b;
    case 0x10010f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010f70;
    case 0x10010f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010f75;
    case 0x10010f79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010f79;
    case 0x10010f7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10010f7d;
    case 0x10010f9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010f9a;
    case 0x10010f9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10010f9b;
    case 0x10010fcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010fca;
    case 0x10010fd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010fd1;
    case 0x10010fdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010fda;
    case 0x10010fe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010fe1;
    case 0x10010feau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010fea;
    case 0x10010ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10010ff1;
    case 0x10011021u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011021;
    case 0x10011028u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011028;
    case 0x10011048u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011048;
    case 0x1001104fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_1001104f;
    case 0x1001105du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_1001105d;
    case 0x10011071u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011071;
    case 0x10011089u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011089;
    case 0x10011097u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011097;
    case 0x100110b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100110b4;
    case 0x100110d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100110d1;
    case 0x100110d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100110d9;
    case 0x100110eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100110ea;
    case 0x100110feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100110fe;
    case 0x1001110cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_1001110c;
    case 0x1001111au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_1001111a;
    case 0x10011137u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011137;
    case 0x10011154u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011154;
    case 0x1001115cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001115c;
    case 0x10011180u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011180;
    case 0x10011194u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011194;
    case 0x100111ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100111cc;
    case 0x100111dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100111da;
    case 0x100111f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100111f7;
    case 0x100111fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100111fd;
    case 0x10011212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011212;
    case 0x100112b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100112b1;
    case 0x100112b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100112b7;
    case 0x100112d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100112d9;
    case 0x100112e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100112e7;
    case 0x100112edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100112ed;
    case 0x1001131fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001131f;
    case 0x1001135cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001135c;
    case 0x10011371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10011371;
    case 0x1001138eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001138e;
    case 0x100113abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100113ab;
    case 0x100113c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100113c2;
    case 0x100113d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100113d6;
    case 0x100113e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100113e7;
    case 0x100113f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100113f5;
    case 0x10011412u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011412;
    case 0x1001141au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001141a;
    case 0x1001141eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001141e;
    case 0x10011444u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011444;
    case 0x10011452u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011452;
    case 0x10011460u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011460;
    case 0x10011466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011466;
    case 0x10011491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_10011491;
    case 0x1001149eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1001149e;
    case 0x100114a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_100114a9;
    case 0x100115b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100115b3;
    case 0x100115ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100115cc;
    case 0x100115e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100115e3;
    case 0x1001168du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001168d;
    case 0x10011696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011696;
    case 0x1001169cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001169c;
    case 0x100116a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100116a2;
    case 0x1001170eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001170e;
    case 0x10011712u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011712;
    case 0x10011728u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011728;
    case 0x10011746u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011746;
    case 0x1001177eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001177e;
    case 0x10011786u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011786;
    case 0x10011815u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011815;
    case 0x10011820u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011820;
    case 0x10011828u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011828;
    case 0x10011885u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_10011885;
    case 0x100118feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_100118fe;
    default: break;
    }
#endif

    COW_AT(10010d20)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    g->esp = sp0 - 0x30u;
    t1 = cow_fastcall(g, COW_IMG(0x10009730u), rd32(COW_IMG(0x1045666cu)), in_edx, 0);
    t2 = g->edx;
    g->ecx = rd32(COW_IMG(0x1045666cu));
    g->edx = t2;
    t3 = rd32(COW_IMG(0x1045666cu));
    cow_stdcall(g, COW_IMG(0x1000bb10u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint32_t)(int16_t)rd16(self + 4u) == 0u)
    {
        edx = t5;
        goto L_10011491;
    }
    eax = (uint32_t)(int16_t)rd16(self + 4u);
    ecx = t4;
    edx = t5;
    COW_AT(10010d4d)
    if (eax != 1u)
    {
        eax = eax - 1u;
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
        goto L_100118fe;
    }
    eax = eax - 1u;
    COW_AT(10010d54)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t6 = cow_stdcall(g, COW_IMG(0x100191d0u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(self + 0x1cu, t6);
    if (t6 == 0u)
    {
        eax = t6;
        edx = t8;
        goto L_100115cc;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(10010d64)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t9 = cow_stdcall(g, COW_IMG(0x100191d0u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(self + 0x20u, t9);
    if (t9 == 0u)
    {
        eax = t9;
        edx = t11;
        goto L_100115cc;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(10010d74)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t12 = cow_stdcall(g, COW_IMG(0x10152f80u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    g->ebx = 0u;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10153c10u), t13, 0);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        edx = t17;
        goto L_100115cc;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(10010d86)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t18 = cow_stdcall(g, COW_IMG(0x10029a50u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x1006cb50u), t19, 0);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x34u, 0xd64u);
    wr8(COW_IMG(0x1047d13du), 1u);
    g->edx = t23;
    t24 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0xd64u);
    t25 = g->edx;
    if (t24 == 0u)
    {
        eax = t24;
        edx = t25;
        goto L_10010e18;
    }
    eax = t24;
    edx = t25;
    ebp = t24;
    COW_AT(10010daa)
    wr32(ebp, COW_IMG(0x103299f0u));
    wr32(sp0 - 0x20u, 0x40u);
    edi = ebp + 4u;
    loc_20 = 0x40u;
L_10010dbc: ;
    COW_AT(10010dbc)
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10074740u), eax, edi, edx, 1, 0);
    t26 = g->edx;
    t27 = rd32(sp0 - 0x20u) - 1u;
    t28 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x20u, t27);
    if (t28 != 1u)
    {
        eax = t27;
        edx = t26;
        edi = edi + 0x34u;
        loc_20 = t27;
        goto L_10010dbc;
    }
    eax = t27;
    edx = t26;
    COW_AT(10010dd1)
    wr32(ebp, COW_IMG(0x10329cb8u));
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t29 = cow_fastcall(g, COW_IMG(0x10074ba0u), ebp, edx, 0);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(COW_IMG(0x1047d140u), ebp);
    wr8(COW_IMG(0x1047d13du), 0u);
    g->ecx = t30;
    g->edx = t31;
    t32 = cow_stdcall(g, COW_IMG(0x100729c0u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x34u, 0x40010u);
    g->edx = t34;
    t35 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x40010u);
    t36 = g->edx;
    if (t35 == 0u)
    {
        eax = t35;
        edx = t36;
        goto L_10010e35;
    }
    eax = t35;
    edx = t36;
    edi = t35;
    COW_AT(10010e03)
    wr32(edi, COW_IMG(0x10329c9cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t37 = cow_thiscall(g, COW_IMG(0x10072db0u), edi, 0);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(COW_IMG(0x1047d128u), edi);
    eax = t37;
    ecx = t38;
    edx = t39;
    COW_AT(10010e52)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 4u);
    wr32(sp0 - 0x3cu, 0x38u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t40 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x38u, 4u);
    t41 = g->edx;
    g->esp = sp0 - 0x30u;
    t42 = cow_fastcall(g, COW_IMG(0x100748f0u), t40, t41, 0);
    t43 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t40 == 0u)
    {
        eax = t42;
        edx = t43;
        goto L_10010eae;
    }
    eax = t42;
    edx = t43;
    edi = t40;
    COW_AT(10010e73)
    g->esp = sp0 - 0x30u;
    t44 = cow_call_regs(g, COW_IMG(0x10074740u), eax, edi, edx, 1, 0);
    t45 = g->edx;
    wr32(edi + 0x34u, 0u);
    wr32(edi, COW_IMG(0x10329c70u));
    wr32(sp0 - 0x34u, 8u);
    wr32(COW_IMG(0x1047bffcu), edi);
    g->edx = t45;
    t46 = cow_thiscall(g, COW_IMG(0x100749b0u), edi, 1, 8u);
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x34u, 0x14u);
    g->edx = t48;
    t49 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x14u);
    t50 = g->edx;
    if (t49 == 0u)
    {
        eax = t49;
        edx = t50;
        goto L_10010ecb;
    }
    eax = t49;
    edx = t50;
    COW_AT(10010ea0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t51 = cow_thiscall(g, COW_IMG(0x1003aa50u), eax, 0);
    t52 = g->ecx;
    t53 = g->edx;
    wr32(COW_IMG(0x1047b970u), t51);
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(10010ee8)
    if (eax == 0u) goto L_100115cc;
    COW_AT(10010ef0)
    wr32(sp0 - 0x34u, 0xcu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t54 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0xcu);
    t55 = g->edx;
    if (t54 == 0u)
    {
        eax = t54;
        edx = t55;
        goto L_10010f7d;
    }
    eax = t54;
    edx = t55;
    COW_AT(10010efe)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t56 = cow_thiscall(g, COW_IMG(0x1003b080u), eax, 0);
    t57 = g->ecx;
    t58 = g->edx;
    wr32(COW_IMG(0x1047b974u), t56);
    if (t56 == 0u)
    {
        eax = t56;
        edx = t58;
        goto L_100115cc;
    }
    eax = t56;
    ecx = t57;
    edx = t58;
    COW_AT(10010f12)
    wr32(sp0 - 0x34u, 0x5au);
    wr32(COW_IMG(0x1045b774u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t59 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x5au);
    t60 = g->edx;
    wr32(sp0 - 0x34u, t59);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->edx = t60;
    t61 = rd32(COW_IMG(0x1047d128u));
    t62 = cow_thiscall(g, COW_IMG(0x100731b0u), t61, 2, sp0 - 0x18u, t59);
    t63 = g->ecx;
    t64 = g->edx;
    wr32(sp0 - 0x34u, 0x5bu);
    t65 = rd32(t62);
    wr32(COW_IMG(0x104568a0u), t65);
    g->eax = t65;
    t66 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t64, 1, 1, 0x5bu);
    t67 = g->edx;
    wr32(sp0 - 0x34u, t66);
    wr32(sp0 - 0x38u, sp0 - 0x14u);
    g->edx = t67;
    t68 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 0x14u, t66);
    t69 = g->edx;
    wr32(COW_IMG(0x10456794u), rd32(t68));
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (t69 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10010f75;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (t69 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(10010f6b)
    if (ecx == 2u) goto L_10010f79;
    COW_AT(10010f70)
    if (ecx == 3u) goto L_10010f79;
L_10010f75: ;
    COW_AT(10010f75)
    if (ecx == 0u) goto L_10010f9a;
L_10010f79: ;
    COW_AT(10010f79)
    wr32(sp0 - 0x34u, 1u);
    loc_34 = 1u;
L_10010f9b: ;
    COW_AT(10010f9b)
    g->eax = eax;
    g->ecx = COW_IMG(0x10621838u);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t70 = cow_stdcall(g, COW_IMG(0x1015dfc0u), 1, loc_34);
    t71 = g->ecx;
    t72 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    t73 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t72, 1, 1, 0u);
    wr32(sp0 - 0x34u, t73);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    t74 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 0x10u, t73);
    t75 = g->edx;
    t76 = rd32(t74);
    wr32(COW_IMG(0x104568f0u), t76);
    if (t76 == 0u)
    {
        edx = t75;
    }
    else
    {
        eax = t76;
        edx = t75;
    COW_AT(10010fca)
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
        t77 = g->edx;
        edx = t77;
    }
    COW_AT(10010fd1)
    if (rd32(COW_IMG(0x104568a0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104568a0u));
    COW_AT(10010fda)
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
        t78 = g->edx;
        edx = t78;
    }
    COW_AT(10010fe1)
    if (rd32(COW_IMG(0x10456794u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456794u));
    COW_AT(10010fea)
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
        t79 = g->edx;
        edx = t79;
    }
    COW_AT(10010ff1)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t80 = cow_thiscall(g, COW_IMG(0x10160440u), COW_IMG(0x10621838u), 2, sp0 - 0xcu, 0u);
    t81 = g->edx;
    wr32(sp0 - 0x34u, 0x9a7fu);
    wr32(sp0 - 0x38u, sp0 - 8u);
    g->edx = t81;
    t82 = cow_thiscall(g, COW_IMG(0x10072fd0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 8u, 0x9a7fu);
    t83 = g->edx;
    t84 = rd32(t82);
    wr32(COW_IMG(0x10456790u), t84);
    if (t84 == 0u)
    {
        eax = t84;
    }
    else
    {
        eax = t84;
        edx = t83;
    COW_AT(10011021)
        g->esp = sp0 - 0x30u;
        t85 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
        eax = t85;
    }
    COW_AT(10011028)
    wr32(sp0 - 0x34u, 0x9a88u);
    wr32(sp0 - 0x38u, sp0 - 4u);
    g->eax = eax;
    g->edx = sp0 - 4u;
    t86 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x30u;
    t87 = cow_thiscall(g, COW_IMG(0x10072fd0u), t86, 2, sp0 - 4u, 0x9a88u);
    t88 = g->ecx;
    t89 = g->edx;
    t90 = rd32(t87);
    wr32(COW_IMG(0x104568e8u), t90);
    if (t90 == 0u)
    {
        eax = t90;
        ecx = t88;
        edx = t89;
    }
    else
    {
        eax = t90;
        edx = t89;
    COW_AT(10011048)
        g->edx = edx;
        t91 = rd32(eax);
        g->esp = sp0 - 0x30u;
        t92 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, t91, g->edx, 1, 0);
        t93 = g->ecx;
        t94 = g->edx;
        eax = t92;
        ecx = t93;
        edx = t94;
    }
    COW_AT(1001104f)
    wr32(sp0 - 0x34u, 4u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t95 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 4u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t96 = g->edx;
    if (t95 == 0u)
    {
        eax = t95;
        edx = t96;
        goto L_10011097;
    }
    eax = t95;
    edx = t96;
    COW_AT(1001105d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t97 = cow_thiscall(g, COW_IMG(0x1011c870u), eax, 0);
    t98 = g->edx;
    wr32(COW_IMG(0x104e1bf4u), t97);
    if (t97 == 0u)
    {
        eax = t97;
        edx = t98;
        goto L_100115cc;
    }
    eax = t97;
    edx = t98;
    COW_AT(10011071)
    g->eax = eax;
    g->ecx = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t99 = cow_stdcall(g, COW_IMG(0x1011c8b0u), 0);
    t100 = g->ecx;
    t101 = g->edx;
    wr32(sp0 - 0x34u, 0x64058u);
    g->esp = sp0 - 0x28u;
    t102 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t100, t101, 1, 3, 0x64058u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t103 = g->edx;
    if (t102 == 0u)
    {
        eax = t102;
        edx = t103;
        goto L_100110b4;
    }
    eax = t102;
    edx = t103;
    COW_AT(10011089)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t104 = cow_thiscall(g, COW_IMG(0x10127190u), eax, 0);
    t105 = g->ecx;
    t106 = g->edx;
    wr32(COW_IMG(0x10578158u), t104);
    eax = t104;
    ecx = t105;
    edx = t106;
    COW_AT(100110d1)
    if (eax == 0u) goto L_100115cc;
    COW_AT(100110d9)
    wr32(sp0 - 0x34u, 0x64058u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t107 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x64058u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t108 = g->edx;
    if (t107 == 0u)
    {
        eax = t107;
        edx = t108;
        goto L_1001111a;
    }
    eax = t107;
    edx = t108;
    COW_AT(100110ea)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t109 = cow_thiscall(g, COW_IMG(0x10127190u), eax, 0);
    t110 = g->ecx;
    t111 = g->edx;
    wr32(COW_IMG(0x1057815cu), t109);
    if (t109 == 0u)
    {
        eax = t109;
        edx = t111;
        goto L_100115cc;
    }
    eax = t109;
    ecx = t110;
    edx = t111;
    COW_AT(100110fe)
    wr32(sp0 - 0x34u, 0x7cu);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t112 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x7cu, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t113 = g->edx;
    if (t112 == 0u)
    {
        eax = t112;
        edx = t113;
        goto L_10011137;
    }
    eax = t112;
    edx = t113;
    COW_AT(1001110c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t114 = cow_thiscall(g, COW_IMG(0x10127ee0u), eax, 0);
    t115 = g->ecx;
    t116 = g->edx;
    wr32(COW_IMG(0x10578160u), t114);
    eax = t114;
    ecx = t115;
    edx = t116;
    COW_AT(10011154)
    if (eax == 0u) goto L_100115cc;
    COW_AT(1001115c)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 4u);
    wr32(sp0 - 0x3cu, 0x395b4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t117 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x395b4u, 4u);
    t118 = g->edx;
    g->esp = sp0 - 0x30u;
    t119 = cow_fastcall(g, COW_IMG(0x100748f0u), t117, t118, 0);
    t120 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t117 == 0u)
    {
        eax = t119;
        edx = t120;
        goto L_100111da;
    }
    eax = t119;
    edx = t120;
    edi = t117;
    COW_AT(10011180)
    g->esp = sp0 - 0x30u;
    t121 = cow_call_regs(g, COW_IMG(0x10177d00u), eax, edi, edx, 1, 0);
    t122 = g->edx;
    wr32(COW_IMG(0x10631f24u), t121);
    if (t121 == 0u)
    {
        eax = t121;
        edx = t122;
        goto L_100115cc;
    }
    eax = t121;
    edx = t122;
    COW_AT(10011194)
    wr32(sp0 - 0x34u, 5u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t123 = cow_thiscall(g, COW_IMG(0x100749b0u), eax, 1, 5u);
    t124 = g->ecx;
    t125 = g->edx;
    g->ecx = t124;
    g->edx = t125;
    t126 = cow_stdcall(g, COW_IMG(0x101671d0u), 0);
    t127 = g->ecx;
    t128 = g->edx;
    g->ecx = t127;
    g->edx = t128;
    t129 = cow_stdcall(g, COW_IMG(0x101a8d40u), 0);
    t130 = g->ecx;
    t131 = g->edx;
    g->ecx = t130;
    g->edx = t131;
    t132 = cow_stdcall(g, COW_IMG(0x101a8b50u), 0);
    t133 = g->ecx;
    t134 = g->edx;
    g->ecx = t133;
    g->edx = t134;
    t135 = cow_stdcall(g, COW_IMG(0x101b8e70u), 0);
    t136 = g->ecx;
    t137 = g->edx;
    g->ecx = t136;
    g->edx = t137;
    t138 = cow_stdcall(g, COW_IMG(0x101ab080u), 0);
    t139 = g->ecx;
    t140 = g->edx;
    g->ebp = ebp;
    g->ecx = t139;
    g->edx = t140;
    t141 = cow_stdcall(g, COW_IMG(0x101ab0d0u), 0);
    t142 = g->ecx;
    t143 = g->edx;
    wr32(sp0 - 0x34u, 0x84u);
    g->esp = sp0 - 0x28u;
    t144 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t142, t143, 1, 3, 0x84u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t145 = g->ecx;
    t146 = g->edx;
    if (t144 == 0u)
    {
        eax = t144;
        ecx = t145;
        edx = t146;
    COW_AT(100111f7)
        wr32(COW_IMG(0x104e1b90u), 0u);
    }
    else
    {
        eax = t144;
        edx = t146;
    COW_AT(100111cc)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t147 = cow_thiscall(g, COW_IMG(0x1011ba90u), eax, 0);
        t148 = g->ecx;
        t149 = g->edx;
        wr32(COW_IMG(0x104e1b90u), t147);
        eax = t147;
        ecx = t148;
        edx = t149;
    }
    COW_AT(100111fd)
    wr32(sp0 - 0x34u, 0x258u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t150 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x258u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t151 = g->ecx;
    t152 = g->edx;
    if (t150 == 0u)
    {
        eax = t150;
        ecx = t151;
        edx = t152;
    COW_AT(100112b1)
        wr32(COW_IMG(0x104e1d44u), 0u);
    }
    else
    {
        eax = t150;
        ecx = t151;
        edx = t152;
    COW_AT(10011212)
        wr32(eax + 0x208u, 0u);
        wr32(eax + 0x204u, 0u);
        wr16(eax + 0x202u, 0u);
        wr16(eax + 0x200u, 0u);
        wr8(eax + 0x20eu, 0u);
        wr8(eax + 0x20du, 0u);
        wr8(eax + 0x20cu, 0u);
        wr8(eax + 0x210u, 0u);
        wr8(eax + 0x212u, 0u);
        wr32(eax + 0x220u, 0u);
        wr32(eax + 0x224u, 0u);
        wr32(eax + 0x228u, 0u);
        wr32(eax + 0x22cu, 0u);
        wr32(eax + 0x230u, 0u);
        wr32(eax + 0x234u, 0u);
        wr32(eax + 0x238u, 0u);
        wr32(eax + 0x23cu, 0u);
        wr32(eax + 0x240u, 0u);
        wr32(eax + 0x244u, 0u);
        wr32(eax + 0x24cu, 0u);
        wr32(eax + 0x248u, 0u);
        wr8(eax + 0x253u, 0u);
        wr8(eax + 0x252u, 0u);
        wr8(eax + 0x251u, 0u);
        wr8(eax + 0x250u, 0u);
        wr32(COW_IMG(0x104e1d44u), eax);
    }
    COW_AT(100112b7)
    g->edi = edi;
    g->ebp = ebp;
    g->esp = sp0 - 0x30u;
    t153 = cow_call_regs(g, COW_IMG(0x10165070u), eax, ecx, edx, 1, 0);
    t154 = g->ecx;
    t155 = g->edx;
    g->ebx = 0u;
    g->ebp = ebp;
    g->ecx = t154;
    g->edx = t155;
    t156 = cow_stdcall(g, COW_IMG(0x101a8d60u), 0);
    t157 = g->ecx;
    t158 = g->edx;
    g->ebx = 0u;
    g->edi = edi;
    g->ebp = ebp;
    g->ecx = t157;
    g->edx = t158;
    t159 = cow_stdcall(g, COW_IMG(0x101d11c0u), 0);
    t160 = g->ecx;
    t161 = g->edx;
    g->ecx = t160;
    g->edx = t161;
    t162 = cow_stdcall(g, COW_IMG(0x1021bb90u), 0);
    t163 = g->ecx;
    t164 = g->edx;
    wr32(sp0 - 0x34u, 0x20u);
    g->esp = sp0 - 0x28u;
    t165 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t163, t164, 1, 3, 0x20u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t166 = g->ecx;
    t167 = g->edx;
    if (t165 == 0u)
    {
        eax = t165;
        ecx = t166;
        edx = t167;
    COW_AT(100112e7)
        wr32(COW_IMG(0x10455af8u), 0u);
    }
    else
    {
        eax = t165;
        edx = t167;
    COW_AT(100112d9)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t168 = cow_thiscall(g, COW_IMG(0x100035f0u), eax, 0);
        t169 = g->ecx;
        t170 = g->edx;
        wr32(COW_IMG(0x10455af8u), t168);
        eax = t168;
        ecx = t169;
        edx = t170;
    }
    COW_AT(100112ed)
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t171 = cow_stdcall(g, COW_IMG(0x102217a0u), 0);
    t172 = g->ecx;
    t173 = g->edx;
    g->edx = t173;
    t174 = cow_stdcall(g, COW_IMG(0x1025e0d0u), 0);
    t175 = g->edx;
    g->ecx = t174;
    g->edx = t175;
    t176 = cow_stdcall(g, COW_IMG(0x1025e0e0u), 0);
    t177 = g->ecx;
    t178 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 4u);
    wr32(sp0 - 0x3cu, 0x34u);
    g->edx = t178;
    g->esp = sp0 - 0x34u;
    t179 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x34u, 4u);
    t180 = g->edx;
    g->esp = sp0 - 0x30u;
    t181 = cow_fastcall(g, COW_IMG(0x100748f0u), t179, t180, 0);
    t182 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t179 == 0u)
    {
        eax = t181;
        edx = t182;
        goto L_10011371;
    }
    eax = t181;
    edx = t182;
    edi = t179;
    COW_AT(1001131f)
    g->esp = sp0 - 0x30u;
    t183 = cow_call_regs(g, COW_IMG(0x10074740u), eax, edi, edx, 1, 0);
    t184 = g->edx;
    wr32(edi, COW_IMG(0x10329c44u));
    wr32(sp0 - 0x34u, 6u);
    wr32(COW_IMG(0x1047d688u), edi);
    g->edx = t184;
    t185 = cow_thiscall(g, COW_IMG(0x100749b0u), edi, 1, 6u);
    t186 = g->ecx;
    t187 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 4u);
    wr32(sp0 - 0x3cu, 0x34u);
    g->edx = t187;
    g->esp = sp0 - 0x34u;
    t188 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x34u, 4u);
    t189 = g->edx;
    g->esp = sp0 - 0x30u;
    t190 = cow_fastcall(g, COW_IMG(0x100748f0u), t188, t189, 0);
    t191 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t188 == 0u)
    {
        eax = t190;
        edx = t191;
        goto L_1001138e;
    }
    eax = t190;
    edx = t191;
    edi = t188;
    COW_AT(1001135c)
    g->esp = sp0 - 0x30u;
    t192 = cow_call_regs(g, COW_IMG(0x10074740u), eax, edi, edx, 1, 0);
    t193 = g->edx;
    wr32(edi, COW_IMG(0x10329c18u));
    wr32(COW_IMG(0x1047d68cu), edi);
    eax = t192;
    edx = t193;
    COW_AT(100113ab)
    wr32(sp0 - 0x34u, 0xcu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t194 = cow_thiscall(g, COW_IMG(0x100749b0u), edi, 1, 0xcu);
    t195 = g->ecx;
    t196 = g->edx;
    wr32(sp0 - 0x34u, 0x18u);
    g->edx = t196;
    t197 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x18u);
    t198 = g->edx;
    if (t197 == 0u)
    {
        eax = t197;
        edx = t198;
        goto L_100113f5;
    }
    eax = t197;
    edx = t198;
    COW_AT(100113c2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t199 = cow_thiscall(g, COW_IMG(0x10017bb0u), eax, 0);
    t200 = g->ecx;
    t201 = g->edx;
    wr32(COW_IMG(0x10456c0cu), t199);
    if (t199 == 0u)
    {
        eax = t199;
        edx = t201;
        goto L_100115cc;
    }
    eax = t199;
    ecx = t200;
    edx = t201;
    COW_AT(100113d6)
    wr32(sp0 - 0x34u, 0x19cu);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t202 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x19cu, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t203 = g->ecx;
    t204 = g->edx;
    if (t202 == 0u)
    {
        eax = t202;
        ecx = t203;
        edx = t204;
    COW_AT(10011412)
        wr32(COW_IMG(0x10456d18u), 0u);
    }
    else
    {
        eax = t202;
        edx = t204;
    COW_AT(100113e7)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t205 = cow_thiscall(g, COW_IMG(0x10018430u), eax, 0);
        t206 = g->ecx;
        t207 = g->edx;
        wr32(COW_IMG(0x10456d18u), t205);
        eax = t205;
        ecx = t206;
        edx = t207;
    COW_AT(1001141a)
        if (eax != 0u)
        {
    COW_AT(1001141e)
            wr32(sp0 - 0x34u, 0x13u);
            wr32(sp0 - 0x38u, COW_IMG(0x1035017cu));
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, COW_IMG(0x100185a0u), eax + 0x190u, 2, COW_IMG(0x1035017cu), 0x13u);
            t208 = rd32(rd32(COW_IMG(0x10456d18u)) + 0x198u);
            t209 = rd32(COW_IMG(0x10456d18u));
            t210 = rd32(COW_IMG(0x10456a28u));
            wr32(t210 + 0x20u, t208);
            eax = t209;
            ecx = t208;
            edx = t210;
        }
    }
    COW_AT(10011444)
    wr32(sp0 - 0x34u, 4u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t211 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 4u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t212 = g->ecx;
    t213 = g->edx;
    if (t211 == 0u)
    {
        eax = t211;
        ecx = t212;
        edx = t213;
    COW_AT(10011460)
        wr32(COW_IMG(0x10669424u), 0u);
    }
    else
    {
        eax = t211;
        edx = t213;
    COW_AT(10011452)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t214 = cow_thiscall(g, COW_IMG(0x10253300u), eax, 0);
        t215 = g->ecx;
        t216 = g->edx;
        wr32(COW_IMG(0x10669424u), t214);
        eax = t214;
        ecx = t215;
        edx = t216;
    }
    COW_AT(10011466)
    wr32(COW_IMG(0x10456954u), 0u);
    wr32(COW_IMG(0x10456958u), 0u);
    wr32(COW_IMG(0x1045695cu), 0u);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t217 = cow_thiscall(g, COW_IMG(0x1006b2b0u), ecx, 0);
    t218 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    g->edx = t218;
    cow_call_regs(g, COW_IMG(0x10010ce0u), t217, self, g->edx, 0, 1, 0u);
    t219 = g->edx;
    t220 = rd32(sp0 + 4u);
    wr8(t220, 1u);
    eax = t220;
    edx = t219;
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
L_100118fe: ;
    COW_AT(100118fe)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t356 = cow_fastcall(g, COW_IMG(0x10009740u), rd32(COW_IMG(0x1045666cu)), edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return (t356 & 0xffffff00u) | 1u;
L_10010e18: ;
    COW_AT(10010e18)
    t245 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047d140u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t246 = cow_fastcall(g, COW_IMG(0x10009740u), t245, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t246 & 0xffffff00u;
L_10010e35: ;
    COW_AT(10010e35)
    t243 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047d128u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t244 = cow_fastcall(g, COW_IMG(0x10009740u), t243, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t244 & 0xffffff00u;
L_10010eae: ;
    COW_AT(10010eae)
    t241 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047bffcu), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t242 = cow_fastcall(g, COW_IMG(0x10009740u), t241, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t242 & 0xffffff00u;
L_10010ecb: ;
    COW_AT(10010ecb)
    t239 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047b970u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t240 = cow_fastcall(g, COW_IMG(0x10009740u), t239, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t240 & 0xffffff00u;
L_10010f7d: ;
    COW_AT(10010f7d)
    t237 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047b974u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t238 = cow_fastcall(g, COW_IMG(0x10009740u), t237, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t238 & 0xffffff00u;
L_10010f9a: ;
    COW_AT(10010f9a)
    wr32(sp0 - 0x34u, 0u);
    loc_34 = 0u;
    goto L_10010f9b;
L_10011097: ;
    COW_AT(10011097)
    t235 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x104e1bf4u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t236 = cow_fastcall(g, COW_IMG(0x10009740u), t235, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t236 & 0xffffff00u;
L_100110b4: ;
    COW_AT(100110b4)
    t233 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x10578158u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t234 = cow_fastcall(g, COW_IMG(0x10009740u), t233, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t234 & 0xffffff00u;
L_1001111a: ;
    COW_AT(1001111a)
    t231 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1057815cu), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t232 = cow_fastcall(g, COW_IMG(0x10009740u), t231, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t232 & 0xffffff00u;
L_10011137: ;
    COW_AT(10011137)
    t229 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x10578160u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t230 = cow_fastcall(g, COW_IMG(0x10009740u), t229, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t230 & 0xffffff00u;
L_100111da: ;
    COW_AT(100111da)
    t227 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x10631f24u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t228 = cow_fastcall(g, COW_IMG(0x10009740u), t227, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t228 & 0xffffff00u;
L_10011371: ;
    COW_AT(10011371)
    t225 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047d688u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t226 = cow_fastcall(g, COW_IMG(0x10009740u), t225, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t226 & 0xffffff00u;
L_1001138e: ;
    COW_AT(1001138e)
    t223 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047d68cu), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t224 = cow_fastcall(g, COW_IMG(0x10009740u), t223, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t224 & 0xffffff00u;
L_100113f5: ;
    COW_AT(100113f5)
    t221 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x10456c0cu), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t222 = cow_fastcall(g, COW_IMG(0x10009740u), t221, edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t222 & 0xffffff00u;
L_10011491: ;
    COW_AT(10011491)
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x915u) == 0u)
    {
        eax = rd32(COW_IMG(0x1045666cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1045666cu));
    COW_AT(1001149e)
        g->esp = sp0 - 0x30u;
        t247 = cow_call_regs(g, COW_IMG(0x10017230u), eax, eax + 0x1f4u, g->edx, 1, 0);
        eax = t247;
    }
    COW_AT(100114a9)
    wr32(rd32(COW_IMG(0x10456a28u)), 0x70u);
    t248 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047d140u), 0u);
    wr32(COW_IMG(0x1047d128u), 0u);
    wr32(COW_IMG(0x1047bffcu), 0u);
    wr32(COW_IMG(0x10631f24u), 0u);
    t249 = rd16(t248 + 0x15cu);
    wr16(self + 0x10u, (uint16_t)t249);
    t250 = rd32(COW_IMG(0x1045666cu));
    wr16(self + 0x12u, rd16(t250 + 0x160u));
    wr16(self + 0x14u, rd16(COW_IMG(0x10456ac8u)));
    wr32(sp0 - 0x34u, sp0 - 0x1cu);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    t251 = rd16(COW_IMG(0x10456a90u));
    wr16(self + 0x16u, (uint16_t)t251);
    g->eax = sp0 - 0x20u;
    g->ecx = (t250 & 0xffff0000u) | t251;
    g->edx = sp0 - 0x1cu;
    g->esp = sp0 - 0x30u;
    t252 = cow_cdecl(g, COW_IMG(0x10016560u), 2, sp0 - 0x20u, sp0 - 0x1cu);
    t253 = g->ecx;
    t254 = g->edx;
    wr32(sp0 - 0x3cu, 0u);
    t255 = rd16(sp0 - 0x20u);
    t256 = rd16(sp0 - 0x1cu);
    wr16(self + 0x18u, (uint16_t)t255);
    wr16(self + 0x1au, (uint16_t)t256);
    g->ecx = (t253 & 0xffff0000u) | t255;
    g->esp = sp0 - 0x38u;
    t257 = cow_cdecl(g, COW_IMG(0x10015360u), 1, 0u);
    t258 = g->ecx;
    wr32(sp0 - 0x40u, sp0 - 0x1cu);
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    t259 = rd16(self + 0x12u);
    wr32(sp0 - 0x48u, t259);
    t260 = rd16(self + 0x10u);
    wr32(sp0 - 0x4cu, t260);
    g->eax = t259;
    g->esp = sp0 - 0x3cu;
    t261 = cow_call_regs(g, COW_IMG(0x100156a0u), g->eax, g->ecx, sp0 - 0x20u, 1, 4, t260, t259, sp0 - 0x20u, sp0 - 0x1cu);
    t262 = g->edx;
    t263 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x50u, t263);
    t264 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x54u, t264);
    g->eax = t263;
    g->ecx = t264;
    g->edx = t262;
    g->esp = sp0 - 0x4cu;
    t265 = cow_cdecl(g, COW_IMG(0x100153a0u), 2, t264, t263);
    t266 = g->ecx;
    t267 = g->edx;
    wr32(sp0 - 0x58u, t261);
    g->edx = t267;
    g->esp = sp0 - 0x54u;
    t268 = cow_cdecl(g, COW_IMG(0x10002e60u), 1, t261);
    t269 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0x80000000u);
    wr32(sp0 - 0x40u, 3u);
    g->edx = t269;
    g->esp = sp0 - 0x30u;
    t270 = cow_thiscall(g, COW_IMG(0x10009640u), rd32(COW_IMG(0x1045666cu)), 4, 3u, 0x80000000u, 0x3f800000u, 0u);
    t271 = g->edx;
    t272 = rd32(COW_IMG(0x1045666cu));
    t273 = cow_thiscall(g, COW_IMG(0x10009d20u), t272, 0);
    t274 = g->ecx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, sp0 + 4u);
    t275 = (t273 & 0xffff0000u) | rd16(self + 0x1au);
    wr32(sp0 - 0x40u, t275);
    t276 = (t274 & 0xffff0000u) | rd16(self + 0x18u);
    wr32(sp0 - 0x44u, t276);
    t277 = rd32(COW_IMG(0x1045666cu));
    wr32(sp0 + 4u, 0u);
    g->eax = t275;
    g->edx = sp0 + 4u;
    t278 = cow_thiscall(g, COW_IMG(0x1000a6e0u), t277, 5, t276, t275, sp0 + 4u, 1u, 0u);
    t279 = g->ecx;
    t280 = g->edx;
    if (t278 == 0u)
    {
        eax = t278;
        edx = t280;
        goto L_100115cc;
    }
    eax = t278;
    ecx = t279;
    edx = t280;
    edi = t278;
    COW_AT(100115b3)
    t281 = (eax & 0xffff0000u) | rd16(self + 0x1au);
    wr32(sp0 - 0x34u, t281);
    t282 = (ecx & 0xffff0000u) | rd16(self + 0x18u);
    wr32(sp0 - 0x38u, t282);
    g->eax = t281;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t283 = cow_thiscall(g, COW_IMG(0x1000ad70u), rd32(COW_IMG(0x1045666cu)), 2, t282, t281);
    t284 = g->edx;
    if (t283 != 0u)
    {
        eax = t283;
        goto L_100115e3;
    }
    eax = t283;
    edx = t284;
L_100115cc: ;
    COW_AT(100115cc)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t357 = cow_fastcall(g, COW_IMG(0x10009740u), rd32(COW_IMG(0x1045666cu)), edx, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t357 & 0xffffff00u;
L_100115e3: ;
    COW_AT(100115e3)
    wr32(rd32(COW_IMG(0x1045666cu)) + 0x194u, edi);
    t285 = rd32(sp0 + 4u);
    wr32(rd32(COW_IMG(0x1045666cu)) + 0x19cu, t285);
    wr32(rd32(COW_IMG(0x1045666cu)) + 0x1a4u, eax);
    t286 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a4u);
    wr32(sp0 - 0x34u, t286);
    t287 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x19cu);
    wr32(sp0 - 0x38u, t287);
    t288 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
    wr32(sp0 - 0x3cu, t288);
    g->ebx = 0u;
    g->eax = t288;
    g->edx = t287;
    g->esp = sp0 - 0x30u;
    t289 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t288, t287, t286);
    t290 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x3f800000u);
    t291 = rd32(self + 0x308u);
    wr32(sp0 - 0x3cu, t291);
    wr32(sp0 - 0x40u, 3u);
    g->edx = t290;
    t292 = cow_thiscall(g, COW_IMG(0x1000a390u), rd32(COW_IMG(0x1045666cu)), 4, 3u, t291, 0x3f800000u, 0u);
    t293 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    t294 = rd32(COW_IMG(0x1045666cu));
    t295 = cow_fastcall(g, COW_IMG(0x1000a1d0u), t294, t293, 2, 0u, 0u);
    t296 = g->ecx;
    t297 = g->edx;
    wr32(COW_IMG(0x10456940u), 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, COW_IMG(0x10456940u));
    t298 = (t295 & 0xffff0000u) | rd16(self + 0x1au) >> 1u;
    wr32(sp0 - 0x40u, t298);
    t299 = (t296 & 0xffff0000u) | rd16(self + 0x18u) >> 1u;
    wr32(sp0 - 0x44u, t299);
    g->eax = t298;
    g->edx = t297;
    t300 = rd32(COW_IMG(0x1045666cu));
    t301 = cow_thiscall(g, COW_IMG(0x1000a6e0u), t300, 5, t299, t298, COW_IMG(0x10456940u), 1u, 0u);
    t302 = g->ecx;
    t303 = g->edx;
    wr32(COW_IMG(0x10456938u), t301);
    if (rd16(self + 0x14u) == 0u)
    {
        eax = (t301 & 0xffff0000u) | rd16(self + 0x14u);
        edx = t303;
        goto L_10011712;
    }
    eax = (t301 & 0xffff0000u) | rd16(self + 0x14u);
    ecx = t302;
    edx = t303;
    COW_AT(1001168d)
    if (rd16(self + 0x16u) == 0u) goto L_10011712;
    ecx = (ecx & 0xffff0000u) | rd16(self + 0x16u);
    COW_AT(10011696)
    if ((uint16_t)eax != rd16(self + 0x10u)) goto L_100116a2;
    COW_AT(1001169c)
    if ((uint16_t)ecx == rd16(self + 0x12u)) goto L_10011712;
L_100116a2: ;
    COW_AT(100116a2)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, sp0 + 4u);
    wr32(sp0 - 0x40u, ecx);
    wr32(sp0 - 0x44u, eax);
    t304 = rd32(COW_IMG(0x1045666cu));
    wr32(sp0 + 4u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t305 = cow_thiscall(g, COW_IMG(0x1000a6e0u), t304, 5, eax, ecx, sp0 + 4u, 1u, 0u);
    t306 = rd32(COW_IMG(0x1045666cu));
    wr32(t306 + 0x1e0u, t305);
    t307 = rd32(sp0 + 4u);
    t308 = rd32(COW_IMG(0x1045666cu));
    wr32(t308 + 0x1e4u, t307);
    t309 = (t307 & 0xffff0000u) | rd16(self + 0x16u);
    wr32(sp0 - 0x34u, t309);
    t310 = (t306 & 0xffff0000u) | rd16(self + 0x14u);
    wr32(sp0 - 0x38u, t310);
    g->eax = t309;
    t311 = cow_thiscall(g, COW_IMG(0x1000ad70u), rd32(COW_IMG(0x1045666cu)), 2, t310, t309);
    wr32(rd32(COW_IMG(0x1045666cu)) + 0x1e8u, t311);
    if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u);
        edx = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e8u);
        goto L_10011712;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u);
    ecx = rd32(COW_IMG(0x1045666cu));
    edx = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e8u);
    COW_AT(1001170e)
    if (edx != 0u) goto L_10011728;
L_10011712: ;
    COW_AT(10011712)
    t312 = rd16(self + 0x12u);
    t313 = rd16(self + 0x10u);
    wr16(self + 0x14u, (uint16_t)t313);
    wr16(self + 0x16u, (uint16_t)t312);
    eax = (eax & 0xffff0000u) | t312;
    ecx = rd32(COW_IMG(0x1045666cu));
    edx = (edx & 0xffff0000u) | t313;
L_10011728: ;
    COW_AT(10011728)
    t314 = (edx & 0xffff0000u) | rd16(self + 0x1au);
    wr32(sp0 - 0x34u, t314);
    t315 = (eax & 0xffff0000u) | rd16(self + 0x18u);
    wr32(sp0 - 0x38u, t315);
    g->ebx = 0u;
    g->eax = t315;
    g->edx = t314;
    g->esp = sp0 - 0x30u;
    t316 = cow_thiscall(g, COW_IMG(0x1000c6e0u), ecx, 2, t315, t314);
    t317 = g->edx;
    if (rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u) == 0u)
    {
        eax = t316;
        edx = t317;
        goto L_10011815;
    }
    eax = t316;
    ecx = rd32(COW_IMG(0x104566e8u));
    edx = t317;
    COW_AT(10011746)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0u);
    t318 = (eax & 0xffff0000u) | rd16(self + 0x1au);
    wr32(sp0 - 0x40u, t318);
    t319 = (ecx & 0xffff0000u) | rd16(self + 0x18u);
    wr32(sp0 - 0x44u, t319);
    g->eax = t318;
    g->edx = edx;
    t320 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x30u;
    t321 = cow_thiscall(g, COW_IMG(0x1000a6e0u), t320, 5, t319, t318, 0u, 1u, 0u);
    t322 = g->ecx;
    t323 = g->edx;
    t324 = (t321 & 0xffff0000u) | rd16(self + 0x1au);
    wr32(sp0 - 0x34u, t324);
    t325 = (t322 & 0xffff0000u) | rd16(self + 0x18u);
    wr32(sp0 - 0x38u, t325);
    g->eax = t324;
    g->edx = t323;
    t326 = cow_thiscall(g, COW_IMG(0x1000ad70u), rd32(COW_IMG(0x1045666cu)), 2, t325, t324);
    t327 = g->edx;
    if (t321 == 0u)
    {
        eax = t326;
        edx = t327;
        goto L_10011815;
    }
    eax = t326;
    edx = t327;
    edi = t321;
    COW_AT(1001177e)
    if (eax == 0u) goto L_10011815;
    COW_AT(10011786)
    wr32(rd32(COW_IMG(0x1045666cu)) + 0x198u, edi);
    wr32(rd32(COW_IMG(0x1045666cu)) + 0x1a8u, eax);
    t328 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a8u);
    wr32(sp0 - 0x34u, t328);
    t329 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a0u);
    wr32(sp0 - 0x38u, t329);
    t330 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x198u);
    wr32(sp0 - 0x3cu, t330);
    g->ebx = 0u;
    g->edx = t330;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t330, t329, t328);
    t331 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x3f800000u);
    t332 = rd32(self + 0x308u);
    wr32(sp0 - 0x3cu, t332);
    wr32(sp0 - 0x40u, 3u);
    g->eax = t332;
    g->edx = t331;
    t333 = cow_thiscall(g, COW_IMG(0x1000a390u), rd32(COW_IMG(0x1045666cu)), 4, 3u, t332, 0x3f800000u, 0u);
    t334 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    t335 = rd32(COW_IMG(0x1045666cu));
    t336 = cow_fastcall(g, COW_IMG(0x1000a1d0u), t335, t334, 2, 0u, 0u);
    t337 = g->ecx;
    t338 = g->edx;
    wr32(COW_IMG(0x10456944u), 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, COW_IMG(0x10456944u));
    t339 = (t336 & 0xffff0000u) | rd16(self + 0x1au) >> 1u;
    wr32(sp0 - 0x40u, t339);
    t340 = (t337 & 0xffff0000u) | rd16(self + 0x18u) >> 1u;
    wr32(sp0 - 0x44u, t340);
    g->eax = t339;
    g->edx = t338;
    t341 = cow_thiscall(g, COW_IMG(0x1000a6e0u), rd32(COW_IMG(0x1045666cu)), 5, t340, t339, COW_IMG(0x10456944u), 1u, 0u);
    t342 = g->edx;
    wr32(COW_IMG(0x1045693cu), t341);
    eax = t341;
    edx = t342;
L_10011820: ;
    COW_AT(10011820)
    if (rd32(COW_IMG(0x10456ad8u)) != 0u)
    {
    COW_AT(10011828)
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x3cu, sp0 + 4u);
        wr32(sp0 - 0x40u, 0x100u);
        wr32(sp0 - 0x44u, 0x100u);
        t345 = rd32(COW_IMG(0x1045666cu));
        wr32(sp0 + 4u, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t346 = cow_thiscall(g, COW_IMG(0x1000a6e0u), t345, 5, 0x100u, 0x100u, sp0 + 4u, 1u, 0u);
        wr32(sp0 - 0x34u, 0x100u);
        wr32(sp0 - 0x38u, 0x100u);
        t347 = rd32(COW_IMG(0x1045666cu));
        wr32(t347 + 0x1c0u, t346);
        t348 = rd32(sp0 + 4u);
        t349 = rd32(COW_IMG(0x1045666cu));
        wr32(t349 + 0x1c4u, t348);
        g->eax = t349;
        t350 = cow_thiscall(g, COW_IMG(0x1000ad70u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, 0x100u);
        t351 = rd32(COW_IMG(0x1045666cu));
        wr32(t351 + 0x1c8u, t350);
        eax = t350;
        edx = t351;
    }
    COW_AT(10011885)
    wr8(sp0 + 6u, 0u);
    wr8(sp0 + 5u, 0u);
    wr8(sp0 + 4u, 0u);
    wr8(sp0 + 7u, 0x80u);
    t352 = rd32(sp0 + 4u);
    wr8(self + 0x32eu, 0x80u);
    wr8(self + 0x32du, 0x80u);
    wr8(self + 0x32cu, 0x80u);
    wr8(sp0 + 6u, 0x80u);
    wr8(sp0 + 5u, 0x80u);
    wr8(sp0 + 4u, 0x80u);
    wr8(sp0 + 7u, 0x80u);
    t353 = rd32(sp0 + 4u);
    wr32(self + 0x334u, t353);
    wr32(self + 0x31cu, t353);
    wr32(self + 0x324u, t352);
    wr32(self + 0x328u, t352);
    wr32(self + 0x338u, t352);
    wr32(self + 0x330u, 0x3f800000u);
    wr8(self + 0x32fu, 0u);
    wr32(self + 0x320u, t352);
    g->eax = t352;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t354 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    t355 = g->edx;
    eax = t354;
    edx = t355;
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    goto L_100118fe;
L_10011815: ;
    COW_AT(10011815)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t343 = cow_stdcall(g, COW_IMG(0x1000d620u), 0);
    t344 = g->edx;
    eax = t343;
    edx = t344;
    goto L_10011820;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10010d20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10010d4du:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010d54u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010d64u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010d74u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010d86u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010daau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010dbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010dd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010e03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010e18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010e35u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010e52u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010e73u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010ea0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010eaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010ecbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010ee8u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010ef0u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010efeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010f12u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010f6bu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10010f70u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10010f75u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10010f79u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10010f7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10010f9au:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10010f9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10010fcau:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10010fd1u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10010fdau:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10010fe1u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10010feau:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10010ff1u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10011021u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10011028u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10011048u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1001104fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1001105du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10011071u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10011089u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10011097u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100110b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100110d1u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100110d9u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100110eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100110feu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1001110cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1001111au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10011137u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10011154u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1001115cu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10011180u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011194u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100111ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100111dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100111f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100111fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011212u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100112b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100112b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100112d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100112e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100112edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001131fu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001135cu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011371u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001138eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100113abu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100113c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100113d6u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100113e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100113f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011412u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001141au:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001141eu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011444u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011452u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011460u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011466u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011491u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001149eu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100114a9u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100115b3u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100115ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100115e3u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1001168du:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011696u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001169cu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100116a2u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001170eu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10011712u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011728u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011746u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001177eu:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011786u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011815u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011820u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011828u:
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
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011885u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100118feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10010d20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10010d20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
