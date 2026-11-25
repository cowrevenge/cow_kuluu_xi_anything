/* f_0x100be760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100be760(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_128;
    uint32_t loc_12c;
    uint32_t loc_130;
    uint32_t loc_134;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    cow_frame(g, sp0, 316u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100be775u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); g->ebp = rd32(sp0 - 0x11cu); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be775;
    case 0x100be77eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be77e;
    case 0x100be7a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100be7a4;
    case 0x100be7bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100be7bf;
    case 0x100be7d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100be7d9;
    case 0x100be7deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100be7de;
    case 0x100be7e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100be7e9;
    case 0x100be806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100be806;
    case 0x100be815u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be815;
    case 0x100be822u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100be822;
    case 0x100be827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100be827;
    case 0x100be837u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be837;
    case 0x100be83fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be83f;
    case 0x100be850u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be850;
    case 0x100be85fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be85f;
    case 0x100be864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100be864;
    case 0x100be871u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100be871;
    case 0x100be876u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be876;
    case 0x100be889u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_100be889;
    case 0x100be89fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be89f;
    case 0x100be8a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be8a4;
    case 0x100be8abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be8ab;
    case 0x100be8bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be8ba;
    case 0x100be8bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be8bf;
    case 0x100be8c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be8c7;
    case 0x100be8ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be8ce;
    case 0x100be8ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be8dd;
    case 0x100be8e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be8e2;
    case 0x100be8e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be8e8;
    case 0x100be902u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100be902;
    case 0x100be907u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100be907;
    case 0x100be917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be917;
    case 0x100be923u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be923;
    case 0x100be945u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100be945;
    case 0x100be94du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100be94d;
    case 0x100be952u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100be952;
    case 0x100be95bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100be95b;
    case 0x100be964u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100be964;
    case 0x100be973u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100be973;
    case 0x100be97au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be97a;
    case 0x100be988u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); goto E_100be988;
    case 0x100be991u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be991;
    case 0x100be996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100be996;
    case 0x100be9a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be9a6;
    case 0x100be9c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be9c6;
    case 0x100be9d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); goto E_100be9d4;
    case 0x100be9d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100be9d9;
    case 0x100be9e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be9e9;
    case 0x100bea07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bea07;
    case 0x100bea13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bea13;
    case 0x100bea18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bea18;
    case 0x100bea28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bea28;
    case 0x100bea46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bea46;
    case 0x100bea52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bea52;
    case 0x100bea57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bea57;
    case 0x100bea67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bea67;
    case 0x100bea85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bea85;
    case 0x100bea91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bea91;
    case 0x100bea96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bea96;
    case 0x100beaa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beaa6;
    case 0x100beaaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100beaae;
    case 0x100beabeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beabe;
    case 0x100beaceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100beace;
    case 0x100bead5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bead5;
    case 0x100beae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beae4;
    case 0x100beae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100beae9;
    case 0x100beaf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beaf9;
    case 0x100beb01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb01;
    case 0x100beb06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb06;
    case 0x100beb09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb09;
    case 0x100beb1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb1a;
    case 0x100beb2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb2b;
    case 0x100beb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb32;
    case 0x100beb36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb36;
    case 0x100beb50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb50;
    case 0x100beb54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb54;
    case 0x100beb5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb5f;
    case 0x100beb64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb64;
    case 0x100beb6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100beb6c;
    case 0x100beb75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100beb75;
    case 0x100beb7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100beb7e;
    case 0x100beb8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb8d;
    case 0x100beb99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100beb99;
    case 0x100bebb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bebb3;
    case 0x100bebbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bebbc;
    case 0x100bebc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bebc3;
    case 0x100bebcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bebcb;
    case 0x100bebd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bebd3;
    case 0x100bebdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bebdb;
    case 0x100bebe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bebe5;
    case 0x100bebf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bebf2;
    case 0x100bec02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec02;
    case 0x100bec0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec0d;
    case 0x100bec1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec1c;
    case 0x100bec23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec23;
    case 0x100bec34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec34;
    case 0x100bec45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec45;
    case 0x100bec49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec49;
    case 0x100bec5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec5e;
    case 0x100bec62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec62;
    case 0x100bec6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec6d;
    case 0x100bec72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec72;
    case 0x100bec7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bec7a;
    case 0x100bec83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bec83;
    case 0x100bec8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bec8c;
    case 0x100bec9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec9b;
    case 0x100beca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100beca7;
    case 0x100becc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100becc1;
    case 0x100beccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100becca;
    case 0x100becd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100becd3;
    case 0x100bece2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bece2;
    case 0x100bece9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bece9;
    case 0x100becf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100becf1;
    case 0x100becf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100becf9;
    case 0x100becffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100becff;
    case 0x100bed0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bed0b;
    case 0x100bed12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bed12;
    case 0x100bed1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bed1c;
    case 0x100bed24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bed24;
    case 0x100bed39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100bed39;
    case 0x100bed45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed45;
    case 0x100bed4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed4d;
    case 0x100bed50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed50;
    case 0x100bed6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed6d;
    case 0x100bed8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed8a;
    case 0x100bed92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed92;
    case 0x100beda7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beda7;
    case 0x100bedabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bedab;
    case 0x100bedb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bedb6;
    case 0x100bedbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bedbb;
    case 0x100bedc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bedc3;
    case 0x100bedccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bedcc;
    case 0x100bedd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bedd5;
    case 0x100bede4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bede4;
    case 0x100bededu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beded;
    case 0x100bedf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100bedf9;
    case 0x100bee13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee13;
    case 0x100bee22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee22;
    case 0x100bee25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee25;
    case 0x100bee2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee2d;
    case 0x100bee37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee37;
    case 0x100bee3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee3c;
    case 0x100bee3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee3f;
    case 0x100bee47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee47;
    case 0x100bee51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee51;
    case 0x100bee54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); goto E_100bee54;
    case 0x100bee5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee5b;
    case 0x100bee65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee65;
    case 0x100bee79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bee79;
    case 0x100bee82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bee82;
    case 0x100bee87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bee87;
    case 0x100bee97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bee97;
    case 0x100beea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beea2;
    case 0x100beeb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beeb1;
    case 0x100beeb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beeb8;
    case 0x100beec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beec9;
    case 0x100beedau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beeda;
    case 0x100beedeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beede;
    case 0x100beeeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beeea;
    case 0x100beef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beef5;
    case 0x100beefau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beefa;
    case 0x100bef07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bef07;
    case 0x100bef0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bef0b;
    case 0x100bef16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bef16;
    case 0x100bef1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bef1b;
    case 0x100bef23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bef23;
    case 0x100bef2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bef2c;
    case 0x100bef35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bef35;
    case 0x100bef44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bef44;
    case 0x100bef4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bef4d;
    case 0x100bef59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100bef59;
    case 0x100bef73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bef73;
    case 0x100bef78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bef78;
    case 0x100bef87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bef87;
    case 0x100bef93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bef93;
    case 0x100bef9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bef9a;
    case 0x100befa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100befa4;
    case 0x100befa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); goto E_100befa7;
    case 0x100befaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100befae;
    case 0x100befb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100befb8;
    case 0x100befc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100befc0;
    case 0x100befccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100befcc;
    case 0x100befd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100befd5;
    case 0x100befdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100befda;
    case 0x100befeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100befea;
    case 0x100beff2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beff2;
    case 0x100beff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beff7;
    case 0x100bf008u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf008;
    case 0x100bf017u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf017;
    case 0x100bf01bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf01b;
    case 0x100bf026u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf026;
    case 0x100bf02bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf02b;
    case 0x100bf036u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf036;
    case 0x100bf03du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf03d;
    case 0x100bf041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf041;
    case 0x100bf04au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf04a;
    case 0x100bf053u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf053;
    case 0x100bf062u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf062;
    case 0x100bf06bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf06b;
    case 0x100bf077u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf077;
    case 0x100bf07bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf07b;
    case 0x100bf07du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_100bf07d;
    case 0x100bf082u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf082;
    case 0x100bf089u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf089;
    case 0x100bf095u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_100bf095;
    case 0x100bf0a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf0a9;
    case 0x100bf0b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf0b2;
    case 0x100bf0bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf0bd;
    case 0x100bf0c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf0c7;
    case 0x100bf0cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf0cf;
    case 0x100bf0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf0d9;
    case 0x100bf0e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf0e1;
    case 0x100bf0ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf0eb;
    case 0x100bf0ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf0ff;
    case 0x100bf104u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf104;
    case 0x100bf114u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf114;
    case 0x100bf131u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf131;
    case 0x100bf135u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf135;
    case 0x100bf13eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf13e;
    case 0x100bf147u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf147;
    case 0x100bf156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf156;
    case 0x100bf15du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf15d;
    case 0x100bf172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf172;
    case 0x100bf179u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf179;
    case 0x100bf187u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); goto E_100bf187;
    case 0x100bf190u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf190;
    case 0x100bf1a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf1a5;
    case 0x100bf1acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf1ac;
    case 0x100bf1bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); goto E_100bf1ba;
    case 0x100bf1c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_100bf1c1;
    case 0x100bf1c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100bf1c6;
    case 0x100bf1d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf1d3;
    case 0x100bf1d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf1d7;
    case 0x100bf1e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf1e1;
    case 0x100bf1edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf1ed;
    case 0x100bf1f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf1f4;
    case 0x100bf201u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf201;
    case 0x100bf20eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf20e;
    case 0x100bf220u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf220;
    case 0x100bf238u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf238;
    case 0x100bf241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf241;
    case 0x100bf24au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf24a;
    default: break;
    }
#endif

    COW_AT(100be760)
    wr32(sp0 - 0x118u, in_ebx);
    wr32(sp0 - 0x11cu, in_ebp);
    wr32(sp0 - 0x120u, in_esi);
    wr32(sp0 - 0x124u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x124u;
    t1 = cow_thiscall(g, COW_IMG(0x10155160u), sp0 - 0xc8u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100be775)
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xd4u, 0);
    t3 = g->ecx;
    t4 = g->edx;
    ecx = t3;
    edx = t4;
    COW_AT(100be77e)
    t5 = rd32(self + 0x6f0u);
    t6 = rd8(arg1);
    wr8(sp0 - 0x114u, 0u);
    wr8(sp0 - 0x113u, 0u);
    wr8(sp0 - 0x112u, 0u);
    wr8(sp0 - 0x110u, (uint8_t)t6);
    if (t5 == 0u)
    {
        eax = t5;
        ebx = (in_ebx & 0xffffff00u) | t6;
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | t6;
    COW_AT(100be7a4)
        wr32(sp0 - 0x128u, self + 0x110u);
        t7 = rd32(self + 0x704u);
        wr8(t7, 0u);
        g->eax = t7;
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        t8 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, rd32(sp0 - 0x128u));
        t9 = g->edx;
        eax = t8;
        edx = t9;
    COW_AT(100be7bf)
        t10 = rd32(self + 0x6f0u);
        wr8(self + 0x110u, 0u);
        wr32(self + 0x704u, t10);
        wr32(self + 0x6f0u, 0u);
        ecx = t10;
    }
    COW_AT(100be7d9)
    t11 = rd8(arg1);
    if ((uint8_t)t11 == 0u)
    {
    COW_AT(100be7de)
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    }
    COW_AT(100be7e9)
    t14 = rd32(sp0 - 0x110u);
    wr8(self + 0x784u, 0u);
    if ((uint8_t)t14 - 1u > 0x44u)
    {
        eax = (uint8_t)t14 - 1u;
        goto L_100bf1c6;
    }
    eax = (uint8_t)t14 - 1u;
    ebp = (uint8_t)t14;
    COW_AT(100be806)
    t15 = rd32(COW_IMG(0x100bf25cu) + rd8(COW_IMG(0x100bf2a8u) + eax) * 4u);
    switch (t15 - RD)
    {
    case 0x100be815u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100be815;
    case 0x100be827u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100be827;
    case 0x100be864u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100be864;
    case 0x100be8a4u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100be8a4;
    case 0x100be8c7u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100be8c7;
    case 0x100be907u: goto L_100be907;
    case 0x100be996u: goto L_100be996;
    case 0x100be9d9u: goto L_100be9d9;
    case 0x100bea18u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100bea18;
    case 0x100bea57u: goto L_100bea57;
    case 0x100bea96u: goto L_100bea96;
    case 0x100beaaeu: goto L_100beaae;
    case 0x100beae9u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100beae9;
    case 0x100bebf2u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100bebf2;
    case 0x100bed24u: goto L_100bed24;
    case 0x100bee87u: goto L_100bee87;
    case 0x100befdau: goto L_100befda;
    case 0x100bf104u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100bf104;
    case 0x100bf1c6u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100bf1c6;
    default: rt_fatal(g, COW_IMG(0x100be80eu), "switch");
    }
    return 0;
L_100be815: ;
    COW_AT(100be815)
    wr32(sp0 - 0x128u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t262 = cow_thiscall(g, COW_IMG(0x1025a400u), self + 0x708u, 1, 1u);
    t263 = g->edx;
    eax = t262;
    edx = t263;
    COW_AT(100be822)
L_100bf1c6: ;
    COW_AT(100bf1c6)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t264 = cow_thiscall(g, COW_IMG(0x10259f40u), self + 0x708u, 0);
    t265 = g->edx;
    eax = t264;
    edx = t265;
    COW_AT(100bf1d3)
    if (eax == 0u) goto L_100bf220;
    COW_AT(100bf1d7)
    if (rd8(self + 0x784u) != 0u) goto L_100bf220;
    COW_AT(100bf1e1)
    wr32(sp0 - 0x128u, sp0 - 0xd4u);
    g->eax = sp0 - 0xd4u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t266 = cow_thiscall(g, COW_IMG(0x10259f50u), self + 0x708u, 1, sp0 - 0xd4u);
    t267 = g->edx;
    eax = t266;
    edx = t267;
    COW_AT(100bf1ed)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t268 = cow_thiscall(g, COW_IMG(0x10259ea0u), self + 0x708u, 0);
    t269 = g->edx;
    eax = t268;
    edx = t269;
    COW_AT(100bf1f4)
    t270 = rd32(self + 0xcu);
    wr32(sp0 - 0x128u, t270);
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t271 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xd4u, 1, t270);
    t272 = g->ecx;
    eax = t271;
    ecx = t272;
    COW_AT(100bf201)
    wr32(sp0 - 0x12cu, eax);
    t273 = rd32(self + 0x704u);
    wr32(sp0 - 0x130u, t273);
    g->edx = t273;
    g->esp = sp0 - 0x10cu;
    t274 = cow_call_regs(g, COW_IMG(0x100c2bf0u), eax, ecx, g->edx, 1, 9, t273, eax, rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    t275 = g->edx;
    eax = t274;
    edx = t275;
    COW_AT(100bf20e)
    wr32(self + 0x704u, eax);
    wr32(self + 0xcu, 0u);
L_100bf238: ;
    COW_AT(100bf238)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t277 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t278 = g->edx;
    eax = t277;
    edx = t278;
    COW_AT(100bf241)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t279 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    eax = t279;
    COW_AT(100bf24a)
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return (eax & 0xffffff00u) | 1u;
L_100be827: ;
    COW_AT(100be827)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t255 = g->ecx;
    ecx = t255;
    COW_AT(100be837)
    if ((uint8_t)ebx != 3u)
    {
    COW_AT(100be850)
        eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
        ecx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
        edx = rd32(self + 4u);
    }
    else
    {
    COW_AT(100be83f)
        eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
        edx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    }
    COW_AT(100be85f)
    if (eax != 1u) goto L_100be876;
L_100be864: ;
    COW_AT(100be864)
    wr32(sp0 - 0x128u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t256 = cow_thiscall(g, COW_IMG(0x1025a400u), self + 0x708u, 1, 0u);
    t257 = g->edx;
    eax = t256;
    edx = t257;
    COW_AT(100be871)
    goto L_100bf1c6;
L_100be876: ;
    COW_AT(100be876)
    wr32(sp0 - 0x128u, eax);
    wr32(sp0 - 0x12cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x130u, sp0 - 0x80u);
    g->ebx = ebx;
    g->eax = sp0 - 0x80u;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t258 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10352ff0u), eax, rd32(sp0 - 0x124u), rd32(sp0 - 0x120u));
    t259 = g->edx;
    eax = t258;
    edx = t259;
    COW_AT(100be889)
    wr32(sp0 - 0x128u, sp0 - 0x80u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t260 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, sp0 - 0x80u);
    t261 = g->edx;
    eax = t260;
    edx = t261;
    COW_AT(100be89f)
    goto L_100bf1c6;
L_100be8a4: ;
    COW_AT(100be8a4)
    if (rd32(self + 0x20u) == 0u) goto L_100be8bf;
    eax = rd32(self + 0x20u);
    COW_AT(100be8ab)
    t249 = rd32(self + 0x10u);
    wr32(sp0 - 0x128u, t249);
    g->eax = eax;
    g->edx = t249;
    g->esp = sp0 - 0x124u;
    t250 = cow_thiscall(g, COW_IMG(0x1025a380u), self + 0x708u, 1, t249);
    t251 = g->edx;
    eax = t250;
    edx = t251;
    COW_AT(100be8ba)
    goto L_100bf1c6;
L_100be8bf: ;
    COW_AT(100be8bf)
    eax = rd32(self + 0x10u);
    edi = rd32(self + 0x18u);
L_100be8e8: ;
    COW_AT(100be8e8)
    wr32(sp0 - 0x128u, 0xffffffffu);
    wr32(sp0 - 0x12cu, eax);
    t252 = (edi != 1u) + 3u;
    wr32(sp0 - 0x130u, t252);
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t253 = cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, t252, eax, 0xffffffffu);
    t254 = g->edx;
    eax = t253;
    edx = t254;
    COW_AT(100be902)
    goto L_100bf1c6;
L_100be8c7: ;
    COW_AT(100be8c7)
    if (rd32(self + 0x24u) == 0u) goto L_100be8e2;
    eax = rd32(self + 0x24u);
    COW_AT(100be8ce)
    t246 = rd32(self + 0x14u);
    wr32(sp0 - 0x128u, t246);
    g->eax = eax;
    g->edx = t246;
    g->esp = sp0 - 0x124u;
    t247 = cow_thiscall(g, COW_IMG(0x1025a380u), self + 0x708u, 1, t246);
    t248 = g->edx;
    eax = t247;
    edx = t248;
    COW_AT(100be8dd)
    goto L_100bf1c6;
L_100be8e2: ;
    COW_AT(100be8e2)
    eax = rd32(self + 0x14u);
    edi = rd32(self + 0x1cu);
    goto L_100be8e8;
L_100be907: ;
    COW_AT(100be907)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    t229 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t230 = g->edx;
    eax = t229;
    edx = t230;
    COW_AT(100be917)
    g->esp = sp0 - 0x124u;
    cow_thiscall(g, COW_IMG(0x102588a0u), sp0 - 0xecu, 0);
    COW_AT(100be923)
    wr32(sp0 - 0x128u, 0u);
    t231 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x12cu, t231);
    wr32(sp0 - 0x130u, sp0 - 0xecu);
    g->eax = sp0 - 0xecu;
    g->edx = rd32(self + 4u);
    t232 = rd32(self + 4u);
    g->esp = sp0 - 0x124u;
    t233 = cow_thiscall(g, COW_IMG(0x10157050u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0xecu, t231, 0u);
    t234 = g->edx;
    eax = t233;
    edx = t234;
    COW_AT(100be945)
    if (eax != 0u) goto L_100be973;
    COW_AT(100be94d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t235 = cow_thiscall(g, COW_IMG(0x10258860u), sp0 - 0xecu, 0);
    t236 = g->edx;
    eax = t235;
    edx = t236;
    COW_AT(100be952)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t237 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t238 = g->edx;
    eax = t237;
    edx = t238;
    COW_AT(100be95b)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t239 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    eax = t239;
    COW_AT(100be964)
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return eax & 0xffffff00u;
L_100be973: ;
    COW_AT(100be973)
    wr32(sp0 - 0x128u, 0xffffffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t240 = cow_thiscall_cdecl(g, COW_IMG(0x10258910u), sp0 - 0xecu, 1, 0xffffffffu);
    t241 = g->edx;
    eax = t240;
    edx = t241;
    COW_AT(100be97a)
    wr32(sp0 - 0x12cu, eax);
    wr32(sp0 - 0x130u, 3u);
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t242 = cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, 3u, eax, 0xffffffffu);
    t243 = g->edx;
    eax = t242;
    edx = t243;
    COW_AT(100be988)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t244 = cow_thiscall(g, COW_IMG(0x10258860u), sp0 - 0xecu, 0);
    t245 = g->edx;
    eax = t244;
    edx = t245;
    COW_AT(100be991)
    goto L_100bf1c6;
L_100be996: ;
    COW_AT(100be996)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t223 = g->edx;
    edx = t223;
    COW_AT(100be9a6)
    wr32(sp0 - 0x128u, 0xffffffffu);
    t224 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
    wr32(sp0 - 0x12cu, t224);
    g->esp = sp0 - 0x128u;
    t225 = cow_call_regs(g, COW_IMG(0x10227390u), t224, rd32(COW_IMG(0x106671b4u)), edx, 0, 1, t224);
    t226 = g->edx;
    eax = t225;
    edx = t226;
    COW_AT(100be9c6)
    wr32(sp0 - 0x12cu, eax);
    wr32(sp0 - 0x130u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t227 = cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, 2u, eax, 0xffffffffu);
    t228 = g->edx;
    eax = t227;
    edx = t228;
    COW_AT(100be9d4)
    goto L_100bf1c6;
L_100be9d9: ;
    COW_AT(100be9d9)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    COW_AT(100be9e9)
    t217 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
    wr32(sp0 - 0x128u, t217);
    t218 = rd32(self + 4u);
    g->esp = sp0 - 0x124u;
    t219 = cow_call_regs(g, COW_IMG(0x102273f0u), t217, rd32(COW_IMG(0x106671b4u)), t218, 0, 1, t217);
    t220 = g->edx;
    eax = t219;
    edx = t220;
    COW_AT(100bea07)
    wr32(sp0 - 0x128u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t221 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, eax);
    t222 = g->edx;
    eax = t221;
    edx = t222;
    COW_AT(100bea13)
    goto L_100bf1c6;
L_100bea18: ;
    COW_AT(100bea18)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    COW_AT(100bea28)
    t211 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x128u, t211);
    g->eax = t211;
    g->edx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    t212 = rd16(sp0 - 0x10cu);
    g->esp = sp0 - 0x124u;
    t213 = cow_thiscall(g, COW_IMG(0x101673e0u), rd32(COW_IMG(0x10621950u)), 1, t211);
    t214 = g->edx;
    eax = t213;
    edx = t214;
    COW_AT(100bea46)
    wr32(sp0 - 0x128u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t215 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, eax);
    t216 = g->edx;
    eax = t215;
    edx = t216;
    COW_AT(100bea52)
    goto L_100bf1c6;
L_100bea57: ;
    COW_AT(100bea57)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t205 = g->edx;
    edx = t205;
    COW_AT(100bea67)
    t206 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x128u, t206);
    g->eax = t206;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t207 = cow_thiscall(g, COW_IMG(0x101673f0u), rd32(COW_IMG(0x10621950u)), 1, t206);
    t208 = g->edx;
    eax = t207;
    edx = t208;
    COW_AT(100bea85)
    wr32(sp0 - 0x128u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t209 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, eax);
    t210 = g->edx;
    eax = t209;
    edx = t210;
    COW_AT(100bea91)
    goto L_100bf1c6;
L_100bea96: ;
    COW_AT(100bea96)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    t198 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t199 = g->edx;
    eax = t198;
    edx = t199;
    COW_AT(100beaa6)
    t200 = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    wr32(sp0 - 0x134u, t200);
    ecx = t200;
    loc_134 = t200;
L_100beace: ;
    COW_AT(100beace)
    wr32(sp0 - 0x138u, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x130u;
    t201 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, loc_134);
    t202 = g->edx;
    eax = t201;
    edx = t202;
    COW_AT(100bead5)
    wr32(sp0 - 0x128u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t203 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, eax);
    t204 = g->edx;
    eax = t203;
    edx = t204;
    COW_AT(100beae4)
    goto L_100bf1c6;
L_100beaae: ;
    COW_AT(100beaae)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    COW_AT(100beabe)
    t197 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x134u, t197);
    eax = t197;
    ecx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    edx = rd32(self + 4u);
    loc_134 = t197;
    goto L_100beace;
L_100beae9: ;
    COW_AT(100beae9)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t170 = g->edx;
    edx = t170;
    COW_AT(100beaf9)
    if (ebp == 0x39u)
    {
    COW_AT(100beb2b)
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    }
    else
    {
        ebp = ebp - 0x39u;
    COW_AT(100beb01)
        if (ebp == 7u)
        {
    COW_AT(100beb1a)
            eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
            edx = rd32(self + 4u);
        }
        else
        {
            ebp = ebp - 7u;
    COW_AT(100beb06)
            if (ebp != 1u)
            {
    COW_AT(100beb32)
                eax = rd32(sp0 - 0x110u);
            }
            else
            {
    COW_AT(100beb09)
                eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
                edx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
            }
        }
    }
    COW_AT(100beb36)
    wr32(sp0 - 0x128u, eax + 0xe000u);
    wr32(sp0 - 0x12cu, sp0 - 0x110u);
    wr32(sp0 - 0x110u, 0u);
    g->ebx = ebx;
    g->eax = sp0 - 0x110u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t171 = cow_stdcall(g, COW_IMG(0x100be6a0u), 2, sp0 - 0x110u, eax + 0xe000u);
    t172 = g->edx;
    eax = t171;
    edx = t172;
    COW_AT(100beb50)
    if ((uint8_t)eax != 0u) goto L_100beb64;
    COW_AT(100beb54)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t173 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t174 = g->edx;
    eax = t173;
    edx = t174;
    COW_AT(100beb5f)
    goto L_100bf1c6;
L_100beb64: ;
    COW_AT(100beb64)
    if (rd32(sp0 - 0x110u) != 0u)
    {
        edi = rd32(sp0 - 0x110u);
        goto L_100beb8d;
    }
    COW_AT(100beb6c)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t175 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t176 = g->edx;
    eax = t175;
    edx = t176;
    COW_AT(100beb75)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t177 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    eax = t177;
    COW_AT(100beb7e)
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return eax & 0xffffff00u;
L_100beb8d: ;
    COW_AT(100beb8d)
    wr32(sp0 - 0x128u, 8u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t178 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x114u, 2, sp0 - 0x114u, 8u);
    eax = t178;
    COW_AT(100beb99)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    wr8(sp0 - 0x112u, 0u);
    g->eax = eax;
    g->edx = sp0 - 0x114u;
    g->esp = sp0 - 0x124u;
    t179 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t180 = g->edx;
    eax = t179;
    edx = t180;
    COW_AT(100bebb3)
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xecu, 0);
    t181 = g->edx;
    edx = t181;
    COW_AT(100bebbc)
    g->eax = rd32(edi);
    t182 = rd32(edi);
    g->esp = sp0 - 0x124u;
    t183 = cow_thiscall(g, rd32(t182 + 0x1cu), edi, 0);
    eax = t183;
    COW_AT(100bebc3)
    wr32(sp0 - 0x128u, eax);
    g->eax = eax;
    g->edx = rd32(edi);
    t184 = rd32(edi);
    g->esp = sp0 - 0x128u;
    t185 = cow_thiscall(g, rd32(t184 + 0x18u), edi, 0);
    t186 = g->edx;
    eax = t185;
    edx = t186;
    COW_AT(100bebcb)
    wr32(sp0 - 0x12cu, eax);
    g->eax = rd32(edi);
    g->edx = edx;
    t187 = rd32(edi);
    g->esp = sp0 - 0x12cu;
    t188 = cow_thiscall(g, rd32(t187 + 0x20u), edi, 0);
    t189 = g->edx;
    eax = t188;
    edx = t189;
    COW_AT(100bebd3)
    wr32(sp0 - 0x130u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t190 = cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, eax, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
    t191 = g->edx;
    eax = t190;
    edx = t191;
    COW_AT(100bebdb)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t192 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x114u);
    eax = t192;
    COW_AT(100bebe5)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    edx = sp0 - 0x114u;
L_100befc0: ;
    COW_AT(100befc0)
    wr8(sp0 - 0x112u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t193 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t194 = g->edx;
    eax = t193;
    edx = t194;
    COW_AT(100befcc)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t195 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xecu, edx, 0);
    t196 = g->edx;
    eax = t195;
    edx = t196;
    COW_AT(100befd5)
    goto L_100bf1c6;
L_100bebf2: ;
    COW_AT(100bebf2)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t127 = g->edx;
    edx = t127;
    COW_AT(100bec02)
    if (ebp - 0x20u > 8u)
    {
        ebx = ebp - 0x20u;
        goto L_100bec45;
    }
    ebx = ebp - 0x20u;
    COW_AT(100bec0d)
    t128 = rd32(COW_IMG(0x100bf2f0u) + rd8(COW_IMG(0x100bf2fcu) + ebx) * 4u);
    switch (t128 - RD)
    {
    case 0x100bec1cu: edx = rd8(COW_IMG(0x100bf2fcu) + ebx); goto L_100bec1c;
    case 0x100bec23u: edx = rd8(COW_IMG(0x100bf2fcu) + ebx); goto L_100bec23;
    case 0x100bec34u: goto L_100bec34;
    default: rt_fatal(g, COW_IMG(0x100bec15u), "switch");
    }
    return 0;
L_100bec1c: ;
    COW_AT(100bec1c)
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
L_100bec49: ;
    COW_AT(100bec49)
    wr32(sp0 - 0x128u, eax);
    wr32(sp0 - 0x12cu, sp0 - 0x110u);
    wr32(sp0 - 0x110u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t129 = cow_stdcall(g, COW_IMG(0x100be6a0u), 2, sp0 - 0x110u, eax);
    t130 = g->ecx;
    t131 = g->edx;
    eax = t129;
    ecx = t130;
    edx = t131;
    COW_AT(100bec5e)
    if ((uint8_t)eax != 0u) goto L_100bec72;
    COW_AT(100bec62)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t132 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t133 = g->edx;
    eax = t132;
    edx = t133;
    COW_AT(100bec6d)
    goto L_100bf1c6;
L_100bec23: ;
    COW_AT(100bec23)
    eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    goto L_100bec49;
L_100bec34: ;
    COW_AT(100bec34)
    eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    goto L_100bec49;
L_100bec45: ;
    COW_AT(100bec45)
    eax = rd32(sp0 - 0x110u);
    goto L_100bec49;
L_100bec72: ;
    COW_AT(100bec72)
    if (rd32(sp0 - 0x110u) != 0u)
    {
        edi = rd32(sp0 - 0x110u);
        goto L_100bec9b;
    }
    COW_AT(100bec7a)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t134 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t135 = g->edx;
    eax = t134;
    edx = t135;
    COW_AT(100bec83)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t136 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    eax = t136;
    COW_AT(100bec8c)
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return eax & 0xffffff00u;
L_100bec9b: ;
    COW_AT(100bec9b)
    wr32(sp0 - 0x128u, 2u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    g->edx = sp0 - 0x114u;
    g->esp = sp0 - 0x124u;
    cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x114u, 2u);
    t137 = g->edx;
    edx = t137;
    COW_AT(100beca7)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    wr8(sp0 - 0x112u, 0u);
    g->eax = sp0 - 0x114u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t138 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t139 = g->edx;
    eax = t138;
    edx = t139;
    COW_AT(100becc1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t140 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xecu, 0);
    t141 = g->ecx;
    t142 = g->edx;
    eax = t140;
    ecx = t141;
    edx = t142;
    COW_AT(100becca)
    if (ebx > 8u) goto L_100befae;
    COW_AT(100becd3)
    t143 = rd32(COW_IMG(0x100bf308u) + rd8(COW_IMG(0x100bf314u) + ebx) * 4u);
    switch (t143 - RD)
    {
    case 0x100bece2u: goto L_100bece2;
    case 0x100becffu: goto L_100becff;
    case 0x100bef87u: goto L_100bef87;
    default: rt_fatal(g, COW_IMG(0x100becdbu), "switch");
    }
    return 0;
L_100bece2: ;
    COW_AT(100bece2)
    g->eax = eax;
    g->edx = rd32(edi);
    t158 = rd32(edi);
    g->esp = sp0 - 0x124u;
    t159 = cow_thiscall(g, rd32(t158 + 0x1cu), edi, 0);
    t160 = g->edx;
    eax = t159;
    edx = t160;
    COW_AT(100bece9)
    wr32(sp0 - 0x128u, eax);
    g->eax = rd32(edi);
    t161 = rd32(edi);
    g->esp = sp0 - 0x128u;
    t162 = cow_thiscall(g, rd32(t161 + 0x18u), edi, 0);
    eax = t162;
    COW_AT(100becf1)
    wr32(sp0 - 0x12cu, eax);
    g->eax = eax;
    g->edx = rd32(edi);
    t163 = rd32(edi);
    g->esp = sp0 - 0x12cu;
    t164 = cow_thiscall(g, rd32(t163 + 0x20u), edi, 0);
    t165 = g->edx;
    eax = t164;
    edx = t165;
    COW_AT(100becf9)
    wr32(sp0 - 0x130u, eax);
    loc_12c = rd32(sp0 - 0x12cu);
    loc_130 = eax;
L_100befa7: ;
    COW_AT(100befa7)
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, loc_130, loc_12c, rd32(sp0 - 0x128u));
    t166 = g->ecx;
    t167 = g->edx;
    ecx = t166;
    edx = t167;
L_100befae: ;
    COW_AT(100befae)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t168 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x114u);
    t169 = g->edx;
    eax = t168;
    edx = t169;
    COW_AT(100befb8)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    goto L_100befc0;
L_100becff: ;
    COW_AT(100becff)
    wr32(sp0 - 0x128u, sp0 - 0xecu);
    g->eax = rd32(edi);
    t151 = rd32(edi);
    g->esp = sp0 - 0x124u;
    t152 = cow_thiscall(g, rd32(t151 + 4u), edi, 1, sp0 - 0xecu);
    eax = t152;
    COW_AT(100bed0b)
    g->eax = eax;
    g->edx = rd32(edi);
    t153 = rd32(edi);
    g->esp = sp0 - 0x124u;
    t154 = cow_thiscall(g, rd32(t153 + 0x14u), edi, 0);
    t155 = g->edx;
    eax = t154;
    edx = t155;
    COW_AT(100bed12)
    wr32(sp0 - 0x128u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t156 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xecu, 1, eax);
    t157 = g->edx;
    eax = t156;
    edx = t157;
    COW_AT(100bed1c)
    wr32(sp0 - 0x12cu, eax);
    wr32(sp0 - 0x130u, 3u);
    loc_12c = eax;
    loc_130 = 3u;
    goto L_100befa7;
L_100bed24: ;
    COW_AT(100bed24)
    wr32(sp0 - 0x128u, sp0 - 0x10au);
    wr32(sp0 - 0x12cu, sp0 - 0x10cu);
    wr32(sp0 - 0x130u, arg1 + 1u);
    wr32(sp0 - 0x134u, self + 0x50u);
    g->ecx = ecx;
    g->esp = sp0 - 0x128u;
    t91 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, sp0 - 0x10au, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t92 = g->ecx;
    t93 = g->edx;
    eax = t91;
    ecx = t92;
    edx = t93;
    COW_AT(100bed39)
    t94 = arg1 + eax + 1u;
    wr32(sp0 - 0x12cu, t94);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t94, g->ecx, edx, 1, 3, self + 0x50u, t94, sp0 - 0x10au);
    t95 = g->edx;
    edx = t95;
    COW_AT(100bed45)
    if (ebp == 0x29u)
    {
    COW_AT(100bed6d)
        eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10au) * 4u + 0xc64u);
        edx = (uint32_t)(int16_t)rd16(sp0 - 0x10au);
        ebx = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    }
    else
    {
        ebp = ebp - 0x29u;
    COW_AT(100bed4d)
        if (ebp != 1u)
        {
    COW_AT(100bed8a)
            eax = rd32(sp0 - 0x110u);
            ebx = rd32(sp0 - 0x110u);
        }
        else
        {
    COW_AT(100bed50)
            eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10au) * 4u + 0xc50u);
            edx = (uint32_t)(int16_t)rd16(sp0 - 0x10au);
            ebx = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
        }
    }
    COW_AT(100bed92)
    wr32(sp0 - 0x128u, eax);
    wr32(sp0 - 0x12cu, sp0 - 0x110u);
    wr32(sp0 - 0x110u, 0u);
    g->ebx = ebx;
    g->eax = sp0 - 0x110u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t96 = cow_stdcall(g, COW_IMG(0x100be6a0u), 2, sp0 - 0x110u, eax);
    t97 = g->edx;
    eax = t96;
    edx = t97;
    COW_AT(100beda7)
    if ((uint8_t)eax != 0u) goto L_100bedbb;
    COW_AT(100bedab)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t98 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t99 = g->edx;
    eax = t98;
    edx = t99;
    COW_AT(100bedb6)
    goto L_100bf1c6;
L_100bedbb: ;
    COW_AT(100bedbb)
    if (rd32(sp0 - 0x110u) != 0u)
    {
        ebp = rd32(sp0 - 0x110u);
        goto L_100bede4;
    }
    COW_AT(100bedc3)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t100 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t101 = g->edx;
    eax = t100;
    edx = t101;
    COW_AT(100bedcc)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t102 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    eax = t102;
    COW_AT(100bedd5)
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return eax & 0xffffff00u;
L_100bede4: ;
    COW_AT(100bede4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t103 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xecu, 0);
    t104 = g->edx;
    eax = t103;
    edx = t104;
    COW_AT(100beded)
    wr32(sp0 - 0x128u, 2u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t105 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x114u, 2, sp0 - 0x114u, 2u);
    eax = t105;
    COW_AT(100bedf9)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    wr8(sp0 - 0x112u, 0u);
    g->edx = sp0 - 0x114u;
    g->esp = sp0 - 0x124u;
    cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t106 = g->edx;
    edx = t106;
    COW_AT(100bee13)
    wr32(sp0 - 0x128u, sp0 - 0xecu);
    if (ebx != 1u)
    {
        eax = rd32(ebp);
        ecx = ebp;
    COW_AT(100bee3c)
        g->eax = eax;
        g->esp = sp0 - 0x124u;
        t113 = cow_thiscall(g, rd32(eax + 0xcu), ecx, 1, sp0 - 0xecu);
        eax = t113;
    COW_AT(100bee3f)
        g->eax = eax;
        g->edx = rd32(ebp);
        t114 = rd32(ebp);
        g->esp = sp0 - 0x124u;
        t115 = cow_thiscall(g, rd32(t114 + 0x14u), ebp, 0);
        t116 = g->edx;
        eax = t115;
        edx = t116;
    COW_AT(100bee47)
        wr32(sp0 - 0x128u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        t117 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xecu, 1, eax);
        t118 = g->edx;
        eax = t117;
        edx = t118;
    COW_AT(100bee51)
        wr32(sp0 - 0x12cu, eax);
        wr32(sp0 - 0x130u, 4u);
        loc_12c = eax;
        loc_130 = 4u;
    }
    else
    {
        eax = rd32(ebp);
        ecx = ebp;
    COW_AT(100bee22)
        g->eax = eax;
        g->esp = sp0 - 0x128u;
        t107 = cow_thiscall(g, rd32(eax + 4u), ecx, 0);
        eax = t107;
    COW_AT(100bee25)
        g->eax = eax;
        g->edx = rd32(ebp);
        t108 = rd32(ebp);
        g->esp = sp0 - 0x124u;
        t109 = cow_thiscall(g, rd32(t108 + 0x14u), ebp, 1, sp0 - 0xecu);
        t110 = g->edx;
        eax = t109;
        edx = t110;
    COW_AT(100bee2d)
        wr32(sp0 - 0x128u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        t111 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xecu, 1, eax);
        t112 = g->edx;
        eax = t111;
        edx = t112;
    COW_AT(100bee37)
        wr32(sp0 - 0x12cu, eax);
        wr32(sp0 - 0x130u, 3u);
        loc_12c = eax;
        loc_130 = 3u;
    }
    COW_AT(100bee54)
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, loc_130, loc_12c, rd32(sp0 - 0x128u));
    t119 = g->ecx;
    t120 = g->edx;
    ecx = t119;
    edx = t120;
    COW_AT(100bee5b)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t121 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x114u);
    t122 = g->edx;
    eax = t121;
    edx = t122;
    COW_AT(100bee65)
    wr8(sp0 - 0x112u, 0u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t123 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t124 = g->edx;
    eax = t123;
    edx = t124;
    COW_AT(100bee79)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t125 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xecu, edx, 0);
    t126 = g->edx;
    eax = t125;
    edx = t126;
    COW_AT(100bee82)
    goto L_100bf1c6;
L_100bee87: ;
    COW_AT(100bee87)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t74 = g->edx;
    edx = t74;
    COW_AT(100bee97)
    if (ebp - 0x30u > 0x14u)
    {
        ebx = ebp - 0x30u;
        goto L_100beeda;
    }
    ebx = ebp - 0x30u;
    COW_AT(100beea2)
    t75 = rd32(COW_IMG(0x100bf320u) + rd8(COW_IMG(0x100bf330u) + ebx) * 4u);
    switch (t75 - RD)
    {
    case 0x100beeb1u: goto L_100beeb1;
    case 0x100beeb8u: goto L_100beeb8;
    case 0x100beec9u: goto L_100beec9;
    case 0x100beedau: goto L_100beeda;
    default: rt_fatal(g, COW_IMG(0x100beeaau), "switch");
    }
    return 0;
L_100beeb1: ;
    COW_AT(100beeb1)
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
L_100beede: ;
    COW_AT(100beede)
    wr32(sp0 - 0x110u, 0u);
    if (eax != 0u) goto L_100beefa;
    COW_AT(100beeea)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t76 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t77 = g->edx;
    eax = t76;
    edx = t77;
    COW_AT(100beef5)
    goto L_100bf1c6;
L_100beeb8: ;
    COW_AT(100beeb8)
    eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    goto L_100beede;
L_100beec9: ;
    COW_AT(100beec9)
    eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
    edx = rd32(self + 4u);
    goto L_100beede;
L_100beeda: ;
    COW_AT(100beeda)
    eax = rd32(sp0 - 0x110u);
    goto L_100beede;
L_100beefa: ;
    COW_AT(100beefa)
    wr32(sp0 - 0x128u, eax);
    wr32(sp0 - 0x12cu, sp0 - 0x110u);
    g->ebx = ebx;
    g->eax = sp0 - 0x110u;
    g->esp = sp0 - 0x124u;
    t78 = cow_fastcall(g, COW_IMG(0x100be700u), self, edx, 2, sp0 - 0x110u, eax);
    t79 = g->edx;
    eax = t78;
    edx = t79;
    COW_AT(100bef07)
    if ((uint8_t)eax != 0u) goto L_100bef1b;
    COW_AT(100bef0b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t80 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t81 = g->edx;
    eax = t80;
    edx = t81;
    COW_AT(100bef16)
    goto L_100bf1c6;
L_100bef1b: ;
    COW_AT(100bef1b)
    if (rd32(sp0 - 0x110u) != 0u)
    {
        edi = rd32(sp0 - 0x110u);
        goto L_100bef44;
    }
    COW_AT(100bef23)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t82 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t83 = g->edx;
    eax = t82;
    edx = t83;
    COW_AT(100bef2c)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t84 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    eax = t84;
    COW_AT(100bef35)
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return eax & 0xffffff00u;
L_100bef44: ;
    COW_AT(100bef44)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t85 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xecu, 0);
    t86 = g->edx;
    eax = t85;
    edx = t86;
    COW_AT(100bef4d)
    wr32(sp0 - 0x128u, 3u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t87 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x114u, 2, sp0 - 0x114u, 3u);
    eax = t87;
    COW_AT(100bef59)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    wr8(sp0 - 0x112u, 0u);
    g->edx = sp0 - 0x114u;
    g->esp = sp0 - 0x124u;
    cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t88 = g->ecx;
    t89 = g->edx;
    ecx = t88;
    edx = t89;
    COW_AT(100bef73)
    if (ebx > 0x14u) goto L_100befae;
    COW_AT(100bef78)
    t90 = rd32(COW_IMG(0x100bf348u) + rd8(COW_IMG(0x100bf358u) + ebx) * 4u);
    switch (t90 - RD)
    {
    case 0x100bece2u: eax = rd8(COW_IMG(0x100bf358u) + ebx); goto L_100bece2;
    case 0x100becffu: goto L_100becff;
    case 0x100bef87u: goto L_100bef87;
    case 0x100befaeu: goto L_100befae;
    default: rt_fatal(g, COW_IMG(0x100bef80u), "switch");
    }
    return 0;
L_100bef87: ;
    COW_AT(100bef87)
    wr32(sp0 - 0x128u, sp0 - 0xecu);
    g->eax = rd32(edi);
    t144 = rd32(edi);
    g->esp = sp0 - 0x124u;
    t145 = cow_thiscall(g, rd32(t144 + 0xcu), edi, 1, sp0 - 0xecu);
    eax = t145;
    COW_AT(100bef93)
    g->eax = eax;
    g->edx = rd32(edi);
    t146 = rd32(edi);
    g->esp = sp0 - 0x124u;
    t147 = cow_thiscall(g, rd32(t146 + 0x14u), edi, 0);
    t148 = g->edx;
    eax = t147;
    edx = t148;
    COW_AT(100bef9a)
    wr32(sp0 - 0x128u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t149 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xecu, 1, eax);
    t150 = g->edx;
    eax = t149;
    edx = t150;
    COW_AT(100befa4)
    wr32(sp0 - 0x12cu, eax);
    wr32(sp0 - 0x130u, 4u);
    loc_12c = eax;
    loc_130 = 4u;
    goto L_100befa7;
L_100befda: ;
    COW_AT(100befda)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    t37 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t38 = g->edx;
    eax = t37;
    edx = t38;
    COW_AT(100befea)
    if ((uint8_t)ebx == 0x36u) goto L_100bf008;
    COW_AT(100beff2)
    if ((uint8_t)ebx != 0x45u) goto L_100bf01b;
    COW_AT(100beff7)
    eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
    ecx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    edx = rd32(self + 4u);
L_100bf017: ;
    COW_AT(100bf017)
    if (eax != 0u) goto L_100bf02b;
L_100bf01b: ;
    COW_AT(100bf01b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t39 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t40 = g->edx;
    eax = t39;
    edx = t40;
    COW_AT(100bf026)
    goto L_100bf1c6;
L_100bf008: ;
    COW_AT(100bf008)
    eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    ecx = rd32(self + 4u);
    goto L_100bf017;
L_100bf02b: ;
    COW_AT(100bf02b)
    wr32(sp0 - 0x128u, sp0 - 0xc8u);
    wr32(sp0 - 0x12cu, eax);
    g->esp = sp0 - 0x124u;
    t41 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, sp0 - 0xc8u, 1, 2, eax, sp0 - 0xc8u);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(100bf036)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t43 = cow_thiscall(g, COW_IMG(0x10154a40u), eax, 2, rd32(sp0 - 0x12cu), sp0 - 0xc8u);
    t44 = g->edx;
    eax = t43;
    edx = t44;
    COW_AT(100bf03d)
    if ((uint8_t)eax != 0u) goto L_100bf062;
    COW_AT(100bf041)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t45 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(100bf04a)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t47 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    eax = t47;
    COW_AT(100bf053)
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return eax & 0xffffff00u;
L_100bf062: ;
    COW_AT(100bf062)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t48 = cow_thiscall(g, COW_IMG(0x101552e0u), sp0 - 0xc8u, 0);
    t49 = g->edx;
    eax = t48;
    edx = t49;
    COW_AT(100bf06b)
    if (eax == 0u)
    {
    COW_AT(100bf07b)
        wr32(sp0 - 0x128u, 0u);
        loc_128 = 0u;
    }
    else
    {
    COW_AT(100bf077)
        wr32(sp0 - 0x128u, 1u);
        loc_128 = 1u;
    }
    COW_AT(100bf07d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t50 = cow_thiscall(g, COW_IMG(0x1025a400u), self + 0x708u, 1, loc_128);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(100bf082)
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    cow_thiscall(g, COW_IMG(0x1025a0e0u), self + 0x708u, 0);
    t52 = g->ecx;
    t53 = g->edx;
    ecx = t52;
    edx = t53;
    COW_AT(100bf089)
    wr32(sp0 - 0x128u, 3u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t54 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x114u, 3u);
    t55 = g->edx;
    eax = t54;
    edx = t55;
    COW_AT(100bf095)
    wr8(sp0 - 0x112u, 0u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t56 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t57 = g->edx;
    eax = t56;
    edx = t57;
    COW_AT(100bf0a9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t58 = cow_thiscall(g, COW_IMG(0x101552d0u), sp0 - 0xc8u, 0);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(100bf0b2)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t60 = cow_thiscall(g, COW_IMG(0x101552d0u), sp0 - 0xc8u, 0);
    ebp = eax;
    eax = t60;
    COW_AT(100bf0bd)
    g->eax = eax;
    g->edx = rd32(ebp);
    t61 = rd32(ebp);
    g->esp = sp0 - 0x124u;
    t62 = cow_thiscall(g, rd32(t61 + 0x14u), ebp, 0);
    t63 = g->edx;
    edx = t63;
    ebx = eax;
    eax = t62;
    COW_AT(100bf0c7)
    wr32(sp0 - 0x128u, eax);
    g->eax = rd32(ebx);
    g->edx = edx;
    t64 = rd32(ebx);
    g->esp = sp0 - 0x128u;
    t65 = cow_thiscall(g, rd32(t64 + 0x18u), ebx, 0);
    t66 = g->edx;
    eax = t65;
    edx = t66;
    COW_AT(100bf0cf)
    wr32(sp0 - 0x12cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x12cu;
    t67 = cow_thiscall(g, COW_IMG(0x10155300u), sp0 - 0xc8u, 0);
    t68 = g->edx;
    eax = t67;
    edx = t68;
    COW_AT(100bf0d9)
    wr32(sp0 - 0x130u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t69 = cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, eax, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
    t70 = g->edx;
    eax = t69;
    edx = t70;
    COW_AT(100bf0e1)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t71 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x114u);
    eax = t71;
    COW_AT(100bf0eb)
    wr8(sp0 - 0x112u, 0u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = eax;
    g->edx = sp0 - 0x114u;
    g->esp = sp0 - 0x124u;
    t72 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t73 = g->edx;
    eax = t72;
    edx = t73;
    COW_AT(100bf0ff)
    goto L_100bf1c6;
L_100bf104: ;
    COW_AT(100bf104)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    COW_AT(100bf114)
    t16 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x128u, t16);
    g->eax = t16;
    g->edx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    t17 = rd16(sp0 - 0x10cu);
    g->esp = sp0 - 0x124u;
    t18 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t16);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(100bf131)
    if (eax != 0u) goto L_100bf156;
    COW_AT(100bf135)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t20 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(100bf13e)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t22 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    eax = t22;
    COW_AT(100bf147)
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return eax & 0xffffff00u;
L_100bf156: ;
    COW_AT(100bf156)
    wr32(sp0 - 0x128u, 0xffffffffu);
    if ((uint8_t)ebx != 0x15u)
    {
    COW_AT(100bf190)
        wr32(sp0 - 0x12cu, 1u);
        wr32(sp0 - 0x130u, eax);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        g->eax = eax;
        g->edx = sp0 - 0x90u;
        g->esp = sp0 - 0x130u;
        t29 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0x90u);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    COW_AT(100bf1a5)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x128u;
        t31 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x130u), 1u);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    COW_AT(100bf1ac)
        wr32(sp0 - 0x12cu, eax);
        wr32(sp0 - 0x130u, 4u);
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        t33 = cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, 4u, eax, rd32(sp0 - 0x128u));
        t34 = g->edx;
        eax = t33;
        edx = t34;
    COW_AT(100bf1ba)
        ecx = sp0 - 0x90u;
    }
    else
    {
    COW_AT(100bf15d)
        wr32(sp0 - 0x12cu, 0u);
        wr32(sp0 - 0x130u, eax);
        wr32(sp0 - 0x134u, sp0 - 0xa0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t23 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xa0u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    COW_AT(100bf172)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x128u;
        t25 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x130u), 0u);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    COW_AT(100bf179)
        wr32(sp0 - 0x12cu, eax);
        wr32(sp0 - 0x130u, 3u);
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        t27 = cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, 3u, eax, rd32(sp0 - 0x128u));
        t28 = g->edx;
        eax = t27;
        edx = t28;
    COW_AT(100bf187)
        ecx = sp0 - 0xa0u;
    }
    COW_AT(100bf1c1)
    g->esp = sp0 - 0x124u;
    t35 = cow_call_regs(g, COW_IMG(0x10257b40u), eax, ecx, edx, 1, 0);
    t36 = g->edx;
    eax = t35;
    edx = t36;
    goto L_100bf1c6;
L_100bf220: ;
    COW_AT(100bf220)
    t276 = rd32(self + 0x704u);
    wr32(self + 0x6f0u, t276);
    wr32(self + 0x704u, self + 0x110u);
    eax = t276;
    goto L_100bf238;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100be760(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100be775u:
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x118u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100be77eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be7a4u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be7bfu:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x110u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be7d9u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be7deu:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be7e9u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be806u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be815u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be822u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be827u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be837u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100be83fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100be850u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100be85fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100be864u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be871u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be876u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100be889u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100be89fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x128u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100be8a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be8abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be8bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be8bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be8c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be8ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be8ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be8e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be8e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be902u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be907u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be917u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100be923u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100be945u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x130u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100be94du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_128;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x124u;
        g->ecx = sp0 - 0xecu;
        wr32(sp0 - 0x130u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100be952u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x130u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100be95bu:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x130u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100be964u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x130u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100be973u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x124u;
        g->ecx = sp0 - 0xecu;
        wr32(sp0 - 0x130u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100be97au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x130u, sp0 - 0xecu);
        wr32(sp0 - 0x128u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x100be988u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be991u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be996u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be9a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100be9c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x128u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x100be9d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100be9d9u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100be9e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bea07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bea13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bea18u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bea28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bea46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bea52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bea57u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bea67u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bea85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bea91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bea96u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100beaa6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beaaeu:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100beabeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beaceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bead5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beae4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100beae9u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100beaf9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beb01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beb06u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beb09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beb1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beb2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beb32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beb36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beb50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100beb54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100beb5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100beb64u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100beb6cu:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100beb75u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100beb7eu:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100beb8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100beb99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bebb3u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bebbcu:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bebc3u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bebcbu:
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
        g->esp = sp0 - 0x128u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bebd3u:
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
        g->esp = sp0 - 0x12cu;
        g->ebp = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bebdbu:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bebe5u:
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
        g->esp = sp0 - 0x128u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bebf2u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bec02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bec0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bec1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bec23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bec34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bec45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bec49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bec5eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bec62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bec6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bec72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bec7au:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bec83u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bec8cu:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bec9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100beca7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100becc1u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100beccau:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100becd3u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bece2u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bece9u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100becf1u:
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
        g->esp = sp0 - 0x128u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100becf9u:
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
        g->esp = sp0 - 0x12cu;
        g->ebp = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100becffu:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bed0bu:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bed12u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bed1cu:
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
        g->esp = sp0 - 0x128u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bed24u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bed39u:
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
        g->esp = sp0 - 0x134u;
        g->ebx = self + 0x50u;
        g->edi = arg1 + 1u;
        wr32(sp0 - 0x12cu, sp0 - 0x10cu);
        wr32(sp0 - 0x128u, sp0 - 0x10au);
        (void)sp0;
        return 1;
    }
    case 0x100bed45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10au);
        (void)sp0;
        return 1;
    }
    case 0x100bed4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10au);
        (void)sp0;
        return 1;
    }
    case 0x100bed50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10au);
        (void)sp0;
        return 1;
    }
    case 0x100bed6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10au);
        (void)sp0;
        return 1;
    }
    case 0x100bed8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10au);
        (void)sp0;
        return 1;
    }
    case 0x100bed92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10au);
        (void)sp0;
        return 1;
    }
    case 0x100beda7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bedabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bedb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bedbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bedc3u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bedccu:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bedd5u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bede4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bededu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bedf9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bee13u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bee22u:
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
        g->esp = sp0 - 0x128u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bee25u:
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
        g->esp = sp0 - 0x128u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bee2du:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bee37u:
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
        g->esp = sp0 - 0x128u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bee3cu:
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
        g->esp = sp0 - 0x128u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bee3fu:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bee47u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bee51u:
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
        g->esp = sp0 - 0x128u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bee54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bee5bu:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bee65u:
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
        g->esp = sp0 - 0x128u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bee79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bee82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bee87u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bee97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beea2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beeb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beeb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beec9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beedau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beedeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beeeau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        wr32(sp0 - 0x110u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100beef5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beefau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        wr32(sp0 - 0x110u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100bef07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bef0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bef16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bef1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bef23u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bef2cu:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bef35u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bef44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bef4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100bef59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bef73u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bef78u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bef87u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bef93u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bef9au:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100befa4u:
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
        g->esp = sp0 - 0x128u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100befa7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        g->ebp = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100befaeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100befb8u:
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
        g->esp = sp0 - 0x128u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100befc0u:
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
        g->esp = sp0 - 0x128u;
        g->ebp = self + 0x708u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100befccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100befd5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100befdau:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100befeau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beff2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100beff7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bf008u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bf017u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bf01bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bf026u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bf02bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bf036u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x128u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x100bf03du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x100bf041u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x100bf04au:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x100bf053u:
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
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x100bf062u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x100bf06bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x100bf077u:
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
        g->esp = sp0 - 0x124u;
        g->ecx = self + 0x708u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x128u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x100bf07bu:
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
        g->esp = sp0 - 0x124u;
        g->ecx = self + 0x708u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x128u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x100bf07du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x128u;
        g->ecx = self + 0x708u;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bf082u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bf089u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bf095u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bf0a9u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bf0b2u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bf0bdu:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bf0c7u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bf0cfu:
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
        g->esp = sp0 - 0x128u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bf0d9u:
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
        g->esp = sp0 - 0x12cu;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bf0e1u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bf0ebu:
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
        g->esp = sp0 - 0x128u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bf0ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100bf104u:
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
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bf114u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x128u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x100bf131u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf135u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf13eu:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf147u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf156u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf15du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x128u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x100bf172u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x134u, sp0 - 0xa0u);
        wr32(sp0 - 0x12cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100bf179u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x134u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x100bf187u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x134u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x100bf190u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x128u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x100bf1a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x12cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100bf1acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100bf1bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100bf1c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_130;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf1c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf1d3u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bf1d7u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bf1e1u:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        (void)sp0;
        return 1;
    }
    case 0x100bf1edu:
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
        g->esp = sp0 - 0x124u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x128u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100bf1f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x128u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100bf201u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        (void)sp0;
        return 1;
    }
    case 0x100bf20eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100bf220u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf238u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf241u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x100bf24au:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100be760(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100be760(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
