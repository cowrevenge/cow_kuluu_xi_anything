/* f_0x10163640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10163640(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10163683u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_10163683;
    case 0x10163698u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_10163698;
    case 0x1016369eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_1016369e;
    case 0x101636afu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101636af;
    case 0x101636d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_101636d6;
    case 0x101636dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101636dc;
    case 0x101636ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101636ec;
    case 0x10163713u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163713;
    case 0x10163719u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163719;
    case 0x1016372cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016372c;
    case 0x1016374du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016374d;
    case 0x10163753u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10163753;
    case 0x10163763u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10163763;
    case 0x10163778u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10163778;
    case 0x1016377eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016377e;
    case 0x1016378eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016378e;
    case 0x101637acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101637ac;
    case 0x101637b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101637b2;
    case 0x101637c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101637c2;
    case 0x101637e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101637e0;
    case 0x101637e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101637e6;
    case 0x101637f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101637f6;
    case 0x10163814u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10163814;
    case 0x1016381au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016381a;
    case 0x1016382au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016382a;
    case 0x10163848u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10163848;
    case 0x1016384eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016384e;
    case 0x1016385cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016385c;
    case 0x1016386au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016386a;
    case 0x10163870u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10163870;
    case 0x1016387eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016387e;
    case 0x1016388cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1016388c;
    case 0x10163892u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10163892;
    case 0x101638a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101638a2;
    case 0x101638c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101638c3;
    case 0x101638c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101638c9;
    case 0x101638ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101638dd;
    case 0x101638f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101638f9;
    case 0x101638ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101638ff;
    case 0x1016390du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1016390d;
    case 0x1016391bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1016391b;
    case 0x10163921u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163921;
    case 0x1016392fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1016392f;
    case 0x1016393du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1016393d;
    case 0x10163943u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163943;
    case 0x10163953u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163953;
    case 0x10163968u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163968;
    case 0x1016396eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1016396e;
    case 0x10163981u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163981;
    case 0x10163999u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163999;
    case 0x1016399fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1016399f;
    case 0x101639afu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101639af;
    case 0x101639c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101639c7;
    case 0x101639cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101639cd;
    case 0x101639e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101639e0;
    case 0x101639fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101639fc;
    case 0x10163a02u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a02;
    case 0x10163a12u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a12;
    case 0x10163a27u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a27;
    case 0x10163a2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a2d;
    case 0x10163a40u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a40;
    case 0x10163a5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a5e;
    case 0x10163a64u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a64;
    case 0x10163a77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a77;
    case 0x10163a92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a92;
    case 0x10163a98u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163a98;
    case 0x10163aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163aab;
    case 0x10163ad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163ad3;
    case 0x10163ad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163ad9;
    case 0x10163aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163aec;
    case 0x10163b08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163b08;
    case 0x10163b0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163b0e;
    case 0x10163b21u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163b21;
    case 0x10163b42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163b42;
    case 0x10163b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163b48;
    case 0x10163b58u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163b58;
    case 0x10163b76u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163b76;
    case 0x10163b7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163b7c;
    case 0x10163b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163b8f;
    case 0x10163bb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163bb2;
    case 0x10163bb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163bb8;
    case 0x10163bc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163bc8;
    case 0x10163be6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163be6;
    case 0x10163becu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163bec;
    case 0x10163bfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163bfd;
    case 0x10163c0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c0b;
    case 0x10163c11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c11;
    case 0x10163c1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c1f;
    case 0x10163c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c2d;
    case 0x10163c33u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c33;
    case 0x10163c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c41;
    case 0x10163c4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c4f;
    case 0x10163c55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c55;
    case 0x10163c63u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c63;
    case 0x10163c71u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c71;
    case 0x10163c77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c77;
    case 0x10163c87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163c87;
    case 0x10163ca5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163ca5;
    case 0x10163cabu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163cab;
    case 0x10163cbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163cbb;
    case 0x10163cd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163cd9;
    case 0x10163cdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163cdf;
    case 0x10163cefu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163cef;
    case 0x10163d0du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163d0d;
    case 0x10163d13u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163d13;
    case 0x10163d23u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163d23;
    case 0x10163d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163d4b;
    case 0x10163d51u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163d51;
    case 0x10163d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163d64;
    case 0x10163d80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163d80;
    case 0x10163d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163d86;
    case 0x10163d94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163d94;
    case 0x10163da2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163da2;
    case 0x10163da8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163da8;
    case 0x10163db6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163db6;
    case 0x10163dc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163dc4;
    case 0x10163dcau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163dca;
    case 0x10163dd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163dd8;
    case 0x10163de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163de6;
    case 0x10163decu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163dec;
    case 0x10163dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163dfa;
    case 0x10163e08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163e08;
    case 0x10163e0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163e0e;
    case 0x10163e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163e1c;
    case 0x10163e2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163e2a;
    case 0x10163e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163e30;
    case 0x10163e3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163e3e;
    case 0x10163e4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10163e4f;
    default: break;
    }
#endif

    COW_AT(10163640)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, 1u);
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, t1);
    t4 = g->edx;
    t5 = rd32(t3);
    wr32(COW_IMG(0x1062194cu), t5);
    g->edx = t4;
    t6 = rd32(t5);
    t7 = cow_call_regs(g, COW_IMG(0x10071e90u), t5, t6, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x14u, 0x14u);
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t8, t9, 1, 3, 0x14u, in_esi, in_ebp);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(10163698)
        wr32(COW_IMG(0x1066909cu), 0u);
    }
    else
    {
        eax = t10;
        edx = t12;
        esi = t10;
    COW_AT(10163683)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t13 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(esi, COW_IMG(0x10335ca0u));
        wr32(COW_IMG(0x1066909cu), esi);
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    COW_AT(1016369e)
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0x3cu);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x3cu, in_edi, in_esi);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(101636d6)
        wr32(COW_IMG(0x106690a0u), 0u);
        edi = in_edi;
    }
    else
    {
        eax = t16;
        edx = t18;
        esi = t16;
    COW_AT(101636af)
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t19 = g->edx;
        wr32(esi, COW_IMG(0x10335c58u));
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x14u, 0u);
        edi = esi + 0x1cu;
        eax = 1u;
        ecx = 8u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(COW_IMG(0x106690a0u), esi);
        edx = t19;
    }
    COW_AT(101636dc)
    wr32(sp0 - 0x18u, 0x40u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x40u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
    COW_AT(10163713)
        wr32(COW_IMG(0x10669050u), 0u);
    }
    else
    {
        eax = t20;
        edx = t22;
        esi = t20;
    COW_AT(101636ec)
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t23 = g->edx;
        wr32(esi, COW_IMG(0x10335c10u));
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x1cu, 0u);
        edi = esi + 0x20u;
        eax = 0u;
        ecx = 8u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(COW_IMG(0x10669050u), esi);
        edx = t23;
    }
    COW_AT(10163719)
    wr32(sp0 - 0x18u, 0x24u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t24 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
    COW_AT(1016374d)
        wr32(COW_IMG(0x10668facu), 0u);
    }
    else
    {
        eax = t24;
        edx = t26;
        esi = t24;
    COW_AT(1016372c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t27 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t28 = g->ecx;
        t29 = g->edx;
        wr32(esi, COW_IMG(0x10335bc8u));
        wr32(esi + 0x20u, 0u);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x1cu, 0xffffffffu);
        wr32(esi + 0x14u, 0u);
        wr32(COW_IMG(0x10668facu), esi);
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    COW_AT(10163753)
    wr32(sp0 - 0x18u, 0x14u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t30 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t31 = g->ecx;
    t32 = g->edx;
    if (t30 == 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
    COW_AT(10163778)
        wr32(COW_IMG(0x10668fb0u), 0u);
    }
    else
    {
        eax = t30;
        edx = t32;
        esi = t30;
    COW_AT(10163763)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t33 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t34 = g->ecx;
        t35 = g->edx;
        wr32(esi, COW_IMG(0x10335b80u));
        wr32(COW_IMG(0x10668fb0u), esi);
        eax = t33;
        ecx = t34;
        edx = t35;
    }
    COW_AT(1016377e)
    wr32(sp0 - 0x18u, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t36 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 == 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
    COW_AT(101637ac)
        wr32(COW_IMG(0x10668fb4u), 0u);
    }
    else
    {
        eax = t36;
        edx = t38;
        esi = t36;
    COW_AT(1016378e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t39 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t40 = g->ecx;
        t41 = g->edx;
        wr32(esi, COW_IMG(0x10335b38u));
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x14u, 0u);
        wr32(COW_IMG(0x10668fb4u), esi);
        eax = t39;
        ecx = t40;
        edx = t41;
    }
    COW_AT(101637b2)
    wr32(sp0 - 0x18u, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t42 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t43 = g->ecx;
    t44 = g->edx;
    if (t42 == 0u)
    {
        eax = t42;
        ecx = t43;
        edx = t44;
    COW_AT(101637e0)
        wr32(COW_IMG(0x10668fb8u), 0u);
    }
    else
    {
        eax = t42;
        edx = t44;
        esi = t42;
    COW_AT(101637c2)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t45 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t46 = g->ecx;
        t47 = g->edx;
        wr32(esi, COW_IMG(0x10335af0u));
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x14u, 0u);
        wr32(COW_IMG(0x10668fb8u), esi);
        eax = t45;
        ecx = t46;
        edx = t47;
    }
    COW_AT(101637e6)
    wr32(sp0 - 0x18u, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t48 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t49 = g->ecx;
    t50 = g->edx;
    if (t48 == 0u)
    {
        eax = t48;
        ecx = t49;
        edx = t50;
    COW_AT(10163814)
        wr32(COW_IMG(0x10668fbcu), 0u);
    }
    else
    {
        eax = t48;
        edx = t50;
        esi = t48;
    COW_AT(101637f6)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t51 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t52 = g->ecx;
        t53 = g->edx;
        wr32(esi, COW_IMG(0x10335aa8u));
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x14u, 0u);
        wr32(COW_IMG(0x10668fbcu), esi);
        eax = t51;
        ecx = t52;
        edx = t53;
    }
    COW_AT(1016381a)
    wr32(sp0 - 0x18u, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t54 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t55 = g->ecx;
    t56 = g->edx;
    if (t54 == 0u)
    {
        eax = t54;
        ecx = t55;
        edx = t56;
    COW_AT(10163848)
        wr32(COW_IMG(0x10668fc0u), 0u);
    }
    else
    {
        eax = t54;
        edx = t56;
        esi = t54;
    COW_AT(1016382a)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t57 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t58 = g->ecx;
        t59 = g->edx;
        wr32(esi, COW_IMG(0x10335a60u));
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x14u, 0u);
        wr32(COW_IMG(0x10668fc0u), esi);
        eax = t57;
        ecx = t58;
        edx = t59;
    }
    COW_AT(1016384e)
    wr32(sp0 - 0x18u, 0x34u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t60 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x34u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t61 = g->ecx;
    t62 = g->edx;
    if (t60 == 0u)
    {
        eax = t60;
        ecx = t61;
        edx = t62;
    COW_AT(1016386a)
        wr32(COW_IMG(0x10668fc4u), 0u);
    }
    else
    {
        eax = t60;
        edx = t62;
    COW_AT(1016385c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t63 = cow_thiscall(g, COW_IMG(0x102380c0u), eax, 0);
        t64 = g->ecx;
        t65 = g->edx;
        wr32(COW_IMG(0x10668fc4u), t63);
        eax = t63;
        ecx = t64;
        edx = t65;
    }
    COW_AT(10163870)
    wr32(sp0 - 0x18u, 0x54u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t66 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x54u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t67 = g->ecx;
    t68 = g->edx;
    if (t66 == 0u)
    {
        eax = t66;
        ecx = t67;
        edx = t68;
    COW_AT(1016388c)
        wr32(COW_IMG(0x10668fccu), 0u);
    }
    else
    {
        eax = t66;
        edx = t68;
    COW_AT(1016387e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t69 = cow_thiscall(g, COW_IMG(0x102388e0u), eax, 0);
        t70 = g->ecx;
        t71 = g->edx;
        wr32(COW_IMG(0x10668fccu), t69);
        eax = t69;
        ecx = t70;
        edx = t71;
    }
    COW_AT(10163892)
    wr32(sp0 - 0x18u, 0x24u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t72 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t73 = g->ecx;
    t74 = g->edx;
    if (t72 == 0u)
    {
        eax = t72;
        ecx = t73;
        edx = t74;
    COW_AT(101638c3)
        wr32(COW_IMG(0x10668fc8u), 0u);
    }
    else
    {
        eax = t72;
        edx = t74;
        esi = t72;
    COW_AT(101638a2)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t75 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t76 = g->ecx;
        t77 = g->edx;
        wr32(esi, COW_IMG(0x10335a18u));
        wr32(esi + 0x20u, 0u);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x1cu, 0xffffffffu);
        wr32(esi + 0x14u, 0u);
        wr32(COW_IMG(0x10668fc8u), esi);
        eax = t75;
        ecx = t76;
        edx = t77;
    }
    COW_AT(101638c9)
    wr32(sp0 - 0x18u, 0xbd8u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t78 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xbd8u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t79 = g->ecx;
    t80 = g->edx;
    if (t78 == 0u)
    {
        eax = t78;
        ecx = t79;
        edx = t80;
        edi = rd32(sp0 - 0x14u);
    COW_AT(101638f9)
        wr32(COW_IMG(0x10669080u), 0u);
    }
    else
    {
        eax = t78;
        edx = t80;
        esi = t78;
        edi = rd32(sp0 - 0x14u);
    COW_AT(101638dd)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t81 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t82 = g->edx;
        wr32(esi, COW_IMG(0x103359d0u));
        g->edx = t82;
        t83 = cow_thiscall(g, COW_IMG(0x10164800u), esi, 0);
        t84 = g->ecx;
        t85 = g->edx;
        wr32(COW_IMG(0x10669080u), esi);
        eax = t83;
        ecx = t84;
        edx = t85;
    }
    COW_AT(101638ff)
    wr32(sp0 - 0x14u, 0x14u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t86 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t87 = g->ecx;
    t88 = g->edx;
    if (t86 == 0u)
    {
        eax = t86;
        ecx = t87;
        edx = t88;
    COW_AT(1016391b)
        wr32(COW_IMG(0x10669084u), 0u);
    }
    else
    {
        eax = t86;
        edx = t88;
    COW_AT(1016390d)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t89 = cow_thiscall(g, COW_IMG(0x10244e10u), eax, 0);
        t90 = g->ecx;
        t91 = g->edx;
        wr32(COW_IMG(0x10669084u), t89);
        eax = t89;
        ecx = t90;
        edx = t91;
    }
    COW_AT(10163921)
    wr32(sp0 - 0x14u, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t92 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t93 = g->ecx;
    t94 = g->edx;
    if (t92 == 0u)
    {
        eax = t92;
        ecx = t93;
        edx = t94;
    COW_AT(1016393d)
        wr32(COW_IMG(0x10669088u), 0u);
    }
    else
    {
        eax = t92;
        edx = t94;
    COW_AT(1016392f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t95 = cow_thiscall(g, COW_IMG(0x10244f50u), eax, 0);
        t96 = g->ecx;
        t97 = g->edx;
        wr32(COW_IMG(0x10669088u), t95);
        eax = t95;
        ecx = t96;
        edx = t97;
    }
    COW_AT(10163943)
    wr32(sp0 - 0x14u, 0x14u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t98 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t99 = g->ecx;
    t100 = g->edx;
    if (t98 == 0u)
    {
        eax = t98;
        ecx = t99;
        edx = t100;
    COW_AT(10163968)
        wr32(COW_IMG(0x10668ff0u), 0u);
    }
    else
    {
        eax = t98;
        edx = t100;
        esi = t98;
    COW_AT(10163953)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t101 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t102 = g->ecx;
        t103 = g->edx;
        wr32(esi, COW_IMG(0x10335988u));
        wr32(COW_IMG(0x10668ff0u), esi);
        eax = t101;
        ecx = t102;
        edx = t103;
    }
    COW_AT(1016396e)
    wr32(sp0 - 0x14u, 0x214u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t104 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x214u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t105 = g->ecx;
    t106 = g->edx;
    if (t104 == 0u)
    {
        eax = t104;
        ecx = t105;
        edx = t106;
    COW_AT(10163999)
        wr32(COW_IMG(0x10669058u), 0u);
    }
    else
    {
        eax = t104;
        edx = t106;
        esi = t104;
    COW_AT(10163981)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t107 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t108 = g->ecx;
        t109 = g->edx;
        wr32(esi, COW_IMG(0x10335940u));
        wr8(esi + 0x14u, 0u);
        wr32(COW_IMG(0x10669058u), esi);
        eax = t107;
        ecx = t108;
        edx = t109;
    }
    COW_AT(1016399f)
    wr32(sp0 - 0x14u, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t110 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t111 = g->ecx;
    t112 = g->edx;
    if (t110 == 0u)
    {
        eax = t110;
        ecx = t111;
        edx = t112;
    COW_AT(101639c7)
        wr32(COW_IMG(0x1066905cu), 0u);
    }
    else
    {
        eax = t110;
        edx = t112;
        esi = t110;
    COW_AT(101639af)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t113 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t114 = g->ecx;
        t115 = g->edx;
        wr32(esi, COW_IMG(0x103358f8u));
        wr32(esi + 0x14u, 0u);
        wr32(COW_IMG(0x1066905cu), esi);
        eax = t113;
        ecx = t114;
        edx = t115;
    }
    COW_AT(101639cd)
    wr32(sp0 - 0x14u, 0xab0u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t116 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xab0u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t117 = g->ecx;
    t118 = g->edx;
    if (t116 == 0u)
    {
        eax = t116;
        ecx = t117;
        edx = t118;
    COW_AT(101639fc)
        wr32(COW_IMG(0x10669068u), 0u);
    }
    else
    {
        eax = t116;
        edx = t118;
        esi = t116;
    COW_AT(101639e0)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t119 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t120 = g->edx;
        wr32(esi, COW_IMG(0x103358b0u));
        g->edx = t120;
        t121 = cow_thiscall(g, COW_IMG(0x10163fa0u), esi, 0);
        t122 = g->ecx;
        t123 = g->edx;
        wr32(COW_IMG(0x10669068u), esi);
        eax = t121;
        ecx = t122;
        edx = t123;
    }
    COW_AT(10163a02)
    wr32(sp0 - 0x14u, 0x14u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t124 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t125 = g->ecx;
    t126 = g->edx;
    if (t124 == 0u)
    {
        eax = t124;
        ecx = t125;
        edx = t126;
    COW_AT(10163a27)
        wr32(COW_IMG(0x1066907cu), 0u);
    }
    else
    {
        eax = t124;
        edx = t126;
        esi = t124;
    COW_AT(10163a12)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t127 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t128 = g->ecx;
        t129 = g->edx;
        wr32(esi, COW_IMG(0x10335868u));
        wr32(COW_IMG(0x1066907cu), esi);
        eax = t127;
        ecx = t128;
        edx = t129;
    }
    COW_AT(10163a2d)
    wr32(sp0 - 0x14u, 0x614u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t130 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x614u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t131 = g->ecx;
    t132 = g->edx;
    if (t130 == 0u)
    {
        eax = t130;
        ecx = t131;
        edx = t132;
    COW_AT(10163a5e)
        wr32(COW_IMG(0x1066906cu), 0u);
    }
    else
    {
        eax = t130;
        edx = t132;
        esi = t130;
    COW_AT(10163a40)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t133 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t134 = g->ecx;
        t135 = g->edx;
        wr32(esi, COW_IMG(0x10335820u));
        wr8(esi + 0x14u, 0u);
        wr8(esi + 0x214u, 0u);
        wr32(COW_IMG(0x1066906cu), esi);
        eax = t133;
        ecx = t134;
        edx = t135;
    }
    COW_AT(10163a64)
    wr32(sp0 - 0x14u, 0x118u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t136 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x118u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t137 = g->ecx;
    t138 = g->edx;
    if (t136 == 0u)
    {
        eax = t136;
        ecx = t137;
        edx = t138;
    COW_AT(10163a92)
        wr32(COW_IMG(0x10669070u), 0u);
    }
    else
    {
        eax = t136;
        edx = t138;
        esi = t136;
    COW_AT(10163a77)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t139 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t140 = g->ecx;
        t141 = g->edx;
        wr32(esi, COW_IMG(0x103357d8u));
        wr32(esi + 0x14u, 0u);
        wr8(esi + 0x18u, 0u);
        wr32(COW_IMG(0x10669070u), esi);
        eax = t139;
        ecx = t140;
        edx = t141;
    }
    COW_AT(10163a98)
    wr32(sp0 - 0x14u, 0x124u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t142 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x124u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t143 = g->ecx;
    t144 = g->edx;
    if (t142 == 0u)
    {
        eax = t142;
        ecx = t143;
        edx = t144;
    COW_AT(10163ad3)
        wr32(COW_IMG(0x10669074u), 0u);
    }
    else
    {
        eax = t142;
        edx = t144;
        esi = t142;
    COW_AT(10163aab)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t145 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t146 = g->ecx;
        t147 = g->edx;
        wr32(esi, COW_IMG(0x10335790u));
        wr32(esi + 0x14u, 0u);
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x20u, 0u);
        wr32(esi + 0x18u, 0xfffffffeu);
        wr8(esi + 0x24u, 0u);
        wr32(COW_IMG(0x10669074u), esi);
        eax = t145;
        ecx = t146;
        edx = t147;
    }
    COW_AT(10163ad9)
    wr32(sp0 - 0x14u, 0x138u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t148 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x138u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t149 = g->ecx;
    t150 = g->edx;
    if (t148 == 0u)
    {
        eax = t148;
        ecx = t149;
        edx = t150;
    COW_AT(10163b08)
        wr32(COW_IMG(0x10669078u), 0u);
    }
    else
    {
        eax = t148;
        edx = t150;
        esi = t148;
    COW_AT(10163aec)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t151 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t152 = g->edx;
        wr32(esi, COW_IMG(0x10335748u));
        g->edx = t152;
        t153 = cow_thiscall(g, COW_IMG(0x10163f30u), esi, 0);
        t154 = g->ecx;
        t155 = g->edx;
        wr32(COW_IMG(0x10669078u), esi);
        eax = t153;
        ecx = t154;
        edx = t155;
    }
    COW_AT(10163b0e)
    wr32(sp0 - 0x14u, 0x120u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t156 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x120u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t157 = g->ecx;
    t158 = g->edx;
    if (t156 == 0u)
    {
        eax = t156;
        ecx = t157;
        edx = t158;
    COW_AT(10163b42)
        wr32(COW_IMG(0x10668ffcu), 0u);
    }
    else
    {
        eax = t156;
        edx = t158;
        esi = t156;
    COW_AT(10163b21)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t159 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t160 = g->ecx;
        t161 = g->edx;
        wr32(esi, COW_IMG(0x10335700u));
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x14u, 0u);
        wr8(esi + 0x20u, 0u);
        wr32(COW_IMG(0x10668ffcu), esi);
        eax = t159;
        ecx = t160;
        edx = t161;
    }
    COW_AT(10163b48)
    wr32(sp0 - 0x14u, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t162 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t163 = g->ecx;
    t164 = g->edx;
    if (t162 == 0u)
    {
        eax = t162;
        ecx = t163;
        edx = t164;
    COW_AT(10163b76)
        wr32(COW_IMG(0x10669000u), 0u);
    }
    else
    {
        eax = t162;
        edx = t164;
        esi = t162;
    COW_AT(10163b58)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t165 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t166 = g->ecx;
        t167 = g->edx;
        wr32(esi, COW_IMG(0x103356b8u));
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x14u, 0u);
        wr32(esi + 0x18u, 1u);
        wr32(COW_IMG(0x10669000u), esi);
        eax = t165;
        ecx = t166;
        edx = t167;
    }
    COW_AT(10163b7c)
    wr32(sp0 - 0x14u, 0xa794u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t168 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xa794u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t169 = g->ecx;
    t170 = g->edx;
    if (t168 == 0u)
    {
        eax = t168;
        ecx = t169;
        edx = t170;
    COW_AT(10163bb2)
        wr32(COW_IMG(0x10669004u), 0u);
    }
    else
    {
        eax = t168;
        edx = t170;
        esi = t168;
    COW_AT(10163b8f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t171 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t172 = g->edx;
        wr32(esi, COW_IMG(0x10335670u));
        g->edx = t172;
        t173 = cow_thiscall(g, COW_IMG(0x10164560u), esi, 0);
        t174 = g->edx;
        g->edx = t174;
        t175 = cow_call_regs(g, COW_IMG(0x10164530u), t173, esi, g->edx, 0, 0);
        t176 = g->ecx;
        t177 = g->edx;
        wr32(COW_IMG(0x10669004u), esi);
        eax = t175;
        ecx = t176;
        edx = t177;
    }
    COW_AT(10163bb8)
    wr32(sp0 - 0x14u, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t178 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t179 = g->ecx;
    t180 = g->edx;
    if (t178 == 0u)
    {
        eax = t178;
        ecx = t179;
        edx = t180;
    COW_AT(10163be6)
        wr32(COW_IMG(0x1066900cu), 0u);
    }
    else
    {
        eax = t178;
        edx = t180;
        esi = t178;
    COW_AT(10163bc8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t181 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t182 = g->ecx;
        t183 = g->edx;
        wr32(esi, COW_IMG(0x10335628u));
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x14u, 0u);
        wr32(COW_IMG(0x1066900cu), esi);
        eax = t181;
        ecx = t182;
        edx = t183;
    }
    COW_AT(10163bec)
    wr32(sp0 - 0x14u, 0xa5fcu);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t184 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xa5fcu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t185 = g->ecx;
    t186 = g->edx;
    if (t184 == 0u)
    {
        eax = t184;
        ecx = t185;
        edx = t186;
    COW_AT(10163c0b)
        wr32(COW_IMG(0x1066901cu), 0u);
    }
    else
    {
        eax = t184;
        edx = t186;
    COW_AT(10163bfd)
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t187 = cow_thiscall(g, COW_IMG(0x1023d630u), eax, 0);
        t188 = g->ecx;
        t189 = g->edx;
        wr32(COW_IMG(0x1066901cu), t187);
        eax = t187;
        ecx = t188;
        edx = t189;
    }
    COW_AT(10163c11)
    wr32(sp0 - 0x14u, 0x78u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t190 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x78u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t191 = g->ecx;
    t192 = g->edx;
    if (t190 == 0u)
    {
        eax = t190;
        ecx = t191;
        edx = t192;
    COW_AT(10163c2d)
        wr32(COW_IMG(0x10669024u), 0u);
    }
    else
    {
        eax = t190;
        edx = t192;
    COW_AT(10163c1f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t193 = cow_thiscall(g, COW_IMG(0x1023e850u), eax, 0);
        t194 = g->ecx;
        t195 = g->edx;
        wr32(COW_IMG(0x10669024u), t193);
        eax = t193;
        ecx = t194;
        edx = t195;
    }
    COW_AT(10163c33)
    wr32(sp0 - 0x14u, 0x78u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t196 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x78u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t197 = g->ecx;
    t198 = g->edx;
    if (t196 == 0u)
    {
        eax = t196;
        ecx = t197;
        edx = t198;
    COW_AT(10163c4f)
        wr32(COW_IMG(0x10669028u), 0u);
    }
    else
    {
        eax = t196;
        edx = t198;
    COW_AT(10163c41)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t199 = cow_thiscall(g, COW_IMG(0x1023e850u), eax, 0);
        t200 = g->ecx;
        t201 = g->edx;
        wr32(COW_IMG(0x10669028u), t199);
        eax = t199;
        ecx = t200;
        edx = t201;
    }
    COW_AT(10163c55)
    wr32(sp0 - 0x14u, 0x78u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t202 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x78u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t203 = g->ecx;
    t204 = g->edx;
    if (t202 == 0u)
    {
        eax = t202;
        ecx = t203;
        edx = t204;
    COW_AT(10163c71)
        wr32(COW_IMG(0x1066902cu), 0u);
    }
    else
    {
        eax = t202;
        edx = t204;
    COW_AT(10163c63)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t205 = cow_thiscall(g, COW_IMG(0x1023e850u), eax, 0);
        t206 = g->ecx;
        t207 = g->edx;
        wr32(COW_IMG(0x1066902cu), t205);
        eax = t205;
        ecx = t206;
        edx = t207;
    }
    COW_AT(10163c77)
    wr32(sp0 - 0x14u, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t208 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t209 = g->ecx;
    t210 = g->edx;
    if (t208 == 0u)
    {
        eax = t208;
        ecx = t209;
        edx = t210;
    COW_AT(10163ca5)
        wr32(COW_IMG(0x10669030u), 0u);
    }
    else
    {
        eax = t208;
        edx = t210;
        esi = t208;
    COW_AT(10163c87)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t211 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t212 = g->ecx;
        t213 = g->edx;
        wr32(esi, COW_IMG(0x103355e0u));
        wr32(esi + 0x14u, 1u);
        wr32(esi + 0x18u, 1u);
        wr32(esi + 0x1cu, 0u);
        wr32(COW_IMG(0x10669030u), esi);
        eax = t211;
        ecx = t212;
        edx = t213;
    }
    COW_AT(10163cab)
    wr32(sp0 - 0x14u, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t214 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t215 = g->ecx;
    t216 = g->edx;
    if (t214 == 0u)
    {
        eax = t214;
        ecx = t215;
        edx = t216;
    COW_AT(10163cd9)
        wr32(COW_IMG(0x10669034u), 0u);
    }
    else
    {
        eax = t214;
        edx = t216;
        esi = t214;
    COW_AT(10163cbb)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t217 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t218 = g->ecx;
        t219 = g->edx;
        wr32(esi, COW_IMG(0x103355e0u));
        wr32(esi + 0x14u, 1u);
        wr32(esi + 0x18u, 1u);
        wr32(esi + 0x1cu, 0u);
        wr32(COW_IMG(0x10669034u), esi);
        eax = t217;
        ecx = t218;
        edx = t219;
    }
    COW_AT(10163cdf)
    wr32(sp0 - 0x14u, 0x20u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t220 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t221 = g->ecx;
    t222 = g->edx;
    if (t220 == 0u)
    {
        eax = t220;
        ecx = t221;
        edx = t222;
    COW_AT(10163d0d)
        wr32(COW_IMG(0x10669038u), 0u);
    }
    else
    {
        eax = t220;
        edx = t222;
        esi = t220;
    COW_AT(10163cef)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t223 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t224 = g->ecx;
        t225 = g->edx;
        wr32(esi, COW_IMG(0x103355e0u));
        wr32(esi + 0x14u, 1u);
        wr32(esi + 0x18u, 1u);
        wr32(esi + 0x1cu, 0u);
        wr32(COW_IMG(0x10669038u), esi);
        eax = t223;
        ecx = t224;
        edx = t225;
    }
    COW_AT(10163d13)
    wr32(sp0 - 0x14u, 0x28u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t226 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t227 = g->ecx;
    t228 = g->edx;
    if (t226 == 0u)
    {
        eax = t226;
        ecx = t227;
        edx = t228;
    COW_AT(10163d4b)
        wr32(COW_IMG(0x10669040u), 0u);
    }
    else
    {
        eax = t226;
        edx = t228;
        esi = t226;
    COW_AT(10163d23)
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t229 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        wr32(esi, COW_IMG(0x10335598u));
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x20u, 0u);
        wr32(esi + 0x24u, 0u);
        wr32(esi + 0x14u, 0u);
        wr32(COW_IMG(0x10669040u), esi);
        eax = t229;
        ecx = 0u;
        edx = esi + 0x18u;
    }
    COW_AT(10163d51)
    wr32(sp0 - 0x14u, 0xc48u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t230 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xc48u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t231 = g->ecx;
    t232 = g->edx;
    if (t230 == 0u)
    {
        eax = t230;
        ecx = t231;
        edx = t232;
    COW_AT(10163d80)
        wr32(COW_IMG(0x1066903cu), 0u);
    }
    else
    {
        eax = t230;
        edx = t232;
        esi = t230;
    COW_AT(10163d64)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t233 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
        t234 = g->edx;
        wr32(esi, COW_IMG(0x10335550u));
        g->edx = t234;
        t235 = cow_thiscall(g, COW_IMG(0x10164980u), esi, 0);
        t236 = g->ecx;
        t237 = g->edx;
        wr32(COW_IMG(0x1066903cu), esi);
        eax = t235;
        ecx = t236;
        edx = t237;
    }
    COW_AT(10163d86)
    wr32(sp0 - 0x14u, 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t238 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t239 = g->ecx;
    t240 = g->edx;
    if (t238 == 0u)
    {
        eax = t238;
        ecx = t239;
        edx = t240;
    COW_AT(10163da2)
        wr32(COW_IMG(0x10669048u), 0u);
    }
    else
    {
        eax = t238;
        edx = t240;
    COW_AT(10163d94)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t241 = cow_thiscall(g, COW_IMG(0x10164af0u), eax, 0);
        t242 = g->ecx;
        t243 = g->edx;
        wr32(COW_IMG(0x10669048u), t241);
        eax = t241;
        ecx = t242;
        edx = t243;
    }
    COW_AT(10163da8)
    wr32(sp0 - 0x14u, 0x38u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t244 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x38u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t245 = g->ecx;
    t246 = g->edx;
    if (t244 == 0u)
    {
        eax = t244;
        ecx = t245;
        edx = t246;
    COW_AT(10163dc4)
        wr32(COW_IMG(0x1066904cu), 0u);
    }
    else
    {
        eax = t244;
        edx = t246;
    COW_AT(10163db6)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t247 = cow_thiscall(g, COW_IMG(0x1023f8b0u), eax, 0);
        t248 = g->ecx;
        t249 = g->edx;
        wr32(COW_IMG(0x1066904cu), t247);
        eax = t247;
        ecx = t248;
        edx = t249;
    }
    COW_AT(10163dca)
    wr32(sp0 - 0x14u, 0x54u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t250 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x54u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t251 = g->ecx;
    t252 = g->edx;
    if (t250 == 0u)
    {
        eax = t250;
        ecx = t251;
        edx = t252;
    COW_AT(10163de6)
        wr32(COW_IMG(0x10669044u), 0u);
    }
    else
    {
        eax = t250;
        edx = t252;
    COW_AT(10163dd8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t253 = cow_thiscall(g, COW_IMG(0x10164a30u), eax, 0);
        t254 = g->ecx;
        t255 = g->edx;
        wr32(COW_IMG(0x10669044u), t253);
        eax = t253;
        ecx = t254;
        edx = t255;
    }
    COW_AT(10163dec)
    wr32(sp0 - 0x14u, 0x3cu);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t256 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x3cu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t257 = g->ecx;
    t258 = g->edx;
    if (t256 == 0u)
    {
        eax = t256;
        ecx = t257;
        edx = t258;
    COW_AT(10163e08)
        wr32(COW_IMG(0x10668fd0u), 0u);
    }
    else
    {
        eax = t256;
        edx = t258;
    COW_AT(10163dfa)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t259 = cow_thiscall(g, COW_IMG(0x10238b50u), eax, 0);
        t260 = g->ecx;
        t261 = g->edx;
        wr32(COW_IMG(0x10668fd0u), t259);
        eax = t259;
        ecx = t260;
        edx = t261;
    }
    COW_AT(10163e0e)
    wr32(sp0 - 0x14u, 0x14u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t262 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t263 = g->ecx;
    t264 = g->edx;
    if (t262 == 0u)
    {
        eax = t262;
        ecx = t263;
        edx = t264;
    COW_AT(10163e2a)
        wr32(COW_IMG(0x10668fd4u), 0u);
    }
    else
    {
        eax = t262;
        edx = t264;
    COW_AT(10163e1c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t265 = cow_thiscall(g, COW_IMG(0x101641b0u), eax, 0);
        t266 = g->ecx;
        t267 = g->edx;
        wr32(COW_IMG(0x10668fd4u), t265);
        eax = t265;
        ecx = t266;
        edx = t267;
    }
    COW_AT(10163e30)
    wr32(sp0 - 0x14u, 0x38u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t268 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x38u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t269 = g->edx;
    if (t268 == 0u) goto L_10163e4f;
    eax = t268;
    edx = t269;
    COW_AT(10163e3e)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t270 = cow_thiscall(g, COW_IMG(0x10164660u), eax, 0);
    t271 = rd32(sp0 - 0xcu);
    t272 = rd32(sp0 - 0x10u);
    wr32(COW_IMG(0x10669008u), t270);
    g->ebx = rd32(sp0 - 8u);
    g->esi = t272;
    g->edi = edi;
    g->ebp = t271;
    return;
L_10163e4f: ;
    COW_AT(10163e4f)
    t273 = rd32(sp0 - 0x10u);
    wr32(COW_IMG(0x10669008u), 0u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = t273;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0xcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10163640(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10163683u:
    {
        uint32_t eax;
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
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10163698u:
    {
        uint32_t eax;
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
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1016369eu:
    {
        uint32_t eax;
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
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101636afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101636d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101636dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101636ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163713u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163719u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1016372cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016374du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10163753u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10163763u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10163778u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016377eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016378eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101637acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101637b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101637c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101637e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101637e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101637f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10163814u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016381au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016382au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10163848u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016384eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016385cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016386au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10163870u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016387eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1016388cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10163892u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101638a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101638c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101638c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101638ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101638f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101638ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1016390du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1016391bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163921u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1016392fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1016393du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163943u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163953u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163968u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1016396eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163981u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163999u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1016399fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101639afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101639c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101639cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101639e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101639fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163a98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163aabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163ad3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163ad9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163aecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163b08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163b0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163b21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163b42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163b48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163b58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163b76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163b7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163b8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163bb2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163bb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163bc8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163be6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163becu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163bfdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163c87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163ca5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163cabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163cbbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163cd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163cdfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163cefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10163d0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163d13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163d23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163d4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163d51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163d64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163d80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163d86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163d94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163da2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163da8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163db6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163dc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163dcau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163dd8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163de6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163decu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163dfau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163e08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163e0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163e1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163e2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163e30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10163e3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10163e4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10163640(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10163640(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
