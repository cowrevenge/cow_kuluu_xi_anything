/* f_0x100412b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100412b0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d75;
    double d76;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
    uint32_t loc_c;
    int64_t q114;
    uint32_t t1;
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
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
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
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100412c6u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412c6;
    case 0x100412d0u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412d0;
    case 0x100412dbu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412db;
    case 0x100412e5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412e5;
    case 0x100412edu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412ed;
    case 0x100412f3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412f3;
    case 0x100412fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; goto E_100412fa;
    case 0x10041303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; goto E_10041303;
    case 0x1004130du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; goto E_1004130d;
    case 0x10041315u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; goto E_10041315;
    case 0x10041319u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_10041319;
    case 0x10041332u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10041332;
    case 0x1004134fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1004134f;
    case 0x10041380u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_10041380;
    case 0x100413b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100413b2;
    case 0x100413bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100413bb;
    case 0x100413d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100413d9;
    case 0x10041408u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041408;
    case 0x1004142bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_1004142b;
    case 0x10041438u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041438;
    case 0x10041459u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041459;
    case 0x10041468u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041468;
    case 0x10041471u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041471;
    case 0x10041486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041486;
    case 0x10041490u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041490;
    case 0x10041493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041493;
    case 0x100414a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100414a7;
    case 0x100414bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100414bd;
    case 0x100414cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100414ca;
    case 0x100414ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100414ce;
    case 0x100414dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100414db;
    case 0x100414ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100414dd;
    case 0x100414f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100414f5;
    case 0x1004150bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1004150b;
    case 0x10041513u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10041513;
    case 0x10041518u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041518;
    case 0x10041521u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041521;
    case 0x10041533u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041533;
    case 0x10041538u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041538;
    case 0x1004154au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004154a;
    case 0x1004154eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004154e;
    case 0x10041563u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041563;
    case 0x1004156du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1004156d;
    case 0x10041570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041570;
    case 0x10041584u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041584;
    case 0x1004159du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004159d;
    case 0x100415b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100415b3;
    case 0x100415c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100415c0;
    case 0x100415dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100415da;
    case 0x100415dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100415df;
    case 0x100415ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100415ec;
    case 0x10041606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041606;
    case 0x1004160bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004160b;
    case 0x1004160fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004160f;
    case 0x10041628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041628;
    case 0x10041632u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041632;
    case 0x10041635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041635;
    case 0x10041649u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041649;
    case 0x10041662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041662;
    case 0x10041678u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041678;
    case 0x10041685u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041685;
    case 0x10041689u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041689;
    case 0x10041696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041696;
    case 0x10041698u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041698;
    case 0x100416b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100416b0;
    case 0x100416bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100416bd;
    case 0x100416ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100416dd;
    case 0x1004170fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004170f;
    case 0x1004172fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004172f;
    case 0x1004174fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004174f;
    case 0x1004176fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004176f;
    case 0x1004178cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004178c;
    case 0x100417a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100417a7;
    case 0x100417d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100417d4;
    case 0x100417ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_100417dd;
    case 0x100417e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_100417e8;
    case 0x100417f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100417f5;
    case 0x100417f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_100417f9;
    case 0x1004181fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004181f;
    case 0x10041836u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041836;
    case 0x1004183eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004183e;
    case 0x10041863u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_10041863;
    case 0x1004186eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1004186e;
    case 0x10041877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_10041877;
    case 0x1004188cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004188c;
    case 0x10041896u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041896;
    case 0x10041899u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_10041899;
    case 0x100418a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100418a8;
    case 0x100418d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100418d5;
    case 0x100418ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_100418dd;
    case 0x100418f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100418f7;
    case 0x10041911u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041911;
    case 0x1004192bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004192b;
    case 0x1004194bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004194b;
    case 0x1004196bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004196b;
    case 0x10041986u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041986;
    case 0x1004198fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004198f;
    case 0x100419afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100419af;
    case 0x100419d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100419d6;
    case 0x100419dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100419da;
    case 0x100419f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100419f4;
    default: break;
    }
#endif

    COW_AT(100412b0)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(self + 0x104u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        esi = in_esi;
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_edi;
        goto L_100419f4;
    }
    COW_AT(100412c6)
    if (rd8(self + 0x179u) == 0u) goto L_100412db;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x179u);
    COW_AT(100412d0)
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return cow_tailcall(g, COW_IMG(0x10040c20u), eax, self, in_edx);
L_100412db: ;
    COW_AT(100412db)
    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
    COW_AT(100412ed)
        wr32(sp0 - 0xcu, 0u);
        ebx = 0u;
        loc_c = 0u;
    }
    else
    {
        eax = rd32(self + 0x104u);
    COW_AT(100412e5)
        wr32(sp0 - 0xcu, rd32(eax));
        ebx = rd32(eax);
        loc_c = rd32(eax);
    }
    COW_AT(100412f3)
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, ebx, g->edx, 1, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100412fa)
    if (rd32(eax + 4u) == 0u)
    {
        esi = in_esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    else
    {
    COW_AT(10041303)
        if (rd32(self + 0x104u) == 0u)
        {
    COW_AT(10041315)
            wr32(sp0 - 0x10u, 0u);
            loc_10 = 0u;
        }
        else
        {
            eax = rd32(self + 0x104u);
    COW_AT(1004130d)
            wr32(sp0 - 0x10u, rd32(eax));
            loc_10 = rd32(eax);
        }
    COW_AT(10041319)
        wr32(sp0 - 0x20u, in_esi);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 7u);
        t3 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x2cu, t3);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 4, t3, 7u, 1u, in_esi);
    COW_AT(10041332)
        wr32(sp0 - 0x20u, rd32(COW_IMG(0x1047bc0cu)));
        wr32(sp0 - 0x24u, 0x3cu);
        t4 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x28u, t4);
        g->edx = rd32(t4);
        t5 = rd32(t4);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(t5 + 0xc8u), rd32(COW_IMG(0x1047bc0cu)), 3, t4, 0x3cu, rd32(COW_IMG(0x1047bc0cu)));
        t6 = g->edx;
        edx = t6;
    COW_AT(1004134f)
        t7 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t8 = rd32(COW_IMG(0x1047cf7cu));
        t9 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t8 + 0xa90u, t7);
        wr32(sp0 - 4u, t9);
        if (!(rd8(self + 0x198u) & 1u))
        {
            ecx = rd32(COW_IMG(0x1047cf7cu));
            esi = t9;
    COW_AT(1004142b)
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0xbfc90fdbu);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, esi);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(ecx) + 0x58u), ecx, 4, esi, 0u, 0xbfc90fdbu, 0u);
        }
        else
        {
            eax = (t8 & 0xffffff00u) | rd8(self + 0x198u);
            ecx = rd32(COW_IMG(0x1047cf7cu));
            esi = t9;
            loc_4 = t9;
    COW_AT(10041380)
            d10 = (double)(float)-(double)rdf32(self + 0x1a4u);
            wrf32(sp0 - 0x20u, (float)d10);
            d11 = fr(g, (double)rdf32(self + 0x1a0u) + (double)rdf32(COW_IMG(0x1032addcu)));
            wrf32(sp0 - 0x24u, (float)(double)(float)-d11);
            d12 = (double)(float)-(double)rdf32(self + 0x19cu);
            wrf32(sp0 - 0x28u, (float)d12);
            wr32(sp0 - 0x2cu, esi);
            g->edx = rd32(ecx);
            t13 = rd32(ecx);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(t13 + 0x58u), ecx, 4, esi, cow_f2bits(d12), cow_f2bits((double)(float)-d11), cow_f2bits(d10));
            t14 = g->edx;
            edx = t14;
    COW_AT(100413b2)
            if ((rd8(self + 0x198u) & 2u) != 0u)
            {
    COW_AT(100413bb)
                t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                t16 = rd32(COW_IMG(0x1047cf7cu));
                t17 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                wr32(t16 + 0xa90u, t15);
                g->eax = t16;
                g->esp = sp0 - 0x1cu;
                t18 = cow_stdcall(g, COW_IMG(0x10015230u), 0);
                eax = t18;
                ebx = t17;
    COW_AT(100413d9)
                esi = eax;
                edi = ebx;
                ecx = 0x10u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(ebx + 0x30u, 0u);
                wr32(ebx + 0x34u, 0u);
                wr32(ebx + 0x38u, 0u);
                t19 = rd32(sp0 - 4u);
                wr32(ebx + 0x3cu, 0x3f800000u);
                wr32(sp0 - 0x20u, ebx);
                wr32(sp0 - 0x24u, t19);
                wr32(sp0 - 0x28u, t19);
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t19, t19, ebx);
    COW_AT(10041408)
                t20 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                t21 = rd32(COW_IMG(0x1047cf7cu));
                t22 = rd32(sp0 - 4u);
                wr32(t21 + 0xa90u, t20);
                wr32(t20 * 4u + t21 + 0xa10u, ebx);
                ebx = rd32(sp0 - 8u);
                esi = t22;
            }
        }
    COW_AT(10041438)
        wr32(sp0 - 0x20u, esi);
        t23 = (uint32_t)(int8_t)rd8(self + 0x1bdu) + 0x10u;
        wr32(sp0 - 0x24u, t23);
        t24 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x28u, t24);
        g->eax = t24;
        g->edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
        t25 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
        g->esp = sp0 - 0x1cu;
        t26 = cow_thiscall(g, rd32(t25 + 0x94u), t23, 3, t24, t23, esi);
        t27 = g->edx;
        eax = t26;
        edx = t27;
    COW_AT(10041459)
        if (rd8(rd32(sp0 - 0xcu) + 0x34u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0xcu) + 0x34u);
    COW_AT(10041518)
            if (rd8(self + 0x16cu) == 0x64u) goto L_10041533;
    COW_AT(10041521)
            if (!(rd32(self + 0x10cu) >> 0x1cu & 1u))
            {
                eax = rd32(self + 0x10cu) >> 0x1cu;
                esi = 6u;
                goto L_10041538;
            }
            eax = rd32(self + 0x10cu) >> 0x1cu;
L_10041533: ;
    COW_AT(10041533)
            esi = 2u;
L_10041538: ;
    COW_AT(10041538)
            if ((rd8(self + 0x1b8u) & 2u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
    COW_AT(1004160b)
                if ((eax & 4u) == 0u)
                {
    COW_AT(1004160f)
                    t57 = rd8(COW_IMG(0x1047ba18u));
                    wr8(COW_IMG(0x1047ba18u), (uint8_t)(t57 | 4u));
                    g->eax = eax;
                    g->edx = (edx & 0xffffff00u) | t57 | 4u;
                    g->esp = sp0 - 0x1cu;
                    t58 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba2cu), 0);
                    t59 = g->ecx;
                    t60 = g->edx;
                    eax = t58;
                    ecx = t59;
                    edx = t60;
    COW_AT(10041628)
                    wr32(sp0 - 0x20u, COW_IMG(0x10041a10u));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t61 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a10u));
                    t62 = g->edx;
                    eax = t61;
                    edx = t62;
    COW_AT(10041632)
                }
    COW_AT(10041635)
                wr32(sp0 - 0x20u, COW_IMG(0x10352b40u));
                wr32(sp0 - 0x24u, COW_IMG(0x10352c60u));
                g->esp = sp0 - 0x1cu;
                cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047ba2cu), edx, 2, COW_IMG(0x10352c60u), COW_IMG(0x10352b40u));
                t63 = g->ecx;
                ecx = t63;
    COW_AT(10041649)
                wr32(sp0 - 0x20u, esi);
                wr32(sp0 - 0x24u, 4u);
                wr32(sp0 - 0x28u, 1u);
                t64 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x2cu, t64);
                g->edx = rd32(t64);
                t65 = rd32(t64);
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(t65 + 0xfcu), ecx, 4, t64, 1u, 4u, esi);
                t66 = g->edx;
                edx = t66;
    COW_AT(10041662)
                if ((rd8(self + 0x198u) & 8u) == 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(10041689)
                    wr32(sp0 - 0x20u, 1u);
                    wr32(sp0 - 0x24u, 0xdu);
                    wr32(sp0 - 0x28u, 1u);
                    wr32(sp0 - 0x2cu, eax);
                    g->esp = sp0 - 0x1cu;
                    cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 4, eax, 1u, 0xdu, 1u);
                    t68 = g->ecx;
                    ecx = t68;
    COW_AT(10041696)
                    wr32(sp0 - 0x20u, 1u);
                    loc_20 = 1u;
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(10041678)
                    wr32(sp0 - 0x20u, 3u);
                    wr32(sp0 - 0x24u, 0xdu);
                    wr32(sp0 - 0x28u, 1u);
                    wr32(sp0 - 0x2cu, eax);
                    g->esp = sp0 - 0x1cu;
                    cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 4, eax, 1u, 0xdu, 3u);
                    t67 = g->ecx;
                    ecx = t67;
    COW_AT(10041685)
                    wr32(sp0 - 0x20u, 3u);
                    loc_20 = 3u;
                }
    COW_AT(10041698)
                wr32(sp0 - 0x24u, 0xeu);
                wr32(sp0 - 0x28u, 1u);
                t69 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x2cu, t69);
                g->edx = rd32(t69);
                t70 = rd32(t69);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(t70 + 0xfcu), ecx, 3, t69, 1u, 0xeu);
                t71 = g->edx;
                edx = t71;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
    COW_AT(1004154a)
                if ((eax & 2u) == 0u)
                {
    COW_AT(1004154e)
                    wr8(COW_IMG(0x1047ba18u), (uint8_t)(eax | 2u));
                    g->eax = eax;
                    g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 2u);
                    g->esp = sp0 - 0x1cu;
                    t42 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba44u), 0);
                    t43 = g->ecx;
                    t44 = g->edx;
                    eax = t42;
                    ecx = t43;
                    edx = t44;
    COW_AT(10041563)
                    wr32(sp0 - 0x20u, COW_IMG(0x10041a20u));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t45 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a20u));
                    t46 = g->edx;
                    eax = t45;
                    edx = t46;
    COW_AT(1004156d)
                }
    COW_AT(10041570)
                wr32(sp0 - 0x20u, COW_IMG(0x103529c8u));
                wr32(sp0 - 0x24u, COW_IMG(0x10352b24u));
                g->esp = sp0 - 0x20u;
                cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047ba44u), edx, 1, COW_IMG(0x10352b24u));
                t47 = g->edx;
                edx = t47;
    COW_AT(10041584)
                wr32(sp0 - 0x24u, esi);
                wr32(sp0 - 0x28u, 4u);
                wr32(sp0 - 0x2cu, 1u);
                t48 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t48);
                t49 = rd32(t48);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(t49 + 0xfcu), t49, 4, t48, 1u, 4u, esi);
                t50 = g->ecx;
                ecx = t50;
    COW_AT(1004159d)
                if ((rd8(self + 0x198u) & 8u) == 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100415df)
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 0xdu);
                    wr32(sp0 - 0x2cu, 2u);
                    wr32(sp0 - 0x30u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(edx + 0xfcu), ecx, 4, eax, 2u, 0xdu, 1u);
                    t54 = g->edx;
                    edx = t54;
    COW_AT(100415ec)
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 0xeu);
                    wr32(sp0 - 0x2cu, 2u);
                    t55 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x30u, t55);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 4, t55, 2u, 0xeu, 1u);
                    t56 = g->edx;
                    edx = t56;
    COW_AT(10041606)
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100415b3)
                    wr32(sp0 - 0x24u, 3u);
                    wr32(sp0 - 0x28u, 0xdu);
                    wr32(sp0 - 0x2cu, 2u);
                    wr32(sp0 - 0x30u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(edx + 0xfcu), ecx, 4, eax, 2u, 0xdu, 3u);
                    t51 = g->edx;
                    edx = t51;
    COW_AT(100415c0)
                    wr32(sp0 - 0x24u, 3u);
                    wr32(sp0 - 0x28u, 0xeu);
                    wr32(sp0 - 0x2cu, 2u);
                    t52 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x30u, t52);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(rd32(t52) + 0xfcu), rd32(t52), 4, t52, 2u, 0xeu, 3u);
                    t53 = g->edx;
                    edx = t53;
    COW_AT(100415da)
                }
            }
    COW_AT(100416b0)
            if ((rd8(self + 0x17bu) & 3u) == 0u)
            {
    COW_AT(100417a7)
                t90 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
                wr32(sp0 - 0x24u, t90);
                t91 = (uint32_t)(int8_t)rd8(self + 0x1bcu) + 0x10u;
                wr32(sp0 - 0x28u, t91);
                t92 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x2cu, t92);
                g->eax = t92;
                g->edx = t91;
                g->esp = sp0 - 0x20u;
                t93 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0x94u), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 3, t92, t91, t90);
                t94 = g->edx;
                eax = t93;
                edx = t94;
            }
            else
            {
    COW_AT(100416bd)
                t72 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                t73 = rd32(COW_IMG(0x1047cf7cu));
                t74 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                wr32(t73 + 0xa90u, t72);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x100746a0u), t74, 0);
                esi = t74;
    COW_AT(100416dd)
                d75 = (double)rdf32(self + 0x120u);
                wrf32(esi + 0x20u, (float)d75);
                d76 = (double)rdf32(self + 0x124u);
                wrf32(esi + 0x24u, (float)d76);
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 0xdu);
                t77 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t77);
                t78 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t78);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t78) + 0xfcu), rd32(t78), 4, t78, t77, 0xdu, 1u);
    COW_AT(1004170f)
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 0xeu);
                t79 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t79);
                t80 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t80);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t80) + 0xfcu), rd32(t80), 4, t80, t79, 0xeu, 1u);
    COW_AT(1004172f)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0xbu);
                t81 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t81);
                t82 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t82);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t82) + 0xfcu), rd32(t82), 4, t82, t81, 0xbu, 0u);
    COW_AT(1004174f)
                wr32(sp0 - 0x24u, 2u);
                wr32(sp0 - 0x28u, 0x18u);
                t83 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t83);
                t84 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t84);
                g->edx = t83;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t84) + 0xfcu), rd32(t84), 4, t84, t83, 0x18u, 2u);
                t85 = g->edx;
                edx = t85;
    COW_AT(1004176f)
                wr32(sp0 - 0x24u, esi);
                t86 = (uint32_t)(int8_t)rd8(self + 0x1bcu) + 0x10u;
                wr32(sp0 - 0x28u, t86);
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, t86, esi);
                t87 = g->edx;
                edx = t87;
    COW_AT(1004178c)
                t88 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                t89 = rd32(COW_IMG(0x1047cf7cu));
                wr32(t89 + 0xa90u, t88);
                wr32(t88 * 4u + t89 + 0xa10u, esi);
                eax = t89;
            }
    COW_AT(100417d4)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t95 = cow_thiscall(g, COW_IMG(0x1003fce0u), ebx, 0);
            t96 = g->edx;
            eax = t95;
            edx = t96;
    COW_AT(100417dd)
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t97 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, rd32(sp0 - 0xcu), g->edx, 1, 0);
            t98 = g->edx;
            edx = t98;
            ebx = eax;
            eax = t97;
    COW_AT(100417e8)
            if (rd8(rd32(sp0 - 0x10u) + 0x34u) == 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(rd32(sp0 - 0x10u) + 0x34u);
                edi = 0u;
            }
            else
            {
    COW_AT(100417f5)
                wr32(sp0 - 4u, eax);
                esi = 0u;
                edi = 0u;
                loc_4 = eax;
L_100417f9: ;
    COW_AT(100417f9)
                t99 = rd32(self + 0x148u);
                wr32(sp0 - 0x24u, t99);
                t100 = rd32(self + 0x144u);
                wr32(sp0 - 0x28u, t100);
                t101 = rd32(self + 0x140u);
                wr32(sp0 - 0x2cu, t101);
                t102 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x30u, t102);
                g->edx = t102;
                g->esp = sp0 - 0x20u;
                cow_call_regs(g, COW_IMG(0x10075700u), t100, loc_4, g->edx, 0, 4, t102, t101, t100, t99);
                t103 = g->edx;
                edx = t103;
    COW_AT(1004181f)
                wr32(sp0 - 0x24u, 0xffffffffu);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 4u);
                t104 = rd16(ebx + esi * 2u);
                wr32(sp0 - 0x30u, t104);
                wr32(sp0 - 0x34u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t105 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t104, rd32(sp0 - 0xcu), g->edx, 1, 5, edi, t104, 4u, 0u, 0xffffffffu);
                t106 = g->edx;
                eax = t105;
                edx = t106;
    COW_AT(10041836)
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(eax + 4u), 5, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), 4u, 0u, 0xffffffffu);
    COW_AT(1004183e)
                t107 = rd32(sp0 - 4u) + 0x10u;
                wr32(sp0 - 4u, t107);
                if ((int32_t)(esi + 1u) < (int32_t)rd8(rd32(sp0 - 0x10u) + 0x34u))
                {
                    edi = edi + rd16(ebx + esi * 2u) * 3u;
                    esi = esi + 1u;
                    loc_4 = t107;
                    goto L_100417f9;
                }
                eax = rd32(sp0 - 0x10u);
                edx = rd8(rd32(sp0 - 0x10u) + 0x34u);
                edi = edi + rd16(ebx + esi * 2u) * 3u;
            }
    COW_AT(10041863)
            if (rd8(rd32(sp0 - 0x10u) + 0x35u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0x10u) + 0x35u);
    COW_AT(1004186e)
                if ((rd8(COW_IMG(0x1047ba18u)) & 8u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
    COW_AT(10041877)
                    wr8(COW_IMG(0x1047ba18u), (uint8_t)(eax | 8u));
                    g->eax = eax;
                    g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 8u);
                    g->esp = sp0 - 0x20u;
                    t108 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba38u), 0);
                    t109 = g->ecx;
                    t110 = g->edx;
                    eax = t108;
                    ecx = t109;
                    edx = t110;
    COW_AT(1004188c)
                    wr32(sp0 - 0x24u, COW_IMG(0x10041a00u));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t111 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a00u));
                    t112 = g->edx;
                    eax = t111;
                    edx = t112;
    COW_AT(10041896)
                }
    COW_AT(10041899)
                wr32(sp0 - 0x24u, COW_IMG(0x10352c78u));
                g->esp = sp0 - 0x20u;
                cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba38u), edx, 1, COW_IMG(0x10352c78u));
    COW_AT(100418a8)
                wr32(sp0 - 0x24u, 0xffffffffu);
                wr32(sp0 - 0x28u, 0u);
                t113 = rd16(rd32(sp0 - 0x10u) + 0x36u);
                q114 = (int64_t)cow_muls(0x55555556u, edi);
                wr32(sp0 - 0x2cu, 4u);
                t115 = t113 - (cow_qhi(q114) + (cow_qhi(q114) >> 0x1fu));
                wr32(sp0 - 0x30u, t115);
                wr32(sp0 - 0x34u, edi);
                g->edx = cow_qhi(q114) + (cow_qhi(q114) >> 0x1fu);
                g->esp = sp0 - 0x20u;
                t116 = cow_call_regs(g, COW_IMG(0x1003fcf0u), cow_qhi(q114) >> 0x1fu, rd32(sp0 - 0xcu), g->edx, 1, 5, edi, t115, 4u, 0u, 0xffffffffu);
                t117 = g->edx;
                eax = t116;
                edx = t117;
    COW_AT(100418d5)
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(eax + 4u), 5, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), 4u, 0u, 0xffffffffu);
                t118 = g->edx;
                edx = t118;
            }
    COW_AT(100418dd)
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 0x1cu);
            wr32(sp0 - 0x2cu, 0u);
            t119 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t119);
            t120 = rd32(t119);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(t120 + 0xfcu), t120, 4, t119, 0u, 0x1cu, 1u);
            t121 = g->ecx;
            ecx = t121;
    COW_AT(100418f7)
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, 0u);
            t122 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t122);
            g->edx = rd32(t122);
            t123 = rd32(t122);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(t123 + 0xfcu), ecx, 4, t122, 0u, 1u, 1u);
            t124 = g->edx;
            edx = t124;
    COW_AT(10041911)
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 4u);
            wr32(sp0 - 0x2cu, 0u);
            t125 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t125);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(t125) + 0xfcu), rd32(t125), 4, t125, 0u, 4u, 1u);
    COW_AT(1004192b)
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0xbu);
            t126 = (uint32_t)(int8_t)rd8(self + 0x1bdu);
            wr32(sp0 - 0x2cu, t126);
            t127 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t127);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(t127) + 0xfcu), t126, 4, t127, t126, 0xbu, 0u);
    COW_AT(1004194b)
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0x18u);
            t128 = (uint32_t)(int8_t)rd8(self + 0x1bdu);
            wr32(sp0 - 0x2cu, t128);
            t129 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t129);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(t129) + 0xfcu), t128, 4, t129, t128, 0x18u, 0u);
            t130 = g->ecx;
            ecx = t130;
    COW_AT(1004196b)
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0x8fu);
            t131 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x2cu, t131);
            g->edx = rd32(t131);
            t132 = rd32(t131);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(t132 + 0xc8u), ecx, 3, t131, 0x8fu, 0u);
            t133 = g->edx;
            edx = t133;
    COW_AT(10041986)
            if ((rd8(self + 0x17bu) & 3u) != 0u)
            {
    COW_AT(1004198f)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x18u);
                t134 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t134);
                t135 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t135);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t135) + 0xfcu), rd32(t135), 4, t135, t134, 0x18u, 0u);
    COW_AT(100419af)
                t136 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
                wr32(sp0 - 0x24u, t136);
                t137 = (uint32_t)(int8_t)rd8(self + 0x1bcu) + 0x10u;
                wr32(sp0 - 0x28u, t137);
                g->edx = rd32(COW_IMG(0x1047bfa8u));
                t138 = rd32(COW_IMG(0x1047bfa8u));
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(t138 + 0xdc8u), 2, t137, t136);
                t139 = g->edx;
                edx = t139;
            }
    COW_AT(100419d6)
            esi = rd32(sp0 - 8u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0xcu) + 0x34u);
            edi = rd32(sp0 - 0xcu);
    COW_AT(10041468)
            if (rd8(COW_IMG(0x1047ba18u)) & 1u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
    COW_AT(10041471)
                wr8(COW_IMG(0x1047ba18u), (uint8_t)(eax | 1u));
                g->eax = eax;
                g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
                g->esp = sp0 - 0x1cu;
                t28 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bab4u), 0);
                t29 = g->ecx;
                t30 = g->edx;
                eax = t28;
                ecx = t29;
                edx = t30;
    COW_AT(10041486)
                wr32(sp0 - 0x20u, COW_IMG(0x10041a30u));
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t31 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a30u));
                t32 = g->edx;
                eax = t31;
                edx = t32;
    COW_AT(10041490)
            }
    COW_AT(10041493)
            wr32(sp0 - 0x20u, COW_IMG(0x103528f0u));
            wr32(sp0 - 0x24u, COW_IMG(0x103529b0u));
            g->esp = sp0 - 0x1cu;
            cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bab4u), edx, 2, COW_IMG(0x103529b0u), COW_IMG(0x103528f0u));
            t33 = g->ecx;
            ecx = t33;
    COW_AT(100414a7)
            if ((rd8(self + 0x198u) & 8u) == 0u)
            {
                eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100414ce)
                wr32(sp0 - 0x20u, 1u);
                wr32(sp0 - 0x24u, 0xdu);
                wr32(sp0 - 0x28u, 1u);
                wr32(sp0 - 0x2cu, eax);
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(edx + 0xfcu), ecx, 4, eax, 1u, 0xdu, 1u);
                t35 = g->edx;
                edx = t35;
    COW_AT(100414db)
                wr32(sp0 - 0x20u, 1u);
                loc_20 = 1u;
            }
            else
            {
                eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100414bd)
                wr32(sp0 - 0x20u, 3u);
                wr32(sp0 - 0x24u, 0xdu);
                wr32(sp0 - 0x28u, 1u);
                wr32(sp0 - 0x2cu, eax);
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(edx + 0xfcu), ecx, 4, eax, 1u, 0xdu, 3u);
                t34 = g->edx;
                edx = t34;
    COW_AT(100414ca)
                wr32(sp0 - 0x20u, 3u);
                loc_20 = 3u;
            }
    COW_AT(100414dd)
            wr32(sp0 - 0x24u, 0xeu);
            wr32(sp0 - 0x28u, 1u);
            t36 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x2cu, t36);
            g->eax = t36;
            g->esp = sp0 - 0x20u;
            t37 = cow_thiscall(g, rd32(rd32(t36) + 0xfcu), rd32(t36), 3, t36, 1u, 0xeu);
            eax = t37;
    COW_AT(100414f5)
            wr32(sp0 - 0x24u, 0xffffffffu);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 4u);
            t38 = rd16(edi + 0x36u);
            wr32(sp0 - 0x30u, t38);
            wr32(sp0 - 0x34u, 0u);
            g->edx = t38;
            g->esp = sp0 - 0x20u;
            t39 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, ebx, g->edx, 1, 5, 0u, t38, 4u, 0u, 0xffffffffu);
            t40 = g->edx;
            eax = t39;
            edx = t40;
    COW_AT(1004150b)
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, COW_IMG(0x10043f40u), rd32(eax + 4u), 5, 0u, rd32(sp0 - 0x30u), 4u, 0u, 0xffffffffu);
            t41 = g->edx;
            edx = t41;
    COW_AT(10041513)
        }
    COW_AT(100419da)
        t140 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t141 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t141 + 0xa90u, t140);
        wr32(t140 * 4u + t141 + 0xa10u, esi);
        eax = t141;
        esi = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
L_100419f4: ;
    COW_AT(100419f4)
    g->ebx = loc_14;
    g->esi = esi;
    g->edi = loc_1c;
    g->ebp = loc_18;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100412b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100412c6u:
    {
        uint32_t ebx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100412d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100412dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100412e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100412edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100412f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100412fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041303u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004130du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041315u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041319u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041332u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004134fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041380u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100413b2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100413bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100413d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041408u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1004142bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041438u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041459u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041468u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041471u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041486u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041490u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041493u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100414a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100414bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100414cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100414ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100414dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100414ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100414f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004150bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, 4u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x24u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x10041513u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041518u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041521u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041533u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041538u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1004154au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1004154eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041563u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1004156du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041570u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041584u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, COW_IMG(0x103529c8u));
        (void)sp0;
        return 1;
    }
    case 0x1004159du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100415b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100415c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100415dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100415dfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100415ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041606u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004160bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1004160fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041628u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041632u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041635u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041649u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041662u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041678u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041685u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041689u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041696u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10041698u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100416b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100416bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100416ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004170fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004172fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004174fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004176fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004178cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100417a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100417d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100417ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100417e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100417f5u:
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
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100417f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004181fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041836u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x2cu, 4u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x24u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x1004183eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041863u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004186eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041877u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004188cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041896u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10041899u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100418a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100418d5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x2cu, 4u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x24u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x100418ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100418f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041911u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004192bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004194bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004196bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10041986u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1004198fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100419afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100419d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100419dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100419f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100412b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100412b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
