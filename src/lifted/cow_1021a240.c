/* f_0x1021a240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1021a240(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t sf;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021a259u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1021a259;
    case 0x1021a268u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1021a268;
    case 0x1021a273u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a273;
    case 0x1021a28au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a28a;
    case 0x1021a293u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a293;
    case 0x1021a29bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a29b;
    case 0x1021a2acu: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a2ac;
    case 0x1021a2b3u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a2b3;
    case 0x1021a2cau: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a2ca;
    case 0x1021a2e1u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a2e1;
    case 0x1021a2f8u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a2f8;
    case 0x1021a30fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a30f;
    case 0x1021a319u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a319;
    case 0x1021a326u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a326;
    case 0x1021a330u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a330;
    case 0x1021a336u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a336;
    case 0x1021a341u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a341;
    case 0x1021a367u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a367;
    case 0x1021a36du: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a36d;
    case 0x1021a378u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a378;
    case 0x1021a392u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a392;
    case 0x1021a39bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a39b;
    case 0x1021a3afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a3af;
    case 0x1021a3b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a3b7;
    case 0x1021a3ccu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a3cc;
    case 0x1021a3d2u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a3d2;
    case 0x1021a3dcu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a3dc;
    case 0x1021a3e6u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a3e6;
    case 0x1021a405u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a405;
    case 0x1021a417u: ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a417;
    case 0x1021a41bu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a41b;
    case 0x1021a42du: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a42d;
    case 0x1021a433u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a433;
    case 0x1021a44au: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a44a;
    case 0x1021a454u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a454;
    case 0x1021a459u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a459;
    case 0x1021a482u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a482;
    case 0x1021a48bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a48b;
    case 0x1021a4aeu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a4ae;
    case 0x1021a4b8u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a4b8;
    case 0x1021a4beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a4be;
    case 0x1021a4f4u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a4f4;
    case 0x1021a4fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a4fa;
    case 0x1021a530u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a530;
    case 0x1021a536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a536;
    case 0x1021a56fu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a56f;
    case 0x1021a575u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a575;
    case 0x1021a5aeu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a5ae;
    case 0x1021a5b8u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a5b8;
    case 0x1021a5beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a5be;
    case 0x1021a5f7u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a5f7;
    case 0x1021a5fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a5fb;
    case 0x1021a601u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a601;
    case 0x1021a63au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a63a;
    case 0x1021a646u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a646;
    case 0x1021a65au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a65a;
    case 0x1021a662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a662;
    case 0x1021a673u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a673;
    case 0x1021a682u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a682;
    case 0x1021a69bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a69b;
    case 0x1021a6a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a6a4;
    case 0x1021a6b5u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a6b5;
    case 0x1021a6bcu: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a6bc;
    case 0x1021a6d9u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a6d9;
    case 0x1021a702u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a702;
    case 0x1021a780u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a780;
    case 0x1021a799u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a799;
    case 0x1021a79du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a79d;
    case 0x1021a7acu: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a7ac;
    case 0x1021a7b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a7b5;
    case 0x1021a7c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a7c9;
    case 0x1021a7dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a7da;
    case 0x1021a7f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a7f3;
    case 0x1021a802u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a802;
    case 0x1021a80cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a80c;
    case 0x1021a819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a819;
    case 0x1021a827u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a827;
    case 0x1021a82du: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a82d;
    case 0x1021a836u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a836;
    case 0x1021a85cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a85c;
    case 0x1021a866u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a866;
    case 0x1021a874u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a874;
    case 0x1021a87du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a87d;
    case 0x1021a894u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a894;
    case 0x1021a896u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a896;
    case 0x1021a8a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a8a2;
    case 0x1021a8a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a8a4;
    case 0x1021a8b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a8b8;
    case 0x1021a8beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a8be;
    case 0x1021a8dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021a8da;
    case 0x1021a8e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a8e8;
    case 0x1021a8efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a8ef;
    case 0x1021a8f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a8f3;
    case 0x1021a8f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a8f8;
    case 0x1021a908u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a908;
    case 0x1021a932u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a932;
    case 0x1021a942u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a942;
    case 0x1021a959u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a959;
    case 0x1021a95bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a95b;
    case 0x1021a965u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a965;
    case 0x1021a970u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a970;
    case 0x1021a98fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a98f;
    case 0x1021a996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a996;
    case 0x1021a99bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_48 = rd32(sp0 - 0x48u); goto E_1021a99b;
    case 0x1021a9b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a9b2;
    case 0x1021a9c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a9c4;
    case 0x1021a9cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a9cb;
    case 0x1021a9d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a9d3;
    case 0x1021a9f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a9f2;
    case 0x1021a9fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021a9fa;
    case 0x1021aa0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021aa0d;
    case 0x1021aa15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021aa15;
    case 0x1021aa1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021aa1e;
    case 0x1021aa35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aa35;
    case 0x1021aa3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aa3b;
    case 0x1021aa45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aa45;
    case 0x1021aa4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aa4f;
    case 0x1021aa69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aa69;
    case 0x1021aa77u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aa77;
    case 0x1021aa7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aa7b;
    case 0x1021aa8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aa8d;
    case 0x1021aa93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aa93;
    case 0x1021aaaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aaaa;
    case 0x1021aab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aab0;
    case 0x1021aab9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aab9;
    case 0x1021aac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aac4;
    case 0x1021aae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aae6;
    case 0x1021aafdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aafd;
    case 0x1021ab03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ab03;
    case 0x1021ab1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ab1e;
    case 0x1021ab24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ab24;
    case 0x1021ab5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ab5a;
    case 0x1021ab60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ab60;
    case 0x1021ab96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ab96;
    case 0x1021ab9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ab9c;
    case 0x1021abd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021abd5;
    case 0x1021abdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021abdb;
    case 0x1021ac14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ac14;
    case 0x1021ac1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ac1a;
    case 0x1021ac2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ac2b;
    case 0x1021ac64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ac64;
    case 0x1021ac6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021ac6a;
    case 0x1021aca3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021aca3;
    case 0x1021acacu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1021acac;
    case 0x1021acb6u: self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1021acb6;
    case 0x1021acc5u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1021acc5;
    case 0x1021acceu: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1021acce;
    case 0x1021acd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1021acd6;
    default: break;
    }
#endif

    COW_AT(1021a240)
    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    if (rd32(COW_IMG(0x104e170cu)) == 0u) goto L_1021acac;
    ebp = rd32(COW_IMG(0x104e170cu));
    COW_AT(1021a259)
    if (rd32(ebp + 0x8e8u) == 5u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        loc_38 = in_ebx;
        loc_3c = in_ebp;
        loc_40 = in_esi;
        loc_44 = in_edi;
        goto L_1021a65a;
    }
    edi = rd32(ebp + 0x8e8u);
    COW_AT(1021a268)
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t1 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1021a28a;
    }
    eax = t1;
    edx = t3;
    COW_AT(1021a273)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t4 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
    g->edx = rd32(t4);
    t5 = rd32(t4);
    t6 = cow_thiscall(g, rd32(t5 + 0x10u), t4, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 1u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021a65a;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
L_1021a28a: ;
    COW_AT(1021a28a)
    if (edi != 4u) goto L_1021a63a;
    COW_AT(1021a293)
    if (rd32(self + 0x344u) == 0u) goto L_1021a30f;
    COW_AT(1021a29b)
    if ((uint32_t)(int16_t)arg1 - 3u > 3u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021acd6;
    }
    COW_AT(1021a2ac)
    t9 = rd32(COW_IMG(0x1021ace0u) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    switch (t9 - RD)
    {
    case 0x1021a2b3u: goto L_1021a2b3;
    case 0x1021a2cau: goto L_1021a2ca;
    case 0x1021a2e1u: goto L_1021a2e1;
    case 0x1021a2f8u: goto L_1021a2f8;
    default: rt_fatal(g, COW_IMG(0x1021a2acu), "switch");
    }
    return 0;
L_1021a2b3: ;
    COW_AT(1021a2b3)
    wr32(sp0 - 0x48u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t79 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t80 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t80;
    return t79;
L_1021a2ca: ;
    COW_AT(1021a2ca)
    wr32(sp0 - 0x48u, 7u);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t77 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 7u);
    t78 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t78;
    return t77;
L_1021a2e1: ;
    COW_AT(1021a2e1)
    wr32(sp0 - 0x48u, 6u);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t75 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 6u);
    t76 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t76;
    return t75;
L_1021a2f8: ;
    COW_AT(1021a2f8)
    wr32(sp0 - 0x48u, 8u);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t73 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 8u);
    t74 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t74;
    return t73;
L_1021a30f: ;
    COW_AT(1021a30f)
    if ((uint16_t)arg1 != 6u) goto L_1021a367;
    COW_AT(1021a319)
    if (rd16(self + 0x254u) == 0u)
    {
        edx = arg1;
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021acd6;
    }
    COW_AT(1021a326)
    if (rd8(self + 0x4au) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x4au);
        goto L_1021a336;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x4au);
    COW_AT(1021a330)
    if ((int16_t)rd16(self + 0x14u) < 0)
    {
        edx = arg1;
        goto L_1021a341;
    }
L_1021a336: ;
    COW_AT(1021a336)
    wr16(self + 0x14u, 0xffffu);
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 0x44u;
    t10 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_1021a341: ;
    COW_AT(1021a341)
    wr32(sp0 - 0x48u, ebp);
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x44u;
    t12 = cow_call_regs(g, COW_IMG(0x10217ec0u), eax, self, edx, 0, 1, ebp);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = rd32(sp0 - 0x44u);
    wr16(self + 0x4au, (uint8_t)rd16(self + 0x4au) | ((rd16(self + 0x4au) & 0xfffu) >> 8u | 0x10u) << 8u);
    wr8(self + 0x4au, 0u);
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = t15;
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t14;
    return t12;
L_1021a367: ;
    COW_AT(1021a367)
    if ((uint16_t)arg1 != 5u) goto L_1021a3cc;
    COW_AT(1021a36d)
    if (rd8(self + 0x4au) == 0u)
    {
        edx = (arg1 & 0xffffff00u) | rd8(self + 0x4au);
        goto L_1021a392;
    }
    edx = (arg1 & 0xffffff00u) | rd8(self + 0x4au);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
L_1021a378: ;
    COW_AT(1021a378)
    wr32(sp0 - 0x48u, ebp);
    wr8(self + 0x4au, 0u);
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x44u;
    t174 = cow_call_regs(g, COW_IMG(0x10217ec0u), eax, self, edx, 0, 1, ebp);
    t175 = g->ecx;
    t176 = g->edx;
    g->edx = t176;
    t177 = cow_thiscall(g, COW_IMG(0x10037b30u), t175, 0);
    t178 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t178;
    return t177;
L_1021a392: ;
    COW_AT(1021a392)
    if ((int16_t)rd16(self + 0x14u) >= 0)
    {
        esi = (self & 0xffff0000u) | rd16(self + 0x14u);
        zf = rd16(self + 0x14u) == 0u;
        sf = (int16_t)rd16(self + 0x14u) < 0;
        goto L_1021a3af;
    }
    COW_AT(1021a39b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t16 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t17 = g->ecx;
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_stdcall(g, COW_IMG(0x1021bb70u), 0);
    t20 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t20;
    return t19;
L_1021a3af: ;
    COW_AT(1021a3af)
    if (zf || sf)
    {
        ecx = ebp;
        goto L_1021a8a4;
    }
    ecx = ebp;
    COW_AT(1021a3b7)
    wr32(sp0 - 0x48u, esi);
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t21 = cow_thiscall(g, COW_IMG(0x1010a420u), ecx, 1, esi);
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x10037b90u), t22, 0);
    t25 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t25;
    return t24;
L_1021a3cc: ;
    COW_AT(1021a3cc)
    if ((uint16_t)arg1 == 2u) goto L_1021a3dc;
    COW_AT(1021a3d2)
    if ((uint16_t)arg1 != 1u) goto L_1021a4ae;
L_1021a3dc: ;
    COW_AT(1021a3dc)
    if (rd8(self + 0x4au) == 0u) goto L_1021a405;
    eax = (eax & 0xffffff00u) | rd8(self + 0x4au);
    COW_AT(1021a3e6)
    wr8(self + 0x4au, 0u);
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 0x44u;
    t47 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t48 = g->edx;
    wr32(sp0 - 0x48u, ebp);
    g->esi = self;
    g->edi = edi;
    t49 = cow_call_regs(g, COW_IMG(0x10217ec0u), t47, self, t48, 0, 1, ebp);
    t50 = g->ecx;
    t51 = g->edx;
    g->edx = t51;
    t52 = cow_thiscall(g, COW_IMG(0x10037b30u), t50, 0);
    t53 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t53;
    return t52;
L_1021a405: ;
    COW_AT(1021a405)
    if (rd16(self + 0x258u) == 0u)
    {
        eax = 0u;
        edx = arg1;
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021aae6;
    }
    ecx = (ecx & 0xffff0000u) | rd16(self + 0x258u);
    COW_AT(1021a417)
    eax = 0u;
    edi = (edi & 0xffff0000u) | rd16(self + 0x14u);
L_1021a41b: ;
    COW_AT(1021a41b)
    if ((uint16_t)edi == rd16(self + (uint16_t)eax * 2u + 0x25au)) goto L_1021a44a;
    COW_AT(1021a42d)
    if ((uint16_t)(eax + 1u) < (uint16_t)ecx)
    {
        eax = eax + 1u;
        goto L_1021a41b;
    }
    eax = eax + 1u;
    COW_AT(1021a433)
    wr32(sp0 - 0x48u, ebp);
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x44u;
    t54 = cow_call_regs(g, COW_IMG(0x10217ec0u), eax, self, arg1, 0, 1, ebp);
    t55 = g->ecx;
    t56 = g->edx;
    g->edx = t56;
    t57 = cow_thiscall(g, COW_IMG(0x10037b30u), t55, 0);
    t58 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t58;
    return t57;
L_1021a44a: ;
    COW_AT(1021a44a)
    if ((uint16_t)arg1 != 2u)
    {
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021aac4;
    }
    COW_AT(1021a454)
    if ((uint16_t)eax == 0u)
    {
        edx = arg1;
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021a482;
    }
    COW_AT(1021a459)
    wr32(sp0 - 0x48u, ebp);
    wr16(self + 0x14u, rd16(self + (uint16_t)eax * 2u + 0x258u));
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x44u;
    t59 = cow_call_regs(g, COW_IMG(0x10217ec0u), (uint16_t)eax - 1u, self, arg1, 0, 1, ebp);
    t60 = g->ecx;
    t61 = g->edx;
    g->edx = t61;
    t62 = cow_thiscall(g, COW_IMG(0x10037b30u), t60, 0);
    t63 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t63;
    return t62;
L_1021a482: ;
    COW_AT(1021a482)
    t218 = (uint16_t)ecx - 1u;
    eax = t218;
    ecx = t218;
L_1021a48b: ;
    COW_AT(1021a48b)
    wr32(sp0 - 0x48u, ebp);
    wr16(self + 0x14u, rd16(eax * 2u + self + 0x25au));
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x44u;
    t219 = cow_call_regs(g, COW_IMG(0x10217ec0u), eax, self, edx, 0, 1, ebp);
    t220 = g->ecx;
    t221 = g->edx;
    g->edx = t221;
    t222 = cow_thiscall(g, COW_IMG(0x10037b30u), t220, 0);
    t223 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t223;
    return t222;
L_1021a4ae: ;
    COW_AT(1021a4ae)
    if ((uint16_t)arg1 == 9u)
    {
        edx = arg1;
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021ab03;
    }
    COW_AT(1021a4b8)
    if ((uint16_t)arg1 != 0x16u) goto L_1021a4f4;
    COW_AT(1021a4be)
    t26 = rd16(self + 0x36u) + rd16(self + 0x38u) + rd16(self + 0x254u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t26);
    wr32(sp0 - 0x4cu, 0xfu);
    g->eax = rd16(self + 0x36u);
    t27 = rd16(self + 0x36u);
    g->esp = sp0 - 0x44u;
    t28 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t26, 2, 0xfu, t26);
    t29 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t29;
    return t28;
L_1021a4f4: ;
    COW_AT(1021a4f4)
    if ((uint16_t)arg1 != 0x17u) goto L_1021a530;
    COW_AT(1021a4fa)
    t30 = rd16(self + 0x36u) + rd16(self + 0x38u) + rd16(self + 0x254u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t30);
    wr32(sp0 - 0x4cu, 0xfffffff1u);
    g->eax = rd16(self + 0x38u);
    t31 = rd16(self + 0x38u);
    t32 = rd16(self + 0x36u);
    g->esp = sp0 - 0x44u;
    t33 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t32, 2, 0xfffffff1u, t30);
    t34 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t34;
    return t33;
L_1021a530: ;
    COW_AT(1021a530)
    if ((uint16_t)arg1 != 0x18u) goto L_1021a56f;
    COW_AT(1021a536)
    t35 = rd16(self + 0x36u) + rd16(self + 0x38u) + rd16(self + 0x254u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t35);
    wr32(sp0 - 0x4cu, 0x96u);
    g->eax = t35;
    t36 = rd16(self + 0x38u);
    g->esp = sp0 - 0x44u;
    t37 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t36, 2, 0x96u, t35);
    t38 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t38;
    return t37;
L_1021a56f: ;
    COW_AT(1021a56f)
    if ((uint16_t)arg1 != 0x19u) goto L_1021a5ae;
    COW_AT(1021a575)
    t39 = rd16(self + 0x36u) + rd16(self + 0x38u) + rd16(self + 0x254u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t39);
    wr32(sp0 - 0x4cu, 0xffffff6au);
    g->eax = rd16(self + 0x36u);
    t40 = rd16(self + 0x36u);
    g->esp = sp0 - 0x44u;
    t41 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t39, 2, 0xffffff6au, t39);
    t42 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t42;
    return t41;
L_1021a5ae: ;
    COW_AT(1021a5ae)
    if ((uint16_t)arg1 == 0x1bu)
    {
        edx = arg1;
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021ac1a;
    }
    COW_AT(1021a5b8)
    if ((uint16_t)arg1 != 3u) goto L_1021a5f7;
    COW_AT(1021a5be)
    t43 = rd16(self + 0x38u) + rd16(self + 0x254u) + rd16(self + 0x48u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t43);
    wr32(sp0 - 0x4cu, 0xffffff6au);
    g->eax = t43;
    t44 = rd16(self + 0x48u);
    g->esp = sp0 - 0x44u;
    t45 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t44, 2, 0xffffff6au, t43);
    t46 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t46;
    return t45;
L_1021a5f7: ;
    COW_AT(1021a5f7)
    edx = arg1;
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
L_1021a5fb: ;
    COW_AT(1021a5fb)
    if ((uint16_t)((uint16_t)arg1 - 4u) != 0u) goto L_1021acd6;
    COW_AT(1021a601)
    t204 = rd16(self + 0x38u) + rd16(self + 0x254u) + rd16(self + 0x48u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t204);
    wr32(sp0 - 0x4cu, 0x96u);
    g->eax = rd16(self + 0x38u);
    t205 = rd16(self + 0x38u);
    g->esp = sp0 - 0x44u;
    t206 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t204, 2, 0x96u, t204);
    t207 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t207;
    return t206;
L_1021a63a: ;
    COW_AT(1021a63a)
    if ((uint16_t)arg1 != 6u)
    {
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021acd6;
    }
    COW_AT(1021a646)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t64 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t65 = g->ecx;
    t66 = g->edx;
    g->edx = t66;
    t67 = cow_stdcall(g, COW_IMG(0x1021bb70u), 0);
    t68 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t68;
    return t67;
L_1021a65a: ;
    COW_AT(1021a65a)
    if (rd32(self + 0x344u) == 0u) goto L_1021a69b;
    COW_AT(1021a662)
    if ((uint32_t)(int16_t)arg1 - 3u > 0xfu)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        goto L_1021acd6;
    }
    COW_AT(1021a673)
    t69 = rd32(COW_IMG(0x1021acf0u) + rd8(COW_IMG(0x1021ad08u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t69 - RD)
    {
    case 0x1021a2b3u: goto L_1021a2b3;
    case 0x1021a2cau: goto L_1021a2ca;
    case 0x1021a2e1u: goto L_1021a2e1;
    case 0x1021a2f8u: goto L_1021a2f8;
    case 0x1021a682u: goto L_1021a682;
    case 0x1021acd6u: eax = (uint32_t)(int16_t)arg1 - 3u; goto L_1021acd6;
    default: rt_fatal(g, COW_IMG(0x1021a67bu), "switch");
    }
    return 0;
L_1021a682: ;
    COW_AT(1021a682)
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 2u);
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t70 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 0x44u;
    t71 = cow_thiscall(g, rd32(t70 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 2u, 0u, 0u);
    t72 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t72;
    return t71;
L_1021a69b: ;
    COW_AT(1021a69b)
    if (rd8(self + 0x20u) == 0u) goto L_1021a802;
    COW_AT(1021a6a4)
    if ((uint32_t)(int16_t)arg1 - 3u > 3u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        goto L_1021acd6;
    }
    COW_AT(1021a6b5)
    t81 = rd32(COW_IMG(0x1021ad18u) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t81 - RD)
    {
    case 0x1021a6bcu: goto L_1021a6bc;
    case 0x1021a6d9u: goto L_1021a6d9;
    case 0x1021a780u: goto L_1021a780;
    case 0x1021a7acu: goto L_1021a7ac;
    default: rt_fatal(g, COW_IMG(0x1021a6b5u), "switch");
    }
    return 0;
L_1021a6bc: ;
    COW_AT(1021a6bc)
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t105 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t106 = g->edx;
    t107 = rd16(self + 0x1eu);
    t108 = rd32(sp0 - 0x44u);
    wr16(self + 0x1cu, (uint16_t)t107);
    t109 = rd32(sp0 - 0x3cu);
    t110 = rd32(sp0 - 0x40u);
    wr16(COW_IMG(0x1066469cu), (uint16_t)t107);
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = t110;
    g->edi = t108;
    g->ebp = t109;
    g->edx = t106;
    return (t105 & 0xffff0000u) | t107;
L_1021a6d9: ;
    COW_AT(1021a6d9)
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t88 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t89 = g->edx;
    t90 = rd16(self + 0x4au);
    wr8(self + 0x20u, 0u);
    wr16(self + 0x4au, (uint8_t)t90 | ((t90 & 0xfffu) >> 8u | 0x10u) << 8u);
    wr8(self + 0x4au, 0u);
    if (rd32(ebp + 0x8f0u) == 0u)
    {
        eax = (uint8_t)t90 | ((t90 & 0xfffu) >> 8u | 0x10u) << 8u;
        edx = t89;
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021acd6;
    }
    eax = (uint8_t)t90 | ((t90 & 0xfffu) >> 8u | 0x10u) << 8u;
    edi = rd32(ebp + 0x8f0u);
    COW_AT(1021a702)
    t91 = rd16(self + 0x1cu);
    wr32(sp0 - 0x48u, t91);
    wr32(sp0 - 0x4cu, COW_IMG(0x10385ddcu));
    wr32(sp0 - 0x50u, sp0 - 0x1cu);
    g->ebx = 0u;
    g->edx = sp0 - 0x1cu;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1cu, COW_IMG(0x10385ddcu), t91, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t92 = g->edx;
    wr32(sp0 - 0x48u, sp0 - 0x1cu);
    g->eax = sp0 - 0x1cu;
    g->edx = t92;
    g->esp = sp0 - 0x44u;
    t93 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x24u, 1, sp0 - 0x1cu);
    t94 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x10385dc0u));
    g->edx = t94;
    t95 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x2cu, 1, COW_IMG(0x10385dc0u));
    t96 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x1036c108u));
    cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x34u, 1, COW_IMG(0x1036c108u));
    wr32(sp0 - 0x48u, sp0 - 0x24u);
    wr32(sp0 - 0x4cu, sp0 - 0x2cu);
    wr32(sp0 - 0x50u, sp0 - 0x34u);
    g->eax = sp0 - 0x34u;
    g->edx = sp0 - 0x2cu;
    t97 = cow_thiscall(g, COW_IMG(0x1010d5e0u), edi, 3, sp0 - 0x34u, sp0 - 0x2cu, sp0 - 0x24u);
    t98 = g->edx;
    g->edx = t98;
    t99 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x34u, 0);
    t100 = g->edx;
    g->edx = t100;
    t101 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x2cu, 0);
    t102 = g->edx;
    g->edx = t102;
    t103 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x24u, 0);
    t104 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t104;
    return t103;
L_1021a780: ;
    COW_AT(1021a780)
    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) + 1u));
    if (rd32(COW_IMG(0x10385cd8u) + rd16(self + 0x1eu) * 0x14u) != 0u)
    {
        eax = rd16(self + 0x1eu);
        ecx = rd16(self + 0x1eu) * 5u;
    }
    else
    {
        eax = rd16(self + 0x1eu);
        ecx = rd16(self + 0x1eu) * 5u;
    COW_AT(1021a799)
        wr16(self + 0x1eu, 0u);
    }
    COW_AT(1021a79d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t86 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t87 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t87;
    return t86;
L_1021a7ac: ;
    COW_AT(1021a7ac)
    if (rd16(self + 0x1eu) == 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 3u & 0xffff0000u) | rd16(self + 0x1eu);
        goto L_1021a7c9;
    }
    eax = ((uint32_t)(int16_t)arg1 - 3u & 0xffff0000u) | rd16(self + 0x1eu);
    COW_AT(1021a7b5)
    wr16(self + 0x1eu, (uint16_t)(eax - 1u));
    g->eax = eax - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t82 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t83 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t83;
    return t82;
L_1021a7c9: ;
    COW_AT(1021a7c9)
    if (rd32(COW_IMG(0x10385cecu) + (uint16_t)eax * 0x14u) == 0u)
    {
        edx = (uint16_t)eax * 5u;
        eax = (uint16_t)eax;
        goto L_1021a7f3;
    }
    edx = (uint16_t)eax * 5u;
    eax = (uint16_t)eax;
L_1021a7da: ;
    COW_AT(1021a7da)
    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) + 1u));
    if (rd32(COW_IMG(0x10385cecu) + rd16(self + 0x1eu) * 0x14u) != 0u)
    {
        eax = rd16(self + 0x1eu) * 5u;
        goto L_1021a7da;
    }
    eax = rd16(self + 0x1eu) * 5u;
L_1021a7f3: ;
    COW_AT(1021a7f3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t84 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t85 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t85;
    return t84;
L_1021a802: ;
    COW_AT(1021a802)
    if ((uint16_t)arg1 != 6u) goto L_1021a85c;
    COW_AT(1021a80c)
    if (rd16(self + 0x254u) == 0u) goto L_1021acd6;
    COW_AT(1021a819)
    if (rd8(self + 0x4au) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x4au);
        goto L_1021a82d;
    }
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x4au);
    COW_AT(1021a827)
    if (rd16(self + 0x14u) == 0xffffu)
    {
        eax = 0xffffffffu;
        goto L_1021a836;
    }
L_1021a82d: ;
    COW_AT(1021a82d)
    wr16(self + 0x14u, 0xffffu);
    g->eax = 0xffffffffu;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t111 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t112 = g->edx;
    eax = t111;
    edx = t112;
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
L_1021a836: ;
    COW_AT(1021a836)
    wr32(sp0 - 0x48u, ebp);
    g->esi = self;
    g->edi = arg1;
    g->esp = sp0 - 0x44u;
    t113 = cow_call_regs(g, COW_IMG(0x10217ec0u), eax, self, edx, 0, 1, ebp);
    t114 = g->edx;
    t115 = rd16(self + 0x4au);
    t116 = rd32(sp0 - 0x44u);
    wr16(self + 0x4au, (uint8_t)t115 | ((t115 & 0xfffu) >> 8u | 0x10u) << 8u);
    wr8(self + 0x4au, 0u);
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = t116;
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = (uint8_t)t115 | ((t115 & 0xfffu) >> 8u | 0x10u) << 8u;
    return t113;
L_1021a85c: ;
    COW_AT(1021a85c)
    if ((uint16_t)arg1 != 5u) goto L_1021aa35;
    COW_AT(1021a866)
    if (rd8(self + 0x4au) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x4au);
        edi = arg1;
        goto L_1021a378;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x4au);
    COW_AT(1021a874)
    if ((int16_t)rd16(self + 0x14u) >= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
        zf = rd16(self + 0x14u) == 0u;
        goto L_1021a894;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
L_1021a87d: ;
    COW_AT(1021a87d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t170 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t171 = g->edx;
    wr32(sp0 - 0x48u, ebp);
    g->edx = t171;
    t172 = cow_thiscall(g, COW_IMG(0x102197d0u), self, 1, ebp);
    t173 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t173;
    return t172;
L_1021a894: ;
    COW_AT(1021a894)
    if (!zf) goto L_1021a8b8;
    COW_AT(1021a896)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t117 = cow_thiscall(g, COW_IMG(0x1010a4f0u), ebp, 0);
    t118 = g->ecx;
    t119 = g->edx;
    if ((uint16_t)t117 == 0u)
    {
        eax = t117;
        ecx = t118;
        edx = t119;
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021a8b8;
    }
    eax = t117;
    edx = t119;
    COW_AT(1021a8a2)
    ecx = ebp;
L_1021a8a4: ;
    COW_AT(1021a8a4)
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t120 = cow_call_regs(g, COW_IMG(0x1010a4a0u), eax, ecx, g->edx, 1, 0);
    t121 = g->ecx;
    t122 = g->edx;
    g->edx = t122;
    t123 = cow_thiscall(g, COW_IMG(0x10037b90u), t121, 0);
    t124 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t124;
    return t123;
L_1021a8b8: ;
    COW_AT(1021a8b8)
    if (rd16(self + 0x14u) != 0u) goto L_1021a8da;
    COW_AT(1021a8be)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t125 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t126 = g->ecx;
    t127 = g->edx;
    g->edx = t127;
    t128 = cow_stdcall(g, COW_IMG(0x10115280u), 0);
    t129 = g->edx;
    wr32(sp0 - 0x48u, ebp);
    g->edx = t129;
    t130 = cow_thiscall(g, COW_IMG(0x102197d0u), self, 1, ebp);
    t131 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t131;
    return t130;
L_1021a8da: ;
    COW_AT(1021a8da)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t132 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
    if (rd32(t132 + 0x14u) == 0u)
    {
        eax = t132;
        goto L_1021a8f3;
    }
    eax = t132;
    edx = rd32(t132 + 0x14u);
    COW_AT(1021a8e8)
    if (rd32(edx + 4u) == 0u) goto L_1021a8f3;
    ecx = rd32(edx + 4u);
    COW_AT(1021a8ef)
    edi = ecx;
L_1021a8f8: ;
    COW_AT(1021a8f8)
    g->eax = eax;
    g->edx = rd32(eax);
    t133 = rd32(eax);
    g->esp = sp0 - 0x44u;
    t134 = cow_thiscall(g, rd32(t133 + 0x10u), eax, 0);
    t135 = g->ecx;
    t136 = g->edx;
    if (t134 != 1u)
    {
        eax = t134;
        ecx = t135;
        edx = t136;
        goto L_1021aa0d;
    }
    eax = t134;
    edx = t136;
    COW_AT(1021a908)
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, eax);
    wr32(sp0 - 0x50u, 2u);
    t137 = rd32(ebp + 0x8f0u);
    wr32(sp0 - 0x54u, t137);
    g->eax = t137;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t138 = cow_thiscall(g, COW_IMG(0x1010f350u), sp0 - 0x1cu, 4, t137, 2u, eax, 0u);
    t139 = g->edx;
    g->edx = t139;
    t140 = cow_call_regs(g, COW_IMG(0x1010f510u), t138, sp0 - 0x1cu, g->edx, 1, 0);
    t141 = g->ecx;
    t142 = g->edx;
    if ((uint8_t)t140 != 0u)
    {
        eax = t140;
        ecx = t141;
        edx = t142;
        goto L_1021a9b2;
    }
    eax = t140;
    edi = 1u;
L_1021a932: ;
    COW_AT(1021a932)
    if ((uint32_t)(int16_t)rd16(self + 0x14u) == (uint16_t)edi)
    {
        edx = (uint16_t)edi;
        goto L_1021a95b;
    }
    edx = (uint16_t)edi;
    COW_AT(1021a942)
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t143 = cow_call_regs(g, COW_IMG(0x1010f540u), eax, sp0 - 0x1cu, g->edx, 1, 0);
    t144 = g->edx;
    g->edx = t144;
    t145 = cow_call_regs(g, COW_IMG(0x1010f510u), t143, sp0 - 0x1cu, g->edx, 1, 0);
    t146 = g->ecx;
    t147 = g->edx;
    if ((uint8_t)t145 == 0u)
    {
        eax = t145;
        edi = edi + 1u;
        goto L_1021a932;
    }
    eax = t145;
    ecx = t146;
    edx = t147;
    COW_AT(1021a959)
L_1021a9b2: ;
    COW_AT(1021a9b2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t155 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t156 = g->edx;
    g->edx = t156;
    t157 = cow_call_regs(g, COW_IMG(0x1010f510u), t155, sp0 - 0x1cu, g->edx, 1, 0);
    t158 = g->edx;
    if ((uint8_t)t157 == 0u)
    {
        eax = t157;
        edx = t158;
        goto L_1021a9fa;
    }
    edx = t158;
    COW_AT(1021a9c4)
    if ((int32_t)rd32(self + 0x18u) <= 0)
    {
        eax = rd32(self + 0x18u);
        goto L_1021a9f2;
    }
    eax = rd32(self + 0x18u);
    COW_AT(1021a9cb)
    if ((uint32_t)(int16_t)rd16(self + 0x14u) != eax) goto L_1021a9f2;
    COW_AT(1021a9d3)
    t159 = rd16(self + 0x1cu);
    wr8(self + 0x20u, 1u);
    wr16(self + 0x1eu, (uint16_t)t159);
    g->eax = eax;
    g->edx = (edx & 0xffff0000u) | t159;
    g->esp = sp0 - 0x44u;
    t160 = cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x1cu, 0);
    t161 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t161;
    return t160;
L_1021a8f3: ;
    COW_AT(1021a8f3)
    edi = COW_IMG(0x103d3c84u);
    goto L_1021a8f8;
L_1021a95b: ;
    COW_AT(1021a95b)
    if (rd32(self + 0x344u) != 0u)
    {
        eax = rd32(self + 0x344u);
    COW_AT(1021a965)
        g->esp = sp0 - 0x44u;
        cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
    }
    COW_AT(1021a970)
    t148 = rd32(self + (uint16_t)edi * 4u + 0x2c4u);
    wr32(self + 0x344u, t148);
    if ((uint32_t)(int8_t)rd8(COW_IMG(0x1066469bu)) != (uint16_t)edi)
    {
        eax = (uint16_t)edi;
        ecx = t148;
        edx = (uint32_t)(int8_t)rd8(COW_IMG(0x1066469bu));
    COW_AT(1021a996)
        wr32(sp0 - 0x48u, COW_IMG(0x103d3c84u));
        loc_48 = COW_IMG(0x103d3c84u);
    }
    else
    {
        eax = (uint16_t)edi;
        ecx = t148;
        edx = (uint32_t)(int8_t)rd8(COW_IMG(0x1066469bu));
    COW_AT(1021a98f)
        wr32(sp0 - 0x48u, COW_IMG(0x10664550u));
        loc_48 = COW_IMG(0x10664550u);
    }
    COW_AT(1021a99b)
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x101c5f30u), ecx, 1, loc_48);
    t149 = g->edx;
    t150 = rd32(self + 0x344u);
    wr32(sp0 - 0x48u, t150);
    g->eax = t150;
    g->edx = t149;
    t151 = rd32(COW_IMG(0x10662da0u));
    t152 = cow_thiscall(g, COW_IMG(0x101c6870u), t151, 1, t150);
    t153 = g->ecx;
    t154 = g->edx;
    eax = t152;
    ecx = t153;
    edx = t154;
    goto L_1021a9b2;
L_1021a9f2: ;
    COW_AT(1021a9f2)
    wr32(sp0 - 0x48u, ebp);
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t162 = cow_fastcall(g, COW_IMG(0x102197f0u), self, edx, 1, ebp);
    t163 = g->edx;
    eax = t162;
    edx = t163;
L_1021a9fa: ;
    COW_AT(1021a9fa)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t164 = cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x1cu, 0);
    t165 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t165;
    return t164;
L_1021aa0d: ;
    COW_AT(1021aa0d)
    if (edi == 0u)
    {
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021a87d;
    }
    COW_AT(1021aa15)
    if (rd8(edi) != 0x23u)
    {
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1021a87d;
    }
    COW_AT(1021aa1e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t166 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t167 = g->edx;
    wr32(sp0 - 0x48u, ebp);
    g->ebx = 0u;
    t168 = cow_fastcall(g, COW_IMG(0x102197f0u), self, t167, 1, ebp);
    t169 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t169;
    return t168;
L_1021aa35: ;
    COW_AT(1021aa35)
    if ((uint16_t)arg1 == 2u) goto L_1021aa45;
    COW_AT(1021aa3b)
    if ((uint16_t)arg1 != 1u) goto L_1021aafd;
L_1021aa45: ;
    COW_AT(1021aa45)
    if (rd8(self + 0x4au) == 0u) goto L_1021aa69;
    eax = (eax & 0xffffff00u) | rd8(self + 0x4au);
    COW_AT(1021aa4f)
    wr32(sp0 - 0x48u, ebp);
    wr8(self + 0x4au, 0u);
    g->esi = self;
    g->edi = arg1;
    g->esp = sp0 - 0x44u;
    t208 = cow_call_regs(g, COW_IMG(0x10217ec0u), eax, self, edx, 0, 1, ebp);
    t209 = g->ecx;
    t210 = g->edx;
    g->edx = t210;
    t211 = cow_thiscall(g, COW_IMG(0x10037b30u), t209, 0);
    t212 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t212;
    return t211;
L_1021aa69: ;
    COW_AT(1021aa69)
    if (rd16(self + 0x258u) == 0u)
    {
        eax = 0u;
        edi = arg1;
        goto L_1021aae6;
    }
    ecx = (ecx & 0xffff0000u) | rd16(self + 0x258u);
    COW_AT(1021aa77)
    eax = 0u;
    edx = (edx & 0xffff0000u) | rd16(self + 0x14u);
L_1021aa7b: ;
    COW_AT(1021aa7b)
    if ((uint16_t)edx == rd16(self + (uint16_t)eax * 2u + 0x25au)) goto L_1021aaaa;
    COW_AT(1021aa8d)
    if ((uint16_t)(eax + 1u) < (uint16_t)ecx)
    {
        eax = eax + 1u;
        goto L_1021aa7b;
    }
    eax = eax + 1u;
    COW_AT(1021aa93)
    wr32(sp0 - 0x48u, ebp);
    g->esi = self;
    g->edi = arg1;
    g->esp = sp0 - 0x44u;
    t213 = cow_call_regs(g, COW_IMG(0x10217ec0u), eax, self, edx, 0, 1, ebp);
    t214 = g->ecx;
    t215 = g->edx;
    g->edx = t215;
    t216 = cow_thiscall(g, COW_IMG(0x10037b30u), t214, 0);
    t217 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t217;
    return t216;
L_1021aaaa: ;
    COW_AT(1021aaaa)
    if ((uint16_t)arg1 != 2u)
    {
        edi = arg1;
        goto L_1021aac4;
    }
    COW_AT(1021aab0)
    if ((uint16_t)eax == 0u)
    {
        edi = arg1;
        goto L_1021a482;
    }
    COW_AT(1021aab9)
    eax = (uint16_t)eax - 1u;
    edi = arg1;
    goto L_1021a48b;
L_1021aac4: ;
    COW_AT(1021aac4)
    t224 = rd16(self + ((uint16_t)eax + 1u & ((int32_t)((uint16_t)eax + 1u) >= (int32_t)(uint16_t)ecx) - 1u) * 2u + 0x25au);
    wr16(self + 0x14u, (uint16_t)t224);
    edx = ((int32_t)((uint16_t)eax + 1u) >= (int32_t)(uint16_t)ecx) - 1u;
    eax = ((uint16_t)eax + 1u & ((int32_t)((uint16_t)eax + 1u) >= (int32_t)(uint16_t)ecx) - 1u & 0xffff0000u) | t224;
L_1021aae6: ;
    COW_AT(1021aae6)
    wr32(sp0 - 0x48u, ebp);
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x44u;
    t225 = cow_call_regs(g, COW_IMG(0x10217ec0u), eax, self, edx, 0, 1, ebp);
    t226 = g->ecx;
    t227 = g->edx;
    g->edx = t227;
    t228 = cow_thiscall(g, COW_IMG(0x10037b30u), t226, 0);
    t229 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t229;
    return t228;
L_1021aafd: ;
    COW_AT(1021aafd)
    if ((uint16_t)arg1 != 9u) goto L_1021ab1e;
L_1021ab03: ;
    COW_AT(1021ab03)
    wr16(self + 0x4au, (uint8_t)rd16(self + 0x4au) | ((rd16(self + 0x4au) & 0xf1ffu) >> 8u | 1u) << 8u);
    g->ebx = loc_38;
    g->esi = loc_40;
    g->edi = loc_44;
    g->ebp = loc_3c;
    g->edx = edx;
    return eax;
L_1021ab1e: ;
    COW_AT(1021ab1e)
    if ((uint16_t)arg1 != 0x16u) goto L_1021ab5a;
    COW_AT(1021ab24)
    t179 = rd16(self + 0x38u) + rd16(self + 0x254u) + rd16(self + 0x48u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t179);
    wr32(sp0 - 0x4cu, 0xfu);
    g->eax = rd16(self + 0x38u);
    t180 = rd16(self + 0x38u);
    g->esp = sp0 - 0x44u;
    t181 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t179, 2, 0xfu, t179);
    t182 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t182;
    return t181;
L_1021ab5a: ;
    COW_AT(1021ab5a)
    if ((uint16_t)arg1 != 0x17u) goto L_1021ab96;
    COW_AT(1021ab60)
    t183 = rd16(self + 0x38u) + rd16(self + 0x254u) + rd16(self + 0x48u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t183);
    wr32(sp0 - 0x4cu, 0xfffffff1u);
    g->eax = rd16(self + 0x48u);
    t184 = rd16(self + 0x48u);
    t185 = rd16(self + 0x38u);
    g->esp = sp0 - 0x44u;
    t186 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t185, 2, 0xfffffff1u, t183);
    t187 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t187;
    return t186;
L_1021ab96: ;
    COW_AT(1021ab96)
    if ((uint16_t)arg1 != 0x18u) goto L_1021abd5;
    COW_AT(1021ab9c)
    t188 = rd16(self + 0x38u) + rd16(self + 0x254u) + rd16(self + 0x48u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t188);
    wr32(sp0 - 0x4cu, 0x96u);
    g->eax = t188;
    t189 = rd16(self + 0x48u);
    g->esp = sp0 - 0x44u;
    t190 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t189, 2, 0x96u, t188);
    t191 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t191;
    return t190;
L_1021abd5: ;
    COW_AT(1021abd5)
    if ((uint16_t)arg1 != 0x19u) goto L_1021ac14;
    COW_AT(1021abdb)
    t192 = rd16(self + 0x38u) + rd16(self + 0x254u) + rd16(self + 0x48u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t192);
    wr32(sp0 - 0x4cu, 0xffffff6au);
    g->eax = rd16(self + 0x38u);
    t193 = rd16(self + 0x38u);
    g->esp = sp0 - 0x44u;
    t194 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t192, 2, 0xffffff6au, t192);
    t195 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t195;
    return t194;
L_1021ac14: ;
    COW_AT(1021ac14)
    if ((uint16_t)arg1 != 0x1bu) goto L_1021ac64;
L_1021ac1a: ;
    COW_AT(1021ac1a)
    if (rd32(rd32(self + 8u) + 0x88u) == 0u)
    {
        eax = rd32(rd32(self + 8u) + 0x88u);
        goto L_1021acd6;
    }
    eax = rd32(rd32(self + 8u) + 0x88u);
    COW_AT(1021ac2b)
    t196 = rd16(self + 0x36u) + rd16(self + 0x38u) + rd16(self + 0x254u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t196);
    wr32(sp0 - 0x4cu, 0u);
    t197 = rd32(eax + 0x14u);
    wr32(sp0 - 0x50u, t197);
    g->eax = eax;
    g->edx = t197;
    g->esp = sp0 - 0x44u;
    t198 = cow_thiscall(g, COW_IMG(0x10218110u), self, 3, t197, 0u, t196);
    t199 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t199;
    return t198;
L_1021ac64: ;
    COW_AT(1021ac64)
    if ((uint16_t)arg1 != 3u) goto L_1021aca3;
    COW_AT(1021ac6a)
    t200 = rd16(self + 0x38u) + rd16(self + 0x254u) + rd16(self + 0x48u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x48u, t200);
    wr32(sp0 - 0x4cu, 0xffffff6au);
    g->eax = t200;
    t201 = rd16(self + 0x48u);
    g->esp = sp0 - 0x44u;
    t202 = cow_fastcall(g, COW_IMG(0x102180b0u), self, t201, 2, 0xffffff6au, t200);
    t203 = g->edx;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = t203;
    return t202;
L_1021aca3: ;
    COW_AT(1021aca3)
    goto L_1021a5fb;
L_1021acac: ;
    COW_AT(1021acac)
    if ((uint16_t)arg1 != 6u) goto L_1021acc5;
    COW_AT(1021acb6)
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t230 = cow_stdcall(g, COW_IMG(0x1021bb70u), 0);
    t231 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t231;
    return t230;
L_1021acc5: ;
    COW_AT(1021acc5)
    if (rd16(self + 0x34au) == 0u)
    {
        eax = arg1;
        edx = in_edx;
        loc_38 = in_ebx;
        loc_3c = in_ebp;
        loc_40 = in_esi;
        loc_44 = in_edi;
    }
    else
    {
    COW_AT(1021acce)
        wr32(sp0 - 0x48u, arg1);
        g->eax = arg1;
        g->edx = in_edx;
        g->esp = sp0 - 0x44u;
        t232 = cow_thiscall(g, COW_IMG(0x1021b1d0u), self, 1, arg1);
        t233 = g->edx;
        eax = t232;
        edx = t233;
        loc_38 = in_ebx;
        loc_3c = in_ebp;
        loc_40 = in_esi;
        loc_44 = in_edi;
    }
L_1021acd6: ;
    COW_AT(1021acd6)
    g->ebx = loc_38;
    g->esi = loc_40;
    g->edi = loc_44;
    g->ebp = loc_3c;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021a240(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021a259u:
    {
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1021a268u:
    {
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a273u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a28au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a293u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a29bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a2acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1021a2b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1021a2cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1021a2e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1021a2f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1021a30fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a319u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a326u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a330u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a336u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a341u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a367u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a36du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a378u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a392u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a39bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a3afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1021a3b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a3ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a3d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a3dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a3e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a405u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a417u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->eax = 0u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a41bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a42du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a433u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a44au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a454u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a459u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a482u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a48bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a4aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a4b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a4beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a4f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a4fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a530u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a536u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a56fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a575u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a5aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a5b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a5beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a5f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a5fbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->zf = (uint8_t)((uint16_t)((uint16_t)arg1 - 4u) == 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021a601u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a63au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a646u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a65au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a662u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a673u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a682u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a69bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a6a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a6b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a6bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1021a6d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a702u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a780u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a799u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a79du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a7acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a7b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a7c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a7dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a7f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a802u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a80cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a819u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a827u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = 0xffffffffu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a82du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = 0xffffffffu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a836u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a85cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a866u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021a874u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a87du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a894u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a896u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a8a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a8a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a8b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a8beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a8dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a8e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a8efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a8f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a8f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a908u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a932u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a942u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a959u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a95bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a965u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a970u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a98fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a996u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a99bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a9b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a9c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a9cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a9d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021a9f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a9fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021aa0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021aa15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021aa1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021aa35u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aa3bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aa45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aa4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aa69u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aa77u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aa7bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aa8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aa93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aaaau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aab0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aab9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021aac4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021aae6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021aafdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021ab03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021ab1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021ab24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021ab5au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021ab60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021ab96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021ab9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021abd5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021abdbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021ac14u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021ac1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021ac2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021ac64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021ac6au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1021aca3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021acacu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1021acb6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021acc5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021acceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021acd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021a240(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1021a240(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
