/* f_0x100ba190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ba190(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_84;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
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
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 180u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ba1bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba1bb;
    case 0x100ba1c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba1c2;
    case 0x100ba1d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba1d4;
    case 0x100ba1d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba1d9;
    case 0x100ba1e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba1e9;
    case 0x100ba1eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba1ee;
    case 0x100ba1f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba1f0;
    case 0x100ba238u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba238;
    case 0x100ba24au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba24a;
    case 0x100ba24fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba24f;
    case 0x100ba25du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba25d;
    case 0x100ba262u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba262;
    case 0x100ba264u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba264;
    case 0x100ba2b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba2b2;
    case 0x100ba2c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba2c4;
    case 0x100ba2c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba2c9;
    case 0x100ba2d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba2d7;
    case 0x100ba2dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba2dc;
    case 0x100ba2deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba2de;
    case 0x100ba326u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba326;
    case 0x100ba32cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba32c;
    case 0x100ba350u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba350;
    case 0x100ba365u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba365;
    case 0x100ba36du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba36d;
    case 0x100ba37fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba37f;
    case 0x100ba38au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba38a;
    case 0x100ba399u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); loc_84 = rd32(sp0 - 0x84u); goto E_100ba399;
    case 0x100ba3a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); loc_84 = rd32(sp0 - 0x84u); goto E_100ba3a4;
    case 0x100ba3b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba3b2;
    case 0x100ba3b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba3b7;
    case 0x100ba3b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba3b9;
    case 0x100ba423u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba423;
    case 0x100ba435u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba435;
    case 0x100ba43au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba43a;
    case 0x100ba449u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba449;
    case 0x100ba454u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba454;
    case 0x100ba462u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba462;
    case 0x100ba468u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); loc_84 = rd32(sp0 - 0x84u); goto E_100ba468;
    case 0x100ba483u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba483;
    case 0x100ba491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba491;
    case 0x100ba496u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba496;
    case 0x100ba498u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba498;
    case 0x100ba4beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba4be;
    case 0x100ba4e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba4e7;
    case 0x100ba4fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba4fc;
    case 0x100ba504u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba504;
    case 0x100ba514u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba514;
    case 0x100ba519u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba519;
    case 0x100ba51bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba51b;
    case 0x100ba564u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba564;
    case 0x100ba576u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba576;
    case 0x100ba57bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba57b;
    case 0x100ba5b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba5b4;
    case 0x100ba5b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba5b9;
    case 0x100ba5bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba5bb;
    case 0x100ba5f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba5f9;
    case 0x100ba646u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba646;
    case 0x100ba6b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6b0;
    case 0x100ba6b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6b3;
    case 0x100ba6bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6bb;
    case 0x100ba6c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6c5;
    case 0x100ba6c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6c9;
    case 0x100ba6d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6d5;
    case 0x100ba6dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6df;
    case 0x100ba6e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6e3;
    case 0x100ba6e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6e8;
    case 0x100ba6ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6ec;
    case 0x100ba6f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6f3;
    case 0x100ba6fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba6fb;
    case 0x100ba705u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba705;
    case 0x100ba709u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba709;
    case 0x100ba715u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba715;
    case 0x100ba71fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba71f;
    case 0x100ba723u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba723;
    case 0x100ba728u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba728;
    case 0x100ba72cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba72c;
    case 0x100ba741u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100ba741;
    case 0x100ba7b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7b0;
    case 0x100ba7b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7b3;
    case 0x100ba7bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7bb;
    case 0x100ba7c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7c5;
    case 0x100ba7c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7c9;
    case 0x100ba7d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7d5;
    case 0x100ba7dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7df;
    case 0x100ba7e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7e3;
    case 0x100ba7e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7e8;
    case 0x100ba7ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7ec;
    case 0x100ba7eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba7ee;
    case 0x100ba7fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_100ba7fc;
    case 0x100ba807u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba807;
    case 0x100ba80fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba80f;
    case 0x100ba819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba819;
    case 0x100ba81du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba81d;
    case 0x100ba829u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba829;
    case 0x100ba833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba833;
    case 0x100ba837u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba837;
    case 0x100ba83cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba83c;
    case 0x100ba840u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; loc_ac = rd32(sp0 - 0xacu); goto E_100ba840;
    default: break;
    }
#endif

    COW_AT(100ba190)
    wr32(sp0 - 0x9cu, in_ebx);
    wr32(sp0 - 0xa0u, in_ebp);
    wr32(sp0 - 0xa4u, in_esi);
    wr32(sp0 - 0xa8u, in_edi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 0x10u)
    {
        loc_9c = in_ebx;
        loc_a0 = in_ebp;
        loc_a4 = in_esi;
        loc_a8 = in_edi;
        goto L_100ba7fc;
    }
    eax = t1;
    edx = t1;
    COW_AT(100ba1bb)
    t2 = rd32(COW_IMG(0x100ba858u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100ba1c2u: goto L_100ba1c2;
    case 0x100ba1d4u: goto L_100ba1d4;
    case 0x100ba238u: goto L_100ba238;
    case 0x100ba24au: goto L_100ba24a;
    case 0x100ba2b2u: goto L_100ba2b2;
    case 0x100ba2c4u: goto L_100ba2c4;
    case 0x100ba350u: goto L_100ba350;
    case 0x100ba365u: goto L_100ba365;
    case 0x100ba423u: goto L_100ba423;
    case 0x100ba435u: goto L_100ba435;
    case 0x100ba4e7u: goto L_100ba4e7;
    case 0x100ba4fcu: goto L_100ba4fc;
    case 0x100ba564u: goto L_100ba564;
    case 0x100ba576u: goto L_100ba576;
    case 0x100ba5f9u: goto L_100ba5f9;
    case 0x100ba646u: goto L_100ba646;
    case 0x100ba741u: goto L_100ba741;
    default: rt_fatal(g, COW_IMG(0x100ba1bbu), "switch");
    }
    return;
L_100ba1c2: ;
    COW_AT(100ba1c2)
    wr32(sp0 - 0xacu, 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t102 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t103 = g->edx;
    eax = t102;
    edx = t103;
    ebp = 0xau;
    edi = t102;
L_100ba1d9: ;
    COW_AT(100ba1d9)
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t104 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t105 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t104;
        edx = t105;
        ebx = t104;
    }
    else
    {
        eax = t104;
        edx = t105;
        ebx = t104;
    COW_AT(100ba1e9)
        if ((int16_t)edi <= (int16_t)ebx)
        {
    COW_AT(100ba1ee)
            ebx = 0u;
        }
    }
    COW_AT(100ba1f0)
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->edx = edx;
    t106 = rd16(self + 0x256u);
    g->esp = sp0 - 0xa8u;
    t107 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t108 = g->edx;
    wr16(self + 0x256u, (uint16_t)t107);
    t109 = (uint32_t)(int16_t)(ebx * 2u);
    wr32(sp0 - 0xacu, t109);
    g->eax = ebx * 2u;
    g->edx = t108;
    t110 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, t109);
    t111 = g->edx;
    wr32(sp0 - 0xacu, t110);
    wr32(sp0 - 0xb0u, 4u);
    wr16(self + 0x256u, (uint16_t)t106);
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 4u, t110);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba1d4: ;
    COW_AT(100ba1d4)
    ebp = 8u;
    edi = 0u;
    goto L_100ba1d9;
L_100ba238: ;
    COW_AT(100ba238)
    wr32(sp0 - 0xacu, 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t91 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t92 = g->edx;
    eax = t91;
    edx = t92;
    ebp = 0xau;
    edi = t91;
L_100ba24f: ;
    COW_AT(100ba24f)
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t93 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t94 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t93;
        edx = t94;
    }
    else
    {
        eax = t93;
        edx = t94;
    COW_AT(100ba25d)
        if ((int16_t)edi <= (int16_t)eax)
        {
    COW_AT(100ba262)
            eax = 0u;
        }
    }
    COW_AT(100ba264)
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax << 4u;
    t95 = rd16(self + 0x256u);
    g->esp = sp0 - 0xa8u;
    t96 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t97 = rd32(self + 0x20u);
    wr16(self + 0x256u, (uint16_t)t96);
    t98 = rd32(t97 + (uint16_t)t96 + (uint32_t)(int16_t)(eax << 4u));
    wr32(sp0 - 0x94u, t98);
    t99 = rd32(t97 + (uint16_t)t96 + (uint32_t)(int16_t)(eax << 4u) + 4u);
    wr32(sp0 - 0x90u, t99);
    t100 = rd32(t97 + (uint16_t)t96 + (uint32_t)(int16_t)(eax << 4u) + 8u);
    wr32(sp0 - 0x8cu, t100);
    t101 = rd32(t97 + (uint16_t)t96 + (uint32_t)(int16_t)(eax << 4u) + 0xcu);
    wr16(self + 0x256u, (uint16_t)t95);
    edx = t101;
L_100ba4be: ;
    COW_AT(100ba4be)
    wr32(sp0 - 0x88u, edx);
    wr32(sp0 - 0xacu, sp0 - 0x94u);
    wr32(sp0 - 0xb0u, 4u);
    wr8(sp0 - 0x85u, 0u);
    g->esp = sp0 - 0xa8u;
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, 4u, sp0 - 0x94u);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba24a: ;
    COW_AT(100ba24a)
    ebp = 8u;
    edi = 0u;
    goto L_100ba24f;
L_100ba2b2: ;
    COW_AT(100ba2b2)
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t83 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t84 = g->edx;
    eax = t83;
    edx = t84;
    ebp = 8u;
    edi = t83;
L_100ba2c9: ;
    COW_AT(100ba2c9)
    wr32(sp0 - 0xacu, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t85 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t86 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t85;
        edx = t86;
        goto L_100ba326;
    }
    eax = t85;
    edx = t86;
    COW_AT(100ba2d7)
    if ((int16_t)edi > (int16_t)eax) goto L_100ba326;
    COW_AT(100ba2dc)
    eax = 0u;
L_100ba2de: ;
    COW_AT(100ba2de)
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    t87 = rd16(self + 0x256u);
    g->esp = sp0 - 0xa8u;
    t88 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t89 = (uint16_t)t88 + rd32(self + 0x20u);
    wr32(COW_IMG(0x104897f8u) + (uint32_t)(int16_t)eax * 4u, t89);
    t90 = rd32(self + 0x1cu);
    wr16(self + 0x256u, (uint16_t)t87);
    wr32(COW_IMG(0x104896e8u) + (uint32_t)(int16_t)eax * 4u, t90);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba2c4: ;
    COW_AT(100ba2c4)
    ebp = 6u;
    edi = 0u;
    goto L_100ba2c9;
L_100ba326: ;
    COW_AT(100ba326)
    if ((int16_t)eax < 64) goto L_100ba2de;
    COW_AT(100ba32c)
    wr32(sp0 - 0xacu, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d388u));
    g->esp = sp0 - 0xb0u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba350: ;
    COW_AT(100ba350)
    wr32(sp0 - 0xacu, 8u);
    wr32(sp0 - 0x98u, 0xau);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t66 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t67 = g->edx;
    eax = t66;
    edx = t67;
    edi = t66;
    loc_98 = 0xau;
L_100ba36d: ;
    COW_AT(100ba36d)
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t68 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t69 = g->ecx;
    t70 = g->edx;
    if ((int16_t)t68 < 64)
    {
        eax = (uint32_t)(int16_t)t68;
        edx = t70;
        goto L_100ba38a;
    }
    eax = (uint32_t)(int16_t)t68;
    ecx = t69;
    edx = t70;
    COW_AT(100ba37f)
    wr32(sp0 - 0xacu, eax);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d364u));
L_100ba468: ;
    COW_AT(100ba468)
    g->esp = sp0 - 0xb0u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba365: ;
    COW_AT(100ba365)
    wr32(sp0 - 0x98u, 8u);
    edi = 0u;
    loc_98 = 8u;
    goto L_100ba36d;
L_100ba38a: ;
    COW_AT(100ba38a)
    wr32(sp0 - 0x84u, eax);
    if (rd32(COW_IMG(0x104897f8u) + eax * 4u) != 0u)
    {
        loc_84 = eax;
        goto L_100ba3a4;
    }
    ecx = rd32(COW_IMG(0x104897f8u) + eax * 4u);
    COW_AT(100ba399)
    wr32(sp0 - 0xacu, eax);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d340u));
    goto L_100ba468;
L_100ba3a4: ;
    COW_AT(100ba3a4)
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t71 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    if ((uint16_t)edi == 0u)
    {
        eax = t71;
    }
    else
    {
        eax = t71;
    COW_AT(100ba3b2)
        if ((int16_t)edi <= (int16_t)eax)
        {
    COW_AT(100ba3b7)
            eax = 0u;
        }
    }
    COW_AT(100ba3b9)
    t72 = rd32(sp0 - 0x84u);
    t73 = rd32(self + 0x1cu);
    t74 = rd16(self + 0x256u);
    t75 = rd32(self + 0x20u);
    wr16(self + 0x256u, 0u);
    t76 = rd32(COW_IMG(0x104897f8u) + t72 * 4u);
    wr32(self + 0x20u, t76);
    t77 = rd32(COW_IMG(0x104896e8u) + t72 * 4u);
    wr32(self + 0x1cu, t77);
    t78 = (uint32_t)(int16_t)(eax * 2u);
    wr32(sp0 - 0xacu, t78);
    g->eax = t78;
    g->edx = eax * 2u;
    g->esp = sp0 - 0xa8u;
    t79 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, t78);
    t80 = g->edx;
    wr32(sp0 - 0xacu, t79);
    wr32(sp0 - 0xb0u, 4u);
    wr32(self + 0x1cu, t73);
    wr16(self + 0x256u, (uint16_t)t74);
    wr32(self + 0x20u, t75);
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 4u, t79);
    t81 = g->ecx;
    t82 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + rd16(sp0 - 0x98u)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t82;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba423: ;
    COW_AT(100ba423)
    wr32(sp0 - 0xacu, 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t57 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    ebp = 0xau;
    edi = t57;
L_100ba43a: ;
    COW_AT(100ba43a)
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t59 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t60 = g->ecx;
    t61 = g->edx;
    if ((int16_t)t59 < 64)
    {
        eax = t59;
        ecx = t60;
        edx = t61;
        goto L_100ba454;
    }
    eax = t59;
    ecx = t60;
    COW_AT(100ba449)
    wr32(sp0 - 0xacu, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d31cu));
    edx = (uint32_t)(int16_t)eax;
    goto L_100ba468;
L_100ba435: ;
    COW_AT(100ba435)
    ebp = 8u;
    edi = 0u;
    goto L_100ba43a;
L_100ba454: ;
    COW_AT(100ba454)
    if (rd32(COW_IMG(0x104897f8u) + (uint32_t)(int16_t)eax * 4u) != 0u)
    {
        ebx = (uint32_t)(int16_t)eax;
        eax = rd32(COW_IMG(0x104897f8u) + (uint32_t)(int16_t)eax * 4u);
        goto L_100ba483;
    }
    ebx = (uint32_t)(int16_t)eax;
    eax = rd32(COW_IMG(0x104897f8u) + (uint32_t)(int16_t)eax * 4u);
    COW_AT(100ba462)
    wr32(sp0 - 0xacu, ebx);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d2f8u));
    goto L_100ba468;
L_100ba483: ;
    COW_AT(100ba483)
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t62 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    if ((uint16_t)edi == 0u)
    {
        eax = t62;
    }
    else
    {
        eax = t62;
    COW_AT(100ba491)
        if ((int16_t)edi <= (int16_t)eax)
        {
    COW_AT(100ba496)
            eax = 0u;
        }
    }
    COW_AT(100ba498)
    t63 = rd32((uint32_t)(int16_t)(eax << 4u) + rd32(COW_IMG(0x104897f8u) + ebx * 4u));
    wr32(sp0 - 0x94u, t63);
    t64 = rd32((uint32_t)(int16_t)(eax << 4u) + rd32(COW_IMG(0x104897f8u) + ebx * 4u) + 4u);
    wr32(sp0 - 0x90u, t64);
    t65 = rd32((uint32_t)(int16_t)(eax << 4u) + rd32(COW_IMG(0x104897f8u) + ebx * 4u) + 8u);
    wr32(sp0 - 0x8cu, t65);
    edx = rd32((uint32_t)(int16_t)(eax << 4u) + rd32(COW_IMG(0x104897f8u) + ebx * 4u) + 0xcu);
    goto L_100ba4be;
L_100ba4e7: ;
    COW_AT(100ba4e7)
    wr32(sp0 - 0xacu, 8u);
    wr32(sp0 - 0x98u, 0xau);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t47 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    edi = t47;
    loc_98 = 0xau;
L_100ba504: ;
    COW_AT(100ba504)
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t49 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t50 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t49;
        edx = t50;
        ebx = t49;
    }
    else
    {
        eax = t49;
        edx = t50;
        ebx = t49;
    COW_AT(100ba514)
        if ((int16_t)edi <= (int16_t)ebx)
        {
    COW_AT(100ba519)
            ebx = 0u;
        }
    }
    COW_AT(100ba51b)
    wr32(sp0 - 0xacu, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t51 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t52 = g->edx;
    wr32(sp0 - 0xacu, 2u);
    t53 = rd16(self + 0x256u);
    t54 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    wr32(sp0 - 0xacu, t51);
    t55 = (uint32_t)(int16_t)(ebx * 2u);
    wr32(sp0 - 0xb0u, t55);
    wr16(self + 0x256u, (uint16_t)t54);
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, t55, t51);
    t56 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(rd32(sp0 - 0x98u) + ((in_ebp & 0xffff0000u) | t53)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t56;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba4fc: ;
    COW_AT(100ba4fc)
    wr32(sp0 - 0x98u, 8u);
    edi = 0u;
    loc_98 = 8u;
    goto L_100ba504;
L_100ba564: ;
    COW_AT(100ba564)
    wr32(sp0 - 0xacu, 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t34 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    ebx = 0xau;
    edi = t34;
L_100ba57b: ;
    COW_AT(100ba57b)
    wr32(sp0 - 0xacu, 4u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t36 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 4u);
    wr32(sp0 - 0xacu, 6u);
    wr32(sp0 - 0x94u, rd32(t36));
    t37 = rd32(t36 + 4u);
    wr32(sp0 - 0x90u, t37);
    t38 = rd32(t36 + 8u);
    wr32(sp0 - 0x8cu, t38);
    t39 = rd32(t36 + 0xcu);
    wr32(sp0 - 0x88u, t39);
    wr8(sp0 - 0x85u, 0u);
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t41 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t40;
        edx = t41;
        ebp = t40;
    }
    else
    {
        eax = t40;
        edx = t41;
        ebp = t40;
    COW_AT(100ba5b4)
        if ((int16_t)edi <= (int16_t)ebp)
        {
    COW_AT(100ba5b9)
            ebp = 0u;
        }
    }
    COW_AT(100ba5bb)
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->edx = edx;
    t42 = rd16(self + 0x256u);
    g->esp = sp0 - 0xa8u;
    t43 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t44 = g->edx;
    wr16(self + 0x256u, (uint16_t)t43);
    wr32(sp0 - 0xacu, sp0 - 0x94u);
    t45 = (uint32_t)(int16_t)(ebp << 4u);
    wr32(sp0 - 0xb0u, t45);
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, t45, sp0 - 0x94u);
    t46 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(ebx + ((edi & 0xffff0000u) | t42)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t46;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba576: ;
    COW_AT(100ba576)
    ebx = 8u;
    edi = 0u;
    goto L_100ba57b;
L_100ba5f9: ;
    COW_AT(100ba5f9)
    wr32(sp0 - 0xacu, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t26 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t27 = g->edx;
    wr32(sp0 - 0xacu, 2u);
    t28 = rd16(self + 0x256u);
    t29 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t30 = (uint32_t)(int16_t)(t26 * 2u);
    wr32(sp0 - 0xacu, t30);
    wr16(self + 0x256u, (uint16_t)t29);
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, t30);
    t32 = g->edx;
    wr16(self + 0x256u, (uint16_t)t28);
    t33 = ((in_ebx & 0xffff0000u) | t28) + 6u;
    wr32(sp0 - 0xacu, t33);
    wr32(sp0 - 0xb0u, t31);
    cow_call_regs(g, COW_IMG(0x100b0510u), t31, self, t32, 0, 2, t31, t33);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_100ba646: ;
    COW_AT(100ba646)
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t14 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 2u);
    wr32(sp0 - 0x40u, rd32(t14));
    t15 = rd32(t14 + 4u);
    wr32(sp0 - 0x3cu, t15);
    t16 = (in_ebp & 0xffff0000u) | rd16(self + 0x256u);
    t17 = rd32(t14 + 8u);
    wr32(sp0 - 0x38u, t17);
    t18 = rd32(t14 + 0xcu);
    wr32(sp0 - 0x34u, t18);
    t19 = rd32(self + 0x20u);
    wr8(sp0 - 0x30u, 0u);
    wr8(sp0 - 0x70u, 0u);
    t20 = rd32((uint16_t)t16 + t19 + 5u);
    wr32(sp0 - 0x80u, t20);
    t21 = rd32((uint16_t)t16 + t19 + 9u);
    wr32(sp0 - 0x7cu, t21);
    t22 = rd32((uint16_t)t16 + t19 + 0xdu);
    wr32(sp0 - 0x78u, t22);
    t23 = rd32((uint16_t)t16 + t19 + 0x11u);
    wr32(sp0 - 0x74u, t23);
    if ((rd8((uint16_t)t16 + t19 + 4u) & 0xfu) == 0u)
    {
        ecx = t22;
        edx = t23;
        ebp = t16;
        goto L_100ba6f3;
    }
    eax = rd8((uint16_t)t16 + t19 + 4u) & 0xfu;
    ecx = t22;
    edx = t23;
    ebp = t16;
    COW_AT(100ba6b0)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100ba6ec;
    }
    COW_AT(100ba6b3)
    eax = sp0 - 0x40u;
    ebx = in_ebx;
    edi = sp0 - 0x80u;
L_100ba6bb: ;
    COW_AT(100ba6bb)
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_100ba6e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(edi);
    COW_AT(100ba6c5)
    if ((uint8_t)ecx == 0u) goto L_100ba6df;
    COW_AT(100ba6c9)
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_100ba6e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(edi + 1u);
    COW_AT(100ba6d5)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_100ba6bb;
    }
L_100ba6df: ;
    COW_AT(100ba6df)
    eax = 0u;
L_100ba6e8: ;
    COW_AT(100ba6e8)
    if (eax != 0u) goto L_100ba72c;
L_100ba6ec: ;
    COW_AT(100ba6ec)
    wr32(sp0 - 0xacu, 0x15u);
    loc_ac = 0x15u;
L_100ba7ee: ;
    COW_AT(100ba7ee)
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t25 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, loc_ac);
    wr16(self + 0x256u, (uint16_t)t25);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_a0 = rd32(sp0 - 0xa0u);
    loc_a4 = rd32(sp0 - 0xa4u);
    loc_a8 = rd32(sp0 - 0xa8u);
L_100ba7fc: ;
    COW_AT(100ba7fc)
    g->ebx = loc_9c;
    g->esi = loc_a4;
    g->edi = loc_a8;
    g->ebp = loc_a0;
    return;
L_100ba6e3: ;
    COW_AT(100ba6e3)
    eax = -cf + 1u - cf;
    goto L_100ba6e8;
L_100ba6f3: ;
    COW_AT(100ba6f3)
    eax = sp0 - 0x40u;
    ebx = in_ebx;
    edi = sp0 - 0x80u;
L_100ba6fb: ;
    COW_AT(100ba6fb)
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_100ba723;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(edi);
    COW_AT(100ba705)
    if ((uint8_t)ecx == 0u) goto L_100ba71f;
    COW_AT(100ba709)
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_100ba723;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(edi + 1u);
    COW_AT(100ba715)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_100ba6fb;
    }
L_100ba71f: ;
    COW_AT(100ba71f)
    eax = 0u;
L_100ba728: ;
    COW_AT(100ba728)
    if (eax != 0u) goto L_100ba6ec;
L_100ba72c: ;
    COW_AT(100ba72c)
    t24 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(ebp + 0x17u));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t24;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba723: ;
    COW_AT(100ba723)
    eax = -cf + 1u - cf;
    goto L_100ba728;
L_100ba741: ;
    COW_AT(100ba741)
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t3 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 2u);
    wr32(sp0 - 0x80u, rd32(t3));
    t4 = rd32(t3 + 4u);
    wr32(sp0 - 0x7cu, t4);
    t5 = rd32(t3 + 8u);
    wr32(sp0 - 0x78u, t5);
    wr32(sp0 - 0xacu, 4u);
    t6 = rd32(t3 + 0xcu);
    wr32(sp0 - 0x74u, t6);
    t7 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 4u);
    wr32(sp0 - 0x40u, rd32(t7));
    t8 = rd32(t7 + 4u);
    wr32(sp0 - 0x3cu, t8);
    t9 = (in_ebp & 0xffff0000u) | rd16(self + 0x256u);
    t10 = rd32(t7 + 8u);
    wr32(sp0 - 0x38u, t10);
    t11 = rd32(t7 + 0xcu);
    wr32(sp0 - 0x34u, t11);
    t12 = rd32(self + 0x20u);
    wr8(sp0 - 0x70u, 0u);
    wr8(sp0 - 0x30u, 0u);
    if ((rd8(t12 + (uint16_t)t9 + 6u) & 0xfu) == 0u)
    {
        ecx = t12;
        edx = t11;
        ebp = t9;
        goto L_100ba807;
    }
    eax = rd8(t12 + (uint16_t)t9 + 6u) & 0xfu;
    ecx = t12;
    edx = t11;
    ebp = t9;
    COW_AT(100ba7b0)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100ba7ec;
    }
    COW_AT(100ba7b3)
    eax = sp0 - 0x80u;
    ebx = in_ebx;
    edi = sp0 - 0x40u;
L_100ba7bb: ;
    COW_AT(100ba7bb)
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_100ba7e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(edi);
    COW_AT(100ba7c5)
    if ((uint8_t)ecx == 0u) goto L_100ba7df;
    COW_AT(100ba7c9)
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_100ba7e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(edi + 1u);
    COW_AT(100ba7d5)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_100ba7bb;
    }
L_100ba7df: ;
    COW_AT(100ba7df)
    eax = 0u;
L_100ba7e8: ;
    COW_AT(100ba7e8)
    if (eax != 0u) goto L_100ba840;
L_100ba7ec: ;
    COW_AT(100ba7ec)
    wr32(sp0 - 0xacu, 7u);
    loc_ac = 7u;
    goto L_100ba7ee;
L_100ba7e3: ;
    COW_AT(100ba7e3)
    eax = -cf + 1u - cf;
    goto L_100ba7e8;
L_100ba807: ;
    COW_AT(100ba807)
    eax = sp0 - 0x80u;
    ebx = in_ebx;
    edi = sp0 - 0x40u;
L_100ba80f: ;
    COW_AT(100ba80f)
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_100ba837;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(edi);
    COW_AT(100ba819)
    if ((uint8_t)ecx == 0u) goto L_100ba833;
    COW_AT(100ba81d)
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_100ba837;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(edi + 1u);
    COW_AT(100ba829)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_100ba80f;
    }
L_100ba833: ;
    COW_AT(100ba833)
    eax = 0u;
L_100ba83c: ;
    COW_AT(100ba83c)
    if (eax != 0u) goto L_100ba7ec;
L_100ba840: ;
    COW_AT(100ba840)
    t13 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(ebp + 9u));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t13;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba837: ;
    COW_AT(100ba837)
    eax = -cf + 1u - cf;
    goto L_100ba83c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ba190(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ba1bbu:
    {
        uint32_t cf;
        uint32_t eax;
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xa8u;
        g->edi = 0u;
        wr32(sp0 - 0xa0u, in_ebp);
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba1c2u:
    {
        uint32_t cf;
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
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba1d4u:
    {
        uint32_t cf;
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
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ba1d9u:
    {
        uint32_t cf;
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
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba1e9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba1eeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba1f0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba238u:
    {
        uint32_t cf;
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
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba24au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa8u;
        g->edi = 0u;
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba24fu:
    {
        uint32_t cf;
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
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba25du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba262u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba264u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba2b2u:
    {
        uint32_t cf;
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
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba2c4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa8u;
        g->edi = 0u;
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba2c9u:
    {
        uint32_t cf;
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
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba2d7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba2dcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba2deu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba326u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba32cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba350u:
    {
        uint32_t cf;
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0xa0u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x100ba365u:
    {
        uint32_t cf;
        uint32_t eax;
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
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        g->edi = 0u;
        wr32(sp0 - 0xa0u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x100ba36du:
    {
        uint32_t cf;
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
        uint32_t loc_98;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0xa0u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x100ba37fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba38au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba399u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba3a4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba3b2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba3b7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba3b9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba423u:
    {
        uint32_t cf;
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
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba435u:
    {
        uint32_t cf;
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
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ba43au:
    {
        uint32_t cf;
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
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba449u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba454u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba462u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba468u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x100ba483u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba491u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba496u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba498u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba4beu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba4e7u:
    {
        uint32_t cf;
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0xa0u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x100ba4fcu:
    {
        uint32_t cf;
        uint32_t eax;
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
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        g->edi = 0u;
        wr32(sp0 - 0xa0u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x100ba504u:
    {
        uint32_t cf;
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
        uint32_t loc_98;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0xa0u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x100ba514u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba519u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba51bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba564u:
    {
        uint32_t cf;
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
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba576u:
    {
        uint32_t cf;
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
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ba57bu:
    {
        uint32_t cf;
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
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba5b4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba5b9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba5bbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba5f9u:
    {
        uint32_t cf;
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
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba646u:
    {
        uint32_t cf;
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
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0xa0u, in_ebp);
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba6b0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6b3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6bbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6c5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6c9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6d5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6e3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6e8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6ecu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6f3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba6fbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba705u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba709u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba715u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba71fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba723u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba728u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba72cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba741u:
    {
        uint32_t cf;
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
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0xa0u, in_ebp);
        wr32(sp0 - 0x9cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100ba7b0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7b3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7bbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7c5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7c9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7d5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7e3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7e8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7ecu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba7eeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x100ba7fcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba807u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba80fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba819u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba81du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba829u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba833u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba837u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba83cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100ba840u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ba190(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100ba190(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
