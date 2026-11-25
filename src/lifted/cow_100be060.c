/* f_0x100be060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100be060(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100be071u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be071;
    case 0x100be09fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be09f;
    case 0x100be0aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be0ae;
    case 0x100be0c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be0c5;
    case 0x100be0d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be0d2;
    case 0x100be0d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be0d7;
    case 0x100be0e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be0e0;
    case 0x100be0efu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be0ef;
    case 0x100be0f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be0f4;
    case 0x100be10bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be10b;
    case 0x100be118u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be118;
    case 0x100be11du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be11d;
    case 0x100be12au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be12a;
    case 0x100be12fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be12f;
    case 0x100be135u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be135;
    case 0x100be138u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be138;
    case 0x100be13bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be13b;
    case 0x100be14au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be14a;
    case 0x100be15eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be15e;
    case 0x100be16du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be16d;
    case 0x100be181u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be181;
    case 0x100be190u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be190;
    case 0x100be19au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be19a;
    case 0x100be19eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_100be19e;
    case 0x100be1a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_100be1a6;
    case 0x100be1b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be1b2;
    case 0x100be1b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be1b6;
    case 0x100be1bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be1bf;
    case 0x100be1cau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be1ca;
    case 0x100be1d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be1d1;
    case 0x100be1dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be1db;
    case 0x100be1e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be1e7;
    case 0x100be1fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be1fc;
    case 0x100be203u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be203;
    case 0x100be20du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be20d;
    case 0x100be217u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be217;
    case 0x100be22cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be22c;
    case 0x100be231u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be231;
    case 0x100be237u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be237;
    case 0x100be23au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be23a;
    case 0x100be23du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be23d;
    case 0x100be24cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be24c;
    case 0x100be260u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be260;
    case 0x100be26fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be26f;
    case 0x100be283u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be283;
    case 0x100be292u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be292;
    case 0x100be29cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be29c;
    case 0x100be2a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_100be2a0;
    case 0x100be2a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_100be2a8;
    case 0x100be2b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be2b1;
    case 0x100be2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be2bc;
    case 0x100be2c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be2c3;
    case 0x100be2c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be2c7;
    case 0x100be2d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be2d0;
    case 0x100be2d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be2d9;
    case 0x100be2e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be2e4;
    case 0x100be2f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be2f0;
    case 0x100be305u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be305;
    case 0x100be30eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be30e;
    case 0x100be315u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be315;
    case 0x100be31fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be31f;
    case 0x100be329u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be329;
    case 0x100be33eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be33e;
    case 0x100be347u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be347;
    case 0x100be34cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be34c;
    case 0x100be35cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be35c;
    case 0x100be368u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be368;
    case 0x100be389u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be389;
    case 0x100be391u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100be391;
    case 0x100be396u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be396;
    case 0x100be39fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be39f;
    case 0x100be3aau: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be3aa;
    case 0x100be3afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be3af;
    case 0x100be3b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be3b9;
    case 0x100be3c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be3c2;
    case 0x100be3c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be3c7;
    case 0x100be3d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be3d7;
    case 0x100be3f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be3f5;
    case 0x100be3ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be3ff;
    case 0x100be404u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be404;
    case 0x100be414u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be414;
    case 0x100be432u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be432;
    case 0x100be43cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be43c;
    case 0x100be441u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be441;
    case 0x100be451u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be451;
    case 0x100be45eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be45e;
    case 0x100be46bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be46b;
    case 0x100be470u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be470;
    case 0x100be480u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be480;
    case 0x100be497u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be497;
    case 0x100be4a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be4a4;
    case 0x100be4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be4a9;
    case 0x100be4b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be4b9;
    case 0x100be4c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be4c1;
    case 0x100be4c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be4c4;
    case 0x100be4c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be4c7;
    case 0x100be4d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be4d8;
    case 0x100be4e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be4e9;
    case 0x100be4f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be4f0;
    case 0x100be4f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be4f4;
    case 0x100be505u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be505;
    case 0x100be509u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be509;
    case 0x100be512u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be512;
    case 0x100be51du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be51d;
    case 0x100be524u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be524;
    case 0x100be52eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be52e;
    case 0x100be53au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be53a;
    case 0x100be54fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be54f;
    case 0x100be556u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be556;
    case 0x100be560u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be560;
    case 0x100be56au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be56a;
    case 0x100be57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be57f;
    case 0x100be581u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100be581;
    case 0x100be591u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be591;
    case 0x100be5aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be5ae;
    case 0x100be5b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be5b2;
    case 0x100be5bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be5bb;
    case 0x100be5c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be5c6;
    case 0x100be5d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be5d7;
    case 0x100be5deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be5de;
    case 0x100be5e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be5e8;
    case 0x100be5f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_100be5f1;
    case 0x100be5feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be5fe;
    case 0x100be60bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100be60b;
    case 0x100be620u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100be620;
    default: break;
    }
#endif

    COW_AT(100be060)
    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x4cu, 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    COW_AT(100be071)
    t3 = rd32(sp0 + 4u);
    wr8(sp0 - 0x50u, 0u);
    wr8(sp0 - 0x4fu, 0u);
    t4 = rd8(t3);
    wr8(sp0 - 0x4eu, 0u);
    wr8(sp0 + 4u, (uint8_t)t4);
    if ((uint8_t)rd32(sp0 + 4u) - 0xau > 0x15u)
    {
        loc_54 = in_ebx;
        loc_58 = in_esi;
        loc_5c = in_edi;
        goto L_100be5f1;
    }
    eax = t3;
    ecx = (uint8_t)rd32(sp0 + 4u) - 0xau;
    edi = (uint8_t)rd32(sp0 + 4u);
    COW_AT(100be09f)
    t5 = rd32(COW_IMG(0x100be62cu) + rd8(COW_IMG(0x100be65cu) + ecx) * 4u);
    switch (t5 - RD)
    {
    case 0x100be0aeu: edx = rd8(COW_IMG(0x100be65cu) + ecx); goto L_100be0ae;
    case 0x100be0f4u: edx = rd8(COW_IMG(0x100be65cu) + ecx); goto L_100be0f4;
    case 0x100be12fu: edx = rd8(COW_IMG(0x100be65cu) + ecx); goto L_100be12f;
    case 0x100be231u: edx = rd8(COW_IMG(0x100be65cu) + ecx); goto L_100be231;
    case 0x100be34cu: goto L_100be34c;
    case 0x100be3c7u: goto L_100be3c7;
    case 0x100be404u: goto L_100be404;
    case 0x100be441u: goto L_100be441;
    case 0x100be470u: goto L_100be470;
    case 0x100be4a9u: goto L_100be4a9;
    case 0x100be581u: goto L_100be581;
    case 0x100be5f1u: edx = rd8(COW_IMG(0x100be65cu) + ecx); loc_54 = in_ebx; loc_58 = in_esi; loc_5c = in_edi; goto L_100be5f1;
    default: rt_fatal(g, COW_IMG(0x100be0a7u), "switch");
    }
    return 0;
L_100be0ae: ;
    COW_AT(100be0ae)
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xbfeu) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xbfeu) * 4u);
        goto L_100be0d7;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xbfeu) * 4u);
    COW_AT(100be0c5)
    t117 = rd32(self + 0x10u);
    wr32(sp0 - 0x60u, t117);
    g->edx = t117;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t117);
    t118 = g->edx;
    edx = t118;
    COW_AT(100be0d2)
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
L_100be5f1: ;
    COW_AT(100be5f1)
    t122 = rd32(self + 0xcu);
    wr32(sp0 - 0x60u, t122);
    g->eax = t122;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t123 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x4cu, 1, t122);
    t124 = g->edx;
    eax = t123;
    edx = t124;
    COW_AT(100be5fe)
    wr32(sp0 - 0x64u, eax);
    t125 = rd32(self + 0x704u);
    wr32(sp0 - 0x68u, t125);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t126 = cow_call_regs(g, COW_IMG(0x100c2bf0u), eax, t125, g->edx, 1, 9, t125, eax, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
    t127 = g->edx;
    eax = t126;
    edx = t127;
    COW_AT(100be60b)
    wr32(self + 0x704u, eax);
    wr32(self + 0xcu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t128 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    eax = t128;
    COW_AT(100be620)
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return (eax & 0xffffff00u) | 1u;
L_100be0d7: ;
    COW_AT(100be0d7)
    t119 = rd16(eax + 0x210u);
    if ((uint16_t)t119 == 0u)
    {
    COW_AT(100be11d)
        wr32(sp0 - 0x60u, eax + 0x7cu);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax + 0x7cu);
        t121 = g->edx;
        edx = t121;
    COW_AT(100be12a)
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
    }
    else
    {
    COW_AT(100be0e0)
        wr32(sp0 - 0x60u, eax + 0x214u);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax + 0x214u);
        t120 = g->edx;
        edx = t120;
    COW_AT(100be0ef)
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
    }
    goto L_100be5f1;
L_100be0f4: ;
    COW_AT(100be0f4)
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u);
        goto L_100be0d7;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u);
    COW_AT(100be10b)
    t115 = rd32(self + 0x14u);
    wr32(sp0 - 0x60u, t115);
    g->edx = t115;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, t115);
    t116 = g->edx;
    edx = t116;
    COW_AT(100be118)
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    goto L_100be5f1;
L_100be12f: ;
    COW_AT(100be12f)
    if (edi == 0x12u)
    {
        eax = eax + 1u;
    COW_AT(100be181)
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        wr32(sp0 - 0x64u, eax);
        wr32(sp0 - 0x68u, self + 0x50u);
        g->esp = sp0 - 0x5cu;
        cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
        t97 = g->edx;
        edx = t97;
    COW_AT(100be190)
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
    }
    else
    {
        eax = eax + 1u;
        edi = edi - 0x12u;
    COW_AT(100be135)
        if (edi == 1u)
        {
    COW_AT(100be15e)
            wr32(sp0 - 0x60u, sp0 - 0x20u);
            wr32(sp0 - 0x64u, eax);
            wr32(sp0 - 0x68u, self + 0x50u);
            g->esp = sp0 - 0x5cu;
            cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
    COW_AT(100be16d)
            eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
            edx = rd32(self + 4u);
            loc_54 = rd32(sp0 - 0x54u);
            loc_58 = rd32(sp0 - 0x58u);
            loc_5c = rd32(sp0 - 0x5cu);
        }
        else
        {
            edi = edi - 1u;
    COW_AT(100be138)
            if (edi != 1u)
            {
    COW_AT(100be19a)
                eax = rd32(sp0 + 4u);
                loc_54 = in_ebx;
                loc_58 = in_esi;
                loc_5c = in_edi;
            }
            else
            {
    COW_AT(100be13b)
                wr32(sp0 - 0x60u, sp0 - 0x20u);
                wr32(sp0 - 0x64u, eax);
                wr32(sp0 - 0x68u, self + 0x50u);
                g->esp = sp0 - 0x5cu;
                cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
                t96 = g->edx;
                edx = t96;
    COW_AT(100be14a)
                eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
            }
        }
    }
    COW_AT(100be19e)
    if (eax == 0u) goto L_100be5f1;
    COW_AT(100be1a6)
    wr32(sp0 - 0x60u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t98 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t99 = g->edx;
    eax = t98;
    edx = t99;
    COW_AT(100be1b2)
    if (eax != 0u) goto L_100be1ca;
    COW_AT(100be1b6)
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t100 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    eax = t100;
    COW_AT(100be1bf)
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return eax & 0xffffff00u;
L_100be1ca: ;
    COW_AT(100be1ca)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t101 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t102 = g->ecx;
    t103 = g->edx;
    eax = t101;
    ecx = t102;
    edx = t103;
    COW_AT(100be1d1)
    if (eax == 0u)
    {
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
    }
    else
    {
        edi = eax;
    COW_AT(100be1db)
        wr32(sp0 - 0x60u, 2u);
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        g->eax = sp0 - 0x50u;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t104 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x50u, 2u);
        t105 = g->edx;
        eax = t104;
        edx = t105;
    COW_AT(100be1e7)
        wr8(sp0 - 0x4eu, 0u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->eax = eax;
        g->esp = sp0 - 0x5cu;
        t106 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        eax = t106;
    COW_AT(100be1fc)
        g->eax = eax;
        g->edx = rd32(edi);
        t107 = rd32(edi);
        g->esp = sp0 - 0x5cu;
        t108 = cow_thiscall(g, rd32(t107 + 4u), edi, 0);
        t109 = g->edx;
        eax = t108;
        edx = t109;
    COW_AT(100be203)
        wr32(sp0 - 0x60u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, eax);
        t110 = g->ecx;
        t111 = g->edx;
        ecx = t110;
        edx = t111;
    COW_AT(100be20d)
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->eax = sp0 - 0x50u;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t112 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x50u);
        t113 = g->edx;
        eax = t112;
        edx = t113;
    COW_AT(100be217)
        wr8(sp0 - 0x4eu, 0u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        t114 = g->edx;
        edx = t114;
    COW_AT(100be22c)
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
    }
    goto L_100be5f1;
L_100be231: ;
    COW_AT(100be231)
    if (edi == 0x15u)
    {
        eax = eax + 1u;
    COW_AT(100be283)
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        wr32(sp0 - 0x64u, eax);
        wr32(sp0 - 0x68u, self + 0x50u);
        g->esp = sp0 - 0x5cu;
        t70 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
        t71 = g->edx;
        eax = t70;
        edx = t71;
    COW_AT(100be292)
        edi = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
    }
    else
    {
        eax = eax + 1u;
        edi = edi - 0x15u;
    COW_AT(100be237)
        if (edi == 1u)
        {
    COW_AT(100be260)
            wr32(sp0 - 0x60u, sp0 - 0x20u);
            wr32(sp0 - 0x64u, eax);
            wr32(sp0 - 0x68u, self + 0x50u);
            g->esp = sp0 - 0x5cu;
            cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
            t69 = g->edx;
            edx = t69;
    COW_AT(100be26f)
            eax = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
            edi = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
            loc_54 = rd32(sp0 - 0x54u);
            loc_58 = rd32(sp0 - 0x58u);
            loc_5c = rd32(sp0 - 0x5cu);
        }
        else
        {
            edi = edi - 1u;
    COW_AT(100be23a)
            if (edi != 1u)
            {
    COW_AT(100be29c)
                edi = rd32(sp0 + 4u);
                loc_54 = in_ebx;
                loc_58 = in_esi;
                loc_5c = in_edi;
            }
            else
            {
    COW_AT(100be23d)
                wr32(sp0 - 0x60u, sp0 - 0x20u);
                wr32(sp0 - 0x64u, eax);
                wr32(sp0 - 0x68u, self + 0x50u);
                g->esp = sp0 - 0x5cu;
                t68 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax, sp0 - 0x20u);
                eax = t68;
    COW_AT(100be24c)
                edx = rd32(self + 4u);
                edi = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
            }
        }
    }
    COW_AT(100be2a0)
    if (edi == 0u) goto L_100be5f1;
    COW_AT(100be2a8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t72 = cow_thiscall(g, COW_IMG(0x10155550u), sp0 - 0x40u, 0);
    t73 = g->edx;
    eax = t72;
    edx = t73;
    COW_AT(100be2b1)
    wr32(sp0 - 0x60u, sp0 - 0x40u);
    wr32(sp0 - 0x64u, edi);
    g->esp = sp0 - 0x5cu;
    t74 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, sp0 - 0x40u, edx, 1, 2, edi, sp0 - 0x40u);
    t75 = g->edx;
    eax = t74;
    edx = t75;
    COW_AT(100be2bc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t76 = cow_thiscall(g, COW_IMG(0x10154a40u), eax, 2, rd32(sp0 - 0x64u), sp0 - 0x40u);
    t77 = g->ecx;
    t78 = g->edx;
    eax = t76;
    ecx = t77;
    edx = t78;
    COW_AT(100be2c3)
    if ((uint8_t)eax != 0u) goto L_100be2e4;
    COW_AT(100be2c7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t79 = cow_thiscall(g, COW_IMG(0x10155500u), sp0 - 0x40u, 0);
    t80 = g->edx;
    eax = t79;
    edx = t80;
    COW_AT(100be2d0)
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t81 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    eax = t81;
    COW_AT(100be2d9)
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return eax & 0xffffff00u;
L_100be2e4: ;
    COW_AT(100be2e4)
    wr32(sp0 - 0x60u, 3u);
    wr32(sp0 - 0x64u, sp0 - 0x50u);
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x5cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x50u, 3u);
    t82 = g->edx;
    edx = t82;
    COW_AT(100be2f0)
    wr8(sp0 - 0x4eu, 0u);
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t83 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, sp0 - 0x50u);
    t84 = g->edx;
    eax = t83;
    edx = t84;
    COW_AT(100be305)
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t85 = cow_thiscall(g, COW_IMG(0x10155600u), sp0 - 0x40u, 0);
    eax = t85;
    COW_AT(100be30e)
    g->eax = eax;
    g->edx = rd32(eax);
    t86 = rd32(eax);
    g->esp = sp0 - 0x5cu;
    t87 = cow_thiscall(g, rd32(t86 + 4u), eax, 0);
    t88 = g->edx;
    eax = t87;
    edx = t88;
    COW_AT(100be315)
    wr32(sp0 - 0x60u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, eax);
    t89 = g->ecx;
    t90 = g->edx;
    ecx = t89;
    edx = t90;
    COW_AT(100be31f)
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t91 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x50u);
    t92 = g->edx;
    eax = t91;
    edx = t92;
    COW_AT(100be329)
    wr8(sp0 - 0x4eu, 0u);
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t93 = cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, sp0 - 0x50u);
    t94 = g->edx;
    eax = t93;
    edx = t94;
    COW_AT(100be33e)
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x10155500u), sp0 - 0x40u, 0);
    t95 = g->edx;
    edx = t95;
    COW_AT(100be347)
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    goto L_100be5f1;
L_100be34c: ;
    COW_AT(100be34c)
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    t54 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t55 = g->edx;
    eax = t54;
    edx = t55;
    COW_AT(100be35c)
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x10258c20u), sp0 - 0x40u, 0);
    COW_AT(100be368)
    wr32(sp0 - 0x60u, 0u);
    t56 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x64u, t56);
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = rd32(self + 4u);
    t57 = rd32(self + 4u);
    g->esp = sp0 - 0x5cu;
    t58 = cow_thiscall(g, COW_IMG(0x10157050u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0x40u, t56, 0u);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(100be389)
    if (eax != 0u) goto L_100be3aa;
    COW_AT(100be391)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t60 = cow_thiscall(g, COW_IMG(0x10258be0u), sp0 - 0x40u, 0);
    t61 = g->edx;
    eax = t60;
    edx = t61;
    COW_AT(100be396)
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t62 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    eax = t62;
    COW_AT(100be39f)
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return eax & 0xffffff00u;
L_100be3aa: ;
    COW_AT(100be3aa)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t63 = cow_thiscall(g, COW_IMG(0x10258c50u), sp0 - 0x40u, 0);
    t64 = g->edx;
    eax = t63;
    edx = t64;
    COW_AT(100be3af)
    wr32(sp0 - 0x60u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t65 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax);
    t66 = g->edx;
    eax = t65;
    edx = t66;
    COW_AT(100be3b9)
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x10258be0u), sp0 - 0x40u, 0);
    t67 = g->edx;
    edx = t67;
    COW_AT(100be3c2)
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    goto L_100be5f1;
L_100be3c7: ;
    COW_AT(100be3c7)
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax + 1u, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    COW_AT(100be3d7)
    t49 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
    wr32(sp0 - 0x60u, t49);
    t50 = rd16(sp0 - 0x20u);
    g->esp = sp0 - 0x5cu;
    t51 = cow_call_regs(g, COW_IMG(0x10227330u), (uint32_t)(int16_t)t50, rd32(COW_IMG(0x106671b4u)), t49, 0, 1, t49);
    t52 = g->edx;
    eax = t51;
    edx = t52;
    COW_AT(100be3f5)
    wr32(sp0 - 0x60u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax);
    t53 = g->edx;
    edx = t53;
    COW_AT(100be3ff)
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    goto L_100be5f1;
L_100be404: ;
    COW_AT(100be404)
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax + 1u, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t44 = g->edx;
    edx = t44;
    COW_AT(100be414)
    t45 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x60u, t45);
    g->eax = t45;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t46 = cow_thiscall(g, COW_IMG(0x101673d0u), rd32(COW_IMG(0x10621950u)), 1, t45);
    t47 = g->edx;
    eax = t46;
    edx = t47;
    COW_AT(100be432)
    wr32(sp0 - 0x60u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax);
    t48 = g->edx;
    edx = t48;
    COW_AT(100be43c)
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    goto L_100be5f1;
L_100be441: ;
    COW_AT(100be441)
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    t38 = cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(100be451)
    t40 = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
    wr32(sp0 - 0x6cu, t40);
    wr32(sp0 - 0x70u, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    t41 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, t40);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(100be45e)
    wr32(sp0 - 0x60u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax);
    t43 = g->edx;
    edx = t43;
    COW_AT(100be46b)
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    goto L_100be5f1;
L_100be470: ;
    COW_AT(100be470)
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x20u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    COW_AT(100be480)
    t33 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x6cu, t33);
    wr32(sp0 - 0x70u, 0x14u);
    g->eax = t33;
    g->edx = rd32(self + 4u);
    t34 = rd32(self + 4u);
    g->esp = sp0 - 0x68u;
    t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, t33);
    t36 = g->edx;
    eax = t35;
    edx = t36;
    COW_AT(100be497)
    wr32(sp0 - 0x60u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax);
    t37 = g->edx;
    edx = t37;
    COW_AT(100be4a4)
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    goto L_100be5f1;
L_100be4a9: ;
    COW_AT(100be4a9)
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax + 1u, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t18 = g->edx;
    edx = t18;
    COW_AT(100be4b9)
    if (edi == 0x1du)
    {
    COW_AT(100be4e9)
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
    }
    else
    {
        edi = edi - 0x1du;
    COW_AT(100be4c1)
        if (edi == 1u)
        {
    COW_AT(100be4d8)
            eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
            edx = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        }
        else
        {
            edi = edi - 1u;
    COW_AT(100be4c4)
            if (edi != 1u)
            {
    COW_AT(100be4f0)
                eax = rd32(sp0 + 4u);
            }
            else
            {
    COW_AT(100be4c7)
                eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc50u);
            }
        }
    }
    COW_AT(100be4f4)
    wr32(sp0 - 0x60u, eax + 0xe000u);
    g->eax = eax + 0xe000u;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t19 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax + 0xe000u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(100be505)
    if (eax != 0u) goto L_100be51d;
    COW_AT(100be509)
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t21 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    eax = t21;
    COW_AT(100be512)
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return eax & 0xffffff00u;
L_100be51d: ;
    COW_AT(100be51d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t22 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(100be524)
    if (eax == 0u)
    {
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
    }
    else
    {
        edi = eax;
    COW_AT(100be52e)
        wr32(sp0 - 0x60u, 8u);
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        g->eax = eax;
        g->esp = sp0 - 0x5cu;
        t24 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x50u, 2, sp0 - 0x50u, 8u);
        eax = t24;
    COW_AT(100be53a)
        wr8(sp0 - 0x4eu, 0u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->edx = sp0 - 0x50u;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        t25 = g->edx;
        edx = t25;
    COW_AT(100be54f)
        g->eax = rd32(edi);
        g->edx = edx;
        t26 = rd32(edi);
        g->esp = sp0 - 0x5cu;
        t27 = cow_thiscall(g, rd32(t26 + 4u), edi, 0);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    COW_AT(100be556)
        wr32(sp0 - 0x60u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t29 = cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, eax);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    COW_AT(100be560)
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->eax = eax;
        g->esp = sp0 - 0x5cu;
        t31 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x50u);
        eax = t31;
    COW_AT(100be56a)
        wr8(sp0 - 0x4eu, 0u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        g->edx = sp0 - 0x50u;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0x4cu, 1, sp0 - 0x50u);
        t32 = g->edx;
        edx = t32;
    COW_AT(100be57f)
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
    }
    goto L_100be5f1;
L_100be581: ;
    COW_AT(100be581)
    wr32(sp0 - 0x60u, sp0 - 0x20u);
    wr32(sp0 - 0x64u, eax + 1u);
    wr32(sp0 - 0x68u, self + 0x50u);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax + 1u, g->ecx, self + 0x50u, 1, 3, self + 0x50u, eax + 1u, sp0 - 0x20u);
    t6 = g->edx;
    edx = t6;
    COW_AT(100be591)
    t7 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x20u) * 4u + 0xc64u);
    wr32(sp0 - 0x60u, t7);
    g->eax = t7;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t8 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t7);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(100be5ae)
    if (eax != 0u) goto L_100be5c6;
    COW_AT(100be5b2)
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t10 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x4cu, edx, 0);
    eax = t10;
    COW_AT(100be5bb)
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return eax & 0xffffff00u;
L_100be5c6: ;
    COW_AT(100be5c6)
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, eax);
    wr32(sp0 - 0x68u, sp0 - 0x30u);
    g->eax = eax;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x64u;
    t11 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0x30u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(100be5d7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t13 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(100be5de)
    wr32(sp0 - 0x60u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t15 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0x4cu, 1, eax);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(100be5e8)
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10257b40u), eax, sp0 - 0x30u, edx, 1, 0);
    t17 = g->edx;
    edx = t17;
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    goto L_100be5f1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100be060(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100be071u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100be09fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be0aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be0c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be0d2u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be0d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be0e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be0efu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be0f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be10bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be118u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be11du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be12au:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be12fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be135u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be138u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be13bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be14au:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be15eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be16du:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be181u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be190u:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be19au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be19eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be1a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be1b2u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be1b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100be1bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100be1cau:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be1d1u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be1dbu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be1e7u:
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
        g->esp = sp0 - 0x64u;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be1fcu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be203u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be20du:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be217u:
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
        g->esp = sp0 - 0x60u;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be22cu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be231u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be237u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be23au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be23du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be24cu:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be260u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be26fu:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be283u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be292u:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be29cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be2a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be2a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be2b1u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be2bcu:
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
        g->esp = sp0 - 0x64u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be2c3u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be2c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be2d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be2d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be2e4u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be2f0u:
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
        g->esp = sp0 - 0x64u;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be305u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be30eu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be315u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be31fu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be329u:
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
        g->esp = sp0 - 0x60u;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be33eu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be347u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be34cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be35cu:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be368u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be389u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be391u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ecx = sp0 - 0x40u;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be396u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be39fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be3aau:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ecx = sp0 - 0x40u;
        g->ebx = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be3afu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be3b9u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be3c2u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100be3c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be3d7u:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be3f5u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be3ffu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be404u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be414u:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be432u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be43cu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be441u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be451u:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be45eu:
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
        g->esp = sp0 - 0x70u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be46bu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be470u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be480u:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be497u:
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
        g->esp = sp0 - 0x70u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be4a4u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be4a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be4b9u:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be4c1u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be4c4u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be4c7u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be4d8u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be4e9u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be4f0u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be4f4u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be505u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be509u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100be512u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100be51du:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be524u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be52eu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be53au:
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
        g->esp = sp0 - 0x64u;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be54fu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be556u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be560u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be56au:
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
        g->esp = sp0 - 0x60u;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be57fu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        wr32(sp0 - 0x60u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100be581u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be591u:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100be5aeu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be5b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100be5bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100be5c6u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be5d7u:
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
        g->esp = sp0 - 0x64u;
        g->ebx = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100be5deu:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100be5e8u:
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
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100be5f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be5feu:
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
        g->esp = sp0 - 0x60u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be60bu:
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
        g->esp = sp0 - 0x68u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be620u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100be060(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100be060(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
