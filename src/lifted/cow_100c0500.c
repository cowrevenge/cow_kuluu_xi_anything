/* f_0x100c0500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100c0500(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_15c;
    uint32_t loc_164;
    uint32_t loc_168;
    uint32_t loc_16c;
    uint32_t loc_170;
    uint32_t loc_174;
    uint32_t loc_178;
    uint32_t loc_17c;
    uint32_t loc_180;
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
    uint32_t t35;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 392u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c053eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c053e;
    case 0x100c056cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c056c;
    case 0x100c057du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c057d;
    case 0x100c0588u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0588;
    case 0x100c059au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c059a;
    case 0x100c05a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c05a9;
    case 0x100c05bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c05bb;
    case 0x100c05cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c05cd;
    case 0x100c05deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c05de;
    case 0x100c05f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c05f0;
    case 0x100c0600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0600;
    case 0x100c0612u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0612;
    case 0x100c0623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0623;
    case 0x100c0635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0635;
    case 0x100c0647u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0647;
    case 0x100c0664u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0664;
    case 0x100c0675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0675;
    case 0x100c06a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c06a6;
    case 0x100c06eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c06ee;
    case 0x100c0752u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0752;
    case 0x100c0791u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0791;
    case 0x100c07d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c07d0;
    case 0x100c07e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_100c07e6;
    case 0x100c0801u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0801;
    case 0x100c0823u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); loc_15c = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0823;
    case 0x100c0844u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0844;
    case 0x100c0847u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0847;
    case 0x100c084au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c084a;
    case 0x100c085bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c085b;
    case 0x100c086cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c086c;
    case 0x100c0873u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0873;
    case 0x100c0877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0877;
    case 0x100c08b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c08b0;
    case 0x100c08c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c08c0;
    case 0x100c08ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_174 = rd32(sp0 - 0x174u); goto E_100c08cc;
    case 0x100c0939u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0939;
    case 0x100c098bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c098b;
    case 0x100c09a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c09a0;
    case 0x100c09b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c09b3;
    case 0x100c09c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c09c3;
    case 0x100c09e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c09e1;
    case 0x100c09fau: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c09fa;
    case 0x100c0a04u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0a04;
    case 0x100c0a1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); loc_15c = rd32(sp0 - 0x15cu); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0a1c;
    case 0x100c0a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0a56;
    case 0x100c0a66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0a66;
    case 0x100c0a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0a74;
    case 0x100c0a91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0a91;
    case 0x100c0aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0aa1;
    case 0x100c0aadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0aad;
    case 0x100c0ad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0ad3;
    case 0x100c0afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0afd;
    case 0x100c0b03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b03;
    case 0x100c0b2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b2b;
    case 0x100c0b63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); goto E_100c0b63;
    case 0x100c0b8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0b8d;
    case 0x100c0bd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0bd5;
    case 0x100c0be5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0be5;
    case 0x100c0bf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0bf1;
    case 0x100c0c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c28;
    case 0x100c0c52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c52;
    case 0x100c0c7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); goto E_100c0c7a;
    case 0x100c0ca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0ca4;
    case 0x100c0cc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0cc0;
    case 0x100c0cd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0cd0;
    case 0x100c0cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0cec;
    case 0x100c0cffu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0cff;
    case 0x100c0d03u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0d03;
    case 0x100c0d05u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0d05;
    case 0x100c0d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0d8b;
    case 0x100c0d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0d91;
    case 0x100c0da8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0da8;
    case 0x100c0dc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0dc4;
    case 0x100c0dc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0dc8;
    case 0x100c0dd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0dd8;
    case 0x100c0decu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0dec;
    case 0x100c0df7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0df7;
    case 0x100c0e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e07;
    case 0x100c0e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e10;
    case 0x100c0e21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e21;
    case 0x100c0e31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e31;
    case 0x100c0e3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e3d;
    case 0x100c0e42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_178 = rd32(sp0 - 0x178u); goto E_100c0e42;
    case 0x100c0e46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_178 = rd32(sp0 - 0x178u); goto E_100c0e46;
    case 0x100c0e58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_178 = rd32(sp0 - 0x178u); goto E_100c0e58;
    case 0x100c0e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0e6b;
    case 0x100c0eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0eb6;
    case 0x100c0f14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0f14;
    case 0x100c0f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0f53;
    case 0x100c0f92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0f92;
    case 0x100c0fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_15c = rd32(sp0 - 0x15cu); goto E_100c0fc3;
    case 0x100c0ff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0ff6;
    case 0x100c102eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c102e;
    case 0x100c1031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c1031;
    case 0x100c103au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c103a;
    case 0x100c1041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_170 = rd32(sp0 - 0x170u); loc_16c = rd32(sp0 - 0x16cu); loc_168 = rd32(sp0 - 0x168u); loc_164 = rd32(sp0 - 0x164u); loc_15c = rd32(sp0 - 0x15cu); goto E_100c1041;
    case 0x100c1052u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c1052;
    case 0x100c106cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c106c;
    case 0x100c10a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c10a9;
    default: break;
    }
#endif

    COW_AT(100c0500)
    wr32(sp0 - 0x164u, in_ebx);
    wr32(sp0 - 0x168u, in_ebp);
    wr32(sp0 - 0x16cu, in_esi);
    wr32(sp0 - 0x170u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x170u;
    t1 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x158u, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x128u, 0);
    t4 = g->edx;
    wr32(sp0 - 0x15cu, 0u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10258a60u), sp0 - 0x11cu, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10258b50u), sp0 - 0xfcu, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if (rd32(self + 0x6f0u) == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    else
    {
        edx = t9;
    COW_AT(100c053e)
        wr32(sp0 - 0x174u, self + 0x110u);
        t10 = rd32(self + 0x704u);
        wr8(t10, 0u);
        g->eax = t10;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        t11 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, self + 0x110u);
        t12 = g->edx;
        t13 = rd32(self + 0x6f0u);
        wr8(self + 0x110u, 0u);
        wr32(self + 0x704u, t13);
        wr32(self + 0x6f0u, 0u);
        eax = t11;
        ecx = t13;
        edx = t12;
    }
    COW_AT(100c056c)
    t14 = rd8(arg1);
    wr8(sp0 - 0x14cu, (uint8_t)t14);
    if ((uint8_t)t14 != 0u)
    {
        ebx = t14;
    }
    else
    {
        ebx = t14;
    COW_AT(100c057d)
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
        t15 = g->ecx;
        t16 = g->edx;
        ecx = t15;
        edx = t16;
    }
    COW_AT(100c0588)
    if ((uint32_t)(int8_t)rd8(arg1) - 1u > 0x34u)
    {
        eax = (uint32_t)(int8_t)rd8(arg1) - 1u;
        loc_164 = in_ebx;
        loc_168 = in_ebp;
        loc_16c = in_esi;
        loc_170 = in_edi;
        loc_15c = 0u;
        goto L_100c1041;
    }
    eax = (uint32_t)(int8_t)rd8(arg1) - 1u;
    COW_AT(100c059a)
    t17 = rd32(COW_IMG(0x100c10dcu) + rd8(COW_IMG(0x100c114cu) + eax) * 4u);
    switch (t17 - RD)
    {
    case 0x100c05a9u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c05a9;
    case 0x100c05bbu: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c05bb;
    case 0x100c05cdu: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c05cd;
    case 0x100c05deu: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c05de;
    case 0x100c05f0u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c05f0;
    case 0x100c0600u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0600;
    case 0x100c0612u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0612;
    case 0x100c0623u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0623;
    case 0x100c0635u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0635;
    case 0x100c0647u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0647;
    case 0x100c0664u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0664;
    case 0x100c06a6u: goto L_100c06a6;
    case 0x100c06eeu: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c06ee;
    case 0x100c0752u: goto L_100c0752;
    case 0x100c0791u: goto L_100c0791;
    case 0x100c07d0u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c07d0;
    case 0x100c0801u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0801;
    case 0x100c0823u: goto L_100c0823;
    case 0x100c0939u: goto L_100c0939;
    case 0x100c09a0u: goto L_100c09a0;
    case 0x100c09e1u: goto L_100c09e1;
    case 0x100c0a1cu: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0a1c;
    case 0x100c0b8du: goto L_100c0b8d;
    case 0x100c0ca4u: goto L_100c0ca4;
    case 0x100c0d8bu: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0d8b;
    case 0x100c0e6bu: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c0e6b;
    case 0x100c0f92u: goto L_100c0f92;
    case 0x100c1041u: edx = rd8(COW_IMG(0x100c114cu) + eax); loc_164 = in_ebx; loc_168 = in_ebp; loc_16c = in_esi; loc_170 = in_edi; loc_15c = 0u; goto L_100c1041;
    default: rt_fatal(g, COW_IMG(0x100c05a2u), "switch");
    }
    return 0;
L_100c05a9: ;
    COW_AT(100c05a9)
    wr32(sp0 - 0x174u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t325 = cow_thiscall(g, COW_IMG(0x1025b200u), self + 0x720u, 1, 2u);
    t326 = g->edx;
    eax = t325;
    edx = t326;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
L_100c1041: ;
    COW_AT(100c1041)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t327 = cow_thiscall(g, COW_IMG(0x1025aab0u), self + 0x720u, 0);
    t328 = g->edx;
    if (t327 != 0u)
    {
        edx = t328;
    COW_AT(100c106c)
        wr32(sp0 - 0x174u, sp0 - 0x128u);
        g->eax = sp0 - 0x128u;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        t330 = cow_thiscall(g, COW_IMG(0x1025aac0u), self + 0x720u, 1, sp0 - 0x128u);
        t331 = g->edx;
        g->edx = t331;
        t332 = cow_thiscall(g, COW_IMG(0x1025a840u), self + 0x720u, 0);
        t333 = g->edx;
        t334 = rd32(self + 0xcu);
        wr32(sp0 - 0x174u, t334);
        t335 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x128u, 1, t334);
        t336 = g->ecx;
        wr32(sp0 - 0x178u, t335);
        t337 = rd32(self + 0x704u);
        wr32(sp0 - 0x17cu, t337);
        g->edx = t337;
        g->esp = sp0 - 0x158u;
        t338 = cow_call_regs(g, COW_IMG(0x100c2bf0u), t335, t336, g->edx, 1, 9, t337, t335, rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu));
        t339 = g->edx;
        wr32(self + 0x704u, t338);
        wr32(self + 0xcu, 0u);
        eax = t338;
        edx = t339;
    }
    else
    {
        eax = t327;
    COW_AT(100c1052)
        t329 = rd32(self + 0x704u);
        wr32(self + 0x6f0u, t329);
        wr32(self + 0x704u, self + 0x110u);
        edx = self + 0x110u;
    }
    COW_AT(100c10a9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t340 = cow_thiscall(g, COW_IMG(0x10258b00u), sp0 - 0xfcu, 0);
    t341 = g->edx;
    g->edx = t341;
    t342 = cow_thiscall(g, COW_IMG(0x10258a20u), sp0 - 0x11cu, 0);
    t343 = g->edx;
    t344 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x128u, t343, 0);
    t345 = g->edx;
    t346 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x158u, t345, 0);
    g->ebx = rd32(sp0 - 0x164u);
    g->esi = rd32(sp0 - 0x16cu);
    g->edi = rd32(sp0 - 0x170u);
    g->ebp = rd32(sp0 - 0x168u);
    return (t346 & 0xffffff00u) | 1u;
L_100c05bb: ;
    COW_AT(100c05bb)
    wr32(sp0 - 0x174u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t323 = cow_thiscall(g, COW_IMG(0x1025b270u), self + 0x720u, 1, 0u);
    t324 = g->edx;
    eax = t323;
    edx = t324;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c05cd: ;
    COW_AT(100c05cd)
    wr32(sp0 - 0x174u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t321 = cow_thiscall(g, COW_IMG(0x1025b270u), self + 0x720u, 1, 1u);
    t322 = g->edx;
    eax = t321;
    edx = t322;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c05de: ;
    COW_AT(100c05de)
    wr32(sp0 - 0x174u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t319 = cow_thiscall(g, COW_IMG(0x1025b270u), self + 0x720u, 1, 2u);
    t320 = g->edx;
    eax = t319;
    edx = t320;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c05f0: ;
    COW_AT(100c05f0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t317 = cow_thiscall(g, COW_IMG(0x1025b2e0u), self + 0x720u, 0);
    t318 = g->edx;
    eax = t317;
    edx = t318;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c0600: ;
    COW_AT(100c0600)
    wr32(sp0 - 0x174u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t315 = cow_thiscall(g, COW_IMG(0x1025b340u), self + 0x720u, 1, 0u);
    t316 = g->edx;
    eax = t315;
    edx = t316;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c0612: ;
    COW_AT(100c0612)
    wr32(sp0 - 0x174u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t313 = cow_thiscall(g, COW_IMG(0x1025b340u), self + 0x720u, 1, 1u);
    t314 = g->edx;
    eax = t313;
    edx = t314;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c0623: ;
    COW_AT(100c0623)
    wr32(sp0 - 0x174u, 3u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t311 = cow_thiscall(g, COW_IMG(0x1025b340u), self + 0x720u, 1, 3u);
    t312 = g->edx;
    eax = t311;
    edx = t312;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c0635: ;
    COW_AT(100c0635)
    wr32(sp0 - 0x174u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t309 = cow_thiscall(g, COW_IMG(0x1025b3b0u), self + 0x720u, 1, 0u);
    t310 = g->edx;
    eax = t309;
    edx = t310;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c0647: ;
    COW_AT(100c0647)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x170u;
    t300 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t301 = g->ecx;
    t302 = g->edx;
    if (rd16(sp0 - 0x148u) != 1u)
    {
        eax = (t300 & 0xffff0000u) | rd16(sp0 - 0x148u);
        ecx = t301;
        goto L_100c0675;
    }
    eax = (t300 & 0xffff0000u) | rd16(sp0 - 0x148u);
    edx = t302;
L_100c0664: ;
    COW_AT(100c0664)
    wr32(sp0 - 0x174u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t303 = cow_thiscall(g, COW_IMG(0x1025b200u), self + 0x720u, 1, 1u);
    t304 = g->edx;
    eax = t303;
    edx = t304;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c0675: ;
    COW_AT(100c0675)
    wr32(sp0 - 0x174u, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0x178u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x17cu, sp0 - 0x80u);
    g->ebx = ebx;
    g->eax = sp0 - 0x80u;
    g->edx = (uint32_t)(int16_t)eax;
    g->esp = sp0 - 0x168u;
    t305 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)eax, rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu));
    t306 = g->edx;
    wr32(sp0 - 0x174u, sp0 - 0x80u);
    g->edx = t306;
    g->esp = sp0 - 0x170u;
    t307 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, sp0 - 0x80u);
    t308 = g->edx;
    eax = t307;
    edx = t308;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c06a6: ;
    COW_AT(100c06a6)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t296 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc50u);
    wr32(sp0 - 0x174u, t296);
    wr32(sp0 - 0x178u, sp0 - 0x11cu);
    g->eax = t296;
    t297 = cow_fastcall(g, COW_IMG(0x10227590u), rd32(COW_IMG(0x106671b4u)), rd32(self + 4u), 2, sp0 - 0x11cu, t296);
    wr32(sp0 - 0x174u, sp0 - 0x11cu);
    g->edx = sp0 - 0x11cu;
    t298 = cow_thiscall(g, COW_IMG(0x1025b180u), self + 0x720u, 1, sp0 - 0x11cu);
    t299 = g->edx;
    eax = t298;
    edx = t299;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c06ee: ;
    COW_AT(100c06ee)
    wr32(sp0 - 0x174u, sp0 - 0x146u);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg1 + 1u);
    wr32(sp0 - 0x180u, self + 0x50u);
    g->ecx = sp0 - 0x148u;
    g->esp = sp0 - 0x174u;
    t285 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x146u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t286 = g->ecx;
    t287 = g->edx;
    t288 = arg1 + t285 + 1u;
    wr32(sp0 - 0x178u, t288);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t288, g->ecx, t287, 1, 3, self + 0x50u, t288, sp0 - 0x146u);
    t289 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc50u);
    wr32(sp0 - 0x174u, t289);
    wr32(sp0 - 0x178u, sp0 - 0xfcu);
    cow_fastcall(g, COW_IMG(0x10227680u), rd32(COW_IMG(0x106671b4u)), sp0 - 0xfcu, 2, sp0 - 0xfcu, t289);
    t290 = g->edx;
    t291 = (uint32_t)(int16_t)rd16(sp0 - 0x146u);
    wr32(sp0 - 0x174u, t291);
    g->eax = t291;
    g->edx = t290;
    t292 = cow_thiscall(g, COW_IMG(0x10258bb0u), sp0 - 0xfcu, 1, t291);
    t293 = g->edx;
    wr32(sp0 - 0x174u, t292);
    g->edx = t293;
    t294 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, t292);
    t295 = g->edx;
    eax = t294;
    edx = t295;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c0752: ;
    COW_AT(100c0752)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t279 = g->edx;
    t280 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x174u, t280);
    g->eax = t280;
    g->edx = t279;
    t281 = cow_thiscall(g, COW_IMG(0x10167420u), rd32(COW_IMG(0x10621950u)), 1, t280);
    t282 = g->edx;
    wr32(sp0 - 0x174u, t281);
    g->edx = t282;
    t283 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, t281);
    t284 = g->edx;
    eax = t283;
    edx = t284;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c0791: ;
    COW_AT(100c0791)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t273 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x174u, t273);
    g->eax = t273;
    g->edx = rd32(self + 4u);
    t274 = rd32(self + 4u);
    t275 = cow_thiscall(g, COW_IMG(0x10167430u), rd32(COW_IMG(0x10621950u)), 1, t273);
    t276 = g->edx;
    wr32(sp0 - 0x174u, t275);
    g->edx = t276;
    t277 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, t275);
    t278 = g->edx;
    eax = t277;
    edx = t278;
    loc_164 = in_ebx;
    loc_168 = in_ebp;
    loc_16c = in_esi;
    loc_170 = in_edi;
    loc_15c = 0u;
    goto L_100c1041;
L_100c07d0: ;
    COW_AT(100c07d0)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x170u;
    t266 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t267 = g->ecx;
    t268 = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    wr32(sp0 - 0x180u, t268);
    eax = t266;
    ecx = t267;
    edx = t268;
    loc_180 = t268;
L_100c07e6: ;
    COW_AT(100c07e6)
    wr32(sp0 - 0x184u, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x17cu;
    t269 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, loc_180);
    t270 = g->edx;
    wr32(sp0 - 0x174u, t269);
    g->edx = t270;
    g->esp = sp0 - 0x170u;
    t271 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, t269);
    t272 = g->edx;
    eax = t271;
    edx = t272;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0801: ;
    COW_AT(100c0801)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t264 = g->ecx;
    t265 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x180u, t265);
    eax = t265;
    ecx = t264;
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    loc_180 = t265;
    goto L_100c07e6;
L_100c0823: ;
    COW_AT(100c0823)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t234 = g->edx;
    if ((uint8_t)rd32(sp0 - 0x14cu) == 0x33u)
    {
        edx = t234;
    COW_AT(100c086c)
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    }
    else
    {
        eax = (uint8_t)rd32(sp0 - 0x14cu) - 0x33u;
        edx = t234;
    COW_AT(100c0844)
        if (eax == 1u)
        {
    COW_AT(100c085b)
            eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
            edx = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
        }
        else
        {
            eax = eax - 1u;
    COW_AT(100c0847)
            if (eax != 1u)
            {
    COW_AT(100c0873)
                eax = rd32(sp0 - 0x14cu);
            }
            else
            {
    COW_AT(100c084a)
                eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc50u);
            }
        }
    }
    COW_AT(100c0877)
    wr32(sp0 - 0x174u, eax + 0xe000u);
    wr32(sp0 - 0x178u, sp0 - 0x15cu);
    wr32(sp0 - 0x15cu, 0u);
    g->ebx = ebx;
    g->eax = eax + 0xe000u;
    g->ecx = self;
    g->esp = sp0 - 0x170u;
    t235 = cow_stdcall(g, COW_IMG(0x100c0440u), 2, sp0 - 0x15cu, eax + 0xe000u);
    t236 = g->ecx;
    wr32(sp0 - 0x174u, 8u);
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = (uint8_t)t235;
    t237 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), t236, 2, sp0 - 0x160u, 8u);
    t238 = g->edx;
    wr8(sp0 - 0x15eu, 0u);
    if (t238 != 0u)
    {
        eax = t237;
        edx = t238;
        goto L_100c08c0;
    }
    eax = t237;
    edx = t238;
    COW_AT(100c08b0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t239 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t240 = g->edx;
    eax = t239;
    edx = t240;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = 0u;
    goto L_100c1041;
L_100c08c0: ;
    COW_AT(100c08c0)
    if (1u) goto L_100c0fc3;
    COW_AT(100c08cc)
    g->eax = eax;
    g->edx = rd32(0u);
    t241 = rd32(0u);
    g->esp = sp0 - 0x170u;
    t242 = cow_thiscall(g, rd32(t241 + 4u), 0u, 0);
    t243 = g->edx;
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    wr32(sp0 - 0x174u, sp0 - 0x158u);
    g->eax = sp0 - 0x158u;
    t244 = cow_thiscall(g, rd32(rd32(0u) + 0xcu), 0u, 1, sp0 - 0x158u);
    g->edx = rd32(0u);
    t245 = rd32(0u);
    t246 = cow_thiscall(g, rd32(t245 + 8u), 0u, 0);
    t247 = g->edx;
    t248 = -(t246 != 0u) + 2u;
    wr32(sp0 - 0x174u, t248);
    g->eax = t248;
    g->edx = t247;
    t249 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t248);
    t250 = g->edx;
    wr32(sp0 - 0x178u, t249);
    wr32(sp0 - 0x17cu, t242);
    wr32(sp0 - 0x180u, 3u);
    g->edx = t250;
    cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, 3u, t242, t249, rd32(sp0 - 0x174u));
    t251 = g->ecx;
    t252 = g->edx;
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = t252;
    t253 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x160u);
    t254 = g->edx;
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->edx = t254;
    t255 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t256 = g->edx;
    eax = t255;
    edx = t256;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = 0u;
    goto L_100c1041;
L_100c0939: ;
    COW_AT(100c0939)
    wr32(sp0 - 0x174u, sp0 - 0x146u);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg1 + 1u);
    wr32(sp0 - 0x180u, self + 0x50u);
    g->ecx = ecx;
    g->esp = sp0 - 0x174u;
    t223 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, sp0 - 0x146u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t224 = g->ecx;
    t225 = g->edx;
    t226 = arg1 + t223 + 1u;
    wr32(sp0 - 0x178u, t226);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t226, g->ecx, t225, 1, 3, self + 0x50u, t226, sp0 - 0x146u);
    t227 = (uint32_t)(int16_t)rd16(sp0 - 0x146u);
    wr32(sp0 - 0x174u, t227);
    t228 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x178u, t228);
    wr32(sp0 - 0x17cu, sp0 - 0x11cu);
    g->eax = rd32(self + 4u);
    g->edx = sp0 - 0x11cu;
    t229 = rd32(self + 4u);
    t230 = cow_thiscall(g, COW_IMG(0x10157050u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0x11cu, t228, t227);
    t231 = g->edx;
    if (t230 == 0u)
    {
        eax = t230;
        edx = t231;
        goto L_100c0fc3;
    }
    edx = t231;
    COW_AT(100c098b)
    wr32(sp0 - 0x174u, sp0 - 0x11cu);
    g->eax = sp0 - 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t232 = cow_thiscall(g, COW_IMG(0x1025b180u), self + 0x720u, 1, sp0 - 0x11cu);
    t233 = g->edx;
    eax = t232;
    edx = t233;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c09a0: ;
    COW_AT(100c09a0)
    t215 = rd32(self + 0x48u);
    wr32(sp0 - 0x174u, t215);
    t216 = rd32(self + 0x10u);
    wr32(sp0 - 0x178u, t216);
    t217 = rd32(self + 0x40u);
    wr32(sp0 - 0x17cu, t217);
    if (rd32(self + 0x30u) == 0u)
    {
        eax = t217;
        edx = t216;
        loc_174 = t215;
        loc_178 = t216;
        loc_17c = t217;
    COW_AT(100c09c3)
        t220 = (rd32(self + 0x18u) != 1u) + 3u;
        wr32(sp0 - 0x180u, t220);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        t221 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, t220, loc_17c, loc_178, loc_174);
        t222 = g->edx;
        eax = t221;
        edx = t222;
        loc_164 = in_ebx;
        loc_168 = in_ebp;
        loc_16c = in_esi;
        loc_170 = in_edi;
        loc_15c = 0u;
    }
    else
    {
        eax = t217;
        edx = t216;
        loc_174 = t215;
        loc_178 = t216;
        loc_17c = t217;
    COW_AT(100c09b3)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        t218 = cow_thiscall(g, COW_IMG(0x1025b090u), self + 0x720u, 3, loc_17c, loc_178, loc_174);
        t219 = g->edx;
        eax = t218;
        edx = t219;
        loc_164 = in_ebx;
        loc_168 = in_ebp;
        loc_16c = in_esi;
        loc_170 = in_edi;
        loc_15c = 0u;
    }
    goto L_100c1041;
L_100c09e1: ;
    COW_AT(100c09e1)
    t207 = rd32(self + 0x4cu);
    wr32(sp0 - 0x174u, t207);
    t208 = rd32(self + 0x14u);
    wr32(sp0 - 0x178u, t208);
    t209 = rd32(self + 0x44u);
    wr32(sp0 - 0x17cu, t209);
    if (rd32(self + 0x34u) == 0u)
    {
        eax = t208;
        loc_174 = t207;
        loc_178 = t208;
        loc_17c = t209;
    COW_AT(100c0a04)
        t212 = (rd32(self + 0x1cu) != 1u) + 3u;
        wr32(sp0 - 0x180u, t212);
        g->eax = eax;
        g->edx = t212;
        g->esp = sp0 - 0x170u;
        t213 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, t212, loc_17c, loc_178, loc_174);
        t214 = g->edx;
        eax = t213;
        edx = t214;
        loc_164 = in_ebx;
        loc_168 = in_ebp;
        loc_16c = in_esi;
        loc_170 = in_edi;
        loc_15c = 0u;
    }
    else
    {
        eax = t208;
        edx = t207;
        loc_174 = t207;
        loc_178 = t208;
        loc_17c = t209;
    COW_AT(100c09fa)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        t210 = cow_thiscall(g, COW_IMG(0x1025b090u), self + 0x720u, 3, loc_17c, loc_178, loc_174);
        t211 = g->edx;
        eax = t210;
        edx = t211;
        loc_164 = in_ebx;
        loc_168 = in_ebp;
        loc_16c = in_esi;
        loc_170 = in_edi;
        loc_15c = 0u;
    }
    goto L_100c1041;
L_100c0a1c: ;
    COW_AT(100c0a1c)
    wr32(sp0 - 0x174u, sp0 - 0x146u);
    wr32(sp0 - 0x178u, sp0 - 0xe0u);
    wr32(sp0 - 0x17cu, arg1 + 1u);
    wr32(sp0 - 0x180u, self + 0x50u);
    g->ecx = sp0 - 0xe0u;
    g->edx = edx;
    g->esp = sp0 - 0x174u;
    t154 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x146u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xe0u);
    t155 = g->ecx;
    t156 = g->edx;
    t157 = arg1 + t154 + 1u;
    wr32(sp0 - 0x178u, t157);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t157, g->ecx, t156, 1, 3, self + 0x50u, t157, sp0 - 0x146u);
    t158 = g->edx;
    wr32(sp0 - 0x15cu, 0u);
    t159 = (uint32_t)(int16_t)rd16(sp0 - 0x146u);
    wr32(sp0 - 0x174u, t159);
    if ((uint8_t)ebx != 0x22u)
    {
        eax = t159;
        edx = t158;
        loc_174 = t159;
    COW_AT(100c0a66)
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x170u;
        t162 = cow_fastcall(g, COW_IMG(0x100c04a0u), self, edx, 2, sp0 - 0x15cu, loc_174);
        t163 = g->ecx;
        wr32(sp0 - 0x174u, 3u);
        eax = t162;
        ecx = t163;
        loc_174 = 3u;
    }
    else
    {
        eax = t159;
        loc_174 = t159;
    COW_AT(100c0a56)
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 0x170u;
        t160 = cow_stdcall(g, COW_IMG(0x100c0440u), 2, sp0 - 0x15cu, loc_174);
        t161 = g->ecx;
        wr32(sp0 - 0x174u, 2u);
        eax = t160;
        ecx = t161;
        loc_174 = 2u;
    }
    COW_AT(100c0a74)
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = (uint8_t)eax;
    g->esp = sp0 - 0x170u;
    t164 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x160u, loc_174);
    t165 = g->edx;
    wr8(sp0 - 0x15eu, 0u);
    if (t165 != 0u)
    {
        eax = t164;
        edx = t165;
        goto L_100c0aa1;
    }
    eax = t164;
    edx = t165;
    COW_AT(100c0a91)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t166 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t167 = g->edx;
    eax = t166;
    edx = t167;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0aa1: ;
    COW_AT(100c0aa1)
    if (rd32(sp0 - 0x15cu) == 0u) goto L_100c0fc3;
    edi = rd32(sp0 - 0x15cu);
    COW_AT(100c0aad)
    g->eax = eax;
    g->edx = rd32(edi);
    t168 = rd32(edi);
    g->esp = sp0 - 0x170u;
    t169 = cow_thiscall(g, rd32(t168 + 4u), edi, 0);
    t170 = g->edx;
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = t170;
    t171 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t172 = g->edx;
    if (rd8(sp0 - 0xe0u) != 0u)
    {
        eax = (t171 & 0xffffff00u) | rd8(sp0 - 0xe0u);
        edx = t172;
        ebx = t169;
    COW_AT(100c0afd)
        if ((uint8_t)eax != 1u)
        {
            eax = rd32(edi);
    COW_AT(100c0b2b)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x170u;
            t187 = cow_thiscall(g, rd32(eax + 0x1cu), edi, 0);
            t188 = g->edx;
            wr32(sp0 - 0x174u, t187);
            t189 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x158u, 1, t187);
            g->edx = rd32(edi);
            t190 = rd32(edi);
            t191 = cow_thiscall(g, rd32(t190 + 0x18u), edi, 0);
            t192 = g->edx;
            t193 = -(t191 != 0u) + 2u;
            wr32(sp0 - 0x174u, t193);
            g->eax = t193;
            g->edx = t192;
            t194 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t193);
            t195 = g->edx;
            wr32(sp0 - 0x178u, t194);
            g->eax = rd32(edi);
            t196 = rd32(edi);
            g->esp = sp0 - 0x178u;
            t197 = cow_thiscall(g, rd32(t196 + 0x14u), edi, 0);
            wr32(sp0 - 0x17cu, t197);
            g->edx = rd32(edi);
            t198 = rd32(edi);
            g->esp = sp0 - 0x17cu;
            t199 = cow_thiscall(g, rd32(t198 + 0x20u), edi, 0);
            t200 = g->edx;
            wr32(sp0 - 0x180u, t199);
            eax = t199;
            edx = t200;
            loc_178 = rd32(sp0 - 0x178u);
            loc_17c = rd32(sp0 - 0x17cu);
            loc_180 = t199;
        }
        else
        {
            eax = rd32(edi);
    COW_AT(100c0b03)
            wr32(sp0 - 0x174u, sp0 - 0x158u);
            g->eax = eax;
            g->esp = sp0 - 0x174u;
            t180 = cow_thiscall(g, rd32(eax + 0x10u), edi, 0);
            g->edx = rd32(edi);
            t181 = rd32(edi);
            g->esp = sp0 - 0x170u;
            t182 = cow_thiscall(g, rd32(t181 + 8u), edi, 1, sp0 - 0x158u);
            t183 = g->edx;
            t184 = -(t182 != 0u) + 2u;
            wr32(sp0 - 0x174u, t184);
            g->eax = t184;
            g->edx = t183;
            t185 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t184);
            t186 = g->edx;
            wr32(sp0 - 0x178u, t185);
            wr32(sp0 - 0x17cu, ebx);
            wr32(sp0 - 0x180u, 4u);
            eax = t185;
            edx = t186;
            loc_178 = t185;
            loc_17c = ebx;
            loc_180 = 4u;
        }
    }
    else
    {
        ebx = t169;
    COW_AT(100c0ad3)
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        g->eax = sp0 - 0x158u;
        g->esp = sp0 - 0x174u;
        t173 = cow_thiscall(g, rd32(rd32(edi) + 0xcu), edi, 0);
        g->edx = rd32(edi);
        t174 = rd32(edi);
        g->esp = sp0 - 0x170u;
        t175 = cow_thiscall(g, rd32(t174 + 8u), edi, 1, sp0 - 0x158u);
        t176 = g->edx;
        t177 = -(t175 != 0u) + 2u;
        wr32(sp0 - 0x174u, t177);
        g->eax = t177;
        g->edx = t176;
        t178 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t177);
        t179 = g->edx;
        wr32(sp0 - 0x178u, t178);
        wr32(sp0 - 0x17cu, ebx);
        wr32(sp0 - 0x180u, 3u);
        eax = t178;
        edx = t179;
        loc_178 = t178;
        loc_17c = ebx;
        loc_180 = 3u;
    }
    COW_AT(100c0b63)
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, loc_180, loc_17c, loc_178, rd32(sp0 - 0x174u));
    t201 = g->ecx;
    t202 = g->edx;
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = t202;
    t203 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x160u);
    t204 = g->edx;
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->edx = t204;
    t205 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t206 = g->edx;
    eax = t205;
    edx = t206;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0b8d: ;
    COW_AT(100c0b8d)
    wr32(sp0 - 0x174u, sp0 - 0x146u);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg1 + 1u);
    wr32(sp0 - 0x180u, self + 0x50u);
    g->ecx = ecx;
    g->esp = sp0 - 0x174u;
    t118 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, sp0 - 0x146u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t119 = g->ecx;
    t120 = g->edx;
    t121 = arg1 + t118 + 1u;
    wr32(sp0 - 0x178u, t121);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t121, g->ecx, t120, 1, 3, self + 0x50u, t121, sp0 - 0x146u);
    t122 = (uint32_t)(int16_t)rd16(sp0 - 0x146u);
    wr32(sp0 - 0x174u, t122);
    wr32(sp0 - 0x178u, sp0 - 0x15cu);
    t123 = (int16_t)rd16(sp0 - 0x148u) > 1;
    wr32(sp0 - 0x14cu, t123);
    g->ebx = self + 0x50u;
    g->eax = sp0 - 0x15cu;
    g->edx = t122;
    t124 = cow_stdcall(g, COW_IMG(0x100c0440u), 2, sp0 - 0x15cu, t122);
    t125 = g->edx;
    if ((uint8_t)t124 != 0u)
    {
        eax = t124;
        edx = t125;
        goto L_100c0be5;
    }
    eax = t124;
    edx = t125;
    COW_AT(100c0bd5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t126 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t127 = g->edx;
    eax = t126;
    edx = t127;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0be5: ;
    COW_AT(100c0be5)
    if (rd32(sp0 - 0x15cu) == 0u) goto L_100c0fc3;
    edi = rd32(sp0 - 0x15cu);
    COW_AT(100c0bf1)
    wr32(sp0 - 0x174u, 2u);
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    g->eax = eax;
    g->esp = sp0 - 0x170u;
    t128 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x160u, 2, sp0 - 0x160u, 2u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    wr8(sp0 - 0x15eu, 0u);
    g->edx = sp0 - 0x160u;
    cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t129 = g->edx;
    g->eax = rd32(edi);
    g->edx = t129;
    t130 = rd32(edi);
    g->esp = sp0 - 0x16cu;
    t131 = cow_thiscall(g, rd32(t130 + 4u), edi, 1, rd32(sp0 - 0x170u));
    t132 = g->edx;
    if (rd32(sp0 - 0x148u) != 0u)
    {
        edx = t132;
        ebx = t131;
    COW_AT(100c0c52)
        wr32(sp0 - 0x170u, sp0 - 0x154u);
        g->eax = rd32(edi);
        t140 = rd32(edi);
        g->esp = sp0 - 0x170u;
        t141 = cow_thiscall(g, rd32(t140 + 0x10u), edi, 0);
        g->edx = rd32(edi);
        t142 = rd32(edi);
        t143 = cow_thiscall(g, rd32(t142 + 8u), edi, 0);
        t144 = g->edx;
        t145 = -(t143 != 0u) + 2u;
        wr32(sp0 - 0x174u, t145);
        g->eax = t145;
        g->edx = t144;
        t146 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t145);
        t147 = g->edx;
        wr32(sp0 - 0x178u, t146);
        wr32(sp0 - 0x17cu, ebx);
        wr32(sp0 - 0x180u, 4u);
        eax = t146;
        edx = t147;
        loc_178 = t146;
        loc_17c = ebx;
        loc_180 = 4u;
    }
    else
    {
        ebx = t131;
    COW_AT(100c0c28)
        wr32(sp0 - 0x170u, sp0 - 0x154u);
        g->eax = sp0 - 0x154u;
        g->esp = sp0 - 0x170u;
        t133 = cow_thiscall(g, rd32(rd32(edi) + 0xcu), edi, 0);
        g->edx = rd32(edi);
        t134 = rd32(edi);
        t135 = cow_thiscall(g, rd32(t134 + 8u), edi, 0);
        t136 = g->edx;
        t137 = -(t135 != 0u) + 2u;
        wr32(sp0 - 0x174u, t137);
        g->eax = t137;
        g->edx = t136;
        t138 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t137);
        t139 = g->edx;
        wr32(sp0 - 0x178u, t138);
        wr32(sp0 - 0x17cu, ebx);
        wr32(sp0 - 0x180u, 3u);
        eax = t138;
        edx = t139;
        loc_178 = t138;
        loc_17c = ebx;
        loc_180 = 3u;
    }
    COW_AT(100c0c7a)
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, loc_180, loc_17c, loc_178, rd32(sp0 - 0x174u));
    t148 = g->ecx;
    t149 = g->edx;
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = t149;
    t150 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x160u);
    t151 = g->edx;
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->edx = t151;
    t152 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t153 = g->edx;
    eax = t152;
    edx = t153;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = sp0 - 0x154u;
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0ca4: ;
    COW_AT(100c0ca4)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->ecx = ecx;
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t83 = g->ecx;
    t84 = g->edx;
    if ((uint32_t)(int16_t)rd16(sp0 - 0x148u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
        ecx = t83;
        edx = t84;
        goto L_100c0cd0;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    edx = t84;
    COW_AT(100c0cc0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t85 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t86 = g->edx;
    eax = t85;
    edx = t86;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0cd0: ;
    COW_AT(100c0cd0)
    wr32(sp0 - 0x174u, self + 0x754u);
    wr32(sp0 - 0x178u, eax);
    g->esp = sp0 - 0x170u;
    t87 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, edx, 1, 2, eax, self + 0x754u);
    t88 = g->edx;
    g->edx = t88;
    t89 = cow_thiscall(g, COW_IMG(0x10154a40u), t87, 2, rd32(sp0 - 0x178u), self + 0x754u);
    t90 = g->edx;
    if ((uint8_t)t89 == 0u)
    {
        eax = t89;
        edx = t90;
        goto L_100c0fc3;
    }
    eax = t89;
    edx = t90;
    COW_AT(100c0cec)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t91 = cow_thiscall(g, COW_IMG(0x101554f0u), self + 0x754u, 0);
    t92 = g->edx;
    if (t91 != 0u)
    {
        eax = t91;
        edx = t92;
    COW_AT(100c0d03)
        wr32(sp0 - 0x174u, 2u);
        loc_174 = 2u;
    }
    else
    {
        eax = t91;
        edx = t92;
    COW_AT(100c0cff)
        wr32(sp0 - 0x174u, 1u);
        loc_174 = 1u;
    }
    COW_AT(100c0d05)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t93 = cow_thiscall(g, COW_IMG(0x1025b200u), self + 0x720u, 1, loc_174);
    t94 = g->edx;
    g->edx = t94;
    t95 = cow_thiscall(g, COW_IMG(0x1025aeb0u), self + 0x720u, 0);
    t96 = g->edx;
    wr32(sp0 - 0x174u, 3u);
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    t97 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x160u, 2, sp0 - 0x160u, 3u);
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->edx = sp0 - 0x160u;
    cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t98 = g->edx;
    g->eax = rd32(self + 0x754u);
    t99 = rd32(self + 0x754u);
    t100 = cow_thiscall(g, rd32(t99 + 8u), self + 0x754u, 0);
    g->edx = rd32(t100);
    t101 = rd32(t100);
    t102 = cow_thiscall(g, rd32(t101 + 0x18u), t100, 0);
    t103 = g->edx;
    t104 = -(t102 != 0u) + 2u;
    wr32(sp0 - 0x174u, t104);
    g->eax = rd32(t100);
    t105 = rd32(t100);
    g->esp = sp0 - 0x174u;
    t106 = cow_thiscall(g, rd32(t105 + 0x1cu), t100, 0);
    wr32(sp0 - 0x178u, t106);
    g->edx = rd32(t100);
    t107 = rd32(t100);
    g->esp = sp0 - 0x178u;
    t108 = cow_thiscall(g, rd32(t107 + 0x14u), t100, 0);
    t109 = g->edx;
    wr32(sp0 - 0x17cu, t108);
    g->eax = rd32(t100);
    g->edx = t109;
    t110 = rd32(t100);
    g->esp = sp0 - 0x17cu;
    t111 = cow_thiscall(g, rd32(t110 + 0x20u), t100, 0);
    t112 = g->edx;
    wr32(sp0 - 0x180u, t111);
    g->edx = t112;
    g->esp = sp0 - 0x170u;
    t113 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, t111, rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u));
    t114 = g->edx;
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    t115 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x160u);
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->edx = sp0 - 0x160u;
    t116 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t117 = g->edx;
    eax = t116;
    edx = t117;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0d8b: ;
    COW_AT(100c0d8b)
    if ((uint8_t)ebx == 0x26u)
    {
        edi = arg1 + 1u;
    }
    else
    {
    COW_AT(100c0d91)
        wr32(sp0 - 0x174u, sp0 - 0xe0u);
        wr32(sp0 - 0x178u, arg1 + 1u);
        wr32(sp0 - 0x17cu, self + 0x50u);
        g->ecx = self + 0x50u;
        g->esp = sp0 - 0x170u;
        t62 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0xe0u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xe0u);
        t63 = g->ecx;
        ecx = t63;
        edi = arg1 + t62 + 1u;
    }
    COW_AT(100c0da8)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, edi);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, edi, sp0 - 0x148u);
    t64 = g->edx;
    if ((uint8_t)ebx != 0x26u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
        edx = t64;
        goto L_100c0e10;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    edx = t64;
    COW_AT(100c0dc4)
    if (eax != 0u) goto L_100c0dd8;
    COW_AT(100c0dc8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t65 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t66 = g->edx;
    eax = t65;
    edx = t66;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0dd8: ;
    COW_AT(100c0dd8)
    wr32(sp0 - 0x174u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t67 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t68 = g->edx;
    if (t67 == 0u)
    {
        eax = t67;
        edx = t68;
        goto L_100c0fc3;
    }
    eax = t67;
    edx = t68;
    COW_AT(100c0dec)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t69 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t70 = g->edx;
    if (t69 != 0u)
    {
        eax = t69;
        goto L_100c0e07;
    }
    eax = t69;
    edx = t70;
    COW_AT(100c0df7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t71 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0e07: ;
    COW_AT(100c0e07)
    g->eax = eax;
    g->edx = rd32(eax);
    t73 = rd32(eax);
    g->esp = sp0 - 0x170u;
    t74 = cow_thiscall(g, rd32(t73 + 4u), eax, 0);
    t75 = g->edx;
    eax = t74;
    edx = t75;
L_100c0e42: ;
    COW_AT(100c0e42)
    if (eax != 0u)
    {
    COW_AT(100c0e58)
        wr8(self + 0x6edu, 1u);
        wr8(self + 0x6ecu, 1u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_170 = rd32(sp0 - 0x170u);
        loc_15c = rd32(sp0 - 0x15cu);
    }
    else
    {
    COW_AT(100c0e46)
        wr8(self + 0x6edu, (uint8_t)eax);
        wr8(self + 0x6ecu, 1u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_170 = rd32(sp0 - 0x170u);
        loc_15c = rd32(sp0 - 0x15cu);
    }
    goto L_100c1041;
L_100c0e10: ;
    COW_AT(100c0e10)
    wr32(sp0 - 0x174u, eax);
    wr32(sp0 - 0x178u, sp0 - 0x15cu);
    g->ebx = ebx;
    g->eax = sp0 - 0x15cu;
    g->esp = sp0 - 0x170u;
    t76 = cow_fastcall(g, COW_IMG(0x100c04a0u), self, edx, 2, sp0 - 0x15cu, eax);
    t77 = g->edx;
    if ((uint8_t)t76 != 0u)
    {
        eax = t76;
        edx = t77;
        goto L_100c0e31;
    }
    eax = t76;
    edx = t77;
    COW_AT(100c0e21)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t78 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t79 = g->edx;
    eax = t78;
    edx = t79;
    loc_164 = rd32(sp0 - 0x164u);
    loc_168 = rd32(sp0 - 0x168u);
    loc_16c = rd32(sp0 - 0x16cu);
    loc_170 = rd32(sp0 - 0x170u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_100c1041;
L_100c0e31: ;
    COW_AT(100c0e31)
    if (rd32(sp0 - 0x15cu) == 0u) goto L_100c0fc3;
    ecx = rd32(sp0 - 0x15cu);
    COW_AT(100c0e3d)
    g->eax = eax;
    g->edx = rd32(ecx);
    t80 = rd32(ecx);
    g->esp = sp0 - 0x170u;
    t81 = cow_thiscall(g, rd32(t80 + 0x14u), ecx, 0);
    t82 = g->edx;
    eax = t81;
    edx = t82;
    goto L_100c0e42;
L_100c0e6b: ;
    COW_AT(100c0e6b)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, sp0 - 0xe0u);
    wr32(sp0 - 0x17cu, arg1 + 1u);
    wr32(sp0 - 0x180u, self + 0x50u);
    g->ecx = sp0 - 0xe0u;
    g->edx = edx;
    g->esp = sp0 - 0x174u;
    t27 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x148u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xe0u);
    t28 = g->ecx;
    t29 = g->edx;
    t30 = arg1 + t27 + 1u;
    wr32(sp0 - 0x178u, t30);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t30, g->ecx, t29, 1, 3, self + 0x50u, t30, sp0 - 0x148u);
    t31 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x174u, t31);
    g->eax = t31;
    g->edx = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    t32 = rd16(sp0 - 0x148u);
    t33 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t31);
    t34 = g->edx;
    if (t33 == 0u)
    {
        eax = t33;
        edx = t34;
        goto L_100c0fc3;
    }
    eax = t33;
    edx = t34;
    edi = t33;
    COW_AT(100c0eb6)
    wr32(sp0 - 0x174u, 0u);
    wr32(sp0 - 0x178u, edi);
    wr32(sp0 - 0x17cu, sp0 - 0x90u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x178u;
    t35 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0x90u);
    t36 = g->edx;
    g->edx = t36;
    g->esp = sp0 - 0x170u;
    t37 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x178u), 0u);
    t38 = g->edx;
    t39 = cow_call_regs(g, COW_IMG(0x10257b40u), t37, sp0 - 0x90u, t38, 1, 0);
    wr32(sp0 - 0x174u, 1u);
    wr32(sp0 - 0x178u, edi);
    wr32(sp0 - 0x17cu, sp0 - 0xd0u);
    g->edx = sp0 - 0xd0u;
    g->esp = sp0 - 0x178u;
    t40 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xd0u);
    t41 = g->edx;
    g->edx = t41;
    g->esp = sp0 - 0x170u;
    t42 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x178u), 1u);
    t43 = g->edx;
    t44 = cow_call_regs(g, COW_IMG(0x10257b40u), t42, sp0 - 0xd0u, t43, 1, 0);
    t45 = g->edx;
    if ((int8_t)rd8(sp0 - 0xe0u) >= 1)
    {
        eax = t44;
        edx = t45;
        ebx = t42;
        ebp = t37;
    COW_AT(100c0f53)
        wr32(sp0 - 0x174u, 3u);
        wr32(sp0 - 0x178u, edi);
        wr32(sp0 - 0x17cu, sp0 - 0xa0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x178u;
        t54 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xa0u);
        t55 = g->edx;
        g->edx = t55;
        g->esp = sp0 - 0x170u;
        t56 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x178u), 3u);
        t57 = g->edx;
        t58 = cow_call_regs(g, COW_IMG(0x10257b40u), t56, sp0 - 0xa0u, t57, 1, 0);
        t59 = g->edx;
        wr32(sp0 - 0x174u, ebx);
        wr32(sp0 - 0x178u, t56);
        wr32(sp0 - 0x17cu, ebp);
        wr32(sp0 - 0x180u, 4u);
        g->edx = t59;
        t60 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, 4u, ebp, t56, ebx);
        t61 = g->edx;
        eax = t60;
        edx = t61;
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_170 = rd32(sp0 - 0x170u);
        loc_15c = rd32(sp0 - 0x15cu);
    }
    else
    {
        edx = t45;
        ebx = t42;
        ebp = t37;
    COW_AT(100c0f14)
        wr32(sp0 - 0x174u, 2u);
        wr32(sp0 - 0x178u, edi);
        wr32(sp0 - 0x17cu, sp0 - 0xc0u);
        g->eax = sp0 - 0xc0u;
        g->edx = edx;
        g->esp = sp0 - 0x178u;
        t46 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xc0u);
        t47 = g->edx;
        g->edx = t47;
        g->esp = sp0 - 0x170u;
        t48 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x178u), 2u);
        t49 = g->edx;
        t50 = cow_call_regs(g, COW_IMG(0x10257b40u), t48, sp0 - 0xc0u, t49, 1, 0);
        t51 = g->edx;
        wr32(sp0 - 0x174u, ebx);
        wr32(sp0 - 0x178u, t48);
        wr32(sp0 - 0x17cu, ebp);
        wr32(sp0 - 0x180u, 3u);
        g->edx = t51;
        t52 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, 3u, ebp, t48, ebx);
        t53 = g->edx;
        eax = t52;
        edx = t53;
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_170 = rd32(sp0 - 0x170u);
        loc_15c = rd32(sp0 - 0x15cu);
    }
    goto L_100c1041;
L_100c0f92: ;
    COW_AT(100c0f92)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t18 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x174u, t18);
    g->eax = t18;
    g->edx = rd32(self + 4u);
    t19 = rd32(self + 4u);
    t20 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t18);
    t21 = g->edx;
    if (t20 != 0u)
    {
        eax = t20;
        edx = t21;
        goto L_100c0ff6;
    }
    eax = t20;
    edx = t21;
L_100c0fc3: ;
    COW_AT(100c0fc3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t257 = cow_thiscall(g, COW_IMG(0x10258b00u), sp0 - 0xfcu, 0);
    t258 = g->edx;
    g->edx = t258;
    t259 = cow_thiscall(g, COW_IMG(0x10258a20u), sp0 - 0x11cu, 0);
    t260 = g->edx;
    t261 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x128u, t260, 0);
    t262 = g->edx;
    t263 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x158u, t262, 0);
    g->ebx = rd32(sp0 - 0x164u);
    g->esi = rd32(sp0 - 0x16cu);
    g->edi = rd32(sp0 - 0x170u);
    g->ebp = rd32(sp0 - 0x168u);
    return t263 & 0xffffff00u;
L_100c0ff6: ;
    COW_AT(100c0ff6)
    wr32(sp0 - 0x174u, 0u);
    wr32(sp0 - 0x178u, eax);
    wr32(sp0 - 0x17cu, sp0 - 0xb0u);
    g->eax = sp0 - 0xb0u;
    g->edx = edx;
    g->esp = sp0 - 0x178u;
    t22 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xb0u);
    t23 = g->edx;
    g->edx = t23;
    g->esp = sp0 - 0x170u;
    t24 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x178u), 0u);
    t25 = g->edx;
    cow_call_regs(g, COW_IMG(0x10257b40u), t24, sp0 - 0xb0u, t25, 1, 0);
    t26 = g->edx;
    wr8(self + 0x6ecu, 1u);
    if (t24 == 0u)
    {
        eax = t24;
        edx = t26;
    COW_AT(100c103a)
        wr8(self + 0x6edu, 0u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_168 = rd32(sp0 - 0x168u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_170 = rd32(sp0 - 0x170u);
        loc_15c = rd32(sp0 - 0x15cu);
    }
    else
    {
        eax = t24;
        edx = t26;
    COW_AT(100c102e)
        if (eax != 1u)
        {
            eax = eax - 1u;
            loc_164 = rd32(sp0 - 0x164u);
            loc_168 = rd32(sp0 - 0x168u);
            loc_16c = rd32(sp0 - 0x16cu);
            loc_170 = rd32(sp0 - 0x170u);
            loc_15c = rd32(sp0 - 0x15cu);
        }
        else
        {
            eax = eax - 1u;
    COW_AT(100c1031)
            wr8(self + 0x6edu, 1u);
            loc_164 = rd32(sp0 - 0x164u);
            loc_168 = rd32(sp0 - 0x168u);
            loc_16c = rd32(sp0 - 0x16cu);
            loc_170 = rd32(sp0 - 0x170u);
            loc_15c = rd32(sp0 - 0x15cu);
        }
    }
    goto L_100c1041;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c0500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c053eu:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebx = 0u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c056cu:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebx = 0u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c057du:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0588u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c059au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c05a9u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c05bbu:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c05cdu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c05deu:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c05f0u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0600u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0612u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0623u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0635u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0647u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0664u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0675u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c06a6u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c06eeu:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0752u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0791u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c07d0u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c07e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_180;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x180u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0801u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0823u:
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
        uint32_t loc_15c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0844u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0847u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c084au:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c085bu:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c086cu:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0873u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0877u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c08b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c08c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c08ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x170u;
        g->edi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0939u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c098bu:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x17cu, sp0 - 0x11cu);
        (void)sp0;
        return 1;
    }
    case 0x100c09a0u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c09b3u:
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
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c09c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        g->ebp = 1u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c09e1u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c09fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        g->ecx = self + 0x720u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0a04u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        g->ecx = self + 0x720u;
        g->ebp = 1u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0a1cu:
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
        uint32_t loc_15c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0a56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x174u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0a66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x174u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0a74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x174u;
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x100c0a91u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0aa1u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0aadu:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0ad3u:
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
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0afdu:
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
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0b03u:
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
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0b2bu:
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
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0b63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        g->esp = sp0 - 0x180u;
        g->ebp = self + 0x720u;
        (void)sp0;
        return 1;
    }
    case 0x100c0b8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0bd5u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x100c0be5u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x100c0bf1u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x100c0c28u:
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
        g->esp = sp0 - 0x16cu;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c52u:
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
        g->esp = sp0 - 0x16cu;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        g->esp = sp0 - 0x180u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x170u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x100c0ca4u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0cc0u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0cd0u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0cecu:
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
        g->esp = sp0 - 0x170u;
        g->edi = self + 0x754u;
        (void)sp0;
        return 1;
    }
    case 0x100c0cffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->ecx = self + 0x720u;
        g->ebp = self + 0x720u;
        g->edi = self + 0x754u;
        (void)sp0;
        return 1;
    }
    case 0x100c0d03u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->ecx = self + 0x720u;
        g->ebp = self + 0x720u;
        g->edi = self + 0x754u;
        (void)sp0;
        return 1;
    }
    case 0x100c0d05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x174u;
        g->ecx = self + 0x720u;
        g->ebp = self + 0x720u;
        g->edi = self + 0x754u;
        (void)sp0;
        return 1;
    }
    case 0x100c0d8bu:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0d91u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1 + 1u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0da8u:
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
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0dc4u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0dc8u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0dd8u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0decu:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c0df7u:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c0e07u:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c0e10u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0e21u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x100c0e31u:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x100c0e3du:
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
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x100c0e42u:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c0e46u:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c0e58u:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c0e6bu:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0eb6u:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c0f14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x17cu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x17cu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f92u:
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
        in_edi = rd32(sp0 - 0x170u);
        in_esi = rd32(sp0 - 0x16cu);
        in_ebp = rd32(sp0 - 0x168u);
        in_ebx = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        wr32(sp0 - 0x15cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0fc3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_15c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c0ff6u:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c102eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x17cu, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100c1031u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x17cu, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100c103au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x17cu, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100c1041u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_15c;
        uint32_t loc_164;
        uint32_t loc_168;
        uint32_t loc_16c;
        uint32_t loc_170;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_170 = rd32(sp0 - 0x170u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_168 = rd32(sp0 - 0x168u);
        loc_164 = rd32(sp0 - 0x164u);
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c1052u:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c106cu:
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
        g->esp = sp0 - 0x170u;
        g->edi = self + 0x720u;
        (void)sp0;
        return 1;
    }
    case 0x100c10a9u:
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c0500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100c0500(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
