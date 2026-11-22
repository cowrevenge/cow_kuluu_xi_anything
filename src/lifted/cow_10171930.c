/* f_0x10171930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10171930(Guest* g)
{
    double d1;
    double d112;
    double d113;
    double d114;
    double d115;
    double d133;
    double d137;
    double d139;
    double d140;
    double d142;
    double d143;
    double d144;
    double d173;
    double d174;
    double d175;
    double d180;
    double d181;
    double d182;
    double d183;
    double d184;
    double d185;
    double d2;
    double d28;
    double d29;
    double d30;
    double d31;
    double d54;
    double d59;
    double d6;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d69;
    double d70;
    double d74;
    double d75;
    double d81;
    double d82;
    double d83;
    double d94;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_64c_f;
    double loc_650_f;
    double loc_658_f;
    uint32_t loc_67c;
    uint32_t loc_680;
    uint32_t loc_684;
    uint32_t loc_688;
    uint32_t loc_68c;
    uint32_t loc_690;
    uint32_t loc_694;
    uint32_t loc_698;
    uint32_t loc_69c;
    uint32_t loc_6a0;
    uint32_t loc_6a4;
    uint32_t loc_6a8;
    uint32_t loc_6ac;
    uint32_t loc_6b0;
    uint32_t loc_6b4;
    uint32_t loc_6b8;
    double loc_6b8_f;
    uint32_t loc_6bc;
    uint32_t loc_6c0;
    uint32_t loc_6c4;
    uint32_t loc_6c8;
    uint32_t loc_6cc;
    uint32_t loc_6d0;
    uint32_t loc_6d4;
    uint32_t loc_6d8;
    uint32_t loc_6dc;
    uint32_t loc_6e0;
    uint32_t loc_6e4;
    uint32_t loc_6e8;
    uint32_t loc_6ec;
    uint32_t loc_6f0;
    uint32_t loc_6f4;
    uint32_t loc_6f8;
    uint32_t loc_6fc;
    uint32_t loc_700;
    double loc_700_f;
    uint32_t loc_74c;
    double loc_74c_f;
    uint32_t loc_750;
    uint32_t loc_754;
    double loc_754_f;
    uint32_t loc_758;
    double loc_758_f;
    uint32_t loc_75c;
    uint32_t loc_760;
    uint32_t loc_764;
    uint32_t loc_768;
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
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t138;
    uint32_t t14;
    uint32_t t141;
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
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
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
    uint32_t t290;
    uint32_t t291;
    uint32_t t292;
    uint32_t t293;
    uint32_t t294;
    uint32_t t295;
    uint32_t t296;
    uint32_t t297;
    uint32_t t298;
    uint32_t t3;
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
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t68;
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
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
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1908u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1017195cu: eax = g->eax; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x768u); in_esi = rd32(sp0 - 0x764u); in_ebp = rd32(sp0 - 0x760u); in_ebx = rd32(sp0 - 0x75cu); g->ebp = rd32(sp0 - 0x760u); g->ebx = rd32(sp0 - 0x75cu); g->edi = rd32(sp0 - 0x768u); g->esi = rd32(sp0 - 0x764u); goto E_1017195c;
    case 0x10171972u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x768u); in_esi = rd32(sp0 - 0x764u); in_ebp = rd32(sp0 - 0x760u); in_ebx = rd32(sp0 - 0x75cu); g->ebp = rd32(sp0 - 0x760u); g->ebx = rd32(sp0 - 0x75cu); g->edi = rd32(sp0 - 0x768u); g->esi = rd32(sp0 - 0x764u); goto E_10171972;
    case 0x10171ac1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_768 = rd32(sp0 - 0x768u); loc_764 = rd32(sp0 - 0x764u); loc_760 = rd32(sp0 - 0x760u); loc_75c = rd32(sp0 - 0x75cu); loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_700 = rd32(sp0 - 0x700u); loc_6fc = rd32(sp0 - 0x6fcu); loc_6f8 = rd32(sp0 - 0x6f8u); loc_6f4 = rd32(sp0 - 0x6f4u); loc_6f0 = rd32(sp0 - 0x6f0u); loc_6ec = rd32(sp0 - 0x6ecu); loc_6e8 = rd32(sp0 - 0x6e8u); loc_6e4 = rd32(sp0 - 0x6e4u); loc_6e0 = rd32(sp0 - 0x6e0u); loc_6dc = rd32(sp0 - 0x6dcu); loc_6d8 = rd32(sp0 - 0x6d8u); loc_6d4 = rd32(sp0 - 0x6d4u); loc_6d0 = rd32(sp0 - 0x6d0u); loc_6cc = rd32(sp0 - 0x6ccu); loc_6c8 = rd32(sp0 - 0x6c8u); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10171ac1;
    case 0x10171adcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_768 = rd32(sp0 - 0x768u); loc_764 = rd32(sp0 - 0x764u); loc_760 = rd32(sp0 - 0x760u); loc_75c = rd32(sp0 - 0x75cu); loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_700 = rd32(sp0 - 0x700u); loc_6fc = rd32(sp0 - 0x6fcu); loc_6f8 = rd32(sp0 - 0x6f8u); loc_6f4 = rd32(sp0 - 0x6f4u); loc_6f0 = rd32(sp0 - 0x6f0u); loc_6ec = rd32(sp0 - 0x6ecu); loc_6e8 = rd32(sp0 - 0x6e8u); loc_6e4 = rd32(sp0 - 0x6e4u); loc_6e0 = rd32(sp0 - 0x6e0u); loc_6dc = rd32(sp0 - 0x6dcu); loc_6d8 = rd32(sp0 - 0x6d8u); loc_6d4 = rd32(sp0 - 0x6d4u); loc_6d0 = rd32(sp0 - 0x6d0u); loc_6cc = rd32(sp0 - 0x6ccu); loc_6c8 = rd32(sp0 - 0x6c8u); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10171adc;
    case 0x10171af1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171af1;
    case 0x10171b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171b00;
    case 0x10171b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_754 = rd32(sp0 - 0x754u); goto E_10171b13;
    case 0x10171b23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); goto E_10171b23;
    case 0x10171c62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10171c62;
    case 0x10171c7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10171c7d;
    case 0x10171c92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171c92;
    case 0x10171ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171ca1;
    case 0x10171cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_754 = rd32(sp0 - 0x754u); goto E_10171cb4;
    case 0x10171cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); goto E_10171cc4;
    case 0x10171e16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10171e16;
    case 0x10171e31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10171e31;
    case 0x10171e46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171e46;
    case 0x10171e55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171e55;
    case 0x10171e68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_754 = rd32(sp0 - 0x754u); goto E_10171e68;
    case 0x10171e78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); goto E_10171e78;
    case 0x10171f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_658_f = rdf32(sp0 - 0x658u); loc_650_f = rdf32(sp0 - 0x650u); loc_64c_f = rdf32(sp0 - 0x64cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171f53;
    case 0x10171f6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_658_f = rdf32(sp0 - 0x658u); loc_650_f = rdf32(sp0 - 0x650u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171f6f;
    case 0x10171f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_658_f = rdf32(sp0 - 0x658u); loc_650_f = rdf32(sp0 - 0x650u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171f7f;
    case 0x10171f95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_658_f = rdf32(sp0 - 0x658u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10171f95;
    case 0x10171fbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_658_f = rdf32(sp0 - 0x658u); goto E_10171fbf;
    case 0x10171fd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_6bc = rd32(sp0 - 0x6bcu); loc_658_f = rdf32(sp0 - 0x658u); goto E_10171fd6;
    case 0x10171feau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_6bc = rd32(sp0 - 0x6bcu); loc_658_f = rdf32(sp0 - 0x658u); goto E_10171fea;
    case 0x10171ff5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_6bc = rd32(sp0 - 0x6bcu); loc_658_f = rdf32(sp0 - 0x658u); goto E_10171ff5;
    case 0x10172012u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_6bc = rd32(sp0 - 0x6bcu); loc_658_f = rdf32(sp0 - 0x658u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172012;
    case 0x10172021u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172021;
    case 0x10172036u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_6bc = rd32(sp0 - 0x6bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172036;
    case 0x10172046u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_6bc = rd32(sp0 - 0x6bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172046;
    case 0x1017204fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_6bc = rd32(sp0 - 0x6bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017204f;
    case 0x1017205cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017205c;
    case 0x10172062u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172062;
    case 0x10172069u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172069;
    case 0x1017206eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017206e;
    case 0x10172072u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172072;
    case 0x1017207au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017207a;
    case 0x1017209du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_6bc = rd32(sp0 - 0x6bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017209d;
    case 0x101720aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_6bc = rd32(sp0 - 0x6bcu); loc_658_f = rdf32(sp0 - 0x658u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101720ae;
    case 0x101720cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_6bc = rd32(sp0 - 0x6bcu); loc_658_f = rdf32(sp0 - 0x658u); goto E_101720cd;
    case 0x101720d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_6bc = rd32(sp0 - 0x6bcu); loc_658_f = rdf32(sp0 - 0x658u); goto E_101720d4;
    case 0x101720d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_768 = rd32(sp0 - 0x768u); loc_764 = rd32(sp0 - 0x764u); loc_760 = rd32(sp0 - 0x760u); loc_75c = rd32(sp0 - 0x75cu); loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_6bc = rd32(sp0 - 0x6bcu); loc_658_f = rdf32(sp0 - 0x658u); goto E_101720d8;
    case 0x101720f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_768 = rd32(sp0 - 0x768u); loc_764 = rd32(sp0 - 0x764u); loc_760 = rd32(sp0 - 0x760u); loc_75c = rd32(sp0 - 0x75cu); loc_758_f = rdf32(sp0 - 0x758u); loc_754_f = rdf32(sp0 - 0x754u); loc_74c_f = rdf32(sp0 - 0x74cu); loc_6bc = rd32(sp0 - 0x6bcu); loc_658_f = rdf32(sp0 - 0x658u); goto E_101720f6;
    case 0x1017210fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1017210f;
    case 0x101721f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6b8_f = rdf32(sp0 - 0x6b8u); goto E_101721f2;
    case 0x1017220fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6b8_f = rdf32(sp0 - 0x6b8u); goto E_1017220f;
    case 0x1017222cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6b8 = rd32(sp0 - 0x6b8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017222c;
    case 0x1017223bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6b8 = rd32(sp0 - 0x6b8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017223b;
    case 0x10172257u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6b8_f = rdf32(sp0 - 0x6b8u); goto E_10172257;
    case 0x10172262u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6b8_f = rdf32(sp0 - 0x6b8u); goto E_10172262;
    case 0x101723a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_700_f = rdf32(sp0 - 0x700u); loc_6c0 = rd32(sp0 - 0x6c0u); goto E_101723a8;
    case 0x101723bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_700_f = rdf32(sp0 - 0x700u); loc_6c0 = rd32(sp0 - 0x6c0u); goto E_101723bf;
    case 0x101723d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_700 = rd32(sp0 - 0x700u); loc_6c0 = rd32(sp0 - 0x6c0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101723d8;
    case 0x101723e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_700 = rd32(sp0 - 0x700u); loc_6c0 = rd32(sp0 - 0x6c0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101723e8;
    case 0x10172411u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_700_f = rdf32(sp0 - 0x700u); loc_6c0 = rd32(sp0 - 0x6c0u); goto E_10172411;
    case 0x10172427u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_754 = rd32(sp0 - 0x754u); loc_750 = rd32(sp0 - 0x750u); loc_74c = rd32(sp0 - 0x74cu); loc_700_f = rdf32(sp0 - 0x700u); loc_6c0 = rd32(sp0 - 0x6c0u); goto E_10172427;
    case 0x101726a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_6e8 = rd32(sp0 - 0x6e8u); loc_6e4 = rd32(sp0 - 0x6e4u); loc_6e0 = rd32(sp0 - 0x6e0u); loc_6dc = rd32(sp0 - 0x6dcu); loc_6d8 = rd32(sp0 - 0x6d8u); loc_6d4 = rd32(sp0 - 0x6d4u); loc_6d0 = rd32(sp0 - 0x6d0u); loc_6cc = rd32(sp0 - 0x6ccu); loc_6c8 = rd32(sp0 - 0x6c8u); loc_6c4 = rd32(sp0 - 0x6c4u); goto E_101726a5;
    case 0x101726bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_6e8 = rd32(sp0 - 0x6e8u); loc_6e4 = rd32(sp0 - 0x6e4u); loc_6e0 = rd32(sp0 - 0x6e0u); loc_6dc = rd32(sp0 - 0x6dcu); loc_6d8 = rd32(sp0 - 0x6d8u); loc_6d4 = rd32(sp0 - 0x6d4u); loc_6d0 = rd32(sp0 - 0x6d0u); loc_6cc = rd32(sp0 - 0x6ccu); loc_6c8 = rd32(sp0 - 0x6c8u); loc_6c4 = rd32(sp0 - 0x6c4u); goto E_101726bc;
    case 0x101726d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101726d8;
    case 0x101726e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101726e7;
    case 0x101726fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_750 = rd32(sp0 - 0x750u); goto E_101726fb;
    case 0x1017270bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); goto E_1017270b;
    case 0x10172840u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10172840;
    case 0x10172854u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10172854;
    case 0x10172873u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172873;
    case 0x10172882u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172882;
    case 0x10172896u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_750 = rd32(sp0 - 0x750u); goto E_10172896;
    case 0x101728a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); goto E_101728a6;
    case 0x10172a03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10172a03;
    case 0x10172a17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10172a17;
    case 0x10172a36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172a36;
    case 0x10172a45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10172a45;
    case 0x10172a59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_750 = rd32(sp0 - 0x750u); goto E_10172a59;
    case 0x10172a69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); goto E_10172a69;
    case 0x10172c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_758 = rd32(sp0 - 0x758u); loc_750 = rd32(sp0 - 0x750u); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_6ac = rd32(sp0 - 0x6acu); loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_69c = rd32(sp0 - 0x69cu); loc_698 = rd32(sp0 - 0x698u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_688 = rd32(sp0 - 0x688u); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); goto E_10172c13;
    case 0x10172ca5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10172ca5;
    case 0x10172cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10172cb4;
    case 0x10172d55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10172d55;
    case 0x10173935u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c0 = rd32(sp0 - 0x6c0u); goto E_10173935;
    case 0x10173940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_750 = rd32(sp0 - 0x750u); loc_6c0 = rd32(sp0 - 0x6c0u); goto E_10173940;
    case 0x10173944u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_750 = rd32(sp0 - 0x750u); loc_6c0 = rd32(sp0 - 0x6c0u); goto E_10173944;
    case 0x10173958u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_750 = rd32(sp0 - 0x750u); loc_6c0 = rd32(sp0 - 0x6c0u); goto E_10173958;
    case 0x10173974u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_750 = rd32(sp0 - 0x750u); loc_6c0 = rd32(sp0 - 0x6c0u); goto E_10173974;
    case 0x10173987u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_6bc = rd32(sp0 - 0x6bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10173987;
    default: break;
    }
#endif

    COW_AT(10171930)
    wr32(sp0 - 0x75cu, in_ebx);
    wr32(sp0 - 0x760u, in_ebp);
    wr32(sp0 - 0x764u, in_esi);
    wr32(sp0 - 0x768u, in_edi);
    d1 = (double)rdf32(arg2 + 0x18u);
    wr32(sp0 - 0x6bcu, 0u);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10336690u)), 0u) & 0x4100u) == 0u) goto L_10171972;
    eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10336690u)), 0u) & 0x4100u;
    COW_AT(1017195c)
    d2 = (double)rdf32(arg2 + 0x20u);
    if ((cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10336690u)), 0u) & 0x4100u) != 0u)
    {
        edx = in_edx;
        loc_75c = in_ebx;
        loc_760 = in_ebp;
        loc_764 = in_esi;
        loc_768 = in_edi;
        goto L_101720d8;
    }
L_10171972: ;
    COW_AT(10171972)
    t3 = rd32(arg2 + 0x18u);
    wr32(sp0 - 0x700u, t3);
    wr32(sp0 - 0x6b8u, 0x3f800000u);
    wr32(sp0 - 0x6b4u, 0u);
    wr32(sp0 - 0x6b0u, 0u);
    wr32(sp0 - 0x6acu, 0u);
    wr32(sp0 - 0x6a8u, 0u);
    wr32(sp0 - 0x6a4u, 0x3f800000u);
    wr32(sp0 - 0x6a0u, 0u);
    wr32(sp0 - 0x69cu, 0u);
    wr32(sp0 - 0x698u, 0u);
    wr32(sp0 - 0x694u, 0u);
    wr32(sp0 - 0x690u, 0x3f800000u);
    wr32(sp0 - 0x68cu, 0u);
    wr32(sp0 - 0x688u, 0u);
    wr32(sp0 - 0x684u, 0u);
    wr32(sp0 - 0x680u, 0u);
    wr32(sp0 - 0x67cu, 0x3f800000u);
    wr32(sp0 - 0x6fcu, 0u);
    wr32(sp0 - 0x6f8u, 0u);
    wr32(sp0 - 0x6f4u, 0u);
    wr32(sp0 - 0x6f0u, 0u);
    wr32(sp0 - 0x6e8u, 0u);
    wr32(sp0 - 0x6e4u, 0u);
    wr32(sp0 - 0x6e0u, 0u);
    wr32(sp0 - 0x6dcu, 0u);
    wr32(sp0 - 0x6d4u, 0u);
    wr32(sp0 - 0x6d0u, 0u);
    wr32(sp0 - 0x6ccu, 0u);
    wr32(sp0 - 0x6c8u, 0u);
    wr32(sp0 - 0x6c4u, 0x3f800000u);
    t4 = rd32(arg2 + 0x1cu);
    wr32(sp0 - 0x6ecu, t4);
    t5 = rd32(arg2 + 0x20u);
    wr32(sp0 - 0x6d8u, t5);
    wr32(sp0 - 0x758u, 0u);
    loc_75c = in_ebx;
    loc_760 = in_ebp;
    loc_764 = in_esi;
    loc_768 = in_edi;
    loc_6bc = 0u;
    loc_700 = t3;
    loc_6fc = 0u;
    loc_6f8 = 0u;
    loc_6f4 = 0u;
    loc_6f0 = 0u;
    loc_6e8 = 0u;
    loc_6e4 = 0u;
    loc_6e0 = 0u;
    loc_6dc = 0u;
    loc_6d4 = 0u;
    loc_6d0 = 0u;
    loc_6cc = 0u;
    loc_6c8 = 0u;
    loc_6c4 = 0x3f800000u;
    loc_6ec = t4;
    loc_6d8 = t5;
    loc_758 = 0u;
L_10171ac1: ;
    COW_AT(10171ac1)
    wr32(sp0 - 0x754u, 4u);
    ebx = sp0 - 0x700u;
    ebp = loc_758 + sp0 - 0x6b8u;
    edi = loc_758 + sp0 - 0x748u;
    loc_754 = 4u;
L_10171adc: ;
    COW_AT(10171adc)
    d6 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(edi, 0u);
    eax = ebx;
    ecx = ebp;
    edx = 4u;
    x0 = d6;
L_10171af1: ;
    COW_AT(10171af1)
    if (edx != 1u)
    {
        edx = edx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
        eax = eax + 0x10u;
        ecx = ecx + 4u;
        goto L_10171af1;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    COW_AT(10171b00)
    wrf32(edi, (float)x0);
    t7 = rd32(sp0 - 0x754u) - 1u;
    t8 = rd32(sp0 - 0x754u);
    wr32(sp0 - 0x754u, t7);
    if (t8 != 1u)
    {
        ebx = ebx + 4u;
        edi = edi + 4u;
        loc_75c = rd32(sp0 - 0x75cu);
        loc_760 = rd32(sp0 - 0x760u);
        loc_764 = rd32(sp0 - 0x764u);
        loc_768 = rd32(sp0 - 0x768u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_700 = rd32(sp0 - 0x700u);
        loc_6fc = rd32(sp0 - 0x6fcu);
        loc_6f8 = rd32(sp0 - 0x6f8u);
        loc_6f4 = rd32(sp0 - 0x6f4u);
        loc_6f0 = rd32(sp0 - 0x6f0u);
        loc_6e8 = rd32(sp0 - 0x6e8u);
        loc_6e4 = rd32(sp0 - 0x6e4u);
        loc_6e0 = rd32(sp0 - 0x6e0u);
        loc_6dc = rd32(sp0 - 0x6dcu);
        loc_6d4 = rd32(sp0 - 0x6d4u);
        loc_6d0 = rd32(sp0 - 0x6d0u);
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c8 = rd32(sp0 - 0x6c8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6ec = rd32(sp0 - 0x6ecu);
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = t7;
        goto L_10171adc;
    }
    COW_AT(10171b13)
    t9 = rd32(sp0 - 0x758u) + 0x10u;
    t10 = rd32(sp0 - 0x758u);
    wr32(sp0 - 0x758u, t9);
    if ((int32_t)(t10 + 0x10u) < 64)
    {
        loc_75c = rd32(sp0 - 0x75cu);
        loc_760 = rd32(sp0 - 0x760u);
        loc_764 = rd32(sp0 - 0x764u);
        loc_768 = rd32(sp0 - 0x768u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_700 = rd32(sp0 - 0x700u);
        loc_6fc = rd32(sp0 - 0x6fcu);
        loc_6f8 = rd32(sp0 - 0x6f8u);
        loc_6f4 = rd32(sp0 - 0x6f4u);
        loc_6f0 = rd32(sp0 - 0x6f0u);
        loc_6e8 = rd32(sp0 - 0x6e8u);
        loc_6e4 = rd32(sp0 - 0x6e4u);
        loc_6e0 = rd32(sp0 - 0x6e0u);
        loc_6dc = rd32(sp0 - 0x6dcu);
        loc_6d4 = rd32(sp0 - 0x6d4u);
        loc_6d0 = rd32(sp0 - 0x6d0u);
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c8 = rd32(sp0 - 0x6c8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6ec = rd32(sp0 - 0x6ecu);
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_758 = t9;
        goto L_10171ac1;
    }
    COW_AT(10171b23)
    t11 = rd32(sp0 - 0x744u);
    wr32(sp0 - 0x6b4u, t11);
    t12 = rd32(sp0 - 0x738u);
    wr32(sp0 - 0x6a8u, t12);
    t13 = rd32(sp0 - 0x72cu);
    wr32(sp0 - 0x69cu, t13);
    t14 = rd32(sp0 - 0x720u);
    wr32(sp0 - 0x690u, t14);
    t15 = rd32(sp0 - 0x714u);
    wr32(sp0 - 0x684u, t15);
    t16 = rd32(arg2 + 0x10u);
    wr32(sp0 - 0x754u, t16);
    t17 = rd32(sp0 - 0x748u);
    wr32(sp0 - 0x6b8u, t17);
    t18 = rd32(sp0 - 0x740u);
    wr32(sp0 - 0x6b0u, t18);
    t19 = rd32(sp0 - 0x73cu);
    wr32(sp0 - 0x6acu, t19);
    t20 = rd32(sp0 - 0x734u);
    wr32(sp0 - 0x6a4u, t20);
    t21 = rd32(sp0 - 0x730u);
    wr32(sp0 - 0x6a0u, t21);
    t22 = rd32(sp0 - 0x728u);
    wr32(sp0 - 0x698u, t22);
    t23 = rd32(sp0 - 0x724u);
    wr32(sp0 - 0x694u, t23);
    t24 = rd32(sp0 - 0x71cu);
    wr32(sp0 - 0x68cu, t24);
    t25 = rd32(sp0 - 0x718u);
    wr32(sp0 - 0x688u, t25);
    t26 = rd32(sp0 - 0x710u);
    wr32(sp0 - 0x680u, t26);
    t27 = rd32(sp0 - 0x70cu);
    wr32(sp0 - 0x67cu, t27);
    wr32(sp0 - 0x744u, 0u);
    wr32(sp0 - 0x73cu, 0u);
    wr32(sp0 - 0x738u, 0u);
    wr32(sp0 - 0x734u, 0x3f800000u);
    wr32(sp0 - 0x730u, 0u);
    wr32(sp0 - 0x72cu, 0u);
    wr32(sp0 - 0x724u, 0u);
    wr32(sp0 - 0x71cu, 0u);
    wr32(sp0 - 0x718u, 0u);
    wr32(sp0 - 0x714u, 0u);
    wr32(sp0 - 0x710u, 0u);
    wr32(sp0 - 0x70cu, 0x3f800000u);
    wr32(sp0 - 0x758u, 0u);
    d28 = (double)(float)fr(g, cos(cow_bits2f(t16)));
    wrf32(sp0 - 0x748u, (float)d28);
    d29 = fr(g, sin(cow_bits2f(t16)));
    wrf32(sp0 - 0x740u, (float)(double)(float)-d29);
    wrf32(sp0 - 0x728u, (float)(double)(float)d29);
    d30 = (double)(float)fr(g, cos(cow_bits2f(t16)));
    wrf32(sp0 - 0x720u, (float)d30);
    loc_758 = 0u;
L_10171c62: ;
    COW_AT(10171c62)
    wr32(sp0 - 0x754u, 4u);
    ebx = sp0 - 0x748u;
    ebp = loc_758 + sp0 - 0x6b8u;
    edi = loc_758 + sp0 - 0x700u;
    loc_754 = 4u;
L_10171c7d: ;
    COW_AT(10171c7d)
    d31 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(edi, 0u);
    eax = ebx;
    ecx = ebp;
    edx = 4u;
    x0 = d31;
L_10171c92: ;
    COW_AT(10171c92)
    if (edx != 1u)
    {
        edx = edx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
        eax = eax + 0x10u;
        ecx = ecx + 4u;
        goto L_10171c92;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    COW_AT(10171ca1)
    wrf32(edi, (float)x0);
    t32 = rd32(sp0 - 0x754u) - 1u;
    t33 = rd32(sp0 - 0x754u);
    wr32(sp0 - 0x754u, t32);
    if (t33 != 1u)
    {
        ebx = ebx + 4u;
        edi = edi + 4u;
        loc_754 = t32;
        loc_758 = rd32(sp0 - 0x758u);
        goto L_10171c7d;
    }
    COW_AT(10171cb4)
    t34 = rd32(sp0 - 0x758u) + 0x10u;
    t35 = rd32(sp0 - 0x758u);
    wr32(sp0 - 0x758u, t34);
    if ((int32_t)(t35 + 0x10u) < 64)
    {
        loc_758 = t34;
        goto L_10171c62;
    }
    COW_AT(10171cc4)
    t36 = rd32(sp0 - 0x700u);
    wr32(sp0 - 0x6b8u, t36);
    t37 = rd32(sp0 - 0x6fcu);
    wr32(sp0 - 0x6b4u, t37);
    t38 = rd32(sp0 - 0x6f8u);
    wr32(sp0 - 0x6b0u, t38);
    t39 = rd32(sp0 - 0x6f4u);
    wr32(sp0 - 0x6acu, t39);
    t40 = rd32(sp0 - 0x6f0u);
    wr32(sp0 - 0x6a8u, t40);
    t41 = rd32(sp0 - 0x6ecu);
    wr32(sp0 - 0x6a4u, t41);
    t42 = rd32(sp0 - 0x6e8u);
    wr32(sp0 - 0x6a0u, t42);
    t43 = rd32(sp0 - 0x6e4u);
    wr32(sp0 - 0x69cu, t43);
    t44 = rd32(sp0 - 0x6e0u);
    wr32(sp0 - 0x698u, t44);
    t45 = rd32(sp0 - 0x6dcu);
    wr32(sp0 - 0x694u, t45);
    t46 = rd32(sp0 - 0x6d8u);
    wr32(sp0 - 0x690u, t46);
    t47 = rd32(sp0 - 0x6d4u);
    wr32(sp0 - 0x68cu, t47);
    t48 = rd32(sp0 - 0x6d0u);
    wr32(sp0 - 0x688u, t48);
    t49 = rd32(sp0 - 0x6ccu);
    wr32(sp0 - 0x684u, t49);
    t50 = rd32(sp0 - 0x6c8u);
    wr32(sp0 - 0x680u, t50);
    t51 = rd32(sp0 - 0x6c4u);
    wr32(sp0 - 0x67cu, t51);
    wr32(sp0 - 0x748u, 0x3f800000u);
    wr32(sp0 - 0x744u, 0u);
    wr32(sp0 - 0x740u, 0u);
    wr32(sp0 - 0x73cu, 0u);
    wr32(sp0 - 0x738u, 0u);
    wr32(sp0 - 0x734u, 0x3f800000u);
    wr32(sp0 - 0x730u, 0u);
    wr32(sp0 - 0x72cu, 0u);
    wr32(sp0 - 0x728u, 0u);
    wr32(sp0 - 0x724u, 0u);
    wr32(sp0 - 0x720u, 0x3f800000u);
    wr32(sp0 - 0x71cu, 0u);
    wr32(sp0 - 0x70cu, 0x3f800000u);
    wr32(sp0 - 0x718u, rd32(arg2));
    t52 = rd32(arg2 + 4u);
    wr32(sp0 - 0x714u, t52);
    t53 = rd32(arg2 + 8u);
    wr32(sp0 - 0x710u, t53);
    wr32(sp0 - 0x758u, 0u);
    loc_758 = 0u;
    loc_6b8 = t36;
    loc_6b4 = t37;
    loc_6b0 = t38;
    loc_6ac = t39;
    loc_6a8 = t40;
    loc_6a4 = t41;
    loc_6a0 = t42;
    loc_69c = t43;
    loc_698 = t44;
    loc_694 = t45;
    loc_690 = t46;
    loc_68c = t47;
    loc_688 = t48;
    loc_684 = t49;
    loc_680 = t50;
    loc_67c = t51;
L_10171e16: ;
    COW_AT(10171e16)
    wr32(sp0 - 0x754u, 4u);
    ebx = sp0 - 0x748u;
    ebp = loc_758 + sp0 - 0x6b8u;
    edi = loc_758 + sp0 - 0x700u;
    loc_754 = 4u;
L_10171e31: ;
    COW_AT(10171e31)
    d54 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(edi, 0u);
    eax = ebx;
    ecx = ebp;
    edx = 4u;
    x0 = d54;
L_10171e46: ;
    COW_AT(10171e46)
    if (edx != 1u)
    {
        edx = edx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
        eax = eax + 0x10u;
        ecx = ecx + 4u;
        goto L_10171e46;
    }
    edx = edx - 1u;
    x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    ecx = ecx + 4u;
    COW_AT(10171e55)
    wrf32(edi, (float)x0);
    t55 = rd32(sp0 - 0x754u) - 1u;
    t56 = rd32(sp0 - 0x754u);
    wr32(sp0 - 0x754u, t55);
    if (t56 != 1u)
    {
        ebx = ebx + 4u;
        edi = edi + 4u;
        loc_754 = t55;
        loc_758 = rd32(sp0 - 0x758u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        goto L_10171e31;
    }
    COW_AT(10171e68)
    t57 = rd32(sp0 - 0x758u) + 0x10u;
    t58 = rd32(sp0 - 0x758u);
    wr32(sp0 - 0x758u, t57);
    if ((int32_t)(t58 + 0x10u) < 64)
    {
        loc_758 = t57;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        goto L_10171e16;
    }
    eax = t57;
    COW_AT(10171e78)
    d59 = fr(g, (double)rdf32(sp0 - 0x6f0u) * (double)rdf32(COW_IMG(0x103295d8u)));
    wrf32(sp0 - 0x754u, (float)(double)(float)d59);
    d60 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x6e0u) * (double)rdf32(COW_IMG(0x10376c68u))) + fr(g, (double)rdf32(sp0 - 0x700u) * (double)rdf32(COW_IMG(0x10376c68u)))) + (double)rdf32(sp0 - 0x6d0u)) + (double)(float)d59);
    wrf32(sp0 - 0x64cu, (float)(double)(float)d60);
    d61 = fr(g, (double)rdf32(sp0 - 0x6e8u) * (double)rdf32(COW_IMG(0x103295d8u)));
    wrf32(sp0 - 0x758u, (float)(double)(float)d61);
    d62 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x6e0u) * (double)rdf32(COW_IMG(0x10376c70u))) + fr(g, (double)rdf32(sp0 - 0x700u) * (double)rdf32(COW_IMG(0x10376c70u)))) + (double)rdf32(sp0 - 0x6d0u)) + (double)(float)d59);
    d63 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x6d8u) * (double)rdf32(COW_IMG(0x10376c68u))) + fr(g, (double)rdf32(sp0 - 0x6f8u) * (double)rdf32(COW_IMG(0x10376c68u)))) + (double)rdf32(sp0 - 0x6c8u)) + (double)(float)d61);
    wrf32(sp0 - 0x658u, (float)(double)(float)d62);
    d64 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x6d8u) * (double)rdf32(COW_IMG(0x10376c70u))) + fr(g, (double)rdf32(sp0 - 0x6f8u) * (double)rdf32(COW_IMG(0x10376c70u)))) + (double)rdf32(sp0 - 0x6c8u)) + (double)(float)d61);
    wrf32(sp0 - 0x650u, (float)(double)(float)d64);
    if ((cow_fsw(g, (double)(float)d60, (double)(float)d62, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)(float)d60, (double)(float)d62, 1u) & 0x4100u;
        loc_658_f = (double)(float)d62;
        loc_650_f = (double)(float)d64;
        x0 = d63;
    }
    else
    {
        eax = cow_fsw(g, (double)(float)d60, (double)(float)d62, 1u) & 0x4100u;
        loc_64c_f = (double)(float)d60;
        loc_658_f = (double)(float)d62;
        loc_650_f = (double)(float)d64;
        x0 = d63;
    COW_AT(10171f53)
        wrf32(sp0 - 0x658u, (float)(double)(float)loc_64c_f);
        wr32(sp0 - 0x64cu, cow_f2bits(loc_658_f));
        ecx = cow_f2bits(loc_658_f);
        loc_658_f = (double)(float)loc_64c_f;
    }
    COW_AT(10171f6f)
    if ((cow_fsw(g, x0, loc_650_f, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, loc_650_f, 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, loc_650_f, 1u) & 0x4100u;
    COW_AT(10171f7f)
        wrf32(sp0 - 0x750u, (float)(double)(float)x0);
        wr32(sp0 - 0x650u, cow_f2bits((double)(float)x0));
        edx = cow_f2bits((double)(float)x0);
        x0 = loc_650_f;
    }
    COW_AT(10171f95)
    wrf32(sp0 - 0x758u, (float)(double)(float)x0);
    d65 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10336688u)) + (double)rdf32(sp0 - 0x650u)) + (double)rdf32(COW_IMG(0x1032a3a0u)));
    wrf32(sp0 - 0x74cu, (float)(double)(float)d65);
    if (!(x0 < (double)(float)d65))
    {
        loc_75c = rd32(sp0 - 0x75cu);
        loc_760 = rd32(sp0 - 0x760u);
        loc_764 = rd32(sp0 - 0x764u);
        loc_768 = rd32(sp0 - 0x768u);
        goto L_101720d8;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)(float)d65, 0u);
    loc_758_f = (double)(float)x0;
    loc_74c_f = (double)(float)d65;
    COW_AT(10171fbf)
    d66 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10336688u)) + loc_658_f) + (double)rdf32(COW_IMG(0x1032a3a0u)));
    wrf32(sp0 - 0x754u, (float)(double)(float)d66);
    loc_754_f = (double)(float)d66;
    loc_6bc = rd32(sp0 - 0x6bcu);
L_10171fd6: ;
    COW_AT(10171fd6)
    d67 = (double)rdf32(sp0 - 0x650u);
    if ((cow_fsw(g, loc_758_f, d67, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_758_f, d67, 0u) & 0x4100u;
    }
    else
    {
    COW_AT(10171fea)
        t68 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x758u, t68);
        eax = t68;
    }
    COW_AT(10171ff5)
    d69 = (double)rdf32(sp0 - 0x64cu);
    if (!(d69 < loc_754_f))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, loc_754_f, 1u);
        x0 = (double)rdf32(sp0 - 0x64cu);
        goto L_101720ae;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, loc_754_f, 1u);
    x0 = (double)rdf32(sp0 - 0x64cu);
    COW_AT(10172012)
    g->edx = edx;
    d70 = fr(g, (double)rdf32(sp0 - 0x758u) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d70);
    g->esp = sp0 - 0x768u;
    t71 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    COW_AT(10172021)
    t73 = rd32(sp0 - 0x6bcu);
    ecx = t73 << 4u;
    ebx = t73;
    ebp = eax;
    edi = sp0 + t73 * 0x10u - 0x5fcu;
    loc_6bc = rd32(sp0 - 0x6bcu);
L_10172036: ;
    COW_AT(10172036)
    d74 = (double)rdf32(sp0 - 0x658u);
    if ((cow_fsw(g, x0, d74, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, d74, 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, d74, 1u) & 0x4100u;
    COW_AT(10172046)
        x0 = (double)rdf32(sp0 - 0x658u);
    }
    COW_AT(1017204f)
    g->ecx = ecx;
    d75 = fr(g, (double)rdf32(COW_IMG(0x10329ce4u)) * x0);
    fpush(g, d75);
    g->esp = sp0 - 0x768u;
    t76 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t77 = g->ecx;
    eax = t76;
    ecx = t77;
    COW_AT(1017205c)
    if ((int32_t)ebx <= 0) goto L_1017207a;
    COW_AT(10172062)
    ecx = sp0 - 0x5fcu;
    edx = 0u;
L_10172069: ;
    COW_AT(10172069)
    t78 = rd32(ecx - 4u);
    if (t78 != eax) goto L_10172072;
    COW_AT(1017206e)
    t79 = rd32(ecx);
    if (t79 == ebp)
    {
        loc_6bc = rd32(sp0 - 0x6bcu);
        goto L_1017209d;
    }
L_10172072: ;
    COW_AT(10172072)
    if ((int32_t)(edx + 1u) < (int32_t)ebx)
    {
        ecx = ecx + 0x10u;
        edx = edx + 1u;
        goto L_10172069;
    }
    ecx = ecx + 0x10u;
L_1017207a: ;
    COW_AT(1017207a)
    t80 = rd32(sp0 - 0x758u);
    wr32(edi - 4u, eax);
    wrf32(edi + 4u, (float)x0);
    wr32(edi, ebp);
    wr32(edi + 8u, t80);
    wr32(sp0 - 0x6bcu, ebx + 1u);
    if ((int32_t)(ebx + 1u) >= 96)
    {
        edx = t80;
        loc_6bc = ebx + 1u;
        ebx = ebx + 1u;
        goto L_10173987;
    }
    edx = t80;
    edi = edi + 0x10u;
    loc_6bc = ebx + 1u;
    ebx = ebx + 1u;
L_1017209d: ;
    COW_AT(1017209d)
    d81 = fr(g, x0 + (double)rdf32(COW_IMG(0x1032a3a0u)));
    d82 = (double)rdf32(sp0 - 0x754u);
    if (d81 < d82)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, d82, 1u);
        x0 = d81;
        goto L_10172036;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, d82, 1u);
    loc_754_f = (double)rdf32(sp0 - 0x754u);
    loc_658_f = (double)rdf32(sp0 - 0x658u);
    loc_74c_f = (double)rdf32(sp0 - 0x74cu);
    x0 = d81;
L_101720ae: ;
    COW_AT(101720ae)
    d83 = fr(g, (double)rdf32(sp0 - 0x758u) + (double)rdf32(COW_IMG(0x1032a3a0u)));
    wrf32(sp0 - 0x758u, (float)(double)(float)d83);
    if (d83 < loc_74c_f)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, loc_74c_f, 0u);
        loc_758_f = (double)(float)d83;
        goto L_10171fd6;
    }
    COW_AT(101720cd)
    ebx = loc_6bc;
L_101720d4: ;
    COW_AT(101720d4)
    if (ebx != 0u)
    {
        loc_75c = rd32(sp0 - 0x75cu);
        loc_760 = rd32(sp0 - 0x760u);
        loc_764 = rd32(sp0 - 0x764u);
        loc_768 = rd32(sp0 - 0x768u);
        goto L_101720f6;
    }
    loc_75c = rd32(sp0 - 0x75cu);
    loc_760 = rd32(sp0 - 0x760u);
    loc_764 = rd32(sp0 - 0x764u);
    loc_768 = rd32(sp0 - 0x768u);
L_101720d8: ;
    COW_AT(101720d8)
    wr32(sp0 - 0x5f8u, rd32(arg2));
    t84 = rd32(arg2 + 8u);
    wr32(sp0 - 0x5f4u, t84);
    wr32(sp0 - 0x6bcu, 1u);
    ecx = t84;
    loc_6bc = 1u;
L_101720f6: ;
    COW_AT(101720f6)
    wr32(sp0 - 0x76cu, 4u);
    wr32(sp0 - 0x770u, loc_6bc * 0x1f0u);
    g->esp = sp0 - 0x768u;
    t85 = cow_call_regs(g, COW_IMG(0x10028640u), loc_6bc, ecx, edx, 1, 2, loc_6bc * 0x1f0u, 4u);
    eax = t85;
    ebx = loc_6bc * 0x1f0u;
    COW_AT(1017210f)
    wr32(arg1 + 0xd8u, eax);
    t86 = eax;
    edi = t86;
    eax = 0u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x754u, 4u);
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t87 = rd32(arg1 + 0xd8u) + 0xd8u;
    t88 = rd32(arg1 + 0xd8u);
    t89 = rd32(rd32(arg1 + 0xd8u));
    wr32(t88 + 8u, t87);
    t90 = (t89 & 0xfffff801u) | 1u;
    wr32(t88, t90);
    wr32(t88 + 4u, t88 + 0x18u);
    wr32(t88 + 0xcu, 0u);
    wr32(t88 + 0x18u, 0x3f800000u);
    wr32(t88 + 0x1cu, 0u);
    wr32(t88 + 0x20u, 0u);
    wr32(t88 + 0x24u, 0u);
    wr32(t88 + 0x28u, 0u);
    wr32(t88 + 0x2cu, 0x3f800000u);
    wr32(t88 + 0x30u, 0u);
    wr32(t88 + 0x34u, 0u);
    wr32(t88 + 0x38u, 0u);
    wr32(t88 + 0x3cu, 0u);
    wr32(t88 + 0x40u, 0x3f800000u);
    wr32(t88 + 0x44u, 0u);
    wr32(t88 + 0x48u, 0u);
    wr32(t88 + 0x4cu, 0u);
    wr32(t88 + 0x50u, 0u);
    wr32(t88 + 0x54u, 0x3f800000u);
    wr32(sp0 - 0x748u, 0x3f800000u);
    wr32(sp0 - 0x734u, 0x3f800000u);
    wr32(sp0 - 0x720u, 0x3f800000u);
    wr32(sp0 - 0x70cu, 0x3f800000u);
    wr32(sp0 - 0x718u, rd32(arg2));
    t91 = rd32(arg2 + 4u);
    wr32(sp0 - 0x714u, t91);
    wr32(sp0 - 0x744u, 0u);
    wr32(sp0 - 0x740u, 0u);
    wr32(sp0 - 0x73cu, 0u);
    wr32(sp0 - 0x738u, 0u);
    wr32(sp0 - 0x730u, 0u);
    wr32(sp0 - 0x72cu, 0u);
    wr32(sp0 - 0x728u, 0u);
    wr32(sp0 - 0x724u, 0u);
    wr32(sp0 - 0x71cu, 0u);
    t92 = rd32(arg2 + 8u);
    wr32(sp0 - 0x710u, t92);
    t93 = t88 + 0x18u - (sp0 - 0x6b8u);
    wr32(sp0 - 0x750u, t93);
    eax = t88;
    ecx = t88 + 0x18u;
    ebp = sp0 - 0x6b8u;
    loc_750 = t93;
    loc_6b8_f = (double)rdf32(sp0 - 0x6b8u);
    loc_754 = rd32(sp0 - 0x754u);
L_101721f2: ;
    COW_AT(101721f2)
    wr32(sp0 - 0x74cu, 4u);
    wr32(sp0 - 0x6c0u, ebp + loc_750);
    wr32(sp0 - 0x758u, sp0 - 0x748u);
    loc_74c = 4u;
    loc_6c0 = ebp + loc_750;
    loc_758 = sp0 - 0x748u;
L_1017220f: ;
    COW_AT(1017220f)
    d94 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(ebp, 0u);
    edx = loc_758;
    ebx = 4u;
    edi = loc_6c0;
    loc_750 = rd32(sp0 - 0x750u);
    loc_74c = rd32(sp0 - 0x74cu);
    loc_6c0 = rd32(sp0 - 0x6c0u);
    loc_758 = rd32(sp0 - 0x758u);
    loc_6b8 = rd32(sp0 - 0x6b8u);
    x0 = d94;
L_1017222c: ;
    COW_AT(1017222c)
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(edi) * (double)rdf32(edx)));
        edx = edx + 0x10u;
        edi = edi + 4u;
        goto L_1017222c;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(edi) * (double)rdf32(edx)));
    COW_AT(1017223b)
    wrf32(ebp, (float)x0);
    wr32(sp0 - 0x758u, loc_758 + 4u);
    wr32(sp0 - 0x74cu, loc_74c - 1u);
    if (loc_74c != 1u)
    {
        ebp = ebp + 4u;
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = loc_74c - 1u;
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_758 = loc_758 + 4u;
        loc_6b8_f = (double)rdf32(sp0 - 0x6b8u);
        loc_754 = rd32(sp0 - 0x754u);
        goto L_1017220f;
    }
    ebp = ebp + 4u;
    loc_750 = rd32(sp0 - 0x750u);
    loc_6b8_f = (double)rdf32(sp0 - 0x6b8u);
    COW_AT(10172257)
    t95 = rd32(sp0 - 0x754u) - 1u;
    t96 = rd32(sp0 - 0x754u);
    wr32(sp0 - 0x754u, t95);
    if (t96 != 1u)
    {
        loc_754 = t95;
        goto L_101721f2;
    }
    COW_AT(10172262)
    wr32(ecx, cow_f2bits(loc_6b8_f));
    t97 = rd32(sp0 - 0x6b4u);
    wr32(ecx + 4u, t97);
    t98 = rd32(sp0 - 0x6b0u);
    wr32(ecx + 8u, t98);
    t99 = rd32(sp0 - 0x6acu);
    wr32(ecx + 0xcu, t99);
    t100 = rd32(sp0 - 0x6a8u);
    wr32(ecx + 0x10u, t100);
    t101 = rd32(sp0 - 0x6a4u);
    wr32(ecx + 0x14u, t101);
    t102 = rd32(sp0 - 0x6a0u);
    wr32(ecx + 0x18u, t102);
    t103 = rd32(sp0 - 0x69cu);
    wr32(ecx + 0x1cu, t103);
    t104 = rd32(sp0 - 0x698u);
    wr32(ecx + 0x20u, t104);
    t105 = rd32(sp0 - 0x694u);
    wr32(ecx + 0x24u, t105);
    t106 = rd32(sp0 - 0x690u);
    wr32(ecx + 0x28u, t106);
    t107 = rd32(sp0 - 0x68cu);
    wr32(ecx + 0x2cu, t107);
    t108 = rd32(sp0 - 0x688u);
    wr32(ecx + 0x30u, t108);
    t109 = rd32(sp0 - 0x684u);
    wr32(ecx + 0x34u, t109);
    t110 = rd32(sp0 - 0x680u);
    wr32(ecx + 0x38u, t110);
    t111 = rd32(sp0 - 0x67cu);
    wr32(ecx + 0x3cu, t111);
    wr32(sp0 - 0x748u, 0x3f800000u);
    wr32(ecx + 0x40u, 0x3f800000u);
    wr32(ecx + 0x44u, 0u);
    wr32(ecx + 0x48u, 0u);
    wr32(ecx + 0x4cu, 0u);
    wr32(ecx + 0x50u, 0u);
    wr32(ecx + 0x54u, 0x3f800000u);
    wr32(ecx + 0x58u, 0u);
    wr32(ecx + 0x5cu, 0u);
    wr32(ecx + 0x60u, 0u);
    wr32(ecx + 0x64u, 0u);
    wr32(ecx + 0x68u, 0x3f800000u);
    wr32(ecx + 0x6cu, 0u);
    wr32(ecx + 0x70u, 0u);
    wr32(ecx + 0x74u, 0u);
    wr32(ecx + 0x78u, 0u);
    wr32(ecx + 0x7cu, 0x3f800000u);
    d112 = (double)(float)-(double)rdf32(arg2 + 8u);
    wrf32(sp0 - 0x644u, (float)d112);
    d113 = (double)(float)-(double)rdf32(arg2);
    wrf32(sp0 - 0x718u, (float)d113);
    wr32(sp0 - 0x744u, 0u);
    wr32(sp0 - 0x740u, 0u);
    d114 = (double)(float)-(double)rdf32(arg2 + 4u);
    wrf32(sp0 - 0x714u, (float)d114);
    wr32(sp0 - 0x73cu, 0u);
    wr32(sp0 - 0x738u, 0u);
    wr32(sp0 - 0x730u, 0u);
    wr32(sp0 - 0x72cu, 0u);
    wr32(sp0 - 0x728u, 0u);
    wr32(sp0 - 0x724u, 0u);
    wr32(sp0 - 0x71cu, 0u);
    wr32(sp0 - 0x710u, cow_f2bits(d112));
    wr32(sp0 - 0x734u, 0x3f800000u);
    wr32(sp0 - 0x720u, 0x3f800000u);
    wr32(sp0 - 0x70cu, 0x3f800000u);
    wr32(sp0 - 0x754u, ecx + 0x40u);
    wr32(sp0 - 0x750u, 4u);
    edx = ecx + 0x40u;
    edi = sp0 - 0x700u;
    loc_754 = ecx + 0x40u;
    loc_750 = 4u;
    loc_700_f = (double)rdf32(sp0 - 0x700u);
L_101723a8: ;
    COW_AT(101723a8)
    wr32(sp0 - 0x74cu, edi);
    wr32(sp0 - 0x758u, sp0 - 0x748u);
    wr32(sp0 - 0x6c0u, 4u);
    loc_74c = edi;
    loc_758 = sp0 - 0x748u;
    loc_6c0 = 4u;
L_101723bf: ;
    COW_AT(101723bf)
    d115 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(edi, 0u);
    ebx = 4u;
    ebp = loc_754;
    edi = rd32(sp0 - 0x758u);
    loc_754 = rd32(sp0 - 0x754u);
    loc_750 = rd32(sp0 - 0x750u);
    loc_74c = rd32(sp0 - 0x74cu);
    loc_758 = rd32(sp0 - 0x758u);
    loc_6c0 = rd32(sp0 - 0x6c0u);
    loc_700 = rd32(sp0 - 0x700u);
    x0 = d115;
L_101723d8: ;
    COW_AT(101723d8)
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(ebp) * (double)rdf32(edi)));
        ebp = ebp + 4u;
        edi = edi + 0x10u;
        goto L_101723d8;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(ebp) * (double)rdf32(edi)));
    COW_AT(101723e8)
    wrf32(loc_74c, (float)x0);
    wr32(sp0 - 0x74cu, loc_74c + 4u);
    wr32(sp0 - 0x758u, loc_758 + 4u);
    wr32(sp0 - 0x6c0u, loc_6c0 - 1u);
    if (loc_6c0 != 1u)
    {
        edi = loc_74c + 4u;
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = loc_74c + 4u;
        loc_758 = loc_758 + 4u;
        loc_6c0 = loc_6c0 - 1u;
        loc_700_f = (double)rdf32(sp0 - 0x700u);
        goto L_101723bf;
    }
    edi = loc_74c + 4u;
    loc_754 = rd32(sp0 - 0x754u);
    loc_750 = rd32(sp0 - 0x750u);
    loc_700_f = (double)rdf32(sp0 - 0x700u);
    COW_AT(10172411)
    wr32(sp0 - 0x754u, loc_754 + 0x10u);
    wr32(sp0 - 0x750u, loc_750 - 1u);
    if (loc_750 != 1u)
    {
        loc_754 = loc_754 + 0x10u;
        loc_750 = loc_750 - 1u;
        goto L_101723a8;
    }
    COW_AT(10172427)
    wr32(edx, cow_f2bits(loc_700_f));
    t116 = rd32(sp0 - 0x6fcu);
    wr32(edx + 4u, t116);
    t117 = rd32(sp0 - 0x6f8u);
    wr32(edx + 8u, t117);
    t118 = rd32(sp0 - 0x6f4u);
    wr32(edx + 0xcu, t118);
    t119 = rd32(sp0 - 0x6f0u);
    wr32(edx + 0x10u, t119);
    t120 = rd32(sp0 - 0x6ecu);
    wr32(edx + 0x14u, t120);
    t121 = rd32(sp0 - 0x6e8u);
    wr32(edx + 0x18u, t121);
    t122 = rd32(sp0 - 0x6e4u);
    wr32(edx + 0x1cu, t122);
    t123 = rd32(sp0 - 0x6e0u);
    wr32(edx + 0x20u, t123);
    t124 = rd32(sp0 - 0x6dcu);
    wr32(edx + 0x24u, t124);
    t125 = rd32(sp0 - 0x6d8u);
    wr32(edx + 0x28u, t125);
    t126 = rd32(sp0 - 0x6d4u);
    wr32(edx + 0x2cu, t126);
    t127 = rd32(sp0 - 0x6d0u);
    wr32(edx + 0x30u, t127);
    t128 = rd32(sp0 - 0x6ccu);
    wr32(edx + 0x34u, t128);
    t129 = rd32(sp0 - 0x6c8u);
    wr32(edx + 0x38u, t129);
    t130 = rd32(sp0 - 0x6c4u);
    wr32(edx + 0x3cu, t130);
    t131 = rd32(ecx + 0xa4u);
    wr32(ecx + 0x80u, 0x3f800000u);
    wr32(ecx + 0x84u, 0u);
    wr32(ecx + 0x88u, 0u);
    wr32(ecx + 0x8cu, 0u);
    wr32(ecx + 0x90u, 0x3f800000u);
    wr32(ecx + 0x94u, 0u);
    wr32(ecx + 0x98u, 0u);
    wr32(ecx + 0x9cu, 0u);
    wr32(ecx + 0xa0u, 0x3f800000u);
    t132 = (t131 & 0xfffffffeu) | 2u;
    d133 = (double)rdf32(arg2 + 0x1cu);
    wr32(ecx + 0xa4u, t132);
    t134 = ((uint32_t)((int32_t)(rd32(arg2 + 0x30u) << 0x10u) >> 0x1fu) & 1u) << 2u ^ (t132 & 0xfffffffbu);
    wr32(ecx + 0xa4u, t134);
    t135 = (uint32_t)((int32_t)((rd32(arg2 + 0x30u) & 0x70000u) << 0xbu) >> 0x1bu) << 3u ^ (t134 & 0xffffffc7u);
    wr32(ecx + 0xa4u, t135);
    t136 = rd32(arg2 + 0x30u);
    d137 = fr(g, d133 * (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(ecx + 0xa8u, 0u);
    t138 = ((uint32_t)((int32_t)(t136 << 0xbu) >> 0x1eu) & 3u) << 0x1au ^ (t135 & 0xf3ffffffu);
    wr32(ecx + 0xa4u, t138);
    wr8(ecx + 0xacu, 0u);
    wr8(ecx + 0xadu, 0u);
    wr8(ecx + 0xaeu, 0u);
    wr8(ecx + 0xafu, 0u);
    wr32(ecx + 0xb0u, 0u);
    d139 = fr(g, (double)rdf32(arg2 + 4u) - d137);
    wrf32(ecx + 0xb4u, (float)d139);
    wr32(sp0 - 0x700u, 0x3f800000u);
    d140 = fr(g, d137 + (double)rdf32(arg2 + 4u));
    wr32(ecx + 0xbcu, 0u);
    wr32(sp0 - 0x6fcu, 0u);
    wr32(sp0 - 0x6f8u, 0u);
    wr32(sp0 - 0x6f4u, 0u);
    wr32(sp0 - 0x6f0u, 0u);
    wr32(sp0 - 0x6ecu, 0x3f800000u);
    wrf32(ecx + 0xb8u, (float)d140);
    wr32(eax + 0xdcu, eax + 0x148u);
    wr32(eax + 0xd8u, eax + 0xe8u);
    wr32(eax + 0xe0u, eax + 0x190u);
    wr16(eax + 0xe6u, 1u);
    wr16(eax + 0xe4u, 0xcu);
    t141 = rd32(arg2 + 0x10u);
    wr32(sp0 - 0x750u, t141);
    wr32(sp0 - 0x6e8u, 0u);
    wr32(sp0 - 0x6e4u, 0u);
    wr32(sp0 - 0x6e0u, 0u);
    wr32(sp0 - 0x6dcu, 0u);
    wr32(sp0 - 0x6d8u, 0x3f800000u);
    wr32(sp0 - 0x6d4u, 0u);
    wr32(sp0 - 0x6d0u, 0u);
    wr32(sp0 - 0x6ccu, 0u);
    wr32(sp0 - 0x6c8u, 0u);
    wr32(sp0 - 0x6c4u, 0x3f800000u);
    wr32(sp0 - 0x744u, 0u);
    wr32(sp0 - 0x73cu, 0u);
    wr32(sp0 - 0x738u, 0u);
    wr32(sp0 - 0x734u, 0x3f800000u);
    wr32(sp0 - 0x730u, 0u);
    wr32(sp0 - 0x72cu, 0u);
    wr32(sp0 - 0x724u, 0u);
    wr32(sp0 - 0x71cu, 0u);
    wr32(sp0 - 0x718u, 0u);
    wr32(sp0 - 0x714u, 0u);
    wr32(sp0 - 0x710u, 0u);
    wr32(sp0 - 0x70cu, 0x3f800000u);
    wr32(sp0 - 0x758u, 0u);
    d142 = (double)(float)fr(g, cos(cow_bits2f(t141)));
    wrf32(sp0 - 0x748u, (float)d142);
    d143 = fr(g, sin(cow_bits2f(t141)));
    wrf32(sp0 - 0x740u, (float)(double)(float)-d143);
    wrf32(sp0 - 0x728u, (float)(double)(float)d143);
    d144 = (double)(float)fr(g, cos(cow_bits2f(t141)));
    wrf32(sp0 - 0x720u, (float)d144);
    loc_6e8 = 0u;
    loc_6e4 = 0u;
    loc_6e0 = 0u;
    loc_6dc = 0u;
    loc_6d8 = 0x3f800000u;
    loc_6d4 = 0u;
    loc_6d0 = 0u;
    loc_6cc = 0u;
    loc_6c8 = 0u;
    loc_6c4 = 0x3f800000u;
    loc_758 = 0u;
L_101726a5: ;
    COW_AT(101726a5)
    wr32(sp0 - 0x750u, 4u);
    ebx = sp0 - 0x748u;
    ebp = loc_758 + sp0 - 0x640u;
    loc_750 = 4u;
L_101726bc: ;
    COW_AT(101726bc)
    wr32(ebp, 0u);
    ecx = ebx;
    edx = loc_758 + sp0 - 0x700u;
    edi = 4u;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_101726d8: ;
    COW_AT(101726d8)
    if (edi != 1u)
    {
        edi = edi - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(edx) * (double)rdf32(ecx)));
        ecx = ecx + 0x10u;
        edx = edx + 4u;
        goto L_101726d8;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(edx) * (double)rdf32(ecx)));
    COW_AT(101726e7)
    wrf32(ebp, (float)x0);
    t145 = rd32(sp0 - 0x750u) - 1u;
    t146 = rd32(sp0 - 0x750u);
    wr32(sp0 - 0x750u, t145);
    if (t146 != 1u)
    {
        ebx = ebx + 4u;
        ebp = ebp + 4u;
        loc_750 = t145;
        loc_6e8 = rd32(sp0 - 0x6e8u);
        loc_6e4 = rd32(sp0 - 0x6e4u);
        loc_6e0 = rd32(sp0 - 0x6e0u);
        loc_6dc = rd32(sp0 - 0x6dcu);
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6d4 = rd32(sp0 - 0x6d4u);
        loc_6d0 = rd32(sp0 - 0x6d0u);
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c8 = rd32(sp0 - 0x6c8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_758 = rd32(sp0 - 0x758u);
        goto L_101726bc;
    }
    COW_AT(101726fb)
    t147 = rd32(sp0 - 0x758u) + 0x10u;
    t148 = rd32(sp0 - 0x758u);
    wr32(sp0 - 0x758u, t147);
    if ((int32_t)(t148 + 0x10u) < 64)
    {
        loc_6e8 = rd32(sp0 - 0x6e8u);
        loc_6e4 = rd32(sp0 - 0x6e4u);
        loc_6e0 = rd32(sp0 - 0x6e0u);
        loc_6dc = rd32(sp0 - 0x6dcu);
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6d4 = rd32(sp0 - 0x6d4u);
        loc_6d0 = rd32(sp0 - 0x6d0u);
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c8 = rd32(sp0 - 0x6c8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_758 = t147;
        goto L_101726a5;
    }
    COW_AT(1017270b)
    t149 = rd32(arg2 + 0x18u);
    wr32(sp0 - 0x748u, t149);
    wr32(sp0 - 0x6b8u, 0x3f800000u);
    wr32(sp0 - 0x6b4u, 0u);
    wr32(sp0 - 0x6b0u, 0u);
    wr32(sp0 - 0x6acu, 0u);
    wr32(sp0 - 0x6a8u, 0u);
    wr32(sp0 - 0x6a4u, 0x3f800000u);
    wr32(sp0 - 0x6a0u, 0u);
    wr32(sp0 - 0x69cu, 0u);
    wr32(sp0 - 0x698u, 0u);
    wr32(sp0 - 0x694u, 0u);
    wr32(sp0 - 0x690u, 0x3f800000u);
    wr32(sp0 - 0x68cu, 0u);
    wr32(sp0 - 0x688u, 0u);
    wr32(sp0 - 0x684u, 0u);
    wr32(sp0 - 0x680u, 0u);
    wr32(sp0 - 0x67cu, 0x3f800000u);
    wr32(sp0 - 0x744u, 0u);
    wr32(sp0 - 0x740u, 0u);
    wr32(sp0 - 0x73cu, 0u);
    wr32(sp0 - 0x738u, 0u);
    wr32(sp0 - 0x730u, 0u);
    wr32(sp0 - 0x72cu, 0u);
    wr32(sp0 - 0x728u, 0u);
    wr32(sp0 - 0x724u, 0u);
    wr32(sp0 - 0x71cu, 0u);
    wr32(sp0 - 0x718u, 0u);
    wr32(sp0 - 0x714u, 0u);
    wr32(sp0 - 0x710u, 0u);
    wr32(sp0 - 0x70cu, 0x3f800000u);
    t150 = rd32(arg2 + 0x1cu);
    wr32(sp0 - 0x734u, t150);
    t151 = rd32(arg2 + 0x20u);
    wr32(sp0 - 0x720u, t151);
    wr32(sp0 - 0x758u, 0u);
    loc_758 = 0u;
L_10172840: ;
    COW_AT(10172840)
    wr32(sp0 - 0x750u, 4u);
    ebx = sp0 - 0x748u;
    ebp = loc_758 + sp0 - 0x700u;
    loc_750 = 4u;
L_10172854: ;
    COW_AT(10172854)
    wr32(ebp, 0u);
    ecx = ebx;
    edx = loc_758 + sp0 - 0x6b8u;
    edi = 4u;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_10172873: ;
    COW_AT(10172873)
    if (edi != 1u)
    {
        edi = edi - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(edx) * (double)rdf32(ecx)));
        ecx = ecx + 0x10u;
        edx = edx + 4u;
        goto L_10172873;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(edx) * (double)rdf32(ecx)));
    COW_AT(10172882)
    wrf32(ebp, (float)x0);
    t152 = rd32(sp0 - 0x750u) - 1u;
    t153 = rd32(sp0 - 0x750u);
    wr32(sp0 - 0x750u, t152);
    if (t153 != 1u)
    {
        ebx = ebx + 4u;
        ebp = ebp + 4u;
        loc_750 = t152;
        loc_758 = rd32(sp0 - 0x758u);
        goto L_10172854;
    }
    COW_AT(10172896)
    t154 = rd32(sp0 - 0x758u) + 0x10u;
    t155 = rd32(sp0 - 0x758u);
    wr32(sp0 - 0x758u, t154);
    if ((int32_t)(t155 + 0x10u) < 64)
    {
        loc_758 = t154;
        goto L_10172840;
    }
    COW_AT(101728a6)
    t156 = rd32(sp0 - 0x700u);
    wr32(sp0 - 0x6b8u, t156);
    t157 = rd32(sp0 - 0x6f8u);
    wr32(sp0 - 0x6b0u, t157);
    t158 = rd32(sp0 - 0x6f0u);
    wr32(sp0 - 0x6a8u, t158);
    t159 = rd32(sp0 - 0x6e8u);
    wr32(sp0 - 0x6a0u, t159);
    t160 = rd32(sp0 - 0x6e0u);
    wr32(sp0 - 0x698u, t160);
    t161 = rd32(sp0 - 0x6d8u);
    wr32(sp0 - 0x690u, t161);
    t162 = rd32(sp0 - 0x6d0u);
    wr32(sp0 - 0x688u, t162);
    t163 = rd32(sp0 - 0x6c8u);
    wr32(sp0 - 0x680u, t163);
    t164 = rd32(arg2 + 0x10u);
    wr32(sp0 - 0x750u, t164);
    t165 = rd32(sp0 - 0x6fcu);
    wr32(sp0 - 0x6b4u, t165);
    wr32(sp0 - 0x744u, 0u);
    t166 = rd32(sp0 - 0x6f4u);
    wr32(sp0 - 0x6acu, t166);
    t167 = rd32(sp0 - 0x6ecu);
    wr32(sp0 - 0x6a4u, t167);
    t168 = rd32(sp0 - 0x6e4u);
    wr32(sp0 - 0x69cu, t168);
    t169 = rd32(sp0 - 0x6dcu);
    wr32(sp0 - 0x694u, t169);
    t170 = rd32(sp0 - 0x6d4u);
    wr32(sp0 - 0x68cu, t170);
    t171 = rd32(sp0 - 0x6ccu);
    wr32(sp0 - 0x684u, t171);
    t172 = rd32(sp0 - 0x6c4u);
    wr32(sp0 - 0x67cu, t172);
    wr32(sp0 - 0x73cu, 0u);
    wr32(sp0 - 0x738u, 0u);
    wr32(sp0 - 0x734u, 0x3f800000u);
    wr32(sp0 - 0x730u, 0u);
    wr32(sp0 - 0x72cu, 0u);
    wr32(sp0 - 0x724u, 0u);
    wr32(sp0 - 0x71cu, 0u);
    wr32(sp0 - 0x718u, 0u);
    wr32(sp0 - 0x714u, 0u);
    wr32(sp0 - 0x710u, 0u);
    wr32(sp0 - 0x70cu, 0x3f800000u);
    wr32(sp0 - 0x758u, 0u);
    d173 = (double)(float)fr(g, cos(cow_bits2f(t164)));
    wrf32(sp0 - 0x748u, (float)d173);
    d174 = fr(g, sin(cow_bits2f(t164)));
    wrf32(sp0 - 0x740u, (float)(double)(float)-d174);
    wrf32(sp0 - 0x728u, (float)(double)(float)d174);
    d175 = (double)(float)fr(g, cos(cow_bits2f(t164)));
    wrf32(sp0 - 0x720u, (float)d175);
    loc_758 = 0u;
L_10172a03: ;
    COW_AT(10172a03)
    wr32(sp0 - 0x750u, 4u);
    ebx = sp0 - 0x748u;
    ebp = loc_758 + sp0 - 0x700u;
    loc_750 = 4u;
L_10172a17: ;
    COW_AT(10172a17)
    wr32(ebp, 0u);
    ecx = ebx;
    edx = loc_758 + sp0 - 0x6b8u;
    edi = 4u;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_10172a36: ;
    COW_AT(10172a36)
    if (edi != 1u)
    {
        edi = edi - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(edx) * (double)rdf32(ecx)));
        ecx = ecx + 0x10u;
        edx = edx + 4u;
        goto L_10172a36;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(edx) * (double)rdf32(ecx)));
    COW_AT(10172a45)
    wrf32(ebp, (float)x0);
    t176 = rd32(sp0 - 0x750u) - 1u;
    t177 = rd32(sp0 - 0x750u);
    wr32(sp0 - 0x750u, t176);
    if (t177 != 1u)
    {
        ebx = ebx + 4u;
        ebp = ebp + 4u;
        loc_750 = t176;
        loc_758 = rd32(sp0 - 0x758u);
        goto L_10172a17;
    }
    ebp = ebp + 4u;
    COW_AT(10172a59)
    t178 = rd32(sp0 - 0x758u) + 0x10u;
    t179 = rd32(sp0 - 0x758u);
    wr32(sp0 - 0x758u, t178);
    if ((int32_t)(t179 + 0x10u) < 64)
    {
        loc_758 = t178;
        goto L_10172a03;
    }
    COW_AT(10172a69)
    wr32(sp0 - 0x748u, 0u);
    wr32(sp0 - 0x744u, 0xbf800000u);
    wr32(sp0 - 0x740u, 0u);
    wr32(sp0 - 0x73cu, 0u);
    wr32(sp0 - 0x738u, 0u);
    wr32(sp0 - 0x734u, 0xbf800000u);
    wr32(sp0 - 0x730u, 0xbf800000u);
    wr32(sp0 - 0x72cu, 0u);
    wr32(sp0 - 0x728u, 0u);
    wr32(sp0 - 0x724u, 0u);
    wr32(sp0 - 0x720u, 0u);
    wr32(sp0 - 0x71cu, 0x3f800000u);
    wr32(sp0 - 0x718u, 0x3f800000u);
    wr32(sp0 - 0x714u, 0u);
    wr32(sp0 - 0x710u, 0u);
    wr32(sp0 - 0x70cu, 0u);
    wr32(sp0 - 0x708u, 0x3f800000u);
    wr32(sp0 - 0x704u, 0u);
    wr32(sp0 - 0x6b8u, 0xbf000000u);
    wr32(sp0 - 0x6b4u, 0xbf000000u);
    wr32(sp0 - 0x6b0u, 0x3f000000u);
    wr32(sp0 - 0x6acu, 0x3f000000u);
    wr32(sp0 - 0x6a8u, 0xbf000000u);
    wr32(sp0 - 0x6a4u, 0x3f000000u);
    wr32(sp0 - 0x6a0u, 0xbf000000u);
    wr32(sp0 - 0x69cu, 0xbf000000u);
    wr32(sp0 - 0x698u, 0xbf000000u);
    wr32(sp0 - 0x694u, 0x3f000000u);
    wr32(sp0 - 0x690u, 0xbf000000u);
    wr32(sp0 - 0x68cu, 0xbf000000u);
    wr32(sp0 - 0x688u, 0xbf000000u);
    wr32(sp0 - 0x684u, 0x3f000000u);
    wr32(sp0 - 0x680u, 0x3f000000u);
    wr32(sp0 - 0x67cu, 0x3f000000u);
    wr32(sp0 - 0x678u, 0x3f000000u);
    wr32(sp0 - 0x674u, 0x3f000000u);
    wr32(sp0 - 0x670u, 0xbf000000u);
    wr32(sp0 - 0x66cu, 0x3f000000u);
    wr32(sp0 - 0x668u, 0xbf000000u);
    wr32(sp0 - 0x664u, 0x3f000000u);
    wr32(sp0 - 0x660u, 0x3f000000u);
    wr32(sp0 - 0x65cu, 0xbf000000u);
    ecx = sp0 - 0x6b4u;
    edx = eax + 0xecu;
    edi = 8u;
L_10172c13: ;
    COW_AT(10172c13)
    d180 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x6d8u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(sp0 - 0x6f8u) * (double)rdf32(ecx - 4u))) + fr(g, (double)rdf32(sp0 - 0x6e8u) * (double)rdf32(ecx))) + (double)rdf32(sp0 - 0x6c8u));
    d181 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x6dcu) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(sp0 - 0x6fcu) * (double)rdf32(ecx - 4u))) + fr(g, (double)rdf32(sp0 - 0x6ecu) * (double)rdf32(ecx))) + (double)rdf32(sp0 - 0x6ccu));
    d182 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x6e0u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(sp0 - 0x700u) * (double)rdf32(ecx - 4u))) + fr(g, (double)rdf32(sp0 - 0x6f0u) * (double)rdf32(ecx))) + (double)rdf32(sp0 - 0x6d0u));
    wrf32(sp0 - 0x644u, (float)(double)(float)d180);
    wrf32(edx - 4u, (float)d182);
    wr32(edx + 4u, cow_f2bits((double)(float)d180));
    wrf32(edx, (float)d181);
    if (edi != 1u)
    {
        ecx = ecx + 0xcu;
        edx = edx + 0xcu;
        edi = edi - 1u;
        goto L_10172c13;
    }
    COW_AT(10172ca5)
    ecx = sp0 - 0x744u;
    edx = eax + 0x14cu;
    edi = 6u;
L_10172cb4: ;
    COW_AT(10172cb4)
    d183 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x618u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(sp0 - 0x638u) * (double)rdf32(ecx - 4u))) + fr(g, (double)rdf32(sp0 - 0x628u) * (double)rdf32(ecx))) + (double)rdf32(sp0 - 0x608u));
    d184 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x61cu) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(sp0 - 0x63cu) * (double)rdf32(ecx - 4u))) + fr(g, (double)rdf32(sp0 - 0x62cu) * (double)rdf32(ecx))) + (double)rdf32(sp0 - 0x60cu));
    d185 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x620u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(sp0 - 0x640u) * (double)rdf32(ecx - 4u))) + fr(g, (double)rdf32(sp0 - 0x630u) * (double)rdf32(ecx))) + (double)rdf32(sp0 - 0x610u));
    wrf32(sp0 - 0x644u, (float)(double)(float)d183);
    wrf32(edx - 4u, (float)d185);
    wr32(edx + 4u, cow_f2bits((double)(float)d183));
    wrf32(edx, (float)d184);
    if (edi != 1u)
    {
        ecx = ecx + 0xcu;
        edx = edx + 0xcu;
        edi = edi - 1u;
        goto L_10172cb4;
    }
    ecx = ecx + 0xcu;
    edx = edx + 0xcu;
    edi = edi - 1u;
    COW_AT(10172d55)
    t186 = rd16(eax + 0x190u);
    t187 = rd16(eax + 0x196u);
    t188 = rd16(eax + 0x194u);
    t189 = rd16(eax + 0x192u);
    wr16(eax + 0x190u, (t186 & 0x8002u) | 2u);
    wr16(eax + 0x192u, (t189 & 0xc003u) | 3u);
    wr16(eax + 0x194u, (t188 & 0xc006u) | 6u);
    wr16(eax + 0x196u, (t187 & 0x8001u) | 1u);
    t190 = rd32(arg2 + 0x30u);
    wr16(eax + 0x192u, ((t189 & 0xc003u) | 3u) & 0xbfffu);
    wr16(eax + 0x194u, (((uint32_t)((int32_t)(t190 << 0x17u) >> 0x1fu) << 0xeu ^ t188) & 0x4000u) ^ ((t188 & 0xc006u) | 6u));
    t191 = rd32(arg2 + 0x30u);
    t192 = rd16(eax + 0x19cu);
    wr16(eax + 0x190u, (uint16_t)((((t186 & 0x8002u) | 2u) & 0x7fffu) ^ (uint32_t)((int32_t)(t191 << 0x18u) >> 0x1cu) << 0xfu));
    t193 = rd32(arg2 + 0x30u);
    wr16(eax + 0x192u, (uint16_t)((((t189 & 0xc003u) | 3u) & 0x3fffu) ^ (uint32_t)((int32_t)(t193 << 0x18u) >> 0x1du) << 0xfu));
    t194 = rd32(arg2 + 0x30u);
    wr16(eax + 0x194u, (uint16_t)((((((uint32_t)((int32_t)(t190 << 0x17u) >> 0x1fu) << 0xeu ^ t188) & 0x4000u) ^ ((t188 & 0xc006u) | 6u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t194 << 0x18u) >> 0x1eu) << 0xfu));
    t195 = rd32(arg2 + 0x30u);
    t196 = rd16(eax + 0x198u);
    t197 = rd16(eax + 0x19au);
    wr16(eax + 0x196u, (uint16_t)((((t187 & 0x8001u) | 1u) & 0x7fffu) ^ (uint32_t)((int32_t)(t195 << 0x18u) >> 0x1fu) << 0xfu));
    t198 = rd16(eax + 0x19eu);
    wr16(eax + 0x198u, (t196 & 0x8003u) | 3u);
    wr16(eax + 0x19au, (t197 & 0xc007u) | 7u);
    wr16(eax + 0x19cu, (t192 & 0xc006u) | 6u);
    wr16(eax + 0x19eu, (t198 & 0x8001u) | 1u);
    t199 = rd32(arg2 + 0x30u);
    wr16(eax + 0x19cu, (((uint32_t)((int32_t)(t199 << 0x17u) >> 0x1fu) << 0xeu ^ t192) & 0x4000u) ^ ((t192 & 0xc006u) | 6u));
    wr16(eax + 0x19au, ((t197 & 0xc007u) | 7u) & 0xbfffu);
    t200 = rd32(arg2 + 0x30u);
    wr16(eax + 0x198u, (uint16_t)((((t196 & 0x8003u) | 3u) & 0x7fffu) ^ (uint32_t)((int32_t)(t200 << 0x18u) >> 0x1cu) << 0xfu));
    t201 = rd32(arg2 + 0x30u);
    wr16(eax + 0x19au, (uint16_t)((((t197 & 0xc007u) | 7u) & 0x3fffu) ^ (uint32_t)((int32_t)(t201 << 0x18u) >> 0x1du) << 0xfu));
    t202 = rd32(arg2 + 0x30u);
    wr16(eax + 0x19cu, (uint16_t)((((((uint32_t)((int32_t)(t199 << 0x17u) >> 0x1fu) << 0xeu ^ t192) & 0x4000u) ^ ((t192 & 0xc006u) | 6u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t202 << 0x18u) >> 0x1eu) << 0xfu));
    t203 = rd16(eax + 0x1a0u);
    t204 = rd32(arg2 + 0x30u);
    t205 = rd16(eax + 0x1a4u);
    wr16(eax + 0x1a0u, t203 & 0x8000u);
    t206 = rd16(eax + 0x1a6u);
    wr16(eax + 0x19eu, (uint16_t)((((t198 & 0x8001u) | 1u) & 0x7fffu) ^ (uint32_t)((int32_t)(t204 << 0x18u) >> 0x1fu) << 0xfu));
    t207 = rd16(eax + 0x1a2u);
    wr16(eax + 0x1a2u, (t207 & 0xc002u) | 2u);
    wr16(eax + 0x1a4u, (t205 & 0xc004u) | 4u);
    wr16(eax + 0x1a6u, (t206 & 0x8002u) | 2u);
    t208 = rd32(arg2 + 0x30u);
    t209 = rd16(eax + 0x1a0u);
    wr16(eax + 0x1a2u, ((t207 & 0xc002u) | 2u) & 0xbfffu);
    wr16(eax + 0x1a4u, (((uint32_t)((int32_t)(t208 << 0x17u) >> 0x1fu) << 0xeu ^ t205) & 0x4000u) ^ ((t205 & 0xc004u) | 4u));
    t210 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1a0u, (uint16_t)((t209 & 0x7fffu) ^ (uint32_t)((int32_t)(t210 << 0x18u) >> 0x1cu) << 0xfu));
    t211 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1a2u, (uint16_t)((((t207 & 0xc002u) | 2u) & 0x3fffu) ^ (uint32_t)((int32_t)(t211 << 0x18u) >> 0x1du) << 0xfu));
    t212 = rd16(eax + 0x1acu);
    t213 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1a4u, (uint16_t)((((((uint32_t)((int32_t)(t208 << 0x17u) >> 0x1fu) << 0xeu ^ t205) & 0x4000u) ^ ((t205 & 0xc004u) | 4u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t213 << 0x18u) >> 0x1eu) << 0xfu));
    t214 = rd32(arg2 + 0x30u);
    t215 = rd16(eax + 0x1aeu);
    t216 = rd16(eax + 0x1aau);
    wr16(eax + 0x1a6u, (uint16_t)((((t206 & 0x8002u) | 2u) & 0x7fffu) ^ (uint32_t)((int32_t)(t214 << 0x18u) >> 0x1fu) << 0xfu));
    t217 = rd16(eax + 0x1a8u);
    wr16(eax + 0x1a8u, (t217 & 0x8002u) | 2u);
    wr16(eax + 0x1aau, (t216 & 0xc006u) | 6u);
    wr16(eax + 0x1acu, (t212 & 0xc004u) | 4u);
    wr16(eax + 0x1aeu, (t215 & 0x8002u) | 2u);
    t218 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1aau, ((t216 & 0xc006u) | 6u) & 0xbfffu);
    wr16(eax + 0x1acu, (((uint32_t)((int32_t)(t218 << 0x17u) >> 0x1fu) << 0xeu ^ t212) & 0x4000u) ^ ((t212 & 0xc004u) | 4u));
    t219 = rd32(arg2 + 0x30u);
    t220 = rd16(eax + 0x1b4u);
    wr16(eax + 0x1a8u, (uint16_t)((((t217 & 0x8002u) | 2u) & 0x7fffu) ^ (uint32_t)((int32_t)(t219 << 0x18u) >> 0x1cu) << 0xfu));
    t221 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1aau, (uint16_t)((((t216 & 0xc006u) | 6u) & 0x3fffu) ^ (uint32_t)((int32_t)(t221 << 0x18u) >> 0x1du) << 0xfu));
    t222 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1acu, (uint16_t)((((((uint32_t)((int32_t)(t218 << 0x17u) >> 0x1fu) << 0xeu ^ t212) & 0x4000u) ^ ((t212 & 0xc004u) | 4u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t222 << 0x18u) >> 0x1eu) << 0xfu));
    t223 = rd16(eax + 0x1b2u);
    t224 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1b2u, t223 & 0xc000u);
    t225 = rd16(eax + 0x1b0u);
    t226 = rd16(eax + 0x1b2u);
    wr16(eax + 0x1aeu, (uint16_t)((((t215 & 0x8002u) | 2u) & 0x7fffu) ^ (uint32_t)((int32_t)(t224 << 0x18u) >> 0x1fu) << 0xfu));
    wr16(eax + 0x1b0u, (t225 & 0x8001u) | 1u);
    t227 = rd16(eax + 0x1b6u);
    wr16(eax + 0x1b4u, (t220 & 0xc005u) | 5u);
    wr16(eax + 0x1b6u, (t227 & 0x8003u) | 3u);
    t228 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1b2u, t226 & 0xbfffu);
    wr16(eax + 0x1b4u, (((uint32_t)((int32_t)(t228 << 0x17u) >> 0x1fu) << 0xeu ^ t220) & 0x4000u) ^ ((t220 & 0xc005u) | 5u));
    t229 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1b0u, (uint16_t)((((t225 & 0x8001u) | 1u) & 0x7fffu) ^ (uint32_t)((int32_t)(t229 << 0x18u) >> 0x1cu) << 0xfu));
    t230 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1b2u, (uint16_t)((t226 & 0x3fffu) ^ (uint32_t)((int32_t)(t230 << 0x18u) >> 0x1du) << 0xfu));
    t231 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1b4u, (uint16_t)((((((uint32_t)((int32_t)(t228 << 0x17u) >> 0x1fu) << 0xeu ^ t220) & 0x4000u) ^ ((t220 & 0xc005u) | 5u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t231 << 0x18u) >> 0x1eu) << 0xfu));
    t232 = rd16(eax + 0x1b8u);
    t233 = rd32(arg2 + 0x30u);
    t234 = rd16(eax + 0x1bcu);
    wr16(eax + 0x1b8u, t232 & 0x8000u);
    t235 = rd16(eax + 0x1beu);
    wr16(eax + 0x1b6u, (uint16_t)((((t227 & 0x8003u) | 3u) & 0x7fffu) ^ (uint32_t)((int32_t)(t233 << 0x18u) >> 0x1fu) << 0xfu));
    t236 = rd16(eax + 0x1bau);
    wr16(eax + 0x1bau, (t236 & 0xc004u) | 4u);
    wr16(eax + 0x1bcu, (t234 & 0xc005u) | 5u);
    wr16(eax + 0x1beu, (t235 & 0x8003u) | 3u);
    t237 = rd32(arg2 + 0x30u);
    t238 = rd16(eax + 0x1b8u);
    wr16(eax + 0x1bau, ((t236 & 0xc004u) | 4u) & 0xbfffu);
    wr16(eax + 0x1bcu, (((uint32_t)((int32_t)(t237 << 0x17u) >> 0x1fu) << 0xeu ^ t234) & 0x4000u) ^ ((t234 & 0xc005u) | 5u));
    t239 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1b8u, (uint16_t)((t238 & 0x7fffu) ^ (uint32_t)((int32_t)(t239 << 0x18u) >> 0x1cu) << 0xfu));
    t240 = rd16(eax + 0x1c4u);
    t241 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1bau, (uint16_t)((((t236 & 0xc004u) | 4u) & 0x3fffu) ^ (uint32_t)((int32_t)(t241 << 0x18u) >> 0x1du) << 0xfu));
    t242 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1bcu, (uint16_t)((((((uint32_t)((int32_t)(t237 << 0x17u) >> 0x1fu) << 0xeu ^ t234) & 0x4000u) ^ ((t234 & 0xc005u) | 5u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t242 << 0x18u) >> 0x1eu) << 0xfu));
    t243 = rd32(arg2 + 0x30u);
    t244 = rd16(eax + 0x1c6u);
    t245 = rd16(eax + 0x1c2u);
    wr16(eax + 0x1beu, (uint16_t)((((t235 & 0x8003u) | 3u) & 0x7fffu) ^ (uint32_t)((int32_t)(t243 << 0x18u) >> 0x1fu) << 0xfu));
    t246 = rd16(eax + 0x1c0u);
    wr16(eax + 0x1c0u, (t246 & 0x8003u) | 3u);
    wr16(eax + 0x1c2u, (t245 & 0xc001u) | 1u);
    wr16(eax + 0x1c4u, (t240 & 0xc007u) | 7u);
    wr16(eax + 0x1c6u, (t244 & 0x8004u) | 4u);
    t247 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1c2u, ((t245 & 0xc001u) | 1u) & 0xbfffu);
    wr16(eax + 0x1c4u, (((uint32_t)((int32_t)(t247 << 0x17u) >> 0x1fu) << 0xeu ^ t240) & 0x4000u) ^ ((t240 & 0xc007u) | 7u));
    t248 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1c0u, (uint16_t)((((t246 & 0x8003u) | 3u) & 0x7fffu) ^ (uint32_t)((int32_t)(t248 << 0x18u) >> 0x1cu) << 0xfu));
    t249 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1c2u, (uint16_t)((((t245 & 0xc001u) | 1u) & 0x3fffu) ^ (uint32_t)((int32_t)(t249 << 0x18u) >> 0x1du) << 0xfu));
    t250 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1c4u, (uint16_t)((((((uint32_t)((int32_t)(t247 << 0x17u) >> 0x1fu) << 0xeu ^ t240) & 0x4000u) ^ ((t240 & 0xc007u) | 7u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t250 << 0x18u) >> 0x1eu) << 0xfu));
    t251 = rd32(arg2 + 0x30u);
    t252 = rd16(eax + 0x1c8u);
    t253 = rd16(eax + 0x1ccu);
    t254 = rd16(eax + 0x1cau);
    wr16(eax + 0x1c6u, (uint16_t)((((t244 & 0x8004u) | 4u) & 0x7fffu) ^ (uint32_t)((int32_t)(t251 << 0x18u) >> 0x1fu) << 0xfu));
    t255 = rd16(eax + 0x1ceu);
    wr16(eax + 0x1c8u, (t252 & 0x8001u) | 1u);
    wr16(eax + 0x1cau, (t254 & 0xc005u) | 5u);
    wr16(eax + 0x1ccu, (t253 & 0xc007u) | 7u);
    wr16(eax + 0x1ceu, (t255 & 0x8004u) | 4u);
    t256 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1cau, ((t254 & 0xc005u) | 5u) & 0xbfffu);
    wr16(eax + 0x1ccu, (((uint32_t)((int32_t)(t256 << 0x17u) >> 0x1fu) << 0xeu ^ t253) & 0x4000u) ^ ((t253 & 0xc007u) | 7u));
    t257 = rd32(arg2 + 0x30u);
    t258 = rd16(eax + 0x1d4u);
    wr16(eax + 0x1c8u, (uint16_t)((((t252 & 0x8001u) | 1u) & 0x7fffu) ^ (uint32_t)((int32_t)(t257 << 0x18u) >> 0x1cu) << 0xfu));
    t259 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1cau, (uint16_t)((((t254 & 0xc005u) | 5u) & 0x3fffu) ^ (uint32_t)((int32_t)(t259 << 0x18u) >> 0x1du) << 0xfu));
    t260 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1ccu, (uint16_t)((((((uint32_t)((int32_t)(t256 << 0x17u) >> 0x1fu) << 0xeu ^ t253) & 0x4000u) ^ ((t253 & 0xc007u) | 7u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t260 << 0x18u) >> 0x1eu) << 0xfu));
    t261 = rd32(arg2 + 0x30u);
    t262 = rd16(eax + 0x1d0u);
    t263 = rd16(eax + 0x1d2u);
    wr16(eax + 0x1ceu, (uint16_t)((((t255 & 0x8004u) | 4u) & 0x7fffu) ^ (uint32_t)((int32_t)(t261 << 0x18u) >> 0x1fu) << 0xfu));
    t264 = rd16(eax + 0x1d6u);
    wr16(eax + 0x1d0u, (t262 & 0x8006u) | 6u);
    wr16(eax + 0x1d2u, (t263 & 0xc007u) | 7u);
    wr16(eax + 0x1d4u, (t258 & 0xc004u) | 4u);
    wr16(eax + 0x1d6u, (t264 & 0x8005u) | 5u);
    t265 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1d2u, ((t263 & 0xc007u) | 7u) & 0xbfffu);
    wr16(eax + 0x1d4u, (((uint32_t)((int32_t)(t265 << 0x17u) >> 0x1fu) << 0xeu ^ t258) & 0x4000u) ^ ((t258 & 0xc004u) | 4u));
    t266 = rd32(arg2 + 0x30u);
    t267 = rd16(eax + 0x1dcu);
    wr16(eax + 0x1d0u, (uint16_t)((((t262 & 0x8006u) | 6u) & 0x7fffu) ^ (uint32_t)((int32_t)(t266 << 0x18u) >> 0x1cu) << 0xfu));
    t268 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1d2u, (uint16_t)((((t263 & 0xc007u) | 7u) & 0x3fffu) ^ (uint32_t)((int32_t)(t268 << 0x18u) >> 0x1du) << 0xfu));
    t269 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1d4u, (uint16_t)((((((uint32_t)((int32_t)(t265 << 0x17u) >> 0x1fu) << 0xeu ^ t258) & 0x4000u) ^ ((t258 & 0xc004u) | 4u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t269 << 0x18u) >> 0x1eu) << 0xfu));
    t270 = rd32(arg2 + 0x30u);
    t271 = rd16(eax + 0x1d8u);
    t272 = rd16(eax + 0x1dau);
    wr16(eax + 0x1d6u, (uint16_t)((((t264 & 0x8005u) | 5u) & 0x7fffu) ^ (uint32_t)((int32_t)(t270 << 0x18u) >> 0x1fu) << 0xfu));
    t273 = rd16(eax + 0x1deu);
    wr16(eax + 0x1d8u, (t271 & 0x8007u) | 7u);
    wr16(eax + 0x1dau, (t272 & 0xc005u) | 5u);
    wr16(eax + 0x1dcu, (t267 & 0xc004u) | 4u);
    wr16(eax + 0x1deu, (t273 & 0x8005u) | 5u);
    t274 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1dau, ((t272 & 0xc005u) | 5u) & 0xbfffu);
    wr16(eax + 0x1dcu, (((uint32_t)((int32_t)(t274 << 0x17u) >> 0x1fu) << 0xeu ^ t267) & 0x4000u) ^ ((t267 & 0xc004u) | 4u));
    wr16(eax + 0x1d8u, (uint16_t)((((t271 & 0x8007u) | 7u) & 0x7fffu) ^ (uint32_t)((int32_t)(rd32(arg2 + 0x30u) << 0x18u) >> 0x1cu) << 0xfu));
    t275 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1dau, (uint16_t)((((t272 & 0xc005u) | 5u) & 0x3fffu) ^ (uint32_t)((int32_t)(t275 << 0x18u) >> 0x1du) << 0xfu));
    t276 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1dcu, (uint16_t)((((((uint32_t)((int32_t)(t274 << 0x17u) >> 0x1fu) << 0xeu ^ t267) & 0x4000u) ^ ((t267 & 0xc004u) | 4u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t276 << 0x18u) >> 0x1eu) << 0xfu));
    t277 = rd16(eax + 0x1e0u);
    t278 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1e0u, t277 & 0x8000u);
    t279 = rd16(eax + 0x1e6u);
    wr16(eax + 0x1e6u, t279 & 0x8000u);
    t280 = rd16(eax + 0x1e2u);
    wr16(eax + 0x1deu, (uint16_t)((((t273 & 0x8005u) | 5u) & 0x7fffu) ^ (uint32_t)((int32_t)(t278 << 0x18u) >> 0x1fu) << 0xfu));
    t281 = rd16(eax + 0x1e4u);
    wr16(eax + 0x1e2u, (t280 & 0xc001u) | 1u);
    wr16(eax + 0x1e4u, (t281 & 0xc002u) | 2u);
    t282 = rd32(arg2 + 0x30u);
    t283 = rd16(eax + 0x1e0u);
    wr16(eax + 0x1e2u, ((t280 & 0xc001u) | 1u) & 0xbfffu);
    t284 = rd16(eax + 0x1e6u);
    wr16(eax + 0x1e4u, (((uint32_t)((int32_t)(t282 << 0x17u) >> 0x1fu) << 0xeu ^ t281) & 0x4000u) ^ ((t281 & 0xc002u) | 2u));
    t285 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1e0u, (uint16_t)((t283 & 0x7fffu) ^ (uint32_t)((int32_t)(t285 << 0x18u) >> 0x1cu) << 0xfu));
    t286 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1e2u, (uint16_t)((((t280 & 0xc001u) | 1u) & 0x3fffu) ^ (uint32_t)((int32_t)(t286 << 0x18u) >> 0x1du) << 0xfu));
    t287 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1e4u, (uint16_t)((((((uint32_t)((int32_t)(t282 << 0x17u) >> 0x1fu) << 0xeu ^ t281) & 0x4000u) ^ ((t281 & 0xc002u) | 2u)) & 0x7fffu) ^ (uint32_t)((int32_t)(t287 << 0x18u) >> 0x1eu) << 0xfu));
    t288 = rd16(eax + 0x1e8u);
    t289 = rd16(eax + 0x1eau);
    t290 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1e6u, (uint16_t)((t284 & 0x7fffu) ^ (uint32_t)((int32_t)(t290 << 0x18u) >> 0x1fu) << 0xfu));
    wr16(eax + 0x1e8u, (t288 & 0x8001u) | 1u);
    wr16(eax + 0x1eau, (t289 & 0xc003u) | 3u);
    t291 = rd16(eax + 0x1eeu);
    t292 = rd16(eax + 0x1ecu);
    wr16(eax + 0x1eeu, t291 & 0x8000u);
    t293 = rd16(eax + 0x1eeu);
    wr16(eax + 0x1ecu, (t292 & 0xc002u) | 2u);
    t294 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1eau, ((t289 & 0xc003u) | 3u) & 0xbfffu);
    wr16(eax + 0x1ecu, (((uint32_t)((int32_t)(t294 << 0x17u) >> 0x1fu) << 0xeu ^ t292) & 0x4000u) ^ ((t292 & 0xc002u) | 2u));
    wr16(eax + 0x1e8u, (uint16_t)((((t288 & 0x8001u) | 1u) & 0x7fffu) ^ (uint32_t)((int32_t)(rd32(arg2 + 0x30u) << 0x18u) >> 0x1cu) << 0xfu));
    t295 = rd32(arg2 + 0x30u);
    wr16(eax + 0x1eau, (uint16_t)((((t289 & 0xc003u) | 3u) & 0x3fffu) ^ (uint32_t)((int32_t)(t295 << 0x18u) >> 0x1du) << 0xfu));
    wr16(eax + 0x1ecu, (uint16_t)((((((uint32_t)((int32_t)(t294 << 0x17u) >> 0x1fu) << 0xeu ^ t292) & 0x4000u) ^ ((t292 & 0xc002u) | 2u)) & 0x7fffu) ^ (uint32_t)((int32_t)(rd32(arg2 + 0x30u) << 0x18u) >> 0x1eu) << 0xfu));
    wr16(eax + 0x1eeu, (uint16_t)((t293 & 0x7fffu) ^ (uint32_t)((int32_t)(rd32(arg2 + 0x30u) << 0x18u) >> 0x1fu) << 0xfu));
    t296 = rd32(arg1 + 0xd8u);
    wr32(sp0 - 0x6c0u, t296);
    if ((int32_t)rd32(sp0 - 0x6bcu) <= 0)
    {
        ebx = rd32(sp0 - 0x6bcu);
    }
    else
    {
        eax = t296;
        ebx = rd32(sp0 - 0x6bcu);
        loc_6c0 = t296;
    COW_AT(10173935)
        wr32(sp0 - 0x750u, sp0 - 0x5f4u);
        ecx = sp0 - 0x5f4u;
        edx = 0u;
        loc_750 = sp0 - 0x5f4u;
L_10173940: ;
    COW_AT(10173940)
        if (edx != 0u)
        {
    COW_AT(10173944)
            esi = loc_6c0;
            edi = eax;
            ecx = 0x7cu;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = rd32(sp0 - 0x750u);
            loc_6c0 = rd32(sp0 - 0x6c0u);
        }
    COW_AT(10173958)
        t297 = rd32(ecx - 4u);
        wr32(eax + 0x10u, t297);
        wr32(eax + 0x14u, rd32(ecx));
        wr32(sp0 - 0x750u, ecx + 0x10u);
        if ((int32_t)(edx + 1u) < (int32_t)ebx)
        {
            eax = eax + 0x1f0u;
            edx = edx + 1u;
            loc_6c0 = rd32(sp0 - 0x6c0u);
            loc_750 = ecx + 0x10u;
            ecx = ecx + 0x10u;
            goto L_10173940;
        }
    }
    COW_AT(10173974)
    t298 = rd32(sp0 - 0x768u);
    wr32(arg1 + 0xd4u, ebx);
    g->ebx = rd32(sp0 - 0x75cu);
    g->esi = rd32(sp0 - 0x764u);
    g->edi = t298;
    g->ebp = rd32(sp0 - 0x760u);
    return;
L_10173987: ;
    COW_AT(10173987)
    goto L_101720d4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10171930(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1017195cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x768u);
        in_esi = rd32(sp0 - 0x764u);
        in_ebp = rd32(sp0 - 0x760u);
        in_ebx = rd32(sp0 - 0x75cu);
        g->esp = sp0 - 0x768u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x6bcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10171972u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x768u);
        in_esi = rd32(sp0 - 0x764u);
        in_ebp = rd32(sp0 - 0x760u);
        in_ebx = rd32(sp0 - 0x75cu);
        g->esp = sp0 - 0x768u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x6bcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10171ac1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        uint32_t loc_6c8;
        uint32_t loc_6cc;
        uint32_t loc_6d0;
        uint32_t loc_6d4;
        uint32_t loc_6d8;
        uint32_t loc_6dc;
        uint32_t loc_6e0;
        uint32_t loc_6e4;
        uint32_t loc_6e8;
        uint32_t loc_6ec;
        uint32_t loc_6f0;
        uint32_t loc_6f4;
        uint32_t loc_6f8;
        uint32_t loc_6fc;
        uint32_t loc_700;
        uint32_t loc_754;
        uint32_t loc_758;
        uint32_t loc_75c;
        uint32_t loc_760;
        uint32_t loc_764;
        uint32_t loc_768;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_768 = rd32(sp0 - 0x768u);
        loc_764 = rd32(sp0 - 0x764u);
        loc_760 = rd32(sp0 - 0x760u);
        loc_75c = rd32(sp0 - 0x75cu);
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_700 = rd32(sp0 - 0x700u);
        loc_6fc = rd32(sp0 - 0x6fcu);
        loc_6f8 = rd32(sp0 - 0x6f8u);
        loc_6f4 = rd32(sp0 - 0x6f4u);
        loc_6f0 = rd32(sp0 - 0x6f0u);
        loc_6ec = rd32(sp0 - 0x6ecu);
        loc_6e8 = rd32(sp0 - 0x6e8u);
        loc_6e4 = rd32(sp0 - 0x6e4u);
        loc_6e0 = rd32(sp0 - 0x6e0u);
        loc_6dc = rd32(sp0 - 0x6dcu);
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6d4 = rd32(sp0 - 0x6d4u);
        loc_6d0 = rd32(sp0 - 0x6d0u);
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c8 = rd32(sp0 - 0x6c8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171adcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        uint32_t loc_6c8;
        uint32_t loc_6cc;
        uint32_t loc_6d0;
        uint32_t loc_6d4;
        uint32_t loc_6d8;
        uint32_t loc_6dc;
        uint32_t loc_6e0;
        uint32_t loc_6e4;
        uint32_t loc_6e8;
        uint32_t loc_6ec;
        uint32_t loc_6f0;
        uint32_t loc_6f4;
        uint32_t loc_6f8;
        uint32_t loc_6fc;
        uint32_t loc_700;
        uint32_t loc_754;
        uint32_t loc_758;
        uint32_t loc_75c;
        uint32_t loc_760;
        uint32_t loc_764;
        uint32_t loc_768;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_768 = rd32(sp0 - 0x768u);
        loc_764 = rd32(sp0 - 0x764u);
        loc_760 = rd32(sp0 - 0x760u);
        loc_75c = rd32(sp0 - 0x75cu);
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_700 = rd32(sp0 - 0x700u);
        loc_6fc = rd32(sp0 - 0x6fcu);
        loc_6f8 = rd32(sp0 - 0x6f8u);
        loc_6f4 = rd32(sp0 - 0x6f4u);
        loc_6f0 = rd32(sp0 - 0x6f0u);
        loc_6ec = rd32(sp0 - 0x6ecu);
        loc_6e8 = rd32(sp0 - 0x6e8u);
        loc_6e4 = rd32(sp0 - 0x6e4u);
        loc_6e0 = rd32(sp0 - 0x6e0u);
        loc_6dc = rd32(sp0 - 0x6dcu);
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6d4 = rd32(sp0 - 0x6d4u);
        loc_6d0 = rd32(sp0 - 0x6d0u);
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c8 = rd32(sp0 - 0x6c8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171af1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171b00u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171b13u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_754;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_754 = rd32(sp0 - 0x754u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171b23u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171c62u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171c7du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171c92u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171ca1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171cb4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_754;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_754 = rd32(sp0 - 0x754u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171cc4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171e16u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171e31u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171e46u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171e55u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171e68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_754;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_754 = rd32(sp0 - 0x754u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171e78u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171f53u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_64c_f;
        double loc_650_f;
        double loc_658_f;
        double loc_754_f;
        double loc_758_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_658_f = rdf32(sp0 - 0x658u);
        loc_650_f = rdf32(sp0 - 0x650u);
        loc_64c_f = rdf32(sp0 - 0x64cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171f6fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_650_f;
        double loc_658_f;
        double loc_754_f;
        double loc_758_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_658_f = rdf32(sp0 - 0x658u);
        loc_650_f = rdf32(sp0 - 0x650u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171f7fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_650_f;
        double loc_658_f;
        double loc_754_f;
        double loc_758_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_658_f = rdf32(sp0 - 0x658u);
        loc_650_f = rdf32(sp0 - 0x650u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171f95u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        double loc_754_f;
        double loc_758_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_658_f = rdf32(sp0 - 0x658u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171fbfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        double loc_74c_f;
        double loc_754_f;
        double loc_758_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_658_f = rdf32(sp0 - 0x658u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171fd6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        uint32_t loc_6bc;
        double loc_74c_f;
        double loc_754_f;
        double loc_758_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_658_f = rdf32(sp0 - 0x658u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171feau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        uint32_t loc_6bc;
        double loc_74c_f;
        double loc_754_f;
        double loc_758_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_658_f = rdf32(sp0 - 0x658u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10171ff5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        uint32_t loc_6bc;
        double loc_74c_f;
        double loc_754_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_658_f = rdf32(sp0 - 0x658u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172012u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        uint32_t loc_6bc;
        double loc_74c_f;
        double loc_754_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_658_f = rdf32(sp0 - 0x658u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172021u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172036u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6bc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_6bc = rd32(sp0 - 0x6bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172046u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6bc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_6bc = rd32(sp0 - 0x6bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017204fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6bc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_6bc = rd32(sp0 - 0x6bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017205cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172062u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->edx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172069u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017206eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172072u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017207au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017209du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6bc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_6bc = rd32(sp0 - 0x6bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101720aeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        uint32_t loc_6bc;
        double loc_74c_f;
        double loc_754_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_658_f = rdf32(sp0 - 0x658u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101720cdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        uint32_t loc_6bc;
        double loc_74c_f;
        double loc_754_f;
        double loc_758_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_658_f = rdf32(sp0 - 0x658u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101720d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        uint32_t loc_6bc;
        double loc_74c_f;
        double loc_754_f;
        double loc_758_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_658_f = rdf32(sp0 - 0x658u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101720d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        uint32_t loc_6bc;
        double loc_74c_f;
        double loc_754_f;
        double loc_758_f;
        uint32_t loc_75c;
        uint32_t loc_760;
        uint32_t loc_764;
        uint32_t loc_768;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_768 = rd32(sp0 - 0x768u);
        loc_764 = rd32(sp0 - 0x764u);
        loc_760 = rd32(sp0 - 0x760u);
        loc_75c = rd32(sp0 - 0x75cu);
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_658_f = rdf32(sp0 - 0x658u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101720f6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_658_f;
        uint32_t loc_6bc;
        double loc_74c_f;
        double loc_754_f;
        double loc_758_f;
        uint32_t loc_75c;
        uint32_t loc_760;
        uint32_t loc_764;
        uint32_t loc_768;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_768 = rd32(sp0 - 0x768u);
        loc_764 = rd32(sp0 - 0x764u);
        loc_760 = rd32(sp0 - 0x760u);
        loc_75c = rd32(sp0 - 0x75cu);
        loc_758_f = rdf32(sp0 - 0x758u);
        loc_754_f = rdf32(sp0 - 0x754u);
        loc_74c_f = rdf32(sp0 - 0x74cu);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_658_f = rdf32(sp0 - 0x658u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017210fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x770u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101721f2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_6b8_f;
        uint32_t loc_6c0;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6b8_f = rdf32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017220fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_6b8_f;
        uint32_t loc_6c0;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6b8_f = rdf32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017222cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6b8;
        uint32_t loc_6c0;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_758;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017223bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6b8;
        uint32_t loc_6c0;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_758;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172257u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_6b8_f;
        uint32_t loc_6c0;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6b8_f = rdf32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172262u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_6b8_f;
        uint32_t loc_6c0;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6b8_f = rdf32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101723a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c0;
        double loc_700_f;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_700_f = rdf32(sp0 - 0x700u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101723bfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c0;
        double loc_700_f;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_700_f = rdf32(sp0 - 0x700u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101723d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c0;
        uint32_t loc_700;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_754;
        uint32_t loc_758;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_700 = rd32(sp0 - 0x700u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101723e8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c0;
        uint32_t loc_700;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_754;
        uint32_t loc_758;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_700 = rd32(sp0 - 0x700u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172411u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c0;
        double loc_700_f;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_700_f = rdf32(sp0 - 0x700u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172427u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c0;
        double loc_700_f;
        uint32_t loc_74c;
        uint32_t loc_750;
        uint32_t loc_754;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_754 = rd32(sp0 - 0x754u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_74c = rd32(sp0 - 0x74cu);
        loc_700_f = rdf32(sp0 - 0x700u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101726a5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c4;
        uint32_t loc_6c8;
        uint32_t loc_6cc;
        uint32_t loc_6d0;
        uint32_t loc_6d4;
        uint32_t loc_6d8;
        uint32_t loc_6dc;
        uint32_t loc_6e0;
        uint32_t loc_6e4;
        uint32_t loc_6e8;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_6e8 = rd32(sp0 - 0x6e8u);
        loc_6e4 = rd32(sp0 - 0x6e4u);
        loc_6e0 = rd32(sp0 - 0x6e0u);
        loc_6dc = rd32(sp0 - 0x6dcu);
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6d4 = rd32(sp0 - 0x6d4u);
        loc_6d0 = rd32(sp0 - 0x6d0u);
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c8 = rd32(sp0 - 0x6c8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101726bcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c4;
        uint32_t loc_6c8;
        uint32_t loc_6cc;
        uint32_t loc_6d0;
        uint32_t loc_6d4;
        uint32_t loc_6d8;
        uint32_t loc_6dc;
        uint32_t loc_6e0;
        uint32_t loc_6e4;
        uint32_t loc_6e8;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_6e8 = rd32(sp0 - 0x6e8u);
        loc_6e4 = rd32(sp0 - 0x6e4u);
        loc_6e0 = rd32(sp0 - 0x6e0u);
        loc_6dc = rd32(sp0 - 0x6dcu);
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6d4 = rd32(sp0 - 0x6d4u);
        loc_6d0 = rd32(sp0 - 0x6d0u);
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c8 = rd32(sp0 - 0x6c8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101726d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101726e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101726fbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_750;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_750 = rd32(sp0 - 0x750u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017270bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172840u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172854u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172873u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172882u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172896u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_750;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_750 = rd32(sp0 - 0x750u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101728a6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172a03u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172a17u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172a36u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172a45u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172a59u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_750;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_750 = rd32(sp0 - 0x750u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172a69u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172c13u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_688;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_698;
        uint32_t loc_69c;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t loc_6ac;
        uint32_t loc_6b0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_750;
        uint32_t loc_758;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_758 = rd32(sp0 - 0x758u);
        loc_750 = rd32(sp0 - 0x750u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_6ac = rd32(sp0 - 0x6acu);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_688 = rd32(sp0 - 0x688u);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172ca5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172cb4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10172d55u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10173935u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_6c0;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c0 = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x768u;
        g->edx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10173940u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6c0;
        uint32_t loc_750;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_750 = rd32(sp0 - 0x750u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x768u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10173944u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6c0;
        uint32_t loc_750;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_750 = rd32(sp0 - 0x750u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x768u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10173958u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6c0;
        uint32_t loc_750;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_750 = rd32(sp0 - 0x750u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x768u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10173974u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6c0;
        uint32_t loc_750;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_750 = rd32(sp0 - 0x750u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x768u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10173987u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6bc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_6bc = rd32(sp0 - 0x6bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x768u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10171930(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10171930(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
