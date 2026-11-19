/* f_0x100467e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100467e0(Guest* g)
{
    double d125;
    double d126;
    double d127;
    double d128;
    double d129;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_e8;
    uint32_t loc_ec;
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
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t182;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
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
    cow_frame(g, sp0, 256u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100467fbu: ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 0xe0u); in_ebx = rd32(sp0 - 0xdcu); g->ebp = rd32(sp0 - 0xe0u); g->ebx = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xe4u); goto E_100467fb;
    case 0x1004680au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 0xe0u); in_ebx = rd32(sp0 - 0xdcu); g->ebp = rd32(sp0 - 0xe0u); g->ebx = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xe4u); goto E_1004680a;
    case 0x1004683bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1004683b;
    case 0x10046853u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046853;
    case 0x10046877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046877;
    case 0x10046886u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046886;
    case 0x1004689eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004689e;
    case 0x100468a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100468a5;
    case 0x100468bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100468bd;
    case 0x100468c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100468c4;
    case 0x100468cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100468cb;
    case 0x100468e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100468e3;
    case 0x100468e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100468e7;
    case 0x100468ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100468ff;
    case 0x10046901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046901;
    case 0x10046917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046917;
    case 0x1004692au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_1004692a;
    case 0x1004692cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_1004692c;
    case 0x10046936u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046936;
    case 0x1004693bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004693b;
    case 0x10046944u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046944;
    case 0x1004694du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_e8 = rd32(sp0 - 0xe8u); goto E_1004694d;
    case 0x1004694fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004694f;
    case 0x10046967u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046967;
    case 0x1004697fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004697f;
    case 0x10046986u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046986;
    case 0x10046988u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046988;
    case 0x1004699eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_1004699e;
    case 0x100469a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100469a0;
    case 0x100469b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100469b6;
    case 0x100469bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100469bd;
    case 0x100469cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100469cf;
    case 0x100469e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100469e7;
    case 0x100469ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100469ff;
    case 0x10046a17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046a17;
    case 0x10046a2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046a2f;
    case 0x10046a47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046a47;
    case 0x10046a54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046a54;
    case 0x10046a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046a56;
    case 0x10046a63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046a63;
    case 0x10046a72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); in_edi = rd32(sp0 - 0xe8u); g->edi = rd32(sp0 - 0xe8u); goto E_10046a72;
    case 0x10046a79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046a79;
    case 0x10046aa2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046aa2;
    case 0x10046aa6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046aa6;
    case 0x10046aacu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046aac;
    case 0x10046ab0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046ab0;
    case 0x10046ab2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046ab2;
    case 0x10046abcu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046abc;
    case 0x10046acau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046aca;
    case 0x10046aceu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046ace;
    case 0x10046ad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10046ad5;
    case 0x10046ad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046ad9;
    case 0x10046afbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046afb;
    case 0x10046b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046b18;
    case 0x10046b1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046b1e;
    case 0x10046b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046b2f;
    case 0x10046b4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046b4c;
    case 0x10046b5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046b5e;
    case 0x10046b67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046b67;
    case 0x10046b74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046b74;
    case 0x10046bc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046bc1;
    case 0x10046bdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046bde;
    case 0x10046bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046bfb;
    case 0x10046c15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046c15;
    case 0x10046c19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046c19;
    case 0x10046c1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046c1e;
    case 0x10046c22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046c22;
    case 0x10046c34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046c34;
    case 0x10046c45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046c45;
    case 0x10046c4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046c4e;
    case 0x10046c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046c59;
    case 0x10046c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046c6f;
    case 0x10046c87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046c87;
    case 0x10046c9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046c9f;
    case 0x10046cb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046cb8;
    case 0x10046cbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046cbd;
    case 0x10046cc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046cc1;
    case 0x10046cc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046cc6;
    case 0x10046cd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046cd0;
    case 0x10046cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046cd4;
    case 0x10046cd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046cd6;
    case 0x10046cf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046cf5;
    case 0x10046cf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046cf7;
    case 0x10046d0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046d0f;
    case 0x10046d25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046d25;
    case 0x10046d41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046d41;
    case 0x10046d59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046d59;
    case 0x10046d71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046d71;
    case 0x10046d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046d8b;
    case 0x10046da4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046da4;
    case 0x10046dbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046dbc;
    case 0x10046dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046dd5;
    case 0x10046deeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046dee;
    case 0x10046e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046e07;
    case 0x10046e20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046e20;
    case 0x10046e39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046e39;
    case 0x10046e51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046e51;
    case 0x10046e6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046e6c;
    case 0x10046e6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); in_edi = rd32(sp0 - 0xe8u); g->edi = rd32(sp0 - 0xe8u); goto E_10046e6e;
    case 0x10046e89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046e89;
    case 0x10046ea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046ea1;
    case 0x10046ec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046ec2;
    case 0x10046ed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046ed3;
    case 0x10046f4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046f4d;
    case 0x10046f68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10046f68;
    case 0x10046f6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046f6a;
    case 0x10046f7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046f7a;
    case 0x10046f92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046f92;
    case 0x10046faau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046faa;
    case 0x10046fb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046fb8;
    case 0x10046fd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046fd0;
    case 0x10046fe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10046fe8;
    case 0x10046fedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046fed;
    case 0x10046ff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046ff7;
    case 0x10046ffcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10046ffc;
    case 0x10047000u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10047000;
    case 0x1004700bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_1004700b;
    case 0x10047016u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10047016;
    case 0x10047018u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047018;
    case 0x10047034u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_10047034;
    case 0x10047039u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10047039;
    case 0x10047051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047051;
    case 0x10047067u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047067;
    case 0x1004707du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004707d;
    case 0x10047095u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047095;
    case 0x100470adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100470ad;
    case 0x100470afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100470af;
    case 0x100470b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100470b9;
    case 0x100470cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100470cf;
    case 0x100470e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100470e7;
    case 0x10047102u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047102;
    case 0x1004710fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004710f;
    case 0x10047111u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047111;
    case 0x1004711eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004711e;
    case 0x10047126u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047126;
    case 0x1004713fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004713f;
    case 0x1004714du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004714d;
    case 0x10047156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047156;
    case 0x10047160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047160;
    case 0x10047165u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047165;
    case 0x10047169u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10047169;
    case 0x1004717bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004717b;
    case 0x1004718du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_1004718d;
    case 0x10047196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e8 = rd32(sp0 - 0xe8u); goto E_10047196;
    case 0x100471a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100471a1;
    case 0x100471bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); goto E_100471bc;
    case 0x100471d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100471d2;
    case 0x100471dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100471db;
    case 0x100471f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100471f0;
    case 0x100471fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e8 = rd32(sp0 - 0xe8u); goto E_100471fa;
    case 0x100471fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100471fd;
    case 0x1004720cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e8 = rd32(sp0 - 0xe8u); goto E_1004720c;
    default: break;
    }
#endif

    COW_AT(100467e0)
    wr32(sp0 - 0xdcu, in_ebx);
    wr32(sp0 - 0xe0u, in_ebp);
    wr32(sp0 - 0xe4u, in_esi);
    wr32(sp0 - 0xd4u, self);
    if (rd16(sp0 + 4u) == 0xffffu)
    {
    COW_AT(100467fb)
        wr16(sp0 + 4u, rd16(self + 0x16cu));
    }
    COW_AT(1004680a)
    t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t2 = rd32(COW_IMG(0x1047cf7cu));
    t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t2 + 0xa90u, t1);
    t4 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
    wr32(sp0 - 0xe8u, t4);
    t5 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, COW_IMG(0x1006a520u), t5, 1, t4);
    t6 = g->ecx;
    ecx = t6;
    ebx = t3;
    COW_AT(1004683b)
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 0x1bu);
    t7 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t7);
    g->edx = rd32(t7);
    t8 = rd32(t7);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t8 + 0xc8u), ecx, 3, t7, 0x1bu, 1u);
    t9 = g->edx;
    edx = t9;
    COW_AT(10046853)
    t10 = rd32(sp0 + 4u);
    wr8(sp0 - 0xd5u, 0u);
    if ((uint8_t)t10 > 0x68u)
    {
        eax = (uint8_t)t10;
        goto L_100469b6;
    }
    eax = (uint8_t)t10;
    ecx = t10;
    esi = (uint16_t)t10;
    COW_AT(10046877)
    t11 = rd32(COW_IMG(0x10047234u) + rd8(COW_IMG(0x1004725cu) + eax) * 4u);
    edx = rd8(COW_IMG(0x1004725cu) + eax);
    switch (t11 - RD)
    {
    case 0x10046886u: goto L_10046886;
    case 0x100468a5u: goto L_100468a5;
    case 0x100468c4u: goto L_100468c4;
    case 0x100468cbu: goto L_100468cb;
    case 0x100468e7u: goto L_100468e7;
    case 0x10046936u: goto L_10046936;
    case 0x10046944u: goto L_10046944;
    case 0x1004694fu: goto L_1004694f;
    case 0x10046986u: goto L_10046986;
    case 0x100469b6u: goto L_100469b6;
    default: rt_fatal(g, COW_IMG(0x1004687fu), "switch");
    }
    return 0;
L_10046886: ;
    COW_AT(10046886)
    wr32(sp0 - 0xe8u, 2u);
    wr32(sp0 - 0xecu, 0x13u);
    t36 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t36);
    t37 = rd32(t36);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t37 + 0xc8u), t37, 3, t36, 0x13u, 2u);
    t38 = g->ecx;
    ecx = t38;
    COW_AT(1004689e)
    wr32(sp0 - 0xe8u, 1u);
    loc_e8 = 1u;
L_100469a0: ;
    COW_AT(100469a0)
    wr32(sp0 - 0xecu, 0x14u);
    t39 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t39);
    g->eax = t39;
    g->edx = rd32(t39);
    t40 = rd32(t39);
    g->esp = sp0 - 0xe4u;
    t41 = cow_thiscall(g, rd32(t40 + 0xc8u), ecx, 3, t39, 0x14u, loc_e8);
    t42 = g->edx;
    eax = t41;
    edx = t42;
L_100469b6: ;
    COW_AT(100469b6)
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    cow_thiscall_cdecl(g, COW_IMG(0x10045d40u), self, 10, rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u));
    t43 = g->edx;
    edx = t43;
    COW_AT(100469bd)
    wr32(sp0 - 0xe8u, self + 0xa0u);
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, self + 0xa0u);
    t44 = g->edx;
    edx = t44;
    COW_AT(100469cf)
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 0xfu);
    t45 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t45);
    t46 = rd32(t45);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t46 + 0xc8u), t46, 3, t45, 0xfu, 1u);
    t47 = g->ecx;
    ecx = t47;
    COW_AT(100469e7)
    wr32(sp0 - 0xe8u, 5u);
    wr32(sp0 - 0xecu, 0x19u);
    t48 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t48);
    g->edx = rd32(t48);
    t49 = rd32(t48);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t49 + 0xc8u), ecx, 3, t48, 0x19u, 5u);
    t50 = g->edx;
    edx = t50;
    COW_AT(100469ff)
    wr32(sp0 - 0xe8u, 0x60u);
    wr32(sp0 - 0xecu, 0x18u);
    t51 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t51);
    t52 = rd32(t51);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t52 + 0xc8u), t52, 3, t51, 0x18u, 0x60u);
    t53 = g->ecx;
    ecx = t53;
    COW_AT(10046a17)
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 7u);
    t54 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t54);
    g->edx = rd32(t54);
    t55 = rd32(t54);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t55 + 0xc8u), ecx, 3, t54, 7u, 1u);
    t56 = g->ecx;
    t57 = g->edx;
    ecx = t56;
    edx = t57;
    COW_AT(10046a2f)
    if (!(rd32(self + 0x10cu) >> 0xcu & 1u))
    {
        eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    COW_AT(10046a56)
        wr32(sp0 - 0xe8u, 0u);
        wr32(sp0 - 0xecu, 0xeu);
        wr32(sp0 - 0xf0u, eax);
        g->eax = eax;
        g->edx = rd32(eax);
        t62 = rd32(eax);
        g->esp = sp0 - 0xe4u;
        t63 = cow_thiscall(g, rd32(t62 + 0xc8u), ecx, 3, eax, 0xeu, 0u);
        t64 = g->ecx;
        t65 = g->edx;
        eax = t63;
        ecx = t64;
        edx = t65;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    COW_AT(10046a47)
        wr32(sp0 - 0xe8u, 1u);
        wr32(sp0 - 0xecu, 0xeu);
        wr32(sp0 - 0xf0u, eax);
        g->eax = eax;
        g->edx = edx;
        t58 = rd32(eax);
        g->esp = sp0 - 0xe4u;
        t59 = cow_thiscall(g, rd32(t58 + 0xc8u), t58, 3, eax, 0xeu, 1u);
        t60 = g->ecx;
        t61 = g->edx;
        eax = t59;
        ecx = t60;
        edx = t61;
    COW_AT(10046a54)
    }
    COW_AT(10046a63)
    wr32(sp0 - 0xe8u, in_edi);
    if (!(rd8(self + 0x10eu) & 1u))
    {
    COW_AT(10046e6e)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 0x89u);
        t120 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t120);
        g->edx = rd32(t120);
        t121 = rd32(t120);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(t121 + 0xc8u), ecx, 3, t120, 0x89u, 0u);
        t122 = g->edx;
        edx = t122;
        ebp = self;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x10eu);
    COW_AT(10046a72)
        g->eax = eax;
        g->esp = sp0 - 0xe8u;
        t66 = cow_thiscall(g, COW_IMG(0x10045c50u), self, 0);
        eax = t66;
    COW_AT(10046a79)
        esi = eax;
        edi = ebx;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(ebx + 0x30u, 0u);
        wr32(ebx + 0x34u, 0u);
        wr32(ebx + 0x38u, 0u);
        wr32(ebx + 0x3cu, 0x3f800000u);
        if (rd32(self + 0xfcu) == 0u)
        {
            eax = eax & 0xffffff00u;
            ecx = rd32(self + 0xfcu);
        }
        else
        {
            eax = eax & 0xffffff00u;
            ecx = rd32(self + 0xfcu);
    COW_AT(10046aa2)
            if (rd32(ecx) != 0u)
            {
    COW_AT(10046aa6)
                if (ecx == 0u)
                {
    COW_AT(10046ab0)
                    eax = 0u;
                }
                else
                {
                    eax = ecx;
    COW_AT(10046aac)
                    eax = rd32(eax);
                }
    COW_AT(10046ab2)
                eax = (eax & 0xffffff00u) | (rd8(eax + 0xdfu) >> 1u & 1u);
            }
        }
    COW_AT(10046abc)
        if (rd8(self + 0x179u) != 0u)
        {
            edx = 0u;
            ebp = self;
        }
        else
        {
    COW_AT(10046aca)
            if ((uint8_t)eax != 0u)
            {
                edx = 0u;
                ebp = self;
            }
            else
            {
    COW_AT(10046ace)
                g->eax = eax;
                g->edx = 0u;
                g->esp = sp0 - 0xe8u;
                t67 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
                t68 = g->edx;
                eax = t67;
                edx = t68;
    COW_AT(10046ad5)
                if (eax == 0u)
                {
                    ebp = self;
                }
                else
                {
    COW_AT(10046ad9)
                    t69 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                    t70 = rd32(COW_IMG(0x1047cf7cu));
                    t71 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                    wr32(t70 + 0xa90u, t69);
                    g->eax = t70;
                    g->edx = edx;
                    g->esp = sp0 - 0xe8u;
                    t72 = cow_thiscall(g, COW_IMG(0x100473f0u), rd32(sp0 - 0xd4u), 0);
                    t73 = g->edx;
                    eax = t72;
                    edx = t73;
                    ebp = t71;
    COW_AT(10046afb)
                    wr32(sp0 - 0xecu, 0x4096cbe2u);
                    esi = eax;
                    edi = ebp;
                    ecx = 0x10u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    wr32(sp0 - 0xf0u, ebx);
                    wr32(sp0 - 0xf4u, ebx);
                    g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    g->edx = edx;
                    t74 = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    t75 = rd32(COW_IMG(0x1047cf7cu));
                    g->esp = sp0 - 0xe8u;
                    t76 = cow_thiscall(g, rd32(t74 + 0x78u), t75, 3, ebx, ebx, 0x4096cbe2u);
                    t77 = g->ecx;
                    t78 = g->edx;
                    eax = t76;
                    ecx = t77;
                    edx = t78;
    COW_AT(10046b18)
                    wr32(sp0 - 0xecu, ebp);
                    g->esp = sp0 - 0xa8u;
                    t79 = cow_bridge_indirect(g, COW_IMG(0x10045800u), 0u, 17u, (const uint32_t[]){ebp, rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu)}, g->ecx, g->edx, eax, 68u);
                    eax = t79;
    COW_AT(10046b1e)
                    wr32(sp0 - 0xecu, ebp);
                    wr32(sp0 - 0xf0u, ebx);
                    wr32(sp0 - 0xf4u, ebx);
                    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    t80 = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    g->esp = sp0 - 0xe8u;
                    cow_thiscall(g, rd32(t80 + 0x20u), rd32(COW_IMG(0x1047cf7cu)), 3, ebx, ebx, ebp);
                    t81 = g->edx;
                    edx = t81;
    COW_AT(10046b2f)
                    t82 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                    t83 = rd32(COW_IMG(0x1047cf7cu));
                    wr32(t83 + 0xa90u, t82);
                    wr32(t82 * 4u + t83 + 0xa10u, ebp);
                    ebp = rd32(sp0 - 0xd4u);
                }
            }
        }
    COW_AT(10046b4c)
        if ((int32_t)(rd32(ebp + 0x10cu) >> 6u & 7u) > 0)
        {
            eax = rd32(ebp + 0x10cu) >> 6u & 7u;
    COW_AT(10046b5e)
            if ((int32_t)eax <= 2)
            {
    COW_AT(10046b67)
                if (rd8(ebp + 0x10cu) & 1u)
                {
    COW_AT(10046b74)
                    wr32(sp0 - 0xecu, ebx);
                    t84 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                    t85 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t84);
                    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
                    edi = t85;
                    ecx = 0x10u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    wr32(t85 + 0x30u, 0u);
                    wr32(t85 + 0x34u, 0u);
                    wr32(t85 + 0x38u, 0u);
                    wr32(t85 + 0x3cu, 0x3f800000u);
                    wr32(sp0 - 0xf0u, t85);
                    wr32(sp0 - 0xf4u, ebx);
                    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    t86 = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    g->esp = sp0 - 0xe8u;
                    cow_thiscall(g, rd32(t86 + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebx, t85, ebx);
                    t87 = g->edx;
                    edx = t87;
                    ebp = t85;
    COW_AT(10046bc1)
                    wr32(sp0 - 0xecu, 0x40490fd8u);
                    esi = ebp;
                    edi = ebx;
                    ecx = 0x10u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    wr32(sp0 - 0xf0u, ebx);
                    wr32(sp0 - 0xf4u, ebx);
                    g->edx = edx;
                    g->esp = sp0 - 0xe8u;
                    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x78u), rd32(COW_IMG(0x1047cf7cu)), 3, ebx, ebx, 0x40490fd8u);
                    t88 = g->edx;
                    edx = t88;
    COW_AT(10046bde)
                    t89 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                    t90 = rd32(COW_IMG(0x1047cf7cu));
                    wr32(t90 + 0xa90u, t89);
                    wr32(t89 * 4u + t90 + 0xa10u, ebp);
                    ebp = rd32(sp0 - 0xd4u);
                }
            }
        }
    COW_AT(10046bfb)
        if (rd32(rd32(COW_IMG(0x10631f24u)) + 0x3949cu) == 0u)
        {
            eax = rd32(ebp + 0xfcu);
    COW_AT(10046cbd)
            if (eax == 0u) goto L_10046cf7;
    COW_AT(10046cc1)
            if (rd32(eax) == 0u) goto L_10046cf7;
    COW_AT(10046cc6)
            if (rd32(ebp + 0xfcu) == 0u)
            {
    COW_AT(10046cd4)
                eax = 0u;
            }
            else
            {
                eax = rd32(ebp + 0xfcu);
    COW_AT(10046cd0)
                eax = rd32(eax);
            }
    COW_AT(10046cd6)
            t99 = rd32(eax + 0xc4u);
            wr32(sp0 - 0xecu, t99);
            wr32(sp0 - 0xf0u, sp0 - 0x68u);
            wr32(sp0 - 0xf4u, sp0 - 0xd0u);
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, COW_IMG(0x1018b960u), rd32(COW_IMG(0x1065cb04u)), 3, sp0 - 0xd0u, sp0 - 0x68u, t99);
    COW_AT(10046cf5)
L_10046d0f: ;
    COW_AT(10046d0f)
            wr32(sp0 - 0xecu, sp0 - 0x90u);
            wr32(sp0 - 0xf0u, ebx);
            wr32(sp0 - 0xf4u, sp0 - 0x90u);
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x90u, ebx, sp0 - 0x90u);
    COW_AT(10046d25)
            wr32(sp0 - 0xecu, sp0 - 0x28u);
            wr32(sp0 - 0xf0u, ebx);
            wr32(sp0 - 0xf4u, sp0 - 0x28u);
            g->eax = sp0 - 0x28u;
            g->esp = sp0 - 0xe8u;
            t100 = cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x28u, ebx, sp0 - 0x28u);
            eax = t100;
    COW_AT(10046d41)
            wr32(sp0 - 0xecu, sp0 - 0xd0u);
            wr32(sp0 - 0xf0u, 0u);
            g->edx = rd32(COW_IMG(0x1047bfa8u));
            t101 = rd32(COW_IMG(0x1047bfa8u));
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(t101 + 0xdc8u), 2, 0u, sp0 - 0xd0u);
            t102 = g->edx;
            edx = t102;
    COW_AT(10046d59)
            wr32(sp0 - 0xecu, 1u);
            wr32(sp0 - 0xf0u, 0u);
            t103 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0xf4u, t103);
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, rd32(rd32(t103) + 0xb8u), rd32(t103), 3, t103, 0u, 1u);
    COW_AT(10046d71)
            wr32(sp0 - 0xecu, sp0 - 0x68u);
            wr32(sp0 - 0xf0u, 1u);
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 1u, sp0 - 0x68u);
    COW_AT(10046d8b)
            wr32(sp0 - 0xecu, 1u);
            wr32(sp0 - 0xf0u, 1u);
            t104 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0xf4u, t104);
            g->edx = rd32(t104);
            t105 = rd32(t104);
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, rd32(t105 + 0xb8u), rd32(COW_IMG(0x1047bfa8u)), 3, t104, 1u, 1u);
            t106 = g->edx;
            edx = t106;
        }
        else
        {
            eax = rd32(ebp + 0xfcu);
    COW_AT(10046c15)
            if (eax == 0u) goto L_10046c45;
    COW_AT(10046c19)
            if (rd32(eax) == 0u) goto L_10046c45;
    COW_AT(10046c1e)
            if (eax == 0u)
            {
    COW_AT(10046c34)
                wr32(sp0 - 0xecu, rd32(0xc4u));
                wr32(sp0 - 0xf0u, 0u);
                wr32(sp0 - 0xf4u, sp0 - 0xd0u);
                eax = sp0 - 0xd0u;
                edx = rd32(0xc4u);
                loc_ec = rd32(0xc4u);
            }
            else
            {
    COW_AT(10046c22)
                t91 = rd32(rd32(eax) + 0xc4u);
                wr32(sp0 - 0xecu, t91);
                wr32(sp0 - 0xf0u, 0u);
                wr32(sp0 - 0xf4u, sp0 - 0xd0u);
                eax = sp0 - 0xd0u;
                edx = t91;
                loc_ec = t91;
            }
L_10046c4e: ;
    COW_AT(10046c4e)
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, COW_IMG(0x1018b9a0u), rd32(COW_IMG(0x1065cb04u)), 3, sp0 - 0xd0u, 0u, loc_ec);
    COW_AT(10046c59)
            wr32(sp0 - 0xecu, sp0 - 0x90u);
            wr32(sp0 - 0xf0u, ebx);
            wr32(sp0 - 0xf4u, sp0 - 0x90u);
            g->eax = sp0 - 0x90u;
            g->esp = sp0 - 0xe8u;
            t92 = cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x90u, ebx, sp0 - 0x90u);
            eax = t92;
    COW_AT(10046c6f)
            wr32(sp0 - 0xecu, sp0 - 0xd0u);
            wr32(sp0 - 0xf0u, 0u);
            g->edx = rd32(COW_IMG(0x1047bfa8u));
            t93 = rd32(COW_IMG(0x1047bfa8u));
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(t93 + 0xdc8u), 2, 0u, sp0 - 0xd0u);
            t94 = g->edx;
            edx = t94;
    COW_AT(10046c87)
            wr32(sp0 - 0xecu, 1u);
            wr32(sp0 - 0xf0u, 0u);
            t95 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0xf4u, t95);
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, rd32(rd32(t95) + 0xb8u), rd32(t95), 3, t95, 0u, 1u);
    COW_AT(10046c9f)
            wr32(sp0 - 0xecu, 0u);
            wr32(sp0 - 0xf0u, 1u);
            t96 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0xf4u, t96);
            g->edx = rd32(COW_IMG(0x1047bfa8u));
            t97 = rd32(COW_IMG(0x1047bfa8u));
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, rd32(rd32(t96) + 0xb8u), rd32(t96), 3, t96, 1u, 0u);
            t98 = g->edx;
            edx = t98;
    COW_AT(10046cb8)
        }
    COW_AT(10046da4)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 2u);
        t107 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t107);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(rd32(t107) + 0xb8u), rd32(t107), 3, t107, 2u, 0u);
    COW_AT(10046dbc)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 3u);
        t108 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t108);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(rd32(t108) + 0xb8u), rd32(t108), 3, t108, 3u, 0u);
    COW_AT(10046dd5)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 4u);
        t109 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t109);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(rd32(t109) + 0xb8u), rd32(t109), 3, t109, 4u, 0u);
    COW_AT(10046dee)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 5u);
        t110 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t110);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(rd32(t110) + 0xb8u), rd32(t110), 3, t110, 5u, 0u);
    COW_AT(10046e07)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 6u);
        t111 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t111);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(rd32(t111) + 0xb8u), rd32(t111), 3, t111, 6u, 0u);
    COW_AT(10046e20)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 7u);
        t112 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t112);
        t113 = rd32(t112);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(t113 + 0xb8u), t113, 3, t112, 7u, 0u);
        t114 = g->ecx;
        ecx = t114;
    COW_AT(10046e39)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 0x1du);
        t115 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t115);
        g->edx = rd32(t115);
        t116 = rd32(t115);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(t116 + 0xc8u), ecx, 3, t115, 0x1du, 0u);
        t117 = g->edx;
        edx = t117;
    COW_AT(10046e51)
        wr32(sp0 - 0xecu, 1u);
        wr32(sp0 - 0xf0u, 0x89u);
        t118 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t118);
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(rd32(t118) + 0xc8u), rd32(t118), 3, t118, 0x89u, 1u);
        t119 = g->edx;
        edx = t119;
    COW_AT(10046e6c)
    }
    COW_AT(10046e89)
    wr32(sp0 - 0xecu, 1u);
    wr32(sp0 - 0xf0u, 0x16u);
    t123 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf4u, t123);
    g->eax = t123;
    g->esp = sp0 - 0xe8u;
    t124 = cow_thiscall(g, rd32(rd32(t123) + 0xc8u), rd32(t123), 3, t123, 0x16u, 1u);
    eax = t124;
    COW_AT(10046ea1)
    if (rd8(rd32(COW_IMG(0x10631f24u)) + 0x39598u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        ecx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(10046f6a)
        wr32(sp0 - 0xecu, rd32(COW_IMG(0x1065c4d0u)));
        wr32(sp0 - 0xf0u, 0x2fu);
        wr32(sp0 - 0xf4u, eax);
        g->edx = rd32(COW_IMG(0x1065c4d0u));
        t132 = rd32(COW_IMG(0x1065c4d0u));
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x2fu, t132);
        t133 = g->edx;
        edx = t133;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        ecx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(10046ec2)
        wr32(sp0 - 0xecu, sp0 - 0x68u);
        wr32(sp0 - 0xf0u, 3u);
        wr32(sp0 - 0xf4u, eax);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(ecx + 0x98u), ecx, 3, eax, 3u, sp0 - 0x68u);
    COW_AT(10046ed3)
        esi = sp0 - 0x68u;
        edi = rd32(COW_IMG(0x10631f24u)) + 0x39550u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d125 = fr(g, (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2e0u) + (double)rdf32(rd32(COW_IMG(0x10631f24u)) + 0x39594u));
        wrf32(sp0 - 0xecu, (float)(double)(float)d125);
        d126 = fr(g, (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2dcu) + (double)rdf32(rd32(COW_IMG(0x10631f24u)) + 0x39594u));
        wrf32(sp0 - 0xf0u, (float)(double)(float)d126);
        d127 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2e8u) * (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2f0u)));
        wrf32(sp0 - 0xf4u, (float)(double)(float)d127);
        d128 = fr(g, atan2(rdf64(COW_IMG(0x10329d40u)), (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2f4u)));
        d129 = (double)(float)fr(g, d128 + d128);
        wrf32(sp0 - 0xf8u, (float)d129);
        wr32(sp0 - 0xfcu, sp0 - 0xd0u);
        g->esp = sp0 - 0xe8u;
        cow_stdcall(g, COW_IMG(0x102d83e6u), 5, sp0 - 0xd0u, cow_f2bits(d129), cow_f2bits((double)(float)d127), cow_f2bits((double)(float)d126), cow_f2bits((double)(float)d125));
    COW_AT(10046f4d)
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        wr32(sp0 - 0xf0u, 3u);
        t130 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf4u, t130);
        g->edx = sp0 - 0xd0u;
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(rd32(t130) + 0x94u), rd32(t130), 3, t130, 3u, sp0 - 0xd0u);
        t131 = g->edx;
        edx = t131;
    COW_AT(10046f68)
    }
    COW_AT(10046f7a)
    wr32(sp0 - 0xecu, 4u);
    wr32(sp0 - 0xf0u, 0x17u);
    t134 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf4u, t134);
    t135 = rd32(t134);
    g->esp = sp0 - 0xe8u;
    cow_thiscall(g, rd32(t135 + 0xc8u), t135, 3, t134, 0x17u, 4u);
    t136 = g->ecx;
    ecx = t136;
    COW_AT(10046f92)
    wr32(sp0 - 0xecu, 8u);
    wr32(sp0 - 0xf0u, 0x19u);
    t137 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf4u, t137);
    g->edx = rd32(t137);
    t138 = rd32(t137);
    g->esp = sp0 - 0xe8u;
    cow_thiscall(g, rd32(t138 + 0xc8u), ecx, 3, t137, 0x19u, 8u);
    t139 = g->edx;
    edx = t139;
    COW_AT(10046faa)
    if (!(rd32(ebp + 0x10cu) >> 0x19u & 1u))
    {
        edi = rd32(sp0 - 0xe8u);
    COW_AT(10046fed)
        if (rd32(ebp + 0xfcu) == 0u)
        {
            eax = rd32(ebp + 0xfcu);
            goto L_10047016;
        }
        eax = rd32(ebp + 0xfcu);
    COW_AT(10046ff7)
        if (rd32(eax) == 0u) goto L_10047016;
    COW_AT(10046ffc)
        if (eax == 0u)
        {
    COW_AT(1004700b)
            wr32(sp0 - 0xe8u, rd32(0xc4u));
            eax = rd32(0xc4u);
            loc_e8 = rd32(0xc4u);
        }
        else
        {
    COW_AT(10047000)
            t145 = rd32(rd32(eax) + 0xc4u);
            wr32(sp0 - 0xe8u, t145);
            eax = t145;
            loc_e8 = t145;
        }
L_10047018: ;
    COW_AT(10047018)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, COW_IMG(0x1047bbf8u));
        wr32(sp0 - 0xf4u, COW_IMG(0x1047bbdcu));
        wr32(sp0 - 0xf8u, COW_IMG(0x1047bbe0u));
        g->eax = eax;
        g->edx = edx;
        t146 = rd32(COW_IMG(0x1065cb04u));
        g->esp = sp0 - 0xe4u;
        t147 = cow_thiscall(g, COW_IMG(0x1018ba20u), t146, 5, COW_IMG(0x1047bbe0u), COW_IMG(0x1047bbdcu), COW_IMG(0x1047bbf8u), 0u, loc_e8);
        t148 = g->ecx;
        t149 = g->edx;
        eax = t147;
        ecx = t148;
        edx = t149;
    COW_AT(10047034)
        g->edx = edx;
        g->esp = sp0 - 0xe4u;
        cow_stdcall(g, COW_IMG(0x100464d0u), 0);
        t150 = g->edx;
        edx = t150;
    COW_AT(10047039)
        wr32(sp0 - 0xe8u, 1u);
        wr32(sp0 - 0xecu, 0x1cu);
        t151 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf0u, t151);
        g->edx = edx;
        g->esp = sp0 - 0xe4u;
        cow_thiscall(g, rd32(rd32(t151) + 0xc8u), rd32(t151), 3, t151, 0x1cu, 1u);
        t152 = g->edx;
        edx = t152;
    COW_AT(10047051)
        if (rd8(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u) + 0x92du) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u);
            ecx = rd32(COW_IMG(0x1047bfa8u));
            edx = (edx & 0xffffff00u) | rd8(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u) + 0x92du);
    COW_AT(100470af)
            if (rd8(eax + 0x92eu) != 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(eax + 0x92eu);
    COW_AT(100470b9)
                wr32(sp0 - 0xe8u, 3u);
                wr32(sp0 - 0xecu, 0x8cu);
                t161 = rd32(ecx + 0xebcu);
                wr32(sp0 - 0xf0u, t161);
                t162 = rd32(t161);
                g->esp = sp0 - 0xe4u;
                cow_thiscall(g, rd32(t162 + 0xc8u), t162, 3, t161, 0x8cu, 3u);
                t163 = g->ecx;
                ecx = t163;
    COW_AT(100470cf)
                wr32(sp0 - 0xe8u, 0u);
                wr32(sp0 - 0xecu, 0x23u);
                t164 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0xf0u, t164);
                g->edx = rd32(t164);
                t165 = rd32(t164);
                g->esp = sp0 - 0xe4u;
                cow_thiscall(g, rd32(t165 + 0xc8u), ecx, 3, t164, 0x23u, 0u);
                t166 = g->edx;
                edx = t166;
    COW_AT(100470e7)
                if (rd8(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u) + 0x92fu) == 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    edx = (edx & 0xffffff00u) | rd8(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u) + 0x92fu);
    COW_AT(10047111)
                    wr32(sp0 - 0xe8u, 0u);
                    wr32(sp0 - 0xecu, 0x30u);
                    wr32(sp0 - 0xf0u, eax);
                    g->eax = eax;
                    g->esp = sp0 - 0xe4u;
                    t168 = cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x30u, 0u);
                    eax = t168;
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    ecx = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u);
    COW_AT(10047102)
                    wr32(sp0 - 0xe8u, 1u);
                    wr32(sp0 - 0xecu, 0x30u);
                    wr32(sp0 - 0xf0u, eax);
                    g->eax = eax;
                    g->esp = sp0 - 0xe4u;
                    t167 = cow_thiscall(g, rd32(rd32(eax) + 0xc8u), ecx, 3, eax, 0x30u, 1u);
                    eax = t167;
    COW_AT(1004710f)
                }
            }
        }
        else
        {
            ecx = rd32(COW_IMG(0x1047bfa8u));
    COW_AT(10047067)
            wr32(sp0 - 0xe8u, 0u);
            wr32(sp0 - 0xecu, 0x8cu);
            t153 = rd32(ecx + 0xebcu);
            wr32(sp0 - 0xf0u, t153);
            g->edx = rd32(t153);
            t154 = rd32(t153);
            g->esp = sp0 - 0xe4u;
            cow_thiscall(g, rd32(t154 + 0xc8u), ecx, 3, t153, 0x8cu, 0u);
            t155 = g->edx;
            edx = t155;
    COW_AT(1004707d)
            wr32(sp0 - 0xe8u, 3u);
            wr32(sp0 - 0xecu, 0x23u);
            t156 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0xf0u, t156);
            t157 = rd32(t156);
            g->esp = sp0 - 0xe4u;
            cow_thiscall(g, rd32(t157 + 0xc8u), t157, 3, t156, 0x23u, 3u);
            t158 = g->ecx;
            ecx = t158;
    COW_AT(10047095)
            wr32(sp0 - 0xe8u, 0u);
            wr32(sp0 - 0xecu, 0x30u);
            t159 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0xf0u, t159);
            g->eax = t159;
            g->esp = sp0 - 0xe4u;
            t160 = cow_thiscall(g, rd32(rd32(t159) + 0xc8u), ecx, 3, t159, 0x30u, 0u);
            eax = t160;
    COW_AT(100470ad)
        }
    COW_AT(1004711e)
        if (rd8(sp0 - 0xd5u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0xd5u);
        }
        else
        {
    COW_AT(10047126)
            wr32(sp0 - 0xe8u, 0u);
            wr32(sp0 - 0xecu, 0x22u);
            t169 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0xf0u, t169);
            g->eax = t169;
            g->esp = sp0 - 0xe4u;
            t170 = cow_thiscall(g, rd32(rd32(t169) + 0xc8u), rd32(t169), 3, t169, 0x22u, 0u);
            eax = t170;
        }
    }
    else
    {
        edi = rd32(sp0 - 0xe8u);
    COW_AT(10046fb8)
        wr32(sp0 - 0xe8u, 0u);
        wr32(sp0 - 0xecu, 0x1cu);
        t140 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf0u, t140);
        t141 = rd32(t140);
        g->esp = sp0 - 0xe4u;
        cow_thiscall(g, rd32(t141 + 0xc8u), t141, 3, t140, 0x1cu, 0u);
        t142 = g->ecx;
        ecx = t142;
    COW_AT(10046fd0)
        wr32(sp0 - 0xe8u, 0u);
        wr32(sp0 - 0xecu, 0x30u);
        t143 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xf0u, t143);
        g->eax = t143;
        g->esp = sp0 - 0xe4u;
        t144 = cow_thiscall(g, rd32(rd32(t143) + 0xc8u), ecx, 3, t143, 0x30u, 0u);
        eax = t144;
    COW_AT(10046fe8)
    }
    COW_AT(1004713f)
    if (!(rd32(ebp + 0x10cu) >> 0x19u & 1u))
    {
        edx = rd32(ebp + 0x10cu) >> 0x19u;
        goto L_10047156;
    }
    edx = rd32(ebp + 0x10cu) >> 0x19u;
    COW_AT(1004714d)
    if (!(rd8(ebp + 0x10eu) & 1u)) goto L_100471d2;
L_10047156: ;
    COW_AT(10047156)
    if (rd32(ebp + 0xfcu) == 0u)
    {
        eax = rd32(ebp + 0xfcu);
        goto L_1004718d;
    }
    eax = rd32(ebp + 0xfcu);
    COW_AT(10047160)
    if (rd32(eax) == 0u) goto L_1004718d;
    COW_AT(10047165)
    if (eax == 0u)
    {
    COW_AT(1004717b)
        wr32(sp0 - 0xe8u, rd32(0xc4u));
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        eax = rd32(0xc4u);
        loc_e8 = rd32(0xc4u);
    }
    else
    {
    COW_AT(10047169)
        t171 = rd32(rd32(eax) + 0xc4u);
        wr32(sp0 - 0xe8u, t171);
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        eax = t171;
        loc_e8 = t171;
    }
L_10047196: ;
    COW_AT(10047196)
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, COW_IMG(0x1018b9e0u), rd32(COW_IMG(0x1065cb04u)), 3, sp0 - 0xd4u, 0u, loc_e8);
    COW_AT(100471a1)
    t172 = rd32(sp0 - 0xd4u);
    wr32(sp0 - 0xe8u, t172);
    wr32(sp0 - 0xecu, 0x8bu);
    t173 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t173);
    g->edx = t172;
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(rd32(t173) + 0xc8u), rd32(t173), 3, t173, 0x8bu, t172);
    t174 = g->edx;
    edx = t174;
    COW_AT(100471bc)
    wr32(sp0 - 0xe8u, COW_IMG(0x1047bc28u));
    t175 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xecu, t175);
    g->eax = t175;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    t176 = cow_thiscall(g, rd32(rd32(t175) + 0xa8u), rd32(t175), 2, t175, COW_IMG(0x1047bc28u));
    t177 = g->edx;
    eax = t176;
    edx = t177;
L_100471d2: ;
    COW_AT(100471d2)
    if (rd8(COW_IMG(0x1047bbe4u)) & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bbe4u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bbe4u));
    COW_AT(100471db)
        wr8(COW_IMG(0x1047bbe4u), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0xe4u;
        t178 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bbb8u), 0);
        t179 = g->ecx;
        t180 = g->edx;
        eax = t178;
        ecx = t179;
        edx = t180;
    COW_AT(100471f0)
        wr32(sp0 - 0xe8u, COW_IMG(0x100472d0u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe4u;
        t181 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100472d0u));
        t182 = g->edx;
        eax = t181;
        edx = t182;
    COW_AT(100471fa)
    }
    COW_AT(100471fd)
    wr32(sp0 - 0xe8u, COW_IMG(0x10353598u));
    g->esp = sp0 - 0xe4u;
    cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047bbb8u), edx, 1, COW_IMG(0x10353598u));
    COW_AT(1004720c)
    t183 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t184 = rd32(COW_IMG(0x1047cf7cu));
    t185 = rd32(sp0 - 0xe0u);
    t186 = rd32(sp0 - 0xe4u);
    wr32(t184 + 0xa90u, t183);
    wr32(t183 * 4u + t184 + 0xa10u, ebx);
    g->ebx = rd32(sp0 - 0xdcu);
    g->esi = t186;
    g->edi = edi;
    g->ebp = t185;
    return t184 & 0xffffff00u;
L_100468a5: ;
    COW_AT(100468a5)
    wr32(sp0 - 0xe8u, 5u);
    wr32(sp0 - 0xecu, 0x13u);
    t33 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t33);
    t34 = rd32(t33);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t34 + 0xc8u), t34, 3, t33, 0x13u, 5u);
    t35 = g->ecx;
    ecx = t35;
    COW_AT(100468bd)
    wr32(sp0 - 0xe8u, 2u);
    loc_e8 = 2u;
    goto L_100469a0;
L_100468c4: ;
    COW_AT(100468c4)
    wr32(sp0 - 0xe8u, 1u);
    loc_e8 = 1u;
L_10046988: ;
    COW_AT(10046988)
    wr32(sp0 - 0xecu, 0x13u);
    t30 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t30);
    t31 = rd32(t30);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t31 + 0xc8u), t31, 3, t30, 0x13u, loc_e8);
    t32 = g->ecx;
    ecx = t32;
    COW_AT(1004699e)
    wr32(sp0 - 0xe8u, 6u);
    loc_e8 = 6u;
    goto L_100469a0;
L_100468cb: ;
    COW_AT(100468cb)
    wr32(sp0 - 0xe8u, 5u);
    wr32(sp0 - 0xecu, 0x13u);
    t24 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t24);
    t25 = rd32(t24);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t25 + 0xc8u), t25, 3, t24, 0x13u, 5u);
    t26 = g->ecx;
    ecx = t26;
    COW_AT(100468e3)
    wr32(sp0 - 0xe8u, 6u);
    loc_e8 = 6u;
L_10046901: ;
    COW_AT(10046901)
    wr32(sp0 - 0xecu, 0x14u);
    t27 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t27);
    g->edx = rd32(t27);
    t28 = rd32(t27);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t28 + 0xc8u), ecx, 3, t27, 0x14u, loc_e8);
    t29 = g->edx;
    edx = t29;
    COW_AT(10046917)
    if ((int32_t)(esi >> 7u & 0xfffffffeu) > 255)
    {
        eax = 0xffu;
    }
    else
    {
        esi = esi >> 7u & 0xfffffffeu;
    COW_AT(1004692a)
        eax = esi;
    }
    COW_AT(1004692c)
    wr8(COW_IMG(0x1047bc0fu), (uint8_t)eax);
    goto L_100469b6;
L_100468e7: ;
    COW_AT(100468e7)
    wr32(sp0 - 0xe8u, 5u);
    wr32(sp0 - 0xecu, 0x13u);
    t21 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t21);
    t22 = rd32(t21);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t22 + 0xc8u), t22, 3, t21, 0x13u, 5u);
    t23 = g->ecx;
    ecx = t23;
    COW_AT(100468ff)
    wr32(sp0 - 0xe8u, 2u);
    loc_e8 = 2u;
    goto L_10046901;
L_10046936: ;
    COW_AT(10046936)
    if ((uint8_t)ecx == 0x62u)
    {
    COW_AT(1004693b)
        wr8(COW_IMG(0x1047bc0fu), (uint8_t)(ecx >> 8u));
        eax = (uint8_t)(ecx >> 8u);
    }
L_10046944: ;
    COW_AT(10046944)
    wr32(sp0 - 0xe8u, 1u);
    g->esi = esi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    t19 = cow_thiscall(g, COW_IMG(0x10046550u), self, 1, 1u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(1004694d)
    goto L_100469b6;
L_1004694f: ;
    COW_AT(1004694f)
    wr32(sp0 - 0xe8u, 5u);
    wr32(sp0 - 0xecu, 0x13u);
    t12 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t12);
    t13 = rd32(t12);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(t13 + 0xc8u), t13, 3, t12, 0x13u, 5u);
    t14 = g->ecx;
    ecx = t14;
    COW_AT(10046967)
    wr32(sp0 - 0xe8u, 2u);
    wr32(sp0 - 0xecu, 0x14u);
    t15 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0xf0u, t15);
    g->eax = t15;
    g->edx = rd32(t15);
    t16 = rd32(t15);
    g->esp = sp0 - 0xe4u;
    t17 = cow_thiscall(g, rd32(t16 + 0xc8u), ecx, 3, t15, 0x14u, 2u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(1004697f)
    wr8(sp0 - 0xd5u, 1u);
    goto L_100469b6;
L_10046986: ;
    COW_AT(10046986)
    wr32(sp0 - 0xe8u, 5u);
    loc_e8 = 5u;
    goto L_10046988;
L_10046c45: ;
    COW_AT(10046c45)
    wr32(sp0 - 0xecu, 0u);
    wr32(sp0 - 0xf0u, 0u);
    wr32(sp0 - 0xf4u, sp0 - 0xd0u);
    loc_ec = 0u;
    goto L_10046c4e;
L_10046cf7: ;
    COW_AT(10046cf7)
    wr32(sp0 - 0xecu, sp0 - 0x68u);
    wr32(sp0 - 0xf0u, sp0 - 0xd0u);
    g->esp = sp0 - 0xe8u;
    cow_thiscall(g, COW_IMG(0x10188b70u), rd32(COW_IMG(0x1065cb04u)), 2, sp0 - 0xd0u, sp0 - 0x68u);
    goto L_10046d0f;
L_10047016: ;
    COW_AT(10047016)
    wr32(sp0 - 0xe8u, 0u);
    loc_e8 = 0u;
    goto L_10047018;
L_1004718d: ;
    COW_AT(1004718d)
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 0u);
    wr32(sp0 - 0xf0u, sp0 - 0xd4u);
    edx = sp0 - 0xd4u;
    loc_e8 = 0u;
    goto L_10047196;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100467e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100467fbu:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 0xe0u);
        in_ebx = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xd4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1004680au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 0xe0u);
        in_ebx = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xd4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1004683bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046853u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046877u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046886u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004689eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100468a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100468bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100468c4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100468cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100468e3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100468e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100468ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046901u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046917u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004692au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004692cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046936u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004693bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046944u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004694du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004694fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046967u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004697fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046986u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046988u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x1004699eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100469a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100469b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100469bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100469cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100469e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100469ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046a17u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046a2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046a47u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046a54u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046a56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046a63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046a72u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        in_edi = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046a79u:
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046aa2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10046aa6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10046aacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10046ab0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10046ab2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10046abcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10046acau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10046aceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10046ad5u:
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046ad9u:
    {
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046afbu:
    {
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046b18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046b1eu:
    {
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
        g->esp = sp0 - 0xecu;
        (void)sp0;
        return 1;
    }
    case 0x10046b2fu:
    {
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046b4cu:
    {
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046b5eu:
    {
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046b67u:
    {
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046b74u:
    {
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046bc1u:
    {
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
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046bdeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046bfbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046c15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046c19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046c1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046c22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046c34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046c45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046c4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xf0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10046c59u:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10046c6fu:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x10046c87u:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10046c9fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046cb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046cbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046cc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046cc6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046cd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046cd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046cd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046cf5u:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xf0u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10046cf7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046d0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046d25u:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0x90u);
        wr32(sp0 - 0xecu, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x10046d41u:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0x28u);
        wr32(sp0 - 0xecu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x10046d59u:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0x28u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10046d71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046d8bu:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xecu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10046da4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046dbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046dd5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046deeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046e07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046e20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046e39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046e51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046e6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046e6eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        in_edi = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046e89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046ea1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046ec2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046ed3u:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xecu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10046f4du:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xfcu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10046f68u:
    {
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
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xfcu, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10046f6au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046f7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046f92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046faau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10046fb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046fd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046fe8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046fedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046ff7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10046ffcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047000u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004700bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047016u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047018u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x10047034u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047039u:
    {
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047051u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047067u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004707du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047095u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100470adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100470afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100470b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100470cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100470e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047102u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004710fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047111u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004711eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047126u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004713fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004714du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047156u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047160u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047165u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047169u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004717bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004718du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10047196u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100471a1u:
    {
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
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100471bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100471d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100471dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100471f0u:
    {
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100471fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100471fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1004720cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100467e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100467e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
