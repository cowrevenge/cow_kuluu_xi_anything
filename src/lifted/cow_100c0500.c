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
    uint32_t t347;
    uint32_t t348;
    uint32_t t349;
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
    case 0x100c0515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x170u); in_esi = rd32(sp0 - 0x16cu); in_ebp = rd32(sp0 - 0x168u); in_ebx = rd32(sp0 - 0x164u); g->ebp = rd32(sp0 - 0x168u); g->ebx = rd32(sp0 - 0x164u); g->edi = rd32(sp0 - 0x170u); g->esi = rd32(sp0 - 0x16cu); goto E_100c0515;
    case 0x100c051eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c051e;
    case 0x100c052du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c052d;
    case 0x100c0536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0536;
    case 0x100c053eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c053e;
    case 0x100c0558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c0558;
    case 0x100c056cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c056c;
    case 0x100c057du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c057d;
    case 0x100c0588u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0588;
    case 0x100c059au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c059a;
    case 0x100c05a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c05a9;
    case 0x100c05b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c05b6;
    case 0x100c05bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c05bb;
    case 0x100c05c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c05c8;
    case 0x100c05cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c05cd;
    case 0x100c05d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c05d9;
    case 0x100c05deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c05de;
    case 0x100c05ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c05eb;
    case 0x100c05f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c05f0;
    case 0x100c05fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c05fb;
    case 0x100c0600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0600;
    case 0x100c060du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c060d;
    case 0x100c0612u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0612;
    case 0x100c061eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c061e;
    case 0x100c0623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0623;
    case 0x100c0630u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0630;
    case 0x100c0635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0635;
    case 0x100c0642u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0642;
    case 0x100c0647u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0647;
    case 0x100c0657u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0657;
    case 0x100c0664u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0664;
    case 0x100c0670u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0670;
    case 0x100c0675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0675;
    case 0x100c068bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_178 = rd32(sp0 - 0x178u); goto E_100c068b;
    case 0x100c06a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c06a1;
    case 0x100c06a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c06a6;
    case 0x100c06b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c06b6;
    case 0x100c06d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c06d9;
    case 0x100c06e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c06e9;
    case 0x100c06eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c06ee;
    case 0x100c0703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c0703;
    case 0x100c070fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c070f;
    case 0x100c0732u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0732;
    case 0x100c0741u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0741;
    case 0x100c074du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c074d;
    case 0x100c0752u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0752;
    case 0x100c0762u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0762;
    case 0x100c0780u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0780;
    case 0x100c078cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c078c;
    case 0x100c0791u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0791;
    case 0x100c07a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c07a1;
    case 0x100c07bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c07bf;
    case 0x100c07cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c07cb;
    case 0x100c07d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c07d0;
    case 0x100c07e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c07e0;
    case 0x100c07e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_100c07e6;
    case 0x100c07edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c07ed;
    case 0x100c07fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c07fc;
    case 0x100c0801u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0801;
    case 0x100c0811u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0811;
    case 0x100c0823u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0823;
    case 0x100c0833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0833;
    case 0x100c0844u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0844;
    case 0x100c0847u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0847;
    case 0x100c084au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c084a;
    case 0x100c085bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c085b;
    case 0x100c086cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c086c;
    case 0x100c0873u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0873;
    case 0x100c0877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0877;
    case 0x100c0891u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0891;
    case 0x100c08a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c08a4;
    case 0x100c08b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c08b0;
    case 0x100c08bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c08bb;
    case 0x100c08c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c08c0;
    case 0x100c08ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c08cc;
    case 0x100c08d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c08d3;
    case 0x100c08e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c08e7;
    case 0x100c08f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c08f3;
    case 0x100c08fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c08fa;
    case 0x100c090bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c090b;
    case 0x100c0916u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_100c0916;
    case 0x100c0920u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0920;
    case 0x100c0934u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0934;
    case 0x100c0939u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0939;
    case 0x100c094eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c094e;
    case 0x100c095au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c095a;
    case 0x100c0983u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0983;
    case 0x100c098bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c098b;
    case 0x100c099bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c099b;
    case 0x100c09a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c09a0;
    case 0x100c09b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); goto E_100c09b3;
    case 0x100c09beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c09be;
    case 0x100c09c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); goto E_100c09c3;
    case 0x100c09dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c09dc;
    case 0x100c09e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c09e1;
    case 0x100c09fau: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); goto E_100c09fa;
    case 0x100c09ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c09ff;
    case 0x100c0a04u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); goto E_100c0a04;
    case 0x100c0a17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0a17;
    case 0x100c0a1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0a1c;
    case 0x100c0a34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0a34;
    case 0x100c0a40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0a40;
    case 0x100c0a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0a56;
    case 0x100c0a62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0a62;
    case 0x100c0a66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0a66;
    case 0x100c0a72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0a72;
    case 0x100c0a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0a74;
    case 0x100c0a85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0a85;
    case 0x100c0a91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0a91;
    case 0x100c0a9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0a9c;
    case 0x100c0aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0aa1;
    case 0x100c0aadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0aad;
    case 0x100c0ab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0ab4;
    case 0x100c0ac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0ac8;
    case 0x100c0ad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0ad3;
    case 0x100c0adfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0adf;
    case 0x100c0ae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0ae6;
    case 0x100c0af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0af7;
    case 0x100c0afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0afd;
    case 0x100c0b03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b03;
    case 0x100c0b0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b0d;
    case 0x100c0b14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b14;
    case 0x100c0b25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b25;
    case 0x100c0b2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b2b;
    case 0x100c0b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b30;
    case 0x100c0b3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b3a;
    case 0x100c0b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b41;
    case 0x100c0b52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b52;
    case 0x100c0b5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b5a;
    case 0x100c0b62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b62;
    case 0x100c0b63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); goto E_100c0b63;
    case 0x100c0b6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b6a;
    case 0x100c0b74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0b74;
    case 0x100c0b88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0b88;
    case 0x100c0b8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0b8d;
    case 0x100c0ba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c0ba2;
    case 0x100c0baeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100c0bae;
    case 0x100c0bd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0bd1;
    case 0x100c0bd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0bd5;
    case 0x100c0be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0be0;
    case 0x100c0be5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0be5;
    case 0x100c0bf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0bf1;
    case 0x100c0bfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0bfd;
    case 0x100c0c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c17;
    case 0x100c0c1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c1e;
    case 0x100c0c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c28;
    case 0x100c0c34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c34;
    case 0x100c0c3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c3b;
    case 0x100c0c4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c4c;
    case 0x100c0c52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c52;
    case 0x100c0c5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c5e;
    case 0x100c0c65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c65;
    case 0x100c0c76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c76;
    case 0x100c0c7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); goto E_100c0c7a;
    case 0x100c0c81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c81;
    case 0x100c0c8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0c8b;
    case 0x100c0c9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0c9f;
    case 0x100c0ca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0ca4;
    case 0x100c0cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0cb4;
    case 0x100c0cc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0cc0;
    case 0x100c0ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0ccb;
    case 0x100c0cd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0cd0;
    case 0x100c0cddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0cdd;
    case 0x100c0ce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0ce4;
    case 0x100c0cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0cec;
    case 0x100c0cf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0cf3;
    case 0x100c0cffu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0cff;
    case 0x100c0d03u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0d03;
    case 0x100c0d05u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0d05;
    case 0x100c0d0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0d0a;
    case 0x100c0d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0d11;
    case 0x100c0d1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0d1d;
    case 0x100c0d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0d31;
    case 0x100c0d38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0d38;
    case 0x100c0d41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0d41;
    case 0x100c0d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0d50;
    case 0x100c0d58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0d58;
    case 0x100c0d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0d60;
    case 0x100c0d68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0d68;
    case 0x100c0d72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100c0d72;
    case 0x100c0d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0d86;
    case 0x100c0d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0d8b;
    case 0x100c0d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0d91;
    case 0x100c0da3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0da3;
    case 0x100c0da8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_174 = rd32(sp0 - 0x174u); goto E_100c0da8;
    case 0x100c0db7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0db7;
    case 0x100c0dc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0dc4;
    case 0x100c0dc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0dc8;
    case 0x100c0dd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0dd3;
    case 0x100c0dd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0dd8;
    case 0x100c0de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0de4;
    case 0x100c0decu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0dec;
    case 0x100c0df3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0df3;
    case 0x100c0df7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0df7;
    case 0x100c0e02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e02;
    case 0x100c0e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e07;
    case 0x100c0e0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e0e;
    case 0x100c0e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e10;
    case 0x100c0e1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e1d;
    case 0x100c0e21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e21;
    case 0x100c0e2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e2c;
    case 0x100c0e31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e31;
    case 0x100c0e3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e3d;
    case 0x100c0e42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_178 = rd32(sp0 - 0x178u); goto E_100c0e42;
    case 0x100c0e46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_178 = rd32(sp0 - 0x178u); goto E_100c0e46;
    case 0x100c0e58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_178 = rd32(sp0 - 0x178u); goto E_100c0e58;
    case 0x100c0e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0e6b;
    case 0x100c0e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100c0e83;
    case 0x100c0e8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0e8f;
    case 0x100c0eacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0eac;
    case 0x100c0eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0eb6;
    case 0x100c0ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0ecb;
    case 0x100c0ed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0ed2;
    case 0x100c0ee0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0ee0;
    case 0x100c0ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0ef5;
    case 0x100c0efcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0efc;
    case 0x100c0f0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0f0a;
    case 0x100c0f14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0f14;
    case 0x100c0f29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0f29;
    case 0x100c0f30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0f30;
    case 0x100c0f3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0f3e;
    case 0x100c0f4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_100c0f4e;
    case 0x100c0f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0f53;
    case 0x100c0f68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0f68;
    case 0x100c0f6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0f6f;
    case 0x100c0f7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0f7d;
    case 0x100c0f8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_100c0f8d;
    case 0x100c0f92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c0f92;
    case 0x100c0fa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0fa2;
    case 0x100c0fbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0fbf;
    case 0x100c0fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); goto E_100c0fc3;
    case 0x100c0fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c0fcc;
    case 0x100c0fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c0fd5;
    case 0x100c0fdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c0fde;
    case 0x100c0fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c0fe7;
    case 0x100c0ff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c0ff6;
    case 0x100c100bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c100b;
    case 0x100c1012u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c1012;
    case 0x100c1020u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c1020;
    case 0x100c102eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c102e;
    case 0x100c1031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c1031;
    case 0x100c103au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c103a;
    case 0x100c1041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); goto E_100c1041;
    case 0x100c104eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c104e;
    case 0x100c1052u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c1052;
    case 0x100c106cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c106c;
    case 0x100c1078u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c1078;
    case 0x100c107fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c107f;
    case 0x100c108cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c108c;
    case 0x100c1099u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c1099;
    case 0x100c10a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c10a9;
    case 0x100c10b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c10b2;
    case 0x100c10bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c10bb;
    case 0x100c10c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c10c4;
    case 0x100c10cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c10cd;
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
    COW_RET(0x100c0515u);
    t1 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x158u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100c0515)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c051eu);
    t3 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x128u, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(100c051e)
    wr32(sp0 - 0x15cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c052du);
    t5 = cow_thiscall(g, COW_IMG(0x10258a60u), sp0 - 0x11cu, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(100c052d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0536u);
    t7 = cow_thiscall(g, COW_IMG(0x10258b50u), sp0 - 0xfcu, 0);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(100c0536)
    t10 = rd32(self + 0x6f0u);
    if (t10 != 0u)
    {
    COW_AT(100c053e)
        wr32(sp0 - 0x174u, self + 0x110u);
        t11 = rd32(self + 0x704u);
        wr8(t11, 0u);
        g->eax = t11;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0558u);
        t12 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, rd32(sp0 - 0x174u));
        t13 = g->edx;
        eax = t12;
        edx = t13;
    COW_AT(100c0558)
        t14 = rd32(self + 0x6f0u);
        wr8(self + 0x110u, 0u);
        wr32(self + 0x704u, t14);
        wr32(self + 0x6f0u, 0u);
        ecx = t14;
    }
    COW_AT(100c056c)
    t15 = rd8(arg1);
    wr8(sp0 - 0x14cu, (uint8_t)t15);
    if ((uint8_t)t15 != 0u)
    {
        ebx = t15;
    }
    else
    {
        ebx = t15;
    COW_AT(100c057d)
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0588u);
        cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
    }
    COW_AT(100c0588)
    if ((uint32_t)(int8_t)rd8(arg1) - 1u > 0x34u)
    {
        eax = (uint32_t)(int8_t)rd8(arg1) - 1u;
        goto L_100c1041;
    }
    eax = (uint32_t)(int8_t)rd8(arg1) - 1u;
    COW_AT(100c059a)
    t18 = rd32(COW_IMG(0x100c10dcu) + rd8(COW_IMG(0x100c114cu) + eax) * 4u);
    switch (t18 - RD)
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
    case 0x100c1041u: edx = rd8(COW_IMG(0x100c114cu) + eax); goto L_100c1041;
    default: rt_fatal(g, COW_IMG(0x100c05a2u), "switch");
    }
    return 0;
L_100c05a9: ;
    COW_AT(100c05a9)
    wr32(sp0 - 0x174u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c05b6u);
    t328 = cow_thiscall(g, COW_IMG(0x1025b200u), self + 0x720u, 1, 2u);
    t329 = g->edx;
    eax = t328;
    edx = t329;
    COW_AT(100c05b6)
L_100c1041: ;
    COW_AT(100c1041)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c104eu);
    t330 = cow_thiscall(g, COW_IMG(0x1025aab0u), self + 0x720u, 0);
    t331 = g->edx;
    eax = t330;
    edx = t331;
    COW_AT(100c104e)
    if (eax != 0u)
    {
    COW_AT(100c106c)
        wr32(sp0 - 0x174u, sp0 - 0x128u);
        g->eax = sp0 - 0x128u;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c1078u);
        t333 = cow_thiscall(g, COW_IMG(0x1025aac0u), self + 0x720u, 1, sp0 - 0x128u);
        t334 = g->edx;
        eax = t333;
        edx = t334;
    COW_AT(100c1078)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c107fu);
        t335 = cow_thiscall(g, COW_IMG(0x1025a840u), self + 0x720u, 0);
        t336 = g->edx;
        eax = t335;
        edx = t336;
    COW_AT(100c107f)
        t337 = rd32(self + 0xcu);
        wr32(sp0 - 0x174u, t337);
        g->eax = eax;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c108cu);
        t338 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x128u, 1, t337);
        t339 = g->ecx;
        eax = t338;
        ecx = t339;
    COW_AT(100c108c)
        wr32(sp0 - 0x178u, eax);
        t340 = rd32(self + 0x704u);
        wr32(sp0 - 0x17cu, t340);
        g->edx = t340;
        g->esp = sp0 - 0x158u;
        t341 = cow_call_regs(g, COW_IMG(0x100c2bf0u), eax, ecx, g->edx, 1, 9, t340, eax, rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu));
        t342 = g->edx;
        eax = t341;
        edx = t342;
    COW_AT(100c1099)
        wr32(self + 0x704u, eax);
        wr32(self + 0xcu, 0u);
    }
    else
    {
    COW_AT(100c1052)
        t332 = rd32(self + 0x704u);
        wr32(self + 0x6f0u, t332);
        wr32(self + 0x704u, self + 0x110u);
        edx = self + 0x110u;
    }
    COW_AT(100c10a9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c10b2u);
    t343 = cow_thiscall(g, COW_IMG(0x10258b00u), sp0 - 0xfcu, 0);
    t344 = g->edx;
    eax = t343;
    edx = t344;
    COW_AT(100c10b2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c10bbu);
    t345 = cow_thiscall(g, COW_IMG(0x10258a20u), sp0 - 0x11cu, 0);
    t346 = g->edx;
    eax = t345;
    edx = t346;
    COW_AT(100c10bb)
    g->eax = eax;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c10c4u);
    t347 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x128u, edx, 0);
    t348 = g->edx;
    eax = t347;
    edx = t348;
    COW_AT(100c10c4)
    g->eax = eax;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c10cdu);
    t349 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x158u, edx, 0);
    eax = t349;
    COW_AT(100c10cd)
    g->ebx = rd32(sp0 - 0x164u);
    g->esi = rd32(sp0 - 0x16cu);
    g->edi = rd32(sp0 - 0x170u);
    g->ebp = rd32(sp0 - 0x168u);
    return (eax & 0xffffff00u) | 1u;
L_100c05bb: ;
    COW_AT(100c05bb)
    wr32(sp0 - 0x174u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c05c8u);
    t326 = cow_thiscall(g, COW_IMG(0x1025b270u), self + 0x720u, 1, 0u);
    t327 = g->edx;
    eax = t326;
    edx = t327;
    COW_AT(100c05c8)
    goto L_100c1041;
L_100c05cd: ;
    COW_AT(100c05cd)
    wr32(sp0 - 0x174u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c05d9u);
    t324 = cow_thiscall(g, COW_IMG(0x1025b270u), self + 0x720u, 1, 1u);
    t325 = g->edx;
    eax = t324;
    edx = t325;
    COW_AT(100c05d9)
    goto L_100c1041;
L_100c05de: ;
    COW_AT(100c05de)
    wr32(sp0 - 0x174u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c05ebu);
    t322 = cow_thiscall(g, COW_IMG(0x1025b270u), self + 0x720u, 1, 2u);
    t323 = g->edx;
    eax = t322;
    edx = t323;
    COW_AT(100c05eb)
    goto L_100c1041;
L_100c05f0: ;
    COW_AT(100c05f0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c05fbu);
    t320 = cow_thiscall(g, COW_IMG(0x1025b2e0u), self + 0x720u, 0);
    t321 = g->edx;
    eax = t320;
    edx = t321;
    COW_AT(100c05fb)
    goto L_100c1041;
L_100c0600: ;
    COW_AT(100c0600)
    wr32(sp0 - 0x174u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c060du);
    t318 = cow_thiscall(g, COW_IMG(0x1025b340u), self + 0x720u, 1, 0u);
    t319 = g->edx;
    eax = t318;
    edx = t319;
    COW_AT(100c060d)
    goto L_100c1041;
L_100c0612: ;
    COW_AT(100c0612)
    wr32(sp0 - 0x174u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c061eu);
    t316 = cow_thiscall(g, COW_IMG(0x1025b340u), self + 0x720u, 1, 1u);
    t317 = g->edx;
    eax = t316;
    edx = t317;
    COW_AT(100c061e)
    goto L_100c1041;
L_100c0623: ;
    COW_AT(100c0623)
    wr32(sp0 - 0x174u, 3u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0630u);
    t314 = cow_thiscall(g, COW_IMG(0x1025b340u), self + 0x720u, 1, 3u);
    t315 = g->edx;
    eax = t314;
    edx = t315;
    COW_AT(100c0630)
    goto L_100c1041;
L_100c0635: ;
    COW_AT(100c0635)
    wr32(sp0 - 0x174u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0642u);
    t312 = cow_thiscall(g, COW_IMG(0x1025b3b0u), self + 0x720u, 1, 0u);
    t313 = g->edx;
    eax = t312;
    edx = t313;
    COW_AT(100c0642)
    goto L_100c1041;
L_100c0647: ;
    COW_AT(100c0647)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x170u;
    t303 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t304 = g->ecx;
    t305 = g->edx;
    eax = t303;
    ecx = t304;
    edx = t305;
    COW_AT(100c0657)
    if (rd16(sp0 - 0x148u) != 1u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 - 0x148u);
        goto L_100c0675;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 - 0x148u);
L_100c0664: ;
    COW_AT(100c0664)
    wr32(sp0 - 0x174u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0670u);
    t306 = cow_thiscall(g, COW_IMG(0x1025b200u), self + 0x720u, 1, 1u);
    t307 = g->edx;
    eax = t306;
    edx = t307;
    COW_AT(100c0670)
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
    COW_RET(0x100c068bu);
    t308 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)eax, rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu));
    t309 = g->edx;
    eax = t308;
    edx = t309;
    COW_AT(100c068b)
    wr32(sp0 - 0x174u, sp0 - 0x80u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c06a1u);
    t310 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, sp0 - 0x80u);
    t311 = g->edx;
    eax = t310;
    edx = t311;
    COW_AT(100c06a1)
    goto L_100c1041;
L_100c06a6: ;
    COW_AT(100c06a6)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    COW_AT(100c06b6)
    t299 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc50u);
    wr32(sp0 - 0x174u, t299);
    wr32(sp0 - 0x178u, sp0 - 0x11cu);
    g->eax = t299;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c06d9u);
    t300 = cow_fastcall(g, COW_IMG(0x10227590u), rd32(COW_IMG(0x106671b4u)), rd32(self + 4u), 2, sp0 - 0x11cu, t299);
    eax = t300;
    COW_AT(100c06d9)
    wr32(sp0 - 0x174u, sp0 - 0x11cu);
    g->eax = eax;
    g->edx = sp0 - 0x11cu;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c06e9u);
    t301 = cow_thiscall(g, COW_IMG(0x1025b180u), self + 0x720u, 1, sp0 - 0x11cu);
    t302 = g->edx;
    eax = t301;
    edx = t302;
    COW_AT(100c06e9)
    goto L_100c1041;
L_100c06ee: ;
    COW_AT(100c06ee)
    wr32(sp0 - 0x174u, sp0 - 0x146u);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg1 + 1u);
    wr32(sp0 - 0x180u, self + 0x50u);
    g->ecx = sp0 - 0x148u;
    g->esp = sp0 - 0x174u;
    t288 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x146u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t289 = g->ecx;
    t290 = g->edx;
    eax = t288;
    ecx = t289;
    edx = t290;
    COW_AT(100c0703)
    t291 = arg1 + eax + 1u;
    wr32(sp0 - 0x178u, t291);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t291, g->ecx, edx, 1, 3, self + 0x50u, t291, sp0 - 0x146u);
    COW_AT(100c070f)
    t292 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc50u);
    wr32(sp0 - 0x174u, t292);
    wr32(sp0 - 0x178u, sp0 - 0xfcu);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0732u);
    cow_fastcall(g, COW_IMG(0x10227680u), rd32(COW_IMG(0x106671b4u)), sp0 - 0xfcu, 2, sp0 - 0xfcu, t292);
    t293 = g->edx;
    edx = t293;
    COW_AT(100c0732)
    t294 = (uint32_t)(int16_t)rd16(sp0 - 0x146u);
    wr32(sp0 - 0x174u, t294);
    g->eax = t294;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0741u);
    t295 = cow_thiscall(g, COW_IMG(0x10258bb0u), sp0 - 0xfcu, 1, t294);
    t296 = g->edx;
    eax = t295;
    edx = t296;
    COW_AT(100c0741)
    wr32(sp0 - 0x174u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c074du);
    t297 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, eax);
    t298 = g->edx;
    eax = t297;
    edx = t298;
    COW_AT(100c074d)
    goto L_100c1041;
L_100c0752: ;
    COW_AT(100c0752)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t282 = g->edx;
    edx = t282;
    COW_AT(100c0762)
    t283 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x174u, t283);
    g->eax = t283;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0780u);
    t284 = cow_thiscall(g, COW_IMG(0x10167420u), rd32(COW_IMG(0x10621950u)), 1, t283);
    t285 = g->edx;
    eax = t284;
    edx = t285;
    COW_AT(100c0780)
    wr32(sp0 - 0x174u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c078cu);
    t286 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, eax);
    t287 = g->edx;
    eax = t286;
    edx = t287;
    COW_AT(100c078c)
    goto L_100c1041;
L_100c0791: ;
    COW_AT(100c0791)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    COW_AT(100c07a1)
    t276 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x174u, t276);
    g->eax = t276;
    g->edx = rd32(self + 4u);
    t277 = rd32(self + 4u);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c07bfu);
    t278 = cow_thiscall(g, COW_IMG(0x10167430u), rd32(COW_IMG(0x10621950u)), 1, t276);
    t279 = g->edx;
    eax = t278;
    edx = t279;
    COW_AT(100c07bf)
    wr32(sp0 - 0x174u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c07cbu);
    t280 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, eax);
    t281 = g->edx;
    eax = t280;
    edx = t281;
    COW_AT(100c07cb)
    goto L_100c1041;
L_100c07d0: ;
    COW_AT(100c07d0)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x170u;
    t269 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t270 = g->ecx;
    eax = t269;
    ecx = t270;
    COW_AT(100c07e0)
    t271 = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    wr32(sp0 - 0x180u, t271);
    edx = t271;
    loc_180 = t271;
L_100c07e6: ;
    COW_AT(100c07e6)
    wr32(sp0 - 0x184u, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x17cu;
    COW_RET(0x100c07edu);
    t272 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, loc_180);
    t273 = g->edx;
    eax = t272;
    edx = t273;
    COW_AT(100c07ed)
    wr32(sp0 - 0x174u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c07fcu);
    t274 = cow_thiscall(g, COW_IMG(0x1025af10u), self + 0x720u, 1, eax);
    t275 = g->edx;
    eax = t274;
    edx = t275;
    COW_AT(100c07fc)
    goto L_100c1041;
L_100c0801: ;
    COW_AT(100c0801)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t267 = g->ecx;
    ecx = t267;
    COW_AT(100c0811)
    t268 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x180u, t268);
    eax = t268;
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    loc_180 = t268;
    goto L_100c07e6;
L_100c0823: ;
    COW_AT(100c0823)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t237 = g->edx;
    edx = t237;
    COW_AT(100c0833)
    if ((uint8_t)rd32(sp0 - 0x14cu) == 0x33u)
    {
    COW_AT(100c086c)
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    }
    else
    {
        eax = (uint8_t)rd32(sp0 - 0x14cu) - 0x33u;
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
    COW_RET(0x100c0891u);
    t238 = cow_stdcall(g, COW_IMG(0x100c0440u), 2, sp0 - 0x15cu, eax + 0xe000u);
    t239 = g->ecx;
    eax = t238;
    ecx = t239;
    COW_AT(100c0891)
    wr32(sp0 - 0x174u, 8u);
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = (uint8_t)eax;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c08a4u);
    t240 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x160u, 8u);
    t241 = g->edx;
    eax = t240;
    edx = t241;
    COW_AT(100c08a4)
    wr8(sp0 - 0x15eu, 0u);
    if (edx != 0u) goto L_100c08c0;
    COW_AT(100c08b0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c08bbu);
    t242 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t243 = g->edx;
    eax = t242;
    edx = t243;
    COW_AT(100c08bb)
    goto L_100c1041;
L_100c08c0: ;
    COW_AT(100c08c0)
    if (rd32(sp0 - 0x15cu) == 0u) goto L_100c0fc3;
    edi = rd32(sp0 - 0x15cu);
    COW_AT(100c08cc)
    g->eax = eax;
    g->edx = rd32(edi);
    t244 = rd32(edi);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c08d3u);
    t245 = cow_thiscall(g, rd32(t244 + 4u), edi, 0);
    t246 = g->edx;
    eax = t245;
    edx = t246;
    COW_AT(100c08d3)
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c08e7u);
    cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    ebx = eax;
    COW_AT(100c08e7)
    wr32(sp0 - 0x174u, sp0 - 0x158u);
    g->eax = sp0 - 0x158u;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c08f3u);
    t247 = cow_thiscall(g, rd32(rd32(edi) + 0xcu), edi, 1, sp0 - 0x158u);
    eax = t247;
    COW_AT(100c08f3)
    g->eax = eax;
    g->edx = rd32(edi);
    t248 = rd32(edi);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c08fau);
    t249 = cow_thiscall(g, rd32(t248 + 8u), edi, 0);
    t250 = g->edx;
    eax = t249;
    edx = t250;
    COW_AT(100c08fa)
    t251 = -(eax != 0u) + 2u;
    wr32(sp0 - 0x174u, t251);
    g->eax = t251;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c090bu);
    t252 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t251);
    t253 = g->edx;
    eax = t252;
    edx = t253;
    COW_AT(100c090b)
    wr32(sp0 - 0x178u, eax);
    wr32(sp0 - 0x17cu, ebx);
    wr32(sp0 - 0x180u, 3u);
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0916u);
    cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, 3u, ebx, eax, rd32(sp0 - 0x174u));
    t254 = g->ecx;
    t255 = g->edx;
    ecx = t254;
    edx = t255;
    COW_AT(100c0916)
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0920u);
    t256 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x160u);
    t257 = g->edx;
    eax = t256;
    edx = t257;
    COW_AT(100c0920)
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0934u);
    t258 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t259 = g->edx;
    eax = t258;
    edx = t259;
    COW_AT(100c0934)
    goto L_100c1041;
L_100c0939: ;
    COW_AT(100c0939)
    wr32(sp0 - 0x174u, sp0 - 0x146u);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg1 + 1u);
    wr32(sp0 - 0x180u, self + 0x50u);
    g->ecx = ecx;
    g->esp = sp0 - 0x174u;
    t226 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, sp0 - 0x146u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t227 = g->ecx;
    t228 = g->edx;
    eax = t226;
    ecx = t227;
    edx = t228;
    COW_AT(100c094e)
    t229 = arg1 + eax + 1u;
    wr32(sp0 - 0x178u, t229);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t229, g->ecx, edx, 1, 3, self + 0x50u, t229, sp0 - 0x146u);
    COW_AT(100c095a)
    t230 = (uint32_t)(int16_t)rd16(sp0 - 0x146u);
    wr32(sp0 - 0x174u, t230);
    t231 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x178u, t231);
    wr32(sp0 - 0x17cu, sp0 - 0x11cu);
    g->eax = rd32(self + 4u);
    g->edx = sp0 - 0x11cu;
    t232 = rd32(self + 4u);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0983u);
    t233 = cow_thiscall(g, COW_IMG(0x10157050u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0x11cu, t231, t230);
    t234 = g->edx;
    eax = t233;
    edx = t234;
    COW_AT(100c0983)
    if (eax == 0u) goto L_100c0fc3;
    COW_AT(100c098b)
    wr32(sp0 - 0x174u, sp0 - 0x11cu);
    g->eax = sp0 - 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c099bu);
    t235 = cow_thiscall(g, COW_IMG(0x1025b180u), self + 0x720u, 1, sp0 - 0x11cu);
    t236 = g->edx;
    eax = t235;
    edx = t236;
    COW_AT(100c099b)
    goto L_100c1041;
L_100c09a0: ;
    COW_AT(100c09a0)
    t218 = rd32(self + 0x48u);
    wr32(sp0 - 0x174u, t218);
    t219 = rd32(self + 0x10u);
    wr32(sp0 - 0x178u, t219);
    t220 = rd32(self + 0x40u);
    wr32(sp0 - 0x17cu, t220);
    if (rd32(self + 0x30u) == 0u)
    {
        eax = t220;
        edx = t219;
        loc_174 = t218;
        loc_178 = t219;
        loc_17c = t220;
    COW_AT(100c09c3)
        t223 = (rd32(self + 0x18u) != 1u) + 3u;
        wr32(sp0 - 0x180u, t223);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c09dcu);
        t224 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, t223, loc_17c, loc_178, loc_174);
        t225 = g->edx;
        eax = t224;
        edx = t225;
    COW_AT(100c09dc)
    }
    else
    {
        eax = t220;
        edx = t219;
        loc_174 = t218;
        loc_178 = t219;
        loc_17c = t220;
    COW_AT(100c09b3)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c09beu);
        t221 = cow_thiscall(g, COW_IMG(0x1025b090u), self + 0x720u, 3, loc_17c, loc_178, loc_174);
        t222 = g->edx;
        eax = t221;
        edx = t222;
    COW_AT(100c09be)
    }
    goto L_100c1041;
L_100c09e1: ;
    COW_AT(100c09e1)
    t210 = rd32(self + 0x4cu);
    wr32(sp0 - 0x174u, t210);
    t211 = rd32(self + 0x14u);
    wr32(sp0 - 0x178u, t211);
    t212 = rd32(self + 0x44u);
    wr32(sp0 - 0x17cu, t212);
    if (rd32(self + 0x34u) == 0u)
    {
        eax = t211;
        loc_174 = t210;
        loc_178 = t211;
        loc_17c = t212;
    COW_AT(100c0a04)
        t215 = (rd32(self + 0x1cu) != 1u) + 3u;
        wr32(sp0 - 0x180u, t215);
        g->eax = eax;
        g->edx = t215;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0a17u);
        t216 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, t215, loc_17c, loc_178, loc_174);
        t217 = g->edx;
        eax = t216;
        edx = t217;
    COW_AT(100c0a17)
    }
    else
    {
        eax = t211;
        edx = t210;
        loc_174 = t210;
        loc_178 = t211;
        loc_17c = t212;
    COW_AT(100c09fa)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c09ffu);
        t213 = cow_thiscall(g, COW_IMG(0x1025b090u), self + 0x720u, 3, loc_17c, loc_178, loc_174);
        t214 = g->edx;
        eax = t213;
        edx = t214;
    COW_AT(100c09ff)
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
    t157 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x146u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xe0u);
    t158 = g->ecx;
    t159 = g->edx;
    eax = t157;
    ecx = t158;
    edx = t159;
    COW_AT(100c0a34)
    t160 = arg1 + eax + 1u;
    wr32(sp0 - 0x178u, t160);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t160, g->ecx, edx, 1, 3, self + 0x50u, t160, sp0 - 0x146u);
    t161 = g->edx;
    edx = t161;
    COW_AT(100c0a40)
    wr32(sp0 - 0x15cu, 0u);
    t162 = (uint32_t)(int16_t)rd16(sp0 - 0x146u);
    wr32(sp0 - 0x174u, t162);
    if ((uint8_t)ebx != 0x22u)
    {
        eax = t162;
        loc_174 = t162;
    COW_AT(100c0a66)
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0a72u);
        t165 = cow_fastcall(g, COW_IMG(0x100c04a0u), self, edx, 2, sp0 - 0x15cu, loc_174);
        t166 = g->ecx;
        eax = t165;
        ecx = t166;
    COW_AT(100c0a72)
        wr32(sp0 - 0x174u, 3u);
        loc_174 = 3u;
    }
    else
    {
        eax = t162;
        loc_174 = t162;
    COW_AT(100c0a56)
        wr32(sp0 - 0x178u, sp0 - 0x15cu);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0a62u);
        t163 = cow_stdcall(g, COW_IMG(0x100c0440u), 2, sp0 - 0x15cu, loc_174);
        t164 = g->ecx;
        eax = t163;
        ecx = t164;
    COW_AT(100c0a62)
        wr32(sp0 - 0x174u, 2u);
        loc_174 = 2u;
    }
    COW_AT(100c0a74)
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = (uint8_t)eax;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0a85u);
    t167 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x160u, loc_174);
    t168 = g->edx;
    eax = t167;
    edx = t168;
    COW_AT(100c0a85)
    wr8(sp0 - 0x15eu, 0u);
    if (edx != 0u) goto L_100c0aa1;
    COW_AT(100c0a91)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0a9cu);
    t169 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t170 = g->edx;
    eax = t169;
    edx = t170;
    COW_AT(100c0a9c)
    goto L_100c1041;
L_100c0aa1: ;
    COW_AT(100c0aa1)
    if (rd32(sp0 - 0x15cu) == 0u) goto L_100c0fc3;
    edi = rd32(sp0 - 0x15cu);
    COW_AT(100c0aad)
    g->eax = eax;
    g->edx = rd32(edi);
    t171 = rd32(edi);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0ab4u);
    t172 = cow_thiscall(g, rd32(t171 + 4u), edi, 0);
    t173 = g->edx;
    eax = t172;
    edx = t173;
    COW_AT(100c0ab4)
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0ac8u);
    t174 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t175 = g->edx;
    edx = t175;
    ebx = eax;
    eax = t174;
    COW_AT(100c0ac8)
    if (rd8(sp0 - 0xe0u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xe0u);
    COW_AT(100c0afd)
        if ((uint8_t)eax != 1u)
        {
            eax = rd32(edi);
    COW_AT(100c0b2b)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x170u;
            COW_RET(0x100c0b30u);
            t190 = cow_thiscall(g, rd32(eax + 0x1cu), edi, 0);
            t191 = g->edx;
            eax = t190;
            edx = t191;
    COW_AT(100c0b30)
            wr32(sp0 - 0x174u, eax);
            g->eax = eax;
            g->esp = sp0 - 0x170u;
            COW_RET(0x100c0b3au);
            t192 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x158u, 1, eax);
            eax = t192;
    COW_AT(100c0b3a)
            g->eax = eax;
            g->edx = rd32(edi);
            t193 = rd32(edi);
            g->esp = sp0 - 0x170u;
            COW_RET(0x100c0b41u);
            t194 = cow_thiscall(g, rd32(t193 + 0x18u), edi, 0);
            t195 = g->edx;
            eax = t194;
            edx = t195;
    COW_AT(100c0b41)
            t196 = -(eax != 0u) + 2u;
            wr32(sp0 - 0x174u, t196);
            g->eax = t196;
            g->edx = edx;
            g->esp = sp0 - 0x170u;
            COW_RET(0x100c0b52u);
            t197 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t196);
            t198 = g->edx;
            eax = t197;
            edx = t198;
    COW_AT(100c0b52)
            wr32(sp0 - 0x178u, eax);
            g->eax = rd32(edi);
            t199 = rd32(edi);
            g->esp = sp0 - 0x178u;
            COW_RET(0x100c0b5au);
            t200 = cow_thiscall(g, rd32(t199 + 0x14u), edi, 0);
            eax = t200;
    COW_AT(100c0b5a)
            wr32(sp0 - 0x17cu, eax);
            g->eax = eax;
            g->edx = rd32(edi);
            t201 = rd32(edi);
            g->esp = sp0 - 0x17cu;
            COW_RET(0x100c0b62u);
            t202 = cow_thiscall(g, rd32(t201 + 0x20u), edi, 0);
            t203 = g->edx;
            eax = t202;
            edx = t203;
    COW_AT(100c0b62)
            wr32(sp0 - 0x180u, eax);
            loc_178 = rd32(sp0 - 0x178u);
            loc_17c = rd32(sp0 - 0x17cu);
            loc_180 = eax;
        }
        else
        {
            eax = rd32(edi);
    COW_AT(100c0b03)
            wr32(sp0 - 0x174u, sp0 - 0x158u);
            g->eax = eax;
            g->esp = sp0 - 0x170u;
            COW_RET(0x100c0b0du);
            t183 = cow_thiscall(g, rd32(eax + 0x10u), edi, 1, sp0 - 0x158u);
            eax = t183;
    COW_AT(100c0b0d)
            g->eax = eax;
            g->edx = rd32(edi);
            t184 = rd32(edi);
            g->esp = sp0 - 0x170u;
            COW_RET(0x100c0b14u);
            t185 = cow_thiscall(g, rd32(t184 + 8u), edi, 0);
            t186 = g->edx;
            eax = t185;
            edx = t186;
    COW_AT(100c0b14)
            t187 = -(eax != 0u) + 2u;
            wr32(sp0 - 0x174u, t187);
            g->eax = t187;
            g->edx = edx;
            g->esp = sp0 - 0x170u;
            COW_RET(0x100c0b25u);
            t188 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t187);
            t189 = g->edx;
            eax = t188;
            edx = t189;
    COW_AT(100c0b25)
            wr32(sp0 - 0x178u, eax);
            wr32(sp0 - 0x17cu, ebx);
            wr32(sp0 - 0x180u, 4u);
            loc_178 = eax;
            loc_17c = ebx;
            loc_180 = 4u;
        }
    }
    else
    {
    COW_AT(100c0ad3)
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        g->eax = sp0 - 0x158u;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0adfu);
        t176 = cow_thiscall(g, rd32(rd32(edi) + 0xcu), edi, 1, sp0 - 0x158u);
        eax = t176;
    COW_AT(100c0adf)
        g->eax = eax;
        g->edx = rd32(edi);
        t177 = rd32(edi);
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0ae6u);
        t178 = cow_thiscall(g, rd32(t177 + 8u), edi, 0);
        t179 = g->edx;
        eax = t178;
        edx = t179;
    COW_AT(100c0ae6)
        t180 = -(eax != 0u) + 2u;
        wr32(sp0 - 0x174u, t180);
        g->eax = t180;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0af7u);
        t181 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t180);
        t182 = g->edx;
        eax = t181;
        edx = t182;
    COW_AT(100c0af7)
        wr32(sp0 - 0x178u, eax);
        wr32(sp0 - 0x17cu, ebx);
        wr32(sp0 - 0x180u, 3u);
        loc_178 = eax;
        loc_17c = ebx;
        loc_180 = 3u;
    }
    COW_AT(100c0b63)
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0b6au);
    cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, loc_180, loc_17c, loc_178, rd32(sp0 - 0x174u));
    t204 = g->ecx;
    t205 = g->edx;
    ecx = t204;
    edx = t205;
    COW_AT(100c0b6a)
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0b74u);
    t206 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x160u);
    t207 = g->edx;
    eax = t206;
    edx = t207;
    COW_AT(100c0b74)
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0b88u);
    t208 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t209 = g->edx;
    eax = t208;
    edx = t209;
    COW_AT(100c0b88)
    goto L_100c1041;
L_100c0b8d: ;
    COW_AT(100c0b8d)
    wr32(sp0 - 0x174u, sp0 - 0x146u);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg1 + 1u);
    wr32(sp0 - 0x180u, self + 0x50u);
    g->ecx = ecx;
    g->esp = sp0 - 0x174u;
    t120 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x148u, g->ecx, sp0 - 0x146u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t121 = g->ecx;
    t122 = g->edx;
    eax = t120;
    ecx = t121;
    edx = t122;
    COW_AT(100c0ba2)
    t123 = arg1 + eax + 1u;
    wr32(sp0 - 0x178u, t123);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t123, g->ecx, edx, 1, 3, self + 0x50u, t123, sp0 - 0x146u);
    COW_AT(100c0bae)
    t124 = rd16(sp0 - 0x148u);
    t125 = (uint32_t)(int16_t)rd16(sp0 - 0x146u);
    wr32(sp0 - 0x174u, t125);
    wr32(sp0 - 0x178u, sp0 - 0x15cu);
    t126 = (int16_t)t124 > 1;
    wr32(sp0 - 0x14cu, t126);
    g->ebx = self + 0x50u;
    g->eax = sp0 - 0x15cu;
    g->edx = t125;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0bd1u);
    t127 = cow_stdcall(g, COW_IMG(0x100c0440u), 2, sp0 - 0x15cu, t125);
    t128 = g->edx;
    eax = t127;
    edx = t128;
    COW_AT(100c0bd1)
    if ((uint8_t)eax != 0u) goto L_100c0be5;
    COW_AT(100c0bd5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0be0u);
    t129 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t130 = g->edx;
    eax = t129;
    edx = t130;
    COW_AT(100c0be0)
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
    COW_RET(0x100c0bfdu);
    t131 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x160u, 2, sp0 - 0x160u, 2u);
    eax = t131;
    COW_AT(100c0bfd)
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    wr8(sp0 - 0x15eu, 0u);
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0c17u);
    cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t132 = g->edx;
    edx = t132;
    COW_AT(100c0c17)
    g->eax = rd32(edi);
    g->edx = edx;
    t133 = rd32(edi);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0c1eu);
    t134 = cow_thiscall(g, rd32(t133 + 4u), edi, 0);
    t135 = g->edx;
    eax = t134;
    edx = t135;
    COW_AT(100c0c1e)
    if (rd32(sp0 - 0x14cu) != 0u)
    {
        ebx = eax;
    COW_AT(100c0c52)
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        g->eax = rd32(edi);
        t143 = rd32(edi);
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0c5eu);
        t144 = cow_thiscall(g, rd32(t143 + 0x10u), edi, 1, sp0 - 0x158u);
        eax = t144;
    COW_AT(100c0c5e)
        g->eax = eax;
        g->edx = rd32(edi);
        t145 = rd32(edi);
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0c65u);
        t146 = cow_thiscall(g, rd32(t145 + 8u), edi, 0);
        t147 = g->edx;
        eax = t146;
        edx = t147;
    COW_AT(100c0c65)
        t148 = -(eax != 0u) + 2u;
        wr32(sp0 - 0x174u, t148);
        g->eax = t148;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0c76u);
        t149 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t148);
        t150 = g->edx;
        eax = t149;
        edx = t150;
    COW_AT(100c0c76)
        wr32(sp0 - 0x178u, eax);
        wr32(sp0 - 0x17cu, ebx);
        wr32(sp0 - 0x180u, 4u);
        loc_178 = eax;
        loc_17c = ebx;
        loc_180 = 4u;
    }
    else
    {
        ebx = eax;
    COW_AT(100c0c28)
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        g->eax = sp0 - 0x158u;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0c34u);
        t136 = cow_thiscall(g, rd32(rd32(edi) + 0xcu), edi, 1, sp0 - 0x158u);
        eax = t136;
    COW_AT(100c0c34)
        g->eax = eax;
        g->edx = rd32(edi);
        t137 = rd32(edi);
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0c3bu);
        t138 = cow_thiscall(g, rd32(t137 + 8u), edi, 0);
        t139 = g->edx;
        eax = t138;
        edx = t139;
    COW_AT(100c0c3b)
        t140 = -(eax != 0u) + 2u;
        wr32(sp0 - 0x174u, t140);
        g->eax = t140;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0c4cu);
        t141 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x158u, 1, t140);
        t142 = g->edx;
        eax = t141;
        edx = t142;
    COW_AT(100c0c4c)
        wr32(sp0 - 0x178u, eax);
        wr32(sp0 - 0x17cu, ebx);
        wr32(sp0 - 0x180u, 3u);
        loc_178 = eax;
        loc_17c = ebx;
        loc_180 = 3u;
    }
    COW_AT(100c0c7a)
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0c81u);
    cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, loc_180, loc_17c, loc_178, rd32(sp0 - 0x174u));
    t151 = g->ecx;
    t152 = g->edx;
    ecx = t151;
    edx = t152;
    COW_AT(100c0c81)
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0c8bu);
    t153 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x160u);
    t154 = g->edx;
    eax = t153;
    edx = t154;
    COW_AT(100c0c8b)
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0c9fu);
    t155 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t156 = g->edx;
    eax = t155;
    edx = t156;
    COW_AT(100c0c9f)
    goto L_100c1041;
L_100c0ca4: ;
    COW_AT(100c0ca4)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->ecx = ecx;
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    t85 = g->ecx;
    t86 = g->edx;
    ecx = t85;
    edx = t86;
    COW_AT(100c0cb4)
    if ((uint32_t)(int16_t)rd16(sp0 - 0x148u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
        goto L_100c0cd0;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    COW_AT(100c0cc0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0ccbu);
    t87 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t88 = g->edx;
    eax = t87;
    edx = t88;
    COW_AT(100c0ccb)
    goto L_100c1041;
L_100c0cd0: ;
    COW_AT(100c0cd0)
    wr32(sp0 - 0x174u, self + 0x754u);
    wr32(sp0 - 0x178u, eax);
    g->esp = sp0 - 0x170u;
    t89 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, edx, 1, 2, eax, self + 0x754u);
    t90 = g->edx;
    eax = t89;
    edx = t90;
    COW_AT(100c0cdd)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0ce4u);
    t91 = cow_thiscall(g, COW_IMG(0x10154a40u), eax, 2, rd32(sp0 - 0x178u), rd32(sp0 - 0x174u));
    t92 = g->edx;
    eax = t91;
    edx = t92;
    COW_AT(100c0ce4)
    if ((uint8_t)eax == 0u) goto L_100c0fc3;
    COW_AT(100c0cec)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0cf3u);
    t93 = cow_thiscall(g, COW_IMG(0x101554f0u), self + 0x754u, 0);
    t94 = g->edx;
    eax = t93;
    edx = t94;
    COW_AT(100c0cf3)
    if (eax != 0u)
    {
    COW_AT(100c0d03)
        wr32(sp0 - 0x174u, 2u);
        loc_174 = 2u;
    }
    else
    {
    COW_AT(100c0cff)
        wr32(sp0 - 0x174u, 1u);
        loc_174 = 1u;
    }
    COW_AT(100c0d05)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0d0au);
    t95 = cow_thiscall(g, COW_IMG(0x1025b200u), self + 0x720u, 1, loc_174);
    t96 = g->edx;
    eax = t95;
    edx = t96;
    COW_AT(100c0d0a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0d11u);
    t97 = cow_thiscall(g, COW_IMG(0x1025aeb0u), self + 0x720u, 0);
    t98 = g->edx;
    eax = t97;
    edx = t98;
    COW_AT(100c0d11)
    wr32(sp0 - 0x174u, 3u);
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    g->eax = eax;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0d1du);
    t99 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x160u, 2, sp0 - 0x160u, 3u);
    eax = t99;
    COW_AT(100c0d1d)
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0d31u);
    cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t100 = g->edx;
    edx = t100;
    COW_AT(100c0d31)
    g->eax = rd32(self + 0x754u);
    t101 = rd32(self + 0x754u);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0d38u);
    t102 = cow_thiscall(g, rd32(t101 + 8u), self + 0x754u, 0);
    eax = t102;
    COW_AT(100c0d38)
    g->eax = eax;
    g->edx = rd32(eax);
    t103 = rd32(eax);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0d41u);
    t104 = cow_thiscall(g, rd32(t103 + 0x18u), eax, 0);
    t105 = g->edx;
    edx = t105;
    edi = eax;
    eax = t104;
    COW_AT(100c0d41)
    t106 = -(eax != 0u) + 2u;
    wr32(sp0 - 0x174u, t106);
    g->eax = rd32(edi);
    t107 = rd32(edi);
    g->esp = sp0 - 0x174u;
    COW_RET(0x100c0d50u);
    t108 = cow_thiscall(g, rd32(t107 + 0x1cu), edi, 0);
    eax = t108;
    COW_AT(100c0d50)
    wr32(sp0 - 0x178u, eax);
    g->eax = eax;
    g->edx = rd32(edi);
    t109 = rd32(edi);
    g->esp = sp0 - 0x178u;
    COW_RET(0x100c0d58u);
    t110 = cow_thiscall(g, rd32(t109 + 0x14u), edi, 0);
    t111 = g->edx;
    eax = t110;
    edx = t111;
    COW_AT(100c0d58)
    wr32(sp0 - 0x17cu, eax);
    g->eax = rd32(edi);
    g->edx = edx;
    t112 = rd32(edi);
    g->esp = sp0 - 0x17cu;
    COW_RET(0x100c0d60u);
    t113 = cow_thiscall(g, rd32(t112 + 0x20u), edi, 0);
    t114 = g->edx;
    eax = t113;
    edx = t114;
    COW_AT(100c0d60)
    wr32(sp0 - 0x180u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0d68u);
    t115 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, eax, rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u));
    t116 = g->edx;
    eax = t115;
    edx = t116;
    COW_AT(100c0d68)
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = eax;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0d72u);
    t117 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x160u);
    eax = t117;
    COW_AT(100c0d72)
    wr8(sp0 - 0x15eu, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->eax = eax;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0d86u);
    t118 = cow_thiscall(g, COW_IMG(0x1025b420u), self + 0x720u, 1, sp0 - 0x160u);
    t119 = g->edx;
    eax = t118;
    edx = t119;
    COW_AT(100c0d86)
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
        t64 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0xe0u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xe0u);
        t65 = g->ecx;
        eax = t64;
        ecx = t65;
    COW_AT(100c0da3)
        edi = arg1 + eax + 1u;
    }
    COW_AT(100c0da8)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, edi);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, edi, sp0 - 0x148u);
    t66 = g->edx;
    edx = t66;
    COW_AT(100c0db7)
    if ((uint8_t)ebx != 0x26u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
        goto L_100c0e10;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    COW_AT(100c0dc4)
    if (eax != 0u) goto L_100c0dd8;
    COW_AT(100c0dc8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0dd3u);
    t67 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t68 = g->edx;
    eax = t67;
    edx = t68;
    COW_AT(100c0dd3)
    goto L_100c1041;
L_100c0dd8: ;
    COW_AT(100c0dd8)
    wr32(sp0 - 0x174u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0de4u);
    t69 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t70 = g->edx;
    eax = t69;
    edx = t70;
    COW_AT(100c0de4)
    if (eax == 0u) goto L_100c0fc3;
    COW_AT(100c0dec)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0df3u);
    t71 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    COW_AT(100c0df3)
    if (eax != 0u) goto L_100c0e07;
    COW_AT(100c0df7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0e02u);
    t73 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t74 = g->edx;
    eax = t73;
    edx = t74;
    COW_AT(100c0e02)
    goto L_100c1041;
L_100c0e07: ;
    COW_AT(100c0e07)
    g->eax = eax;
    g->edx = rd32(eax);
    t75 = rd32(eax);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0e0eu);
    t76 = cow_thiscall(g, rd32(t75 + 4u), eax, 0);
    t77 = g->edx;
    eax = t76;
    edx = t77;
    COW_AT(100c0e0e)
L_100c0e42: ;
    COW_AT(100c0e42)
    if (eax != 0u)
    {
    COW_AT(100c0e58)
        wr8(self + 0x6edu, 1u);
        wr8(self + 0x6ecu, 1u);
    }
    else
    {
    COW_AT(100c0e46)
        wr8(self + 0x6edu, (uint8_t)eax);
        wr8(self + 0x6ecu, 1u);
    }
    goto L_100c1041;
L_100c0e10: ;
    COW_AT(100c0e10)
    wr32(sp0 - 0x174u, eax);
    wr32(sp0 - 0x178u, sp0 - 0x15cu);
    g->ebx = ebx;
    g->eax = sp0 - 0x15cu;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0e1du);
    t78 = cow_fastcall(g, COW_IMG(0x100c04a0u), self, edx, 2, sp0 - 0x15cu, eax);
    t79 = g->edx;
    eax = t78;
    edx = t79;
    COW_AT(100c0e1d)
    if ((uint8_t)eax != 0u) goto L_100c0e31;
    COW_AT(100c0e21)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0e2cu);
    t80 = cow_thiscall(g, COW_IMG(0x1025a870u), self + 0x720u, 0);
    t81 = g->edx;
    eax = t80;
    edx = t81;
    COW_AT(100c0e2c)
    goto L_100c1041;
L_100c0e31: ;
    COW_AT(100c0e31)
    if (rd32(sp0 - 0x15cu) == 0u) goto L_100c0fc3;
    ecx = rd32(sp0 - 0x15cu);
    COW_AT(100c0e3d)
    g->eax = eax;
    g->edx = rd32(ecx);
    t82 = rd32(ecx);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0e42u);
    t83 = cow_thiscall(g, rd32(t82 + 0x14u), ecx, 0);
    t84 = g->edx;
    eax = t83;
    edx = t84;
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
    t28 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x148u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xe0u);
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(100c0e83)
    t31 = arg1 + eax + 1u;
    wr32(sp0 - 0x178u, t31);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t31, g->ecx, edx, 1, 3, self + 0x50u, t31, sp0 - 0x148u);
    COW_AT(100c0e8f)
    t32 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x174u, t32);
    g->eax = t32;
    g->edx = (uint32_t)(int16_t)rd16(sp0 - 0x148u);
    t33 = rd16(sp0 - 0x148u);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0eacu);
    t34 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t32);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    COW_AT(100c0eac)
    if (eax == 0u) goto L_100c0fc3;
    edi = eax;
    COW_AT(100c0eb6)
    wr32(sp0 - 0x174u, 0u);
    wr32(sp0 - 0x178u, edi);
    wr32(sp0 - 0x17cu, sp0 - 0x90u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x178u;
    COW_RET(0x100c0ecbu);
    t36 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0x90u);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(100c0ecb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0ed2u);
    t38 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x178u), 0u);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(100c0ed2)
    g->esp = sp0 - 0x170u;
    t40 = cow_call_regs(g, COW_IMG(0x10257b40u), eax, sp0 - 0x90u, edx, 1, 0);
    ebp = eax;
    eax = t40;
    COW_AT(100c0ee0)
    wr32(sp0 - 0x174u, 1u);
    wr32(sp0 - 0x178u, edi);
    wr32(sp0 - 0x17cu, sp0 - 0xd0u);
    g->eax = eax;
    g->edx = sp0 - 0xd0u;
    g->esp = sp0 - 0x178u;
    COW_RET(0x100c0ef5u);
    t41 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xd0u);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(100c0ef5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0efcu);
    t43 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x178u), 1u);
    t44 = g->edx;
    eax = t43;
    edx = t44;
    COW_AT(100c0efc)
    g->esp = sp0 - 0x170u;
    t45 = cow_call_regs(g, COW_IMG(0x10257b40u), eax, sp0 - 0xd0u, edx, 1, 0);
    t46 = g->edx;
    edx = t46;
    ebx = eax;
    eax = t45;
    COW_AT(100c0f0a)
    t47 = rd8(sp0 - 0xe0u);
    if ((int8_t)t47 >= 1)
    {
    COW_AT(100c0f53)
        wr32(sp0 - 0x174u, 3u);
        wr32(sp0 - 0x178u, edi);
        wr32(sp0 - 0x17cu, sp0 - 0xa0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x178u;
        COW_RET(0x100c0f68u);
        t56 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xa0u);
        t57 = g->edx;
        eax = t56;
        edx = t57;
    COW_AT(100c0f68)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0f6fu);
        t58 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x178u), 3u);
        t59 = g->edx;
        eax = t58;
        edx = t59;
    COW_AT(100c0f6f)
        g->esp = sp0 - 0x170u;
        t60 = cow_call_regs(g, COW_IMG(0x10257b40u), eax, sp0 - 0xa0u, edx, 1, 0);
        t61 = g->edx;
        edx = t61;
        edi = eax;
        eax = t60;
    COW_AT(100c0f7d)
        wr32(sp0 - 0x174u, ebx);
        wr32(sp0 - 0x178u, edi);
        wr32(sp0 - 0x17cu, ebp);
        wr32(sp0 - 0x180u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0f8du);
        t62 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, 4u, ebp, edi, ebx);
        t63 = g->edx;
        eax = t62;
        edx = t63;
    COW_AT(100c0f8d)
    }
    else
    {
    COW_AT(100c0f14)
        wr32(sp0 - 0x174u, 2u);
        wr32(sp0 - 0x178u, edi);
        wr32(sp0 - 0x17cu, sp0 - 0xc0u);
        g->eax = sp0 - 0xc0u;
        g->edx = edx;
        g->esp = sp0 - 0x178u;
        COW_RET(0x100c0f29u);
        t48 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xc0u);
        t49 = g->edx;
        eax = t48;
        edx = t49;
    COW_AT(100c0f29)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0f30u);
        t50 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x178u), 2u);
        t51 = g->edx;
        eax = t50;
        edx = t51;
    COW_AT(100c0f30)
        g->esp = sp0 - 0x170u;
        t52 = cow_call_regs(g, COW_IMG(0x10257b40u), eax, sp0 - 0xc0u, edx, 1, 0);
        t53 = g->edx;
        edx = t53;
        edi = eax;
        eax = t52;
    COW_AT(100c0f3e)
        wr32(sp0 - 0x174u, ebx);
        wr32(sp0 - 0x178u, edi);
        wr32(sp0 - 0x17cu, ebp);
        wr32(sp0 - 0x180u, 3u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        COW_RET(0x100c0f4eu);
        t54 = cow_thiscall(g, COW_IMG(0x1025afd0u), self + 0x720u, 4, 3u, ebp, edi, ebx);
        t55 = g->edx;
        eax = t54;
        edx = t55;
    COW_AT(100c0f4e)
    }
    goto L_100c1041;
L_100c0f92: ;
    COW_AT(100c0f92)
    wr32(sp0 - 0x174u, sp0 - 0x148u);
    wr32(sp0 - 0x178u, arg1 + 1u);
    wr32(sp0 - 0x17cu, self + 0x50u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x148u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x148u);
    COW_AT(100c0fa2)
    t19 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x148u) * 4u + 0xc64u);
    wr32(sp0 - 0x174u, t19);
    g->eax = t19;
    g->edx = rd32(self + 4u);
    t20 = rd32(self + 4u);
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0fbfu);
    t21 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t19);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    COW_AT(100c0fbf)
    if (eax != 0u) goto L_100c0ff6;
L_100c0fc3: ;
    COW_AT(100c0fc3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0fccu);
    t260 = cow_thiscall(g, COW_IMG(0x10258b00u), sp0 - 0xfcu, 0);
    t261 = g->edx;
    eax = t260;
    edx = t261;
    COW_AT(100c0fcc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0fd5u);
    t262 = cow_thiscall(g, COW_IMG(0x10258a20u), sp0 - 0x11cu, 0);
    t263 = g->edx;
    eax = t262;
    edx = t263;
    COW_AT(100c0fd5)
    g->eax = eax;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0fdeu);
    t264 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x128u, edx, 0);
    t265 = g->edx;
    eax = t264;
    edx = t265;
    COW_AT(100c0fde)
    g->eax = eax;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c0fe7u);
    t266 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x158u, edx, 0);
    eax = t266;
    COW_AT(100c0fe7)
    g->ebx = rd32(sp0 - 0x164u);
    g->esi = rd32(sp0 - 0x16cu);
    g->edi = rd32(sp0 - 0x170u);
    g->ebp = rd32(sp0 - 0x168u);
    return eax & 0xffffff00u;
L_100c0ff6: ;
    COW_AT(100c0ff6)
    wr32(sp0 - 0x174u, 0u);
    wr32(sp0 - 0x178u, eax);
    wr32(sp0 - 0x17cu, sp0 - 0xb0u);
    g->eax = sp0 - 0xb0u;
    g->edx = edx;
    g->esp = sp0 - 0x178u;
    COW_RET(0x100c100bu);
    t23 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xb0u);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    COW_AT(100c100b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    COW_RET(0x100c1012u);
    t25 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x178u), 0u);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    COW_AT(100c1012)
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x10257b40u), eax, sp0 - 0xb0u, edx, 1, 0);
    t27 = g->edx;
    edx = t27;
    edi = eax;
    COW_AT(100c1020)
    wr8(self + 0x6ecu, 1u);
    if (edi == 0u)
    {
        eax = edi;
    COW_AT(100c103a)
        wr8(self + 0x6edu, 0u);
    }
    else
    {
        eax = edi;
    COW_AT(100c102e)
        if (eax != 1u)
        {
            eax = eax - 1u;
        }
        else
        {
            eax = eax - 1u;
    COW_AT(100c1031)
            wr8(self + 0x6edu, 1u);
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
    case 0x100c0515u:
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
        (void)sp0;
        return 1;
    }
    case 0x100c051eu:
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
    case 0x100c052du:
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
        g->esp = sp0 - 0x170u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c0536u:
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
        g->esp = sp0 - 0x170u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c053eu:
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
        g->esp = sp0 - 0x170u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c0558u:
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
        g->esp = sp0 - 0x170u;
        g->ebx = 0u;
        g->edi = self + 0x110u;
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 0u;
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        g->edi = arg1;
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
    case 0x100c05b6u:
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
    case 0x100c05c8u:
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100c05d9u:
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
    case 0x100c05deu:
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
    case 0x100c05ebu:
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
    case 0x100c05fbu:
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
    case 0x100c0600u:
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
    case 0x100c060du:
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100c061eu:
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
    case 0x100c0623u:
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
    case 0x100c0630u:
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
    case 0x100c0642u:
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0657u:
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
        g->esp = sp0 - 0x17cu;
        g->ebp = 1u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
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
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100c0670u:
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
    case 0x100c068bu:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x17cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100c06a1u:
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
        wr32(sp0 - 0x17cu, sp0 - 0x80u);
        wr32(sp0 - 0x174u, sp0 - 0x80u);
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c06b6u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c06d9u:
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
        wr32(sp0 - 0x178u, sp0 - 0x11cu);
        (void)sp0;
        return 1;
    }
    case 0x100c06e9u:
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
        wr32(sp0 - 0x178u, sp0 - 0x11cu);
        wr32(sp0 - 0x174u, sp0 - 0x11cu);
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0703u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x180u;
        g->ebx = self + 0x50u;
        g->edi = arg1 + 1u;
        wr32(sp0 - 0x178u, sp0 - 0x148u);
        wr32(sp0 - 0x174u, sp0 - 0x146u);
        (void)sp0;
        return 1;
    }
    case 0x100c070fu:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x146u);
        (void)sp0;
        return 1;
    }
    case 0x100c0732u:
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
        wr32(sp0 - 0x178u, sp0 - 0xfcu);
        (void)sp0;
        return 1;
    }
    case 0x100c0741u:
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
        wr32(sp0 - 0x178u, sp0 - 0xfcu);
        (void)sp0;
        return 1;
    }
    case 0x100c074du:
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
        wr32(sp0 - 0x178u, sp0 - 0xfcu);
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0762u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0780u:
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
    case 0x100c078cu:
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
    case 0x100c0791u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c07a1u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c07bfu:
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
    case 0x100c07cbu:
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
    case 0x100c07d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c07e0u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
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
    case 0x100c07edu:
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
        g->esp = sp0 - 0x184u;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c07fcu:
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
    case 0x100c0801u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0811u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0833u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
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
    case 0x100c0891u:
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
    case 0x100c08a4u:
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
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
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
        (void)sp0;
        return 1;
    }
    case 0x100c08bbu:
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
        (void)sp0;
        return 1;
    }
    case 0x100c08ccu:
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
        (void)sp0;
        return 1;
    }
    case 0x100c08d3u:
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
    case 0x100c08e7u:
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
    case 0x100c08f3u:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c08fau:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c090bu:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0916u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        (void)sp0;
        return 1;
    }
    case 0x100c0920u:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0934u:
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
        wr32(sp0 - 0x174u, sp0 - 0x160u);
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c094eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x180u;
        g->ebx = self + 0x50u;
        g->edi = arg1 + 1u;
        wr32(sp0 - 0x178u, sp0 - 0x148u);
        wr32(sp0 - 0x174u, sp0 - 0x146u);
        (void)sp0;
        return 1;
    }
    case 0x100c095au:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x146u);
        (void)sp0;
        return 1;
    }
    case 0x100c0983u:
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
    case 0x100c099bu:
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
        wr32(sp0 - 0x174u, sp0 - 0x11cu);
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
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
        uint32_t self;
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
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x100c09beu:
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
    case 0x100c09c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        g->esp = sp0 - 0x17cu;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100c09dcu:
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
    case 0x100c09e1u:
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
        g->ebp = 1u;
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
        uint32_t self;
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
        g->esp = sp0 - 0x17cu;
        g->ecx = self + 0x720u;
        (void)sp0;
        return 1;
    }
    case 0x100c09ffu:
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
    case 0x100c0a04u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        g->esp = sp0 - 0x17cu;
        g->ecx = self + 0x720u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100c0a17u:
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
    case 0x100c0a1cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0a34u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x180u;
        g->ebp = self + 0x50u;
        g->edi = arg1 + 1u;
        wr32(sp0 - 0x178u, sp0 - 0xe0u);
        wr32(sp0 - 0x174u, sp0 - 0x146u);
        (void)sp0;
        return 1;
    }
    case 0x100c0a40u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x146u);
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
    case 0x100c0a62u:
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
    case 0x100c0a72u:
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
    case 0x100c0a85u:
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
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
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
    case 0x100c0a9cu:
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
    case 0x100c0ab4u:
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
    case 0x100c0ac8u:
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
    case 0x100c0adfu:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c0ae6u:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c0af7u:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
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
    case 0x100c0b0du:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c0b14u:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c0b25u:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
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
    case 0x100c0b30u:
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
    case 0x100c0b3au:
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
        (void)sp0;
        return 1;
    }
    case 0x100c0b41u:
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
        (void)sp0;
        return 1;
    }
    case 0x100c0b52u:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0b5au:
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
        g->esp = sp0 - 0x178u;
        g->ebp = self + 0x720u;
        (void)sp0;
        return 1;
    }
    case 0x100c0b62u:
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
        g->esp = sp0 - 0x17cu;
        g->ebp = self + 0x720u;
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
    case 0x100c0b6au:
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
        (void)sp0;
        return 1;
    }
    case 0x100c0b74u:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0b88u:
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
        wr32(sp0 - 0x174u, sp0 - 0x160u);
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->ebp = 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0ba2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x180u;
        g->ebx = self + 0x50u;
        g->ebp = 1u;
        g->edi = arg1 + 1u;
        wr32(sp0 - 0x178u, sp0 - 0x148u);
        wr32(sp0 - 0x174u, sp0 - 0x146u);
        (void)sp0;
        return 1;
    }
    case 0x100c0baeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x17cu;
        g->ebx = self + 0x50u;
        g->ebp = 1u;
        wr32(sp0 - 0x174u, sp0 - 0x146u);
        (void)sp0;
        return 1;
    }
    case 0x100c0bd1u:
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
    case 0x100c0be0u:
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
    case 0x100c0bfdu:
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
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c17u:
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
    case 0x100c0c1eu:
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
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c34u:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c3bu:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c4cu:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
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
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c5eu:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c65u:
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
        wr32(sp0 - 0x174u, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c76u:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
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
        (void)sp0;
        return 1;
    }
    case 0x100c0c81u:
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
        (void)sp0;
        return 1;
    }
    case 0x100c0c8bu:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0c9fu:
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
        wr32(sp0 - 0x174u, sp0 - 0x160u);
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0cb4u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
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
    case 0x100c0ccbu:
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
    case 0x100c0cddu:
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
        g->esp = sp0 - 0x178u;
        g->edi = self + 0x754u;
        (void)sp0;
        return 1;
    }
    case 0x100c0ce4u:
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
    case 0x100c0cf3u:
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
    case 0x100c0d0au:
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
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        g->edi = self + 0x754u;
        (void)sp0;
        return 1;
    }
    case 0x100c0d11u:
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
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        g->edi = self + 0x754u;
        (void)sp0;
        return 1;
    }
    case 0x100c0d1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_174;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_174 = rd32(sp0 - 0x174u);
        g->esp = sp0 - 0x178u;
        g->ebp = self + 0x720u;
        g->edi = self + 0x754u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0d31u:
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
        g->esp = sp0 - 0x170u;
        g->ebp = self + 0x720u;
        g->edi = self + 0x754u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0d38u:
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
    case 0x100c0d41u:
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
    case 0x100c0d50u:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0d58u:
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
        g->esp = sp0 - 0x178u;
        g->ebp = self + 0x720u;
        (void)sp0;
        return 1;
    }
    case 0x100c0d60u:
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
        g->esp = sp0 - 0x17cu;
        g->ebp = self + 0x720u;
        (void)sp0;
        return 1;
    }
    case 0x100c0d68u:
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
        (void)sp0;
        return 1;
    }
    case 0x100c0d72u:
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
        g->esp = sp0 - 0x174u;
        g->ebp = self + 0x720u;
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x100c0d86u:
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
        wr32(sp0 - 0x174u, sp0 - 0x160u);
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x100c0da3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x17cu;
        g->edi = arg1 + 1u;
        wr32(sp0 - 0x174u, sp0 - 0xe0u);
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
        (void)sp0;
        return 1;
    }
    case 0x100c0db7u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
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
    case 0x100c0dd3u:
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
    case 0x100c0de4u:
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
    case 0x100c0df3u:
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
    case 0x100c0e02u:
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
    case 0x100c0e0eu:
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
    case 0x100c0e1du:
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
    case 0x100c0e2cu:
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0e83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x180u;
        g->ebp = self + 0x50u;
        g->edi = arg1 + 1u;
        wr32(sp0 - 0x178u, sp0 - 0xe0u);
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0e8fu:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0eacu:
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
    case 0x100c0ecbu:
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
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x17cu, sp0 - 0x90u);
        wr32(sp0 - 0x174u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0ed2u:
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
        wr32(sp0 - 0x17cu, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100c0ee0u:
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
        wr32(sp0 - 0x17cu, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100c0ef5u:
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
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x17cu, sp0 - 0xd0u);
        wr32(sp0 - 0x174u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100c0efcu:
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
        wr32(sp0 - 0x17cu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f0au:
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
        wr32(sp0 - 0x17cu, sp0 - 0xd0u);
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x17cu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f29u:
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
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x17cu, sp0 - 0xc0u);
        wr32(sp0 - 0x174u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f30u:
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
        wr32(sp0 - 0x17cu, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f3eu:
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
        wr32(sp0 - 0x17cu, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f4eu:
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
        g->esp = sp0 - 0x170u;
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x17cu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f68u:
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
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x17cu, sp0 - 0xa0u);
        wr32(sp0 - 0x174u, 3u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f6fu:
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
        wr32(sp0 - 0x17cu, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f7du:
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
        wr32(sp0 - 0x17cu, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x100c0f8du:
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
        g->esp = sp0 - 0x170u;
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
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100c0fa2u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x100c0fbfu:
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
    case 0x100c0fc3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c0fccu:
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
    case 0x100c0fd5u:
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
    case 0x100c0fdeu:
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
    case 0x100c0fe7u:
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
    case 0x100c100bu:
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
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x17cu, sp0 - 0xb0u);
        wr32(sp0 - 0x174u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c1012u:
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
        wr32(sp0 - 0x17cu, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100c1020u:
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
        wr32(sp0 - 0x17cu, sp0 - 0xb0u);
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
    case 0x100c1031u:
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
    case 0x100c103au:
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
    case 0x100c1041u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x100c104eu:
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
    case 0x100c1078u:
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
        wr32(sp0 - 0x174u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x100c107fu:
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
        wr32(sp0 - 0x174u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x100c108cu:
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
        g->esp = sp0 - 0x174u;
        (void)sp0;
        return 1;
    }
    case 0x100c1099u:
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
        g->esp = sp0 - 0x17cu;
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
    case 0x100c10b2u:
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
    case 0x100c10bbu:
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
    case 0x100c10c4u:
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
    case 0x100c10cdu:
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
