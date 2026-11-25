/* f_0x101f4bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_101f4bb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14c;
    uint32_t loc_150;
    uint32_t loc_158;
    uint32_t loc_15c;
    uint32_t loc_160;
    uint32_t loc_164;
    uint32_t loc_168;
    uint32_t loc_16c;
    uint32_t loc_19c;
    uint32_t pf;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 416u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f4bcfu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x158u); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4bcf;
    case 0x101f4bddu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x158u); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4bdd;
    case 0x101f4be4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4be4;
    case 0x101f4c09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4c09;
    case 0x101f4c16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4c16;
    case 0x101f4c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4c46;
    case 0x101f4c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4c53;
    case 0x101f4c75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4c75;
    case 0x101f4c85u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4c85;
    case 0x101f4c8fu: self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_16c = rd32(sp0 - 0x16cu); in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4c8f;
    case 0x101f4c95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4c95;
    case 0x101f4cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4cb1;
    case 0x101f4cc1u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4cc1;
    case 0x101f4ccdu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4ccd;
    case 0x101f4ce2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4ce2;
    case 0x101f4ceau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4cea;
    case 0x101f4cfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4cfa;
    case 0x101f4d36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4d36;
    case 0x101f4d46u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4d46;
    case 0x101f4d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4d57;
    case 0x101f4d93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4d93;
    case 0x101f4da3u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4da3;
    case 0x101f4db3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4db3;
    case 0x101f4defu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4def;
    case 0x101f4dffu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4dff;
    case 0x101f4e08u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4e08;
    case 0x101f4e26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4e26;
    case 0x101f4e4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4e4d;
    case 0x101f4e5du: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4e5d;
    case 0x101f4e6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4e6e;
    case 0x101f4e9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4e9e;
    case 0x101f4eaeu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4eae;
    case 0x101f4ec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4ec0;
    case 0x101f4ee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4ee7;
    case 0x101f4ef7u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4ef7;
    case 0x101f4efcu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4efc;
    case 0x101f4f06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4f06;
    case 0x101f4f16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4f16;
    case 0x101f4f1bu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4f1b;
    case 0x101f4f1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_101f4f1d;
    case 0x101f4f2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4f2c;
    case 0x101f4f68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4f68;
    case 0x101f4f78u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4f78;
    case 0x101f4f85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4f85;
    case 0x101f4f8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4f8a;
    case 0x101f4fb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4fb3;
    case 0x101f4fc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4fc0;
    case 0x101f4fedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f4fed;
    case 0x101f4ffau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f4ffa;
    case 0x101f502au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f502a;
    case 0x101f5037u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5037;
    case 0x101f5089u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5089;
    case 0x101f5096u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x158u); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5096;
    case 0x101f50b2u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebx = rd32(sp0 - 0x158u); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f50b2;
    case 0x101f50bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f50bb;
    case 0x101f50cbu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f50cb;
    case 0x101f50d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f50d6;
    case 0x101f50e6u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f50e6;
    case 0x101f5169u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5169;
    case 0x101f5179u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5179;
    case 0x101f5180u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5180;
    case 0x101f5196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5196;
    case 0x101f51aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f51aa;
    case 0x101f51d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f51d1;
    case 0x101f51deu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f51de;
    case 0x101f51e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f51e5;
    case 0x101f51f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_150 = rd32(sp0 - 0x150u); loc_14c = rd32(sp0 - 0x14cu); goto E_101f51f9;
    case 0x101f5206u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_150 = rd32(sp0 - 0x150u); loc_14c = rd32(sp0 - 0x14cu); goto E_101f5206;
    case 0x101f5215u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_150 = rd32(sp0 - 0x150u); loc_14c = rd32(sp0 - 0x14cu); goto E_101f5215;
    case 0x101f523au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_150 = rd32(sp0 - 0x150u); loc_14c = rd32(sp0 - 0x14cu); goto E_101f523a;
    case 0x101f525fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_150 = rd32(sp0 - 0x150u); loc_14c = rd32(sp0 - 0x14cu); goto E_101f525f;
    case 0x101f526cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f526c;
    case 0x101f527fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f527f;
    case 0x101f52a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f52a9;
    case 0x101f52b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f52b6;
    case 0x101f52d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f52d3;
    case 0x101f52e0u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f52e0;
    case 0x101f52ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f52ec;
    case 0x101f5301u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5301;
    case 0x101f531cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f531c;
    case 0x101f5340u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5340;
    case 0x101f534du: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f534d;
    case 0x101f5359u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5359;
    case 0x101f536eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f536e;
    case 0x101f5389u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5389;
    case 0x101f53adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f53ad;
    case 0x101f53c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f53c2;
    case 0x101f53d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f53d5;
    case 0x101f53dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f53dc;
    case 0x101f53e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f53e6;
    case 0x101f53f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f53f1;
    case 0x101f5409u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5409;
    case 0x101f5419u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5419;
    case 0x101f542cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f542c;
    case 0x101f5437u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5437;
    case 0x101f5445u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5445;
    case 0x101f5454u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5454;
    case 0x101f546cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f546c;
    case 0x101f547cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f547c;
    case 0x101f549eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f549e;
    case 0x101f54c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f54c3;
    case 0x101f54d3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f54d3;
    case 0x101f54dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f54df;
    case 0x101f54e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f54e7;
    case 0x101f54fau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f54fa;
    case 0x101f5506u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5506;
    case 0x101f5510u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5510;
    case 0x101f551fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f551f;
    case 0x101f5525u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5525;
    case 0x101f5531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5531;
    case 0x101f5535u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5535;
    case 0x101f553cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f553c;
    case 0x101f5548u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5548;
    case 0x101f554cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f554c;
    case 0x101f5551u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5551;
    case 0x101f555bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f555b;
    case 0x101f5561u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5561;
    case 0x101f556bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f556b;
    case 0x101f557du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f557d;
    case 0x101f5580u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5580;
    case 0x101f5586u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5586;
    case 0x101f5588u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5588;
    case 0x101f5597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5597;
    case 0x101f559eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f559e;
    case 0x101f55adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f55ad;
    case 0x101f55b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f55b4;
    case 0x101f55bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f55bb;
    case 0x101f55c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f55c5;
    case 0x101f55cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f55ca;
    case 0x101f55d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f55d9;
    case 0x101f55e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f55e0;
    case 0x101f55e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f55e5;
    case 0x101f5609u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5609;
    case 0x101f5616u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5616;
    case 0x101f5622u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5622;
    case 0x101f562au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f562a;
    case 0x101f5638u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5638;
    case 0x101f564au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f564a;
    case 0x101f565fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f565f;
    case 0x101f569bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f569b;
    case 0x101f56abu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f56ab;
    case 0x101f56b8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f56b8;
    case 0x101f56d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f56d0;
    case 0x101f56d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f56d7;
    case 0x101f56edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f56ed;
    case 0x101f56fau: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f56fa;
    case 0x101f5703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5703;
    case 0x101f570eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f570e;
    case 0x101f5733u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5733;
    case 0x101f5740u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5740;
    case 0x101f574eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f574e;
    case 0x101f5754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5754;
    case 0x101f575cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f575c;
    case 0x101f5781u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5781;
    case 0x101f578eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f578e;
    case 0x101f5797u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5797;
    case 0x101f57b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f57b2;
    case 0x101f57c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f57c4;
    case 0x101f57d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f57d4;
    case 0x101f57f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f57f8;
    case 0x101f5829u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5829;
    case 0x101f5836u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5836;
    case 0x101f5846u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5846;
    case 0x101f586bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f586b;
    case 0x101f587bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f587b;
    case 0x101f589cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f589c;
    case 0x101f58acu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f58ac;
    case 0x101f58bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f58bc;
    case 0x101f58e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f58e1;
    case 0x101f58f1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f58f1;
    case 0x101f5901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5901;
    case 0x101f5931u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5931;
    case 0x101f593eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f593e;
    case 0x101f594eu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f594e;
    case 0x101f595eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f595e;
    case 0x101f598eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f598e;
    case 0x101f599bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f599b;
    case 0x101f59abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f59ab;
    case 0x101f59d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f59d7;
    case 0x101f59e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f59e7;
    case 0x101f5a15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5a15;
    case 0x101f5a25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5a25;
    case 0x101f5a55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5a55;
    case 0x101f5a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5a65;
    case 0x101f5a6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5a6c;
    case 0x101f5a73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5a73;
    case 0x101f5a7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5a7d;
    case 0x101f5a82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5a82;
    case 0x101f5aaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5aaa;
    case 0x101f5abau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5aba;
    case 0x101f5ac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5ac6;
    case 0x101f5aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5ace;
    case 0x101f5ae1u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5ae1;
    case 0x101f5ae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5ae6;
    case 0x101f5aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5aee;
    case 0x101f5afeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5afe;
    case 0x101f5b06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5b06;
    case 0x101f5b14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5b14;
    case 0x101f5b4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5b4b;
    case 0x101f5b5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5b5b;
    case 0x101f5b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5b72;
    case 0x101f5b8du: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5b8d;
    case 0x101f5ba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5ba4;
    case 0x101f5babu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5bab;
    case 0x101f5bb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5bb0;
    case 0x101f5bcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5bcb;
    case 0x101f5bd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5bd2;
    case 0x101f5bddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5bdd;
    case 0x101f5bffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5bff;
    case 0x101f5c0cu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5c0c;
    case 0x101f5c23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5c23;
    case 0x101f5c2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5c2a;
    case 0x101f5c2fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5c2f;
    case 0x101f5c3au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5c3a;
    case 0x101f5c44u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5c44;
    case 0x101f5c4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5c4a;
    case 0x101f5c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5c6f;
    case 0x101f5c97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5c97;
    case 0x101f5caau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5caa;
    case 0x101f5cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5cdb;
    case 0x101f5cebu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5ceb;
    case 0x101f5cf3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5cf3;
    case 0x101f5d0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d0c;
    case 0x101f5d0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d0f;
    case 0x101f5d30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d30;
    case 0x101f5d3du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5d3d;
    case 0x101f5d49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d49;
    case 0x101f5d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d53;
    case 0x101f5d62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d62;
    case 0x101f5d6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d6a;
    case 0x101f5d71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d71;
    case 0x101f5d79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d79;
    case 0x101f5d7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5d7e;
    case 0x101f5d85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_168 = rd32(sp0 - 0x168u); goto E_101f5d85;
    case 0x101f5dadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5dad;
    case 0x101f5dbau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5dba;
    case 0x101f5dd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5dd4;
    case 0x101f5dd9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5dd9;
    case 0x101f5e0au: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_16c = rd32(sp0 - 0x16cu); in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5e0a;
    case 0x101f5e0fu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_16c = rd32(sp0 - 0x16cu); in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5e0f;
    case 0x101f5e15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5e15;
    case 0x101f5e18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5e18;
    case 0x101f5e39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5e39;
    case 0x101f5e46u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5e46;
    case 0x101f5e56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5e56;
    case 0x101f5e77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5e77;
    case 0x101f5e87u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5e87;
    case 0x101f5e95u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5e95;
    case 0x101f5ea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5ea0;
    case 0x101f5ea5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5ea5;
    case 0x101f5eb3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5eb3;
    case 0x101f5ebau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5eba;
    case 0x101f5ec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5ec2;
    case 0x101f5ee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5ee7;
    case 0x101f5ef4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5ef4;
    case 0x101f5f05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5f05;
    case 0x101f5f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5f39;
    case 0x101f5f49u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5f49;
    case 0x101f5f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5f60;
    case 0x101f5f9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5f9a;
    case 0x101f5fa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5fa1;
    case 0x101f5fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f5fe7;
    case 0x101f5ff4u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5ff4;
    case 0x101f5ffcu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f5ffc;
    case 0x101f6006u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f6006;
    case 0x101f6010u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6010;
    case 0x101f601bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f601b;
    case 0x101f602bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f602b;
    case 0x101f6054u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6054;
    case 0x101f6064u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f6064;
    case 0x101f6070u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6070;
    case 0x101f6078u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6078;
    case 0x101f60a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f60a6;
    case 0x101f60b6u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f60b6;
    case 0x101f60beu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f60be;
    case 0x101f60c8u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f60c8;
    case 0x101f60d3u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f60d3;
    case 0x101f60e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f60e9;
    case 0x101f611fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f611f;
    case 0x101f612fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f612f;
    case 0x101f6137u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f6137;
    case 0x101f6141u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f6141;
    case 0x101f6154u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6154;
    case 0x101f6190u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6190;
    case 0x101f61a0u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f61a0;
    case 0x101f61a8u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f61a8;
    case 0x101f61afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f61af;
    case 0x101f61b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f61b7;
    case 0x101f61c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f61c2;
    case 0x101f61cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f61cb;
    case 0x101f61feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f61fe;
    case 0x101f620eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f620e;
    case 0x101f623cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f623c;
    case 0x101f624cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f624c;
    case 0x101f6280u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6280;
    case 0x101f628du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f628d;
    case 0x101f62a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f62a1;
    case 0x101f62c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f62c2;
    case 0x101f62cfu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f62cf;
    case 0x101f62dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f62db;
    case 0x101f62e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f62e3;
    case 0x101f631cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f631c;
    case 0x101f6329u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f6329;
    case 0x101f6330u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6330;
    case 0x101f636du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f636d;
    case 0x101f637au: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f637a;
    case 0x101f638au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f638a;
    case 0x101f63c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f63c6;
    case 0x101f63d6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f63d6;
    case 0x101f63e2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f63e2;
    case 0x101f63f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f63f2;
    case 0x101f63f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f63f5;
    case 0x101f640eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f640e;
    case 0x101f641eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f641e;
    case 0x101f642cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f642c;
    case 0x101f6437u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6437;
    case 0x101f643fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f643f;
    case 0x101f6464u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6464;
    case 0x101f6471u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f6471;
    case 0x101f6482u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6482;
    case 0x101f64b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f64b3;
    case 0x101f64c3u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f64c3;
    case 0x101f64d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f64d4;
    case 0x101f64f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f64f9;
    case 0x101f6509u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_101f6509;
    case 0x101f6525u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6525;
    case 0x101f6537u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6537;
    case 0x101f6547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6547;
    case 0x101f655cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f655c;
    case 0x101f655eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_19c = rd32(sp0 - 0x19cu); goto E_101f655e;
    case 0x101f6563u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101f6563;
    case 0x101f6566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_101f6566;
    default: break;
    }
#endif

    COW_AT(101f4bb0)
    wr32(sp0 - 0x158u, in_ebx);
    wr32(sp0 - 0x15cu, in_ebp);
    wr32(sp0 - 0x160u, in_esi);
    wr32(sp0 - 0x164u, in_edi);
    if (rd32(arg2 * 4u + self + 0x28u) == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    ebx = rd32(arg2 * 4u + self + 0x28u);
    COW_AT(101f4bcf)
    if ((uint32_t)(int8_t)rd8(arg2 + self) - 1u > 0x4bu)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    eax = (uint32_t)(int8_t)rd8(arg2 + self) - 1u;
    COW_AT(101f4bdd)
    t1 = rd32(COW_IMG(0x101f6574u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101f4be4u: goto L_101f4be4;
    case 0x101f4c16u: goto L_101f4c16;
    case 0x101f4c53u: goto L_101f4c53;
    case 0x101f4c85u: goto L_101f4c85;
    case 0x101f4cc1u: goto L_101f4cc1;
    case 0x101f4ccdu: goto L_101f4ccd;
    case 0x101f4ceau: goto L_101f4cea;
    case 0x101f4d46u: goto L_101f4d46;
    case 0x101f4da3u: goto L_101f4da3;
    case 0x101f4dffu: goto L_101f4dff;
    case 0x101f4e5du: goto L_101f4e5d;
    case 0x101f4ef7u: goto L_101f4ef7;
    case 0x101f4f78u: goto L_101f4f78;
    case 0x101f5037u: goto L_101f5037;
    case 0x101f5096u: goto L_101f5096;
    case 0x101f50e6u: goto L_101f50e6;
    case 0x101f5179u: goto L_101f5179;
    case 0x101f51deu: goto L_101f51de;
    case 0x101f526cu: goto L_101f526c;
    case 0x101f527fu: goto L_101f527f;
    case 0x101f52b6u: goto L_101f52b6;
    case 0x101f52e0u: goto L_101f52e0;
    case 0x101f534du: goto L_101f534d;
    case 0x101f547cu: goto L_101f547c;
    case 0x101f54d3u: goto L_101f54d3;
    case 0x101f54fau: goto L_101f54fa;
    case 0x101f5616u: goto L_101f5616;
    case 0x101f56abu: goto L_101f56ab;
    case 0x101f56fau: goto L_101f56fa;
    case 0x101f5740u: goto L_101f5740;
    case 0x101f578eu: goto L_101f578e;
    case 0x101f57f8u: goto L_101f57f8;
    case 0x101f5836u: goto L_101f5836;
    case 0x101f587bu: goto L_101f587b;
    case 0x101f58acu: goto L_101f58ac;
    case 0x101f58f1u: goto L_101f58f1;
    case 0x101f594eu: goto L_101f594e;
    case 0x101f59abu: goto L_101f59ab;
    case 0x101f59e7u: goto L_101f59e7;
    case 0x101f5a25u: goto L_101f5a25;
    case 0x101f5a65u: goto L_101f5a65;
    case 0x101f5abau: goto L_101f5aba;
    case 0x101f5ae1u: goto L_101f5ae1;
    case 0x101f5b72u: goto L_101f5b72;
    case 0x101f5b8du: goto L_101f5b8d;
    case 0x101f5bb0u: goto L_101f5bb0;
    case 0x101f5c0cu: goto L_101f5c0c;
    case 0x101f5c2fu: goto L_101f5c2f;
    case 0x101f5d3du: goto L_101f5d3d;
    case 0x101f5dbau: goto L_101f5dba;
    case 0x101f5dd9u: goto L_101f5dd9;
    case 0x101f5e46u: goto L_101f5e46;
    case 0x101f5e87u: goto L_101f5e87;
    case 0x101f5ea5u: goto L_101f5ea5;
    case 0x101f5ef4u: goto L_101f5ef4;
    case 0x101f5f49u: goto L_101f5f49;
    case 0x101f5ff4u: goto L_101f5ff4;
    case 0x101f6064u: goto L_101f6064;
    case 0x101f60b6u: goto L_101f60b6;
    case 0x101f612fu: goto L_101f612f;
    case 0x101f61a0u: goto L_101f61a0;
    case 0x101f624cu: goto L_101f624c;
    case 0x101f628du: goto L_101f628d;
    case 0x101f62cfu: goto L_101f62cf;
    case 0x101f6329u: goto L_101f6329;
    case 0x101f637au: goto L_101f637a;
    case 0x101f63d6u: goto L_101f63d6;
    case 0x101f641eu: goto L_101f641e;
    case 0x101f6471u: goto L_101f6471;
    case 0x101f64c3u: goto L_101f64c3;
    case 0x101f6509u: goto L_101f6509;
    case 0x101f6566u: loc_158 = in_ebx; loc_15c = in_ebp; loc_160 = in_esi; loc_164 = in_edi; goto L_101f6566;
    default: rt_fatal(g, COW_IMG(0x101f4bddu), "switch");
    }
    return;
L_101f4be4: ;
    COW_AT(101f4be4)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, ebx);
    wr32(sp0 - 0x170u, arg4);
    t259 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t259);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f4c09u);
    cow_thiscall(g, rd32(rd32(arg1) + 0x60u), arg1, 4, t259, arg4, ebx, arg6);
    COW_AT(101f4c09)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4c16: ;
    COW_AT(101f4c16)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, ebx);
    wr32(sp0 - 0x170u, arg4);
    t258 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x174u, t258);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f4c46u);
    cow_thiscall(g, rd32(rd32(arg1) + 0x64u), arg1, 4, t258, arg4, ebx, arg6);
    COW_AT(101f4c46)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4c53: ;
    COW_AT(101f4c53)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, ebx);
    wr32(sp0 - 0x174u, (uint32_t)(int16_t)arg4);
    t257 = (uint32_t)(int16_t)rd16(sp0 + 0xcu);
    wr32(sp0 - 0x178u, t257);
    g->esp = sp0 - 0x14cu;
    COW_RET(0x101f4c75u);
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t257, (uint32_t)(int16_t)arg4, ebx, 0u, arg6, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    COW_AT(101f4c75)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4c85: ;
    COW_AT(101f4c85)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, 2u);
    loc_16c = 2u;
L_101f4c8f: ;
    COW_AT(101f4c8f)
    wr32(sp0 - 0x170u, ebx);
    g->edi = arg2;
    g->eax = arg6;
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f4c95u);
    t255 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, ebx, loc_16c);
    eax = t255;
    COW_AT(101f4c95)
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4 + 4u);
    t256 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t256);
    g->esp = sp0 - 0x150u;
    COW_RET(0x101f4cb1u);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t256, arg4 + 4u, eax, rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    COW_AT(101f4cb1)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4cc1: ;
    COW_AT(101f4cc1)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, 7u);
    loc_16c = 7u;
    goto L_101f4c8f;
L_101f4ccd: ;
    COW_AT(101f4ccd)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, 1u);
    wr32(sp0 - 0x170u, 2u);
    wr32(sp0 - 0x174u, ebx - 1u);
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f4ce2u);
    t252 = cow_call_regs(g, COW_IMG(0x101c92b0u), ebx - 1u, arg6, g->edx, 1, 3, ebx - 1u, 2u, 1u);
    t253 = g->ecx;
    eax = t252;
    ecx = t253;
    COW_AT(101f4ce2)
L_101f63f5: ;
    COW_AT(101f63f5)
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4 + 4u);
    t254 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t254);
    g->esp = sp0 - 0x150u;
    COW_RET(0x101f640eu);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t254, arg4 + 4u, eax, rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    COW_AT(101f640e)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4cea: ;
    COW_AT(101f4cea)
    wr32(sp0 - 0x168u, ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f4cfau);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10352ff0u), ebx, in_edi, in_esi);
    COW_AT(101f4cfa)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t251 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x18cu, t251);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f4d36u);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t251, 7, t251, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f4d36)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4d46: ;
    COW_AT(101f4d46)
    wr32(sp0 - 0x168u, ebx - 1u);
    wr32(sp0 - 0x16cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx - 1u;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f4d57u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10352ff0u), ebx - 1u, in_edi, in_esi);
    COW_AT(101f4d57)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t250 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x18cu, t250);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f4d93u);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg5, 7, t250, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f4d93)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4da3: ;
    COW_AT(101f4da3)
    wr32(sp0 - 0x168u, ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x1036fe18u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f4db3u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x1036fe18u), ebx, in_edi, in_esi);
    COW_AT(101f4db3)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t249 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x18cu, t249);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f4defu);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), rd32(sp0 + 0xcu), 7, t249, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f4def)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4dff: ;
    COW_AT(101f4dff)
    if ((int32_t)(ebx - 1u) < 0)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    ebx = ebx - 1u;
    COW_AT(101f4e08)
    wr32(sp0 - 0x168u, 0x3f800000u);
    wr32(sp0 - 0x16cu, 0x3f800000u);
    wr32(sp0 - 0x170u, 1u);
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, 1u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, ebx);
    g->ebx = ebx;
    g->esp = sp0 - 0x16cu;
    COW_RET(0x101f4e26u);
    t247 = cow_call_regs(g, COW_IMG(0x101c9440u), eax, g->ecx, g->edx, 1, 5, ebx, 1u, 1u, arg6, 1u);
    eax = t247;
    COW_AT(101f4e26)
    wr32(sp0 - 0x178u, eax);
    wr32(sp0 - 0x17cu, arg4 + 4u);
    t248 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x180u, t248);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f4e4du);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg5, 7, t248, arg4 + 4u, eax, rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u));
    COW_AT(101f4e4d)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4e5d: ;
    COW_AT(101f4e5d)
    wr32(sp0 - 0x168u, 0x3f800000u);
    wr32(sp0 - 0x16cu, 0x3f800000u);
    wr32(sp0 - 0x170u, 1u);
    if ((int32_t)(ebx - 1u) >= 0)
    {
        ebx = ebx - 1u;
        goto L_101f4eae;
    }
    COW_AT(101f4e6e)
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, COW_IMG(0x1038213cu));
    wr32(sp0 - 0x17cu, arg4 + 4u);
    t244 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x180u, t244);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f4e9eu);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t244, 7, t244, arg4 + 4u, COW_IMG(0x1038213cu), arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f4e9e)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4eae: ;
    COW_AT(101f4eae)
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, 1u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, ebx);
    g->ebx = ebx;
    g->esp = sp0 - 0x16cu;
    COW_RET(0x101f4ec0u);
    t245 = cow_call_regs(g, COW_IMG(0x101c9440u), eax, g->ecx, g->edx, 1, 5, ebx, 1u, 1u, arg6, 1u);
    eax = t245;
    COW_AT(101f4ec0)
    wr32(sp0 - 0x178u, eax);
    wr32(sp0 - 0x17cu, arg4 + 4u);
    t246 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x180u, t246);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f4ee7u);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), rd32(sp0 + 0xcu), 7, t246, arg4 + 4u, eax, rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u));
    COW_AT(101f4ee7)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4ef7: ;
    COW_AT(101f4ef7)
    if ((int32_t)(ebx - 1u) < 0)
    {
    COW_AT(101f4f1b)
        eax = 0u;
        ecx = self;
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
L_101f4f1d: ;
    COW_AT(101f4f1d)
        t242 = rd8(COW_IMG(0x10382134u) + eax);
        wr8(eax + sp0 - 0x148u, (uint8_t)t242);
        if ((uint8_t)t242 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t242;
            loc_158 = rd32(sp0 - 0x158u);
            loc_15c = rd32(sp0 - 0x15cu);
            loc_160 = rd32(sp0 - 0x160u);
            loc_164 = rd32(sp0 - 0x164u);
            goto L_101f4f1d;
        }
    }
    else
    {
        ebx = ebx - 1u;
    COW_AT(101f4efc)
        wr32(sp0 - 0x168u, 1u);
        wr32(sp0 - 0x16cu, 1u);
        wr32(sp0 - 0x170u, ebx);
        g->ebx = ebx;
        g->edx = in_edx;
        g->esp = sp0 - 0x15cu;
        COW_RET(0x101f4f06u);
        t240 = cow_call_regs(g, COW_IMG(0x101c9440u), eax, g->ecx, g->edx, 1, 5, ebx, 1u, 1u, in_edi, in_esi);
        t241 = g->edx;
        eax = t240;
        edx = t241;
    COW_AT(101f4f06)
        wr32(sp0 - 0x174u, eax);
        wr32(sp0 - 0x178u, COW_IMG(0x1037f188u));
        wr32(sp0 - 0x17cu, sp0 - 0x148u);
        g->ebx = ebx;
        g->esp = sp0 - 0x168u;
        COW_RET(0x101f4f16u);
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x1037f188u), eax, rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu));
    COW_AT(101f4f16)
    }
    COW_AT(101f4f2c)
    wr32(sp0 - 0x168u, 0x3f800000u);
    wr32(sp0 - 0x16cu, 0x3f800000u);
    wr32(sp0 - 0x170u, 1u);
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg4 + 4u);
    t243 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x180u, t243);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f4f68u);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t243, 7, t243, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f4f68)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4f78: ;
    COW_AT(101f4f78)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    if (rd32(arg2 * 4u + self + 8u) == 0xfffffffeu) goto L_101f4ffa;
    esi = rd32(arg2 * 4u + self + 8u);
    COW_AT(101f4f85)
    if (esi == 0xffffffffu) goto L_101f4fc0;
    COW_AT(101f4f8a)
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, esi);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 0x3f800000u);
    t234 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x180u, t234);
    t235 = (uint32_t)(int16_t)rd16(sp0 + 0xcu);
    wr32(sp0 - 0x184u, t235);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f4fb3u);
    cow_thiscall(g, COW_IMG(0x1011fc80u), ebx, 8, t235, t234, 0x3f800000u, 0x3f800000u, esi, 0u, 0u, 0u);
    COW_AT(101f4fb3)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4fc0: ;
    COW_AT(101f4fc0)
    wr32(sp0 - 0x170u, 1u);
    wr32(sp0 - 0x174u, 0xffffffffu);
    wr32(sp0 - 0x178u, 0x3f666666u);
    wr32(sp0 - 0x17cu, 0x3f666666u);
    t236 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x180u, t236);
    t237 = (uint32_t)(int16_t)rd16(sp0 + 0xcu) - 4u;
    wr32(sp0 - 0x184u, t237);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f4fedu);
    cow_thiscall(g, COW_IMG(0x1011fc80u), ebx, 8, t237, t236, 0x3f666666u, 0x3f666666u, 0xffffffffu, 1u, 0u, 0u);
    COW_AT(101f4fed)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f4ffa: ;
    COW_AT(101f4ffa)
    wr32(sp0 - 0x170u, 1u);
    wr32(sp0 - 0x174u, 0x80808080u);
    wr32(sp0 - 0x178u, 0x3f666666u);
    wr32(sp0 - 0x17cu, 0x3f666666u);
    t238 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x180u, t238);
    t239 = (uint32_t)(int16_t)rd16(sp0 + 0xcu) - 4u;
    wr32(sp0 - 0x184u, t239);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f502au);
    cow_thiscall(g, COW_IMG(0x1011fc80u), ebx, 8, t239, t238, 0x3f666666u, 0x3f666666u, 0x80808080u, 1u, 0u, 0u);
    COW_AT(101f502a)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5037: ;
    COW_AT(101f5037)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0u);
    t231 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x174u, t231);
    wr32(sp0 - 0x178u, 0x3f4ccccdu);
    wr32(sp0 - 0x17cu, 0x3f4ccccdu);
    t232 = (uint32_t)(int16_t)arg4 + (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(ebx + 0x26u) - (uint32_t)(int16_t)rd16(ebx + 0x24u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(ebx + 0x26u) - (uint32_t)(int16_t)rd16(ebx + 0x24u)) >> 0x1fu)) >> 1u) + 2u;
    wr32(sp0 - 0x180u, t232);
    t233 = (uint32_t)(int16_t)rd16(sp0 + 0xcu) + (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(ebx + 0x22u) - (uint32_t)(int16_t)rd16(ebx + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(ebx + 0x22u) - (uint32_t)(int16_t)rd16(ebx + 0x20u)) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x184u, t233);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5089u);
    cow_thiscall(g, COW_IMG(0x1011fc80u), ebx, 8, t233, t232, 0x3f4ccccdu, 0x3f4ccccdu, t231, 0u, 0u, 0u);
    COW_AT(101f5089)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5096: ;
    COW_AT(101f5096)
    if (!(rd8(self + 0x50u) & 1u))
    {
        eax = rd32(arg2 * 4u + self + 8u);
        edx = rd32(sp0 + 0xcu);
        goto L_101f50cb;
    }
    eax = rd32(arg2 * 4u + self + 8u);
    edx = rd32(sp0 + 0xcu);
    COW_AT(101f50b2)
    wr32(sp0 - 0x168u, eax);
    wr32(sp0 - 0x16cu, ebx);
    wr32(sp0 - 0x170u, arg4 + 2u);
    wr32(sp0 - 0x174u, edx);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f50bbu);
    cow_cdecl(g, COW_IMG(0x101caa10u), 4, edx, arg4 + 2u, ebx, eax);
    COW_AT(101f50bb)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f50cb: ;
    COW_AT(101f50cb)
    wr32(sp0 - 0x168u, 0xffffffffu);
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, ebx);
    wr32(sp0 - 0x174u, arg4 + 2u);
    wr32(sp0 - 0x178u, edx);
    g->ebx = ebx;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f50d6u);
    cow_thiscall_cdecl(g, COW_IMG(0x101ca6c0u), arg4 + 2u, 5, edx, arg4 + 2u, ebx, eax, 0xffffffffu);
    COW_AT(101f50d6)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f50e6: ;
    COW_AT(101f50e6)
    wr32(sp0 - 0x168u, 0xffffffffu);
    t225 = rd8(ebx + 0x10u);
    wr8(sp0 - 0x28u, (uint8_t)t225);
    t226 = rd8(ebx + 0x11u);
    wr8(sp0 - 0x27u, (uint8_t)t226);
    t227 = rd8(ebx + 0x12u);
    wr8(sp0 - 0x26u, (uint8_t)t227);
    t228 = rd8(ebx + 0x13u);
    wr8(sp0 - 0x25u, (uint8_t)t228);
    wr8(sp0 - 0x2bu, rd8(ebx + 0x14u));
    t229 = rd32(arg2 * 4u + self + 8u);
    wr8(sp0 - 0x2au, rd8(ebx + 0x17u));
    wr8(sp0 - 0x2cu, rd8(ebx + 0x16u));
    wr32(sp0 - 0x16cu, t229);
    wr32(sp0 - 0x170u, sp0 - 0x48u);
    wr32(sp0 - 0x174u, arg4 + 2u);
    t230 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x178u, t230);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x48u, 0x40u);
    g->ebx = ebx;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5169u);
    cow_thiscall_cdecl(g, COW_IMG(0x101ca6c0u), t230, 5, t230, arg4 + 2u, sp0 - 0x48u, t229, 0xffffffffu);
    COW_AT(101f5169)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5179: ;
    COW_AT(101f5179)
    wr32(sp0 - 0x168u, 2u);
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5180u);
    t220 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t221 = g->ecx;
    eax = t220;
    ecx = t221;
    COW_AT(101f5180)
    if (rd8(arg2 + self) != 0x13u)
    {
        ebx = rd32(ebx * 4u + rd32(eax) + 0x300u);
        eax = 0u;
    }
    else
    {
        ebx = rd32(ebx * 4u + rd32(eax) + 0x300u);
    COW_AT(101f5196)
        eax = (uint32_t)(int16_t)arg5 + (uint32_t)(int16_t)rd16(ebx + 0x20u) - (uint32_t)(int16_t)rd16(ebx + 0x22u);
    }
    COW_AT(101f51aa)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    t222 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x170u, t222);
    t223 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x174u, t223);
    t224 = eax + (uint32_t)(int16_t)rd16(sp0 + 0xcu);
    wr32(sp0 - 0x178u, t224);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f51d1u);
    cow_thiscall(g, COW_IMG(0x1011fb60u), ebx, 5, t224, t223, t222, 0u, 0u);
    COW_AT(101f51d1)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f51de: ;
    COW_AT(101f51de)
    wr32(sp0 - 0x168u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f51e5u);
    t215 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    eax = t215;
    COW_AT(101f51e5)
    wr32(sp0 - 0x150u, eax);
    wr32(sp0 - 0x14cu, 0u);
    ebp = 0x94cu;
    loc_150 = eax;
    loc_14c = 0u;
L_101f51f9: ;
    COW_AT(101f51f9)
    if (rd32(ebp + rd32(loc_150)) != 0u)
    {
        eax = rd32(ebp + rd32(loc_150));
        pf = PARITY((uint8_t)rd32(ebp + rd32(loc_150)));
        zf = rd32(ebp + rd32(loc_150)) == 0u;
        sf = (int32_t)rd32(ebp + rd32(loc_150)) < 0;
    COW_AT(101f5206)
        if ((ebx & 1u << (loc_14c & 0x1fu)) != 0u)
        {
    COW_AT(101f5215)
            wr32(sp0 - 0x168u, 0u);
            wr32(sp0 - 0x16cu, 0u);
            t216 = rd32(arg2 * 4u + self + 8u);
            wr32(sp0 - 0x170u, t216);
            t217 = (uint32_t)(int16_t)arg4 + 5u;
            wr32(sp0 - 0x174u, t217);
            t218 = (uint32_t)(int16_t)rd16(sp0 + 0xcu);
            wr32(sp0 - 0x178u, t218);
            g->esp = sp0 - 0x164u;
            COW_RET(0x101f523au);
            cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, t218, t217, t216, 0u, 0u);
            loc_150 = rd32(sp0 - 0x150u);
            loc_14c = rd32(sp0 - 0x14cu);
        }
    }
    COW_AT(101f523a)
    t219 = rd32(sp0 + 0xcu) + 6u;
    wr32(sp0 + 0xcu, t219);
    wr32(sp0 - 0x14cu, loc_14c + 1u);
    if ((int32_t)(ebp + 4u) <= 2396)
    {
        ebp = ebp + 4u;
        loc_14c = loc_14c + 1u;
        goto L_101f51f9;
    }
    COW_AT(101f525f)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f526c: ;
    COW_AT(101f526c)
    eax = arg4;
    ecx = rd32(sp0 + 0xcu);
L_101f62a1: ;
    COW_AT(101f62a1)
    wr32(sp0 - 0x168u, 0u);
    t213 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x16cu, t213);
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, 0x3f000000u);
    wr32(sp0 - 0x178u, eax);
    wr32(sp0 - 0x17cu, ecx);
    t214 = (t213 & 0xffff0000u) | rd16(arg2 * 4u + self + 0x28u);
    wr32(sp0 - 0x180u, t214);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f62c2u);
    cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t214, ecx, eax, 0x3f000000u, 0u, t213, 0u);
    COW_AT(101f62c2)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f527f: ;
    COW_AT(101f527f)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0x80808080u);
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, 0x3f000000u);
    wr32(sp0 - 0x178u, arg4);
    t212 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x17cu, t212);
    wr32(sp0 - 0x180u, ebx);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f52a9u);
    cow_thiscall(g, COW_IMG(0x1015bdb0u), rd32(COW_IMG(0x10621808u)), 7, ebx, t212, arg4, 0x3f000000u, 0u, 0x80808080u, 0u);
    COW_AT(101f52a9)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f52b6: ;
    COW_AT(101f52b6)
    wr32(sp0 - 0x168u, arg4);
    t211 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x16cu, t211);
    wr32(sp0 - 0x170u, ebx);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f52d3u);
    cow_thiscall(g, COW_IMG(0x101f7120u), arg1, 3, ebx, t211, arg4);
    COW_AT(101f52d3)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f52e0: ;
    COW_AT(101f52e0)
    wr32(sp0 - 0x168u, 0x219u);
    wr32(sp0 - 0x16cu, 4u);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f52ecu);
    t203 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 4u, 0x219u);
    t204 = g->ecx;
    t205 = g->edx;
    eax = t203;
    ecx = t204;
    edx = t205;
    COW_AT(101f52ec)
    if (eax == 0u)
    {
        ebx = rd32(sp0 + 0xcu);
    }
    else
    {
        ebx = rd32(sp0 + 0xcu);
    COW_AT(101f5301)
        wr32(sp0 - 0x168u, 0u);
        wr32(sp0 - 0x16cu, 0u);
        wr32(sp0 - 0x170u, 0x80808080u);
        t206 = (uint32_t)(int16_t)arg4 + 2u;
        wr32(sp0 - 0x174u, t206);
        wr32(sp0 - 0x178u, (uint32_t)(int16_t)ebx);
        g->edx = (uint32_t)(int16_t)ebx;
        g->esp = sp0 - 0x164u;
        COW_RET(0x101f531cu);
        cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, (uint32_t)(int16_t)ebx, t206, 0x80808080u, 0u, 0u);
        t207 = g->ecx;
        t208 = g->edx;
        ecx = t207;
        edx = t208;
    }
    COW_AT(101f531c)
    wr32(sp0 - 0x168u, 0u);
    t209 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x16cu, t209);
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, 0x3f000000u);
    wr32(sp0 - 0x178u, arg4 + 2u);
    wr32(sp0 - 0x17cu, ebx);
    t210 = (ecx & 0xffff0000u) | rd16(arg2 * 4u + self + 0x28u);
    wr32(sp0 - 0x180u, t210);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5340u);
    cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t210, ebx, arg4 + 2u, 0x3f000000u, 0u, t209, 0u);
    COW_AT(101f5340)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f534d: ;
    COW_AT(101f534d)
    wr32(sp0 - 0x168u, 0x219u);
    wr32(sp0 - 0x16cu, 4u);
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5359u);
    t188 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 4u, 0x219u);
    t189 = g->ecx;
    eax = t188;
    ecx = t189;
    COW_AT(101f5359)
    if (eax == 0u)
    {
        ebx = rd32(sp0 + 0xcu);
    }
    else
    {
        ebx = rd32(sp0 + 0xcu);
    COW_AT(101f536e)
        wr32(sp0 - 0x168u, 0u);
        wr32(sp0 - 0x16cu, 0u);
        wr32(sp0 - 0x170u, 0x80808080u);
        t190 = (uint32_t)(int16_t)arg4 + 2u;
        wr32(sp0 - 0x174u, t190);
        wr32(sp0 - 0x178u, (uint32_t)(int16_t)ebx);
        g->esp = sp0 - 0x164u;
        COW_RET(0x101f5389u);
        cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, (uint32_t)(int16_t)ebx, t190, 0x80808080u, 0u, 0u);
        t191 = g->ecx;
        ecx = t191;
    }
    COW_AT(101f5389)
    wr32(sp0 - 0x168u, 0u);
    t192 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x16cu, t192);
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, 0x3f000000u);
    wr32(sp0 - 0x178u, arg4 + 2u);
    wr32(sp0 - 0x17cu, ebx);
    t193 = (ecx & 0xffff0000u) | rd16(arg2 * 4u + self + 0x28u);
    wr32(sp0 - 0x180u, t193);
    g->eax = arg4 + 2u;
    t194 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f53adu);
    t195 = cow_thiscall(g, COW_IMG(0x1015bd70u), t194, 7, t193, ebx, arg4 + 2u, 0x3f000000u, 0u, t192, 0u);
    t196 = g->ecx;
    eax = t195;
    ecx = t196;
    COW_AT(101f53ad)
    t197 = rd32(self + 0x48u);
    wr8(sp0 - 0x151u, 0xffu);
    wr8(sp0 - 0x152u, 0xffu);
    if (t197 == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    esi = t197;
    COW_AT(101f53c2)
    wr32(sp0 - 0x168u, 1u);
    wr32(sp0 - 0x16cu, sp0 - 0x152u);
    wr32(sp0 - 0x170u, sp0 - 0x151u);
    wr32(sp0 - 0x174u, 0u);
    g->eax = sp0 - 0x151u;
    g->edx = sp0 - 0x152u;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f53d5u);
    t198 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, sp0 - 0x151u, sp0 - 0x152u, 1u);
    t199 = g->ecx;
    t200 = g->edx;
    eax = t198;
    ecx = t199;
    edx = t200;
    COW_AT(101f53d5)
    if ((uint8_t)eax == 0u) goto L_101f5419;
    COW_AT(101f53dc)
    if (rd8(esi) != rd8(sp0 - 0x151u))
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x151u);
        goto L_101f5419;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x151u);
    ecx = (ecx & 0xffffff00u) | rd8(esi);
    COW_AT(101f53e6)
    if (rd8(esi + 1u) != rd8(sp0 - 0x152u))
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x152u);
        goto L_101f5419;
    }
    edx = (edx & 0xffffff00u) | rd8(esi + 1u);
    COW_AT(101f53f1)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, COW_IMG(0x10354010u));
    wr32(sp0 - 0x170u, arg4 + 1u);
    wr32(sp0 - 0x174u, ebx + 6u);
    g->esp = sp0 - 0x150u;
    COW_RET(0x101f5409u);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebx + 6u, arg4 + 1u, COW_IMG(0x10354010u), arg6, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    COW_AT(101f5409)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5419: ;
    COW_AT(101f5419)
    wr32(sp0 - 0x168u, 2u);
    wr32(sp0 - 0x16cu, sp0 - 0x152u);
    wr32(sp0 - 0x170u, sp0 - 0x151u);
    wr32(sp0 - 0x174u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f542cu);
    t201 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 0x152u, 4, 0u, sp0 - 0x151u, sp0 - 0x152u, 2u);
    t202 = g->ecx;
    eax = t201;
    ecx = t202;
    COW_AT(101f542c)
    if ((uint8_t)eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f5437)
    if (rd8(esi) != rd8(sp0 - 0x151u))
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x151u);
    COW_AT(101f5445)
    if (rd8(esi + 1u) != rd8(sp0 - 0x152u))
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x152u);
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    COW_AT(101f5454)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, COW_IMG(0x10357cccu));
    wr32(sp0 - 0x170u, arg4 + 1u);
    wr32(sp0 - 0x174u, ebx + 6u);
    g->esp = sp0 - 0x150u;
    COW_RET(0x101f546cu);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebx + 6u, arg4 + 1u, COW_IMG(0x10357cccu), arg6, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    COW_AT(101f546c)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f547c: ;
    COW_AT(101f547c)
    t184 = rd8(ebx + 0x16u);
    wr32(sp0 - 0x168u, t184);
    t185 = rd8(ebx + 0x17u);
    wr32(sp0 - 0x16cu, t185);
    t186 = rd16(ebx + 0x14u);
    wr32(sp0 - 0x170u, t186);
    wr32(sp0 - 0x174u, COW_IMG(0x10382128u));
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f549eu);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10382128u), t186, t185, t184);
    COW_AT(101f549e)
    wr32(sp0 - 0x17cu, arg6);
    wr32(sp0 - 0x180u, sp0 - 0x148u);
    wr32(sp0 - 0x184u, arg4 + 4u);
    t187 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x188u, t187);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f54c3u);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t187, arg4 + 4u, sp0 - 0x148u, arg6, rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u));
    COW_AT(101f54c3)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f54d3: ;
    COW_AT(101f54d3)
    wr32(sp0 - 0x168u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f54dfu);
    t182 = cow_thiscall(g, COW_IMG(0x1015bbd0u), rd32(COW_IMG(0x10621808u)), 1, ebx);
    eax = t182;
    COW_AT(101f54df)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f54e7)
    wr32(sp0 - 0x168u, arg6);
    eax = rd32(eax + 0x14c8u);
    loc_168 = arg6;
L_101f5d85: ;
    COW_AT(101f5d85)
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4);
    t183 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t183);
    wr32(sp0 - 0x178u, arg5 - 8u);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5dadu);
    cow_thiscall(g, rd32(rd32(arg1) + 0x68u), arg1, 5, arg5 - 8u, t183, arg4, eax, loc_168);
    COW_AT(101f5dad)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f54fa: ;
    COW_AT(101f54fa)
    wr32(sp0 - 0x168u, ebx);
    g->eax = eax;
    g->edx = in_edx;
    t158 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5506u);
    t159 = cow_thiscall(g, COW_IMG(0x1015bbd0u), t158, 1, ebx);
    t160 = g->ecx;
    t161 = g->edx;
    eax = t159;
    ecx = t160;
    edx = t161;
    COW_AT(101f5506)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    esi = eax;
    COW_AT(101f5510)
    if (rd32(esi + 0x14d0u) == 0u)
    {
        ebp = 0x80808080u;
    }
    else
    {
        eax = rd32(esi + 0x14d0u);
    COW_AT(101f551f)
        t162 = rd16(eax);
        if ((uint16_t)t162 == 0u)
        {
            ebp = 0x80808080u;
        }
        else
        {
    COW_AT(101f5525)
            wr32(sp0 - 0x168u, ebx);
            g->eax = eax;
            g->edx = edx;
            t163 = rd32(COW_IMG(0x105781a8u));
            g->esp = sp0 - 0x164u;
            COW_RET(0x101f5531u);
            t164 = cow_thiscall(g, COW_IMG(0x10131fa0u), t163, 1, ebx);
            t165 = g->ecx;
            t166 = g->edx;
            eax = t164;
            ecx = t165;
            edx = t166;
    COW_AT(101f5531)
            if ((uint8_t)eax == 0u)
            {
    COW_AT(101f553c)
                wr32(sp0 - 0x168u, esi);
                g->ebx = ebx;
                g->eax = eax;
                t167 = rd32(COW_IMG(0x105781a8u));
                g->esp = sp0 - 0x164u;
                COW_RET(0x101f5548u);
                t168 = cow_thiscall(g, COW_IMG(0x10132050u), t167, 1, esi);
                t169 = g->ecx;
                eax = t168;
                ecx = t169;
    COW_AT(101f5548)
                if ((uint8_t)eax == 0u)
                {
                    ebp = 0x80808080u;
                }
                else
                {
    COW_AT(101f554c)
                    ebp = 0x80909040u;
                }
            }
            else
            {
    COW_AT(101f5535)
                ebp = 0x80509050u;
            }
        }
    }
    COW_AT(101f5551)
    if (rd32(esi + 0x14b4u) == 0u) goto L_101f55bb;
    eax = rd32(esi + 0x14b4u);
    COW_AT(101f555b)
    t170 = rd16(eax);
    if ((uint16_t)t170 != 7u) goto L_101f55bb;
    COW_AT(101f5561)
    if (rd32(esi + 0x1554u) == 0u) goto L_101f55e5;
    eax = rd32(esi + 0x1554u);
    COW_AT(101f556b)
    if (rd8(eax) == 1u)
    {
        ecx = rd32(esi + 0x1558u);
        edx = rd8(eax);
        edi = (arg2 & 0xffff0000u) | rd16(rd32(esi + 0x1558u));
        goto L_101f5588;
    }
    ecx = rd32(esi + 0x1558u);
    edx = rd8(eax);
    eax = rd8(eax) - 1u;
    edi = (arg2 & 0xffff0000u) | rd16(rd32(esi + 0x1558u));
    COW_AT(101f557d)
    if (eax != 1u) goto L_101f55e5;
    eax = eax - 1u;
    COW_AT(101f5580)
    wr32(sp0 - 0x168u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5586u);
    t171 = cow_thiscall_cdecl(g, COW_IMG(0x10223360u), ecx, 1, edi);
    eax = t171;
    COW_AT(101f5586)
L_101f55d9: ;
    COW_AT(101f55d9)
    if ((uint8_t)eax == 0u) goto L_101f55e5;
L_101f55e0: ;
    COW_AT(101f55e0)
    ebp = 0x80509050u;
L_101f55e5: ;
    COW_AT(101f55e5)
    wr32(sp0 - 0x168u, ebp);
    t180 = rd32(esi + 0x14c8u);
    wr32(sp0 - 0x16cu, t180);
    wr32(sp0 - 0x170u, arg4);
    t181 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t181);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5609u);
    cow_thiscall(g, rd32(rd32(arg1) + 0x60u), arg1, 4, t181, arg4, t180, ebp);
    COW_AT(101f5609)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5588: ;
    COW_AT(101f5588)
    wr32(sp0 - 0x168u, 1u);
    wr32(sp0 - 0x16cu, edi);
    t172 = rd32(esi + 0x14c8u);
    wr32(sp0 - 0x170u, t172);
    g->eax = t172;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5597u);
    t173 = cow_call_regs(g, COW_IMG(0x1022b680u), g->eax, ecx, edx, 1, 3, t172, edi, 1u);
    t174 = g->edx;
    eax = t173;
    edx = t174;
    COW_AT(101f5597)
    if ((uint8_t)eax != 0u) goto L_101f55e0;
    COW_AT(101f559e)
    wr32(sp0 - 0x168u, 1u);
    wr32(sp0 - 0x16cu, edi);
    t175 = rd32(esi + 0x14c8u);
    wr32(sp0 - 0x170u, t175);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f55adu);
    t176 = cow_call_regs(g, COW_IMG(0x1022b570u), g->eax, t175, edx, 1, 3, t175, edi, 1u);
    eax = t176;
    COW_AT(101f55ad)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101f55b4)
        ebp = 0x80909040u;
    }
    goto L_101f55e5;
L_101f55bb: ;
    COW_AT(101f55bb)
    if (rd32(esi + 0x1554u) == 0u) goto L_101f55e5;
    eax = rd32(esi + 0x1554u);
    COW_AT(101f55c5)
    t177 = rd8(eax);
    if ((uint8_t)t177 != 3u) goto L_101f55e5;
    COW_AT(101f55ca)
    t178 = (eax & 0xffff0000u) | rd16(rd32(esi + 0x1558u));
    wr32(sp0 - 0x168u, t178);
    g->ebx = ebx;
    g->edi = arg2;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f55d9u);
    t179 = cow_call_regs(g, COW_IMG(0x102092b0u), t178, g->ecx, rd32(esi + 0x1558u), 1, 1, t178);
    eax = t179;
    goto L_101f55d9;
L_101f5616: ;
    COW_AT(101f5616)
    wr32(sp0 - 0x168u, ebx);
    g->eax = eax;
    g->edx = in_edx;
    t153 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5622u);
    t154 = cow_thiscall(g, COW_IMG(0x1015bbd0u), t153, 1, ebx);
    t155 = g->ecx;
    t156 = g->edx;
    eax = t154;
    ecx = t155;
    edx = t156;
    COW_AT(101f5622)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f562a)
    if (rd32(eax + 0x14c0u) == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    eax = rd32(eax + 0x14c0u);
    COW_AT(101f5638)
    if (rd16(eax) <= 1u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    ecx = (ecx & 0xffffff00u) | rd16(eax) > 1u;
    eax = (eax & 0xffff0000u) | rd16(eax);
    COW_AT(101f564a)
    wr32(sp0 - 0x168u, (uint16_t)eax);
    wr32(sp0 - 0x16cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f565fu);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10352ff0u), (uint16_t)eax, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    COW_AT(101f565f)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t157 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x18cu, t157);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f569bu);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), rd32(sp0 + 0xcu), 7, t157, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f569b)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f56ab: ;
    COW_AT(101f56ab)
    if (rd32(COW_IMG(0x106218fcu)) == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    eax = rd32(COW_IMG(0x106218fcu));
    COW_AT(101f56b8)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, ebx - 1u);
    t148 = rd32(arg1);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f56d0u);
    t149 = cow_call_regs(g, COW_IMG(0x1022bda0u), eax, arg6, in_edx, 1, 2, ebx - 1u, arg6);
    t150 = g->edx;
    eax = t149;
    edx = t150;
    edi = t148;
    COW_AT(101f56d0)
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f56d7u);
    t151 = cow_thiscall(g, COW_IMG(0x1022bf00u), eax, 1, rd32(sp0 - 0x16cu));
    eax = t151;
    COW_AT(101f56d7)
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4);
    t152 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t152);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f56edu);
    cow_thiscall(g, rd32(edi + 0x60u), arg1, 4, t152, arg4, eax, rd32(sp0 - 0x168u));
    COW_AT(101f56ed)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f56fa: ;
    COW_AT(101f56fa)
    wr32(sp0 - 0x168u, ebx - 1u);
    wr32(sp0 - 0x16cu, 5u);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5703u);
    t144 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 5u, ebx - 1u);
    eax = t144;
    COW_AT(101f5703)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f570e)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    t145 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x170u, t145);
    t146 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x174u, t146);
    t147 = (uint32_t)(int16_t)rd16(sp0 + 0xcu);
    wr32(sp0 - 0x178u, t147);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5733u);
    cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, t147, t146, t145, 0u, 0u);
    COW_AT(101f5733)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5740: ;
    COW_AT(101f5740)
    if (rd32(COW_IMG(0x106218fcu)) == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    ecx = rd32(COW_IMG(0x106218fcu));
    COW_AT(101f574e)
    wr32(sp0 - 0x168u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5754u);
    t142 = cow_thiscall(g, COW_IMG(0x10161070u), ecx, 1, ebx);
    eax = t142;
    COW_AT(101f5754)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f575c)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4);
    t143 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t143);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5781u);
    cow_thiscall(g, rd32(rd32(arg1) + 0x60u), arg1, 4, t143, arg4, eax, arg6);
    COW_AT(101f5781)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f578e: ;
    COW_AT(101f578e)
    if (ebx == 1u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    ebx = ebx - 1u;
    COW_AT(101f5797)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, 0x5au);
    wr32(sp0 - 0x170u, 0xcu);
    g->eax = eax;
    g->ecx = arg4;
    g->edx = in_edx;
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f57b2u);
    t135 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5au);
    t136 = g->ecx;
    t137 = g->edx;
    eax = t135;
    ecx = t136;
    edx = t137;
    COW_AT(101f57b2)
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4 + 4u);
    t138 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t138);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x150u;
    COW_RET(0x101f57c4u);
    t139 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t138, arg4 + 4u, eax, rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    t140 = g->ecx;
    eax = t139;
    ecx = t140;
    ebp = t138;
    COW_AT(101f57c4)
    wr32(sp0 - 0x178u, ebx);
    wr32(sp0 - 0x17cu, COW_IMG(0x103719dcu));
    wr32(sp0 - 0x180u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x16cu;
    COW_RET(0x101f57d4u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x103719dcu), ebx, rd32(sp0 - 0x174u), rd32(sp0 - 0x170u));
    COW_AT(101f57d4)
    wr32(sp0 - 0x184u, 0x3f800000u);
    wr32(sp0 - 0x188u, 0x3f800000u);
    wr32(sp0 - 0x18cu, 1u);
    wr32(sp0 - 0x190u, arg6);
    wr32(sp0 - 0x194u, sp0 - 0x148u);
    wr32(sp0 - 0x198u, arg4 + 4u);
    t141 = arg5 + ebp - 2u;
    wr32(sp0 - 0x19cu, t141);
    eax = sp0 - 0x148u;
    ecx = arg5;
    edx = t141;
    loc_19c = t141;
L_101f655e: ;
    COW_AT(101f655e)
    g->esp = sp0 - 0x180u;
    COW_RET(0x101f6563u);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ecx, 7, loc_19c, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f6563)
    loc_158 = rd32(sp0 - 0x158u);
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
L_101f6566: ;
    COW_AT(101f6566)
    g->ebx = loc_158;
    g->esi = loc_160;
    g->edi = loc_164;
    g->ebp = loc_15c;
    return;
L_101f57f8: ;
    COW_AT(101f57f8)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0u);
    t133 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x174u, t133);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 0x3f800000u);
    wr32(sp0 - 0x180u, (uint32_t)(int16_t)arg4);
    t134 = (uint32_t)(int16_t)rd16(sp0 + 0xcu) - 3u;
    wr32(sp0 - 0x184u, t134);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5829u);
    cow_thiscall(g, COW_IMG(0x1011fc80u), ebx, 8, t134, (uint32_t)(int16_t)arg4, 0x3f800000u, 0x3f800000u, t133, 0u, 0u, 0u);
    COW_AT(101f5829)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5836: ;
    COW_AT(101f5836)
    wr32(sp0 - 0x168u, ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x10382120u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f5846u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10382120u), ebx, in_edi, in_esi);
    COW_AT(101f5846)
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg4 + 2u);
    t132 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x180u, t132);
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f586bu);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t132, arg4 + 2u, sp0 - 0x148u, arg6, rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    COW_AT(101f586b)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f587b: ;
    COW_AT(101f587b)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, ebx);
    wr32(sp0 - 0x170u, arg4 + 2u);
    t131 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t131);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f589cu);
    cow_cdecl(g, COW_IMG(0x101ca180u), 4, t131, arg4 + 2u, ebx, arg6);
    COW_AT(101f589c)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f58ac: ;
    COW_AT(101f58ac)
    wr32(sp0 - 0x168u, ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f58bcu);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x1034f7e0u), ebx, in_edi, in_esi);
    COW_AT(101f58bc)
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg4 + 2u);
    t130 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x180u, t130);
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f58e1u);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t130, arg4 + 2u, sp0 - 0x148u, arg6, rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    COW_AT(101f58e1)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f58f1: ;
    COW_AT(101f58f1)
    wr32(sp0 - 0x168u, ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x1038211cu));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f5901u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x1038211cu), ebx, in_edi, in_esi);
    COW_AT(101f5901)
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg4 + 2u);
    t126 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x180u, t126);
    wr32(sp0 - 0x184u, arg5 - 0xeu);
    g->eax = sp0 - 0x148u;
    g->ecx = t126;
    g->edx = arg5 - 0xeu;
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f5931u);
    t127 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, arg5 - 0xeu, t126, arg4 + 2u, sp0 - 0x148u, arg6);
    t128 = g->ecx;
    t129 = g->edx;
    eax = t127;
    ecx = t128;
    edx = t129;
    COW_AT(101f5931)
    wr32(sp0 - 0x188u, arg6);
    wr32(sp0 - 0x18cu, COW_IMG(0x10353df4u));
    wr32(sp0 - 0x190u, arg4 + 2u);
    wr32(sp0 - 0x194u, eax);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f593eu);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, eax, arg4 + 2u, COW_IMG(0x10353df4u), arg6, rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u));
    COW_AT(101f593e)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f594e: ;
    COW_AT(101f594e)
    wr32(sp0 - 0x168u, ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x10382118u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f595eu);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10382118u), ebx, in_edi, in_esi);
    COW_AT(101f595e)
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg4 + 4u);
    t122 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x180u, t122);
    wr32(sp0 - 0x184u, arg5 - 0xeu);
    g->eax = t122;
    g->ecx = arg5 - 0xeu;
    g->edx = sp0 - 0x148u;
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f598eu);
    t123 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, arg5 - 0xeu, t122, arg4 + 4u, sp0 - 0x148u, arg6);
    t124 = g->ecx;
    t125 = g->edx;
    eax = t123;
    ecx = t124;
    edx = t125;
    COW_AT(101f598e)
    wr32(sp0 - 0x188u, arg6);
    wr32(sp0 - 0x18cu, COW_IMG(0x10353e10u));
    wr32(sp0 - 0x190u, arg4 + 4u);
    wr32(sp0 - 0x194u, eax);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f599bu);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, eax, arg4 + 4u, COW_IMG(0x10353e10u), arg6, rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u));
    COW_AT(101f599b)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f59ab: ;
    COW_AT(101f59ab)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, ebx);
    wr32(sp0 - 0x170u, arg4 + 2u);
    t121 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t121);
    wr32(sp0 - 0x178u, arg5 - 8u);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f59d7u);
    cow_cdecl(g, COW_IMG(0x101c9d50u), 5, arg5 - 8u, t121, arg4 + 2u, ebx, arg6);
    COW_AT(101f59d7)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f59e7: ;
    COW_AT(101f59e7)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, arg6);
    wr32(sp0 - 0x170u, ebx);
    wr32(sp0 - 0x174u, arg4 + 2u);
    t120 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x178u, t120);
    wr32(sp0 - 0x17cu, arg5 - 8u);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5a15u);
    cow_thiscall_cdecl(g, COW_IMG(0x101ca250u), arg4 + 2u, 6, arg5 - 8u, t120, arg4 + 2u, ebx, arg6, 0u);
    COW_AT(101f5a15)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5a25: ;
    COW_AT(101f5a25)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 1u);
    wr32(sp0 - 0x170u, arg6);
    wr32(sp0 - 0x174u, ebx);
    wr32(sp0 - 0x178u, arg4 + 2u);
    t119 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x17cu, t119);
    wr32(sp0 - 0x180u, arg5 - 8u);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5a55u);
    cow_cdecl(g, COW_IMG(0x101c9fa0u), 7, arg5 - 8u, t119, arg4 + 2u, ebx, arg6, 1u, 0u);
    COW_AT(101f5a55)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5a65: ;
    COW_AT(101f5a65)
    if ((rd32(ebx + 0x30u) & 8u) == 0u)
    {
        eax = rd32(ebx + 0x30u);
    COW_AT(101f5a73)
        if ((eax >> 8u & 0x20u) != 0u)
        {
            eax = rd32(COW_IMG(0x104e1b9cu));
        }
        else
        {
    COW_AT(101f5a7d)
            eax = 0x80808080u;
        }
    }
    else
    {
    COW_AT(101f5a6c)
        eax = rd32(COW_IMG(0x104e1bacu));
    }
    COW_AT(101f5a82)
    wr32(sp0 - 0x168u, eax);
    wr32(sp0 - 0x16cu, ebx + 4u);
    wr32(sp0 - 0x170u, arg4 + 2u);
    t118 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t118);
    wr32(sp0 - 0x178u, arg5 - 8u);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5aaau);
    cow_cdecl(g, COW_IMG(0x101c9d50u), 5, arg5 - 8u, t118, arg4 + 2u, ebx + 4u, eax);
    COW_AT(101f5aaa)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5aba: ;
    COW_AT(101f5aba)
    wr32(sp0 - 0x168u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5ac6u);
    t117 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, ebx);
    eax = t117;
    COW_AT(101f5ac6)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f5ace)
    wr32(sp0 - 0x168u, arg6);
    eax = rd32(eax + 0x1538u);
    loc_168 = arg6;
    goto L_101f5d85;
L_101f5ae1: ;
    COW_AT(101f5ae1)
    g->edx = in_edx;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5ae6u);
    t106 = cow_call_regs(g, COW_IMG(0x10087b20u), eax, g->ecx, g->edx, 1, 0);
    t107 = g->edx;
    eax = t106;
    edx = t107;
    COW_AT(101f5ae6)
    if ((uint8_t)eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f5aee)
    t108 = rd32(arg2 * 4u + self + 0x28u);
    wr32(sp0 - 0x168u, t108);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5afeu);
    t109 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t108);
    eax = t109;
    COW_AT(101f5afe)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f5b06)
    if (rd32(eax + 0x153cu) == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    eax = rd32(eax + 0x153cu);
    COW_AT(101f5b14)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, COW_IMG(0x10382114u));
    wr32(sp0 - 0x170u, arg4 + 4u);
    t110 = rd32(sp0 + 0xcu) - 0x20u;
    wr32(sp0 - 0x174u, t110);
    t111 = rd8(COW_IMG(0x10482fecu) + rd16(eax));
    g->eax = arg4;
    g->ecx = t110;
    t112 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x150u;
    COW_RET(0x101f5b4bu);
    t113 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t110, arg4 + 4u, COW_IMG(0x10382114u), arg6, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    t114 = g->ecx;
    eax = t113;
    ecx = t114;
    ebp = t112;
    edi = t111;
    COW_AT(101f5b4b)
    wr32(sp0 - 0x178u, edi);
    wr32(sp0 - 0x17cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x180u, sp0 - 0x148u);
    g->ebx = arg6;
    g->ecx = ecx;
    g->edx = sp0 - 0x148u;
    g->esp = sp0 - 0x16cu;
    COW_RET(0x101f5b5bu);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10352ff0u), edi, rd32(sp0 - 0x174u), rd32(sp0 - 0x170u));
    t115 = g->ecx;
    t116 = g->edx;
    ecx = t115;
    edx = t116;
    COW_AT(101f5b5b)
    wr32(sp0 - 0x184u, 0x3f800000u);
    wr32(sp0 - 0x188u, 0x3f800000u);
    wr32(sp0 - 0x18cu, 1u);
    wr32(sp0 - 0x190u, arg6);
    wr32(sp0 - 0x194u, sp0 - 0x148u);
    eax = sp0 - 0x148u;
L_101f655c: ;
    COW_AT(101f655c)
    wr32(sp0 - 0x198u, arg4 + 4u);
    wr32(sp0 - 0x19cu, ebp);
    loc_19c = ebp;
    goto L_101f655e;
L_101f5b72: ;
    COW_AT(101f5b72)
    ecx = rd16(ebx * 0x30u + rd32(COW_IMG(0x1066714cu)) + 4u);
    edx = rd8(ebx * 0x30u + rd32(COW_IMG(0x1066714cu)) + 3u);
L_101f5bcb: ;
    COW_AT(101f5bcb)
    wr32(sp0 - 0x168u, ecx);
    wr32(sp0 - 0x16cu, edx);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5bd2u);
    t104 = cow_cdecl(g, COW_IMG(0x10220d40u), 2, edx, ecx);
    eax = t104;
    COW_AT(101f5bd2)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f5bdd)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0x80808080u);
    wr32(sp0 - 0x174u, (uint32_t)(int16_t)arg4);
    t105 = (uint32_t)(int16_t)rd16(sp0 + 0xcu);
    wr32(sp0 - 0x178u, t105);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5bffu);
    cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, t105, (uint32_t)(int16_t)arg4, 0x80808080u, 0u, 0u);
    COW_AT(101f5bff)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5b8d: ;
    COW_AT(101f5b8d)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, ebx);
    t99 = rd32(arg1);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5ba4u);
    t100 = cow_call_regs(g, COW_IMG(0x10223930u), arg6, self, in_edx, 1, 2, ebx, arg6);
    t101 = g->edx;
    eax = t100;
    edx = t101;
    edi = t99;
    COW_AT(101f5ba4)
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f5babu);
    t102 = cow_stdcall(g, COW_IMG(0x10223b10u), 1, rd32(sp0 - 0x16cu));
    eax = t102;
    COW_AT(101f5bab)
L_101f5d0f: ;
    COW_AT(101f5d0f)
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4);
    t103 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t103);
    wr32(sp0 - 0x178u, arg5 - 8u);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5d30u);
    cow_thiscall(g, rd32(edi + 0x68u), arg1, 5, arg5 - 8u, t103, arg4, eax, rd32(sp0 - 0x168u));
    COW_AT(101f5d30)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5bb0: ;
    COW_AT(101f5bb0)
    eax = ebx * 0x64u + rd32(COW_IMG(0x10667a74u));
    ecx = rd16(ebx * 0x64u + rd32(COW_IMG(0x10667a74u)) + 0x42u);
    edx = rd16(ebx * 0x64u + rd32(COW_IMG(0x10667a74u)) + 0x40u);
    goto L_101f5bcb;
L_101f5c0c: ;
    COW_AT(101f5c0c)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, ebx);
    t95 = rd32(arg1);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5c23u);
    t96 = cow_call_regs(g, COW_IMG(0x1022bda0u), arg6, self, in_edx, 1, 2, ebx, arg6);
    t97 = g->edx;
    eax = t96;
    edx = t97;
    edi = t95;
    COW_AT(101f5c23)
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f5c2au);
    t98 = cow_thiscall(g, COW_IMG(0x1022bf00u), eax, 1, rd32(sp0 - 0x16cu));
    eax = t98;
    COW_AT(101f5c2a)
    goto L_101f5d0f;
L_101f5c2f: ;
    COW_AT(101f5c2f)
    if ((int32_t)rd32(ebx + 8u) >= 0)
    {
        ecx = rd32(ebx + 8u);
        goto L_101f5cf3;
    }
    ecx = rd32(ebx + 8u);
    COW_AT(101f5c3a)
    if ((int32_t)rd32(ebx) < 0) goto L_101f5ceb;
    eax = rd32(ebx);
    COW_AT(101f5c44)
    wr32(sp0 - 0x168u, eax);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5c4au);
    t85 = cow_cdecl(g, COW_IMG(0x1020a3f0u), 1, eax);
    t86 = g->edx;
    eax = t85;
    edx = t86;
    COW_AT(101f5c4a)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, (uint8_t)eax);
    wr32(sp0 - 0x170u, 0x13u);
    wr32(sp0 - 0x150u, rd32(arg1));
    g->eax = (uint8_t)eax;
    t87 = rd32(arg1);
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f5c6fu);
    t88 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x13u, (uint8_t)eax);
    eax = t88;
    COW_AT(101f5c6f)
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4);
    t89 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t89);
    wr32(sp0 - 0x178u, arg5 - 8u);
    g->edx = arg5 - 8u;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5c97u);
    cow_thiscall(g, rd32(rd32(sp0 - 0x150u) + 0x68u), arg1, 5, arg5 - 8u, t89, arg4, eax, rd32(sp0 - 0x168u));
    t90 = g->edx;
    edx = t90;
    COW_AT(101f5c97)
    t91 = rd32(ebx + 4u);
    wr32(sp0 - 0x168u, t91);
    wr32(sp0 - 0x16cu, COW_IMG(0x1036fe18u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f5caau);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x1036fe18u), t91, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    COW_AT(101f5caa)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t92 = arg5 + rd32(sp0 + 0xcu) + 0x94u;
    wr32(sp0 - 0x18cu, t92);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f5cdbu);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg5, 7, t92, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f5cdb)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5ceb: ;
    COW_AT(101f5ceb)
    if ((int32_t)ecx < 0)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
L_101f5cf3: ;
    COW_AT(101f5cf3)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, ecx);
    wr32(sp0 - 0x170u, 0x14u);
    g->eax = arg6;
    t93 = rd32(arg1);
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f5d0cu);
    t94 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, ecx);
    eax = t94;
    edi = t93;
    COW_AT(101f5d0c)
    goto L_101f5d0f;
L_101f5d3d: ;
    COW_AT(101f5d3d)
    wr32(sp0 - 0x168u, ebx);
    g->eax = eax;
    g->edx = in_edx;
    t76 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5d49u);
    t77 = cow_thiscall(g, COW_IMG(0x1015bbd0u), t76, 1, ebx);
    t78 = g->ecx;
    t79 = g->edx;
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(101f5d49)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    ebp = eax;
    COW_AT(101f5d53)
    g->esi = rd32(self + 0x48u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t80 = rd32(self + 0x48u);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5d62u);
    t81 = cow_stdcall(g, COW_IMG(0x10144620u), 0);
    t82 = g->ecx;
    t83 = g->edx;
    eax = t81;
    ecx = t82;
    edx = t83;
    esi = t80;
    COW_AT(101f5d62)
    wr32(sp0 - 0x168u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5d6au);
    t84 = cow_cdecl(g, COW_IMG(0x10141ed0u), 1, esi);
    edi = eax;
    eax = t84;
    COW_AT(101f5d6a)
    if ((int32_t)edi >= (int32_t)eax)
    {
        ebx = arg6;
    }
    else
    {
    COW_AT(101f5d71)
        if (arg6 != 0x80808080u)
        {
            ebx = arg6;
        }
        else
        {
    COW_AT(101f5d79)
            ebx = 0x80404040u;
        }
    }
    COW_AT(101f5d7e)
    wr32(sp0 - 0x168u, ebx);
    eax = rd32(ebp + 0x14c8u);
    loc_168 = ebx;
    goto L_101f5d85;
L_101f5dba: ;
    COW_AT(101f5dba)
    wr32(sp0 - 0x168u, arg6);
    t72 = rd32(self + 0x48u);
    wr32(sp0 - 0x16cu, t72);
    g->eax = eax;
    t73 = rd32(arg1);
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f5dd4u);
    t74 = cow_cdecl(g, COW_IMG(0x10144670u), 1, t72);
    eax = t74;
    ebx = t73;
    COW_AT(101f5dd4)
L_101f5e18: ;
    COW_AT(101f5e18)
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4);
    t75 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t75);
    wr32(sp0 - 0x178u, arg5 - 8u);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5e39u);
    cow_thiscall(g, rd32(ebx + 0x68u), arg1, 5, arg5 - 8u, t75, arg4, eax, rd32(sp0 - 0x168u));
    COW_AT(101f5e39)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5dd9: ;
    COW_AT(101f5dd9)
    t68 = rd8(arg2 * 4u + self + 0x28u);
    t69 = rd32(arg1);
    t70 = rd32(self + 0x48u);
    wr8(sp0 - 0x150u, (uint8_t)(t68 - 1u));
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, t70);
    if ((int32_t)(rd32(sp0 - 0x150u) & 1u) >= 0)
    {
        ecx = rd32(sp0 - 0x150u) & 1u;
        edx = (in_edx & 0xffffff00u) | (uint8_t)(t68 - 1u);
        ebx = t69;
        loc_16c = t70;
    }
    else
    {
        ecx = rd32(sp0 - 0x150u) & 1u;
        edx = (in_edx & 0xffffff00u) | (uint8_t)(t68 - 1u);
        ebx = t69;
        loc_16c = t70;
    COW_AT(101f5e0a)
        ecx = (ecx - 1u | 0xfffffffeu) + 1u;
    }
    COW_AT(101f5e0f)
    wr32(sp0 - 0x170u, ecx);
    g->eax = arg6;
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f5e15u);
    t71 = cow_cdecl(g, COW_IMG(0x10142070u), 2, ecx, loc_16c);
    eax = t71;
    COW_AT(101f5e15)
    goto L_101f5e18;
L_101f5e46: ;
    COW_AT(101f5e46)
    t64 = (in_edx & 0xffffff00u) | rd8(rd32(self + 0x48u) + 4u);
    wr32(sp0 - 0x168u, t64);
    t65 = (eax & 0xffff0000u) | rd16(rd32(self + 0x48u));
    wr32(sp0 - 0x16cu, t65);
    g->ebx = ebx;
    g->eax = t65;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5e56u);
    t66 = cow_cdecl(g, COW_IMG(0x1020e820u), 2, t65, t64);
    eax = t66;
    COW_AT(101f5e56)
    wr32(sp0 - 0x170u, arg6);
    wr32(sp0 - 0x174u, eax);
    wr32(sp0 - 0x178u, arg4 + 2u);
    t67 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x17cu, t67);
    g->esp = sp0 - 0x158u;
    COW_RET(0x101f5e77u);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t67, arg4 + 2u, eax, arg6, rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu));
    COW_AT(101f5e77)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5e87: ;
    COW_AT(101f5e87)
    if (rd32(COW_IMG(0x10578428u)) == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    ecx = rd32(COW_IMG(0x10578428u));
    COW_AT(101f5e95)
    t61 = (in_edx & 0xffff0000u) | rd16(arg2 * 4u + self + 0x28u);
    wr32(sp0 - 0x168u, t61);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5ea0u);
    t62 = cow_thiscall(g, COW_IMG(0x10161250u), ecx, 1, t61);
    eax = t62;
    COW_AT(101f5ea0)
L_101f6437: ;
    COW_AT(101f6437)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f643f)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4);
    t63 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t63);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f6464u);
    cow_thiscall(g, rd32(rd32(arg1) + 0x60u), arg1, 4, t63, arg4, eax, arg6);
    COW_AT(101f6464)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5ea5: ;
    COW_AT(101f5ea5)
    if (rd32(COW_IMG(0x10621900u)) == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    ecx = rd32(COW_IMG(0x10621900u));
    COW_AT(101f5eb3)
    wr32(sp0 - 0x168u, ebx - 1u);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5ebau);
    t59 = cow_thiscall(g, COW_IMG(0x101614c0u), ecx, 1, ebx - 1u);
    eax = t59;
    COW_AT(101f5eba)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f5ec2)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4);
    t60 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t60);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5ee7u);
    cow_thiscall(g, rd32(rd32(arg1) + 0x60u), arg1, 4, t60, arg4, eax, arg6);
    COW_AT(101f5ee7)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5ef4: ;
    COW_AT(101f5ef4)
    wr32(sp0 - 0x168u, ebx - 1u);
    wr32(sp0 - 0x16cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx - 1u;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f5f05u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10352ff0u), ebx - 1u, in_edi, in_esi);
    COW_AT(101f5f05)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t58 = rd32(sp0 + 0xcu) + 0x34u;
    wr32(sp0 - 0x18cu, t58);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f5f39u);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg4 + 4u, 7, t58, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f5f39)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5f49: ;
    COW_AT(101f5f49)
    wr32(sp0 - 0x168u, (uint8_t)ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f5f60u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10352ff0u), (uint8_t)ebx, in_edi, in_esi);
    COW_AT(101f5f60)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t50 = arg5 + rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18cu, t50);
    g->eax = arg5;
    g->edx = t50;
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f5f9au);
    t51 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg4 + 4u, 7, t50, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    t52 = g->ecx;
    t53 = g->edx;
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(101f5f9a)
    wr32(sp0 - 0x190u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x18cu;
    COW_RET(0x101f5fa1u);
    t54 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    eax = t54;
    COW_AT(101f5fa1)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    t55 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x170u, t55);
    t56 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x174u, t56);
    t57 = (uint32_t)(int16_t)arg5 + (uint32_t)(int16_t)rd16(sp0 + 0xcu) + (uint32_t)(int16_t)rd16(rd32(rd32(eax) + (uint8_t)(ebx >> 8u) * 4u + 0x350u) + 0x20u) - (uint32_t)(int16_t)rd16(rd32(rd32(eax) + (uint8_t)(ebx >> 8u) * 4u + 0x350u) + 0x22u) - 0x18u;
    wr32(sp0 - 0x178u, t57);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f5fe7u);
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(eax) + (uint8_t)(ebx >> 8u) * 4u + 0x350u), 5, t57, t56, t55, 0u, 0u);
    COW_AT(101f5fe7)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f5ff4: ;
    COW_AT(101f5ff4)
    if (ebx == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    COW_AT(101f5ffc)
    t44 = rd16(ebx);
    if ((uint16_t)t44 == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    COW_AT(101f6006)
    t45 = (eax & 0xffff0000u) | rd16(ebx + 8u);
    wr32(sp0 - 0x168u, t45);
    g->eax = t45;
    g->edx = in_edx;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f6010u);
    t46 = cow_cdecl(g, COW_IMG(0x101d8a80u), 1, t45);
    t47 = g->edx;
    eax = t46;
    edx = t47;
    COW_AT(101f6010)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f601b)
    wr32(sp0 - 0x168u, eax);
    wr32(sp0 - 0x16cu, COW_IMG(0x1037f16cu));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f602bu);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x1037f16cu), eax, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    COW_AT(101f602b)
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, 0u);
    wr32(sp0 - 0x17cu, sp0 - 0x148u);
    t48 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x180u, t48);
    t49 = (uint32_t)(int16_t)rd16(sp0 + 0xcu);
    wr32(sp0 - 0x184u, t49);
    g->esp = sp0 - 0x158u;
    COW_RET(0x101f6054u);
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t49, t48, sp0 - 0x148u, 0u, arg6, rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu));
    COW_AT(101f6054)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f6064: ;
    COW_AT(101f6064)
    wr32(sp0 - 0x168u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f6070u);
    t40 = cow_thiscall(g, COW_IMG(0x1015bbd0u), rd32(COW_IMG(0x10621808u)), 1, ebx);
    eax = t40;
    COW_AT(101f6070)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f6078)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, 0u);
    t41 = rd32(eax + 0x14c8u);
    wr32(sp0 - 0x170u, t41);
    t42 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x174u, t42);
    t43 = (uint32_t)(int16_t)rd16(sp0 + 0xcu) + 0x34u;
    wr32(sp0 - 0x178u, t43);
    g->esp = sp0 - 0x14cu;
    COW_RET(0x101f60a6u);
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t43, t42, t41, 0u, arg6, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    COW_AT(101f60a6)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f60b6: ;
    COW_AT(101f60b6)
    if (ebx == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    COW_AT(101f60be)
    t38 = rd16(ebx);
    if ((uint16_t)t38 == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    COW_AT(101f60c8)
    if (rd8(ebx + 0xau) == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    ebx = (ebx & 0xffffff00u) | rd8(ebx + 0xau);
    COW_AT(101f60d3)
    wr32(sp0 - 0x168u, (uint8_t)ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = (uint8_t)ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f60e9u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10352ff0u), (uint8_t)ebx, in_edi, in_esi);
    COW_AT(101f60e9)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t39 = rd32(sp0 + 0xcu) + 0x80u;
    wr32(sp0 - 0x18cu, t39);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f611fu);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x148u, 7, t39, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f611f)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f612f: ;
    COW_AT(101f612f)
    if (ebx == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    COW_AT(101f6137)
    t35 = rd16(ebx);
    if ((uint16_t)t35 == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    COW_AT(101f6141)
    t36 = rd32(ebx + 4u);
    wr32(sp0 - 0x168u, t36);
    wr32(sp0 - 0x16cu, COW_IMG(0x1036fe18u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f6154u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x1036fe18u), t36, in_edi, in_esi);
    COW_AT(101f6154)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t37 = arg5 + rd32(sp0 + 0xcu) + 0x5au;
    wr32(sp0 - 0x18cu, t37);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f6190u);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg5, 7, t37, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f6190)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f61a0: ;
    COW_AT(101f61a0)
    if ((int32_t)ebx <= 0)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    COW_AT(101f61a8)
    wr32(sp0 - 0x168u, 4u);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f61afu);
    t27 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    eax = t27;
    COW_AT(101f61af)
    if ((int32_t)ebx < 5)
    {
    COW_AT(101f61c2)
        ecx = rd32(ebx * 4u + rd32(eax) + 0x2ecu);
    }
    else
    {
    COW_AT(101f61b7)
        ecx = rd32(ebx * 4u + rd32(eax) + 0x31cu);
    }
    COW_AT(101f61cb)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0u);
    t28 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x174u, t28);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 0x3f800000u);
    t29 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x180u, t29);
    t30 = (uint32_t)(int16_t)rd32(sp0 + 0xcu);
    wr32(sp0 - 0x184u, t30);
    g->edx = t30;
    t31 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f61feu);
    cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t30, t29, 0x3f800000u, 0x3f800000u, t28, 0u, 0u, 0u);
    t32 = g->ecx;
    t33 = g->edx;
    ecx = t32;
    edx = t33;
    edi = t31;
    COW_AT(101f61fe)
    wr32(sp0 - 0x168u, ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f620eu);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10352ff0u), ebx, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    COW_AT(101f620e)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t34 = arg5 + edi - 5u;
    wr32(sp0 - 0x18cu, t34);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f623cu);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t34, 7, t34, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f623c)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f624c: ;
    COW_AT(101f624c)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0u);
    t24 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x174u, t24);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 0x3f800000u);
    t25 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x180u, t25);
    t26 = (uint32_t)(int16_t)rd16(sp0 + 0xcu) - 0x12u;
    wr32(sp0 - 0x184u, t26);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f6280u);
    cow_thiscall(g, COW_IMG(0x1011fc80u), ebx, 8, t26, t25, 0x3f800000u, 0x3f800000u, t24, 0u, 0u, 0u);
    COW_AT(101f6280)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f628d: ;
    COW_AT(101f628d)
    eax = arg4 + 3u;
    ecx = rd32(sp0 + 0xcu) + 3u;
    goto L_101f62a1;
L_101f62cf: ;
    COW_AT(101f62cf)
    wr32(sp0 - 0x168u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f62dbu);
    t21 = cow_thiscall(g, COW_IMG(0x1015bbd0u), rd32(COW_IMG(0x10621808u)), 1, ebx);
    eax = t21;
    COW_AT(101f62db)
    if (eax == 0u)
    {
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_160 = rd32(sp0 - 0x160u);
        loc_164 = rd32(sp0 - 0x164u);
        goto L_101f6566;
    }
    COW_AT(101f62e3)
    wr32(sp0 - 0x168u, arg6);
    t22 = rd32(eax + 0x14c8u);
    wr32(sp0 - 0x16cu, t22);
    wr32(sp0 - 0x170u, arg4);
    t23 = rd32(sp0 + 0xcu) + 3u;
    wr32(sp0 - 0x174u, t23);
    wr32(sp0 - 0x178u, arg5 - 8u);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f631cu);
    cow_thiscall(g, rd32(rd32(arg1) + 0x68u), arg1, 5, arg5 - 8u, t23, arg4, t22, arg6);
    COW_AT(101f631c)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f6329: ;
    COW_AT(101f6329)
    wr32(sp0 - 0x168u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f6330u);
    t17 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    eax = t17;
    COW_AT(101f6330)
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0u);
    t18 = rd32(arg2 * 4u + self + 8u);
    wr32(sp0 - 0x174u, t18);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 0x3f800000u);
    t19 = (uint32_t)(int16_t)arg4 + 2u;
    wr32(sp0 - 0x180u, t19);
    t20 = (uint32_t)(int16_t)rd16(sp0 + 0xcu) - 4u;
    wr32(sp0 - 0x184u, t20);
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f636du);
    cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(rd32(eax) + 0x194u), 8, t20, t19, 0x3f800000u, 0x3f800000u, t18, 0u, 0u, 0u);
    COW_AT(101f636d)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f637a: ;
    COW_AT(101f637a)
    wr32(sp0 - 0x168u, ebx);
    wr32(sp0 - 0x16cu, COW_IMG(0x103719dcu));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f638au);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x103719dcu), ebx, in_edi, in_esi);
    COW_AT(101f638a)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t16 = arg5 + rd32(sp0 + 0xcu) - 2u;
    wr32(sp0 - 0x18cu, t16);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f63c6u);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), rd32(sp0 + 0xcu), 7, t16, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f63c6)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f63d6: ;
    COW_AT(101f63d6)
    if ((int32_t)ebx < 1017586800)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    COW_AT(101f63e2)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, 7u);
    wr32(sp0 - 0x170u, ebx);
    g->edi = arg2;
    g->eax = eax;
    g->ecx = arg6;
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f63f2u);
    t14 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, ebx, 7u);
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    COW_AT(101f63f2)
    goto L_101f63f5;
L_101f641e: ;
    COW_AT(101f641e)
    if (rd32(COW_IMG(0x10578448u)) == 0u)
    {
        loc_158 = in_ebx;
        loc_15c = in_ebp;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_101f6566;
    }
    ecx = rd32(COW_IMG(0x10578448u));
    COW_AT(101f642c)
    t12 = (in_edx & 0xffff0000u) | rd16(arg2 * 4u + self + 0x28u);
    wr32(sp0 - 0x168u, t12);
    g->eax = eax;
    g->esp = sp0 - 0x164u;
    COW_RET(0x101f6437u);
    t13 = cow_thiscall(g, COW_IMG(0x10161720u), ecx, 1, t12);
    eax = t13;
    goto L_101f6437;
L_101f6471: ;
    COW_AT(101f6471)
    wr32(sp0 - 0x168u, ebx - 1u);
    wr32(sp0 - 0x16cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx - 1u;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f6482u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x10352ff0u), ebx - 1u, in_edi, in_esi);
    COW_AT(101f6482)
    wr32(sp0 - 0x174u, 0x3f800000u);
    wr32(sp0 - 0x178u, 0x3f800000u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, arg6);
    wr32(sp0 - 0x184u, sp0 - 0x148u);
    wr32(sp0 - 0x188u, arg4 + 4u);
    t11 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18cu, t11);
    g->esp = sp0 - 0x170u;
    COW_RET(0x101f64b3u);
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg4 + 4u, 7, t11, arg4 + 4u, sp0 - 0x148u, arg6, 1u, 0x3f800000u, 0x3f800000u);
    COW_AT(101f64b3)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f64c3: ;
    COW_AT(101f64c3)
    wr32(sp0 - 0x168u, ebx - 1u);
    wr32(sp0 - 0x16cu, COW_IMG(0x103719d4u));
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    g->ebx = ebx - 1u;
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f64d4u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x103719d4u), ebx - 1u, in_edi, in_esi);
    COW_AT(101f64d4)
    wr32(sp0 - 0x174u, arg6);
    wr32(sp0 - 0x178u, sp0 - 0x148u);
    wr32(sp0 - 0x17cu, arg4 + 4u);
    t10 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x180u, t10);
    g->esp = sp0 - 0x15cu;
    COW_RET(0x101f64f9u);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t10, arg4 + 4u, sp0 - 0x148u, arg6, rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    COW_AT(101f64f9)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = rd32(sp0 - 0x160u);
    g->edi = rd32(sp0 - 0x164u);
    g->ebp = rd32(sp0 - 0x15cu);
    return;
L_101f6509: ;
    COW_AT(101f6509)
    wr32(sp0 - 0x168u, arg6);
    wr32(sp0 - 0x16cu, 0x5au);
    wr32(sp0 - 0x170u, 0xcu);
    g->eax = eax;
    g->ecx = self;
    g->edx = arg4;
    g->esp = sp0 - 0x168u;
    COW_RET(0x101f6525u);
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5au);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    ebx = ebx - 1u;
    COW_AT(101f6525)
    wr32(sp0 - 0x16cu, eax);
    wr32(sp0 - 0x170u, arg4 + 4u);
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x174u, t5);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x150u;
    COW_RET(0x101f6537u);
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t5, arg4 + 4u, eax, rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    ebp = t5;
    COW_AT(101f6537)
    wr32(sp0 - 0x178u, ebx);
    wr32(sp0 - 0x17cu, COW_IMG(0x103719dcu));
    wr32(sp0 - 0x180u, sp0 - 0x148u);
    g->ebx = ebx;
    g->eax = sp0 - 0x148u;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    COW_RET(0x101f6547u);
    t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x148u, COW_IMG(0x103719dcu), ebx, rd32(sp0 - 0x174u), rd32(sp0 - 0x170u));
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(101f6547)
    wr32(sp0 - 0x184u, 0x3f800000u);
    wr32(sp0 - 0x188u, 0x3f800000u);
    wr32(sp0 - 0x18cu, 1u);
    wr32(sp0 - 0x190u, arg6);
    wr32(sp0 - 0x194u, sp0 - 0x148u);
    ecx = sp0 - 0x148u;
    ebp = ebp + 0x43u;
    goto L_101f655c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f4bb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f4bcfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        wr32(sp0 - 0x15cu, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x101f4bddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        wr32(sp0 - 0x15cu, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x101f4be4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4c09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4c16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4c46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4c53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4c75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x178u;
        (void)sp0;
        return 1;
    }
    case 0x101f4c85u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f4c8fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_16c;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_16c = rd32(sp0 - 0x16cu);
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x16cu;
        g->eax = arg6;
        g->edi = arg2;
        wr32(sp0 - 0x168u, arg6);
        (void)sp0;
        return 1;
    }
    case 0x101f4c95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f4cb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        (void)sp0;
        return 1;
    }
    case 0x101f4cc1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f4ccdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4ce2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        (void)sp0;
        return 1;
    }
    case 0x101f4ceau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4cfau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f4d36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f4d46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4d57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f4d93u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f4da3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4db3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f4defu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f4dffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4e08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4e26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f4e4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f4e5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4e6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x170u, 1u);
        wr32(sp0 - 0x16cu, 0x3f800000u);
        wr32(sp0 - 0x168u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x101f4e9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f4eaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x170u, 1u);
        wr32(sp0 - 0x16cu, 0x3f800000u);
        wr32(sp0 - 0x168u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x101f4ec0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f4ee7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f4ef7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4efcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4f06u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f4f16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x101f4f1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4f1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4f2cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4f68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f4f78u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f4f85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x16cu;
        wr32(sp0 - 0x16cu, 0u);
        wr32(sp0 - 0x168u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f4f8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x16cu;
        wr32(sp0 - 0x16cu, 0u);
        wr32(sp0 - 0x168u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f4fb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4fc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x16cu;
        wr32(sp0 - 0x16cu, 0u);
        wr32(sp0 - 0x168u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f4fedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f4ffau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x16cu;
        wr32(sp0 - 0x16cu, 0u);
        wr32(sp0 - 0x168u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f502au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5037u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5089u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5096u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        wr32(sp0 - 0x15cu, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x101f50b2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->ecx = arg4 + 2u;
        wr32(sp0 - 0x15cu, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x101f50bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        (void)sp0;
        return 1;
    }
    case 0x101f50cbu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->ecx = arg4 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x101f50d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x178u;
        (void)sp0;
        return 1;
    }
    case 0x101f50e6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5169u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x178u;
        (void)sp0;
        return 1;
    }
    case 0x101f5179u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5180u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5196u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f51aau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f51d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f51deu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f51e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f51f9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14c;
        uint32_t loc_150;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_150 = rd32(sp0 - 0x150u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5206u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14c;
        uint32_t loc_150;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_150 = rd32(sp0 - 0x150u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x101f5215u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14c;
        uint32_t loc_150;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_150 = rd32(sp0 - 0x150u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f523au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14c;
        uint32_t loc_150;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_150 = rd32(sp0 - 0x150u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f525fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14c;
        uint32_t loc_150;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_150 = rd32(sp0 - 0x150u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f526cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f527fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f52a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f52b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f52d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f52e0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f52ecu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x16cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5301u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f531cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5340u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f534du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5359u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x16cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f536eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5389u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f53adu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f53c2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f53d5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f53dcu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f53e6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f53f1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f5409u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        (void)sp0;
        return 1;
    }
    case 0x101f5419u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f542cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f5437u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f5445u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f5454u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f546cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        (void)sp0;
        return 1;
    }
    case 0x101f547cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f549eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x178u;
        (void)sp0;
        return 1;
    }
    case 0x101f54c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x188u;
        (void)sp0;
        return 1;
    }
    case 0x101f54d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f54dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f54e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f54fau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5506u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5510u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f551fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = 0x80808080u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5525u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = 0x80808080u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5531u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = 0x80808080u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5535u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f553cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = 0x80808080u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5548u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = 0x80808080u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f554cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5551u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f555bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5561u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f556bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f557du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5580u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5586u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x101f5588u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5597u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f559eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f55adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f55b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f55bbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f55c5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f55cau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f55d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x101f55e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f55e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5609u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5616u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5622u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f562au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5638u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f564au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f565fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f569bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f56abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f56b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f56d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x16cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f56d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f56edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f56fau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5703u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x16cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f570eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5733u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5740u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f574eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5754u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f575cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5781u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f578eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5797u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f57b2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        g->esi = arg4 + 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f57c4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        g->esi = arg4 + 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f57d4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        g->esi = arg4 + 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f57f8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5829u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5836u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5846u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f586bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f587bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f589cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        (void)sp0;
        return 1;
    }
    case 0x101f58acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f58bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f58e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f58f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5901u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f5931u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x184u;
        g->esi = arg4 + 2u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f593eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    case 0x101f594eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f595eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f598eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x184u;
        g->esi = arg4 + 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f599bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    case 0x101f59abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f59d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x178u;
        (void)sp0;
        return 1;
    }
    case 0x101f59e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5a15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x101f5a25u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5a55u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f5a65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5a6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5a73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5a7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5a82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5aaau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x178u;
        (void)sp0;
        return 1;
    }
    case 0x101f5abau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ac6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5aceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ae1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5ae6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5aeeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5afeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5b06u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5b14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5b4bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        g->ebx = arg6;
        g->esi = arg4 + 4u;
        (void)sp0;
        return 1;
    }
    case 0x101f5b5bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        g->ebx = arg6;
        g->esi = arg4 + 4u;
        (void)sp0;
        return 1;
    }
    case 0x101f5b72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5b8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ba4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x16cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f5babu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f5bb0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5bcbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5bd2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x16cu;
        (void)sp0;
        return 1;
    }
    case 0x101f5bddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5bffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5c0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5c23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x16cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f5c2au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f5c2fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5c3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5c44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5c4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x101f5c6fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        g->esi = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f5c97u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebp = arg4;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f5caau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        g->ebp = arg4;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f5cdbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f5cebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5cf3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5d0cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f5d0fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f5d30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5d3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5d49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5d53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5d62u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebx = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f5d6au:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->ebx = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f5d71u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->ebx = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f5d79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5d7eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5d85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_168;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_168 = rd32(sp0 - 0x168u);
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x101f5dadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5dbau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5dd4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x16cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f5dd9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5e0au:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_16c;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_16c = rd32(sp0 - 0x16cu);
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x16cu;
        g->eax = arg6;
        g->edi = arg1;
        wr32(sp0 - 0x168u, arg6);
        (void)sp0;
        return 1;
    }
    case 0x101f5e0fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_16c;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_16c = rd32(sp0 - 0x16cu);
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x16cu;
        g->eax = arg6;
        g->edi = arg1;
        wr32(sp0 - 0x168u, arg6);
        (void)sp0;
        return 1;
    }
    case 0x101f5e15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f5e18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f5e39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5e46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101f5e56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x16cu;
        (void)sp0;
        return 1;
    }
    case 0x101f5e77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x101f5e87u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5e95u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5ea0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ea5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5eb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ebau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ec2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ee7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ef4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5f05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f5f39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f5f49u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5f60u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5f9au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        g->ebp = arg4;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5fa1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x190u;
        g->ebp = arg4;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f5fe7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ff4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f5ffcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6006u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6010u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x101f601bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f602bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f6054u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x184u;
        (void)sp0;
        return 1;
    }
    case 0x101f6064u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6070u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6078u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f60a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x178u;
        (void)sp0;
        return 1;
    }
    case 0x101f60b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f60beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f60c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f60d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f60e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f611fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f612fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6137u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6141u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6154u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f6190u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f61a0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f61a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f61afu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f61b7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f61c2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f61cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f61feu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f620eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101f623cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f624cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f6280u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f628du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f62a1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f62c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f62cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f62dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f62e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f631cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6329u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->esi = self;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f6330u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f636du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f637au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f638au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f63c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f63d6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f63e2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f63f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f63f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x101f640eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        (void)sp0;
        return 1;
    }
    case 0x101f641eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f642cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f6437u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f643fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6464u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6471u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6482u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f64b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x18cu;
        (void)sp0;
        return 1;
    }
    case 0x101f64c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f64d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101f64f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101f6509u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101f6525u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x170u;
        g->esi = arg4 + 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f6537u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x174u;
        g->esi = arg4 + 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f6547u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x180u;
        g->esi = arg4 + 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101f655cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x194u;
        g->esi = arg4 + 4u;
        wr32(sp0 - 0x194u, sp0 - 0x148u);
        wr32(sp0 - 0x190u, arg6);
        wr32(sp0 - 0x18cu, 1u);
        wr32(sp0 - 0x188u, 0x3f800000u);
        wr32(sp0 - 0x184u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x101f655eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_19c;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_19c = rd32(sp0 - 0x19cu);
        g->esp = sp0 - 0x19cu;
        wr32(sp0 - 0x198u, arg4 + 4u);
        wr32(sp0 - 0x194u, sp0 - 0x148u);
        wr32(sp0 - 0x190u, arg6);
        wr32(sp0 - 0x18cu, 1u);
        wr32(sp0 - 0x188u, 0x3f800000u);
        wr32(sp0 - 0x184u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x101f6563u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x19cu;
        (void)sp0;
        return 1;
    }
    case 0x101f6566u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f4bb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f4bb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
