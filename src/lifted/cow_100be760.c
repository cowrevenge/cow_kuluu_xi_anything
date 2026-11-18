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
    uint32_t loc_118;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_124;
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
    case 0x100be7a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be7a4;
    case 0x100be7d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be7d9;
    case 0x100be7deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be7de;
    case 0x100be7e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be7e9;
    case 0x100be806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be806;
    case 0x100be815u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be815;
    case 0x100be827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be827;
    case 0x100be83fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be83f;
    case 0x100be850u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be850;
    case 0x100be85fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be85f;
    case 0x100be864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); goto E_100be864;
    case 0x100be876u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100be876;
    case 0x100be8a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be8a4;
    case 0x100be8abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be8ab;
    case 0x100be8bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be8bf;
    case 0x100be8c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be8c7;
    case 0x100be8ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be8ce;
    case 0x100be8e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be8e2;
    case 0x100be8e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be8e8;
    case 0x100be907u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be907;
    case 0x100be94du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100be94d;
    case 0x100be973u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_100be973;
    case 0x100be996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be996;
    case 0x100be9d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100be9d9;
    case 0x100bea18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100bea18;
    case 0x100bea57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100bea57;
    case 0x100bea96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100bea96;
    case 0x100beaaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100beaae;
    case 0x100beaceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100beace;
    case 0x100beae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100beae9;
    case 0x100beb01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb01;
    case 0x100beb06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb06;
    case 0x100beb09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb09;
    case 0x100beb1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb1a;
    case 0x100beb2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb2b;
    case 0x100beb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb32;
    case 0x100beb36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb36;
    case 0x100beb54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb54;
    case 0x100beb64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beb64;
    case 0x100beb6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100beb6c;
    case 0x100beb8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100beb8d;
    case 0x100bebf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100bebf2;
    case 0x100bec0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec0d;
    case 0x100bec1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec1c;
    case 0x100bec23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec23;
    case 0x100bec34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec34;
    case 0x100bec45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec45;
    case 0x100bec49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec49;
    case 0x100bec62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec62;
    case 0x100bec72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bec72;
    case 0x100bec7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bec7a;
    case 0x100bec9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bec9b;
    case 0x100becd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100becd3;
    case 0x100bece2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bece2;
    case 0x100becffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100becff;
    case 0x100bed24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100bed24;
    case 0x100bed4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed4d;
    case 0x100bed50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed50;
    case 0x100bed6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed6d;
    case 0x100bed8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed8a;
    case 0x100bed92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bed92;
    case 0x100bedabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bedab;
    case 0x100bedbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bedbb;
    case 0x100bedc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bedc3;
    case 0x100bede4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bede4;
    case 0x100bee22u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100bee22;
    case 0x100bee3cu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100bee3c;
    case 0x100bee54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); goto E_100bee54;
    case 0x100bee87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100bee87;
    case 0x100beea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beea2;
    case 0x100beeb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beeb1;
    case 0x100beeb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beeb8;
    case 0x100beec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beec9;
    case 0x100beedau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beeda;
    case 0x100beedeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beede;
    case 0x100beeeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beeea;
    case 0x100beefau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beefa;
    case 0x100bef0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bef0b;
    case 0x100bef1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bef1b;
    case 0x100bef23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bef23;
    case 0x100bef44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bef44;
    case 0x100bef78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bef78;
    case 0x100bef87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100bef87;
    case 0x100befa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); goto E_100befa7;
    case 0x100befaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100befae;
    case 0x100befc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100befc0;
    case 0x100befdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100befda;
    case 0x100beff2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beff2;
    case 0x100beff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100beff7;
    case 0x100bf008u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf008;
    case 0x100bf017u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf017;
    case 0x100bf01bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf01b;
    case 0x100bf02bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf02b;
    case 0x100bf041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf041;
    case 0x100bf062u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf062;
    case 0x100bf077u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf077;
    case 0x100bf07bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf07b;
    case 0x100bf07du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_100bf07d;
    case 0x100bf104u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x124u); in_esi = rd32(sp0 - 0x120u); in_ebp = rd32(sp0 - 0x11cu); in_ebx = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x11cu); g->ebx = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x120u); goto E_100bf104;
    case 0x100bf135u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf135;
    case 0x100bf156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf156;
    case 0x100bf15du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf15d;
    case 0x100bf190u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf190;
    case 0x100bf1c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_100bf1c1;
    case 0x100bf1c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); goto E_100bf1c6;
    case 0x100bf1d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf1d7;
    case 0x100bf1e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100bf1e1;
    case 0x100bf220u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100bf220;
    case 0x100bf238u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100bf238;
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
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xd4u, 0);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(self + 0x6f0u);
    t6 = rd8(arg1);
    wr8(sp0 - 0x114u, 0u);
    wr8(sp0 - 0x113u, 0u);
    wr8(sp0 - 0x112u, 0u);
    wr8(sp0 - 0x110u, (uint8_t)t6);
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t3;
        edx = t4;
        ebx = (in_ebx & 0xffffff00u) | t6;
    }
    else
    {
        edx = t4;
        ebx = (in_ebx & 0xffffff00u) | t6;
    COW_AT(100be7a4)
        wr32(sp0 - 0x128u, self + 0x110u);
        t7 = rd32(self + 0x704u);
        wr8(t7, 0u);
        g->eax = t7;
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        t8 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, self + 0x110u);
        t9 = g->edx;
        t10 = rd32(self + 0x6f0u);
        wr8(self + 0x110u, 0u);
        wr32(self + 0x704u, t10);
        wr32(self + 0x6f0u, 0u);
        eax = t8;
        ecx = t10;
        edx = t9;
    }
    COW_AT(100be7d9)
    if (rd8(arg1) == 0u)
    {
    COW_AT(100be7de)
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
        t11 = g->ecx;
        t12 = g->edx;
        ecx = t11;
        edx = t12;
    }
    COW_AT(100be7e9)
    t13 = rd32(sp0 - 0x110u);
    wr8(self + 0x784u, 0u);
    if ((uint8_t)t13 - 1u > 0x44u)
    {
        eax = (uint8_t)t13 - 1u;
        loc_118 = in_ebx;
        loc_11c = in_ebp;
        loc_120 = in_esi;
        loc_124 = in_edi;
        goto L_100bf1c6;
    }
    eax = (uint8_t)t13 - 1u;
    ebp = (uint8_t)t13;
    COW_AT(100be806)
    t14 = rd32(COW_IMG(0x100bf25cu) + rd8(COW_IMG(0x100bf2a8u) + eax) * 4u);
    switch (t14 - RD)
    {
    case 0x100be815u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100be815;
    case 0x100be827u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); goto L_100be827;
    case 0x100be864u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); loc_118 = in_ebx; loc_11c = in_ebp; loc_120 = in_esi; loc_124 = in_edi; goto L_100be864;
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
    case 0x100bf1c6u: edx = rd8(COW_IMG(0x100bf2a8u) + eax); loc_118 = in_ebx; loc_11c = in_ebp; loc_120 = in_esi; loc_124 = in_edi; goto L_100bf1c6;
    default: rt_fatal(g, COW_IMG(0x100be80eu), "switch");
    }
    return 0;
L_100be815: ;
    COW_AT(100be815)
    wr32(sp0 - 0x128u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t261 = cow_thiscall(g, COW_IMG(0x1025a400u), self + 0x708u, 1, 1u);
    t262 = g->edx;
    eax = t261;
    edx = t262;
    loc_118 = in_ebx;
    loc_11c = in_ebp;
    loc_120 = in_esi;
    loc_124 = in_edi;
L_100bf1c6: ;
    COW_AT(100bf1c6)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t263 = cow_thiscall(g, COW_IMG(0x10259f40u), self + 0x708u, 0);
    t264 = g->edx;
    if (t263 == 0u)
    {
        edx = t264;
        goto L_100bf220;
    }
    eax = t263;
    edx = t264;
    COW_AT(100bf1d7)
    if (rd8(self + 0x784u) != 0u) goto L_100bf220;
    COW_AT(100bf1e1)
    wr32(sp0 - 0x128u, sp0 - 0xd4u);
    g->eax = sp0 - 0xd4u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t265 = cow_thiscall(g, COW_IMG(0x10259f50u), self + 0x708u, 1, sp0 - 0xd4u);
    t266 = g->edx;
    g->edx = t266;
    t267 = cow_thiscall(g, COW_IMG(0x10259ea0u), self + 0x708u, 0);
    t268 = g->edx;
    t269 = rd32(self + 0xcu);
    wr32(sp0 - 0x128u, t269);
    t270 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xd4u, 1, t269);
    t271 = g->ecx;
    wr32(sp0 - 0x12cu, t270);
    t272 = rd32(self + 0x704u);
    wr32(sp0 - 0x130u, t272);
    g->edx = t272;
    g->esp = sp0 - 0x10cu;
    t273 = cow_call_regs(g, COW_IMG(0x100c2bf0u), t270, t271, g->edx, 1, 9, t272, t270, rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    t274 = g->edx;
    wr32(self + 0x704u, t273);
    wr32(self + 0xcu, 0u);
    eax = t273;
    edx = t274;
L_100bf238: ;
    COW_AT(100bf238)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t276 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t277 = g->edx;
    t278 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return (t278 & 0xffffff00u) | 1u;
L_100be827: ;
    COW_AT(100be827)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t254 = g->ecx;
    if ((uint8_t)ebx != 3u)
    {
    COW_AT(100be850)
        eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
        ecx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
        edx = rd32(self + 4u);
    }
    else
    {
        ecx = t254;
    COW_AT(100be83f)
        eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
        edx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    }
    COW_AT(100be85f)
    if (eax != 1u) goto L_100be876;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
L_100be864: ;
    COW_AT(100be864)
    wr32(sp0 - 0x128u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t255 = cow_thiscall(g, COW_IMG(0x1025a400u), self + 0x708u, 1, 0u);
    t256 = g->edx;
    eax = t255;
    edx = t256;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
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
    t257 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10352ff0u), eax, rd32(sp0 - 0x124u), rd32(sp0 - 0x120u));
    t258 = g->edx;
    wr32(sp0 - 0x128u, sp0 - 0x80u);
    g->edx = t258;
    g->esp = sp0 - 0x124u;
    t259 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, sp0 - 0x80u);
    t260 = g->edx;
    eax = t259;
    edx = t260;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
    goto L_100bf1c6;
L_100be8a4: ;
    COW_AT(100be8a4)
    if (rd32(self + 0x20u) == 0u) goto L_100be8bf;
    eax = rd32(self + 0x20u);
    COW_AT(100be8ab)
    t248 = rd32(self + 0x10u);
    wr32(sp0 - 0x128u, t248);
    g->eax = eax;
    g->edx = t248;
    g->esp = sp0 - 0x124u;
    t249 = cow_thiscall(g, COW_IMG(0x1025a380u), self + 0x708u, 1, t248);
    t250 = g->edx;
    eax = t249;
    edx = t250;
    loc_118 = in_ebx;
    loc_11c = in_ebp;
    loc_120 = in_esi;
    loc_124 = in_edi;
    goto L_100bf1c6;
L_100be8bf: ;
    COW_AT(100be8bf)
    eax = rd32(self + 0x10u);
    edi = rd32(self + 0x18u);
L_100be8e8: ;
    COW_AT(100be8e8)
    wr32(sp0 - 0x128u, 0xffffffffu);
    wr32(sp0 - 0x12cu, eax);
    t251 = (edi != 1u) + 3u;
    wr32(sp0 - 0x130u, t251);
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t252 = cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, t251, eax, 0xffffffffu);
    t253 = g->edx;
    eax = t252;
    edx = t253;
    loc_118 = in_ebx;
    loc_11c = in_ebp;
    loc_120 = in_esi;
    loc_124 = in_edi;
    goto L_100bf1c6;
L_100be8c7: ;
    COW_AT(100be8c7)
    if (rd32(self + 0x24u) == 0u) goto L_100be8e2;
    eax = rd32(self + 0x24u);
    COW_AT(100be8ce)
    t245 = rd32(self + 0x14u);
    wr32(sp0 - 0x128u, t245);
    g->eax = eax;
    g->edx = t245;
    g->esp = sp0 - 0x124u;
    t246 = cow_thiscall(g, COW_IMG(0x1025a380u), self + 0x708u, 1, t245);
    t247 = g->edx;
    eax = t246;
    edx = t247;
    loc_118 = in_ebx;
    loc_11c = in_ebp;
    loc_120 = in_esi;
    loc_124 = in_edi;
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
    t228 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t229 = g->edx;
    cow_thiscall(g, COW_IMG(0x102588a0u), sp0 - 0xecu, 0);
    wr32(sp0 - 0x128u, 0u);
    t230 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x12cu, t230);
    wr32(sp0 - 0x130u, sp0 - 0xecu);
    g->eax = sp0 - 0xecu;
    g->edx = rd32(self + 4u);
    t231 = rd32(self + 4u);
    t232 = cow_thiscall(g, COW_IMG(0x10157050u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0xecu, t230, 0u);
    t233 = g->edx;
    if (t232 != 0u)
    {
        eax = t232;
        edx = t233;
        goto L_100be973;
    }
    eax = t232;
    edx = t233;
    COW_AT(100be94d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t234 = cow_thiscall(g, COW_IMG(0x10258860u), sp0 - 0xecu, 0);
    t235 = g->edx;
    t236 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, t235, 0);
    t237 = g->edx;
    t238 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return t238 & 0xffffff00u;
L_100be973: ;
    COW_AT(100be973)
    wr32(sp0 - 0x128u, 0xffffffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t239 = cow_thiscall_cdecl(g, COW_IMG(0x10258910u), sp0 - 0xecu, 1, 0xffffffffu);
    t240 = g->edx;
    wr32(sp0 - 0x12cu, t239);
    wr32(sp0 - 0x130u, 3u);
    g->edx = t240;
    t241 = cow_call_regs(g, COW_IMG(0x1025a2f0u), t239, self + 0x708u, g->edx, 0, 3, 3u, t239, 0xffffffffu);
    t242 = g->edx;
    g->edx = t242;
    t243 = cow_thiscall(g, COW_IMG(0x10258860u), sp0 - 0xecu, 0);
    t244 = g->edx;
    eax = t243;
    edx = t244;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
    goto L_100bf1c6;
L_100be996: ;
    COW_AT(100be996)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t222 = g->edx;
    wr32(sp0 - 0x128u, 0xffffffffu);
    t223 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
    wr32(sp0 - 0x12cu, t223);
    g->esp = sp0 - 0x128u;
    t224 = cow_call_regs(g, COW_IMG(0x10227390u), t223, rd32(COW_IMG(0x106671b4u)), t222, 0, 1, t223);
    t225 = g->edx;
    wr32(sp0 - 0x12cu, t224);
    wr32(sp0 - 0x130u, 2u);
    g->edx = t225;
    g->esp = sp0 - 0x124u;
    t226 = cow_call_regs(g, COW_IMG(0x1025a2f0u), t224, self + 0x708u, g->edx, 0, 3, 2u, t224, 0xffffffffu);
    t227 = g->edx;
    eax = t226;
    edx = t227;
    loc_118 = in_ebx;
    loc_11c = in_ebp;
    loc_120 = in_esi;
    loc_124 = in_edi;
    goto L_100bf1c6;
L_100be9d9: ;
    COW_AT(100be9d9)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t216 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc50u);
    wr32(sp0 - 0x128u, t216);
    t217 = rd32(self + 4u);
    t218 = cow_call_regs(g, COW_IMG(0x102273f0u), t216, rd32(COW_IMG(0x106671b4u)), t217, 0, 1, t216);
    t219 = g->edx;
    wr32(sp0 - 0x128u, t218);
    g->edx = t219;
    t220 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, t218);
    t221 = g->edx;
    eax = t220;
    edx = t221;
    loc_118 = in_ebx;
    loc_11c = in_ebp;
    loc_120 = in_esi;
    loc_124 = in_edi;
    goto L_100bf1c6;
L_100bea18: ;
    COW_AT(100bea18)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t210 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x128u, t210);
    g->eax = t210;
    g->edx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    t211 = rd16(sp0 - 0x10cu);
    t212 = cow_thiscall(g, COW_IMG(0x101673e0u), rd32(COW_IMG(0x10621950u)), 1, t210);
    t213 = g->edx;
    wr32(sp0 - 0x128u, t212);
    g->edx = t213;
    t214 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, t212);
    t215 = g->edx;
    eax = t214;
    edx = t215;
    loc_118 = in_ebx;
    loc_11c = in_ebp;
    loc_120 = in_esi;
    loc_124 = in_edi;
    goto L_100bf1c6;
L_100bea57: ;
    COW_AT(100bea57)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t204 = g->edx;
    t205 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x128u, t205);
    g->eax = t205;
    g->edx = t204;
    t206 = cow_thiscall(g, COW_IMG(0x101673f0u), rd32(COW_IMG(0x10621950u)), 1, t205);
    t207 = g->edx;
    wr32(sp0 - 0x128u, t206);
    g->edx = t207;
    t208 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, t206);
    t209 = g->edx;
    eax = t208;
    edx = t209;
    loc_118 = in_ebx;
    loc_11c = in_ebp;
    loc_120 = in_esi;
    loc_124 = in_edi;
    goto L_100bf1c6;
L_100bea96: ;
    COW_AT(100bea96)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    t197 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t198 = g->edx;
    t199 = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    wr32(sp0 - 0x134u, t199);
    eax = t197;
    ecx = t199;
    edx = t198;
    loc_134 = t199;
L_100beace: ;
    COW_AT(100beace)
    wr32(sp0 - 0x138u, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x130u;
    t200 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, loc_134);
    t201 = g->edx;
    wr32(sp0 - 0x128u, t200);
    g->edx = t201;
    g->esp = sp0 - 0x124u;
    t202 = cow_thiscall(g, COW_IMG(0x1025a140u), self + 0x708u, 1, t200);
    t203 = g->edx;
    eax = t202;
    edx = t203;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
    goto L_100bf1c6;
L_100beaae: ;
    COW_AT(100beaae)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t196 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x134u, t196);
    eax = t196;
    ecx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    edx = rd32(self + 4u);
    loc_134 = t196;
    goto L_100beace;
L_100beae9: ;
    COW_AT(100beae9)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t169 = g->edx;
    if (ebp == 0x39u)
    {
        edx = t169;
    COW_AT(100beb2b)
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    }
    else
    {
        edx = t169;
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
    t170 = cow_stdcall(g, COW_IMG(0x100be6a0u), 2, sp0 - 0x110u, eax + 0xe000u);
    t171 = g->edx;
    if ((uint8_t)t170 != 0u)
    {
        eax = t170;
        edx = t171;
        goto L_100beb64;
    }
    eax = t170;
    edx = t171;
    COW_AT(100beb54)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t172 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t173 = g->edx;
    eax = t172;
    edx = t173;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
    goto L_100bf1c6;
L_100beb64: ;
    COW_AT(100beb64)
    if (0u) goto L_100beb8d;
    COW_AT(100beb6c)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t174 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t175 = g->edx;
    t176 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return t176 & 0xffffff00u;
L_100beb8d: ;
    COW_AT(100beb8d)
    wr32(sp0 - 0x128u, 8u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t177 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x114u, 2, sp0 - 0x114u, 8u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    wr8(sp0 - 0x112u, 0u);
    g->edx = sp0 - 0x114u;
    t178 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t179 = g->edx;
    g->edx = t179;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xecu, 0);
    t180 = g->edx;
    g->eax = rd32(0u);
    t181 = rd32(0u);
    t182 = cow_thiscall(g, rd32(t181 + 0x1cu), 0u, 0);
    wr32(sp0 - 0x128u, t182);
    g->edx = rd32(0u);
    t183 = rd32(0u);
    g->esp = sp0 - 0x128u;
    t184 = cow_thiscall(g, rd32(t183 + 0x18u), 0u, 0);
    t185 = g->edx;
    wr32(sp0 - 0x12cu, t184);
    g->eax = rd32(0u);
    g->edx = t185;
    t186 = rd32(0u);
    g->esp = sp0 - 0x12cu;
    t187 = cow_thiscall(g, rd32(t186 + 0x20u), 0u, 0);
    t188 = g->edx;
    wr32(sp0 - 0x130u, t187);
    g->edx = t188;
    g->esp = sp0 - 0x124u;
    t189 = cow_call_regs(g, COW_IMG(0x1025a2f0u), t187, self + 0x708u, g->edx, 0, 3, t187, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
    t190 = g->edx;
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    t191 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x114u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    eax = t191;
    edx = sp0 - 0x114u;
L_100befc0: ;
    COW_AT(100befc0)
    wr8(sp0 - 0x112u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t192 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t193 = g->edx;
    t194 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xecu, t193, 0);
    t195 = g->edx;
    eax = t194;
    edx = t195;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
    goto L_100bf1c6;
L_100bebf2: ;
    COW_AT(100bebf2)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t126 = g->edx;
    if (ebp - 0x20u > 8u)
    {
        edx = t126;
        ebx = ebp - 0x20u;
        goto L_100bec45;
    }
    ebx = ebp - 0x20u;
    COW_AT(100bec0d)
    t127 = rd32(COW_IMG(0x100bf2f0u) + rd8(COW_IMG(0x100bf2fcu) + ebx) * 4u);
    switch (t127 - RD)
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
    t128 = cow_stdcall(g, COW_IMG(0x100be6a0u), 2, sp0 - 0x110u, eax);
    t129 = g->ecx;
    t130 = g->edx;
    if ((uint8_t)t128 != 0u)
    {
        eax = t128;
        ecx = t129;
        edx = t130;
        goto L_100bec72;
    }
    eax = t128;
    edx = t130;
    COW_AT(100bec62)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t131 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t132 = g->edx;
    eax = t131;
    edx = t132;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
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
    if (0u) goto L_100bec9b;
    COW_AT(100bec7a)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t133 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t134 = g->edx;
    t135 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return t135 & 0xffffff00u;
L_100bec9b: ;
    COW_AT(100bec9b)
    wr32(sp0 - 0x128u, 2u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    g->edx = sp0 - 0x114u;
    g->esp = sp0 - 0x124u;
    cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x114u, 2u);
    t136 = g->edx;
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    wr8(sp0 - 0x112u, 0u);
    g->eax = sp0 - 0x114u;
    g->edx = t136;
    t137 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t138 = g->edx;
    g->edx = t138;
    t139 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xecu, 0);
    t140 = g->ecx;
    t141 = g->edx;
    if (ebx > 8u)
    {
        ecx = t140;
        edx = t141;
        goto L_100befae;
    }
    eax = t139;
    edx = t141;
    COW_AT(100becd3)
    t142 = rd32(COW_IMG(0x100bf308u) + rd8(COW_IMG(0x100bf314u) + ebx) * 4u);
    edi = 0u;
    switch (t142 - RD)
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
    t157 = rd32(edi);
    g->esp = sp0 - 0x124u;
    t158 = cow_thiscall(g, rd32(t157 + 0x1cu), edi, 0);
    t159 = g->edx;
    wr32(sp0 - 0x128u, t158);
    g->eax = rd32(edi);
    t160 = rd32(edi);
    g->esp = sp0 - 0x128u;
    t161 = cow_thiscall(g, rd32(t160 + 0x18u), edi, 0);
    wr32(sp0 - 0x12cu, t161);
    g->edx = rd32(edi);
    t162 = rd32(edi);
    g->esp = sp0 - 0x12cu;
    t163 = cow_thiscall(g, rd32(t162 + 0x20u), edi, 0);
    t164 = g->edx;
    wr32(sp0 - 0x130u, t163);
    eax = t163;
    edx = t164;
    loc_12c = rd32(sp0 - 0x12cu);
    loc_130 = t163;
L_100befa7: ;
    COW_AT(100befa7)
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, loc_130, loc_12c, rd32(sp0 - 0x128u));
    t165 = g->ecx;
    t166 = g->edx;
    ecx = t165;
    edx = t166;
L_100befae: ;
    COW_AT(100befae)
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t167 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x114u);
    t168 = g->edx;
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    eax = t167;
    edx = t168;
    goto L_100befc0;
L_100becff: ;
    COW_AT(100becff)
    wr32(sp0 - 0x128u, sp0 - 0xecu);
    g->eax = rd32(edi);
    t150 = rd32(edi);
    g->esp = sp0 - 0x124u;
    t151 = cow_thiscall(g, rd32(t150 + 4u), edi, 1, sp0 - 0xecu);
    g->edx = rd32(edi);
    t152 = rd32(edi);
    t153 = cow_thiscall(g, rd32(t152 + 0x14u), edi, 0);
    t154 = g->edx;
    wr32(sp0 - 0x128u, t153);
    g->edx = t154;
    t155 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xecu, 1, t153);
    t156 = g->edx;
    wr32(sp0 - 0x12cu, t155);
    wr32(sp0 - 0x130u, 3u);
    eax = t155;
    edx = t156;
    loc_12c = t155;
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
    t90 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, sp0 - 0x10au, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t91 = g->ecx;
    t92 = g->edx;
    t93 = arg1 + t90 + 1u;
    wr32(sp0 - 0x12cu, t93);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t93, g->ecx, t92, 1, 3, self + 0x50u, t93, sp0 - 0x10au);
    t94 = g->edx;
    if (ebp == 0x29u)
    {
    COW_AT(100bed6d)
        eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10au) * 4u + 0xc64u);
        edx = (uint32_t)(int16_t)rd16(sp0 - 0x10au);
        ebx = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    }
    else
    {
        edx = t94;
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
    t95 = cow_stdcall(g, COW_IMG(0x100be6a0u), 2, sp0 - 0x110u, eax);
    t96 = g->edx;
    if ((uint8_t)t95 != 0u)
    {
        eax = t95;
        edx = t96;
        goto L_100bedbb;
    }
    eax = t95;
    edx = t96;
    COW_AT(100bedab)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t97 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t98 = g->edx;
    eax = t97;
    edx = t98;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
    goto L_100bf1c6;
L_100bedbb: ;
    COW_AT(100bedbb)
    if (0u) goto L_100bede4;
    COW_AT(100bedc3)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t99 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t100 = g->edx;
    t101 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return t101 & 0xffffff00u;
L_100bede4: ;
    COW_AT(100bede4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t102 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xecu, 0);
    t103 = g->edx;
    wr32(sp0 - 0x128u, 2u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    t104 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x114u, 2, sp0 - 0x114u, 2u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    wr8(sp0 - 0x112u, 0u);
    g->edx = sp0 - 0x114u;
    cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t105 = g->edx;
    wr32(sp0 - 0x128u, sp0 - 0xecu);
    if (ebx != 1u)
    {
        eax = rd32(0u);
        edx = t105;
    COW_AT(100bee3c)
        g->eax = eax;
        g->esp = sp0 - 0x124u;
        t112 = cow_thiscall(g, rd32(eax + 0xcu), 0u, 1, sp0 - 0xecu);
        g->edx = rd32(0u);
        t113 = rd32(0u);
        t114 = cow_thiscall(g, rd32(t113 + 0x14u), 0u, 0);
        t115 = g->edx;
        wr32(sp0 - 0x128u, t114);
        g->edx = t115;
        t116 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xecu, 1, t114);
        t117 = g->edx;
        wr32(sp0 - 0x12cu, t116);
        wr32(sp0 - 0x130u, 4u);
        eax = t116;
        edx = t117;
        loc_12c = t116;
        loc_130 = 4u;
    }
    else
    {
        eax = rd32(0u);
        edx = t105;
    COW_AT(100bee22)
        g->eax = eax;
        g->esp = sp0 - 0x124u;
        t106 = cow_thiscall(g, rd32(eax + 4u), 0u, 1, sp0 - 0xecu);
        g->edx = rd32(0u);
        t107 = rd32(0u);
        t108 = cow_thiscall(g, rd32(t107 + 0x14u), 0u, 0);
        t109 = g->edx;
        wr32(sp0 - 0x128u, t108);
        g->edx = t109;
        t110 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xecu, 1, t108);
        t111 = g->edx;
        wr32(sp0 - 0x12cu, t110);
        wr32(sp0 - 0x130u, 3u);
        eax = t110;
        edx = t111;
        loc_12c = t110;
        loc_130 = 3u;
    }
    COW_AT(100bee54)
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x1025a2f0u), eax, self + 0x708u, g->edx, 0, 3, loc_130, loc_12c, rd32(sp0 - 0x128u));
    t118 = g->ecx;
    t119 = g->edx;
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    g->edx = t119;
    t120 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x114u);
    t121 = g->edx;
    wr8(sp0 - 0x112u, 0u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->edx = t121;
    t122 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t123 = g->edx;
    t124 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xecu, t123, 0);
    t125 = g->edx;
    eax = t124;
    edx = t125;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
    goto L_100bf1c6;
L_100bee87: ;
    COW_AT(100bee87)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t73 = g->edx;
    if (ebp - 0x30u > 0x14u)
    {
        edx = t73;
        ebx = ebp - 0x30u;
        goto L_100beeda;
    }
    edx = t73;
    ebx = ebp - 0x30u;
    COW_AT(100beea2)
    t74 = rd32(COW_IMG(0x100bf320u) + rd8(COW_IMG(0x100bf330u) + ebx) * 4u);
    switch (t74 - RD)
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
    t75 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t76 = g->edx;
    eax = t75;
    edx = t76;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
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
    t77 = cow_fastcall(g, COW_IMG(0x100be700u), self, edx, 2, sp0 - 0x110u, eax);
    t78 = g->edx;
    if ((uint8_t)t77 != 0u)
    {
        eax = t77;
        edx = t78;
        goto L_100bef1b;
    }
    eax = t77;
    edx = t78;
    COW_AT(100bef0b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t79 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t80 = g->edx;
    eax = t79;
    edx = t80;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
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
    t81 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t82 = g->edx;
    t83 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return t83 & 0xffffff00u;
L_100bef44: ;
    COW_AT(100bef44)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t84 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xecu, 0);
    t85 = g->edx;
    wr32(sp0 - 0x128u, 3u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    t86 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x114u, 2, sp0 - 0x114u, 3u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    wr8(sp0 - 0x112u, 0u);
    g->edx = sp0 - 0x114u;
    cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t87 = g->ecx;
    t88 = g->edx;
    if (ebx > 0x14u)
    {
        ecx = t87;
        edx = t88;
        goto L_100befae;
    }
    ecx = t87;
    edx = t88;
    COW_AT(100bef78)
    t89 = rd32(COW_IMG(0x100bf348u) + rd8(COW_IMG(0x100bf358u) + ebx) * 4u);
    switch (t89 - RD)
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
    t143 = rd32(edi);
    g->esp = sp0 - 0x124u;
    t144 = cow_thiscall(g, rd32(t143 + 0xcu), edi, 1, sp0 - 0xecu);
    g->edx = rd32(edi);
    t145 = rd32(edi);
    t146 = cow_thiscall(g, rd32(t145 + 0x14u), edi, 0);
    t147 = g->edx;
    wr32(sp0 - 0x128u, t146);
    g->edx = t147;
    t148 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xecu, 1, t146);
    t149 = g->edx;
    wr32(sp0 - 0x12cu, t148);
    wr32(sp0 - 0x130u, 4u);
    eax = t148;
    edx = t149;
    loc_12c = t148;
    loc_130 = 4u;
    goto L_100befa7;
L_100befda: ;
    COW_AT(100befda)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    t36 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x10cu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t37 = g->edx;
    if ((uint8_t)ebx == 0x36u)
    {
        edx = t37;
        goto L_100bf008;
    }
    eax = t36;
    edx = t37;
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
    t38 = cow_thiscall(g, COW_IMG(0x10259ed0u), self + 0x708u, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
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
    t40 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, sp0 - 0xc8u, 1, 2, eax, sp0 - 0xc8u);
    t41 = g->edx;
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x10154a40u), t40, 2, rd32(sp0 - 0x12cu), sp0 - 0xc8u);
    t43 = g->edx;
    if ((uint8_t)t42 != 0u)
    {
        eax = t42;
        edx = t43;
        goto L_100bf062;
    }
    eax = t42;
    edx = t43;
    COW_AT(100bf041)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t44 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t45 = g->edx;
    t46 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return t46 & 0xffffff00u;
L_100bf062: ;
    COW_AT(100bf062)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t47 = cow_thiscall(g, COW_IMG(0x101552e0u), sp0 - 0xc8u, 0);
    t48 = g->edx;
    if (t47 == 0u)
    {
        eax = t47;
        edx = t48;
    COW_AT(100bf07b)
        wr32(sp0 - 0x128u, 0u);
        loc_128 = 0u;
    }
    else
    {
        eax = t47;
        edx = t48;
    COW_AT(100bf077)
        wr32(sp0 - 0x128u, 1u);
        loc_128 = 1u;
    }
    COW_AT(100bf07d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t49 = cow_thiscall(g, COW_IMG(0x1025a400u), self + 0x708u, 1, loc_128);
    t50 = g->edx;
    g->edx = t50;
    cow_thiscall(g, COW_IMG(0x1025a0e0u), self + 0x708u, 0);
    t51 = g->ecx;
    t52 = g->edx;
    wr32(sp0 - 0x128u, 3u);
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    g->edx = t52;
    t53 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), t51, 2, sp0 - 0x114u, 3u);
    t54 = g->edx;
    wr8(sp0 - 0x112u, 0u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->edx = t54;
    t55 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t56 = g->edx;
    g->edx = t56;
    t57 = cow_thiscall(g, COW_IMG(0x101552d0u), sp0 - 0xc8u, 0);
    t58 = g->edx;
    t59 = cow_thiscall(g, COW_IMG(0x101552d0u), sp0 - 0xc8u, 0);
    g->edx = rd32(t57);
    t60 = rd32(t57);
    t61 = cow_thiscall(g, rd32(t60 + 0x14u), t57, 0);
    t62 = g->edx;
    wr32(sp0 - 0x128u, t61);
    g->eax = rd32(t59);
    g->edx = t62;
    t63 = rd32(t59);
    g->esp = sp0 - 0x128u;
    t64 = cow_thiscall(g, rd32(t63 + 0x18u), t59, 0);
    t65 = g->edx;
    wr32(sp0 - 0x12cu, t64);
    g->edx = t65;
    g->esp = sp0 - 0x12cu;
    t66 = cow_thiscall(g, COW_IMG(0x10155300u), sp0 - 0xc8u, 0);
    t67 = g->edx;
    wr32(sp0 - 0x130u, t66);
    g->edx = t67;
    g->esp = sp0 - 0x124u;
    t68 = cow_call_regs(g, COW_IMG(0x1025a2f0u), t66, self + 0x708u, g->edx, 0, 3, t66, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
    t69 = g->edx;
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    t70 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x114u);
    wr8(sp0 - 0x112u, 0u);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->edx = sp0 - 0x114u;
    t71 = cow_thiscall(g, COW_IMG(0x1025a470u), self + 0x708u, 1, sp0 - 0x114u);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
    goto L_100bf1c6;
L_100bf104: ;
    COW_AT(100bf104)
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, arg1 + 1u);
    wr32(sp0 - 0x130u, self + 0x50u);
    g->esp = sp0 - 0x124u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x10cu, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x10cu);
    t15 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x10cu) * 4u + 0xc64u);
    wr32(sp0 - 0x128u, t15);
    g->eax = t15;
    g->edx = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    t16 = rd16(sp0 - 0x10cu);
    t17 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t15);
    t18 = g->edx;
    if (t17 != 0u)
    {
        eax = t17;
        edx = t18;
        goto L_100bf156;
    }
    eax = t17;
    edx = t18;
    COW_AT(100bf135)
    g->eax = eax;
    g->esp = sp0 - 0x124u;
    t19 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xd4u, edx, 0);
    t20 = g->edx;
    t21 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0xc8u, 0);
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x124u);
    g->ebp = rd32(sp0 - 0x11cu);
    return t21 & 0xffffff00u;
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
        t28 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0x90u);
        t29 = g->edx;
        g->edx = t29;
        g->esp = sp0 - 0x128u;
        t30 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x130u), 1u);
        t31 = g->edx;
        wr32(sp0 - 0x12cu, t30);
        wr32(sp0 - 0x130u, 4u);
        g->edx = t31;
        g->esp = sp0 - 0x124u;
        t32 = cow_call_regs(g, COW_IMG(0x1025a2f0u), t30, self + 0x708u, g->edx, 0, 3, 4u, t30, 0xffffffffu);
        t33 = g->edx;
        eax = t32;
        ecx = sp0 - 0x90u;
        edx = t33;
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
        t22 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xa0u);
        t23 = g->edx;
        g->edx = t23;
        g->esp = sp0 - 0x128u;
        t24 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x130u), 0u);
        t25 = g->edx;
        wr32(sp0 - 0x12cu, t24);
        wr32(sp0 - 0x130u, 3u);
        g->edx = t25;
        g->esp = sp0 - 0x124u;
        t26 = cow_call_regs(g, COW_IMG(0x1025a2f0u), t24, self + 0x708u, g->edx, 0, 3, 3u, t24, 0xffffffffu);
        t27 = g->edx;
        eax = t26;
        ecx = sp0 - 0xa0u;
        edx = t27;
    }
    COW_AT(100bf1c1)
    g->esp = sp0 - 0x124u;
    t34 = cow_call_regs(g, COW_IMG(0x10257b40u), eax, ecx, edx, 1, 0);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_124 = rd32(sp0 - 0x124u);
    goto L_100bf1c6;
L_100bf220: ;
    COW_AT(100bf220)
    t275 = rd32(self + 0x704u);
    wr32(self + 0x6f0u, t275);
    wr32(self + 0x704u, self + 0x110u);
    eax = t275;
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
    case 0x100be7a4u:
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
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
    case 0x100be8a4u:
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
    case 0x100be996u:
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
    case 0x100beae9u:
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        wr32(sp0 - 0x110u, 0u);
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
        wr32(sp0 - 0x110u, 0u);
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
    case 0x100beb8du:
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
        g->edi = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        wr32(sp0 - 0x110u, 0u);
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        wr32(sp0 - 0x110u, 0u);
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
        wr32(sp0 - 0x110u, 0u);
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
    case 0x100bec9bu:
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
        g->edi = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        wr32(sp0 - 0x110u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100becd3u:
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
        g->esp = sp0 - 0x124u;
        g->ebp = self + 0x708u;
        g->edi = 0u;
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
    case 0x100bed24u:
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        wr32(sp0 - 0x110u, 0u);
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
        wr32(sp0 - 0x110u, 0u);
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
    case 0x100bede4u:
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
        g->ebp = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        wr32(sp0 - 0x110u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100bee22u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x128u;
        g->ecx = 0u;
        g->ebp = 0u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100bee3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x128u;
        g->ecx = 0u;
        g->ebp = 0u;
        g->edi = self + 0x708u;
        wr32(sp0 - 0x12cu, sp0 - 0x114u);
        wr32(sp0 - 0x128u, sp0 - 0xecu);
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
    case 0x100bee87u:
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
    case 0x100befdau:
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
    case 0x100bf104u:
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
        in_edi = rd32(sp0 - 0x124u);
        in_esi = rd32(sp0 - 0x120u);
        in_ebp = rd32(sp0 - 0x11cu);
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
        g->edi = arg1;
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
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x124u;
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
