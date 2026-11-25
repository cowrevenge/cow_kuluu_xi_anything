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
    double d12;
    double d13;
    double d14;
    double d84;
    double d85;
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
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    int64_t q123;
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
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
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
    case 0x10041332u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_10041332;
    case 0x1004134fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1004134f;
    case 0x10041380u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10041380;
    case 0x100413b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100413b2;
    case 0x100413bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100413bb;
    case 0x100413d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100413d9;
    case 0x10041408u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041408;
    case 0x1004142bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1004142b;
    case 0x10041438u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041438;
    case 0x10041459u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041459;
    case 0x10041468u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041468;
    case 0x10041471u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041471;
    case 0x10041486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041486;
    case 0x10041490u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041490;
    case 0x10041493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041493;
    case 0x100414a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100414a7;
    case 0x100414bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100414bd;
    case 0x100414cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100414ca;
    case 0x100414ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100414ce;
    case 0x100414dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100414db;
    case 0x100414ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100414dd;
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
    case 0x1004156du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1004156d;
    case 0x10041570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041570;
    case 0x10041584u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041584;
    case 0x1004159du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004159d;
    case 0x100415b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100415b3;
    case 0x100415c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100415c0;
    case 0x100415dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100415da;
    case 0x100415dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100415df;
    case 0x100415ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100415ec;
    case 0x10041606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041606;
    case 0x1004160bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004160b;
    case 0x1004160fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004160f;
    case 0x10041628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041628;
    case 0x10041632u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041632;
    case 0x10041635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041635;
    case 0x10041649u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041649;
    case 0x10041662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041662;
    case 0x10041678u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041678;
    case 0x10041685u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041685;
    case 0x10041689u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041689;
    case 0x10041696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041696;
    case 0x10041698u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041698;
    case 0x100416b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100416b0;
    case 0x100416bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100416bd;
    case 0x100416ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100416dd;
    case 0x1004170fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1004170f;
    case 0x1004172fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1004172f;
    case 0x1004174fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1004174f;
    case 0x1004176fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1004176f;
    case 0x1004178cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004178c;
    case 0x100417a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100417a7;
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
    case 0x10041896u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041896;
    case 0x10041899u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_4 = rd32(sp0 - 4u); goto E_10041899;
    case 0x100418a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100418a8;
    case 0x100418d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100418d5;
    case 0x100418ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_100418dd;
    case 0x100418f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100418f7;
    case 0x10041911u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041911;
    case 0x1004192bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1004192b;
    case 0x1004194bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1004194b;
    case 0x1004196bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1004196b;
    case 0x10041986u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10041986;
    case 0x1004198fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1004198f;
    case 0x100419afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100419af;
    case 0x100419d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100419d6;
    case 0x100419dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100419da;
    case 0x100419f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100419f4;
    default: break;
    }
#endif

    COW_AT(100412b0)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd32(self + 0x104u);
    if (t1 == 0u)
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
    t2 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, ebx, g->edx, 1, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(100412fa)
    t4 = rd32(eax + 4u);
    if (t4 == 0u)
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
        t5 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x2cu, t5);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(rd32(t5) + 0xc8u), rd32(t5), 3, t5, 7u, 1u);
    COW_AT(10041332)
        wr32(sp0 - 0x24u, rd32(COW_IMG(0x1047bc0cu)));
        wr32(sp0 - 0x28u, 0x3cu);
        t6 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x2cu, t6);
        g->edx = rd32(t6);
        t7 = rd32(t6);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(t7 + 0xc8u), rd32(COW_IMG(0x1047bc0cu)), 3, t6, 0x3cu, rd32(COW_IMG(0x1047bc0cu)));
        t8 = g->edx;
        edx = t8;
    COW_AT(1004134f)
        t9 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t10 = rd32(COW_IMG(0x1047cf7cu));
        t11 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t10 + 0xa90u, t9);
        wr32(sp0 - 8u, t11);
        if (!(rd8(self + 0x198u) & 1u))
        {
            ecx = rd32(COW_IMG(0x1047cf7cu));
            esi = t11;
            loc_8 = t11;
    COW_AT(1004142b)
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0xbfc90fdbu);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, esi);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(ecx) + 0x58u), ecx, 4, esi, 0u, 0xbfc90fdbu, 0u);
        }
        else
        {
            eax = (t10 & 0xffffff00u) | rd8(self + 0x198u);
            ecx = rd32(COW_IMG(0x1047cf7cu));
            esi = t11;
            loc_8 = t11;
    COW_AT(10041380)
            d12 = (double)(float)-(double)rdf32(self + 0x1a4u);
            wrf32(sp0 - 0x24u, (float)d12);
            d13 = fr(g, (double)rdf32(self + 0x1a0u) + (double)rdf32(COW_IMG(0x1032addcu)));
            wrf32(sp0 - 0x28u, (float)(double)(float)-d13);
            d14 = (double)(float)-(double)rdf32(self + 0x19cu);
            wrf32(sp0 - 0x2cu, (float)d14);
            wr32(sp0 - 0x30u, esi);
            g->edx = rd32(ecx);
            t15 = rd32(ecx);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(t15 + 0x58u), ecx, 4, esi, cow_f2bits(d14), cow_f2bits((double)(float)-d13), cow_f2bits(d12));
            t16 = g->edx;
            edx = t16;
    COW_AT(100413b2)
            t17 = rd8(self + 0x198u);
            if ((t17 & 2u) != 0u)
            {
    COW_AT(100413bb)
                t18 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                t19 = rd32(COW_IMG(0x1047cf7cu));
                t20 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                wr32(t19 + 0xa90u, t18);
                g->eax = t19;
                g->esp = sp0 - 0x20u;
                t21 = cow_stdcall(g, COW_IMG(0x10015230u), 0);
                eax = t21;
                ebx = t20;
    COW_AT(100413d9)
                esi = eax;
                edi = ebx;
                ecx = 0x10u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(ebx + 0x30u, 0u);
                wr32(ebx + 0x34u, 0u);
                wr32(ebx + 0x38u, 0u);
                t22 = rd32(sp0 - 8u);
                wr32(ebx + 0x3cu, 0x3f800000u);
                wr32(sp0 - 0x24u, ebx);
                wr32(sp0 - 0x28u, t22);
                wr32(sp0 - 0x2cu, t22);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t22, t22, ebx);
    COW_AT(10041408)
                t23 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                t24 = rd32(COW_IMG(0x1047cf7cu));
                t25 = rd32(sp0 - 8u);
                wr32(t24 + 0xa90u, t23);
                wr32(t23 * 4u + t24 + 0xa10u, ebx);
                ebx = rd32(sp0 - 0xcu);
                esi = t25;
            }
        }
    COW_AT(10041438)
        wr32(sp0 - 0x24u, esi);
        t26 = (uint32_t)(int8_t)rd8(self + 0x1bdu) + 0x10u;
        wr32(sp0 - 0x28u, t26);
        t27 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x2cu, t27);
        g->eax = t27;
        g->edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
        t28 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
        g->esp = sp0 - 0x20u;
        t29 = cow_thiscall(g, rd32(t28 + 0x94u), t26, 3, t27, t26, esi);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    COW_AT(10041459)
        if (rd8(rd32(sp0 - 0x10u) + 0x34u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0x10u) + 0x34u);
    COW_AT(10041518)
            t46 = rd8(self + 0x16cu);
            if ((uint8_t)t46 == 0x64u) goto L_10041533;
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
            t47 = rd8(self + 0x1b8u);
            if ((t47 & 2u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
    COW_AT(1004160b)
                if ((eax & 4u) == 0u)
                {
    COW_AT(1004160f)
                    t64 = rd8(COW_IMG(0x1047ba18u));
                    wr8(COW_IMG(0x1047ba18u), (uint8_t)(t64 | 4u));
                    g->eax = eax;
                    g->edx = (edx & 0xffffff00u) | t64 | 4u;
                    g->esp = sp0 - 0x20u;
                    t65 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba2cu), 0);
                    t66 = g->ecx;
                    t67 = g->edx;
                    eax = t65;
                    ecx = t66;
                    edx = t67;
    COW_AT(10041628)
                    wr32(sp0 - 0x24u, COW_IMG(0x10041a10u));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t68 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a10u));
                    t69 = g->edx;
                    eax = t68;
                    edx = t69;
    COW_AT(10041632)
                }
    COW_AT(10041635)
                wr32(sp0 - 0x24u, COW_IMG(0x10352b40u));
                wr32(sp0 - 0x28u, COW_IMG(0x10352c60u));
                g->esp = sp0 - 0x20u;
                cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047ba2cu), edx, 2, COW_IMG(0x10352c60u), COW_IMG(0x10352b40u));
                t70 = g->ecx;
                ecx = t70;
    COW_AT(10041649)
                wr32(sp0 - 0x24u, esi);
                wr32(sp0 - 0x28u, 4u);
                wr32(sp0 - 0x2cu, 1u);
                t71 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t71);
                g->edx = rd32(t71);
                t72 = rd32(t71);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(t72 + 0xfcu), ecx, 4, t71, 1u, 4u, esi);
                t73 = g->edx;
                edx = t73;
    COW_AT(10041662)
                t74 = rd8(self + 0x198u);
                if ((t74 & 8u) == 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(10041689)
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 0xdu);
                    wr32(sp0 - 0x2cu, 1u);
                    wr32(sp0 - 0x30u, eax);
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 4, eax, 1u, 0xdu, 1u);
                    t76 = g->ecx;
                    ecx = t76;
    COW_AT(10041696)
                    wr32(sp0 - 0x24u, 1u);
                    loc_24 = 1u;
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(10041678)
                    wr32(sp0 - 0x24u, 3u);
                    wr32(sp0 - 0x28u, 0xdu);
                    wr32(sp0 - 0x2cu, 1u);
                    wr32(sp0 - 0x30u, eax);
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 4, eax, 1u, 0xdu, 3u);
                    t75 = g->ecx;
                    ecx = t75;
    COW_AT(10041685)
                    wr32(sp0 - 0x24u, 3u);
                    loc_24 = 3u;
                }
    COW_AT(10041698)
                wr32(sp0 - 0x28u, 0xeu);
                wr32(sp0 - 0x2cu, 1u);
                t77 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t77);
                g->edx = rd32(t77);
                t78 = rd32(t77);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(t78 + 0xfcu), ecx, 4, t77, 1u, 0xeu, loc_24);
                t79 = g->edx;
                edx = t79;
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
                    g->esp = sp0 - 0x20u;
                    t48 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba44u), 0);
                    t49 = g->ecx;
                    t50 = g->edx;
                    eax = t48;
                    ecx = t49;
                    edx = t50;
    COW_AT(10041563)
                    wr32(sp0 - 0x24u, COW_IMG(0x10041a20u));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t51 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a20u));
                    t52 = g->edx;
                    eax = t51;
                    edx = t52;
    COW_AT(1004156d)
                }
    COW_AT(10041570)
                wr32(sp0 - 0x24u, COW_IMG(0x103529c8u));
                wr32(sp0 - 0x28u, COW_IMG(0x10352b24u));
                g->esp = sp0 - 0x20u;
                cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047ba44u), edx, 2, COW_IMG(0x10352b24u), COW_IMG(0x103529c8u));
                t53 = g->edx;
                edx = t53;
    COW_AT(10041584)
                wr32(sp0 - 0x24u, esi);
                wr32(sp0 - 0x28u, 4u);
                wr32(sp0 - 0x2cu, 1u);
                t54 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t54);
                t55 = rd32(t54);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(t55 + 0xfcu), t55, 4, t54, 1u, 4u, esi);
                t56 = g->ecx;
                ecx = t56;
    COW_AT(1004159d)
                t57 = rd8(self + 0x198u);
                if ((t57 & 8u) == 0u)
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
                    t61 = g->edx;
                    edx = t61;
    COW_AT(100415ec)
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 0xeu);
                    wr32(sp0 - 0x2cu, 2u);
                    t62 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x30u, t62);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(rd32(t62) + 0xfcu), rd32(t62), 4, t62, 2u, 0xeu, 1u);
                    t63 = g->edx;
                    edx = t63;
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
                    t58 = g->edx;
                    edx = t58;
    COW_AT(100415c0)
                    wr32(sp0 - 0x24u, 3u);
                    wr32(sp0 - 0x28u, 0xeu);
                    wr32(sp0 - 0x2cu, 2u);
                    t59 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x30u, t59);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(rd32(t59) + 0xfcu), rd32(t59), 4, t59, 2u, 0xeu, 3u);
                    t60 = g->edx;
                    edx = t60;
    COW_AT(100415da)
                }
            }
    COW_AT(100416b0)
            t80 = rd8(self + 0x17bu);
            if ((t80 & 3u) == 0u)
            {
    COW_AT(100417a7)
                t99 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
                wr32(sp0 - 0x24u, t99);
                t100 = (uint32_t)(int8_t)rd8(self + 0x1bcu) + 0x10u;
                wr32(sp0 - 0x28u, t100);
                t101 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x2cu, t101);
                g->eax = t101;
                g->edx = t100;
                g->esp = sp0 - 0x20u;
                t102 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0x94u), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 3, t101, t100, t99);
                t103 = g->edx;
                eax = t102;
                edx = t103;
            }
            else
            {
    COW_AT(100416bd)
                t81 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                t82 = rd32(COW_IMG(0x1047cf7cu));
                t83 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                wr32(t82 + 0xa90u, t81);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x100746a0u), t83, 0);
                esi = t83;
    COW_AT(100416dd)
                d84 = (double)rdf32(self + 0x120u);
                wrf32(esi + 0x20u, (float)d84);
                d85 = (double)rdf32(self + 0x124u);
                wrf32(esi + 0x24u, (float)d85);
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 0xdu);
                t86 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t86);
                t87 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t87);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t87) + 0xfcu), rd32(t87), 4, t87, t86, 0xdu, 1u);
    COW_AT(1004170f)
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 0xeu);
                t88 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t88);
                t89 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t89);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t89) + 0xfcu), rd32(t89), 4, t89, t88, 0xeu, 1u);
    COW_AT(1004172f)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0xbu);
                t90 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t90);
                t91 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t91);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t91) + 0xfcu), rd32(t91), 4, t91, t90, 0xbu, 0u);
    COW_AT(1004174f)
                wr32(sp0 - 0x24u, 2u);
                wr32(sp0 - 0x28u, 0x18u);
                t92 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t92);
                t93 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t93);
                g->edx = t92;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t93) + 0xfcu), rd32(t93), 4, t93, t92, 0x18u, 2u);
                t94 = g->edx;
                edx = t94;
    COW_AT(1004176f)
                wr32(sp0 - 0x24u, esi);
                t95 = (uint32_t)(int8_t)rd8(self + 0x1bcu) + 0x10u;
                wr32(sp0 - 0x28u, t95);
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, t95, esi);
                t96 = g->edx;
                edx = t96;
    COW_AT(1004178c)
                t97 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                t98 = rd32(COW_IMG(0x1047cf7cu));
                wr32(t98 + 0xa90u, t97);
                wr32(t97 * 4u + t98 + 0xa10u, esi);
                eax = t98;
            }
    COW_AT(100417d4)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t104 = cow_thiscall(g, COW_IMG(0x1003fce0u), ebx, 0);
            t105 = g->edx;
            eax = t104;
            edx = t105;
    COW_AT(100417dd)
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t106 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, rd32(sp0 - 0xcu), g->edx, 1, 0);
            t107 = g->edx;
            edx = t107;
            ebx = eax;
            eax = t106;
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
                t108 = rd32(self + 0x148u);
                wr32(sp0 - 0x24u, t108);
                t109 = rd32(self + 0x144u);
                wr32(sp0 - 0x28u, t109);
                t110 = rd32(self + 0x140u);
                wr32(sp0 - 0x2cu, t110);
                t111 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x30u, t111);
                g->edx = t111;
                g->esp = sp0 - 0x20u;
                cow_call_regs(g, COW_IMG(0x10075700u), t109, loc_4, g->edx, 0, 4, t111, t110, t109, t108);
                t112 = g->edx;
                edx = t112;
    COW_AT(1004181f)
                wr32(sp0 - 0x24u, 0xffffffffu);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 4u);
                t113 = rd16(ebx + esi * 2u);
                wr32(sp0 - 0x30u, t113);
                wr32(sp0 - 0x34u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t114 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t113, rd32(sp0 - 0xcu), g->edx, 1, 5, edi, t113, 4u, 0u, 0xffffffffu);
                t115 = g->edx;
                eax = t114;
                edx = t115;
    COW_AT(10041836)
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(eax + 4u), 5, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), 4u, 0u, 0xffffffffu);
    COW_AT(1004183e)
                t116 = rd32(sp0 - 4u) + 0x10u;
                wr32(sp0 - 4u, t116);
                if ((int32_t)(esi + 1u) < (int32_t)rd8(rd32(sp0 - 0x10u) + 0x34u))
                {
                    edi = edi + rd16(ebx + esi * 2u) * 3u;
                    esi = esi + 1u;
                    loc_4 = t116;
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
                    t117 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba38u), 0);
                    t118 = g->ecx;
                    t119 = g->edx;
                    eax = t117;
                    ecx = t118;
                    edx = t119;
    COW_AT(1004188c)
                    wr32(sp0 - 0x24u, COW_IMG(0x10041a00u));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t120 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a00u));
                    t121 = g->edx;
                    eax = t120;
                    edx = t121;
    COW_AT(10041896)
                }
    COW_AT(10041899)
                wr32(sp0 - 0x24u, COW_IMG(0x10352c78u));
                g->esp = sp0 - 0x20u;
                cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba38u), edx, 1, COW_IMG(0x10352c78u));
    COW_AT(100418a8)
                wr32(sp0 - 0x24u, 0xffffffffu);
                wr32(sp0 - 0x28u, 0u);
                t122 = rd16(rd32(sp0 - 0x10u) + 0x36u);
                q123 = (int64_t)cow_muls(0x55555556u, edi);
                wr32(sp0 - 0x2cu, 4u);
                t124 = t122 - (cow_qhi(q123) + (cow_qhi(q123) >> 0x1fu));
                wr32(sp0 - 0x30u, t124);
                wr32(sp0 - 0x34u, edi);
                g->edx = cow_qhi(q123) + (cow_qhi(q123) >> 0x1fu);
                g->esp = sp0 - 0x20u;
                t125 = cow_call_regs(g, COW_IMG(0x1003fcf0u), cow_qhi(q123) >> 0x1fu, rd32(sp0 - 0xcu), g->edx, 1, 5, edi, t124, 4u, 0u, 0xffffffffu);
                t126 = g->edx;
                eax = t125;
                edx = t126;
    COW_AT(100418d5)
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(eax + 4u), 5, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), 4u, 0u, 0xffffffffu);
                t127 = g->edx;
                edx = t127;
            }
    COW_AT(100418dd)
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 0x1cu);
            wr32(sp0 - 0x2cu, 0u);
            t128 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t128);
            t129 = rd32(t128);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(t129 + 0xfcu), t129, 4, t128, 0u, 0x1cu, 1u);
            t130 = g->ecx;
            ecx = t130;
    COW_AT(100418f7)
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, 0u);
            t131 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t131);
            g->edx = rd32(t131);
            t132 = rd32(t131);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(t132 + 0xfcu), ecx, 4, t131, 0u, 1u, 1u);
            t133 = g->edx;
            edx = t133;
    COW_AT(10041911)
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 4u);
            wr32(sp0 - 0x2cu, 0u);
            t134 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t134);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(t134) + 0xfcu), rd32(t134), 4, t134, 0u, 4u, 1u);
    COW_AT(1004192b)
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0xbu);
            t135 = (uint32_t)(int8_t)rd8(self + 0x1bdu);
            wr32(sp0 - 0x2cu, t135);
            t136 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t136);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(t136) + 0xfcu), t135, 4, t136, t135, 0xbu, 0u);
    COW_AT(1004194b)
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0x18u);
            t137 = (uint32_t)(int8_t)rd8(self + 0x1bdu);
            wr32(sp0 - 0x2cu, t137);
            t138 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t138);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(t138) + 0xfcu), t137, 4, t138, t137, 0x18u, 0u);
            t139 = g->ecx;
            ecx = t139;
    COW_AT(1004196b)
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0x8fu);
            t140 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x2cu, t140);
            g->edx = rd32(t140);
            t141 = rd32(t140);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(t141 + 0xc8u), ecx, 3, t140, 0x8fu, 0u);
            t142 = g->edx;
            edx = t142;
    COW_AT(10041986)
            t143 = rd8(self + 0x17bu);
            if ((t143 & 3u) != 0u)
            {
    COW_AT(1004198f)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x18u);
                t144 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t144);
                t145 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t145);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t145) + 0xfcu), rd32(t145), 4, t145, t144, 0x18u, 0u);
    COW_AT(100419af)
                t146 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
                wr32(sp0 - 0x24u, t146);
                t147 = (uint32_t)(int8_t)rd8(self + 0x1bcu) + 0x10u;
                wr32(sp0 - 0x28u, t147);
                g->edx = rd32(COW_IMG(0x1047bfa8u));
                t148 = rd32(COW_IMG(0x1047bfa8u));
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(t148 + 0xdc8u), 2, t147, t146);
                t149 = g->edx;
                edx = t149;
            }
    COW_AT(100419d6)
            esi = rd32(sp0 - 8u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0x10u) + 0x34u);
            edi = rd32(sp0 - 0x10u);
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
                g->esp = sp0 - 0x20u;
                t31 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bab4u), 0);
                t32 = g->ecx;
                t33 = g->edx;
                eax = t31;
                ecx = t32;
                edx = t33;
    COW_AT(10041486)
                wr32(sp0 - 0x24u, COW_IMG(0x10041a30u));
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t34 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a30u));
                t35 = g->edx;
                eax = t34;
                edx = t35;
    COW_AT(10041490)
            }
    COW_AT(10041493)
            wr32(sp0 - 0x24u, COW_IMG(0x103528f0u));
            wr32(sp0 - 0x28u, COW_IMG(0x103529b0u));
            g->esp = sp0 - 0x20u;
            cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bab4u), edx, 2, COW_IMG(0x103529b0u), COW_IMG(0x103528f0u));
            t36 = g->ecx;
            ecx = t36;
    COW_AT(100414a7)
            t37 = rd8(self + 0x198u);
            if ((t37 & 8u) == 0u)
            {
                eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100414ce)
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 0xdu);
                wr32(sp0 - 0x2cu, 1u);
                wr32(sp0 - 0x30u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(edx + 0xfcu), ecx, 4, eax, 1u, 0xdu, 1u);
                t39 = g->edx;
                edx = t39;
    COW_AT(100414db)
                wr32(sp0 - 0x24u, 1u);
                loc_24 = 1u;
            }
            else
            {
                eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100414bd)
                wr32(sp0 - 0x24u, 3u);
                wr32(sp0 - 0x28u, 0xdu);
                wr32(sp0 - 0x2cu, 1u);
                wr32(sp0 - 0x30u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(edx + 0xfcu), ecx, 4, eax, 1u, 0xdu, 3u);
                t38 = g->edx;
                edx = t38;
    COW_AT(100414ca)
                wr32(sp0 - 0x24u, 3u);
                loc_24 = 3u;
            }
    COW_AT(100414dd)
            wr32(sp0 - 0x28u, 0xeu);
            wr32(sp0 - 0x2cu, 1u);
            t40 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x30u, t40);
            g->eax = t40;
            g->esp = sp0 - 0x20u;
            t41 = cow_thiscall(g, rd32(rd32(t40) + 0xfcu), rd32(t40), 4, t40, 1u, 0xeu, loc_24);
            eax = t41;
    COW_AT(100414f5)
            wr32(sp0 - 0x24u, 0xffffffffu);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 4u);
            t42 = rd16(edi + 0x36u);
            wr32(sp0 - 0x30u, t42);
            wr32(sp0 - 0x34u, 0u);
            g->edx = t42;
            g->esp = sp0 - 0x20u;
            t43 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, ebx, g->edx, 1, 5, 0u, t42, 4u, 0u, 0xffffffffu);
            t44 = g->edx;
            eax = t43;
            edx = t44;
    COW_AT(1004150b)
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, COW_IMG(0x10043f40u), rd32(eax + 4u), 5, 0u, rd32(sp0 - 0x30u), 4u, 0u, 0xffffffffu);
            t45 = g->edx;
            edx = t45;
    COW_AT(10041513)
        }
    COW_AT(100419da)
        t150 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t151 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t151 + 0xa90u, t150);
        wr32(t150 * 4u + t151 + 0xa10u, esi);
        eax = t151;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
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
