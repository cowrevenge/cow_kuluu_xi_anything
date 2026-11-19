/* f_0x101959a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101959a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_cf4;
    uint32_t loc_cf8;
    uint32_t loc_cfc;
    uint32_t loc_d00;
    uint32_t loc_d04;
    uint32_t loc_d08;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 3360u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101959d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_101959d0;
    case 0x101959d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_101959d9;
    case 0x101959e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_101959e0;
    case 0x101959f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_101959f3;
    case 0x10195a01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a01;
    case 0x10195a0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a0e;
    case 0x10195a1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a1c;
    case 0x10195a23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a23;
    case 0x10195a30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a30;
    case 0x10195a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a3e;
    case 0x10195a41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a41;
    case 0x10195a44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a44;
    case 0x10195a50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a50;
    case 0x10195a54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a54;
    case 0x10195a62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a62;
    case 0x10195a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a74;
    case 0x10195a7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a7f;
    case 0x10195a8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a8a;
    case 0x10195a8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a8f;
    case 0x10195a9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195a9e;
    case 0x10195ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195ab0;
    case 0x10195abcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195abc;
    case 0x10195acbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195acb;
    case 0x10195ad7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195ad7;
    case 0x10195adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195adb;
    case 0x10195ae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195ae5;
    case 0x10195af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195af7;
    case 0x10195b02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195b02;
    case 0x10195b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195b07;
    case 0x10195b0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195b0d;
    case 0x10195b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195b18;
    case 0x10195b2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195b2a;
    case 0x10195b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195b30;
    case 0x10195b37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195b37;
    case 0x10195b44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195b44;
    case 0x10195b4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195b4f;
    case 0x10195b79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195b79;
    case 0x10195b8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195b8b;
    case 0x10195b91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195b91;
    case 0x10195b98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195b98;
    case 0x10195ba5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195ba5;
    case 0x10195bb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195bb3;
    case 0x10195bc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195bc2;
    case 0x10195bc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195bc5;
    case 0x10195bcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195bcf;
    case 0x10195bdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195bdb;
    case 0x10195be9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195be9;
    case 0x10195bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195bfb;
    case 0x10195c01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195c01;
    case 0x10195c08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195c08;
    case 0x10195c15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195c15;
    case 0x10195c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195c3a;
    case 0x10195c4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195c4c;
    case 0x10195c52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195c52;
    case 0x10195c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195c59;
    case 0x10195c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195c66;
    case 0x10195c70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195c70;
    case 0x10195c76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195c76;
    case 0x10195c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195c80;
    case 0x10195c8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10195c8e;
    case 0x10195c99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195c99;
    case 0x10195c9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195c9e;
    case 0x10195ca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195ca4;
    case 0x10195cafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195caf;
    case 0x10195cc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195cc1;
    case 0x10195cc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195cc7;
    case 0x10195cceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195cce;
    case 0x10195cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195cdb;
    case 0x10195ce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195ce7;
    case 0x10195cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195cec;
    case 0x10195cf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195cf2;
    case 0x10195d01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195d01;
    case 0x10195d0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195d0f;
    case 0x10195d1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195d1a;
    case 0x10195d36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195d36;
    case 0x10195d40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195d40;
    case 0x10195d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195d4b;
    case 0x10195d59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195d59;
    case 0x10195d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10195d64;
    case 0x10195d69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195d69;
    case 0x10195d6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195d6c;
    case 0x10195d76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195d76;
    case 0x10195d82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195d82;
    case 0x10195d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195d91;
    case 0x10195da4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195da4;
    case 0x10195db6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195db6;
    case 0x10195dbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195dbc;
    case 0x10195dc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195dc3;
    case 0x10195dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195dd0;
    case 0x10195ddeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195dde;
    case 0x10195df0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195df0;
    case 0x10195df6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195df6;
    case 0x10195dfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195dfd;
    case 0x10195e0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e0a;
    case 0x10195e18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e18;
    case 0x10195e2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e2a;
    case 0x10195e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e30;
    case 0x10195e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e37;
    case 0x10195e44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e44;
    case 0x10195e52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e52;
    case 0x10195e64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e64;
    case 0x10195e6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e6a;
    case 0x10195e71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e71;
    case 0x10195e7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e7e;
    case 0x10195e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e8c;
    case 0x10195e9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195e9e;
    case 0x10195ea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195ea4;
    case 0x10195eabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195eab;
    case 0x10195eb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195eb8;
    case 0x10195ec6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195ec6;
    case 0x10195ed8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195ed8;
    case 0x10195edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195ede;
    case 0x10195ee5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd08u); in_esi = rd32(sp0 - 0xd04u); in_ebp = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); g->ebp = rd32(sp0 - 0xd00u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xd08u); g->esi = rd32(sp0 - 0xd04u); goto E_10195ee5;
    case 0x10195ef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); goto E_10195ef2;
    case 0x10195f09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f09;
    case 0x10195f0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f0f;
    case 0x10195f1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f1d;
    case 0x10195f2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f2b;
    case 0x10195f3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f3f;
    case 0x10195f4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f4f;
    case 0x10195f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f5d;
    case 0x10195f6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f6f;
    case 0x10195f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f75;
    case 0x10195f7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f7c;
    case 0x10195f89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f89;
    case 0x10195f93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195f93;
    case 0x10195fa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195fa1;
    case 0x10195fb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195fb0;
    case 0x10195fb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195fb3;
    case 0x10195fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195fbd;
    case 0x10195fc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195fc9;
    case 0x10195fd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195fd3;
    case 0x10195fe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195fe1;
    case 0x10195ff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195ff3;
    case 0x10195ff9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10195ff9;
    case 0x10196000u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_10196000;
    case 0x1019600du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d08 = rd32(sp0 - 0xd08u); loc_d04 = rd32(sp0 - 0xd04u); loc_d00 = rd32(sp0 - 0xd00u); loc_cfc = rd32(sp0 - 0xcfcu); loc_cf8 = rd32(sp0 - 0xcf8u); loc_cf4 = rd32(sp0 - 0xcf4u); goto E_1019600d;
    default: break;
    }
#endif

    COW_AT(101959a0)
    wr32(sp0 - 0xcfcu, in_ebx);
    wr32(sp0 - 0xd00u, in_ebp);
    wr32(sp0 - 0xd04u, in_esi);
    wr32(sp0 - 0xd08u, in_edi);
    wr32(sp0 - 0xd0cu, 0u);
    wr32(sp0 - 0xd10u, 0u);
    wr32(sp0 - 0xd14u, 0x33cu);
    wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
    wr32(sp0 - 0xd1cu, COW_IMG(0x10379a08u));
    g->eax = sp0 - 0xcf0u;
    g->edx = in_edx;
    g->esp = sp0 - 0xd08u;
    t1 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, COW_IMG(0x10379a08u), sp0 - 0xcf0u, 0x33cu, 0u, 0u);
    t2 = g->edx;
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        goto L_10195a0e;
    }
    ecx = t1;
    edx = t2;
    COW_AT(101959d0)
    if (rd32(sp0 - 0xcf0u) == 5u) goto L_101959e0;
    eax = rd32(sp0 - 0xcf0u);
    COW_AT(101959d9)
    if (eax != 0x5000000u) goto L_10195a0e;
L_101959e0: ;
    COW_AT(101959e0)
    wr32(sp0 - 0xcf8u, (uint32_t)((int32_t)ecx >> 2u));
    if ((int32_t)(uint32_t)((int32_t)ecx >> 2u) < 146)
    {
        loc_cf8 = (uint32_t)((int32_t)ecx >> 2u);
        ecx = (uint32_t)((int32_t)ecx >> 2u);
        goto L_10195ab0;
    }
    loc_cf8 = (uint32_t)((int32_t)ecx >> 2u);
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    COW_AT(101959f3)
    if (rd32(sp0 - 0xaacu) != 0x6b617473u)
    {
        eax = rd32(sp0 - 0xaacu);
        goto L_10195a1c;
    }
    eax = rd32(sp0 - 0xaacu);
    COW_AT(10195a01)
    if (rd32(sp0 - 0xaa4u) == 0x7368696eu) goto L_10195a30;
L_10195a0e: ;
    COW_AT(10195a0e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xffffffffu;
L_10195a1c: ;
    COW_AT(10195a1c)
    if (eax != 0x1234567u) goto L_10195a0e;
    COW_AT(10195a23)
    if (rd32(sp0 - 0xaa4u) != 0x89abcdefu) goto L_10195a0e;
L_10195a30: ;
    COW_AT(10195a30)
    if (rd32(sp0 - 0xaa8u) == 1u)
    {
        eax = rd32(sp0 - 0xaa8u) - 1u;
        goto L_10195acb;
    }
    eax = rd32(sp0 - 0xaa8u) - 1u;
    COW_AT(10195a3e)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10195a44;
    }
    eax = eax - 1u;
    COW_AT(10195a41)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10195a0e;
    }
    eax = eax - 1u;
L_10195a44: ;
    COW_AT(10195a44)
    ebx = 0u;
    edi = 1u;
L_10195a50: ;
    COW_AT(10195a50)
    if ((int32_t)edi >= (int32_t)ecx) goto L_10195a7f;
    COW_AT(10195a54)
    if (rd32(ebx + rd32(self + 4u) + 0xcu) != 4u)
    {
        eax = ebx + rd32(self + 4u);
        edx = rd32(ebx + rd32(self + 4u) + 0xcu);
    }
    else
    {
        eax = ebx + rd32(self + 4u);
        edx = rd32(ebx + rd32(self + 4u) + 0xcu);
    COW_AT(10195a62)
        t75 = rd32(edi * 4u + sp0 - 0xcf0u);
        wr32(sp0 - 0xd0cu, t75);
        wr32(sp0 - 0xd10u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        t76 = cow_stdcall(g, COW_IMG(0x10196040u), 2, eax, t75);
        t77 = g->edx;
        eax = t76;
        ecx = rd32(sp0 - 0xcf8u);
        edx = t77;
        edi = edi + 1u;
        loc_cf8 = rd32(sp0 - 0xcf8u);
    }
    COW_AT(10195a74)
    if ((int32_t)(ebx + 0x2cu) < 6996)
    {
        ebx = ebx + 0x2cu;
        goto L_10195a50;
    }
L_10195a7f: ;
    COW_AT(10195a7f)
    if (rd32(sp0 - 0xcf0u) == 5u)
    {
        loc_cfc = in_ebx;
        loc_d00 = in_ebp;
        loc_d04 = in_esi;
        loc_d08 = in_edi;
    }
    else
    {
    COW_AT(10195a8a)
        ebx = 0xcb8u;
L_10195a8f: ;
    COW_AT(10195a8f)
        if (rd32(ebx + rd32(self + 4u) + 4u) != 0x43u)
        {
            edi = ebx + rd32(self + 4u);
    COW_AT(10195d69)
            eax = rd32(edi + 0x20u);
        }
        else
        {
            edi = ebx + rd32(self + 4u);
    COW_AT(10195a9e)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->edx = edx;
            g->esp = sp0 - 0xd08u;
            t78 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            t79 = g->edx;
            eax = t78;
            edx = t79;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195d6c)
        t80 = rd32(edi + 0x24u);
        wr32(edi + 8u, eax);
        if (t80 == 0u)
        {
            ecx = t80;
        }
        else
        {
            ecx = t80;
    COW_AT(10195d76)
            wr32(sp0 - 0xd0cu, eax);
            t81 = rd32(edi + 4u);
            wr32(sp0 - 0xd10u, t81);
            g->eax = t81;
            g->esp = sp0 - 0xd08u;
            t82 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, eax, 2, t81, eax);
            t83 = g->ecx;
            t84 = g->edx;
            eax = t82;
            ecx = t83;
            edx = t84;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195d82)
        if ((int32_t)(ebx + 0x2cu) <= 6028)
        {
            ebx = ebx + 0x2cu;
            goto L_10195a8f;
        }
    COW_AT(10195d91)
        if (rd32(rd32(self + 4u) + 0x9fcu) != 0x43u)
        {
            edi = rd32(self + 4u) + 0x9f8u;
    COW_AT(10195db6)
            t87 = rd32(edi + 0x20u);
            wr32(edi + 8u, t87);
        }
        else
        {
            edi = rd32(self + 4u) + 0x9f8u;
    COW_AT(10195da4)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->edx = edx;
            g->esp = sp0 - 0xd08u;
            t85 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            t86 = g->edx;
            wr32(edi + 8u, t85);
            eax = t85;
            edx = t86;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195dbc)
        if (rd32(edi + 0x24u) == 0u)
        {
            ecx = rd32(edi + 0x24u);
        }
        else
        {
            ecx = rd32(edi + 0x24u);
    COW_AT(10195dc3)
            t88 = rd32(edi + 8u);
            wr32(sp0 - 0xd0cu, t88);
            t89 = rd32(edi + 4u);
            wr32(sp0 - 0xd10u, t89);
            g->eax = t89;
            g->esp = sp0 - 0xd08u;
            t90 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t88, 2, t89, t88);
            t91 = g->ecx;
            t92 = g->edx;
            eax = t90;
            ecx = t91;
            edx = t92;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195dd0)
        if (rd32(rd32(self + 4u) + 0xa28u) != 0x43u)
        {
            edi = rd32(self + 4u) + 0xa24u;
    COW_AT(10195df0)
            t95 = rd32(edi + 0x20u);
            wr32(edi + 8u, t95);
        }
        else
        {
            edi = rd32(self + 4u) + 0xa24u;
    COW_AT(10195dde)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->edx = edx;
            g->esp = sp0 - 0xd08u;
            t93 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            t94 = g->edx;
            wr32(edi + 8u, t93);
            eax = t93;
            edx = t94;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195df6)
        if (rd32(edi + 0x24u) == 0u)
        {
            ecx = rd32(edi + 0x24u);
        }
        else
        {
            ecx = rd32(edi + 0x24u);
    COW_AT(10195dfd)
            t96 = rd32(edi + 8u);
            wr32(sp0 - 0xd0cu, t96);
            t97 = rd32(edi + 4u);
            wr32(sp0 - 0xd10u, t97);
            g->eax = t97;
            g->esp = sp0 - 0xd08u;
            t98 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t96, 2, t97, t96);
            t99 = g->ecx;
            t100 = g->edx;
            eax = t98;
            ecx = t99;
            edx = t100;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195e0a)
        if (rd32(rd32(self + 4u) + 0xb04u) != 0x43u)
        {
            edi = rd32(self + 4u) + 0xb00u;
    COW_AT(10195e2a)
            t103 = rd32(edi + 0x20u);
            wr32(edi + 8u, t103);
        }
        else
        {
            edi = rd32(self + 4u) + 0xb00u;
    COW_AT(10195e18)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->edx = edx;
            g->esp = sp0 - 0xd08u;
            t101 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            t102 = g->edx;
            wr32(edi + 8u, t101);
            eax = t101;
            edx = t102;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195e30)
        if (rd32(edi + 0x24u) == 0u)
        {
            ecx = rd32(edi + 0x24u);
        }
        else
        {
            ecx = rd32(edi + 0x24u);
    COW_AT(10195e37)
            t104 = rd32(edi + 8u);
            wr32(sp0 - 0xd0cu, t104);
            t105 = rd32(edi + 4u);
            wr32(sp0 - 0xd10u, t105);
            g->eax = t105;
            g->esp = sp0 - 0xd08u;
            t106 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t104, 2, t105, t104);
            t107 = g->ecx;
            t108 = g->edx;
            eax = t106;
            ecx = t107;
            edx = t108;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195e44)
        if (rd32(rd32(self + 4u) + 0xaacu) != 0x43u)
        {
            edi = rd32(self + 4u) + 0xaa8u;
    COW_AT(10195e64)
            t111 = rd32(edi + 0x20u);
            wr32(edi + 8u, t111);
        }
        else
        {
            edi = rd32(self + 4u) + 0xaa8u;
    COW_AT(10195e52)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->edx = edx;
            g->esp = sp0 - 0xd08u;
            t109 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            t110 = g->edx;
            wr32(edi + 8u, t109);
            eax = t109;
            edx = t110;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195e6a)
        if (rd32(edi + 0x24u) == 0u)
        {
            ecx = rd32(edi + 0x24u);
        }
        else
        {
            ecx = rd32(edi + 0x24u);
    COW_AT(10195e71)
            t112 = rd32(edi + 8u);
            wr32(sp0 - 0xd0cu, t112);
            t113 = rd32(edi + 4u);
            wr32(sp0 - 0xd10u, t113);
            g->eax = t113;
            g->esp = sp0 - 0xd08u;
            t114 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t112, 2, t113, t112);
            t115 = g->ecx;
            t116 = g->edx;
            eax = t114;
            ecx = t115;
            edx = t116;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195e7e)
        if (rd32(rd32(self + 4u) + 0xad8u) != 0x43u)
        {
            edi = rd32(self + 4u) + 0xad4u;
    COW_AT(10195e9e)
            t119 = rd32(edi + 0x20u);
            wr32(edi + 8u, t119);
        }
        else
        {
            edi = rd32(self + 4u) + 0xad4u;
    COW_AT(10195e8c)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->edx = edx;
            g->esp = sp0 - 0xd08u;
            t117 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            t118 = g->edx;
            wr32(edi + 8u, t117);
            eax = t117;
            edx = t118;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195ea4)
        if (rd32(edi + 0x24u) == 0u)
        {
            ecx = rd32(edi + 0x24u);
        }
        else
        {
            ecx = rd32(edi + 0x24u);
    COW_AT(10195eab)
            t120 = rd32(edi + 8u);
            wr32(sp0 - 0xd0cu, t120);
            t121 = rd32(edi + 4u);
            wr32(sp0 - 0xd10u, t121);
            g->eax = t121;
            g->esp = sp0 - 0xd08u;
            t122 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t120, 2, t121, t120);
            t123 = g->ecx;
            t124 = g->edx;
            eax = t122;
            ecx = t123;
            edx = t124;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195eb8)
        if (rd32(rd32(self + 4u) + 0xb88u) != 0x43u)
        {
            edi = rd32(self + 4u) + 0xb84u;
    COW_AT(10195ed8)
            t127 = rd32(edi + 0x20u);
            wr32(edi + 8u, t127);
        }
        else
        {
            edi = rd32(self + 4u) + 0xb84u;
    COW_AT(10195ec6)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->edx = edx;
            g->esp = sp0 - 0xd08u;
            t125 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            t126 = g->edx;
            wr32(edi + 8u, t125);
            edx = t126;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    COW_AT(10195ede)
        if (rd32(edi + 0x24u) == 0u)
        {
            ecx = rd32(edi + 0x24u);
            loc_cfc = in_ebx;
            loc_d00 = in_ebp;
            loc_d04 = in_esi;
            loc_d08 = in_edi;
        }
        else
        {
            ecx = rd32(edi + 0x24u);
    COW_AT(10195ee5)
            t128 = rd32(edi + 8u);
            wr32(sp0 - 0xd0cu, t128);
            t129 = rd32(edi + 4u);
            wr32(sp0 - 0xd10u, t129);
            g->esp = sp0 - 0xd08u;
            cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t128, 2, t129, t128);
            t130 = g->ecx;
            t131 = g->edx;
            ecx = t130;
            edx = t131;
            loc_cfc = in_ebx;
            loc_d00 = in_ebp;
            loc_d04 = in_esi;
            loc_d08 = in_edi;
            loc_cf8 = rd32(sp0 - 0xcf8u);
        }
    }
L_10195ef2: ;
    COW_AT(10195ef2)
    wr32(sp0 - 0xcf4u, 0xa4u);
    ebx = 0x94u;
    edi = 0x1c30u;
    loc_cf4 = 0xa4u;
L_10195f09: ;
    COW_AT(10195f09)
    if ((int32_t)ebx >= (int32_t)loc_cf8) goto L_10195f3f;
    COW_AT(10195f0f)
    if (rd32(edi + rd32(self + 4u) + 0xcu) != 4u)
    {
        ecx = rd32(edi + rd32(self + 4u) + 0xcu);
    }
    else
    {
        eax = edi + rd32(self + 4u);
    COW_AT(10195f1d)
        t132 = rd32(ebx * 4u + sp0 - 0xcf0u);
        wr32(sp0 - 0xd0cu, t132);
        wr32(sp0 - 0xd10u, eax);
        g->ecx = self;
        g->esp = sp0 - 0xd08u;
        cow_stdcall(g, COW_IMG(0x10196040u), 2, eax, t132);
        t133 = g->ecx;
        ecx = t133;
        ebx = ebx + 1u;
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
    }
    COW_AT(10195f2b)
    wr32(sp0 - 0xcf4u, loc_cf4 + 1u);
    if ((int32_t)(edi + 0x2cu) < 9108)
    {
        edx = loc_cf4 + 1u;
        edi = edi + 0x2cu;
        loc_cf4 = loc_cf4 + 1u;
        goto L_10195f09;
    }
    edx = loc_cf4 + 1u;
    loc_cf4 = loc_cf4 + 1u;
L_10195f3f: ;
    COW_AT(10195f3f)
    if ((int32_t)loc_cf4 >= 177)
    {
        eax = loc_cf4;
    }
    else
    {
        eax = loc_cf4;
    COW_AT(10195f4f)
        if (rd32(rd32(self + 4u) + 0x16b4u) != 0x43u)
        {
            edi = rd32(self + 4u) + 0x16b0u;
    COW_AT(10195f6f)
            t136 = rd32(edi + 0x20u);
            wr32(edi + 8u, t136);
            edx = t136;
        }
        else
        {
            edi = rd32(self + 4u) + 0x16b0u;
    COW_AT(10195f5d)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->edx = edx;
            g->esp = sp0 - 0xd08u;
            t134 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            t135 = g->edx;
            wr32(edi + 8u, t134);
            eax = t134;
            edx = t135;
            loc_cfc = rd32(sp0 - 0xcfcu);
            loc_d00 = rd32(sp0 - 0xd00u);
            loc_d04 = rd32(sp0 - 0xd04u);
            loc_d08 = rd32(sp0 - 0xd08u);
            loc_cf4 = rd32(sp0 - 0xcf4u);
        }
    COW_AT(10195f75)
        if (rd32(edi + 0x24u) == 0u)
        {
            ecx = rd32(edi + 0x24u);
        }
        else
        {
            ecx = rd32(edi + 0x24u);
    COW_AT(10195f7c)
            t137 = rd32(edi + 8u);
            wr32(sp0 - 0xd0cu, t137);
            t138 = rd32(edi + 4u);
            wr32(sp0 - 0xd10u, t138);
            g->eax = t137;
            g->esp = sp0 - 0xd08u;
            t139 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t138, 2, t138, t137);
            t140 = g->ecx;
            t141 = g->edx;
            eax = t139;
            ecx = t140;
            edx = t141;
            loc_cfc = rd32(sp0 - 0xcfcu);
            loc_d00 = rd32(sp0 - 0xd00u);
            loc_d04 = rd32(sp0 - 0xd04u);
            loc_d08 = rd32(sp0 - 0xd08u);
            loc_cf4 = rd32(sp0 - 0xcf4u);
        }
    }
    COW_AT(10195f89)
    if ((int32_t)loc_cf4 < 189)
    {
    COW_AT(10195f93)
        if (rd32(rd32(self + 4u) + 0x16e0u) != 0x43u)
        {
            edi = rd32(self + 4u) + 0x16dcu;
    COW_AT(10195fb0)
            eax = rd32(edi + 0x20u);
        }
        else
        {
            edi = rd32(self + 4u) + 0x16dcu;
    COW_AT(10195fa1)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->edx = edx;
            g->esp = sp0 - 0xd08u;
            t142 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            t143 = g->edx;
            eax = t142;
            edx = t143;
            loc_cfc = rd32(sp0 - 0xcfcu);
            loc_d00 = rd32(sp0 - 0xd00u);
            loc_d04 = rd32(sp0 - 0xd04u);
            loc_d08 = rd32(sp0 - 0xd08u);
            loc_cf4 = rd32(sp0 - 0xcf4u);
        }
    COW_AT(10195fb3)
        t144 = rd32(edi + 0x24u);
        wr32(edi + 8u, eax);
        if (t144 == 0u)
        {
            ecx = t144;
        }
        else
        {
            ecx = t144;
    COW_AT(10195fbd)
            wr32(sp0 - 0xd0cu, eax);
            t145 = rd32(edi + 4u);
            wr32(sp0 - 0xd10u, t145);
            g->eax = t145;
            g->esp = sp0 - 0xd08u;
            t146 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, eax, 2, t145, eax);
            t147 = g->ecx;
            t148 = g->edx;
            eax = t146;
            ecx = t147;
            edx = t148;
            loc_cfc = rd32(sp0 - 0xcfcu);
            loc_d00 = rd32(sp0 - 0xd00u);
            loc_d04 = rd32(sp0 - 0xd04u);
            loc_d08 = rd32(sp0 - 0xd08u);
            loc_cf4 = rd32(sp0 - 0xcf4u);
        }
    }
    COW_AT(10195fc9)
    if ((int32_t)loc_cf4 < 205)
    {
    COW_AT(10195fd3)
        if (rd32(rd32(self + 4u) + 0x170cu) != 0x43u)
        {
            esi = rd32(self + 4u) + 0x1708u;
    COW_AT(10195ff3)
            t150 = rd32(esi + 0x20u);
            wr32(esi + 8u, t150);
        }
        else
        {
            esi = rd32(self + 4u) + 0x1708u;
    COW_AT(10195fe1)
            wr32(sp0 - 0xd0cu, 0xabu);
            g->esp = sp0 - 0xd08u;
            t149 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
            wr32(esi + 8u, t149);
            loc_cfc = rd32(sp0 - 0xcfcu);
            loc_d00 = rd32(sp0 - 0xd00u);
            loc_d04 = rd32(sp0 - 0xd04u);
            loc_d08 = rd32(sp0 - 0xd08u);
        }
    COW_AT(10195ff9)
        if (rd32(esi + 0x24u) != 0u)
        {
            ecx = rd32(esi + 0x24u);
    COW_AT(10196000)
            t151 = rd32(esi + 8u);
            wr32(sp0 - 0xd0cu, t151);
            t152 = rd32(esi + 4u);
            wr32(sp0 - 0xd10u, t152);
            g->esp = sp0 - 0xd08u;
            cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t151, 2, t152, t151);
            loc_cfc = rd32(sp0 - 0xcfcu);
            loc_d00 = rd32(sp0 - 0xd00u);
            loc_d04 = rd32(sp0 - 0xd04u);
            loc_d08 = rd32(sp0 - 0xd08u);
        }
    }
    COW_AT(1019600d)
    g->ebx = loc_cfc;
    g->esi = loc_d04;
    g->edi = loc_d08;
    g->ebp = loc_d00;
    return 1u;
L_10195ab0: ;
    COW_AT(10195ab0)
    if (ecx - 0x80u > 0xfu)
    {
        eax = ecx - 0x80u;
        goto L_10195a0e;
    }
    eax = ecx - 0x80u;
    COW_AT(10195abc)
    t3 = rd32(COW_IMG(0x10196020u) + rd8(COW_IMG(0x1019602cu) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x10195a0eu: goto L_10195a0e;
    case 0x10195a44u: edx = rd8(COW_IMG(0x1019602cu) + eax); goto L_10195a44;
    case 0x10195acbu: edx = rd8(COW_IMG(0x1019602cu) + eax); goto L_10195acb;
    default: rt_fatal(g, COW_IMG(0x10195ac4u), "switch");
    }
    return 0;
L_10195acb: ;
    COW_AT(10195acb)
    ebx = 1u;
    edi = 0u;
L_10195ad7: ;
    COW_AT(10195ad7)
    if ((int32_t)ebx >= (int32_t)ecx) goto L_10195b02;
    COW_AT(10195adb)
    if (rd32(edi + rd32(self + 4u) + 0xcu) != 4u)
    {
        eax = edi + rd32(self + 4u);
    }
    else
    {
        eax = edi + rd32(self + 4u);
    COW_AT(10195ae5)
        t4 = rd32(ebx * 4u + sp0 - 0xcf0u);
        wr32(sp0 - 0xd0cu, t4);
        wr32(sp0 - 0xd10u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        t5 = cow_stdcall(g, COW_IMG(0x10196040u), 2, eax, t4);
        t6 = g->edx;
        eax = t5;
        ecx = rd32(sp0 - 0xcf8u);
        edx = t6;
        ebx = ebx + 1u;
        loc_cf8 = rd32(sp0 - 0xcf8u);
    }
    COW_AT(10195af7)
    if ((int32_t)(edi + 0x2cu) <= 2376)
    {
        edi = edi + 0x2cu;
        goto L_10195ad7;
    }
L_10195b02: ;
    COW_AT(10195b02)
    ebp = 0x974u;
L_10195b07: ;
    COW_AT(10195b07)
    if ((int32_t)ebx >= (int32_t)loc_cf8) goto L_10195b4f;
    COW_AT(10195b0d)
    if (rd32(ebp + rd32(self + 4u) + 4u) != 0x43u)
    {
        edi = ebp + rd32(self + 4u);
    COW_AT(10195b2a)
        t9 = rd32(edi + 0x20u);
        wr32(edi + 8u, t9);
    }
    else
    {
        edi = ebp + rd32(self + 4u);
    COW_AT(10195b18)
        wr32(sp0 - 0xd0cu, 0xabu);
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        t7 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
        t8 = g->edx;
        wr32(edi + 8u, t7);
        eax = t7;
        edx = t8;
        loc_cf8 = rd32(sp0 - 0xcf8u);
    }
    COW_AT(10195b30)
    if (rd32(edi + 0x24u) == 0u)
    {
        ecx = rd32(edi + 0x24u);
    }
    else
    {
        ecx = rd32(edi + 0x24u);
    COW_AT(10195b37)
        t10 = rd32(edi + 8u);
        wr32(sp0 - 0xd0cu, t10);
        t11 = rd32(edi + 4u);
        wr32(sp0 - 0xd10u, t11);
        g->eax = t11;
        g->esp = sp0 - 0xd08u;
        t12 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t10, 2, t11, t10);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
        loc_cf8 = rd32(sp0 - 0xcf8u);
    }
    COW_AT(10195b44)
    if ((int32_t)(ebp + 0x2cu) <= 2640)
    {
        ebp = ebp + 0x2cu;
        goto L_10195b07;
    }
L_10195b4f: ;
    COW_AT(10195b4f)
    t15 = rd32(ebx * 4u + sp0 - 0xcf0u);
    wr32(sp0 - 0xd0cu, t15);
    t16 = rd32(self + 4u) + 0xa7cu;
    wr32(sp0 - 0xd10u, t16);
    g->eax = t15;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0xd08u;
    t17 = cow_stdcall(g, COW_IMG(0x10196040u), 2, t16, t15);
    t18 = g->ecx;
    t19 = g->edx;
    if (rd32(rd32(self + 4u) + 0xaacu) != 0x43u)
    {
        eax = t17;
        ebx = ebx + 1u;
        edi = rd32(self + 4u) + 0xaa8u;
    COW_AT(10195b8b)
        t22 = rd32(edi + 0x20u);
        wr32(edi + 8u, t22);
        edx = t22;
    }
    else
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        ebx = ebx + 1u;
        edi = rd32(self + 4u) + 0xaa8u;
    COW_AT(10195b79)
        wr32(sp0 - 0xd0cu, 0xabu);
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        t20 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
        t21 = g->edx;
        wr32(edi + 8u, t20);
        eax = t20;
        edx = t21;
    }
    COW_AT(10195b91)
    if (rd32(edi + 0x24u) == 0u)
    {
        ecx = rd32(edi + 0x24u);
    }
    else
    {
        ecx = rd32(edi + 0x24u);
    COW_AT(10195b98)
        t23 = rd32(edi + 8u);
        wr32(sp0 - 0xd0cu, t23);
        t24 = rd32(edi + 4u);
        wr32(sp0 - 0xd10u, t24);
        g->eax = t23;
        g->esp = sp0 - 0xd08u;
        t25 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t24, 2, t24, t23);
        t26 = g->ecx;
        t27 = g->edx;
        eax = t25;
        ecx = t26;
        edx = t27;
    }
    COW_AT(10195ba5)
    if (rd32(rd32(self + 4u) + 0xad8u) != 0x43u)
    {
        edi = rd32(self + 4u) + 0xad4u;
    COW_AT(10195bc2)
        eax = rd32(edi + 0x20u);
    }
    else
    {
        edi = rd32(self + 4u) + 0xad4u;
    COW_AT(10195bb3)
        wr32(sp0 - 0xd0cu, 0xabu);
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        t28 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    COW_AT(10195bc5)
    t30 = rd32(edi + 0x24u);
    wr32(edi + 8u, eax);
    if (t30 == 0u)
    {
        ecx = t30;
    }
    else
    {
        ecx = t30;
    COW_AT(10195bcf)
        wr32(sp0 - 0xd0cu, eax);
        t31 = rd32(edi + 4u);
        wr32(sp0 - 0xd10u, t31);
        g->eax = t31;
        g->esp = sp0 - 0xd08u;
        t32 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, eax, 2, t31, eax);
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
    }
    COW_AT(10195bdb)
    if (rd32(rd32(self + 4u) + 0xb04u) != 0x43u)
    {
        edi = rd32(self + 4u) + 0xb00u;
    COW_AT(10195bfb)
        t37 = rd32(edi + 0x20u);
        wr32(edi + 8u, t37);
    }
    else
    {
        edi = rd32(self + 4u) + 0xb00u;
    COW_AT(10195be9)
        wr32(sp0 - 0xd0cu, 0xabu);
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        t35 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
        t36 = g->edx;
        wr32(edi + 8u, t35);
        edx = t36;
    }
    COW_AT(10195c01)
    if (rd32(edi + 0x24u) != 0u)
    {
        ecx = rd32(edi + 0x24u);
    COW_AT(10195c08)
        t38 = rd32(edi + 8u);
        wr32(sp0 - 0xd0cu, t38);
        t39 = rd32(edi + 4u);
        wr32(sp0 - 0xd10u, t39);
        g->esp = sp0 - 0xd08u;
        cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t38, 2, t39, t38);
        t40 = g->edx;
        edx = t40;
    }
    COW_AT(10195c15)
    t41 = rd32(ebx * 4u + sp0 - 0xcf0u);
    wr32(sp0 - 0xd0cu, t41);
    t42 = rd32(self + 4u) + 0xb58u;
    wr32(sp0 - 0xd10u, t42);
    g->eax = t41;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0xd08u;
    t43 = cow_stdcall(g, COW_IMG(0x10196040u), 2, t42, t41);
    t44 = g->ecx;
    t45 = g->edx;
    if (rd32(rd32(self + 4u) + 0xb88u) != 0x43u)
    {
        eax = t43;
        ebx = ebx + 1u;
        edi = rd32(self + 4u) + 0xb84u;
    COW_AT(10195c4c)
        t48 = rd32(edi + 0x20u);
        wr32(edi + 8u, t48);
        edx = t48;
    }
    else
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        ebx = ebx + 1u;
        edi = rd32(self + 4u) + 0xb84u;
    COW_AT(10195c3a)
        wr32(sp0 - 0xd0cu, 0xabu);
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        t46 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
        t47 = g->edx;
        wr32(edi + 8u, t46);
        eax = t46;
        edx = t47;
    }
    COW_AT(10195c52)
    if (rd32(edi + 0x24u) == 0u)
    {
        ecx = rd32(edi + 0x24u);
    }
    else
    {
        ecx = rd32(edi + 0x24u);
    COW_AT(10195c59)
        t49 = rd32(edi + 8u);
        wr32(sp0 - 0xd0cu, t49);
        t50 = rd32(edi + 4u);
        wr32(sp0 - 0xd10u, t50);
        g->eax = t49;
        g->esp = sp0 - 0xd08u;
        t51 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t50, 2, t50, t49);
        t52 = g->ecx;
        t53 = g->edx;
        eax = t51;
        ecx = t52;
        edx = t53;
    }
    COW_AT(10195c66)
    edi = 0xbb0u;
L_10195c70: ;
    COW_AT(10195c70)
    if ((int32_t)ebx >= (int32_t)rd32(sp0 - 0xcf8u)) goto L_10195c99;
    COW_AT(10195c76)
    if (rd32(edi + rd32(self + 4u) + 0xcu) != 4u)
    {
        eax = edi + rd32(self + 4u);
    }
    else
    {
        eax = edi + rd32(self + 4u);
    COW_AT(10195c80)
        t54 = rd32(ebx * 4u + sp0 - 0xcf0u);
        wr32(sp0 - 0xd0cu, t54);
        wr32(sp0 - 0xd10u, eax);
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        t55 = cow_stdcall(g, COW_IMG(0x10196040u), 2, eax, t54);
        t56 = g->ecx;
        t57 = g->edx;
        eax = t55;
        ecx = t56;
        edx = t57;
        ebx = ebx + 1u;
    }
    COW_AT(10195c8e)
    if ((int32_t)(edi + 0x2cu) <= 3212)
    {
        edi = edi + 0x2cu;
        goto L_10195c70;
    }
L_10195c99: ;
    COW_AT(10195c99)
    ebp = 0xcb8u;
L_10195c9e: ;
    COW_AT(10195c9e)
    if ((int32_t)ebx >= (int32_t)rd32(sp0 - 0xcf8u)) goto L_10195ce7;
    COW_AT(10195ca4)
    if (rd32(ebp + rd32(self + 4u) + 4u) != 0x43u)
    {
        edi = ebp + rd32(self + 4u);
    COW_AT(10195cc1)
        t60 = rd32(edi + 0x20u);
        wr32(edi + 8u, t60);
    }
    else
    {
        edi = ebp + rd32(self + 4u);
    COW_AT(10195caf)
        wr32(sp0 - 0xd0cu, 0xabu);
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        t58 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
        t59 = g->edx;
        wr32(edi + 8u, t58);
        eax = t58;
        edx = t59;
    }
    COW_AT(10195cc7)
    if (rd32(edi + 0x24u) == 0u)
    {
        ecx = rd32(edi + 0x24u);
    }
    else
    {
        ecx = rd32(edi + 0x24u);
    COW_AT(10195cce)
        t61 = rd32(edi + 8u);
        wr32(sp0 - 0xd0cu, t61);
        t62 = rd32(edi + 4u);
        wr32(sp0 - 0xd10u, t62);
        g->eax = t62;
        g->esp = sp0 - 0xd08u;
        t63 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t61, 2, t62, t61);
        t64 = g->ecx;
        t65 = g->edx;
        eax = t63;
        ecx = t64;
        edx = t65;
    }
    COW_AT(10195cdb)
    if ((int32_t)(ebp + 0x2cu) <= 6028)
    {
        ebx = ebx + 1u;
        ebp = ebp + 0x2cu;
        goto L_10195c9e;
    }
    ebx = ebx + 1u;
L_10195ce7: ;
    COW_AT(10195ce7)
    edi = 0x17b8u;
L_10195cec: ;
    COW_AT(10195cec)
    if ((int32_t)ebx >= (int32_t)rd32(sp0 - 0xcf8u)) goto L_10195d1a;
    COW_AT(10195cf2)
    if (rd32(edi + rd32(self + 4u) + 0xcu) == 4u)
    {
        eax = edi + rd32(self + 4u);
    COW_AT(10195d01)
        t66 = rd32(ebx * 4u + sp0 - 0xcf0u);
        wr32(sp0 - 0xd0cu, t66);
        wr32(sp0 - 0xd10u, eax);
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        cow_stdcall(g, COW_IMG(0x10196040u), 2, eax, t66);
        t67 = g->edx;
        edx = t67;
        ebx = ebx + 1u;
    }
    COW_AT(10195d0f)
    if ((int32_t)(edi + 0x2cu) <= 6512)
    {
        edi = edi + 0x2cu;
        goto L_10195cec;
    }
L_10195d1a: ;
    COW_AT(10195d1a)
    t68 = rd32(ebx * 4u + sp0 - 0xcf0u);
    wr32(sp0 - 0xd0cu, t68);
    t69 = rd32(self + 4u) + 0xa50u;
    wr32(sp0 - 0xd10u, t69);
    g->ecx = self;
    g->edx = t69;
    g->esp = sp0 - 0xd08u;
    cow_stdcall(g, COW_IMG(0x10196040u), 2, t69, t68);
    t70 = g->ecx;
    t71 = g->edx;
    ecx = t70;
    edx = t71;
    ebx = ebx + 1u;
    edi = 0x199cu;
L_10195d36: ;
    COW_AT(10195d36)
    if ((int32_t)ebx >= (int32_t)rd32(sp0 - 0xcf8u))
    {
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        goto L_10195ef2;
    }
    COW_AT(10195d40)
    if (rd32(edi + rd32(self + 4u) + 0xcu) == 4u)
    {
        eax = edi + rd32(self + 4u);
    COW_AT(10195d4b)
        t72 = rd32(ebx * 4u + sp0 - 0xcf0u);
        wr32(sp0 - 0xd0cu, t72);
        wr32(sp0 - 0xd10u, eax);
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0xd08u;
        cow_stdcall(g, COW_IMG(0x10196040u), 2, eax, t72);
        t73 = g->ecx;
        t74 = g->edx;
        ecx = t73;
        edx = t74;
        ebx = ebx + 1u;
    }
    COW_AT(10195d59)
    if ((int32_t)(edi + 0x2cu) < 6996)
    {
        edi = edi + 0x2cu;
        goto L_10195d36;
    }
    COW_AT(10195d64)
    loc_cfc = rd32(sp0 - 0xcfcu);
    loc_d00 = rd32(sp0 - 0xd00u);
    loc_d04 = rd32(sp0 - 0xd04u);
    loc_d08 = rd32(sp0 - 0xd08u);
    loc_cf8 = rd32(sp0 - 0xcf8u);
    goto L_10195ef2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101959a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101959d0u:
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
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x101959d9u:
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
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x101959e0u:
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
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x101959f3u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a01u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a0eu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a1cu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a23u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a30u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a3eu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a41u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a44u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a50u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a54u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a62u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a74u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a7fu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a8au:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a8fu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195a9eu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ab0u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195abcu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195acbu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ad7u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195adbu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ae5u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195af7u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b02u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b07u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b0du:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b18u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b2au:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b30u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b37u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b44u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b4fu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b79u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b8bu:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b91u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195b98u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ba5u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195bb3u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195bc2u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195bc5u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195bcfu:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195bdbu:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195be9u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195bfbu:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c01u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c08u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c15u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c70u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c76u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c80u:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c8eu:
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
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195c9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ca4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195cafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195cc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195cc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195cceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195cdbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ce7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195cecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195cf2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d40u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d64u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d69u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d6cu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d76u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d82u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195d91u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195da4u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195db6u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195dbcu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195dc3u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195dd0u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ddeu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195df0u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195df6u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195dfdu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e0au:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e18u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e2au:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e30u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e37u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e44u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e52u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e64u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e6au:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e71u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e7eu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e8cu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195e9eu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ea4u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195eabu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195eb8u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ec6u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ed8u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195edeu:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ee5u:
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
        uint32_t loc_cf8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd08u);
        in_esi = rd32(sp0 - 0xd04u);
        in_ebp = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ef2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f09u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f0fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f2bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebp = 4u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f4fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195f93u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195fa1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195fb0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195fb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195fbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195fc9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195fd3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        g->ebx = 0x43u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195fe1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ff3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195ff9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10196000u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x1019600du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cf4;
        uint32_t loc_cf8;
        uint32_t loc_cfc;
        uint32_t loc_d00;
        uint32_t loc_d04;
        uint32_t loc_d08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d08 = rd32(sp0 - 0xd08u);
        loc_d04 = rd32(sp0 - 0xd04u);
        loc_d00 = rd32(sp0 - 0xd00u);
        loc_cfc = rd32(sp0 - 0xcfcu);
        loc_cf8 = rd32(sp0 - 0xcf8u);
        loc_cf4 = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd08u;
        wr32(sp0 - 0xd18u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101959a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101959a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
