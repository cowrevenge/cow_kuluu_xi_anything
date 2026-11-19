/* f_0x10045190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10045190(Guest* g)
{
    double d107;
    double d108;
    double d109;
    double d114;
    double d23;
    double d24;
    double d25;
    double d26;
    double d29;
    double d43;
    double d44;
    double d45;
    double d60;
    double d63;
    double d65;
    double d75;
    double d78;
    double d80;
    double d91;
    double d92;
    double d93;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_18_f;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_58;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
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
    uint32_t t27;
    uint32_t t28;
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
    uint32_t t61;
    uint32_t t62;
    uint32_t t64;
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
    uint32_t t76;
    uint32_t t77;
    uint32_t t79;
    uint32_t t8;
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
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100451a7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_100451a7;
    case 0x100451afu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_100451af;
    case 0x100451f9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_100451f9;
    case 0x10045202u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045202;
    case 0x1004520bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_1004520b;
    case 0x10045212u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045212;
    case 0x10045216u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045216;
    case 0x1004521du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004521d;
    case 0x1004522eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004522e;
    case 0x10045237u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045237;
    case 0x1004523eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004523e;
    case 0x10045243u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045243;
    case 0x10045271u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045271;
    case 0x100452b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18_f = rdf32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_100452b2;
    case 0x100452d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100452d0;
    case 0x100452d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18_f = rdf32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_100452d2;
    case 0x100452d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18_f = rdf32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100452d8;
    case 0x100452f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100452f4;
    case 0x10045302u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045302;
    case 0x10045307u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045307;
    case 0x10045311u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045311;
    case 0x10045315u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045315;
    case 0x10045317u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045317;
    case 0x1004532eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_1004532e;
    case 0x10045337u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045337;
    case 0x1004533eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1004533e;
    case 0x10045342u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045342;
    case 0x10045349u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045349;
    case 0x1004535cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1004535c;
    case 0x10045363u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10045363;
    case 0x10045382u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045382;
    case 0x10045394u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045394;
    case 0x100453a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100453a6;
    case 0x100453b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100453b6;
    case 0x100453beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100453be;
    case 0x100453ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100453dd;
    case 0x100453eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100453ee;
    case 0x10045400u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045400;
    case 0x1004541fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004541f;
    case 0x1004542eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004542e;
    case 0x1004544du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_1004544d;
    case 0x1004545eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004545e;
    case 0x10045470u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045470;
    case 0x1004548fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004548f;
    case 0x1004549eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004549e;
    case 0x100454a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100454a0;
    case 0x100454d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100454d0;
    case 0x10045512u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045512;
    case 0x1004552bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004552b;
    case 0x10045534u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045534;
    case 0x1004556au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004556a;
    case 0x10045570u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045570;
    case 0x10045589u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045589;
    case 0x1004558du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1004558d;
    case 0x10045594u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045594;
    case 0x100455a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100455a1;
    case 0x100455bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100455bb;
    case 0x100455d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100455d2;
    case 0x100455e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100455e6;
    case 0x100455f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100455f7;
    case 0x100455fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_100455fc;
    case 0x10045609u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045609;
    case 0x1004562bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_1004562b;
    case 0x1004562fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_1004562f;
    case 0x10045631u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045631;
    case 0x10045648u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045648;
    case 0x1004564du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_1004564d;
    case 0x10045652u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045652;
    case 0x10045657u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_10045657;
    case 0x1004565eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004565e;
    case 0x10045662u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045662;
    case 0x10045669u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045669;
    case 0x1004568cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004568c;
    case 0x10045693u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045693;
    case 0x100456adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100456ad;
    case 0x100456b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100456b3;
    case 0x100456beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x48u); goto E_100456be;
    case 0x100456d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_100456d0;
    case 0x100456e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_100456e0;
    case 0x1004571eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004571e;
    case 0x10045740u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10045740;
    case 0x10045762u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045762;
    case 0x10045770u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045770;
    case 0x10045772u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10045772;
    case 0x10045776u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045776;
    case 0x10045792u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10045792;
    case 0x100457a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100457a0;
    case 0x100457b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100457b1;
    case 0x100457b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_100457b8;
    case 0x100457eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_100457ee;
    default: break;
    }
#endif

    COW_AT(10045190)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    if (rd32(self + 0xfcu) == 0u)
    {
        ebp = in_ebp;
        edi = in_edi;
        loc_44 = in_ebx;
        loc_48 = in_esi;
    }
    else
    {
        eax = rd32(self + 0xfcu);
    COW_AT(100451a7)
        if (rd32(eax) == 0u)
        {
            ebp = in_ebp;
            edi = in_edi;
            loc_44 = in_ebx;
            loc_48 = in_esi;
        }
        else
        {
    COW_AT(100451af)
            wr32(sp0 - 0x4cu, in_ebp);
            wr32(sp0 - 0x50u, in_edi);
            t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
            t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
            wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t1);
            t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
            t4 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
            wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t3);
            wr32(sp0 - 0x40u, t4);
            if ((int32_t)(rd32(self + 0x10cu) >> 6u & 7u) <= 0)
            {
                ebp = t2;
                edi = t4;
                loc_44 = in_ebx;
                loc_48 = in_esi;
                loc_4c = in_ebp;
                loc_50 = in_edi;
            }
            else
            {
                eax = rd32(self + 0x10cu) >> 6u & 7u;
                ecx = t3;
                ebp = t2;
                edi = t4;
                loc_40 = t4;
    COW_AT(100451f9)
                if ((int32_t)eax <= 2) goto L_10045307;
    COW_AT(10045202)
                if (eax != 3u)
                {
                    loc_44 = in_ebx;
                    loc_48 = in_esi;
                    loc_4c = in_ebp;
                    loc_50 = in_edi;
                    goto L_100457b8;
                }
    COW_AT(1004520b)
                g->eax = eax;
                g->edx = in_edx;
                g->esp = sp0 - 0x50u;
                t5 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
                t6 = g->edx;
                eax = t5;
                edx = t6;
    COW_AT(10045212)
                if (eax == 0u)
                {
    COW_AT(10045237)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x50u;
                    t12 = cow_thiscall(g, COW_IMG(0x100746a0u), ebp, 0);
                    t13 = g->ecx;
                    t14 = g->edx;
                    eax = t12;
                    ecx = t13;
                    edx = t14;
                }
                else
                {
    COW_AT(10045216)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x50u;
                    t7 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
                    t8 = g->edx;
                    eax = t7;
                    edx = t8;
    COW_AT(1004521d)
                    wr32(sp0 - 0x54u, ebp);
                    esi = eax;
                    edi = ebp;
                    ecx = 0x10u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t9 = cow_bridge_indirect(g, COW_IMG(0x10045800u), 0u, 17u, (const uint32_t[]){ebp, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u)}, g->ecx, g->edx, eax, 68u);
                    t10 = g->ecx;
                    t11 = g->edx;
                    eax = t9;
                    ecx = t10;
                    edx = t11;
    COW_AT(1004522e)
                    edi = rd32(sp0 - 0x40u);
                }
    COW_AT(1004523e)
                g->eax = eax;
                g->esp = sp0 - 0x50u;
                t15 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                eax = t15;
    COW_AT(10045243)
                t16 = rd32(eax + 0x44u);
                wr32(sp0 + 4u, t16);
                t17 = rd32(eax + 0x48u);
                t18 = rd32(COW_IMG(0x1047cf7cu));
                wr32(sp0 + 8u, t17);
                t19 = rd32(eax + 0x4cu);
                wr32(sp0 + 0xcu, t19);
                wr32(sp0 - 0x54u, sp0 + 4u);
                wr32(sp0 - 0x58u, ebp);
                wr32(sp0 - 0x5cu, sp0 + 4u);
                g->eax = sp0 + 4u;
                g->edx = rd32(t18);
                t20 = rd32(t18);
                g->esp = sp0 - 0x50u;
                t21 = cow_thiscall(g, rd32(t20 + 0x50u), t18, 3, sp0 + 4u, ebp, sp0 + 4u);
                t22 = g->edx;
                eax = t21;
                edx = t22;
    COW_AT(10045271)
                d23 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(self + 0x54u));
                wrf32(sp0 - 0x18u, (float)(double)(float)d23);
                d24 = fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(self + 0x5cu));
                d25 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(self + 0x58u));
                wrf32(sp0 - 0x10u, (float)(double)(float)d24);
                if ((rd32(self + 0x10cu) & 0x1c0u) == 0x80u)
                {
                    loc_18_f = (double)(float)d23;
                    loc_10_f = (double)(float)d24;
                    x2 = fr(g, (double)(float)d24 * (double)(float)d24);
                    x1 = fr(g, (double)(float)d23 * (double)(float)d23);
                    x0 = d25;
    COW_AT(100452d2)
                }
                else
                {
                    loc_18_f = (double)(float)d23;
                    loc_10_f = (double)(float)d24;
                    x2 = fr(g, (double)(float)d24 * (double)(float)d24);
                    x1 = fr(g, (double)(float)d23 * (double)(float)d23);
                    x0 = d25;
    COW_AT(100452b2)
                    wr32(sp0 - 0x54u, rd32(COW_IMG(0x1047cf7cu)));
                    d26 = (double)(float)fr(g, atan2(x0, fr(g, sqrt(fr(g, x2 + x1)))));
                    wrf32(sp0 - 0x54u, (float)d26);
                    wr32(sp0 - 0x58u, ebp);
                    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    t27 = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    g->esp = sp0 - 0x50u;
                    cow_thiscall(g, rd32(t27 + 0x68u), rd32(COW_IMG(0x1047cf7cu)), 2, ebp, cow_f2bits(d26));
                    t28 = g->edx;
                    edx = t28;
    COW_AT(100452d0)
                    loc_18_f = (double)rdf32(sp0 - 0x18u);
                    loc_10_f = (double)rdf32(sp0 - 0x10u);
                }
    COW_AT(100452d8)
                wr32(sp0 - 0x54u, rd32(COW_IMG(0x1047cf7cu)));
                d29 = (double)(float)-fr(g, atan2(loc_10_f, loc_18_f));
                wrf32(sp0 - 0x54u, (float)d29);
                wr32(sp0 - 0x58u, edi);
                g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
                t30 = rd32(rd32(COW_IMG(0x1047cf7cu)));
                g->esp = sp0 - 0x50u;
                t31 = cow_thiscall(g, rd32(t30 + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, edi, cow_f2bits(d29));
                eax = t31;
    COW_AT(100452f4)
                wr32(sp0 - 0x54u, edi);
                wr32(sp0 - 0x58u, ebp);
                wr32(sp0 - 0x5cu, ebp);
                g->esp = sp0 - 0x50u;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, ebp, edi);
    COW_AT(10045302)
L_100457a0: ;
    COW_AT(100457a0)
                wr32(sp0 - 0x54u, ebp);
                wr32(sp0 - 0x58u, self + 0x60u);
                wr32(sp0 - 0x5cu, self + 0x60u);
                g->esp = sp0 - 0x50u;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x20u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0x60u, self + 0x60u, ebp);
    COW_AT(100457b1)
                wr8(self + 0x187u, 1u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
                loc_50 = rd32(sp0 - 0x50u);
            }
L_100457b8: ;
    COW_AT(100457b8)
            t117 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
            t118 = rd32(COW_IMG(0x1047cf7cu));
            wr32(t118 + 0xa90u, t117);
            wr32(t117 * 4u + t118 + 0xa10u, edi);
            t119 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
            t120 = rd32(COW_IMG(0x1047cf7cu));
            wr32(t120 + 0xa90u, t119);
            wr32(t119 * 4u + t120 + 0xa10u, ebp);
            ebp = loc_4c;
            edi = loc_50;
        }
    }
    COW_AT(100457ee)
    g->ebx = loc_44;
    g->esi = loc_48;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_10045307: ;
    COW_AT(10045307)
    if (rd32(self + 0xfcu) == 0u)
    {
    COW_AT(10045315)
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0xfcu);
    COW_AT(10045311)
        eax = rd32(eax);
    }
    COW_AT(10045317)
    if ((rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u == 3u)
    {
        edx = rd32(eax + 0x34u) & 0xfu;
        eax = (rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u;
        goto L_10045337;
    }
    ecx = (rd8(eax + 0x36u) & 1u) << 4u;
    edx = rd32(eax + 0x34u) & 0xfu;
    eax = (rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u;
    COW_AT(1004532e)
    if (eax != 6u) goto L_100455fc;
L_10045337: ;
    COW_AT(10045337)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t46 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    t47 = g->edx;
    eax = t46;
    edx = t47;
    COW_AT(1004533e)
    if (eax == 0u)
    {
    COW_AT(1004535c)
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, COW_IMG(0x100746a0u), ebp, 0);
        t50 = g->edx;
        edx = t50;
    }
    else
    {
    COW_AT(10045342)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t48 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
        t49 = g->edx;
        eax = t48;
        edx = t49;
    COW_AT(10045349)
        esi = eax;
        edi = ebp;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        edi = rd32(sp0 - 0x40u);
    }
    COW_AT(10045363)
    wr32(ebp + 0x30u, 0u);
    wr32(ebp + 0x34u, 0u);
    wr32(ebp + 0x38u, 0u);
    wr32(ebp + 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x54u, ebp);
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0xa4u), rd32(COW_IMG(0x1047cf7cu)), 1, ebp);
    COW_AT(10045382)
    wr32(sp0 - 0x54u, ebp + 0x10u);
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0xa4u), rd32(COW_IMG(0x1047cf7cu)), 1, ebp + 0x10u);
    COW_AT(10045394)
    wr32(sp0 - 0x54u, ebp + 0x20u);
    g->eax = ebp + 0x20u;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t51 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x50u;
    t52 = cow_thiscall(g, rd32(t51 + 0xa4u), rd32(COW_IMG(0x1047cf7cu)), 1, ebp + 0x20u);
    t53 = g->edx;
    eax = t52;
    edx = t53;
    COW_AT(100453a6)
    esi = ebp;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t54 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    eax = t54;
    COW_AT(100453b6)
    if (eax == 0u)
    {
    COW_AT(100454a0)
        t85 = rd32(self + 0x54u);
        wr32(sp0 - 0x3cu, t85);
        t86 = rd32(sp0 + 4u);
        wr32(sp0 - 0x30u, t86);
        t87 = rd32(self + 0x58u);
        wr32(sp0 - 0x38u, t87);
        t88 = rd32(sp0 + 8u);
        wr32(sp0 - 0x2cu, t88);
        t89 = rd32(self + 0x5cu);
        wr32(sp0 - 0x34u, t89);
        t90 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x28u, t90);
        loc_3c = t85;
        loc_30 = t86;
        loc_38 = t87;
        loc_2c = t88;
        loc_34 = t89;
        loc_28 = t90;
    }
    else
    {
    COW_AT(100453be)
        t55 = rd32(self + 0x54u);
        wr32(sp0 - 0x3cu, t55);
        t56 = rd32(self + 0x58u);
        wr32(sp0 - 0x38u, t56);
        t57 = rd32(self + 0x5cu);
        wr32(sp0 - 0x34u, t57);
        g->eax = t56;
        g->edx = t55;
        g->esp = sp0 - 0x50u;
        t58 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        t59 = g->edx;
        eax = t58;
        edx = t59;
    COW_AT(100453dd)
        d60 = fr(g, (double)rdf32(sp0 - 0x3cu) * (double)rdf32(eax));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d60);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t61 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        t62 = g->edx;
        eax = t61;
        edx = t62;
    COW_AT(100453ee)
        d63 = fr(g, (double)rdf32(sp0 - 0x38u) * (double)rdf32(eax + 4u));
        wrf32(sp0 - 0x38u, (float)(double)(float)d63);
        g->eax = eax;
        g->esp = sp0 - 0x50u;
        t64 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        eax = t64;
    COW_AT(10045400)
        d65 = fr(g, (double)rdf32(sp0 - 0x34u) * (double)rdf32(eax + 8u));
        wr32(sp0 - 0x54u, sp0 - 0x3cu);
        wrf32(sp0 - 0x34u, (float)(double)(float)d65);
        g->eax = sp0 - 0x3cu;
        g->edx = rd32(COW_IMG(0x1047cf7cu));
        t66 = rd32(COW_IMG(0x1047cf7cu));
        t67 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x50u;
        t68 = cow_thiscall_cdecl(g, COW_IMG(0x100473f0u), self, 1, sp0 - 0x3cu);
        t69 = g->edx;
        eax = t68;
        edx = t69;
        esi = t67;
    COW_AT(1004541f)
        wr32(sp0 - 0x58u, eax);
        wr32(sp0 - 0x5cu, sp0 - 0x3cu);
        g->esp = sp0 - 0x54u;
        cow_thiscall(g, rd32(esi + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 2, sp0 - 0x3cu, eax);
    COW_AT(1004542e)
        t70 = rd32(sp0 + 8u);
        wr32(sp0 - 0x2cu, t70);
        wr32(sp0 - 0x34u, rd32(sp0));
        t71 = rd32(sp0 + 4u);
        wr32(sp0 - 0x30u, t71);
        g->eax = t71;
        g->edx = rd32(sp0);
        t72 = rd32(sp0);
        g->esp = sp0 - 0x54u;
        t73 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        t74 = g->edx;
        eax = t73;
        edx = t74;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
    COW_AT(1004544d)
        d75 = fr(g, (double)rdf32(sp0 - 0x34u) * (double)rdf32(eax));
        wrf32(sp0 - 0x34u, (float)(double)(float)d75);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x54u;
        t76 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        t77 = g->edx;
        eax = t76;
        edx = t77;
    COW_AT(1004545e)
        d78 = fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(eax + 4u));
        wrf32(sp0 - 0x30u, (float)(double)(float)d78);
        g->eax = eax;
        g->esp = sp0 - 0x54u;
        t79 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        eax = t79;
    COW_AT(10045470)
        d80 = fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(eax + 8u));
        wr32(sp0 - 0x58u, sp0 - 0x34u);
        wrf32(sp0 - 0x2cu, (float)(double)(float)d80);
        g->eax = sp0 - 0x34u;
        g->edx = rd32(COW_IMG(0x1047cf7cu));
        t81 = rd32(COW_IMG(0x1047cf7cu));
        t82 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x54u;
        t83 = cow_thiscall_cdecl(g, COW_IMG(0x100473f0u), self, 1, sp0 - 0x34u);
        t84 = g->edx;
        eax = t83;
        edx = t84;
        esi = t82;
    COW_AT(1004548f)
        wr32(sp0 - 0x5cu, eax);
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(esi + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 4, sp0 - 0x34u, eax, sp0 - 0x34u, sp0 - 0x3cu);
    COW_AT(1004549e)
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
    }
    COW_AT(100454d0)
    wr32(sp0 - 0x54u, ebp);
    d91 = (double)(float)fr(g, cow_bits2f(loc_3c) - cow_bits2f(loc_30));
    wrf32(sp0 - 0xcu, (float)d91);
    wr32(sp0 - 0x24u, cow_f2bits(d91));
    d92 = (double)(float)fr(g, cow_bits2f(loc_38) - cow_bits2f(loc_2c));
    wrf32(sp0 - 8u, (float)d92);
    wr32(sp0 - 0x20u, cow_f2bits(d92));
    d93 = (double)(float)fr(g, cow_bits2f(loc_34) - cow_bits2f(loc_28));
    wrf32(sp0 - 4u, (float)d93);
    wr32(sp0 - 0x1cu, cow_f2bits(d93));
    g->esp = sp0 - 0x10u;
    cow_bridge_indirect(g, COW_IMG(0x10045800u), 0u, 17u, (const uint32_t[]){ebp, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), loc_3c, loc_38, loc_34, loc_30, loc_2c, loc_28, cow_f2bits(d91), cow_f2bits(d92), cow_f2bits(d93), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u)}, g->ecx, g->edx, cow_f2bits(d91), 68u);
    COW_AT(10045512)
    wr32(sp0 - 0x54u, sp0 - 0x24u);
    wr32(sp0 - 0x58u, ebp);
    wr32(sp0 - 0x5cu, sp0 - 0x24u);
    g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->edx = sp0 - 0x24u;
    t94 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x50u;
    t95 = cow_thiscall(g, rd32(t94 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x24u, ebp, sp0 - 0x24u);
    t96 = g->edx;
    eax = t95;
    edx = t96;
    COW_AT(1004552b)
    if (rd8(self + 0x10cu) & 1u)
    {
    COW_AT(10045534)
        t97 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x54u, t97);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x10u, 0xbf800000u);
        t98 = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
        wr32(sp0 - 0x58u, t98);
        wr32(sp0 - 0x5cu, ebp);
        g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->edx = t98;
        t99 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t100 = rd32(COW_IMG(0x1047cf7cu));
        g->esp = sp0 - 0x50u;
        t101 = cow_thiscall(g, rd32(t99 + 0x24u), t100, 3, ebp, t98, t97);
        t102 = g->ecx;
        t103 = g->edx;
        eax = t101;
        ecx = t102;
        edx = t103;
    COW_AT(1004556a)
        wr32(sp0 - 0x54u, ebp);
        g->esp = sp0 - 0x10u;
        cow_bridge_indirect(g, COW_IMG(0x10045800u), 0u, 17u, (const uint32_t[]){ebp, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), 0u, 0u}, g->ecx, g->edx, eax, 68u);
    COW_AT(10045570)
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x58u, ebp);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->edx = sp0 - 0x18u;
        t104 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x50u;
        t105 = cow_thiscall(g, rd32(t104 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x18u, ebp, sp0 - 0x18u);
        t106 = g->edx;
        eax = t105;
        edx = t106;
    }
    COW_AT(10045589)
    edi = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_48 = rd32(sp0 - 0x48u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_50 = rd32(sp0 - 0x50u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_1c = rd32(sp0 - 0x1cu);
L_1004558d: ;
    COW_AT(1004558d)
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x100746a0u), ebp, 0);
    COW_AT(10045594)
    if (!(rd8(self + 0x10cu) & 1u))
    {
    COW_AT(1004571e)
        d107 = (double)rdf32(sp0 - 0x24u);
        d108 = (double)rdf32(sp0 - 0x1cu);
        if ((rd32(self + 0x10cu) & 0x1c0u) == 0x80u)
        {
            eax = rd32(self + 0x10cu) & 0x1c0u;
            x1 = fr(g, d108 * d108);
            x0 = fr(g, d107 * d107);
    COW_AT(10045772)
        }
        else
        {
            eax = rd32(self + 0x10cu) & 0x1c0u;
            x1 = fr(g, d108 * d108);
            x0 = fr(g, d107 * d107);
    COW_AT(10045740)
            wr32(sp0 - 0x54u, rd32(COW_IMG(0x1047cf7cu)));
            d109 = fr(g, atan2((double)rdf32(sp0 - 0x20u), fr(g, sqrt(fr(g, x0 + x1)))));
            wrf32(sp0 - 0x54u, (float)(double)(float)d109);
            wr32(sp0 - 0x58u, edi);
            g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t110 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            g->esp = sp0 - 0x50u;
            cow_thiscall(g, rd32(t110 + 0x68u), rd32(COW_IMG(0x1047cf7cu)), 2, edi, cow_f2bits((double)(float)d109));
            t111 = g->edx;
            edx = t111;
    COW_AT(10045762)
            wr32(sp0 - 0x54u, edi);
            wr32(sp0 - 0x58u, ebp);
            wr32(sp0 - 0x5cu, ebp);
            g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t112 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            g->esp = sp0 - 0x50u;
            t113 = cow_thiscall(g, rd32(t112 + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, ebp, edi);
            eax = t113;
    COW_AT(10045770)
        }
    COW_AT(10045776)
        d114 = fr(g, atan2((double)rdf32(sp0 - 0x1cu), (double)rdf32(sp0 - 0x24u)));
        wr32(sp0 - 0x54u, rd32(COW_IMG(0x1047cf7cu)));
        wrf32(sp0 - 0x54u, (float)(double)(float)-d114);
        wr32(sp0 - 0x58u, edi);
        g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t115 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(t115 + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, edi, cow_f2bits((double)(float)-d114));
        t116 = g->edx;
        edx = t116;
    COW_AT(10045792)
        wr32(sp0 - 0x54u, edi);
        wr32(sp0 - 0x58u, ebp);
        wr32(sp0 - 0x5cu, ebp);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, ebp, edi);
    }
    else
    {
    COW_AT(100455a1)
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x3cu), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xcu, sp0 - 0x24u, sp0 - 0x18u);
    COW_AT(100455bb)
        wr32(sp0 - 0x54u, sp0 - 0xcu);
        wr32(sp0 - 0x58u, ebp + 0x10u);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x9cu), rd32(COW_IMG(0x1047cf7cu)), 2, ebp + 0x10u, sp0 - 0xcu);
    COW_AT(100455d2)
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        wr32(sp0 - 0x58u, ebp);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x9cu), rd32(COW_IMG(0x1047cf7cu)), 2, ebp, sp0 - 0x24u);
    COW_AT(100455e6)
        wr32(sp0 - 0x54u, ebp);
        wr32(sp0 - 0x58u, ebp + 0x20u);
        wr32(sp0 - 0x5cu, ebp + 0x20u);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x3cu), rd32(COW_IMG(0x1047cf7cu)), 3, ebp + 0x20u, ebp + 0x20u, ebp);
    COW_AT(100455f7)
    }
    goto L_100457a0;
L_100455fc: ;
    COW_AT(100455fc)
    if (!(rd8(self + 0x10cu) & 1u))
    {
        loc_44 = in_ebx;
        loc_48 = in_esi;
        loc_4c = in_ebp;
        loc_50 = in_edi;
    }
    else
    {
    COW_AT(10045609)
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x10u, 0xbf800000u);
        if (rd32(self + 0xfcu) == 0u)
        {
    COW_AT(1004562f)
            eax = 0u;
        }
        else
        {
            eax = rd32(self + 0xfcu);
    COW_AT(1004562b)
            eax = rd32(eax);
        }
    COW_AT(10045631)
        if ((rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u == 0x14u) goto L_100456be;
        edx = rd32(eax + 0x34u) & 0xfu;
        eax = (rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u;
    COW_AT(10045648)
        if ((int32_t)eax < 1) goto L_10045652;
    COW_AT(1004564d)
        if ((int32_t)eax < 14) goto L_10045657;
L_10045652: ;
    COW_AT(10045652)
        if ((int32_t)eax <= 15) goto L_100456be;
L_10045657: ;
    COW_AT(10045657)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t32 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    COW_AT(1004565e)
        if (eax == 0u)
        {
    COW_AT(1004568c)
            g->esp = sp0 - 0x50u;
            cow_thiscall(g, COW_IMG(0x100746a0u), ebp, 0);
        }
        else
        {
    COW_AT(10045662)
            g->eax = eax;
            g->esp = sp0 - 0x50u;
            t34 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
            eax = t34;
    COW_AT(10045669)
            esi = eax;
            edi = ebp;
            ecx = 0x10u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t35 = rd32(sp0 - 0x40u);
            wr32(ebp + 0x30u, 0u);
            wr32(ebp + 0x34u, 0u);
            wr32(ebp + 0x38u, 0u);
            wr32(ebp + 0x3cu, 0x3f800000u);
            edi = t35;
        }
    COW_AT(10045693)
        wr32(sp0 - 0x54u, ebp);
        t36 = rd32(COW_IMG(0x1047bfa8u)) + 0xb90u;
        wr32(sp0 - 0x58u, t36);
        wr32(sp0 - 0x5cu, ebp);
        g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->edx = t36;
        t37 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t38 = rd32(COW_IMG(0x1047cf7cu));
        g->esp = sp0 - 0x50u;
        t39 = cow_thiscall(g, rd32(t37 + 0x24u), t38, 3, ebp, t36, ebp);
        t40 = g->ecx;
        t41 = g->edx;
        eax = t39;
        ecx = t40;
        edx = t41;
    COW_AT(100456ad)
        wr32(sp0 - 0x54u, ebp);
        g->esp = sp0 - 0x10u;
        cow_bridge_indirect(g, COW_IMG(0x10045800u), 0u, 17u, (const uint32_t[]){ebp, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u)}, g->ecx, g->edx, eax, 68u);
    COW_AT(100456b3)
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x58u, ebp);
        loc_58 = ebp;
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_50 = rd32(sp0 - 0x50u);
L_100456d0: ;
    COW_AT(100456d0)
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x18u, loc_58, sp0 - 0x18u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_50 = rd32(sp0 - 0x50u);
    }
    COW_AT(100456e0)
    d43 = fr(g, (double)rdf32(self + 0x54u) - (double)rdf32(sp0 + 4u));
    wrf32(sp0 - 0xcu, (float)(double)(float)d43);
    d44 = fr(g, (double)rdf32(self + 0x58u) - (double)rdf32(sp0 + 8u));
    wr32(sp0 - 0x24u, cow_f2bits((double)(float)d43));
    wrf32(sp0 - 8u, (float)(double)(float)d44);
    d45 = fr(g, (double)rdf32(self + 0x5cu) - (double)rdf32(sp0 + 0xcu));
    wr32(sp0 - 0x20u, cow_f2bits((double)(float)d44));
    wrf32(sp0 - 4u, (float)(double)(float)d45);
    wr32(sp0 - 0x1cu, cow_f2bits((double)(float)d45));
    eax = cow_f2bits((double)(float)d43);
    edx = cow_f2bits((double)(float)d45);
    loc_24 = cow_f2bits((double)(float)d43);
    loc_20 = cow_f2bits((double)(float)d44);
    loc_1c = cow_f2bits((double)(float)d45);
    goto L_1004558d;
L_100456be: ;
    COW_AT(100456be)
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    t42 = rd32(COW_IMG(0x1047bfa8u)) + 0xc10u;
    wr32(sp0 - 0x58u, t42);
    loc_58 = t42;
    loc_44 = in_ebx;
    loc_48 = in_esi;
    loc_4c = in_ebp;
    loc_50 = in_edi;
    goto L_100456d0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10045190(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100451a7u:
    {
        uint32_t eax;
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
        self = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100451afu:
    {
        uint32_t eax;
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
        self = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100451f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045202u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1004520bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045212u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045216u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1004521du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1004522eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10045237u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1004523eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045243u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045271u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 + 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100452b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_18_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 + 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100452d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100452d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_18_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 + 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100452d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_18_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100452f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10045302u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045307u:
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
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045311u:
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
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045315u:
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
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045317u:
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
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004532eu:
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
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045337u:
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
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004533eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045342u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045349u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1004535cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045363u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045382u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045394u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100453a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100453b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100453beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100453ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100453eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045400u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1004541fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x54u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004542eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x3cu);
        wr32(sp0 - 0x54u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004544du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x3cu);
        wr32(sp0 - 0x54u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004545eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x3cu);
        wr32(sp0 - 0x54u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10045470u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x3cu);
        wr32(sp0 - 0x54u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004548fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 0x3cu);
        wr32(sp0 - 0x58u, sp0 - 0x34u);
        wr32(sp0 - 0x54u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004549eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        wr32(sp0 - 0x58u, sp0 - 0x34u);
        wr32(sp0 - 0x54u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100454a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100454d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045512u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1004552bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10045534u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1004556au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10045570u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10045589u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1004558du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045594u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100455a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100455bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100455d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x54u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100455e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100455f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100455fcu:
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
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045609u:
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
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004562bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1004562fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10045631u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10045648u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1004564du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10045652u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10045657u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1004565eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045662u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045669u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1004568cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045693u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100456adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100456b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100456beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100456d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100456e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1004571eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045740u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045762u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045770u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045772u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045776u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10045792u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100457a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100457b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100457b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100457eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10045190(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10045190(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
