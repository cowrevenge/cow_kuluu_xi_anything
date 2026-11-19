/* f_0x10039e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10039e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_4c;
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
    uint32_t t17;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10039e73u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10039e73;
    case 0x10039e7au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10039e7a;
    case 0x10039e84u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10039e84;
    case 0x10039e88u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10039e88;
    case 0x10039e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10039e8c;
    case 0x10039e90u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10039e90;
    case 0x10039e9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10039e9b;
    case 0x10039ea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10039ea6;
    case 0x10039eafu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10039eaf;
    case 0x10039eceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10039ece;
    case 0x10039ed6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_10039ed6;
    case 0x10039ee8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10039ee8;
    case 0x10039efau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_10039efa;
    case 0x10039f02u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_10039f02;
    case 0x10039f0au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_10039f0a;
    case 0x10039f14u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_10039f14;
    case 0x10039f22u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10039f22;
    case 0x10039f27u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_10039f27;
    case 0x10039f33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_10039f33;
    case 0x10039f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_10039f50;
    case 0x10039f61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_10039f61;
    case 0x10039f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_10039f70;
    case 0x10039ff2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_10039ff2;
    case 0x1003a010u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a010;
    case 0x1003a042u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a042;
    case 0x1003a06cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a06c;
    case 0x1003a080u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a080;
    case 0x1003a091u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a091;
    case 0x1003a094u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a094;
    case 0x1003a097u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a097;
    case 0x1003a0a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a0a6;
    case 0x1003a0b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a0b5;
    case 0x1003a0bau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1003a0ba;
    case 0x1003a0c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a0c4;
    case 0x1003a0e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a0e1;
    case 0x1003a0f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a0f2;
    case 0x1003a101u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a101;
    case 0x1003a17bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a17b;
    case 0x1003a1a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a1a6;
    case 0x1003a1d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a1d6;
    case 0x1003a1efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a1ef;
    case 0x1003a203u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a203;
    case 0x1003a210u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a210;
    case 0x1003a213u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a213;
    case 0x1003a216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a216;
    case 0x1003a225u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a225;
    case 0x1003a234u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a234;
    case 0x1003a239u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1003a239;
    case 0x1003a243u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a243;
    case 0x1003a260u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a260;
    case 0x1003a271u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a271;
    case 0x1003a280u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a280;
    case 0x1003a2e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a2e2;
    case 0x1003a308u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a308;
    case 0x1003a325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a325;
    case 0x1003a36eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a36e;
    case 0x1003a3beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a3be;
    case 0x1003a3c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a3c1;
    case 0x1003a3d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a3d0;
    case 0x1003a3dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a3df;
    case 0x1003a3ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003a3eb;
    case 0x1003a3edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a3ed;
    case 0x1003a415u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a415;
    case 0x1003a421u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a421;
    case 0x1003a42eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a42e;
    case 0x1003a436u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a436;
    case 0x1003a43fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a43f;
    case 0x1003a449u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a449;
    case 0x1003a451u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a451;
    case 0x1003a456u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a456;
    case 0x1003a45bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a45b;
    case 0x1003a462u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a462;
    case 0x1003a467u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a467;
    case 0x1003a483u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_1003a483;
    case 0x1003a487u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_1003a487;
    case 0x1003a48fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_1003a48f;
    case 0x1003a495u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1003a495;
    case 0x1003a499u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a499;
    case 0x1003a4a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a4a1;
    case 0x1003a4a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1003a4a7;
    case 0x1003a4abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a4ab;
    case 0x1003a4b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a4b3;
    case 0x1003a4b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a4b9;
    case 0x1003a4c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a4c3;
    case 0x1003a4ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a4cc;
    case 0x1003a4d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a4d1;
    case 0x1003a4d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a4d6;
    case 0x1003a4f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_1003a4f2;
    case 0x1003a4f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a4f6;
    case 0x1003a508u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a508;
    case 0x1003a50du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a50d;
    case 0x1003a516u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a516;
    case 0x1003a51eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1003a51e;
    case 0x1003a524u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a524;
    case 0x1003a537u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a537;
    case 0x1003a54bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a54b;
    case 0x1003a556u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a556;
    case 0x1003a558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a558;
    case 0x1003a560u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1003a560;
    case 0x1003a566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a566;
    case 0x1003a579u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a579;
    case 0x1003a58cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a58c;
    case 0x1003a597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a597;
    case 0x1003a5a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a5a2;
    case 0x1003a5b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003a5b1;
    case 0x1003a5beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1003a5be;
    case 0x1003a5c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_1003a5c6;
    case 0x1003a5c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a5c8;
    case 0x1003a5d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a5d8;
    case 0x1003a5ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a5ec;
    case 0x1003a602u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a602;
    case 0x1003a60au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a60a;
    case 0x1003a610u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a610;
    case 0x1003a614u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1003a614;
    case 0x1003a61cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1003a61c;
    case 0x1003a622u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a622;
    case 0x1003a626u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a626;
    case 0x1003a62cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a62c;
    case 0x1003a637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a637;
    case 0x1003a64au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a64a;
    case 0x1003a652u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a652;
    case 0x1003a682u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a682;
    case 0x1003a684u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a684;
    case 0x1003a694u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a694;
    case 0x1003a6aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a6aa;
    case 0x1003a6b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a6b2;
    case 0x1003a6b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a6b8;
    case 0x1003a6bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a6bc;
    case 0x1003a6c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a6c4;
    case 0x1003a6cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a6ca;
    case 0x1003a6ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_1c = rd32(sp0 - 0x1cu); goto E_1003a6cc;
    case 0x1003a6e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a6e2;
    case 0x1003a6f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a6f8;
    case 0x1003a70eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a70e;
    case 0x1003a716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a716;
    case 0x1003a71cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a71c;
    case 0x1003a720u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003a720;
    case 0x1003a728u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003a728;
    case 0x1003a72eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a72e;
    case 0x1003a732u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a732;
    case 0x1003a73cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a73c;
    case 0x1003a744u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_1003a744;
    case 0x1003a748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a748;
    case 0x1003a754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a754;
    case 0x1003a75au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003a75a;
    case 0x1003a75fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a75f;
    case 0x1003a765u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a765;
    case 0x1003a775u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a775;
    case 0x1003a779u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a779;
    case 0x1003a7a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a7a9;
    case 0x1003a7abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a7ab;
    case 0x1003a7bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a7bb;
    case 0x1003a7d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a7d1;
    case 0x1003a7d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a7d9;
    case 0x1003a7dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a7df;
    case 0x1003a7e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a7e3;
    case 0x1003a7ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a7eb;
    case 0x1003a7f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a7f1;
    case 0x1003a7f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a7f7;
    case 0x1003a801u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a801;
    case 0x1003a808u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1003a808;
    case 0x1003a813u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1003a813;
    case 0x1003a81bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1003a81b;
    case 0x1003a81fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a81f;
    case 0x1003a827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a827;
    case 0x1003a82bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a82b;
    case 0x1003a83au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a83a;
    case 0x1003a86au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a86a;
    case 0x1003a86fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a86f;
    case 0x1003a87fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a87f;
    case 0x1003a88eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a88e;
    case 0x1003a8a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a8a4;
    case 0x1003a8acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a8ac;
    case 0x1003a8b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a8b2;
    case 0x1003a8b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003a8b6;
    case 0x1003a8beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003a8be;
    case 0x1003a8c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a8c4;
    case 0x1003a8c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a8c6;
    case 0x1003a8d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a8d8;
    case 0x1003a8e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a8e7;
    case 0x1003a8fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a8fd;
    case 0x1003a905u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a905;
    case 0x1003a90bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a90b;
    case 0x1003a90fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a90f;
    case 0x1003a917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a917;
    case 0x1003a91du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a91d;
    case 0x1003a921u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a921;
    case 0x1003a92bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1003a92b;
    case 0x1003a933u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003a933;
    case 0x1003a937u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a937;
    case 0x1003a941u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a941;
    case 0x1003a947u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003a947;
    case 0x1003a94fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a94f;
    case 0x1003a953u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a953;
    case 0x1003a959u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003a959;
    case 0x1003a95du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a95d;
    case 0x1003a965u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a965;
    case 0x1003a96bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1003a96b;
    default: break;
    }
#endif

    COW_AT(10039e50)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    t1 = rd8(self + 0x29u);
    wr8(sp0 - 0x2du, 0u);
    if ((int8_t)t1 >= 0)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        goto L_10039e84;
    }
    eax = (in_eax & 0xffffff00u) | t1;
    COW_AT(10039e73)
    if (rd32(rd32(self + 0x20u)) == 0u) goto L_10039e84;
    COW_AT(10039e7a)
    wr8(sp0 - 0x2du, 1u);
    edx = in_edx;
    ebx = in_ebx;
    loc_34 = in_ebx;
    loc_38 = in_ebp;
    loc_3c = in_esi;
    loc_40 = in_edi;
    loc_20 = 0u;
    loc_28 = 0u;
    loc_2c = 0u;
L_1003a3ed: ;
    COW_AT(1003a3ed)
    wr32(sp0 - 0xcu, 0u);
    t35 = rd16(self + 0x26u);
    wr32(sp0 - 4u, t35);
    wr32(sp0 - 0x10u, 0u);
    t36 = rd16(self + 0x24u);
    wr32(sp0 - 8u, t36);
    if ((rd8(self + 0x2cu) & 7u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0x2cu);
        goto L_1003a808;
    }
    eax = t35;
    ecx = t36;
    edx = (edx & 0xffffff00u) | rd8(self + 0x2cu);
    COW_AT(1003a415)
    wr32(sp0 - 0x24u, 0u);
    if (rd8(sp0 - 0x2du) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 - 0x2du);
        goto L_1003a449;
    }
    COW_AT(1003a421)
    if ((rd8(self + 0x29u) & 0xffffff7fu) == 0u) goto L_1003a462;
    edx = rd8(self + 0x29u) & 0xffffff7fu;
    COW_AT(1003a42e)
    if ((int32_t)edx <= 0) goto L_1003a4c3;
    COW_AT(1003a436)
    if ((int32_t)edx > 4) goto L_1003a4c3;
    COW_AT(1003a43f)
    edi = 0x20u;
L_1003a4d6: ;
    COW_AT(1003a4d6)
    wr32(sp0 - 0x44u, sp0 - 0x24u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x15u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, ecx);
    t37 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t37);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t37;
    g->esp = sp0 - 0x40u;
    t38 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t37, ecx, eax, 0u, 0u, 0x15u, 1u, sp0 - 0x24u);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(1003a4f2)
    if ((int32_t)eax < 0) goto L_1003a487;
    ebx = sp0 - 0x24u;
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_24 = rd32(sp0 - 0x24u);
L_1003a4f6: ;
    COW_AT(1003a4f6)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, sp0 - 0x18u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, loc_24);
    g->edx = rd32(loc_24);
    t45 = rd32(loc_24);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(t45 + 0x40u), sp0 - 0x18u, 5, loc_24, 0u, sp0 - 0x18u, 0u, 0u);
    t46 = g->edx;
    edx = t46;
    COW_AT(1003a508)
    if (edi == 0x10u)
    {
    COW_AT(1003a558)
        if (rd16(self + 0x26u) != 0u)
        {
    COW_AT(1003a560)
            ecx = rd16(self + 0x24u);
            edi = 0u;
L_1003a566: ;
    COW_AT(1003a566)
            if ((int32_t)ecx <= 0)
            {
                edx = 0u;
                goto L_1003a58c;
            }
            eax = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * edi;
            edx = 0u;
L_1003a579: ;
    COW_AT(1003a579)
            wr16(eax, 0x8000u);
            if ((int32_t)(edx + 1u) < (int32_t)rd16(self + 0x24u))
            {
                eax = eax + 2u;
                edx = edx + 1u;
                goto L_1003a579;
            }
            ecx = rd16(self + 0x24u);
            edx = edx + 1u;
L_1003a58c: ;
    COW_AT(1003a58c)
            if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x26u))
            {
                edi = edi + 1u;
                goto L_1003a566;
            }
        }
    }
    else
    {
    COW_AT(1003a50d)
        if (edi == 0x20u)
        {
    COW_AT(1003a516)
            if (rd16(self + 0x26u) != 0u)
            {
    COW_AT(1003a51e)
                ecx = rd16(self + 0x24u);
                edi = 0u;
L_1003a524: ;
    COW_AT(1003a524)
                if ((int32_t)ecx <= 0) goto L_1003a54b;
                eax = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * edi;
                edx = 0u;
L_1003a537: ;
    COW_AT(1003a537)
                wr32(eax, 0x80000000u);
                if ((int32_t)(edx + 1u) < (int32_t)rd16(self + 0x24u))
                {
                    eax = eax + 4u;
                    edx = edx + 1u;
                    goto L_1003a537;
                }
                ecx = rd16(self + 0x24u);
L_1003a54b: ;
    COW_AT(1003a54b)
                if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x26u))
                {
                    edi = edi + 1u;
                    goto L_1003a524;
                }
                edx = rd16(self + 0x26u);
    COW_AT(1003a556)
            }
        }
    }
    COW_AT(1003a597)
    wr32(sp0 - 0x44u, 0u);
    t47 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x48u, t47);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(t47) + 0x44u), rd32(t47), 2, t47, 0u);
    COW_AT(1003a5a2)
    if ((rd32(self + 0x2cu) & 7u) >= 6u)
    {
    COW_AT(1003a75f)
        ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x2du);
        edi = 0u;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
L_1003a765: ;
    COW_AT(1003a765)
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, edi);
        t92 = rd32(self + 0x44u);
        wr32(sp0 - 0x50u, t92);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0x44u)) + 0x3cu), sp0 - 0x2cu, 4, t92, edi, 0u, sp0 - 0x2cu);
    COW_AT(1003a775)
        if ((uint8_t)ebx == 0u)
        {
    COW_AT(1003a7ab)
            wr32(sp0 - 0x44u, sp0 - 0x28u);
            wr32(sp0 - 0x48u, 0u);
            t98 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x4cu, t98);
            g->edx = sp0 - 0x28u;
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(rd32(rd32(sp0 - 0x20u)) + 0x3cu), rd32(rd32(sp0 - 0x20u)), 3, t98, 0u, sp0 - 0x28u);
            t99 = g->edx;
            edx = t99;
    COW_AT(1003a7bb)
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, 0u);
            t100 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x54u, t100);
            wr32(sp0 - 0x58u, 0u);
            wr32(sp0 - 0x5cu, 0u);
            t101 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x60u, t101);
            g->ecx = t101;
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_stdcall(g, COW_IMG(0x102d4535u), 8, t101, 0u, 0u, t100, 0u, 0u, 1u, 0u);
            t102 = g->ecx;
            t103 = g->edx;
            ecx = t102;
            edx = t103;
    COW_AT(1003a7d1)
            if (rd32(sp0 - 0x28u) == 0u)
            {
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = rd32(sp0 - 0x28u);
    COW_AT(1003a7d9)
                wr32(sp0 - 0x44u, eax);
                g->edx = rd32(eax);
                t104 = rd32(eax);
                g->esp = sp0 - 0x40u;
                cow_thiscall(g, rd32(t104 + 8u), ecx, 1, eax);
                t105 = g->edx;
                edx = t105;
    COW_AT(1003a7df)
                wr32(sp0 - 0x28u, 0u);
                loc_28 = 0u;
            }
        }
        else
        {
    COW_AT(1003a779)
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, sp0 - 0x10u);
            wr32(sp0 - 0x50u, 0u);
            t93 = rd32(rd32(self + 0x20u) + 4u);
            wr32(sp0 - 0x54u, t93);
            t94 = rd32(COW_IMG(0x10351c94u) + ((rd8(self + 0x29u) & 0xffffff00u) | (rd8(self + 0x29u) & 0x7fu)) * 4u);
            wr32(sp0 - 0x58u, t94);
            t95 = rd32(self + 0x20u) + 8u;
            wr32(sp0 - 0x5cu, t95);
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0u);
            t96 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x68u, t96);
            g->edx = t96;
            g->esp = sp0 - 0x40u;
            cow_stdcall(g, COW_IMG(0x102d2888u), 10, t96, 0u, 0u, t95, t94, t93, 0u, sp0 - 0x10u, 1u, 0u);
            t97 = g->edx;
            edx = t97;
    COW_AT(1003a7a9)
            loc_28 = rd32(sp0 - 0x28u);
        }
    COW_AT(1003a7e3)
        if (rd32(sp0 - 0x2cu) == 0u)
        {
            eax = rd32(sp0 - 0x2cu);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        else
        {
            eax = rd32(sp0 - 0x2cu);
    COW_AT(1003a7eb)
            wr32(sp0 - 0x44u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t106 = g->edx;
            edx = t106;
    COW_AT(1003a7f1)
            wr32(sp0 - 0x2cu, 0u);
            eax = 0u;
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = 0u;
        }
    COW_AT(1003a7f7)
        if ((int32_t)(edi + 1u) < 6)
        {
            edi = edi + 1u;
            goto L_1003a765;
        }
    COW_AT(1003a801)
    }
    else
    {
        edx = rd32(self + 0x2cu) & 7u;
    COW_AT(1003a5b1)
        t48 = rd32(self + 0x44u);
        wr32(sp0 - 0x44u, t48);
        g->eax = t48;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t49 = cow_thiscall(g, rd32(rd32(t48) + 0x34u), rd32(t48), 1, t48);
        t50 = g->edx;
        eax = t49;
        edx = t50;
    COW_AT(1003a5be)
        if (eax == 0u) goto L_1003a744;
        ebx = 0u;
L_1003a5c6: ;
    COW_AT(1003a5c6)
        edi = 0u;
        loc_2c = rd32(sp0 - 0x2cu);
L_1003a5c8: ;
    COW_AT(1003a5c8)
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        wr32(sp0 - 0x48u, ebx);
        wr32(sp0 - 0x4cu, edi);
        t51 = rd32(self + 0x44u);
        wr32(sp0 - 0x50u, t51);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0x44u)) + 0x3cu), sp0 - 0x2cu, 4, t51, edi, ebx, sp0 - 0x2cu);
    COW_AT(1003a5d8)
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        wr32(sp0 - 0x48u, 0u);
        t52 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x4cu, t52);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(rd32(sp0 - 0x24u)) + 0x3cu), sp0 - 0x1cu, 3, t52, 0u, sp0 - 0x1cu);
        t53 = g->ecx;
        ecx = t53;
    COW_AT(1003a5ec)
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x48u, 1u);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, 0u);
        t54 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x54u, t54);
        wr32(sp0 - 0x58u, 0u);
        wr32(sp0 - 0x5cu, 0u);
        t55 = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x60u, t55);
        g->ecx = ecx;
        g->edx = t54;
        g->esp = sp0 - 0x40u;
        cow_stdcall(g, COW_IMG(0x102d4535u), 8, t55, 0u, 0u, t54, 0u, 0u, 1u, 0u);
        t56 = g->ecx;
        t57 = g->edx;
        ecx = t56;
        edx = t57;
    COW_AT(1003a602)
        if (rd32(sp0 - 0x1cu) != 0u)
        {
            eax = rd32(sp0 - 0x1cu);
    COW_AT(1003a60a)
            wr32(sp0 - 0x44u, eax);
            t58 = rd32(eax);
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(t58 + 8u), t58, 1, eax);
            t59 = g->ecx;
            ecx = t59;
    COW_AT(1003a610)
            wr32(sp0 - 0x1cu, 0u);
        }
    COW_AT(1003a614)
        if (rd32(sp0 - 0x2cu) == 0u)
        {
            loc_2c = rd32(sp0 - 0x2cu);
        }
        else
        {
            eax = rd32(sp0 - 0x2cu);
    COW_AT(1003a61c)
            wr32(sp0 - 0x44u, eax);
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
    COW_AT(1003a622)
            wr32(sp0 - 0x2cu, 0u);
            loc_2c = 0u;
        }
    COW_AT(1003a626)
        if ((int32_t)(edi + 1u) < 6)
        {
            edi = edi + 1u;
            goto L_1003a5c8;
        }
    COW_AT(1003a62c)
        if (ebx != 0u)
        {
            eax = rd32(self + 0x44u);
            goto L_1003a6cc;
        }
        eax = rd32(self + 0x44u);
    COW_AT(1003a637)
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        wr32(sp0 - 0x48u, 0u);
        t60 = rd32(self + 0x2cu) & 7u;
        wr32(sp0 - 0x4cu, t60);
        wr32(sp0 - 0x50u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x40u;
        t61 = cow_thiscall(g, rd32(rd32(eax) + 0x3cu), rd32(eax), 4, eax, t60, 0u, sp0 - 0x2cu);
        eax = t61;
    COW_AT(1003a64a)
        if (rd8(sp0 - 0x2du) == 0u)
        {
    COW_AT(1003a684)
            wr32(sp0 - 0x44u, sp0 - 0x28u);
            wr32(sp0 - 0x48u, 0u);
            t67 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x4cu, t67);
            g->edx = sp0 - 0x28u;
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(rd32(rd32(sp0 - 0x20u)) + 0x3cu), rd32(rd32(sp0 - 0x20u)), 3, t67, 0u, sp0 - 0x28u);
            t68 = g->edx;
            edx = t68;
    COW_AT(1003a694)
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, 0u);
            t69 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x54u, t69);
            wr32(sp0 - 0x58u, 0u);
            wr32(sp0 - 0x5cu, 0u);
            t70 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x60u, t70);
            g->ecx = t70;
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_stdcall(g, COW_IMG(0x102d4535u), 8, t70, 0u, 0u, t69, 0u, 0u, 1u, 0u);
            t71 = g->ecx;
            t72 = g->edx;
            ecx = t71;
            edx = t72;
    COW_AT(1003a6aa)
            if (rd32(sp0 - 0x28u) == 0u)
            {
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = rd32(sp0 - 0x28u);
    COW_AT(1003a6b2)
                wr32(sp0 - 0x44u, eax);
                g->edx = rd32(eax);
                t73 = rd32(eax);
                g->esp = sp0 - 0x40u;
                cow_thiscall(g, rd32(t73 + 8u), ecx, 1, eax);
                t74 = g->edx;
                edx = t74;
    COW_AT(1003a6b8)
                wr32(sp0 - 0x28u, 0u);
                loc_28 = 0u;
            }
        }
        else
        {
    COW_AT(1003a652)
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, sp0 - 0x10u);
            wr32(sp0 - 0x50u, 0u);
            t62 = rd32(rd32(self + 0x20u) + 4u);
            wr32(sp0 - 0x54u, t62);
            t63 = rd32(COW_IMG(0x10351c94u) + ((rd8(self + 0x29u) & 0xffffff00u) | (rd8(self + 0x29u) & 0x7fu)) * 4u);
            wr32(sp0 - 0x58u, t63);
            t64 = rd32(self + 0x20u) + 8u;
            wr32(sp0 - 0x5cu, t64);
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0u);
            t65 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x68u, t65);
            g->edx = t63;
            g->esp = sp0 - 0x40u;
            cow_stdcall(g, COW_IMG(0x102d2888u), 10, t65, 0u, 0u, t64, t63, t62, 0u, sp0 - 0x10u, 1u, 0u);
            t66 = g->edx;
            edx = t66;
    COW_AT(1003a682)
            loc_28 = rd32(sp0 - 0x28u);
        }
    COW_AT(1003a6bc)
        if (rd32(sp0 - 0x2cu) == 0u)
        {
            loc_2c = rd32(sp0 - 0x2cu);
            goto L_1003a732;
        }
        eax = rd32(sp0 - 0x2cu);
    COW_AT(1003a6c4)
        wr32(sp0 - 0x44u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t75 = g->edx;
        edx = t75;
    COW_AT(1003a6ca)
L_1003a72e: ;
    COW_AT(1003a72e)
        wr32(sp0 - 0x2cu, 0u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = 0u;
L_1003a732: ;
    COW_AT(1003a732)
        t89 = rd32(self + 0x44u);
        wr32(sp0 - 0x44u, t89);
        g->eax = t89;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t90 = cow_thiscall(g, rd32(rd32(t89) + 0x34u), rd32(t89), 1, t89);
        t91 = g->edx;
        eax = t90;
        edx = t91;
        ebx = ebx + 1u;
    COW_AT(1003a73c)
        if (ebx < eax) goto L_1003a5c6;
L_1003a744: ;
    COW_AT(1003a744)
        eax = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
    }
    COW_AT(1003a748)
    if (rd32(sp0 - 0x24u) == 0u) goto L_1003a937;
    ecx = rd32(sp0 - 0x24u);
    COW_AT(1003a754)
    wr32(sp0 - 0x44u, ecx);
    g->edx = rd32(ecx);
    t107 = rd32(ecx);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(t107 + 8u), ecx, 1, ecx);
    t108 = g->edx;
    edx = t108;
    COW_AT(1003a75a)
L_1003a933: ;
    COW_AT(1003a933)
    eax = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
L_1003a937: ;
    COW_AT(1003a937)
    if (loc_28 == 0u)
    {
        ecx = loc_28;
    }
    else
    {
        ecx = loc_28;
    COW_AT(1003a941)
        wr32(sp0 - 0x44u, ecx);
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
        t145 = g->ecx;
        t146 = g->edx;
        ecx = t145;
        edx = t146;
    COW_AT(1003a947)
        wr32(sp0 - 0x28u, 0u);
        eax = rd32(sp0 - 0x2cu);
    }
    COW_AT(1003a94f)
    if (eax != 0u)
    {
    COW_AT(1003a953)
        wr32(sp0 - 0x44u, eax);
        g->edx = edx;
        t147 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t147 + 8u), t147, 1, eax);
        t148 = g->ecx;
        t149 = g->edx;
        ecx = t148;
        edx = t149;
    COW_AT(1003a959)
        wr32(sp0 - 0x2cu, 0u);
    }
    COW_AT(1003a95d)
    if (rd32(sp0 - 0x20u) == 0u)
    {
        eax = rd32(sp0 - 0x20u);
    }
    else
    {
        eax = rd32(sp0 - 0x20u);
    COW_AT(1003a965)
        wr32(sp0 - 0x44u, eax);
        g->eax = eax;
        g->edx = rd32(eax);
        t150 = rd32(eax);
        g->esp = sp0 - 0x40u;
        t151 = cow_thiscall(g, rd32(t150 + 8u), ecx, 1, eax);
        t152 = g->edx;
        eax = t151;
        edx = t152;
    }
    COW_AT(1003a96b)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10039e84: ;
    COW_AT(10039e84)
    if ((uint8_t)eax == 0x10u) goto L_10039ea6;
    COW_AT(10039e88)
    if ((uint8_t)eax == 0x18u) goto L_10039e9b;
    COW_AT(10039e8c)
    if ((uint8_t)eax != 0x20u)
    {
        loc_34 = in_ebx;
        loc_38 = in_ebp;
        loc_3c = in_esi;
        loc_40 = in_edi;
        loc_20 = 0u;
        loc_28 = 0u;
        loc_2c = 0u;
        goto L_10039ed6;
    }
    COW_AT(10039e90)
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x15u);
    loc_4c = 0x15u;
L_10039eaf: ;
    COW_AT(10039eaf)
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0u);
    t2 = rd16(self + 0x26u);
    wr32(sp0 - 0x58u, t2);
    t3 = rd16(self + 0x24u);
    wr32(sp0 - 0x5cu, t3);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t4);
    g->eax = t4;
    g->ecx = t3;
    g->edx = t2;
    g->esp = sp0 - 0x40u;
    t5 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t4, t3, t2, 0u, 0u, loc_4c, 1u, sp0 - 0x20u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(10039ece)
    if ((int32_t)eax < 0) goto L_1003a487;
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
L_10039ed6: ;
    COW_AT(10039ed6)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, sp0 - 0x18u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, loc_20);
    g->eax = loc_20;
    g->esp = sp0 - 0x40u;
    t8 = cow_thiscall(g, rd32(rd32(loc_20) + 0x40u), sp0 - 0x18u, 5, loc_20, 0u, sp0 - 0x18u, 0u, 0u);
    t9 = g->ecx;
    eax = t8;
    ecx = t9;
    COW_AT(10039ee8)
    t10 = rd32(self + 0x1cu);
    wr32(sp0 - 0x1cu, t10);
    if (rd8(self + 0x29u) == 0x10u)
    {
        loc_1c = t10;
        goto L_1003a239;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x29u);
    edx = t10;
    loc_1c = t10;
    COW_AT(10039efa)
    if ((uint8_t)eax == 0x18u) goto L_1003a0ba;
    COW_AT(10039f02)
    if ((uint8_t)eax != 0x20u)
    {
        ebx = in_ebx;
        goto L_1003a3df;
    }
    COW_AT(10039f0a)
    if (!(rd32(self + 0x2cu) >> 3u & 1u)) goto L_10039f27;
    eax = rd32(self + 0x2cu) >> 3u;
    COW_AT(10039f14)
    wr32(sp0 - 0x44u, sp0 - 0x18u);
    wr32(sp0 - 0x48u, self);
    t11 = rd32(self + 8u);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x1001e0a0u), t11, 2, self, sp0 - 0x18u);
    t12 = g->ecx;
    ecx = t12;
    COW_AT(10039f22)
    ebx = in_ebx;
    loc_1c = rd32(sp0 - 0x1cu);
L_1003a3df: ;
    COW_AT(1003a3df)
    wr32(sp0 - 0x44u, 0u);
    t32 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x48u, t32);
    g->edx = rd32(t32);
    t33 = rd32(t32);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(t33 + 0x44u), ecx, 2, t32, 0u);
    t34 = g->edx;
    edx = t34;
    COW_AT(1003a3eb)
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    goto L_1003a3ed;
L_10039e9b: ;
    COW_AT(10039e9b)
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x14u);
    loc_4c = 0x14u;
    goto L_10039eaf;
L_10039ea6: ;
    COW_AT(10039ea6)
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x19u);
    loc_4c = 0x19u;
    goto L_10039eaf;
L_10039f27: ;
    COW_AT(10039f27)
    if (rd16(self + 0x26u) == 0u)
    {
        ebx = in_ebx;
        goto L_1003a3df;
    }
    ebx = in_ebx;
    ebp = 0u;
L_10039f33: ;
    COW_AT(10039f33)
    if ((int32_t)rd16(self + 0x24u) <= 0)
    {
        ecx = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * ebp;
        goto L_1003a0a6;
    }
    ecx = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * ebp;
    edx = rd16(self + 0x24u);
    edi = 0u;
L_10039f50: ;
    COW_AT(10039f50)
    if (rd8(self + 0x28u) - 4u > 0x1cu) goto L_1003a097;
    eax = rd8(self + 0x28u) - 4u;
    COW_AT(10039f61)
    t13 = rd32(COW_IMG(0x1003a978u) + rd8(COW_IMG(0x1003a990u) + eax) * 4u);
    switch (t13 - RD)
    {
    case 0x10039f70u: goto L_10039f70;
    case 0x10039ff2u: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_10039ff2;
    case 0x1003a010u: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_1003a010;
    case 0x1003a042u: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_1003a042;
    case 0x1003a06cu: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_1003a06c;
    case 0x1003a097u: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_1003a097;
    default: rt_fatal(g, COW_IMG(0x10039f69u), "switch");
    }
    return 0;
L_10039f70: ;
    COW_AT(10039f70)
    t16 = rd32(rd32(self + 0x1cu) + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u)) >> 4u) * 4u);
    wr32(sp0 - 0x24u, t16);
    t17 = rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u));
    wr8(ecx, (uint8_t)t16);
    wr8(ecx + 1u, (uint8_t)(t16 >> 8u));
    wr8(ecx + 2u, (uint8_t)(t16 >> 0x10u));
    wr8(ecx + 3u, t16 >> 0x18u);
    t18 = rd32(rd32(self + 0x1cu) + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u) - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u)) >> 0x1fu)) >> 1u)) & 0xfu) * 4u);
    wr32(sp0 - 0x24u, t18);
    wr8(ecx + 4u, (uint8_t)t18);
    wr8(ecx + 5u, (uint8_t)(t18 >> 8u));
    wr8(ecx + 6u, (uint8_t)(t18 >> 0x10u));
    wr8(ecx + 7u, t18 >> 0x18u);
    ecx = ecx + 8u;
    ebx = t17 >> 4u;
    edi = edi + 1u;
L_1003a097: ;
    COW_AT(1003a097)
    if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x24u))
    {
        edx = rd16(self + 0x24u);
        edi = edi + 1u;
        goto L_10039f50;
    }
L_1003a0a6: ;
    COW_AT(1003a0a6)
    if ((int32_t)(ebp + 1u) < (int32_t)rd16(self + 0x26u))
    {
        ebp = ebp + 1u;
        goto L_10039f33;
    }
    COW_AT(1003a0b5)
    goto L_1003a3df;
L_10039ff2: ;
    COW_AT(10039ff2)
    eax = rd32(rd32(self + 0x1cu) + rd8(edi + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx) * 4u);
L_1003a080: ;
    COW_AT(1003a080)
    wr8(ecx + 1u, (uint8_t)(eax >> 8u));
    wr32(sp0 - 0x24u, eax);
    wr8(ecx, (uint8_t)eax);
    wr8(ecx + 3u, eax >> 0x18u);
    eax = (eax & 0xffff0000u) | eax >> 0x10u;
L_1003a091: ;
    COW_AT(1003a091)
    wr8(ecx + 2u, (uint8_t)eax);
L_1003a094: ;
    COW_AT(1003a094)
    ecx = ecx + 4u;
    goto L_1003a097;
L_1003a010: ;
    COW_AT(1003a010)
    t15 = rd32(edi * 2u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 2u);
    wr8(ecx, (uint8_t)(t15 << 3u));
    wr8(ecx + 1u, t15 >> 2u & 0xf8u);
    wr8(ecx + 2u, t15 >> 8u & 0x80u);
    goto L_1003a094;
L_1003a042: ;
    COW_AT(1003a042)
    t14 = rd32(edi * 3u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 3u);
    wr8(ecx + 3u, 0x80u);
    wr32(sp0 - 0x24u, t14);
    wr8(ecx, (uint8_t)t14);
    wr8(ecx + 1u, (uint8_t)(t14 >> 8u));
    eax = (t14 & 0xffffff00u) | (uint8_t)(t14 >> 0x10u);
    goto L_1003a091;
L_1003a06c: ;
    COW_AT(1003a06c)
    eax = rd32(edi * 4u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 4u);
    goto L_1003a080;
L_1003a0ba: ;
    COW_AT(1003a0ba)
    if (rd16(self + 0x26u) == 0u)
    {
        ebx = in_ebx;
        goto L_1003a3df;
    }
    ebx = in_ebx;
    ebp = 0u;
L_1003a0c4: ;
    COW_AT(1003a0c4)
    if ((int32_t)rd16(self + 0x24u) <= 0) goto L_1003a225;
    ecx = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * ebp;
    edx = rd16(self + 0x24u);
    edi = 0u;
L_1003a0e1: ;
    COW_AT(1003a0e1)
    if (rd8(self + 0x28u) - 4u > 0x1cu) goto L_1003a216;
    eax = rd8(self + 0x28u) - 4u;
    COW_AT(1003a0f2)
    t19 = rd32(COW_IMG(0x1003a9b0u) + rd8(COW_IMG(0x1003a9c8u) + eax) * 4u);
    switch (t19 - RD)
    {
    case 0x1003a101u: goto L_1003a101;
    case 0x1003a17bu: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a17b;
    case 0x1003a1a6u: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a1a6;
    case 0x1003a1d6u: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a1d6;
    case 0x1003a1efu: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a1ef;
    case 0x1003a216u: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a216;
    default: rt_fatal(g, COW_IMG(0x1003a0fau), "switch");
    }
    return 0;
L_1003a101: ;
    COW_AT(1003a101)
    t23 = rd32(rd32(self + 0x1cu) + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u)) >> 4u) * 4u);
    wr32(sp0 - 0x24u, t23);
    t24 = rd32(self + 0x20u);
    t25 = rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u));
    wr8(ecx, (uint8_t)t23);
    wr8(ecx + 1u, (uint8_t)(t23 >> 8u));
    wr8(ecx + 2u, (uint8_t)(t23 >> 0x10u));
    t26 = rd32(rd32(self + 0x1cu) + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u) - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u)) >> 0x1fu)) >> 1u)) & 0xfu) * 4u);
    wr32(sp0 - 0x24u, t26);
    wr8(ecx + 3u, (uint8_t)t26);
    wr8(ecx + 4u, (uint8_t)(t26 >> 8u));
    wr8(ecx + 5u, (uint8_t)(t26 >> 0x10u));
    ecx = ecx + 6u;
    ebx = t25 >> 4u;
    edi = edi + 1u;
L_1003a216: ;
    COW_AT(1003a216)
    if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x24u))
    {
        edx = rd16(self + 0x24u);
        edi = edi + 1u;
        goto L_1003a0e1;
    }
L_1003a225: ;
    COW_AT(1003a225)
    if ((int32_t)(ebp + 1u) < (int32_t)rd16(self + 0x26u))
    {
        ebp = ebp + 1u;
        goto L_1003a0c4;
    }
    ecx = rd16(self + 0x26u);
    COW_AT(1003a234)
    goto L_1003a3df;
L_1003a17b: ;
    COW_AT(1003a17b)
    t21 = rd32(rd32(self + 0x1cu) + rd8(edi + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx) * 4u);
    wr32(sp0 - 0x24u, t21);
    t22 = rd8(edi + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx);
    wr8(ecx, (uint8_t)t21);
    wr8(ecx + 2u, (uint8_t)(t21 >> 0x10u));
    eax = t21;
L_1003a210: ;
    COW_AT(1003a210)
    wr8(ecx + 1u, (uint8_t)(eax >> 8u));
L_1003a213: ;
    COW_AT(1003a213)
    ecx = ecx + 3u;
    goto L_1003a216;
L_1003a1a6: ;
    COW_AT(1003a1a6)
    t20 = rd32(edi * 2u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 2u);
    wr8(ecx, (uint8_t)(t20 << 3u));
    wr8(ecx + 1u, t20 >> 2u & 0xf8u);
    wr8(ecx + 2u, t20 >> 7u & 0xf8u);
    goto L_1003a213;
L_1003a1d6: ;
    COW_AT(1003a1d6)
    eax = rd32(edi * 3u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 3u);
L_1003a203: ;
    COW_AT(1003a203)
    wr32(sp0 - 0x24u, eax);
    wr8(ecx, (uint8_t)eax);
    wr8(ecx + 2u, (uint8_t)(eax >> 0x10u));
    eax = (eax & 0xffffff00u) | (uint8_t)(eax >> 0x10u);
    goto L_1003a210;
L_1003a1ef: ;
    COW_AT(1003a1ef)
    eax = rd32(edi * 4u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 4u);
    goto L_1003a203;
L_1003a239: ;
    COW_AT(1003a239)
    if (rd16(self + 0x26u) == 0u)
    {
        ebx = in_ebx;
        goto L_1003a3df;
    }
    ebx = in_ebx;
    ebp = 0u;
L_1003a243: ;
    COW_AT(1003a243)
    if ((int32_t)rd16(self + 0x24u) <= 0) goto L_1003a3d0;
    ecx = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * ebp;
    edx = rd16(self + 0x24u);
    edi = 0u;
L_1003a260: ;
    COW_AT(1003a260)
    if (rd8(self + 0x28u) - 4u > 0x1cu) goto L_1003a3c1;
    eax = rd8(self + 0x28u) - 4u;
    COW_AT(1003a271)
    t27 = rd32(COW_IMG(0x1003a9e8u) + rd8(COW_IMG(0x1003aa00u) + eax) * 4u);
    switch (t27 - RD)
    {
    case 0x1003a280u: goto L_1003a280;
    case 0x1003a2e2u: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a2e2;
    case 0x1003a308u: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a308;
    case 0x1003a325u: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a325;
    case 0x1003a36eu: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a36e;
    case 0x1003a3c1u: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a3c1;
    default: rt_fatal(g, COW_IMG(0x1003a279u), "switch");
    }
    return 0;
L_1003a280: ;
    COW_AT(1003a280)
    t31 = rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u));
    wr16(ecx, rd16(loc_1c + (t31 >> 4u) * 2u));
    wr16(ecx + 2u, rd16(loc_1c + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u) - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u)) >> 0x1fu)) >> 1u)) & 0xfu) * 2u));
    ecx = ecx + 4u;
    ebx = loc_1c;
    edi = edi + 1u;
L_1003a3c1: ;
    COW_AT(1003a3c1)
    if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x24u))
    {
        edx = rd16(self + 0x24u);
        edi = edi + 1u;
        goto L_1003a260;
    }
L_1003a3d0: ;
    COW_AT(1003a3d0)
    if ((int32_t)(ebp + 1u) < (int32_t)rd16(self + 0x26u))
    {
        ebp = ebp + 1u;
        goto L_1003a243;
    }
    ecx = rd16(self + 0x26u);
    goto L_1003a3df;
L_1003a2e2: ;
    COW_AT(1003a2e2)
    wr16(ecx, rd16(loc_1c + rd8(edi + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx) * 2u));
L_1003a3be: ;
    COW_AT(1003a3be)
    ecx = ecx + 2u;
    goto L_1003a3c1;
L_1003a308: ;
    COW_AT(1003a308)
    wr16(ecx, rd16(edi * 2u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 2u));
    goto L_1003a3be;
L_1003a325: ;
    COW_AT(1003a325)
    t30 = rd32(edi * 3u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 3u);
    wr32(sp0 - 0x24u, t30);
    wr16(ecx, (uint16_t)((((t30 >> 0x10u & 0xf8u) | 0xff00u) << 5u | (t30 >> 8u & 0xf8u)) << 2u | (uint8_t)t30 >> 3u));
    ebx = (ebx & 0xffff0000u) | (t30 >> 8u & 0xf8u);
    goto L_1003a3be;
L_1003a36e: ;
    COW_AT(1003a36e)
    t28 = rd32(edi * 4u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 4u);
    wr32(sp0 - 0x24u, t28);
    t29 = rd32(self + 0x20u);
    wr16(ecx, (uint16_t)((((t28 >> 0x18u & 0xff80u) * 2u | (t28 >> 0x10u & 0xf8u)) << 5u | (t28 >> 8u & 0xf8u)) << 2u | (uint8_t)t28 >> 3u));
    ebx = (((t28 >> 0x18u & 0xff80u) * 2u | (t29 & 0xffff0000u) | (t28 >> 0x10u & 0xf8u)) << 5u | (t29 & 0xffff0000u) | (t28 >> 8u & 0xf8u)) << 2u | (t28 & 0xffff0000u) | (uint8_t)t28 >> 3u;
    goto L_1003a3be;
L_1003a449: ;
    COW_AT(1003a449)
    if (rd8(self + 0x29u) == 0x10u) goto L_1003a462;
    edx = (edx & 0xffffff00u) | rd8(self + 0x29u);
    COW_AT(1003a451)
    if ((uint8_t)edx == 0x18u) goto L_1003a45b;
    COW_AT(1003a456)
    if ((uint8_t)edx != 0x20u) goto L_1003a4c3;
L_1003a45b: ;
    COW_AT(1003a45b)
    edi = 0x20u;
    goto L_1003a4d6;
L_1003a462: ;
    COW_AT(1003a462)
    edi = 0x10u;
L_1003a467: ;
    COW_AT(1003a467)
    wr32(sp0 - 0x44u, sp0 - 0x24u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x19u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, ecx);
    t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t41);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t41;
    g->esp = sp0 - 0x40u;
    t42 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t41, ecx, eax, 0u, 0u, 0x19u, 1u, sp0 - 0x24u);
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(1003a483)
    if ((int32_t)eax >= 0)
    {
        ebx = sp0 - 0x24u;
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_1003a4f6;
    }
L_1003a487: ;
    COW_AT(1003a487)
    if (rd32(sp0 - 0x28u) != 0u)
    {
        eax = rd32(sp0 - 0x28u);
    COW_AT(1003a48f)
        wr32(sp0 - 0x44u, eax);
        g->edx = edx;
        t153 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t153 + 8u), t153, 1, eax);
        t154 = g->ecx;
        t155 = g->edx;
        ecx = t154;
        edx = t155;
    COW_AT(1003a495)
        wr32(sp0 - 0x28u, 0u);
    }
    COW_AT(1003a499)
    if (rd32(sp0 - 0x2cu) != 0u)
    {
        eax = rd32(sp0 - 0x2cu);
    COW_AT(1003a4a1)
        wr32(sp0 - 0x44u, eax);
        g->edx = rd32(eax);
        t156 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t156 + 8u), ecx, 1, eax);
        t157 = g->edx;
        edx = t157;
    COW_AT(1003a4a7)
        wr32(sp0 - 0x2cu, 0u);
    }
    COW_AT(1003a4ab)
    if (rd32(sp0 - 0x20u) == 0u)
    {
        eax = rd32(sp0 - 0x20u);
    }
    else
    {
        eax = rd32(sp0 - 0x20u);
    COW_AT(1003a4b3)
        wr32(sp0 - 0x44u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t158 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t159 = g->edx;
        eax = t158;
        edx = t159;
    }
    COW_AT(1003a4b9)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1003a4c3: ;
    COW_AT(1003a4c3)
    if (rd32(sp0 - 0x1cu) == 0x10u)
    {
        edi = rd32(sp0 - 0x1cu);
        goto L_1003a467;
    }
    edi = rd32(sp0 - 0x1cu);
    COW_AT(1003a4cc)
    if (edi == 0x18u) goto L_1003a4d6;
    COW_AT(1003a4d1)
    if (edi != 0x20u)
    {
        loc_24 = 0u;
        goto L_1003a4f6;
    }
    goto L_1003a4d6;
L_1003a6cc: ;
    COW_AT(1003a6cc)
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    wr32(sp0 - 0x48u, ebx - 1u);
    t76 = rd32(self + 0x2cu) & 7u;
    wr32(sp0 - 0x4cu, t76);
    wr32(sp0 - 0x50u, eax);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(eax) + 0x3cu), t76, 4, eax, t76, ebx - 1u, sp0 - 0x28u);
    COW_AT(1003a6e2)
    wr32(sp0 - 0x44u, sp0 - 0x2cu);
    wr32(sp0 - 0x48u, ebx);
    t77 = rd32(self + 0x2cu) & 7u;
    wr32(sp0 - 0x4cu, t77);
    t78 = rd32(self + 0x44u);
    wr32(sp0 - 0x50u, t78);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x44u)) + 0x3cu), t77, 4, t78, t77, ebx, sp0 - 0x2cu);
    t79 = g->ecx;
    ecx = t79;
    COW_AT(1003a6f8)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 5u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    t80 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x54u, t80);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    t81 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x60u, t81);
    g->ecx = ecx;
    g->edx = t80;
    g->esp = sp0 - 0x40u;
    cow_stdcall(g, COW_IMG(0x102d4535u), 8, t81, 0u, 0u, t80, 0u, 0u, 5u, 0u);
    t82 = g->ecx;
    t83 = g->edx;
    ecx = t82;
    edx = t83;
    COW_AT(1003a70e)
    if (rd32(sp0 - 0x28u) == 0u)
    {
        loc_28 = rd32(sp0 - 0x28u);
    }
    else
    {
        eax = rd32(sp0 - 0x28u);
    COW_AT(1003a716)
        wr32(sp0 - 0x44u, eax);
        g->edx = edx;
        t84 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t84 + 8u), t84, 1, eax);
        t85 = g->ecx;
        t86 = g->edx;
        ecx = t85;
        edx = t86;
    COW_AT(1003a71c)
        wr32(sp0 - 0x28u, 0u);
        loc_28 = 0u;
    }
    COW_AT(1003a720)
    if (rd32(sp0 - 0x2cu) == 0u)
    {
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_1003a732;
    }
    eax = rd32(sp0 - 0x2cu);
    COW_AT(1003a728)
    wr32(sp0 - 0x44u, eax);
    g->edx = rd32(eax);
    t87 = rd32(eax);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(t87 + 8u), ecx, 1, eax);
    t88 = g->edx;
    edx = t88;
    goto L_1003a72e;
L_1003a808: ;
    COW_AT(1003a808)
    t109 = rd32(self + 0x40u);
    wr32(sp0 - 0x44u, t109);
    g->eax = t109;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t110 = cow_thiscall(g, rd32(rd32(t109) + 0x34u), rd32(t109), 1, t109);
    t111 = g->edx;
    eax = t110;
    edx = t111;
    COW_AT(1003a813)
    if (eax != 0u)
    {
    COW_AT(1003a81b)
        ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x2du);
        edi = 0u;
L_1003a81f: ;
    COW_AT(1003a81f)
        if (edi != 0u) goto L_1003a8c6;
    COW_AT(1003a827)
        if ((uint8_t)ebx == 0u) goto L_1003a86f;
    COW_AT(1003a82b)
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        wr32(sp0 - 0x48u, 0u);
        t112 = rd32(self + 0x40u);
        wr32(sp0 - 0x4cu, t112);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0x40u)) + 0x3cu), sp0 - 0x2cu, 3, t112, 0u, sp0 - 0x2cu);
    COW_AT(1003a83a)
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x48u, 1u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x50u, 0u);
        t113 = rd32(rd32(self + 0x20u) + 4u);
        wr32(sp0 - 0x54u, t113);
        t114 = rd32(COW_IMG(0x10351c94u) + ((rd8(self + 0x29u) & 0xffffff00u) | (rd8(self + 0x29u) & 0x7fu)) * 4u);
        wr32(sp0 - 0x58u, t114);
        t115 = rd32(self + 0x20u) + 8u;
        wr32(sp0 - 0x5cu, t115);
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x64u, 0u);
        t116 = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x68u, t116);
        g->ecx = t114;
        g->edx = t116;
        g->esp = sp0 - 0x40u;
        cow_stdcall(g, COW_IMG(0x102d2888u), 10, t116, 0u, 0u, t115, t114, t113, 0u, sp0 - 0x10u, 1u, 0u);
        t117 = g->ecx;
        t118 = g->edx;
        ecx = t117;
        edx = t118;
    COW_AT(1003a86a)
        loc_28 = rd32(sp0 - 0x28u);
L_1003a90f: ;
    COW_AT(1003a90f)
        if (rd32(sp0 - 0x2cu) == 0u)
        {
            loc_2c = rd32(sp0 - 0x2cu);
            goto L_1003a921;
        }
        eax = rd32(sp0 - 0x2cu);
    COW_AT(1003a917)
        wr32(sp0 - 0x44u, eax);
        t139 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t139 + 8u), t139, 1, eax);
        t140 = g->ecx;
        ecx = t140;
L_1003a91d: ;
    COW_AT(1003a91d)
        wr32(sp0 - 0x2cu, 0u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = 0u;
L_1003a921: ;
    COW_AT(1003a921)
        t141 = rd32(self + 0x40u);
        wr32(sp0 - 0x44u, t141);
        g->eax = t141;
        g->edx = rd32(t141);
        t142 = rd32(t141);
        g->esp = sp0 - 0x40u;
        t143 = cow_thiscall(g, rd32(t142 + 0x34u), ecx, 1, t141);
        t144 = g->edx;
        eax = t143;
        edx = t144;
        edi = edi + 1u;
    COW_AT(1003a92b)
        if (edi < eax) goto L_1003a81f;
    }
    goto L_1003a933;
L_1003a86f: ;
    COW_AT(1003a86f)
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    wr32(sp0 - 0x48u, 0u);
    t119 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x4cu, t119);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(sp0 - 0x20u)) + 0x3cu), sp0 - 0x28u, 3, t119, 0u, sp0 - 0x28u);
    COW_AT(1003a87f)
    wr32(sp0 - 0x44u, sp0 - 0x2cu);
    wr32(sp0 - 0x48u, 0u);
    t120 = rd32(self + 0x40u);
    wr32(sp0 - 0x4cu, t120);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x40u)) + 0x3cu), sp0 - 0x2cu, 3, t120, 0u, sp0 - 0x2cu);
    t121 = g->ecx;
    ecx = t121;
    COW_AT(1003a88e)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    t122 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x54u, t122);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    t123 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x60u, t123);
    g->ecx = ecx;
    g->edx = t122;
    g->esp = sp0 - 0x40u;
    cow_stdcall(g, COW_IMG(0x102d4535u), 8, t123, 0u, 0u, t122, 0u, 0u, 1u, 0u);
    t124 = g->ecx;
    t125 = g->edx;
    ecx = t124;
    edx = t125;
    COW_AT(1003a8a4)
    if (rd32(sp0 - 0x28u) == 0u)
    {
        loc_28 = rd32(sp0 - 0x28u);
    }
    else
    {
        eax = rd32(sp0 - 0x28u);
    COW_AT(1003a8ac)
        wr32(sp0 - 0x44u, eax);
        t126 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t126 + 8u), t126, 1, eax);
        t127 = g->ecx;
        ecx = t127;
    COW_AT(1003a8b2)
        wr32(sp0 - 0x28u, 0u);
        loc_28 = 0u;
    }
    COW_AT(1003a8b6)
    if (rd32(sp0 - 0x2cu) == 0u)
    {
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_1003a921;
    }
    eax = rd32(sp0 - 0x2cu);
    COW_AT(1003a8be)
    wr32(sp0 - 0x44u, eax);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
    t128 = g->ecx;
    ecx = t128;
    COW_AT(1003a8c4)
    goto L_1003a91d;
L_1003a8c6: ;
    COW_AT(1003a8c6)
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    wr32(sp0 - 0x48u, edi - 1u);
    t129 = rd32(self + 0x40u);
    wr32(sp0 - 0x4cu, t129);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x40u)) + 0x3cu), rd32(rd32(self + 0x40u)), 3, t129, edi - 1u, sp0 - 0x28u);
    COW_AT(1003a8d8)
    wr32(sp0 - 0x44u, sp0 - 0x2cu);
    wr32(sp0 - 0x48u, edi);
    t130 = rd32(self + 0x40u);
    wr32(sp0 - 0x4cu, t130);
    g->edx = sp0 - 0x2cu;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x40u)) + 0x3cu), rd32(rd32(self + 0x40u)), 3, t130, edi, sp0 - 0x2cu);
    t131 = g->edx;
    edx = t131;
    COW_AT(1003a8e7)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 5u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    t132 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x54u, t132);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    t133 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x60u, t133);
    g->ecx = t133;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_stdcall(g, COW_IMG(0x102d4535u), 8, t133, 0u, 0u, t132, 0u, 0u, 5u, 0u);
    t134 = g->ecx;
    t135 = g->edx;
    ecx = t134;
    edx = t135;
    COW_AT(1003a8fd)
    if (rd32(sp0 - 0x28u) == 0u)
    {
        loc_28 = rd32(sp0 - 0x28u);
    }
    else
    {
        eax = rd32(sp0 - 0x28u);
    COW_AT(1003a905)
        wr32(sp0 - 0x44u, eax);
        g->edx = rd32(eax);
        t136 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t136 + 8u), ecx, 1, eax);
        t137 = g->ecx;
        t138 = g->edx;
        ecx = t137;
        edx = t138;
    COW_AT(1003a90b)
        wr32(sp0 - 0x28u, 0u);
        loc_28 = 0u;
    }
    goto L_1003a90f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10039e50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10039e73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039e7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039e84u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039e88u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039e8cu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039e90u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039e9bu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039ea6u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039eafu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4c;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        g->ecx = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x48u, 1u);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039eceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10039ed6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10039ee8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039efau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039f02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039f0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039f14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039f22u:
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
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        wr32(sp0 - 0x44u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039f27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039f33u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039f50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039f61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039f70u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10039ff2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a010u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a042u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a06cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a080u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a091u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a094u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a097u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a0a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a0b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a0bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a0c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a0e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a0f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a101u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a17bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a1a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a1d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a1efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a203u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a210u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a213u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a216u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a225u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a234u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a239u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a243u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a260u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a271u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a280u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a2e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a308u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a325u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a36eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a3beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a3c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a3d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a3dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a3ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a3edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a415u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a421u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a42eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a436u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a43fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a449u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a451u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a456u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a45bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a462u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a467u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a483u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x40u;
        g->ebx = sp0 - 0x24u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1003a487u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a48fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a495u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a499u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a4a1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a4a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a4abu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a4b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003a4b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003a4c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a4ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a4d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a4d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003a4f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x40u;
        g->ebx = sp0 - 0x24u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1003a4f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a508u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a50du:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a516u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a51eu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a524u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a537u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a54bu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a556u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a558u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a560u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a566u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a579u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a58cu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a597u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a5a2u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a5b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a5beu:
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
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a5c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a5c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a5d8u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a5ecu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a602u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a60au:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a610u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a614u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a61cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a622u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a626u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a62cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a637u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a64au:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a652u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a682u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003a684u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a694u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1003a6aau:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a6b2u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a6b8u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a6bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a6c4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a6cau:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a6ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a6e2u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1003a6f8u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a70eu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a716u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a71cu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a720u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a728u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a72eu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a732u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a73cu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a744u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a748u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a754u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003a75au:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003a75fu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003a765u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a775u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a779u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a7a9u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003a7abu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a7bbu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1003a7d1u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a7d9u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a7dfu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a7e3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a7ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a7f1u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a7f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a801u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003a808u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a813u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a81bu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a81fu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a827u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a82bu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a83au:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a86au:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003a86fu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a87fu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1003a88eu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a8a4u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a8acu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a8b2u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a8b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a8beu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a8c4u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a8c6u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a8d8u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1003a8e7u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1003a8fdu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a905u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a90bu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a90fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a917u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a91du:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a921u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a92bu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a933u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003a937u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003a941u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a947u:
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
        g->esp = sp0 - 0x40u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a94fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a953u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a959u:
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
        g->esp = sp0 - 0x40u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a95du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003a965u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003a96bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10039e50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10039e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
