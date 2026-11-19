/* f_0x10218ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10218ac0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_84;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t loc_b8;
    uint32_t loc_bc;
    uint32_t loc_d0;
    uint32_t loc_d4;
    uint32_t loc_d8;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 256u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10218b37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebx = rd32(sp0 - 0xc0u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10218b37;
    case 0x10218b67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10218b67;
    case 0x10218bdbu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10218bdb;
    case 0x10218be0u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10218be0;
    case 0x10218be2u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10218be2;
    case 0x10218c27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); goto E_10218c27;
    case 0x10218c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_10218c2d;
    case 0x10218ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218ca1;
    case 0x10218ca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218ca6;
    case 0x10218ca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218ca8;
    case 0x10218cc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218cc3;
    case 0x10218cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218cd4;
    case 0x10218d59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218d59;
    case 0x10218dcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_bc = rd32(sp0 - 0xbcu); goto E_10218dcd;
    case 0x10218e06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218e06;
    case 0x10218e0fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218e0f;
    case 0x10218e18u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218e18;
    case 0x10218e1eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10218e1e;
    case 0x10218e3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10218e3c;
    case 0x10218e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_84 = rd32(sp0 - 0x84u); goto E_10218e40;
    case 0x10218e49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_84 = rd32(sp0 - 0x84u); goto E_10218e49;
    case 0x10218e74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218e74;
    case 0x10218e7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218e7b;
    case 0x10218e80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218e80;
    case 0x10218e87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10218e87;
    case 0x10218e93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_b8 = rd32(sp0 - 0xb8u); goto E_10218e93;
    case 0x10218eaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_b8 = rd32(sp0 - 0xb8u); goto E_10218eae;
    case 0x10218ebbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10218ebb;
    case 0x10218ebfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10218ebf;
    case 0x10218ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10218ec4;
    case 0x10218ee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_84 = rd32(sp0 - 0x84u); goto E_10218ee7;
    case 0x10218f03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_bc = rd32(sp0 - 0xbcu); goto E_10218f03;
    case 0x10218f0eu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_84 = rd32(sp0 - 0x84u); goto E_10218f0e;
    case 0x10218f18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10218f18;
    case 0x10218f28u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10218f28;
    case 0x10218f39u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10218f39;
    case 0x10218f8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); loc_a8 = rd32(sp0 - 0xa8u); goto E_10218f8b;
    case 0x10218fa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); loc_a8 = rd32(sp0 - 0xa8u); goto E_10218fa0;
    case 0x10218fa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); loc_a8 = rd32(sp0 - 0xa8u); goto E_10218fa7;
    case 0x10218fa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); loc_a8 = rd32(sp0 - 0xa8u); goto E_10218fa9;
    case 0x10219007u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d4 = rd32(sp0 - 0xd4u); goto E_10219007;
    case 0x1021901cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d4 = rd32(sp0 - 0xd4u); goto E_1021901c;
    case 0x10219021u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d4 = rd32(sp0 - 0xd4u); goto E_10219021;
    case 0x10219029u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10219029;
    case 0x10219093u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10219093;
    case 0x102190a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_a4 = rd32(sp0 - 0xa4u); goto E_102190a8;
    case 0x102190afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_a4 = rd32(sp0 - 0xa4u); goto E_102190af;
    case 0x102190b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_a4 = rd32(sp0 - 0xa4u); goto E_102190b1;
    case 0x102190c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_a4 = rd32(sp0 - 0xa4u); goto E_102190c0;
    case 0x1021910au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1021910a;
    case 0x1021910cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_1021910c;
    case 0x10219119u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_10219119;
    case 0x10219122u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_10219122;
    case 0x1021912bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_1021912b;
    case 0x10219138u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_10219138;
    case 0x1021913du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_1021913d;
    case 0x10219140u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_10219140;
    case 0x1021914bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_1021914b;
    case 0x10219164u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_10219164;
    case 0x10219178u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_10219178;
    case 0x1021917fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_ac = rd32(sp0 - 0xacu); goto E_1021917f;
    case 0x10219246u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10219246;
    case 0x10219252u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10219252;
    case 0x102192dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_102192df;
    case 0x10219338u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10219338;
    case 0x10219344u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10219344;
    case 0x1021935eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_1021935e;
    case 0x1021940eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_1021940e;
    case 0x1021941au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_1021941a;
    case 0x10219467u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10219467;
    case 0x1021946du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1021946d;
    case 0x10219472u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10219472;
    case 0x1021947du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_1021947d;
    default: break;
    }
#endif

    COW_AT(10218ac0)
    wr32(sp0 - 0xc0u, in_ebx);
    wr32(sp0 - 0xc4u, in_ebp);
    wr32(sp0 - 0xc8u, in_esi);
    wr32(sp0 - 0xccu, in_edi);
    wr32(sp0 - 0xd0u, 0x79u);
    wr32(sp0 - 0xd4u, 9u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xccu;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x79u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xd8u, 0x7au);
    wr32(sp0 - 0xdcu, 9u);
    wr32(sp0 - 0x58u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xd4u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7au);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xe0u, 0x7cu);
    wr32(sp0 - 0xe4u, 9u);
    wr32(sp0 - 0x54u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0xdcu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7cu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0xe8u, 0x7du);
    wr32(sp0 - 0xecu, 9u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0xe4u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7du);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0xf0u, 0x7eu);
    wr32(sp0 - 0xf4u, 9u);
    wr32(sp0 - 0x4cu, t10);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0xecu;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7eu);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0xf8u, 0x7bu);
    wr32(sp0 - 0xfcu, 9u);
    g->edx = t15;
    g->esp = sp0 - 0xf4u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7bu);
    t17 = g->edx;
    g->esp = sp0 - 0xccu;
    t18 = cow_thiscall(g, COW_IMG(0x1010a4d0u), arg1, 0);
    t19 = g->ecx;
    wr32(sp0 - 0xa4u, 0u);
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = t19;
        ebx = t18;
        ebp = in_ebp;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ebx = t18;
    COW_AT(10218b37)
        t20 = rd32(eax + 4u);
        wr32(sp0 - 0xa0u, t20);
        wr32(sp0 - 0xd0u, sp0 - 0xa0u);
        t21 = rd32(eax + 8u);
        wr32(sp0 - 0x9cu, t21);
        g->eax = sp0 - 0xa0u;
        g->esp = sp0 - 0xccu;
        t22 = cow_fastcall(g, COW_IMG(0x10218560u), self, t21, 1, sp0 - 0xa0u);
        t23 = rd16(self + 0x4au);
        wr16(self + 0x4au, (uint16_t)(((t22 << 8u ^ t23) & 0xf00u) ^ t23));
        eax = t22;
        ecx = ((t22 << 8u ^ t23) & 0xf00u) ^ ((in_ebp & 0xffff0000u) | t23);
        ebp = (in_ebp & 0xffff0000u) | t23;
    }
    COW_AT(10218b67)
    t24 = rd16(self + 0x50u);
    t25 = rd16(self + 0x48u);
    wr16(self + 0x26u, (uint16_t)t25);
    t26 = rd16(self + 0x32u);
    wr16(self + 0x64u, (uint16_t)t26);
    wr16(self + 0x66u, (uint16_t)((uint16_t)t24 + (uint16_t)t25));
    wr16(self + 0x60u, (uint16_t)((uint16_t)t26 + rd16(self + 0x52u)));
    wr16(self + 0x62u, (uint16_t)(rd16(self + 0x54u) + (uint16_t)((uint16_t)t24 + (uint16_t)t25)));
    t27 = rd16(self + 0x5au);
    t28 = rd16(self + 0x34u);
    t29 = rd16(self + 0x32u);
    wr16(self + 0x6au, 0u);
    wr16(self + 0x68u, (uint16_t)((uint16_t)(t27 - t28) - t29));
    wr16(self + 0x72u, 0u);
    wr16(self + 0x74u, 0u);
    t30 = rd16(self + 0x60u);
    wr16(self + 0x6eu, (uint16_t)t30);
    t31 = rd16(self + 0x62u);
    wr16(self + 0x70u, (uint16_t)t31);
    wr16(self + 0x76u, rd16(self + 0x68u));
    wr16(self + 0x78u, 0u);
    if (rd32(ebx + 0x14u) == 0u)
    {
    COW_AT(10218be0)
        eax = 0u;
    }
    else
    {
        eax = rd32(ebx + 0x14u);
    COW_AT(10218bdb)
        eax = rd32(eax + 4u);
    }
    COW_AT(10218be2)
    wr32(sp0 - 0xd0u, self + 0x52u);
    wr32(sp0 - 0xd4u, eax);
    wr32(sp0 - 0xd8u, self);
    g->eax = eax;
    g->esp = sp0 - 0xccu;
    t32 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x6eu, 3, self, eax, self + 0x52u);
    wr16(self + 0x258u, 0u);
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xd4u, 1u);
    wr32(sp0 - 0xd8u, 2u);
    t33 = rd32(arg1 + 0x8f0u);
    wr32(sp0 - 0xdcu, t33);
    g->edx = t33;
    t34 = cow_thiscall(g, COW_IMG(0x1010f350u), sp0 - 0x74u, 4, t33, 2u, 1u, 0u);
    t35 = g->edx;
    wr32(sp0 - 0xacu, 1u);
    g->edx = t35;
    t36 = cow_call_regs(g, COW_IMG(0x1010f510u), t34, sp0 - 0x74u, g->edx, 1, 0);
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 != 0u)
    {
        edx = t38;
        ebp = 1u;
    }
    else
    {
        ecx = t37;
        edx = t38;
    COW_AT(10218c27)
        ebp = 1u;
        loc_ac = 1u;
L_10218c2d: ;
    COW_AT(10218c2d)
        wr32(sp0 - 0xb4u, (uint16_t)ebp);
        t39 = rd16(self + 0x40u);
        t40 = rd16(self + (uint16_t)ebp * 0xeu + 0x66u);
        t41 = rd16(self + (uint16_t)ebp * 0xeu + 0x6au);
        t42 = rd16(self + 0x3cu);
        wr16(self + (uint16_t)ebp * 0xeu + 0x72u, (uint16_t)t42);
        wr16(self + (uint16_t)ebp * 0xeu + 0x74u, (uint16_t)(t39 + (uint16_t)(t40 + t41)));
        t43 = rd16(self + 0x60u);
        wr16(self + (uint16_t)ebp * 0xeu + 0x6eu, (uint16_t)((uint16_t)t42 + t43));
        wr16(self + (uint16_t)ebp * 0xeu + 0x70u, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t39 + (uint16_t)(t40 + t41))));
        t44 = rd16(self + 0x68u);
        t45 = rd16(self + 0x3eu);
        t46 = rd16(self + 0x3cu);
        wr16(self + (uint16_t)ebp * 0xeu + 0x78u, 0u);
        wr16(self + (uint16_t)ebp * 0xeu + 0x76u, (uint16_t)((uint16_t)(t44 - t45) - t46));
        g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t44 - t45) - t46);
        g->esp = sp0 - 0xccu;
        t47 = cow_call_regs(g, COW_IMG(0x101124b0u), ((uint16_t)ebp * 8u - (uint16_t)ebp & 0xffff0000u) | (uint16_t)(t39 + (uint16_t)(t40 + t41)), sp0 - 0x70u, g->edx, 1, 0);
        t48 = g->edx;
        g->edx = t48;
        t49 = cow_thiscall(g, COW_IMG(0x10110ac0u), t47, 0);
        t50 = g->edx;
        if (rd32(t49 + 4u) == 0u)
        {
            edx = t50;
            ebx = self + (uint16_t)ebp * 0xeu + 0x6eu;
            ebp = self + (uint16_t)ebp * 0xeu;
    COW_AT(10218ca6)
            eax = 0u;
        }
        else
        {
            eax = rd32(t49 + 4u);
            edx = t50;
            ebx = self + (uint16_t)ebp * 0xeu + 0x6eu;
            ebp = self + (uint16_t)ebp * 0xeu;
    COW_AT(10218ca1)
            eax = rd32(eax + 4u);
        }
    COW_AT(10218ca8)
        wr32(sp0 - 0xd0u, self + 0x52u);
        wr32(sp0 - 0xd4u, eax);
        wr32(sp0 - 0xd8u, self);
        g->edx = edx;
        g->esp = sp0 - 0xccu;
        cow_thiscall(g, COW_IMG(0x1021ba80u), ebx, 3, self, eax, self + 0x52u);
        t51 = g->edx;
        if (rd32(self + 0x344u) == 0u)
        {
            eax = rd32(self + 0x344u);
            edx = t51;
            goto L_10218d59;
        }
        eax = rd32(self + 0x344u);
        edx = t51;
    COW_AT(10218cc3)
        if (eax != rd32(self + rd32(sp0 - 0xb4u) * 4u + 0x2c4u)) goto L_10218d59;
        ecx = rd32(sp0 - 0xb4u);
    COW_AT(10218cd4)
        wr32(sp0 - 0xd0u, 1u);
        t52 = rd16(self + 0x68u);
        t53 = rd16(ecx * 0xeu + self + 0x70u);
        t54 = rd16(self + 0x3cu);
        wr16(sp0 - 0xbcu, (uint16_t)t53);
        wr32(sp0 - 0xb8u, t54);
        t55 = t52 - t54 * 2u - rd16(self + 0x3eu);
        wr32(sp0 - 0xd4u, t55);
        t56 = rd16(ebp + 0x78u) + rd16(self + 0x40u) + (uint32_t)(int16_t)rd16(sp0 - 0xbcu) - 7u;
        wr32(sp0 - 0xd8u, t56);
        t57 = t54 + (uint32_t)(int16_t)rd16(ebx);
        wr32(sp0 - 0xdcu, t57);
        g->edx = t54;
        g->esp = sp0 - 0xccu;
        t58 = cow_call_regs(g, COW_IMG(0x101c6060u), t56, rd32(self + 0x344u), g->edx, 1, 4, t57, t56, t55, 1u);
        t59 = g->edx;
        wr32(sp0 - 0xe0u, t58);
        g->edx = t59;
        g->esp = sp0 - 0xdcu;
        t60 = cow_call_regs(g, COW_IMG(0x101c6020u), t58, rd32(self + 0x344u), g->edx, 1, 1, t58);
        t61 = g->edx;
        wr32(sp0 - 0xe4u, t60);
        g->edx = t61;
        g->esp = sp0 - 0xccu;
        cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x344u), 6, t60, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), 1u);
        t62 = g->edx;
        edx = t62;
L_10218f18: ;
    COW_AT(10218f18)
        if (rd32(self + 0x344u) == 0u)
        {
            eax = rd32(self + 0x344u);
            goto L_10219029;
        }
        eax = rd32(self + 0x344u);
    COW_AT(10218f28)
        if (eax != rd32(self + rd32(sp0 - 0xb4u) * 4u + 0x2c4u))
        {
            edx = rd32(sp0 - 0xb4u);
            goto L_10219029;
        }
        edx = rd32(sp0 - 0xb4u);
    COW_AT(10218f39)
        t87 = rd16(ebp + 0x74u);
        wr16(self + 0x240u, 0u);
        wr16(self + 0x242u, (uint16_t)t87);
        t88 = rd16(self + 0x60u);
        wr16(self + 0x23cu, (uint16_t)t88);
        t89 = rd32(sp0 - 0xb4u);
        wr16(self + 0x23eu, (uint16_t)((uint16_t)t87 + rd16(self + 0x62u)));
        wr16(self + 0x246u, 0u);
        wr16(self + 0x244u, 0x64u);
        t90 = self + t89 * 0xeu + 0x70u;
        wr32(sp0 - 0xa8u, t90);
        if ((int16_t)rd16(t90) < (int32_t)(rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u)))
        {
            edx = rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u);
            loc_a8 = t90;
            goto L_10218fa7;
        }
        ecx = rd16(self + 0x36u);
        edx = rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u);
        loc_a8 = t90;
    COW_AT(10218f8b)
        if ((int16_t)(rd16(ebx + 0xau) + rd16(ebx + 2u)) >= (int16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu)))
        {
            edx = (edx & 0xffff0000u) | (uint16_t)(rd16(ebx + 0xau) + rd16(ebx + 2u));
            goto L_10218fa7;
        }
        edx = (edx & 0xffff0000u) | (uint16_t)(rd16(ebx + 0xau) + rd16(ebx + 2u));
    COW_AT(10218fa0)
        eax = 1u;
L_10218fa9: ;
    COW_AT(10218fa9)
        wr32(sp0 - 0xd0u, eax);
        wr32(sp0 - 0xd4u, 0u);
        wr32(sp0 - 0xd8u, self + 0x23cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xccu;
        t91 = cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 0u, eax);
        t92 = g->ecx;
        t93 = g->edx;
        t94 = rd16(self + 0x40u);
        t95 = rd16(ebp + 0x74u);
        t96 = rd16(ebp + 0x78u);
        t97 = rd16(self + 0x3cu);
        wr16(self + 0x240u, (uint16_t)t97);
        wr16(self + 0x242u, (uint16_t)(((t91 & 0xffff0000u) | (uint16_t)(t94 + (uint16_t)(t95 + t96))) - 7u));
        wr16(self + 0x23cu, (uint16_t)((uint16_t)t97 + rd16(self + 0x60u)));
        wr16(self + 0x23eu, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(((t91 & 0xffff0000u) | (uint16_t)(t94 + (uint16_t)(t95 + t96))) - 7u)));
        wr16(self + 0x244u, 0x64u);
        wr16(self + 0x246u, 0u);
        if ((int16_t)rd16(rd32(sp0 - 0xa8u)) < (int32_t)(rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u)))
        {
            eax = 0u;
            edx = rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u);
        }
        else
        {
            ecx = (uint32_t)(int16_t)rd16(rd32(sp0 - 0xa8u));
            edx = rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u);
    COW_AT(10219007)
            if ((int16_t)(rd16(ebx + 0xau) + rd16(ebx + 2u)) >= (int16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu)))
            {
                eax = 0u;
                edx = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu));
            }
            else
            {
                edx = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu));
    COW_AT(1021901c)
                eax = 1u;
            }
        }
    COW_AT(10219021)
        wr32(sp0 - 0xd0u, eax);
        wr32(sp0 - 0xd4u, 1u);
        loc_d4 = 1u;
        loc_d0 = eax;
        loc_a4 = rd32(sp0 - 0xa4u);
L_102190c0: ;
    COW_AT(102190c0)
        wr32(sp0 - 0xd8u, self + 0x23cu);
        g->edx = edx;
        g->esp = sp0 - 0xccu;
        cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, loc_d4, loc_d0);
        t104 = g->edx;
        wr16(ebp + 0x78u, (uint16_t)(rd16(ebp + 0x78u) + 0x14u));
        t105 = rd16(self + 0x258u);
        t106 = rd32(sp0 - 0xacu);
        wr16(self + t105 * 2u + 0x25au, (uint16_t)t106);
        wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
        g->ebx = t106;
        g->edx = t104;
        t107 = cow_call_regs(g, COW_IMG(0x1010f540u), t105, sp0 - 0x74u, g->edx, 1, 0);
        t108 = g->edx;
        wr32(sp0 - 0xacu, t106 + 1u);
        g->edx = t108;
        t109 = cow_call_regs(g, COW_IMG(0x1010f510u), t107, sp0 - 0x74u, g->edx, 1, 0);
        t110 = g->ecx;
        t111 = g->edx;
        if ((uint8_t)t109 == 0u)
        {
            ecx = t110;
            edx = t111;
            ebp = t106 + 1u;
            loc_ac = rd32(sp0 - 0xacu);
            goto L_10218c2d;
        }
        edx = t111;
        ebp = t106 + 1u;
    COW_AT(1021910a)
    }
    COW_AT(1021910c)
    t112 = rd32(self + 0x2bcu);
    wr32(self + 0x18u, 0u);
    if (t112 == 0u) goto L_10219178;
    COW_AT(10219119)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_10219178;
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(10219122)
    if (rd8(eax + 0x2cff4u) != 2u) goto L_10219178;
    COW_AT(1021912b)
    if (rd32(rd32(COW_IMG(0x10456a28u)) + 0xcu) == 0u) goto L_10219178;
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0xcu);
    ecx = rd32(COW_IMG(0x10456a28u));
    COW_AT(10219138)
    if (eax == 3u)
    {
        eax = eax - 3u;
    COW_AT(10219164)
        wr16(COW_IMG(0x1066469cu), (uint16_t)(-((rd8(ecx + 0x18u) & 0x80u) != 0u) + 2u));
    }
    else
    {
        eax = eax - 3u;
    COW_AT(1021913d)
        if (eax == 1u)
        {
    COW_AT(1021914b)
            t113 = rd8(ecx + 0x18u);
            wr16(COW_IMG(0x1066469cu), (uint8_t)(~t113 | 0x40u) >> 6u);
            edx = (edx & 0xffff0000u) | (uint8_t)(~t113 | 0x40u) >> 6u;
        }
        else
        {
    COW_AT(10219140)
            wr16(COW_IMG(0x1066469cu), 1u);
        }
    }
L_1021917f: ;
    COW_AT(1021917f)
    wr32(sp0 - 0xb4u, (uint16_t)ebp);
    t114 = rd16(self + 0x42u);
    t115 = rd16(self + (uint16_t)ebp * 0xeu + 0x66u);
    t116 = rd16(self + (uint16_t)ebp * 0xeu + 0x6au);
    t117 = rd16(self + 0x3cu);
    wr16(self + (uint16_t)ebp * 0xeu + 0x72u, (uint16_t)t117);
    wr16(self + (uint16_t)ebp * 0xeu + 0x74u, (uint16_t)(t114 + (uint16_t)(t115 + t116)));
    t118 = rd16(self + 0x60u);
    wr16(self + (uint16_t)ebp * 0xeu + 0x6eu, (uint16_t)((uint16_t)t117 + t118));
    wr16(self + (uint16_t)ebp * 0xeu + 0x70u, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t114 + (uint16_t)(t115 + t116))));
    wr32(sp0 - 0xd0u, self + 0x52u);
    t119 = self + (uint16_t)ebp * 0xeu + 0x6eu;
    t120 = rd32(sp0 - 0x4cu);
    wr32(sp0 - 0xd4u, t120);
    wr32(sp0 - 0xd8u, self);
    t121 = rd16(self + 0x68u);
    t122 = rd16(self + 0x3eu);
    t123 = rd16(self + 0x3cu);
    wr16(self + (uint16_t)ebp * 0xeu + 0x78u, 0u);
    wr16(self + (uint16_t)ebp * 0xeu + 0x76u, (uint16_t)((uint16_t)(t121 - t122) - t123));
    g->eax = t120;
    g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t121 - t122) - t123);
    g->esp = sp0 - 0xccu;
    t124 = cow_thiscall(g, COW_IMG(0x1021ba80u), t119, 3, self, t120, self + 0x52u);
    t125 = g->edx;
    t126 = rd16(self + (uint16_t)ebp * 0xeu + 0x74u);
    wr16(self + 0x240u, 0u);
    wr16(self + 0x242u, (uint16_t)t126);
    wr32(sp0 - 0xd0u, 0u);
    t127 = rd16(self + 0x60u);
    wr16(self + 0x23cu, (uint16_t)t127);
    wr32(sp0 - 0xd4u, 0u);
    t128 = rd16(self + 0x62u);
    wr16(self + 0x23eu, (uint16_t)((uint16_t)t126 + t128));
    wr32(sp0 - 0xd8u, ebp);
    wr16(self + 0x246u, 0u);
    wr32(sp0 - 0xdcu, self + 0x23cu);
    wr32(sp0 - 0xe0u, t119);
    wr32(sp0 - 0xe4u, sp0 - 0xa0u);
    t129 = rd32(sp0 - 0xa4u);
    wr32(sp0 - 0xe8u, t129);
    wr16(self + 0x244u, 0x64u);
    g->eax = sp0 - 0xa0u;
    t130 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, t129, sp0 - 0xa0u, t119, self + 0x23cu, ebp, 0u, 0u);
    if ((uint32_t)(int16_t)rd16(self + 0x14u) != rd32(sp0 - 0xb4u))
    {
        edx = (uint32_t)(int16_t)rd16(self + 0x14u);
        ebx = t130;
    }
    else
    {
        eax = rd32(sp0 - 0xb4u);
        edx = (uint32_t)(int16_t)rd16(self + 0x14u);
        ebx = t130;
    COW_AT(10219246)
        wr32(sp0 - 0xd0u, 0u);
        wr32(sp0 - 0xd4u, 1u);
        wr32(sp0 - 0xd8u, self + 0x23cu);
        g->edx = edx;
        g->esp = sp0 - 0xccu;
        cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
        t131 = g->edx;
        edx = t131;
    }
    COW_AT(10219252)
    t132 = rd16(self + 0x258u);
    wr16(self + t132 * 2u + 0x25au, (uint16_t)ebp);
    wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
    t133 = rd16(self + 0x42u);
    t134 = rd16(self + (uint16_t)(ebp + 1u) * 0xeu + 0x66u);
    t135 = rd16(self + (uint16_t)(ebp + 1u) * 0xeu + 0x6au);
    t136 = rd16(self + 0x3cu);
    wr16(self + 0x232u, (uint16_t)t136);
    wr16(self + 0x234u, (uint16_t)(t133 + (uint16_t)(t134 + t135)));
    t137 = rd16(self + 0x60u);
    wr16(self + 0x22eu, (uint16_t)((uint16_t)t136 + t137));
    wr16(self + 0x230u, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t133 + (uint16_t)(t134 + t135))));
    t138 = rd16(self + 0x68u);
    t139 = rd16(self + 0x3eu);
    wr16(self + 0x238u, 0u);
    t140 = rd16(self + 0x3cu);
    wr16(self + 0x236u, (uint16_t)((uint16_t)(t138 - t139) - t140));
    g->eax = (t132 & 0xffff0000u) | (uint16_t)(t133 + (uint16_t)(t134 + t135));
    g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t138 - t139) - t140);
    g->esp = sp0 - 0xccu;
    t141 = cow_thiscall(g, COW_IMG(0x1010a4f0u), arg1, 0);
    t142 = g->ecx;
    t143 = g->edx;
    if ((uint16_t)t141 == 0u)
    {
        eax = t141;
        ecx = t142;
        edx = t143;
    }
    else
    {
        edx = t143;
    COW_AT(102192df)
        wr32(sp0 - 0xd0u, self + 0x52u);
        t144 = rd32(sp0 - 0x58u);
        wr32(sp0 - 0xd4u, t144);
        wr32(sp0 - 0xd8u, self);
        g->eax = t144;
        g->edx = edx;
        g->esp = sp0 - 0xccu;
        t145 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x22eu, 3, self, t144, self + 0x52u);
        t146 = g->edx;
        t147 = rd16(self + 0x234u);
        wr16(self + 0x240u, 0u);
        wr16(self + 0x242u, (uint16_t)t147);
        wr32(sp0 - 0xd0u, 0u);
        t148 = rd16(self + 0x60u);
        wr16(self + 0x23cu, (uint16_t)t148);
        wr32(sp0 - 0xd4u, 0u);
        wr32(sp0 - 0xd8u, 0u);
        wr32(sp0 - 0xdcu, self + 0x23cu);
        t149 = rd16(self + 0x62u);
        wr16(self + 0x23eu, (uint16_t)((uint16_t)t147 + t149));
        wr32(sp0 - 0xe0u, self + 0x22eu);
        wr16(self + 0x246u, 0u);
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        wr32(sp0 - 0xe8u, ebx);
        wr16(self + 0x244u, 0x64u);
        g->eax = sp0 - 0xa0u;
        g->edx = ((t146 | t148) & 0xffff0000u) | (uint16_t)((uint16_t)t147 + t149);
        t150 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, ebx, sp0 - 0xa0u, self + 0x22eu, self + 0x23cu, 0u, 0u, 0u);
        t151 = g->edx;
        if (rd16(self + 0x14u) != 0u)
        {
            eax = t150;
            edx = t151;
            ebx = t150;
        }
        else
        {
            eax = t150;
            edx = t151;
            ebx = t150;
    COW_AT(10219338)
            wr32(sp0 - 0xd0u, 0u);
            wr32(sp0 - 0xd4u, 1u);
            wr32(sp0 - 0xd8u, self + 0x23cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xccu;
            t152 = cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
            t153 = g->edx;
            eax = t152;
            edx = t153;
        }
    COW_AT(10219344)
        t154 = rd16(self + 0x258u);
        wr16(self + t154 * 2u + 0x25au, 0u);
        wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
        ecx = t154;
    }
    COW_AT(1021935e)
    t155 = rd16(self + 0x238u);
    t156 = rd16(self + 0x234u);
    t157 = rd16(self + 0x42u);
    t158 = rd16(self + 0x3cu);
    wr16(self + 0x24eu, (uint16_t)t158);
    wr16(self + 0x250u, (uint16_t)(t155 + (uint16_t)(t156 + t157)));
    t159 = rd16(self + 0x60u);
    wr16(self + 0x24au, (uint16_t)((uint16_t)t158 + t159));
    wr16(self + 0x24cu, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t155 + (uint16_t)(t156 + t157))));
    wr32(sp0 - 0xd0u, self + 0x52u);
    t160 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0xd4u, t160);
    wr32(sp0 - 0xd8u, self);
    t161 = rd16(self + 0x68u);
    t162 = rd16(self + 0x3eu);
    t163 = rd16(self + 0x3cu);
    wr16(self + 0x254u, 0u);
    wr16(self + 0x252u, (uint16_t)((uint16_t)(t161 - t162) - t163));
    g->eax = t160;
    g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t161 - t162) - t163);
    g->esp = sp0 - 0xccu;
    t164 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x24au, 3, self, t160, self + 0x52u);
    t165 = g->edx;
    t166 = rd16(self + 0x250u);
    wr16(self + 0x240u, 0u);
    wr16(self + 0x242u, (uint16_t)t166);
    wr32(sp0 - 0xd0u, 0u);
    t167 = rd16(self + 0x60u);
    wr16(self + 0x23cu, (uint16_t)t167);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd8u, 0xffffffffu);
    wr32(sp0 - 0xdcu, self + 0x23cu);
    t168 = rd16(self + 0x62u);
    wr16(self + 0x23eu, (uint16_t)((uint16_t)t166 + t168));
    wr32(sp0 - 0xe0u, self + 0x24au);
    wr16(self + 0x246u, 0u);
    wr32(sp0 - 0xe4u, sp0 - 0xa0u);
    wr32(sp0 - 0xe8u, ebx);
    wr16(self + 0x244u, 0x64u);
    g->eax = sp0 - 0xa0u;
    g->edx = ((t165 | t167) & 0xffff0000u) | (uint16_t)((uint16_t)t166 + t168);
    t169 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, ebx, sp0 - 0xa0u, self + 0x24au, self + 0x23cu, 0xffffffffu, 0u, 0u);
    t170 = g->edx;
    if ((int16_t)rd16(self + 0x14u) >= 0)
    {
        ebx = t169;
    }
    else
    {
        eax = t169;
        edx = t170;
        ebx = t169;
    COW_AT(1021940e)
        wr32(sp0 - 0xd0u, 0u);
        wr32(sp0 - 0xd4u, 1u);
        wr32(sp0 - 0xd8u, self + 0x23cu);
        g->esp = sp0 - 0xccu;
        cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
    }
    COW_AT(1021941a)
    wr16(self + rd16(self + 0x258u) * 2u + 0x25au, 0xffffu);
    t171 = rd16(self + 0x48u);
    t172 = rd16(self + 0x254u);
    t173 = rd16(self + 0x38u);
    wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
    t174 = t171 + t172 + t173 + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0xd0u, t174);
    g->edx = t174;
    g->esp = sp0 - 0xccu;
    cow_thiscall(g, COW_IMG(0x10218020u), self, 1, t174);
    t175 = g->edx;
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        edx = t175;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        edx = t175;
    COW_AT(10219467)
        if ((rd8(self + 0x4bu) & 0xfu) != 0u)
        {
    COW_AT(1021946d)
            if ((uint16_t)ebx == 0u)
            {
    COW_AT(10219472)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xccu;
                t176 = cow_stdcall(g, COW_IMG(0x10218550u), 0);
                t177 = g->edx;
                wr8(self + 0x4bu, rd8(self + 0x4bu) & 0xf0u);
                eax = t176;
                edx = t177;
            }
        }
    }
    COW_AT(1021947d)
    g->esp = sp0 - 0xccu;
    cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x74u, 0);
    g->ebx = rd32(sp0 - 0xc0u);
    g->esi = rd32(sp0 - 0xc8u);
    g->edi = rd32(sp0 - 0xccu);
    g->ebp = rd32(sp0 - 0xc4u);
    return;
L_10218d59: ;
    COW_AT(10218d59)
    wr32(sp0 - 0xd0u, 0x5du);
    wr32(sp0 - 0xd4u, 0x5bu);
    g->esp = sp0 - 0xccu;
    cow_thiscall(g, COW_IMG(0x1021baa0u), sp0 - 0x98u, 2, 0x5bu, 0x5du);
    t63 = g->ecx;
    t64 = rd16(self + 0x3cu);
    wr16(sp0 - 0x94u, (uint16_t)t64);
    wr16(sp0 - 0x8eu, 0u);
    t65 = rd32(arg1 + 0x8f0u);
    wr32(sp0 - 0xbcu, t65);
    t66 = rd16(ebp + 0x78u);
    t67 = rd16(self + 0x40u);
    t68 = rd16(ebx);
    wr16(sp0 - 0x98u, (uint16_t)(t68 + (uint16_t)t64));
    t69 = rd16(ebx + 2u);
    wr16(sp0 - 0x92u, (uint16_t)(((t65 & 0xffff0000u) | (uint16_t)(t66 + t67)) - 7u));
    t70 = rd16(self + 0x68u);
    t71 = rd16(self + 0x3eu);
    wr16(sp0 - 0x96u, (uint16_t)((uint16_t)t69 + (uint16_t)(((t65 & 0xffff0000u) | (uint16_t)(t66 + t67)) - 7u)));
    wr16(sp0 - 0x90u, (uint16_t)((uint16_t)(t70 - (uint16_t)(((t63 & 0xffff0000u) | t64) * 2u)) - t71));
    if (t65 == 0u)
    {
        edx = ((arg1 | t69) & 0xffff0000u) | (uint16_t)((uint16_t)t69 + (uint16_t)(((t65 & 0xffff0000u) | (uint16_t)(t66 + t67)) - 7u));
        loc_bc = t65;
        goto L_10218f03;
    }
    eax = t65;
    edx = ((arg1 | t69) & 0xffff0000u) | (uint16_t)((uint16_t)t69 + (uint16_t)(((t65 & 0xffff0000u) | (uint16_t)(t66 + t67)) - 7u));
    loc_bc = t65;
    COW_AT(10218dcd)
    g->edx = edx;
    g->esp = sp0 - 0xccu;
    t72 = cow_call_regs(g, COW_IMG(0x101124b0u), eax, sp0 - 0x70u, g->edx, 1, 0);
    t73 = g->edx;
    wr32(sp0 - 0xd0u, t72 + 0x1cu);
    g->eax = t72 + 0x1cu;
    g->edx = t73;
    t74 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x7cu, 1, t72 + 0x1cu);
    t75 = g->edx;
    wr32(sp0 - 0xd0u, t74);
    g->edx = t75;
    t76 = cow_thiscall(g, COW_IMG(0x1010de90u), rd32(sp0 - 0xbcu), 1, t74);
    t77 = g->edx;
    wr32(sp0 - 0xbcu, t76);
    g->edx = t77;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x7cu, 0);
    t78 = g->edx;
    if (rd32(sp0 - 0xbcu) == 0u)
    {
        edx = t78;
        loc_bc = rd32(sp0 - 0xbcu);
        goto L_10218f03;
    }
    eax = rd32(sp0 - 0xbcu);
    COW_AT(10218e06)
    if (rd32(eax + 4u) == 0u)
    {
    COW_AT(10218e18)
        wr32(sp0 - 0xb0u, 0u);
        ecx = 0u;
        loc_b0 = 0u;
    }
    else
    {
        eax = rd32(eax + 4u);
    COW_AT(10218e0f)
        t79 = rd32(eax + 4u);
        wr32(sp0 - 0xb0u, t79);
        ecx = t79;
        loc_b0 = t79;
    }
    COW_AT(10218e1e)
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x80u, 0u);
    t80 = (uint16_t)rd32(sp0 - 0x90u) - 0x1eu;
    wr32(sp0 - 0xa8u, t80);
    edx = 0u;
    loc_b8 = 0u;
    loc_84 = 0u;
    loc_a8 = t80;
L_10218e40: ;
    COW_AT(10218e40)
    if (rd8(ecx) == 0u) goto L_10218ee7;
    COW_AT(10218e49)
    wr32(sp0 - 0xd0u, sp0 - 0x84u);
    wr32(sp0 - 0xd4u, sp0 - 0xbcu);
    wr32(sp0 - 0xbcu, ecx);
    g->eax = sp0 - 0xbcu;
    g->ecx = ecx;
    g->edx = sp0 - 0x84u;
    g->esp = sp0 - 0xc8u;
    t81 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 - 0xbcu, sp0 - 0x84u, rd32(sp0 - 0xccu));
    t82 = g->ecx;
    t83 = g->edx;
    wr32(sp0 - 0xd4u, t81);
    g->edx = t83;
    g->esp = sp0 - 0xccu;
    cow_call_regs(g, COW_IMG(0x1011d840u), t81, g->ecx, g->edx, 1, 2, t81, sp0 - 0x84u);
    t84 = g->edx;
    if (rd32(sp0 - 0xbcu) <= rd32(sp0 - 0xb0u))
    {
        eax = rd32(sp0 - 0xb0u);
        edx = t84;
        loc_b8 = rd32(sp0 - 0xb8u);
        goto L_10218ebf;
    }
    eax = rd32(sp0 - 0xb0u);
    ecx = rd32(sp0 - 0xbcu);
    edx = t84;
    COW_AT(10218e74)
    if ((int32_t)(ecx - eax) > 2)
    {
        loc_b8 = rd32(sp0 - 0xb8u);
        goto L_10218ebf;
    }
    ecx = ecx - eax;
    COW_AT(10218e7b)
    if ((int32_t)ecx <= 1) goto L_10218e87;
    COW_AT(10218e80)
    if (rd8(eax + 1u) == 0u)
    {
        loc_b8 = rd32(sp0 - 0xb8u);
        goto L_10218ebf;
    }
L_10218e87: ;
    COW_AT(10218e87)
    if ((int32_t)rd32(sp0 - 0x84u) > (int32_t)rd32(sp0 - 0xa8u))
    {
        edx = rd32(sp0 - 0x84u);
        loc_b8 = rd32(sp0 - 0xb8u);
        goto L_10218ebf;
    }
    edx = rd32(sp0 - 0x84u);
    loc_b8 = rd32(sp0 - 0xb8u);
L_10218e93: ;
    COW_AT(10218e93)
    t85 = rd8(eax);
    wr8(loc_b8 + sp0 - 0x40u, (uint8_t)t85);
    wr32(sp0 - 0xb8u, loc_b8 + 1u);
    if (eax + 1u < rd32(sp0 - 0xbcu))
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t85;
        loc_b8 = loc_b8 + 1u;
        goto L_10218e93;
    }
    eax = eax + 1u;
    edx = (edx & 0xffffff00u) | t85;
    loc_b8 = loc_b8 + 1u;
    COW_AT(10218eae)
    wr32(sp0 - 0xb0u, eax);
    if ((int32_t)loc_b8 < 48)
    {
        loc_b0 = eax;
        goto L_10218e3c;
    }
    loc_b0 = eax;
    COW_AT(10218ebb)
    eax = loc_b0;
L_10218ebf: ;
    COW_AT(10218ebf)
    if (rd8(eax) != 0u)
    {
    COW_AT(10218ec4)
        wr8(loc_b8 + sp0 - 0x40u, 0x2eu);
        wr8(loc_b8 + sp0 - 0x3fu, 0x2eu);
        wr8(loc_b8 + sp0 - 0x3eu, 0x2eu);
        wr32(sp0 - 0xb8u, loc_b8 + 3u);
        loc_b8 = loc_b8 + 3u;
    }
L_10218ee7: ;
    COW_AT(10218ee7)
    wr32(sp0 - 0xd0u, 1u);
    wr8(loc_b8 + sp0 - 0x40u, 0u);
    wr32(sp0 - 0xd4u, self + 0x52u);
    wr32(sp0 - 0xd8u, sp0 - 0x40u);
    loc_d8 = sp0 - 0x40u;
    loc_bc = rd32(sp0 - 0xbcu);
L_10218f0e: ;
    COW_AT(10218f0e)
    wr32(sp0 - 0xdcu, self);
    g->esp = sp0 - 0xccu;
    cow_call_regs(g, COW_IMG(0x1021bb20u), self + 0x52u, sp0 - 0x98u, edx, 0, 4, self, loc_d8, self + 0x52u, 1u);
    t86 = g->edx;
    edx = t86;
    goto L_10218f18;
L_10218e3c: ;
    COW_AT(10218e3c)
    ecx = loc_b0;
    loc_84 = rd32(sp0 - 0x84u);
    loc_a8 = rd32(sp0 - 0xa8u);
    goto L_10218e40;
L_10218f03: ;
    COW_AT(10218f03)
    wr32(sp0 - 0xd0u, 1u);
    wr32(sp0 - 0xd4u, self + 0x52u);
    wr32(sp0 - 0xd8u, COW_IMG(0x103d3c84u));
    loc_d8 = COW_IMG(0x103d3c84u);
    goto L_10218f0e;
L_10218fa7: ;
    COW_AT(10218fa7)
    eax = 0u;
    goto L_10218fa9;
L_10219029: ;
    COW_AT(10219029)
    t98 = rd16(ebp + 0x74u);
    wr16(self + 0x240u, 0u);
    wr16(self + 0x242u, (uint16_t)t98);
    t99 = rd16(self + 0x60u);
    wr16(self + 0x23cu, (uint16_t)t99);
    wr32(sp0 - 0xd0u, 0u);
    t100 = rd32(sp0 - 0xacu);
    wr16(self + 0x23eu, (uint16_t)((uint16_t)t98 + rd16(self + 0x62u)));
    wr32(sp0 - 0xd4u, 0u);
    t101 = rd32(sp0 - 0xa4u);
    wr16(self + 0x246u, 0u);
    wr32(sp0 - 0xd8u, t100);
    wr32(sp0 - 0xdcu, self + 0x23cu);
    wr32(sp0 - 0xe0u, ebx);
    wr32(sp0 - 0xe4u, sp0 - 0xa0u);
    wr32(sp0 - 0xe8u, t101);
    wr16(self + 0x244u, 0x64u);
    g->eax = t100;
    g->esp = sp0 - 0xccu;
    t102 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, t101, sp0 - 0xa0u, ebx, self + 0x23cu, t100, 0u, 0u);
    wr32(sp0 - 0xa4u, t102);
    if ((int16_t)rd16(self + rd32(sp0 - 0xb4u) * 0xeu + 0x70u) < (int32_t)(rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u)))
    {
        loc_a4 = t102;
        goto L_102190af;
    }
    eax = rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u);
    edx = (uint32_t)(int16_t)rd16(self + rd32(sp0 - 0xb4u) * 0xeu + 0x70u);
    loc_a4 = t102;
    COW_AT(10219093)
    if ((int16_t)(rd16(ebx + 0xau) + rd16(ebx + 2u)) >= (int16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu))) goto L_102190af;
    COW_AT(102190a8)
    eax = 1u;
L_102190b1: ;
    COW_AT(102190b1)
    wr32(sp0 - 0xd0u, eax);
    t103 = (rd32(sp0 - 0xb4u) & 0xffffff00u) | rd32(sp0 - 0xb4u) == (uint32_t)(int16_t)rd16(self + 0x14u);
    wr32(sp0 - 0xd4u, t103);
    edx = t103;
    loc_d4 = t103;
    loc_d0 = eax;
    goto L_102190c0;
L_102190af: ;
    COW_AT(102190af)
    eax = 0u;
    goto L_102190b1;
L_10219178: ;
    COW_AT(10219178)
    wr16(COW_IMG(0x1066469cu), 0u);
    goto L_1021917f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10218ac0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10218b37u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->edi = 0u;
        wr32(sp0 - 0xc4u, in_ebp);
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10218b67u:
    {
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
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->edi = 0u;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10218bdbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ecx = self + 0x6eu;
        g->edx = self + 0x52u;
        g->edi = 0u;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10218be0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ecx = self + 0x6eu;
        g->edx = self + 0x52u;
        g->edi = 0u;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10218be2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ecx = self + 0x6eu;
        g->edx = self + 0x52u;
        g->edi = 0u;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10218c27u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        g->ebp = 1u;
        wr32(sp0 - 0xacu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10218c2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218ca1u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218ca6u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218ca8u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218cc3u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218cd4u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218d59u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218dcdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_bc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_bc = rd32(sp0 - 0xbcu);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218e06u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218e0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218e18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218e1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218e3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218e40u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_a8;
        uint32_t loc_b0;
        uint32_t loc_b8;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218e49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_a8;
        uint32_t loc_b0;
        uint32_t loc_b8;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218e74u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218e7bu:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218e80u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218e87u:
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
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218e93u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218eaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218ebbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218ebfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218ec4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd0u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10218ee7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_a8;
        uint32_t loc_b0;
        uint32_t loc_b8;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218f03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_bc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_bc = rd32(sp0 - 0xbcu);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218f0eu:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_a8;
        uint32_t loc_b0;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_d8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xd8u;
        g->eax = self + 0x52u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xd4u, self + 0x52u);
        wr32(sp0 - 0xd0u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10218f18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218f28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->ecx = 0u;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218f39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->ecx = 0u;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218f8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a8;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218fa0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a8;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218fa7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a8;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218fa9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a8;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10219007u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        g->eax = 0u;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x1021901cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10219021u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10219029u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->ecx = 0u;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10219093u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x102190a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x102190afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x102190b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x102190c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xd4u;
        g->edi = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x1021910au:
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
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x1021910cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10219119u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10219122u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021912bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10219138u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x1021913du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10219140u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x1021914bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10219164u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10219178u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021917fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10219246u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x10219252u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x102192dfu:
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
        g->esp = sp0 - 0xccu;
        g->ebp = self + 0x22eu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x10219338u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x10219344u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x1021935eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x1021940eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x1021941au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x10219467u:
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
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x1021946du:
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
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x10219472u:
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
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x1021947du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xe4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10218ac0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10218ac0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
