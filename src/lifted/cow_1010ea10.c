/* f_0x1010ea10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=14 */
uint32_t cow_fn_1010ea10(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1020;
    uint32_t loc_102c;
    uint32_t loc_103c;
    uint32_t loc_1048;
    uint32_t loc_1050;
    uint32_t loc_1058;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4224u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1010ea33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1068u); in_esi = rd32(sp0 - 0x1064u); in_ebp = rd32(sp0 - 0x1060u); in_ebx = rd32(sp0 - 0x105cu); loc_1058 = rd32(sp0 - 0x1058u); g->ebp = rd32(sp0 - 0x1060u); g->ebx = rd32(sp0 - 0x105cu); g->edi = rd32(sp0 - 0x1068u); g->esi = rd32(sp0 - 0x1064u); goto E_1010ea33;
    case 0x1010ea43u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1068u); in_esi = rd32(sp0 - 0x1064u); in_ebp = rd32(sp0 - 0x1060u); loc_1058 = rd32(sp0 - 0x1058u); g->ebp = rd32(sp0 - 0x1060u); g->edi = rd32(sp0 - 0x1068u); g->esi = rd32(sp0 - 0x1064u); goto E_1010ea43;
    case 0x1010ea54u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); goto E_1010ea54;
    case 0x1010ea63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ea63;
    case 0x1010ea6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ea6e;
    case 0x1010ea79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ea79;
    case 0x1010ea88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ea88;
    case 0x1010ea95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ea95;
    case 0x1010eaa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eaa0;
    case 0x1010eab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eab3;
    case 0x1010eac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eac2;
    case 0x1010eacfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eacf;
    case 0x1010eadfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eadf;
    case 0x1010eae8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eae8;
    case 0x1010eaeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eaea;
    case 0x1010eaf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eaf3;
    case 0x1010eafbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eafb;
    case 0x1010eb04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb04;
    case 0x1010eb06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb06;
    case 0x1010eb0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb0f;
    case 0x1010eb1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb1e;
    case 0x1010eb34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010eb34;
    case 0x1010eb38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb38;
    case 0x1010eb43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb43;
    case 0x1010eb47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb47;
    case 0x1010eb50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb50;
    case 0x1010eb66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb66;
    case 0x1010eb6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb6d;
    case 0x1010eb73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb73;
    case 0x1010eb7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb7c;
    case 0x1010eb94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb94;
    case 0x1010eb9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010eb9f;
    case 0x1010ebaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebae;
    case 0x1010ebb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebb8;
    case 0x1010ebc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebc1;
    case 0x1010ebc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebc7;
    case 0x1010ebd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebd0;
    case 0x1010ebd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebd8;
    case 0x1010ebe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebe5;
    case 0x1010ebe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebe7;
    case 0x1010ebf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebf0;
    case 0x1010ebfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ebfb;
    case 0x1010ec04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ec04;
    case 0x1010ec0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ec0a;
    case 0x1010ec13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ec13;
    case 0x1010ec25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ec25;
    case 0x1010ec32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ec32;
    case 0x1010ec34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ec34;
    case 0x1010ec3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ec3d;
    case 0x1010ec48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ec48;
    case 0x1010ecb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ecb8;
    case 0x1010ecc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ecc1;
    case 0x1010ecc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ecc6;
    case 0x1010ecceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ecce;
    case 0x1010ecd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ecd5;
    case 0x1010ecdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ecda;
    case 0x1010ed36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ed36;
    case 0x1010ed43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ed43;
    case 0x1010ed4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ed4e;
    case 0x1010edbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010edba;
    case 0x1010edc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010edc3;
    case 0x1010edc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010edc8;
    case 0x1010edd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010edd0;
    case 0x1010edd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010edd7;
    case 0x1010eddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010eddc;
    case 0x1010ee3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1058 = rd32(sp0 - 0x1058u); loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010ee3a;
    case 0x1010ee4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ee4f;
    case 0x1010ee60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ee60;
    case 0x1010eeceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010eece;
    case 0x1010eed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010eed7;
    case 0x1010eedcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010eedc;
    case 0x1010eee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010eee4;
    case 0x1010eeebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010eeeb;
    case 0x1010eef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010eef0;
    case 0x1010ef45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ef45;
    case 0x1010ef50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010ef50;
    case 0x1010efbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010efba;
    case 0x1010efc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010efc3;
    case 0x1010efc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010efc8;
    case 0x1010efd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010efd0;
    case 0x1010efd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010efd7;
    case 0x1010efdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010efdc;
    case 0x1010f037u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f037;
    case 0x1010f048u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_1050 = rd32(sp0 - 0x1050u); loc_1048 = rd32(sp0 - 0x1048u); loc_103c = rd32(sp0 - 0x103cu); loc_102c = rd32(sp0 - 0x102cu); loc_1020 = rd32(sp0 - 0x1020u); goto E_1010f048;
    case 0x1010f053u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f053;
    case 0x1010f05fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f05f;
    case 0x1010f06fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f06f;
    case 0x1010f08cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f08c;
    case 0x1010f090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f090;
    case 0x1010f0a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f0a0;
    case 0x1010f0abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f0ab;
    case 0x1010f0bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f0bb;
    case 0x1010f0c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f0c7;
    case 0x1010f0dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f0db;
    case 0x1010f0f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f0f5;
    case 0x1010f10bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f10b;
    case 0x1010f124u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010f124;
    default: break;
    }
#endif

    COW_AT(1010ea10)
    wr32(sp0 - 0x105cu, in_ebx);
    wr32(sp0 - 0x1060u, in_ebp);
    wr32(sp0 - 0x1064u, in_esi);
    wr32(sp0 - 0x1068u, in_edi);
    wr32(sp0 - 0x1040u, self);
    g->eax = 0x1058u;
    g->edx = in_edx;
    g->esp = sp0 - 0x1068u;
    t1 = cow_thiscall(g, COW_IMG(0x1010d220u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x1058u, t1);
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        loc_1058 = t1;
        goto L_1010ea43;
    }
    COW_AT(1010ea33)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 1u;
L_1010ea43: ;
    COW_AT(1010ea43)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t4 = cow_stdcall(g, COW_IMG(0x1010f8a0u), 0);
    t5 = g->edx;
    wr32(sp0 - 0x1050u, t4);
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        ebx = in_ebx;
        edi = self;
        goto L_1010f048;
    }
    edx = t5;
    loc_1050 = t4;
    COW_AT(1010ea54)
    wr32(sp0 - 0x1048u, 0u);
    t6 = rd32(esi + 0x54u);
    wr32(sp0 - 0x1020u, t6);
    eax = t6;
    ebx = in_ebx;
    edi = self;
    loc_1048 = 0u;
    loc_1020 = t6;
L_1010ea63: ;
    COW_AT(1010ea63)
    if (rd32(eax + 4u) == 0u) goto L_1010f048;
    COW_AT(1010ea6e)
    if (rd32(eax + 8u) == 0u) goto L_1010f048;
    ecx = rd32(eax + 8u);
    COW_AT(1010ea79)
    if ((uint16_t)loc_1048 != rd16(edi + 0x46u)) goto L_1010eb66;
    ecx = (ecx & 0xffff0000u) | (uint16_t)loc_1048;
    COW_AT(1010ea88)
    if (rd8(rd32(eax) + 0x18u) == 0u) goto L_1010eb50;
    eax = rd32(eax);
    COW_AT(1010ea95)
    if (rd32(eax + 0xcu) != 0u) goto L_1010eb7c;
    COW_AT(1010eaa0)
    wr32(sp0 - 0x103cu, 0u);
    t7 = rd32(loc_1050 + 0x10u);
    wr32(sp0 - 0x102cu, t7);
    edx = loc_1050;
    loc_103c = 0u;
    loc_102c = t7;
L_1010eab3: ;
    COW_AT(1010eab3)
    if (rd32(loc_102c + 4u) == 0u) goto L_1010eb50;
    ecx = loc_102c;
    COW_AT(1010eac2)
    if (rd32(ecx + 8u) == 0u)
    {
        edx = ecx;
        goto L_1010eb50;
    }
    edx = ecx;
    COW_AT(1010eacf)
    eax = rd32(loc_1020);
    ecx = rd32(loc_1020);
    ebx = rd32(edx);
    ebp = rd32(edx) - rd32(loc_1020);
    edi = 0u;
L_1010eadf: ;
    COW_AT(1010eadf)
    if (rd32(eax + ebp) > rd32(eax)) goto L_1010eaf3;
    cf = rd32(eax + ebp) < rd32(eax);
    COW_AT(1010eae8)
    if (cf) goto L_1010eb38;
    COW_AT(1010eaea)
    if ((int32_t)(edi + 1u) < 3)
    {
        eax = eax + 4u;
        edi = edi + 1u;
        goto L_1010eadf;
    }
L_1010eaf3: ;
    COW_AT(1010eaf3)
    eax = ecx;
    esi = 0u;
    edi = ebx - ecx;
L_1010eafb: ;
    COW_AT(1010eafb)
    if (rd32(eax + edi) > rd32(eax))
    {
        edx = rd32(eax);
        goto L_1010eb50;
    }
    edx = rd32(eax);
    cf = rd32(eax + edi) < rd32(eax);
    COW_AT(1010eb04)
    if (cf) goto L_1010eb0f;
    COW_AT(1010eb06)
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010eafb;
    }
    eax = eax + 4u;
L_1010eb0f: ;
    COW_AT(1010eb0f)
    if ((uint16_t)loc_103c != rd16(rd32(sp0 - 0x1040u) + 0x48u)) goto L_1010eb38;
    eax = (eax & 0xffff0000u) | (uint16_t)loc_103c;
    ebp = rd32(sp0 - 0x1040u);
    COW_AT(1010eb1e)
    wr32(sp0 - 0x106cu, ebx + 0xcu);
    wr32(sp0 - 0x1070u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t8 = cow_thiscall(g, COW_IMG(0x101116b0u), rd32(sp0 - 0x1058u), 2, ebx, ebx + 0xcu);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        edx = t9;
        goto L_1010ee4f;
    }
    COW_AT(1010eb34)
    wr16(ebp + 0x48u, (uint16_t)(rd16(ebp + 0x48u) + 1u));
    loc_1050 = rd32(sp0 - 0x1050u);
    loc_1048 = rd32(sp0 - 0x1048u);
    loc_1020 = rd32(sp0 - 0x1020u);
    loc_103c = rd32(sp0 - 0x103cu);
    loc_102c = rd32(sp0 - 0x102cu);
L_1010eb38: ;
    COW_AT(1010eb38)
    if (rd32(loc_102c + 8u) == 0u)
    {
        edx = loc_102c;
    }
    else
    {
        eax = rd32(loc_102c + 8u);
        edx = loc_102c;
    COW_AT(1010eb43)
        wr32(sp0 - 0x102cu, eax);
        loc_102c = eax;
    }
    COW_AT(1010eb47)
    wr32(sp0 - 0x103cu, loc_103c + 1u);
    loc_103c = loc_103c + 1u;
    goto L_1010eab3;
L_1010eb50: ;
    COW_AT(1010eb50)
    t116 = rd32(sp0 - 0x1040u);
    wr16(t116 + 0x46u, (uint16_t)(rd16(t116 + 0x46u) + 1u));
    wr16(t116 + 0x48u, 0u);
    eax = loc_1020;
    edi = t116;
L_1010eb66: ;
    COW_AT(1010eb66)
    if (rd32(eax + 8u) != 0u)
    {
        ecx = rd32(eax + 8u);
    COW_AT(1010eb6d)
        wr32(sp0 - 0x1020u, ecx);
        eax = ecx;
        loc_1020 = ecx;
    }
    COW_AT(1010eb73)
    wr32(sp0 - 0x1048u, loc_1048 + 1u);
    loc_1048 = loc_1048 + 1u;
    goto L_1010ea63;
L_1010eb7c: ;
    COW_AT(1010eb7c)
    t57 = rd32(loc_1050 + 0x10u);
    wr32(sp0 - 0x102cu, t57);
    t58 = rd32(loc_1020) + 0xcu;
    wr32(sp0 - 0x1050u, t58);
    eax = t57;
    ebp = rd32(loc_1020);
    loc_1050 = t58;
    loc_102c = t57;
L_1010eb94: ;
    COW_AT(1010eb94)
    if (rd32(eax + 4u) == 0u) goto L_1010ee3a;
    COW_AT(1010eb9f)
    t59 = rd32(eax + 8u);
    wr32(sp0 - 0x1058u, t59);
    if (rd32(eax + 8u) == 0u) goto L_1010ee3a;
    loc_1058 = t59;
    COW_AT(1010ebae)
    ebx = rd32(eax);
    esi = 0u;
    edi = rd32(eax) - ebp;
    eax = ebp;
L_1010ebb8: ;
    COW_AT(1010ebb8)
    if (rd32(eax + edi) > rd32(eax)) goto L_1010ebd0;
    cf = rd32(eax + edi) < rd32(eax);
    COW_AT(1010ebc1)
    if (cf) goto L_1010ed36;
    COW_AT(1010ebc7)
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010ebb8;
    }
L_1010ebd0: ;
    COW_AT(1010ebd0)
    eax = ebp;
    esi = 0u;
    edi = ebx - ebp;
L_1010ebd8: ;
    COW_AT(1010ebd8)
    if (rd32(eax + edi) > rd32(eax)) goto L_1010ee3a;
    cf = rd32(eax + edi) < rd32(eax);
    COW_AT(1010ebe5)
    if (cf) goto L_1010ebf0;
    COW_AT(1010ebe7)
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010ebd8;
    }
L_1010ebf0: ;
    COW_AT(1010ebf0)
    eax = ebx + 0xcu;
    esi = 0u;
    edi = loc_1050 - (ebx + 0xcu);
L_1010ebfb: ;
    COW_AT(1010ebfb)
    if (rd32(eax) > rd32(eax + edi)) goto L_1010ec13;
    cf = rd32(eax) < rd32(eax + edi);
    COW_AT(1010ec04)
    if (cf) goto L_1010ed36;
    COW_AT(1010ec0a)
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010ebfb;
    }
L_1010ec13: ;
    COW_AT(1010ec13)
    eax = rd32(loc_102c) + 0xcu;
    ebx = rd32(loc_102c);
    ebp = loc_102c;
    esi = 0u;
    edi = loc_1050 - (rd32(loc_102c) + 0xcu);
L_1010ec25: ;
    COW_AT(1010ec25)
    if (rd32(eax) > rd32(eax + edi)) goto L_1010ee3a;
    edx = rd32(eax + edi);
    cf = rd32(eax) < rd32(eax + edi);
    COW_AT(1010ec32)
    if (cf) goto L_1010ec3d;
    COW_AT(1010ec34)
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010ec25;
    }
L_1010ec3d: ;
    COW_AT(1010ec3d)
    if (rd32(ebx + 0x1cu) == 0u) goto L_1010ed43;
    eax = rd32(ebx + 0x1cu);
    COW_AT(1010ec48)
    g->eax = eax;
    g->edx = edx;
    t60 = rd32(ebp);
    g->esp = sp0 - 0x1068u;
    t61 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
    t62 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    t63 = cow_thiscall(g, COW_IMG(0x1010c4d0u), t60, 1, sp0 - 0x1058u);
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = sp0 - 0x1058u;
    t64 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x103cu, 1, sp0 - 0x1058u);
    t65 = g->edx;
    g->edx = t65;
    t66 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
    t67 = g->edx;
    g->edx = t67;
    t68 = rd32(ebp);
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
    t69 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->eax = sp0 - 0x1058u;
    g->edx = t69;
    t70 = cow_thiscall(g, COW_IMG(0x1010c4d0u), t68 + 0xcu, 1, sp0 - 0x1058u);
    t71 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = t71;
    t72 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1048u, 1, sp0 - 0x1058u);
    t73 = g->edx;
    g->edx = t73;
    t74 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
    t75 = g->edx;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1050u, 0);
    if (rd32(sp0 - 0x1044u) == 0u) goto L_1010ecc1;
    eax = rd32(sp0 - 0x1044u);
    COW_AT(1010ecb8)
    t76 = rd32(eax + 4u);
    if (rd32(eax + 4u) != 0u)
    {
        edx = t76;
        goto L_1010ecc6;
    }
L_1010ecc1: ;
    COW_AT(1010ecc1)
    edx = COW_IMG(0x103d3c84u);
L_1010ecc6: ;
    COW_AT(1010ecc6)
    if (rd32(sp0 - 0x1038u) == 0u) goto L_1010ecd5;
    eax = rd32(sp0 - 0x1038u);
    COW_AT(1010ecce)
    if (rd32(eax + 4u) != 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_1010ecda;
    }
L_1010ecd5: ;
    COW_AT(1010ecd5)
    ecx = COW_IMG(0x103d3c84u);
L_1010ecda: ;
    COW_AT(1010ecda)
    wr32(sp0 - 0x106cu, sp0 - 0x1050u);
    wr32(sp0 - 0x1070u, edx);
    wr32(sp0 - 0x1074u, ecx);
    t77 = rd32(rd32(ebp) + 0x18u);
    wr32(sp0 - 0x1078u, t77);
    g->esp = sp0 - 0x1068u;
    cow_thiscall_cdecl(g, rd32(rd32(ebp) + 0x1cu), ecx, 4, t77, ecx, edx, sp0 - 0x1050u);
    wr32(sp0 - 0x106cu, sp0 - 0x1050u);
    wr32(sp0 - 0x1070u, sp0 - 0x1048u);
    wr32(sp0 - 0x1074u, sp0 - 0x103cu);
    g->eax = sp0 - 0x1050u;
    g->edx = sp0 - 0x103cu;
    t78 = cow_thiscall(g, COW_IMG(0x1010d5e0u), rd32(sp0 - 0x1040u), 3, sp0 - 0x103cu, sp0 - 0x1048u, sp0 - 0x1050u);
    t79 = g->edx;
    g->edx = t79;
    t80 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1050u, 0);
    t81 = g->edx;
    g->edx = t81;
    t82 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1048u, 0);
    t83 = g->edx;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x103cu, 0);
    t84 = rd32(sp0 - 0x1060u);
    t85 = rd32(sp0 - 0x1064u);
    t86 = rd32(sp0 - 0x1068u);
    wr16(rd32(sp0 - 0x1040u) + 0x46u, (uint16_t)(rd16(rd32(sp0 - 0x1040u) + 0x46u) + 1u));
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = t85;
    g->edi = t86;
    g->ebp = t84;
    return 0u;
L_1010ed36: ;
    COW_AT(1010ed36)
    wr32(sp0 - 0x102cu, loc_1058);
    eax = loc_1058;
    loc_102c = loc_1058;
    goto L_1010eb94;
L_1010ed43: ;
    COW_AT(1010ed43)
    if (rd32(ebx + 0x20u) != 0u)
    {
        eax = rd32(ebx + 0x20u);
    COW_AT(1010ed4e)
        g->edx = edx;
        t87 = rd32(ebp);
        g->esp = sp0 - 0x1068u;
        cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
        t88 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->eax = sp0 - 0x1058u;
        g->edx = t88;
        t89 = cow_thiscall(g, COW_IMG(0x1010c4d0u), t87, 1, sp0 - 0x1058u);
        t90 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = t90;
        t91 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1048u, 1, sp0 - 0x1058u);
        t92 = g->edx;
        g->edx = t92;
        t93 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t94 = g->edx;
        t95 = rd32(ebp);
        t96 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = sp0 - 0x1058u;
        cow_thiscall(g, COW_IMG(0x1010c4d0u), t95 + 0xcu, 1, sp0 - 0x1058u);
        t97 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->eax = sp0 - 0x1058u;
        g->edx = t97;
        t98 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1050u, 1, sp0 - 0x1058u);
        t99 = g->edx;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t100 = rd32(sp0 - 0x104cu);
        wr8(sp0 - 0x1000u, 0u);
        if (t100 == 0u) goto L_1010edc3;
        eax = t100;
    COW_AT(1010edba)
        t101 = rd32(eax + 4u);
        if (rd32(eax + 4u) != 0u)
        {
            edx = t101;
            goto L_1010edc8;
        }
L_1010edc3: ;
    COW_AT(1010edc3)
        edx = COW_IMG(0x103d3c84u);
L_1010edc8: ;
    COW_AT(1010edc8)
        if (rd32(sp0 - 0x1044u) == 0u) goto L_1010edd7;
        eax = rd32(sp0 - 0x1044u);
    COW_AT(1010edd0)
        if (rd32(eax + 4u) != 0u)
        {
            ecx = rd32(eax + 4u);
            goto L_1010eddc;
        }
L_1010edd7: ;
    COW_AT(1010edd7)
        ecx = COW_IMG(0x103d3c84u);
L_1010eddc: ;
    COW_AT(1010eddc)
        wr32(sp0 - 0x106cu, 0x1000u);
        wr32(sp0 - 0x1070u, sp0 - 0x1000u);
        wr32(sp0 - 0x1074u, edx);
        wr32(sp0 - 0x1078u, ecx);
        t102 = rd32(rd32(ebp) + 0x18u);
        wr32(sp0 - 0x107cu, t102);
        g->eax = rd32(ebp);
        t103 = rd32(ebp);
        g->esp = sp0 - 0x1068u;
        t104 = cow_thiscall_cdecl(g, rd32(t103 + 0x20u), t102, 5, t102, ecx, edx, sp0 - 0x1000u, 0x1000u);
        wr8(sp0 - 1u, 0u);
        wr32(sp0 - 0x106cu, sp0 - 0x1000u);
        g->edx = sp0 - 0x1000u;
        t105 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x1058u, 1, sp0 - 0x1000u);
        t106 = g->edx;
        wr32(sp0 - 0x106cu, t105);
        wr32(sp0 - 0x1070u, sp0 - 0x1050u);
        wr32(sp0 - 0x1074u, sp0 - 0x1048u);
        g->eax = sp0 - 0x1050u;
        g->edx = t106;
        t107 = cow_thiscall(g, COW_IMG(0x1010d5e0u), rd32(sp0 - 0x1040u), 3, sp0 - 0x1048u, sp0 - 0x1050u, t105);
        t108 = g->edx;
        g->edx = t108;
        t109 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t110 = g->edx;
        g->edx = t110;
        t111 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1050u, 0);
        t112 = g->edx;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1048u, 0);
    }
L_1010ee3a: ;
    COW_AT(1010ee3a)
    t113 = rd32(sp0 - 0x1060u);
    t114 = rd32(sp0 - 0x1064u);
    t115 = rd32(sp0 - 0x1068u);
    wr16(rd32(sp0 - 0x1040u) + 0x46u, (uint16_t)(rd16(rd32(sp0 - 0x1040u) + 0x46u) + 1u));
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = t114;
    g->edi = t115;
    g->ebp = t113;
    return 0u;
L_1010ee4f: ;
    COW_AT(1010ee4f)
    if (rd32(rd32(rd32(sp0 - 0x102cu)) + 0x1cu) == 0u)
    {
        eax = rd32(rd32(sp0 - 0x102cu));
        esi = rd32(sp0 - 0x102cu);
        goto L_1010ef45;
    }
    eax = rd32(rd32(sp0 - 0x102cu));
    esi = rd32(sp0 - 0x102cu);
    COW_AT(1010ee60)
    g->eax = eax;
    g->esp = sp0 - 0x1068u;
    t10 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = sp0 - 0x1058u;
    cow_thiscall(g, COW_IMG(0x1010c4d0u), eax, 1, sp0 - 0x1058u);
    t11 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->eax = sp0 - 0x1058u;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x103cu, 1, sp0 - 0x1058u);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
    t15 = g->edx;
    g->edx = t15;
    t16 = rd32(esi);
    t17 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
    t18 = g->edx;
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    t19 = cow_thiscall(g, COW_IMG(0x1010c4d0u), t16 + 0xcu, 1, sp0 - 0x1058u);
    wr32(sp0 - 0x106cu, sp0 - 0x1058u);
    g->edx = sp0 - 0x1058u;
    t20 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1048u, 1, sp0 - 0x1058u);
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
    t23 = g->edx;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1050u, 0);
    if (rd32(sp0 - 0x1044u) == 0u) goto L_1010eed7;
    eax = rd32(sp0 - 0x1044u);
    COW_AT(1010eece)
    t24 = rd32(eax + 4u);
    if (rd32(eax + 4u) != 0u)
    {
        ecx = t24;
        goto L_1010eedc;
    }
L_1010eed7: ;
    COW_AT(1010eed7)
    ecx = COW_IMG(0x103d3c84u);
L_1010eedc: ;
    COW_AT(1010eedc)
    if (rd32(sp0 - 0x1038u) == 0u) goto L_1010eeeb;
    eax = rd32(sp0 - 0x1038u);
    COW_AT(1010eee4)
    if (rd32(eax + 4u) != 0u)
    {
        eax = rd32(eax + 4u);
        goto L_1010eef0;
    }
L_1010eeeb: ;
    COW_AT(1010eeeb)
    eax = COW_IMG(0x103d3c84u);
L_1010eef0: ;
    COW_AT(1010eef0)
    wr32(sp0 - 0x106cu, sp0 - 0x1050u);
    wr32(sp0 - 0x1070u, ecx);
    wr32(sp0 - 0x1074u, eax);
    t25 = rd32(rd32(esi) + 0x18u);
    wr32(sp0 - 0x1078u, t25);
    g->esp = sp0 - 0x1068u;
    cow_thiscall_cdecl(g, rd32(rd32(esi) + 0x1cu), ecx, 4, t25, eax, ecx, sp0 - 0x1050u);
    wr32(sp0 - 0x106cu, sp0 - 0x1050u);
    wr32(sp0 - 0x1070u, sp0 - 0x1048u);
    wr32(sp0 - 0x1074u, sp0 - 0x103cu);
    g->eax = sp0 - 0x103cu;
    g->edx = sp0 - 0x1048u;
    t26 = cow_thiscall(g, COW_IMG(0x1010d5e0u), ebp, 3, sp0 - 0x103cu, sp0 - 0x1048u, sp0 - 0x1050u);
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1050u, 0);
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1048u, 0);
    t31 = g->edx;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x103cu, 0);
    wr16(ebp + 0x48u, (uint16_t)(rd16(ebp + 0x48u) + 1u));
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 0u;
L_1010ef45: ;
    COW_AT(1010ef45)
    if (rd32(eax + 0x20u) != 0u)
    {
    COW_AT(1010ef50)
        g->eax = eax;
        g->edx = edx;
        t32 = rd32(esi);
        g->esp = sp0 - 0x1068u;
        t33 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
        t34 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        t35 = cow_thiscall(g, COW_IMG(0x1010c4d0u), t32, 1, sp0 - 0x1058u);
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = sp0 - 0x1058u;
        t36 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1048u, 1, sp0 - 0x1058u);
        t37 = g->edx;
        g->edx = t37;
        t38 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t39 = g->edx;
        g->edx = t39;
        t40 = rd32(esi);
        cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1058u, 0);
        t41 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->eax = sp0 - 0x1058u;
        g->edx = t41;
        t42 = cow_thiscall(g, COW_IMG(0x1010c4d0u), t40 + 0xcu, 1, sp0 - 0x1058u);
        t43 = g->edx;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        g->edx = t43;
        t44 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x1050u, 1, sp0 - 0x1058u);
        t45 = g->edx;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t46 = rd32(sp0 - 0x104cu);
        wr8(sp0 - 0x1000u, 0u);
        if (t46 == 0u) goto L_1010efc3;
        eax = t46;
    COW_AT(1010efba)
        t47 = rd32(eax + 4u);
        if (rd32(eax + 4u) != 0u)
        {
            edx = t47;
            goto L_1010efc8;
        }
L_1010efc3: ;
    COW_AT(1010efc3)
        edx = COW_IMG(0x103d3c84u);
L_1010efc8: ;
    COW_AT(1010efc8)
        if (rd32(sp0 - 0x1044u) == 0u) goto L_1010efd7;
        eax = rd32(sp0 - 0x1044u);
    COW_AT(1010efd0)
        if (rd32(eax + 4u) != 0u)
        {
            ecx = rd32(eax + 4u);
            goto L_1010efdc;
        }
L_1010efd7: ;
    COW_AT(1010efd7)
        ecx = COW_IMG(0x103d3c84u);
L_1010efdc: ;
    COW_AT(1010efdc)
        wr32(sp0 - 0x106cu, 0x1000u);
        wr32(sp0 - 0x1070u, sp0 - 0x1000u);
        wr32(sp0 - 0x1074u, edx);
        wr32(sp0 - 0x1078u, ecx);
        t48 = rd32(rd32(esi) + 0x18u);
        wr32(sp0 - 0x107cu, t48);
        g->edx = t48;
        g->esp = sp0 - 0x1068u;
        cow_thiscall_cdecl(g, rd32(rd32(esi) + 0x20u), ecx, 5, t48, ecx, edx, sp0 - 0x1000u, 0x1000u);
        t49 = g->edx;
        wr8(sp0 - 1u, 0u);
        wr32(sp0 - 0x106cu, sp0 - 0x1000u);
        g->eax = sp0 - 0x1000u;
        t50 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x1058u, 1, sp0 - 0x1000u);
        wr32(sp0 - 0x106cu, t50);
        wr32(sp0 - 0x1070u, sp0 - 0x1050u);
        wr32(sp0 - 0x1074u, sp0 - 0x1048u);
        g->edx = sp0 - 0x1048u;
        t51 = cow_thiscall(g, COW_IMG(0x1010d5e0u), ebp, 3, sp0 - 0x1048u, sp0 - 0x1050u, t50);
        t52 = g->edx;
        g->edx = t52;
        t53 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1058u, 0);
        t54 = g->edx;
        g->edx = t54;
        t55 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1050u, 0);
        t56 = g->edx;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1048u, 0);
    }
    COW_AT(1010f037)
    wr16(ebp + 0x48u, (uint16_t)(rd16(ebp + 0x48u) + 1u));
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 0u;
L_1010f048: ;
    COW_AT(1010f048)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t117 = cow_thiscall(g, COW_IMG(0x1010f210u), edi, 0);
    t118 = g->edx;
    if ((uint8_t)t117 != 0u)
    {
        eax = t117;
        edx = t118;
        goto L_1010f06f;
    }
    eax = t117;
    edx = t118;
    COW_AT(1010f053)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t119 = cow_thiscall(g, COW_IMG(0x1010f1c0u), edi, 0);
    t120 = g->edx;
    if ((uint16_t)t119 != 0u)
    {
        eax = t119;
        edx = t120;
        goto L_1010f06f;
    }
    COW_AT(1010f05f)
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 1u;
L_1010f06f: ;
    COW_AT(1010f06f)
    wr32(sp0 - 0x106cu, 0u);
    wr32(sp0 - 0x1070u, 1u);
    wr32(sp0 - 0x1074u, 2u);
    wr32(sp0 - 0x1078u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t121 = cow_thiscall(g, COW_IMG(0x1010f3a0u), sp0 - 0x101cu, 4, edi, 2u, 1u, 0u);
    t122 = g->edx;
    g->edx = t122;
    t123 = cow_call_regs(g, COW_IMG(0x1010f510u), t121, sp0 - 0x101cu, g->edx, 1, 0);
    t124 = g->edx;
    if ((uint8_t)t123 != 0u)
    {
        eax = t123;
        edx = t124;
        goto L_1010f10b;
    }
    eax = t123;
    edx = t124;
    COW_AT(1010f08c)
    edi = rd32(sp0 - 0x1040u);
L_1010f090: ;
    COW_AT(1010f090)
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t125 = cow_call_regs(g, COW_IMG(0x101124b0u), eax, sp0 - 0x1018u, g->edx, 1, 0);
    t126 = g->edx;
    if (rd32(t125 + 0x28u) == 0u)
    {
        eax = t125;
        edx = t126;
        goto L_1010f0f5;
    }
    eax = t125;
    edx = t126;
    esi = rd32(t125 + 0x28u);
    COW_AT(1010f0a0)
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t127 = cow_call_regs(g, COW_IMG(0x1010a780u), eax, esi, g->edx, 1, 0);
    t128 = g->edx;
    if ((uint8_t)t127 != 0u)
    {
        eax = t127;
        edx = t128;
        goto L_1010f0f5;
    }
    edx = t128;
    COW_AT(1010f0ab)
    wr32(sp0 - 0x106cu, esi + 0xcu);
    wr32(sp0 - 0x1070u, esi);
    g->eax = esi + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t129 = cow_thiscall(g, COW_IMG(0x1010d8e0u), edi, 2, esi, esi + 0xcu);
    t130 = g->edx;
    if (t129 == 0u)
    {
        eax = t129;
        edx = t130;
        goto L_1010f0f5;
    }
    eax = t129;
    edx = t130;
    COW_AT(1010f0bb)
    wr32(sp0 - 0x106cu, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t131 = cow_thiscall(g, COW_IMG(0x1010ad90u), esi, 1, eax);
    t132 = g->edx;
    if ((uint8_t)t131 == 0u)
    {
        eax = t131;
        edx = t132;
        goto L_1010f0f5;
    }
    eax = t131;
    edx = t132;
    COW_AT(1010f0c7)
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t133 = cow_call_regs(g, COW_IMG(0x101124b0u), eax, sp0 - 0x1018u, g->edx, 1, 0);
    t134 = g->edx;
    g->edx = t134;
    t135 = cow_thiscall(g, COW_IMG(0x10110b10u), t133, 0);
    t136 = g->edx;
    if (t135 == 0u)
    {
        eax = t135;
        edx = t136;
        goto L_1010f0f5;
    }
    eax = t135;
    edx = t136;
    COW_AT(1010f0db)
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t137 = cow_call_regs(g, COW_IMG(0x101124b0u), eax, sp0 - 0x1018u, g->edx, 1, 0);
    t138 = g->edx;
    wr32(sp0 - 0x106cu, 1u);
    t139 = rd32(t137 + 4u);
    wr32(sp0 - 0x1070u, t139);
    g->eax = t139;
    g->edx = t138;
    t140 = cow_thiscall(g, COW_IMG(0x1010d560u), edi, 2, t139, 1u);
    t141 = g->edx;
    if (t140 != 0u)
    {
        eax = t140;
        edx = t141;
        goto L_1010f124;
    }
    eax = t140;
    edx = t141;
L_1010f0f5: ;
    COW_AT(1010f0f5)
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1068u;
    t142 = cow_call_regs(g, COW_IMG(0x1010f540u), eax, sp0 - 0x101cu, g->edx, 1, 0);
    t143 = g->edx;
    g->edx = t143;
    t144 = cow_call_regs(g, COW_IMG(0x1010f510u), t142, sp0 - 0x101cu, g->edx, 1, 0);
    t145 = g->edx;
    if ((uint8_t)t144 == 0u)
    {
        eax = t144;
        edx = t145;
        goto L_1010f090;
    }
    eax = t144;
    edx = t145;
L_1010f10b: ;
    COW_AT(1010f10b)
    g->esp = sp0 - 0x1068u;
    cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x101cu, 0);
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 3u;
L_1010f124: ;
    COW_AT(1010f124)
    g->esp = sp0 - 0x1068u;
    cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x101cu, 0);
    g->ebx = rd32(sp0 - 0x105cu);
    g->esi = rd32(sp0 - 0x1064u);
    g->edi = rd32(sp0 - 0x1068u);
    g->ebp = rd32(sp0 - 0x1060u);
    return 2u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1010ea10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1010ea33u:
    {
        uint32_t cf;
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
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1068u);
        in_esi = rd32(sp0 - 0x1064u);
        in_ebp = rd32(sp0 - 0x1060u);
        in_ebx = rd32(sp0 - 0x105cu);
        loc_1058 = rd32(sp0 - 0x1058u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ea43u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1068u);
        in_esi = rd32(sp0 - 0x1064u);
        in_ebp = rd32(sp0 - 0x1060u);
        loc_1058 = rd32(sp0 - 0x1058u);
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x105cu, in_ebx);
        wr32(sp0 - 0x1040u, self);
        (void)sp0;
        return 1;
    }
    case 0x1010ea54u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ea63u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ea6eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ea79u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ea88u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ea95u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eaa0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eab3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eac2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eacfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eadfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eae8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eaeau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eaf3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eafbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb04u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb06u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb0fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb1eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb34u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb38u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb43u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb47u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb50u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb66u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb6du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb73u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb7cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb94u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eb9fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebaeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebb8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebc1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebc7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebd0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebd8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebe5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebe7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebf0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ebfbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ec04u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ec0au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ec13u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ec25u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ec32u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ec34u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ec3du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ec48u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ecb8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010ecc1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010ecc6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010ecceu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010ecd5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010ecdau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010ed36u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ed43u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ed4eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010edbau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010edc3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010edc8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010edd0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010edd7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010eddcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010ee3au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        uint32_t loc_1058;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1058 = rd32(sp0 - 0x1058u);
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ee4fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ee60u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010eeceu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010eed7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010eedcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010eee4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010eeebu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010eef0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010ef45u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010ef50u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010efbau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010efc3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010efc8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010efd0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010efd7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010efdcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        wr32(sp0 - 0x106cu, sp0 - 0x1058u);
        (void)sp0;
        return 1;
    }
    case 0x1010f037u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f048u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1020;
        uint32_t loc_102c;
        uint32_t loc_103c;
        uint32_t loc_1048;
        uint32_t loc_1050;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_1050 = rd32(sp0 - 0x1050u);
        loc_1048 = rd32(sp0 - 0x1048u);
        loc_103c = rd32(sp0 - 0x103cu);
        loc_102c = rd32(sp0 - 0x102cu);
        loc_1020 = rd32(sp0 - 0x1020u);
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f053u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f05fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f06fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f08cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f090u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f0a0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f0abu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f0bbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f0c7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f0dbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f0f5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f10bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    case 0x1010f124u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x1068u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1010ea10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1010ea10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
