/* f_0x102e690b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e690b(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e692cu: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e692c;
    case 0x102e6932u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6932;
    case 0x102e693bu: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e693b;
    case 0x102e6941u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6941;
    case 0x102e694du: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e694d;
    case 0x102e6954u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6954;
    case 0x102e6970u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6970;
    case 0x102e697bu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e697b;
    case 0x102e699au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e699a;
    case 0x102e69a5u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e69a5;
    case 0x102e69c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e69c4;
    case 0x102e69cfu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e69cf;
    case 0x102e69eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e69ee;
    case 0x102e69f9u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e69f9;
    case 0x102e6a18u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6a18;
    case 0x102e6a23u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6a23;
    case 0x102e6a42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6a42;
    case 0x102e6a4du: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6a4d;
    case 0x102e6a6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6a6c;
    case 0x102e6a77u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6a77;
    case 0x102e6a96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6a96;
    case 0x102e6aa1u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6aa1;
    case 0x102e6ac0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6ac0;
    case 0x102e6acbu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6acb;
    case 0x102e6aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6aea;
    case 0x102e6af5u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6af5;
    case 0x102e6b14u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6b14;
    case 0x102e6b1fu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6b1f;
    case 0x102e6b3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6b3e;
    case 0x102e6b49u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6b49;
    case 0x102e6b68u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6b68;
    case 0x102e6b73u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6b73;
    case 0x102e6b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6b92;
    case 0x102e6b9du: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6b9d;
    case 0x102e6ba6u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6ba6;
    case 0x102e6bacu: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6bac;
    case 0x102e6bb5u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6bb5;
    case 0x102e6bbeu: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6bbe;
    case 0x102e6bc5u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6bc5;
    case 0x102e6bc8u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6bc8;
    case 0x102e6bcdu: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6bcd;
    case 0x102e6bd4u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6bd4;
    case 0x102e6bf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6bf3;
    case 0x102e6bfeu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6bfe;
    case 0x102e6c1du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6c1d;
    case 0x102e6c28u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6c28;
    case 0x102e6c47u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6c47;
    case 0x102e6c52u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6c52;
    case 0x102e6c71u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6c71;
    case 0x102e6c7cu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6c7c;
    case 0x102e6c9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6c9b;
    case 0x102e6ca6u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6ca6;
    case 0x102e6cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6cc5;
    case 0x102e6cd0u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6cd0;
    case 0x102e6cefu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6cef;
    case 0x102e6cfau: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6cfa;
    case 0x102e6d03u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6d03;
    case 0x102e6d0au: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6d0a;
    case 0x102e6d0du: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6d0d;
    case 0x102e6d11u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6d11;
    case 0x102e6d1au: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6d1a;
    case 0x102e6d39u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6d39;
    case 0x102e6d44u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6d44;
    case 0x102e6d63u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6d63;
    case 0x102e6d6eu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6d6e;
    case 0x102e6d8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6d8d;
    case 0x102e6d98u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6d98;
    case 0x102e6db7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6db7;
    case 0x102e6dc2u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6dc2;
    case 0x102e6de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6de1;
    case 0x102e6decu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6dec;
    case 0x102e6e0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6e0b;
    case 0x102e6e16u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6e16;
    case 0x102e6e23u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6e23;
    case 0x102e6e29u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6e29;
    case 0x102e6e34u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6e34;
    case 0x102e6e3fu: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6e3f;
    case 0x102e6e46u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6e46;
    case 0x102e6e4du: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6e4d;
    case 0x102e6e58u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6e58;
    case 0x102e6e77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6e77;
    case 0x102e6e82u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6e82;
    case 0x102e6ea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6ea1;
    case 0x102e6eacu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6eac;
    case 0x102e6ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6ecb;
    case 0x102e6ed6u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6ed6;
    case 0x102e6ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6ef5;
    case 0x102e6f00u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6f00;
    case 0x102e6f1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6f1f;
    case 0x102e6f2au: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6f2a;
    case 0x102e6f49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6f49;
    case 0x102e6f54u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6f54;
    case 0x102e6f5fu: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6f5f;
    case 0x102e6f66u: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6f66;
    case 0x102e6f6bu: eax = g->eax; in_edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6f6b;
    case 0x102e6f76u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6f76;
    case 0x102e6f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6f91;
    case 0x102e6f99u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6f99;
    case 0x102e6fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6fb4;
    case 0x102e6fbcu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6fbc;
    case 0x102e6fd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6fd7;
    case 0x102e6fdfu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102e6fdf;
    case 0x102e6ffau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e6ffa;
    case 0x102e7002u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_102e7002;
    case 0x102e7004u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_102e7004;
    case 0x102e700eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_102e700e;
    case 0x102e7014u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_102e7014;
    case 0x102e701bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102e701b;
    default: break;
    }
#endif

    COW_AT(102e690b)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1032849fu));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e6915u));
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if ((int32_t)rd32(rd32(sp0 + 4u) + 4u) > 827611204)
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
        edi = rd32(sp0 + 4u);
        loc_10 = t1;
        goto L_102e6e16;
    }
    eax = rd32(rd32(sp0 + 4u) + 4u);
    edi = rd32(sp0 + 4u);
    zf = rd32(rd32(sp0 + 4u) + 4u) == 0x31545844u;
    loc_10 = t1;
    COW_AT(102e692c)
    if (zf) goto L_102e6dec;
    COW_AT(102e6932)
    if ((int32_t)eax > 40) goto L_102e6b9d;
    zf = eax == 0x28u;
    COW_AT(102e693b)
    if (zf) goto L_102e6b73;
    COW_AT(102e6941)
    if (eax - 0x14u > 0xeu)
    {
        edx = in_edx;
        esi = 0u;
        loc_4 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_102e701b;
    }
    eax = eax - 0x14u;
    COW_AT(102e694d)
    t2 = rd32(COW_IMG(0x102e702bu) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x102e6954u: goto L_102e6954;
    case 0x102e697bu: goto L_102e697b;
    case 0x102e69a5u: goto L_102e69a5;
    case 0x102e69cfu: goto L_102e69cf;
    case 0x102e69f9u: goto L_102e69f9;
    case 0x102e6a23u: goto L_102e6a23;
    case 0x102e6a4du: goto L_102e6a4d;
    case 0x102e6a77u: goto L_102e6a77;
    case 0x102e6aa1u: goto L_102e6aa1;
    case 0x102e6acbu: goto L_102e6acb;
    case 0x102e6af5u: goto L_102e6af5;
    case 0x102e6b1fu: goto L_102e6b1f;
    case 0x102e6b49u: goto L_102e6b49;
    case 0x102e701bu: edx = in_edx; esi = 0u; loc_4 = in_ebp; loc_14 = in_esi; loc_18 = in_edi; goto L_102e701b;
    default: rt_fatal(g, COW_IMG(0x102e694du), "switch");
    }
    return 0;
L_102e6954: ;
    COW_AT(102e6954)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t51 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t52 = g->edx;
    wr32(sp0 + 4u, t51);
    wr32(sp0 - 8u, 0u);
    if (t51 == 0u)
    {
        edx = t52;
        loc_8 = 0u;
        goto L_102e7002;
    }
    eax = t51;
    ecx = t51;
    edx = t52;
    COW_AT(102e6970)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t53 = cow_fastcall(g, COW_IMG(0x102e53e6u), ecx, edx, 1, edi);
    t54 = g->edx;
    eax = t53;
    edx = t54;
    loc_8 = 0u;
L_102e7004: ;
    COW_AT(102e7004)
    wr32(sp0 - 8u, 0xffffffffu);
    if (eax == 0u)
    {
        esi = eax;
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
    else
    {
        esi = eax;
    COW_AT(102e700e)
        if (rd32(esi + 0x10u) == 0u)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
        else
        {
    COW_AT(102e7014)
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, rd32(rd32(esi) + 0xcu), esi, 0);
            t151 = g->edx;
            edx = t151;
            loc_4 = rd32(sp0 - 4u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
    }
L_102e701b: ;
    COW_AT(102e701b)
    wr32(g->fs_base, loc_10);
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = loc_4;
    g->edx = edx;
    return esi;
L_102e697b: ;
    COW_AT(102e697b)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t47 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t48 = g->edx;
    wr32(sp0 + 4u, t47);
    wr32(sp0 - 8u, 1u);
    if (t47 == 0u)
    {
        edx = t48;
        loc_8 = 1u;
        goto L_102e7002;
    }
    eax = t47;
    ecx = t47;
    edx = t48;
    COW_AT(102e699a)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t49 = cow_fastcall(g, COW_IMG(0x102e551bu), ecx, edx, 1, edi);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    loc_8 = 1u;
    goto L_102e7004;
L_102e69a5: ;
    COW_AT(102e69a5)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t43 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t44 = g->edx;
    wr32(sp0 + 4u, t43);
    wr32(sp0 - 8u, 2u);
    if (t43 == 0u)
    {
        edx = t44;
        loc_8 = 2u;
        goto L_102e7002;
    }
    eax = t43;
    ecx = t43;
    edx = t44;
    COW_AT(102e69c4)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t45 = cow_fastcall(g, COW_IMG(0x102e5558u), ecx, edx, 1, edi);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    loc_8 = 2u;
    goto L_102e7004;
L_102e69cf: ;
    COW_AT(102e69cf)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t39 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t40 = g->edx;
    wr32(sp0 + 4u, t39);
    wr32(sp0 - 8u, 3u);
    if (t39 == 0u)
    {
        edx = t40;
        loc_8 = 3u;
        goto L_102e7002;
    }
    eax = t39;
    ecx = t39;
    edx = t40;
    COW_AT(102e69ee)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t41 = cow_fastcall(g, COW_IMG(0x102e5595u), ecx, edx, 1, edi);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    loc_8 = 3u;
    goto L_102e7004;
L_102e69f9: ;
    COW_AT(102e69f9)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t35 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t36 = g->edx;
    wr32(sp0 + 4u, t35);
    wr32(sp0 - 8u, 4u);
    if (t35 == 0u)
    {
        edx = t36;
        loc_8 = 4u;
        goto L_102e7002;
    }
    eax = t35;
    ecx = t35;
    edx = t36;
    COW_AT(102e6a18)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t37 = cow_fastcall(g, COW_IMG(0x102e57beu), ecx, edx, 1, edi);
    t38 = g->edx;
    eax = t37;
    edx = t38;
    loc_8 = 4u;
    goto L_102e7004;
L_102e6a23: ;
    COW_AT(102e6a23)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t32 = g->edx;
    wr32(sp0 + 4u, t31);
    wr32(sp0 - 8u, 5u);
    if (t31 == 0u)
    {
        edx = t32;
        loc_8 = 5u;
        goto L_102e7002;
    }
    eax = t31;
    ecx = t31;
    edx = t32;
    COW_AT(102e6a42)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t33 = cow_fastcall(g, COW_IMG(0x102e57fbu), ecx, edx, 1, edi);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    loc_8 = 5u;
    goto L_102e7004;
L_102e6a4d: ;
    COW_AT(102e6a4d)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t28 = g->edx;
    wr32(sp0 + 4u, t27);
    wr32(sp0 - 8u, 6u);
    if (t27 == 0u)
    {
        edx = t28;
        loc_8 = 6u;
        goto L_102e7002;
    }
    eax = t27;
    ecx = t27;
    edx = t28;
    COW_AT(102e6a6c)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t29 = cow_fastcall(g, COW_IMG(0x102e5b09u), ecx, edx, 1, edi);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    loc_8 = 6u;
    goto L_102e7004;
L_102e6a77: ;
    COW_AT(102e6a77)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t24 = g->edx;
    wr32(sp0 + 4u, t23);
    wr32(sp0 - 8u, 7u);
    if (t23 == 0u)
    {
        edx = t24;
        loc_8 = 7u;
        goto L_102e7002;
    }
    eax = t23;
    ecx = t23;
    edx = t24;
    COW_AT(102e6a96)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t25 = cow_fastcall(g, COW_IMG(0x102e5b46u), ecx, edx, 1, edi);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    loc_8 = 7u;
    goto L_102e7004;
L_102e6aa1: ;
    COW_AT(102e6aa1)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t19 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t20 = g->edx;
    wr32(sp0 + 4u, t19);
    wr32(sp0 - 8u, 8u);
    if (t19 == 0u)
    {
        edx = t20;
        loc_8 = 8u;
        goto L_102e7002;
    }
    eax = t19;
    ecx = t19;
    edx = t20;
    COW_AT(102e6ac0)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t21 = cow_fastcall(g, COW_IMG(0x102e5b83u), ecx, edx, 1, edi);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    loc_8 = 8u;
    goto L_102e7004;
L_102e6acb: ;
    COW_AT(102e6acb)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t16 = g->edx;
    wr32(sp0 + 4u, t15);
    wr32(sp0 - 8u, 9u);
    if (t15 == 0u)
    {
        edx = t16;
        loc_8 = 9u;
        goto L_102e7002;
    }
    eax = t15;
    ecx = t15;
    edx = t16;
    COW_AT(102e6aea)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t17 = cow_fastcall(g, COW_IMG(0x102e5bc0u), ecx, edx, 1, edi);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    loc_8 = 9u;
    goto L_102e7004;
L_102e6af5: ;
    COW_AT(102e6af5)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t12 = g->edx;
    wr32(sp0 + 4u, t11);
    wr32(sp0 - 8u, 0xau);
    if (t11 == 0u)
    {
        edx = t12;
        loc_8 = 0xau;
        goto L_102e7002;
    }
    eax = t11;
    ecx = t11;
    edx = t12;
    COW_AT(102e6b14)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t13 = cow_fastcall(g, COW_IMG(0x102e5bfdu), ecx, edx, 1, edi);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    loc_8 = 0xau;
    goto L_102e7004;
L_102e6b1f: ;
    COW_AT(102e6b1f)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t8 = g->edx;
    wr32(sp0 + 4u, t7);
    wr32(sp0 - 8u, 0xbu);
    if (t7 == 0u)
    {
        edx = t8;
        loc_8 = 0xbu;
        goto L_102e7002;
    }
    eax = t7;
    ecx = t7;
    edx = t8;
    COW_AT(102e6b3e)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t9 = cow_fastcall(g, COW_IMG(0x102e5cc7u), ecx, edx, 1, edi);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    loc_8 = 0xbu;
    goto L_102e7004;
L_102e6b49: ;
    COW_AT(102e6b49)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t4 = g->edx;
    wr32(sp0 + 4u, t3);
    wr32(sp0 - 8u, 0xcu);
    if (t3 == 0u)
    {
        edx = t4;
        loc_8 = 0xcu;
        goto L_102e7002;
    }
    eax = t3;
    ecx = t3;
    edx = t4;
    COW_AT(102e6b68)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t5 = cow_fastcall(g, COW_IMG(0x102e5d73u), ecx, edx, 1, edi);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    loc_8 = 0xcu;
    goto L_102e7004;
L_102e6b73: ;
    COW_AT(102e6b73)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t55 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t56 = g->edx;
    wr32(sp0 + 4u, t55);
    wr32(sp0 - 8u, 0xdu);
    if (t55 == 0u)
    {
        edx = t56;
        loc_8 = 0xdu;
        goto L_102e7002;
    }
    eax = t55;
    ecx = t55;
    edx = t56;
    COW_AT(102e6b92)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t57 = cow_fastcall(g, COW_IMG(0x102e5fa2u), ecx, edx, 1, edi);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    loc_8 = 0xdu;
    goto L_102e7004;
L_102e6b9d: ;
    COW_AT(102e6b9d)
    if ((int32_t)eax > 62) goto L_102e6cfa;
    zf = eax == 0x3eu;
    COW_AT(102e6ba6)
    if (zf) goto L_102e6cd0;
    COW_AT(102e6bac)
    if (eax == 0x29u)
    {
        eax = eax - 0x29u;
        goto L_102e6ca6;
    }
    eax = eax - 0x29u;
    COW_AT(102e6bb5)
    if (eax == 9u)
    {
        eax = eax - 9u;
        goto L_102e6c7c;
    }
    eax = eax - 9u;
    COW_AT(102e6bbe)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102e6c52;
    }
    eax = eax - 1u;
    COW_AT(102e6bc5)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102e6c28;
    }
    eax = eax - 1u;
    COW_AT(102e6bc8)
    if (eax == 8u)
    {
        eax = eax - 8u;
        goto L_102e6bfe;
    }
    eax = eax - 8u;
    COW_AT(102e6bcd)
    if (eax != 1u)
    {
        edx = in_edx;
        esi = 0u;
        loc_4 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_102e701b;
    }
    eax = eax - 1u;
    COW_AT(102e6bd4)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t59 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t60 = g->edx;
    wr32(sp0 + 4u, t59);
    wr32(sp0 - 8u, 0x13u);
    if (t59 == 0u)
    {
        edx = t60;
        loc_8 = 0x13u;
        goto L_102e7002;
    }
    eax = t59;
    ecx = t59;
    edx = t60;
    COW_AT(102e6bf3)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t61 = cow_fastcall(g, COW_IMG(0x102e622du), ecx, edx, 1, edi);
    t62 = g->edx;
    eax = t61;
    edx = t62;
    loc_8 = 0x13u;
    goto L_102e7004;
L_102e6bfe: ;
    COW_AT(102e6bfe)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t63 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t64 = g->edx;
    wr32(sp0 + 4u, t63);
    wr32(sp0 - 8u, 0x12u);
    if (t63 == 0u)
    {
        edx = t64;
        loc_8 = 0x12u;
        goto L_102e7002;
    }
    eax = t63;
    ecx = t63;
    edx = t64;
    COW_AT(102e6c1d)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t65 = cow_fastcall(g, COW_IMG(0x102e61f0u), ecx, edx, 1, edi);
    t66 = g->edx;
    eax = t65;
    edx = t66;
    loc_8 = 0x12u;
    goto L_102e7004;
L_102e6c28: ;
    COW_AT(102e6c28)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t67 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t68 = g->edx;
    wr32(sp0 + 4u, t67);
    wr32(sp0 - 8u, 0x11u);
    if (t67 == 0u)
    {
        edx = t68;
        loc_8 = 0x11u;
        goto L_102e7002;
    }
    eax = t67;
    ecx = t67;
    edx = t68;
    COW_AT(102e6c47)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t69 = cow_fastcall(g, COW_IMG(0x102e60b2u), ecx, edx, 1, edi);
    t70 = g->edx;
    eax = t69;
    edx = t70;
    loc_8 = 0x11u;
    goto L_102e7004;
L_102e6c52: ;
    COW_AT(102e6c52)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t71 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t72 = g->edx;
    wr32(sp0 + 4u, t71);
    wr32(sp0 - 8u, 0x10u);
    if (t71 == 0u)
    {
        edx = t72;
        loc_8 = 0x10u;
        goto L_102e7002;
    }
    eax = t71;
    ecx = t71;
    edx = t72;
    COW_AT(102e6c71)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t73 = cow_fastcall(g, COW_IMG(0x102e6059u), ecx, edx, 1, edi);
    t74 = g->edx;
    eax = t73;
    edx = t74;
    loc_8 = 0x10u;
    goto L_102e7004;
L_102e6c7c: ;
    COW_AT(102e6c7c)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t75 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t76 = g->edx;
    wr32(sp0 + 4u, t75);
    wr32(sp0 - 8u, 0xfu);
    if (t75 == 0u)
    {
        edx = t76;
        loc_8 = 0xfu;
        goto L_102e7002;
    }
    eax = t75;
    ecx = t75;
    edx = t76;
    COW_AT(102e6c9b)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t77 = cow_fastcall(g, COW_IMG(0x102e601cu), ecx, edx, 1, edi);
    t78 = g->edx;
    eax = t77;
    edx = t78;
    loc_8 = 0xfu;
    goto L_102e7004;
L_102e6ca6: ;
    COW_AT(102e6ca6)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t79 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t80 = g->edx;
    wr32(sp0 + 4u, t79);
    wr32(sp0 - 8u, 0xeu);
    if (t79 == 0u)
    {
        edx = t80;
        loc_8 = 0xeu;
        goto L_102e7002;
    }
    eax = t79;
    ecx = t79;
    edx = t80;
    COW_AT(102e6cc5)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t81 = cow_fastcall(g, COW_IMG(0x102e5fdfu), ecx, edx, 1, edi);
    t82 = g->edx;
    eax = t81;
    edx = t82;
    loc_8 = 0xeu;
    goto L_102e7004;
L_102e6cd0: ;
    COW_AT(102e6cd0)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t83 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t84 = g->edx;
    wr32(sp0 + 4u, t83);
    wr32(sp0 - 8u, 0x14u);
    if (t83 == 0u)
    {
        edx = t84;
        loc_8 = 0x14u;
        goto L_102e7002;
    }
    eax = t83;
    ecx = t83;
    edx = t84;
    COW_AT(102e6cef)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t85 = cow_fastcall(g, COW_IMG(0x102e626au), ecx, edx, 1, edi);
    t86 = g->edx;
    eax = t85;
    edx = t86;
    loc_8 = 0x14u;
    goto L_102e7004;
L_102e6cfa: ;
    COW_AT(102e6cfa)
    if (eax == 0x3fu)
    {
        eax = eax - 0x3fu;
        goto L_102e6dc2;
    }
    eax = eax - 0x3fu;
    COW_AT(102e6d03)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102e6d98;
    }
    eax = eax - 1u;
    COW_AT(102e6d0a)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102e6d6e;
    }
    eax = eax - 1u;
    COW_AT(102e6d0d)
    if (eax == 2u)
    {
        eax = eax - 2u;
        goto L_102e6d44;
    }
    eax = eax - 2u;
    COW_AT(102e6d11)
    if (eax != 3u)
    {
        edx = in_edx;
        esi = 0u;
        loc_4 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_102e701b;
    }
    eax = eax - 3u;
    COW_AT(102e6d1a)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t87 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t88 = g->edx;
    wr32(sp0 + 4u, t87);
    wr32(sp0 - 8u, 0x19u);
    if (t87 == 0u)
    {
        edx = t88;
        loc_8 = 0x19u;
        goto L_102e7002;
    }
    eax = t87;
    ecx = t87;
    edx = t88;
    COW_AT(102e6d39)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t89 = cow_fastcall(g, COW_IMG(0x102e639bu), ecx, edx, 1, edi);
    t90 = g->edx;
    eax = t89;
    edx = t90;
    loc_8 = 0x19u;
    goto L_102e7004;
L_102e6d44: ;
    COW_AT(102e6d44)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t91 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t92 = g->edx;
    wr32(sp0 + 4u, t91);
    wr32(sp0 - 8u, 0x18u);
    if (t91 == 0u)
    {
        edx = t92;
        loc_8 = 0x18u;
        goto L_102e7002;
    }
    eax = t91;
    ecx = t91;
    edx = t92;
    COW_AT(102e6d63)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t93 = cow_fastcall(g, COW_IMG(0x102e635eu), ecx, edx, 1, edi);
    t94 = g->edx;
    eax = t93;
    edx = t94;
    loc_8 = 0x18u;
    goto L_102e7004;
L_102e6d6e: ;
    COW_AT(102e6d6e)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t95 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t96 = g->edx;
    wr32(sp0 + 4u, t95);
    wr32(sp0 - 8u, 0x17u);
    if (t95 == 0u)
    {
        edx = t96;
        loc_8 = 0x17u;
        goto L_102e7002;
    }
    eax = t95;
    ecx = t95;
    edx = t96;
    COW_AT(102e6d8d)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t97 = cow_fastcall(g, COW_IMG(0x102e6321u), ecx, edx, 1, edi);
    t98 = g->edx;
    eax = t97;
    edx = t98;
    loc_8 = 0x17u;
    goto L_102e7004;
L_102e6d98: ;
    COW_AT(102e6d98)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t99 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t100 = g->edx;
    wr32(sp0 + 4u, t99);
    wr32(sp0 - 8u, 0x16u);
    if (t99 == 0u)
    {
        edx = t100;
        loc_8 = 0x16u;
        goto L_102e7002;
    }
    eax = t99;
    ecx = t99;
    edx = t100;
    COW_AT(102e6db7)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t101 = cow_fastcall(g, COW_IMG(0x102e62e4u), ecx, edx, 1, edi);
    t102 = g->edx;
    eax = t101;
    edx = t102;
    loc_8 = 0x16u;
    goto L_102e7004;
L_102e6dc2: ;
    COW_AT(102e6dc2)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t103 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t104 = g->edx;
    wr32(sp0 + 4u, t103);
    wr32(sp0 - 8u, 0x15u);
    if (t103 == 0u)
    {
        edx = t104;
        loc_8 = 0x15u;
        goto L_102e7002;
    }
    eax = t103;
    ecx = t103;
    edx = t104;
    COW_AT(102e6de1)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t105 = cow_fastcall(g, COW_IMG(0x102e62a7u), ecx, edx, 1, edi);
    t106 = g->edx;
    eax = t105;
    edx = t106;
    loc_8 = 0x15u;
    goto L_102e7004;
L_102e6dec: ;
    COW_AT(102e6dec)
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t107 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x31545844u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t108 = g->edx;
    wr32(sp0 + 4u, t107);
    wr32(sp0 - 8u, 0x20u);
    if (t107 == 0u)
    {
        edx = t108;
        loc_8 = 0x20u;
        goto L_102e7002;
    }
    eax = t107;
    ecx = t107;
    edx = t108;
    COW_AT(102e6e0b)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t109 = cow_fastcall(g, COW_IMG(0x102e6775u), ecx, edx, 1, edi);
    t110 = g->edx;
    eax = t109;
    edx = t110;
    loc_8 = 0x20u;
    goto L_102e7004;
L_102e6e16: ;
    COW_AT(102e6e16)
    if ((int32_t)eax > 909200416) goto L_102e6f54;
    zf = eax == 0x36314c20u;
    COW_AT(102e6e23)
    if (zf) goto L_102e6f2a;
    COW_AT(102e6e29)
    if (eax == 0x32545844u) goto L_102e6f00;
    COW_AT(102e6e34)
    if (eax == 0x32595559u) goto L_102e6ed6;
    COW_AT(102e6e3f)
    if (eax == 0x33545844u) goto L_102e6eac;
    COW_AT(102e6e46)
    if (eax == 0x34545844u) goto L_102e6e82;
    COW_AT(102e6e4d)
    if (eax != 0x35545844u)
    {
        edx = in_edx;
        esi = 0u;
        loc_4 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_102e701b;
    }
    COW_AT(102e6e58)
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t111 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t112 = g->edx;
    wr32(sp0 + 4u, t111);
    wr32(sp0 - 8u, 0x24u);
    if (t111 == 0u)
    {
        edx = t112;
        loc_8 = 0x24u;
        goto L_102e7002;
    }
    eax = t111;
    ecx = t111;
    edx = t112;
    COW_AT(102e6e77)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t113 = cow_fastcall(g, COW_IMG(0x102e6859u), ecx, edx, 1, edi);
    t114 = g->edx;
    eax = t113;
    edx = t114;
    loc_8 = 0x24u;
    goto L_102e7004;
L_102e6e82: ;
    COW_AT(102e6e82)
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t115 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t116 = g->edx;
    wr32(sp0 + 4u, t115);
    wr32(sp0 - 8u, 0x23u);
    if (t115 == 0u)
    {
        edx = t116;
        loc_8 = 0x23u;
        goto L_102e7002;
    }
    eax = t115;
    ecx = t115;
    edx = t116;
    COW_AT(102e6ea1)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t117 = cow_fastcall(g, COW_IMG(0x102e6820u), ecx, edx, 1, edi);
    t118 = g->edx;
    eax = t117;
    edx = t118;
    loc_8 = 0x23u;
    goto L_102e7004;
L_102e6eac: ;
    COW_AT(102e6eac)
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t119 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t120 = g->edx;
    wr32(sp0 + 4u, t119);
    wr32(sp0 - 8u, 0x22u);
    if (t119 == 0u)
    {
        edx = t120;
        loc_8 = 0x22u;
        goto L_102e7002;
    }
    eax = t119;
    ecx = t119;
    edx = t120;
    COW_AT(102e6ecb)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t121 = cow_fastcall(g, COW_IMG(0x102e67e7u), ecx, edx, 1, edi);
    t122 = g->edx;
    eax = t121;
    edx = t122;
    loc_8 = 0x22u;
    goto L_102e7004;
L_102e6ed6: ;
    COW_AT(102e6ed6)
    wr32(sp0 - 0x1cu, 0x109cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t123 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x109cu, in_edi, in_esi);
    t124 = g->edx;
    wr32(sp0 + 4u, t123);
    wr32(sp0 - 8u, 0x1fu);
    if (t123 == 0u)
    {
        edx = t124;
        loc_8 = 0x1fu;
        goto L_102e7002;
    }
    eax = t123;
    ecx = t123;
    edx = t124;
    COW_AT(102e6ef5)
    wr32(sp0 - 0x1cu, edi);
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t125 = cow_thiscall(g, COW_IMG(0x102e68f3u), ecx, 1, edi);
    t126 = g->edx;
    eax = t125;
    edx = t126;
    loc_8 = 0x1fu;
    goto L_102e7004;
L_102e6f00: ;
    COW_AT(102e6f00)
    wr32(sp0 - 0x1cu, 0x10c4u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t127 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x10c4u, in_edi, in_esi);
    t128 = g->edx;
    wr32(sp0 + 4u, t127);
    wr32(sp0 - 8u, 0x21u);
    if (t127 == 0u)
    {
        edx = t128;
        loc_8 = 0x21u;
        goto L_102e7002;
    }
    eax = t127;
    ecx = t127;
    edx = t128;
    COW_AT(102e6f1f)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t129 = cow_fastcall(g, COW_IMG(0x102e67aeu), ecx, edx, 1, edi);
    t130 = g->edx;
    eax = t129;
    edx = t130;
    loc_8 = 0x21u;
    goto L_102e7004;
L_102e6f2a: ;
    COW_AT(102e6f2a)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t131 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t132 = g->edx;
    wr32(sp0 + 4u, t131);
    wr32(sp0 - 8u, 0x1au);
    if (t131 == 0u)
    {
        edx = t132;
        loc_8 = 0x1au;
        goto L_102e7002;
    }
    eax = t131;
    ecx = t131;
    edx = t132;
    COW_AT(102e6f49)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t133 = cow_fastcall(g, COW_IMG(0x102e63d8u), ecx, edx, 1, edi);
    t134 = g->edx;
    eax = t133;
    edx = t134;
    loc_8 = 0x1au;
    goto L_102e7004;
L_102e6f54: ;
    COW_AT(102e6f54)
    if (eax == 0x36314c41u)
    {
        eax = eax - 0x36314c41u;
        goto L_102e6fdf;
    }
    eax = eax - 0x36314c41u;
    COW_AT(102e6f5f)
    if (eax == 0x5dfu)
    {
        eax = eax - 0x5dfu;
        goto L_102e6fbc;
    }
    eax = eax - 0x5dfu;
    COW_AT(102e6f66)
    if (eax == 0x21u)
    {
        eax = eax - 0x21u;
        goto L_102e6f99;
    }
    eax = eax - 0x21u;
    COW_AT(102e6f6b)
    if (eax != 0x23250714u)
    {
        edx = in_edx;
        esi = 0u;
        loc_4 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_102e701b;
    }
    eax = eax - 0x23250714u;
    COW_AT(102e6f76)
    wr32(sp0 - 0x1cu, 0x109cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t135 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x109cu, in_edi, in_esi);
    t136 = g->edx;
    wr32(sp0 + 4u, t135);
    wr32(sp0 - 8u, 0x1eu);
    if (t135 == 0u)
    {
        edx = t136;
        loc_8 = 0x1eu;
        goto L_102e7002;
    }
    eax = t135;
    ecx = t135;
    edx = t136;
    COW_AT(102e6f91)
    wr32(sp0 - 0x1cu, edi);
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t137 = cow_thiscall(g, COW_IMG(0x102e68dbu), ecx, 1, edi);
    t138 = g->edx;
    eax = t137;
    edx = t138;
    loc_8 = 0x1eu;
    goto L_102e7004;
L_102e6f99: ;
    COW_AT(102e6f99)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t139 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t140 = g->edx;
    wr32(sp0 + 4u, t139);
    wr32(sp0 - 8u, 0x1du);
    if (t139 == 0u)
    {
        edx = t140;
        loc_8 = 0x1du;
        goto L_102e7002;
    }
    eax = t139;
    ecx = t139;
    edx = t140;
    COW_AT(102e6fb4)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t141 = cow_fastcall(g, COW_IMG(0x102e6738u), ecx, edx, 1, edi);
    t142 = g->edx;
    eax = t141;
    edx = t142;
    loc_8 = 0x1du;
    goto L_102e7004;
L_102e6fbc: ;
    COW_AT(102e6fbc)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t143 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t144 = g->edx;
    wr32(sp0 + 4u, t143);
    wr32(sp0 - 8u, 0x1cu);
    if (t143 == 0u)
    {
        edx = t144;
        loc_8 = 0x1cu;
        goto L_102e7002;
    }
    eax = t143;
    ecx = t143;
    edx = t144;
    COW_AT(102e6fd7)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t145 = cow_fastcall(g, COW_IMG(0x102e66fbu), ecx, edx, 1, edi);
    t146 = g->edx;
    eax = t145;
    edx = t146;
    loc_8 = 0x1cu;
    goto L_102e7004;
L_102e6fdf: ;
    COW_AT(102e6fdf)
    wr32(sp0 - 0x1cu, 0x106cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t147 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x36314c20u, in_edx, 1, 3, 0x106cu, in_edi, in_esi);
    t148 = g->edx;
    wr32(sp0 + 4u, t147);
    wr32(sp0 - 8u, 0x1bu);
    if (t147 == 0u)
    {
        edx = t148;
        loc_8 = 0x1bu;
        goto L_102e7002;
    }
    eax = t147;
    ecx = t147;
    edx = t148;
    COW_AT(102e6ffa)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t149 = cow_fastcall(g, COW_IMG(0x102e66beu), ecx, edx, 1, edi);
    t150 = g->edx;
    eax = t149;
    edx = t150;
    loc_8 = 0x1bu;
    goto L_102e7004;
L_102e7002: ;
    COW_AT(102e7002)
    eax = 0u;
    goto L_102e7004;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e690b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e692cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e6932u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e693bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e6941u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e694du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e6954u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e6970u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e697bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e699au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e69a5u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e69c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102e69cfu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e69eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 3u);
        (void)sp0;
        return 1;
    }
    case 0x102e69f9u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6a18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x102e6a23u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6a42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 5u);
        (void)sp0;
        return 1;
    }
    case 0x102e6a4du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6a6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102e6a77u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6a96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 7u);
        (void)sp0;
        return 1;
    }
    case 0x102e6aa1u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6ac0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 8u);
        (void)sp0;
        return 1;
    }
    case 0x102e6acbu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6aeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 9u);
        (void)sp0;
        return 1;
    }
    case 0x102e6af5u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6b14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xau);
        (void)sp0;
        return 1;
    }
    case 0x102e6b1fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6b3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xbu);
        (void)sp0;
        return 1;
    }
    case 0x102e6b49u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6b68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102e6b73u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6b92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xdu);
        (void)sp0;
        return 1;
    }
    case 0x102e6b9du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6ba6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6bacu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6bb5u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6bbeu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6bc5u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6bc8u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6bcdu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6bd4u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6bf3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x13u);
        (void)sp0;
        return 1;
    }
    case 0x102e6bfeu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6c1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x102e6c28u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6c47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x102e6c52u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6c71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102e6c7cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6c9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xfu);
        (void)sp0;
        return 1;
    }
    case 0x102e6ca6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6cc5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xeu);
        (void)sp0;
        return 1;
    }
    case 0x102e6cd0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6cefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102e6cfau:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6d03u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6d0au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6d0du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6d11u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6d1au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6d39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x19u);
        (void)sp0;
        return 1;
    }
    case 0x102e6d44u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6d63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102e6d6eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6d8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x17u);
        (void)sp0;
        return 1;
    }
    case 0x102e6d98u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6db7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x16u);
        (void)sp0;
        return 1;
    }
    case 0x102e6dc2u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6de1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x15u);
        (void)sp0;
        return 1;
    }
    case 0x102e6decu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x31545844u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6e0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102e6e16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6e23u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6e29u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6e34u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6e3fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6e46u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6e4du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6e58u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6e77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102e6e82u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6ea1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x23u);
        (void)sp0;
        return 1;
    }
    case 0x102e6eacu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6ecbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x22u);
        (void)sp0;
        return 1;
    }
    case 0x102e6ed6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6ef5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x1fu);
        (void)sp0;
        return 1;
    }
    case 0x102e6f00u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6f1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x21u);
        (void)sp0;
        return 1;
    }
    case 0x102e6f2au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6f49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x1au);
        (void)sp0;
        return 1;
    }
    case 0x102e6f54u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6f5fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6f66u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6f6bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e6f76u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6f91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x1eu);
        (void)sp0;
        return 1;
    }
    case 0x102e6f99u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6fb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x1du);
        (void)sp0;
        return 1;
    }
    case 0x102e6fbcu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6fd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102e6fdfu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = 0x36314c20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6ffau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0x1bu);
        (void)sp0;
        return 1;
    }
    case 0x102e7002u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e7004u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e700eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e7014u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e701bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e690b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e690b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
