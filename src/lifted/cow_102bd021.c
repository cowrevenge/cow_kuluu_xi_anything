/* f_0x102bd021 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bd021(Guest* g)
{
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
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
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
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bd034u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bd034;
    case 0x102bd04bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd04b;
    case 0x102bd060u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd060;
    case 0x102bd067u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd067;
    case 0x102bd06cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd06c;
    case 0x102bd07du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102bd07d;
    case 0x102bd084u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102bd084;
    case 0x102bd08bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102bd08b;
    case 0x102bd090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_102bd090;
    case 0x102bd096u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd096;
    case 0x102bd098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd098;
    case 0x102bd09du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd09d;
    case 0x102bd0a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd0a1;
    case 0x102bd0afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_102bd0af;
    case 0x102bd0b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd0b8;
    case 0x102bd0c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd0c0;
    case 0x102bd0ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd0ce;
    case 0x102bd0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd0d9;
    case 0x102bd0e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd0e4;
    case 0x102bd0e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bd0e6;
    case 0x102bd0f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd0f8;
    case 0x102bd0ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd0ff;
    case 0x102bd109u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd109;
    case 0x102bd10eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd10e;
    case 0x102bd120u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd120;
    case 0x102bd127u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd127;
    case 0x102bd131u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd131;
    case 0x102bd136u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd136;
    case 0x102bd143u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd143;
    case 0x102bd150u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd150;
    case 0x102bd15bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd15b;
    case 0x102bd162u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd162;
    case 0x102bd165u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd165;
    case 0x102bd16fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd16f;
    case 0x102bd181u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd181;
    case 0x102bd188u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd188;
    case 0x102bd191u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd191;
    case 0x102bd19du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd19d;
    case 0x102bd1a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd1a8;
    case 0x102bd1b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd1b3;
    case 0x102bd1b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bd1b8;
    case 0x102bd1beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd1be;
    case 0x102bd1c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd1c5;
    case 0x102bd1d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd1d0;
    case 0x102bd1d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd1d7;
    case 0x102bd1e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd1e1;
    case 0x102bd1e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd1e6;
    case 0x102bd1f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd1f8;
    case 0x102bd203u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd203;
    case 0x102bd215u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd215;
    case 0x102bd21cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd21c;
    case 0x102bd226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd226;
    case 0x102bd22bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd22b;
    case 0x102bd23du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd23d;
    case 0x102bd244u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd244;
    case 0x102bd24eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd24e;
    case 0x102bd253u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd253;
    case 0x102bd265u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd265;
    case 0x102bd26cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd26c;
    case 0x102bd276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd276;
    case 0x102bd27bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd27b;
    case 0x102bd28du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd28d;
    case 0x102bd294u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd294;
    case 0x102bd29eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd29e;
    case 0x102bd2a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd2a3;
    case 0x102bd2b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd2b5;
    case 0x102bd2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd2bc;
    case 0x102bd2c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd2c6;
    case 0x102bd2cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd2cb;
    case 0x102bd2ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd2dd;
    case 0x102bd2e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd2e4;
    case 0x102bd2eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd2ee;
    case 0x102bd2f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd2f3;
    case 0x102bd305u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd305;
    case 0x102bd30cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd30c;
    case 0x102bd316u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd316;
    case 0x102bd31bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd31b;
    case 0x102bd32du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd32d;
    case 0x102bd334u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd334;
    case 0x102bd33eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd33e;
    case 0x102bd343u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd343;
    case 0x102bd355u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd355;
    case 0x102bd35cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd35c;
    case 0x102bd366u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd366;
    case 0x102bd36bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd36b;
    case 0x102bd37du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd37d;
    case 0x102bd384u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd384;
    case 0x102bd38eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd38e;
    case 0x102bd393u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd393;
    case 0x102bd3a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3a5;
    case 0x102bd3acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3ac;
    case 0x102bd3b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3b6;
    case 0x102bd3bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3bb;
    case 0x102bd3cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3cd;
    case 0x102bd3d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3d4;
    case 0x102bd3deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3de;
    case 0x102bd3e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3e3;
    case 0x102bd3f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3f5;
    case 0x102bd3fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd3fc;
    case 0x102bd406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd406;
    case 0x102bd408u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd408;
    case 0x102bd41au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd41a;
    case 0x102bd421u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd421;
    case 0x102bd42bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd42b;
    case 0x102bd42du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd42d;
    case 0x102bd43fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd43f;
    case 0x102bd446u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd446;
    case 0x102bd450u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd450;
    case 0x102bd452u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd452;
    case 0x102bd464u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd464;
    case 0x102bd470u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bd470;
    case 0x102bd475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd475;
    case 0x102bd47du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bd47d;
    case 0x102bd482u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bd482;
    case 0x102bd484u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd484;
    case 0x102bd48du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd48d;
    case 0x102bd491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd491;
    case 0x102bd49bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd49b;
    case 0x102bd4a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd4a2;
    case 0x102bd4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd4a9;
    case 0x102bd4b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd4b2;
    case 0x102bd4b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd4b6;
    case 0x102bd4bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bd4bb;
    case 0x102bd4c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102bd4c1;
    case 0x102bd4c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd4c3;
    case 0x102bd4ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102bd4cc;
    default: break;
    }
#endif

    COW_AT(102bd021)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd8(rd32(sp0 + 4u) + 0x12cu) >= 8u)
    {
        ecx = self;
        edx = in_edx;
        esi = rd32(sp0 + 4u);
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 0x12cu);
        esi = rd32(sp0 + 4u);
    COW_AT(102bd034)
        wr32(sp0 - 0x14u, 8u);
        t1 = 8u - (uint8_t)eax;
        wr32(sp0 - 0x14u, t1);
        t2 = (uint8_t)eax + rd32(sp0 + 8u) + 0x20u;
        wr32(sp0 - 0x18u, t2);
        wr32(sp0 - 0x1cu, esi);
        g->ecx = self;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x102c3c7du), g->eax, g->ecx, in_edx, 1, 3, esi, t2, t1);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
        ebx = (uint8_t)eax;
        edi = t1;
    COW_AT(102bd04b)
        wr32(sp0 - 0x20u, edi);
        wr32(sp0 - 0x24u, ebx);
        t5 = rd32(sp0 + 8u) + 0x20u;
        wr32(sp0 - 0x28u, t5);
        wr8(esi + 0x12cu, 8u);
        g->eax = t5;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x102c354eu), ecx, 5, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    COW_AT(102bd060)
        if (eax != 0u)
        {
    COW_AT(102bd067)
            if (ebx >= 4u) goto L_102bd08b;
    COW_AT(102bd06c)
            wr32(sp0 - 0x14u, edi - 4u);
            wr32(sp0 - 0x18u, ebx);
            t9 = rd32(sp0 + 8u) + 0x20u;
            wr32(sp0 - 0x1cu, t9);
            g->eax = t9;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t10 = cow_thiscall_cdecl(g, COW_IMG(0x102c354eu), ecx, 5, t9, ebx, edi - 4u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
    COW_AT(102bd07d)
            if (eax == 0u) goto L_102bd08b;
    COW_AT(102bd084)
            wr32(sp0 - 0x14u, COW_IMG(0x103c7e80u));
            loc_14 = COW_IMG(0x103c7e80u);
L_102bd090: ;
    COW_AT(102bd090)
            wr32(sp0 - 0x18u, esi);
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
            t13 = g->edx;
            edx = t13;
    COW_AT(102bd096)
            ecx = rd32(sp0 - 0x14u);
        }
    COW_AT(102bd098)
        if (ebx >= 3u)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
    COW_AT(102bd09d)
            t14 = rd8(esi + 0x69u);
            wr8(esi + 0x69u, (uint8_t)(t14 | 0x10u));
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
L_102bd0a1: ;
    COW_AT(102bd0a1)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c3c7du), g->eax, g->ecx, edx, 1, 3, esi, sp0 + 4u, 4u);
    t15 = g->ecx;
    t16 = g->edx;
    ecx = t15;
    edx = t16;
    COW_AT(102bd0af)
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t17 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(102bd0b8)
    wr32(sp0 - 0x24u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102c3647u), 1, esi);
    t20 = g->ecx;
    t21 = g->edx;
    ecx = t20;
    edx = t21;
    ebx = eax;
    COW_AT(102bd0c0)
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi + 0x11cu);
    wr32(sp0 - 0x30u, esi);
    g->eax = esi + 0x11cu;
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    t22 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, esi, esi + 0x11cu, 4u, rd32(sp0 - 0x24u), sp0 + 4u);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(102bd0ce)
    if (ebx > 0x7fffffffu)
    {
    COW_AT(102bd0d9)
        wr32(sp0 - 0x14u, COW_IMG(0x103c7e40u));
        wr32(sp0 - 0x18u, esi);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, COW_IMG(0x103c7e40u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t25 = g->edx;
        edx = t25;
    COW_AT(102bd0e4)
        ecx = COW_IMG(0x103c7e40u);
    }
    COW_AT(102bd0e6)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e04u));
    wr32(sp0 - 0x1cu, esi + 0x11cu);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e04u), 4u);
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(102bd0f8)
    if (eax != 0u) goto L_102bd10e;
    COW_AT(102bd0ff)
    wr32(sp0 - 0x14u, ebx);
    t29 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t29);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c49bfu), g->eax, g->ecx, edx, 1, 3, esi, t29, ebx);
    t30 = g->ecx;
    t31 = g->edx;
    ecx = t30;
    edx = t31;
    COW_AT(102bd109)
L_102bd475: ;
    COW_AT(102bd475)
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_102bd0a1;
L_102bd08b: ;
    COW_AT(102bd08b)
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e58u));
    loc_14 = COW_IMG(0x103c7e58u);
    goto L_102bd090;
L_102bd10e: ;
    COW_AT(102bd10e)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e14u));
    wr32(sp0 - 0x1cu, esi + 0x11cu);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t32 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e14u), 4u);
    t33 = g->ecx;
    t34 = g->edx;
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(102bd120)
    if (eax != 0u) goto L_102bd136;
    COW_AT(102bd127)
    wr32(sp0 - 0x14u, ebx);
    t35 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t35);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c4c1au), g->eax, g->ecx, edx, 1, 3, esi, t35, ebx);
    t36 = g->ecx;
    t37 = g->edx;
    ecx = t36;
    edx = t37;
    COW_AT(102bd131)
    goto L_102bd475;
L_102bd136: ;
    COW_AT(102bd136)
    wr32(sp0 - 0x14u, esi + 0x11cu);
    wr32(sp0 - 0x18u, esi);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t38 = cow_cdecl(g, COW_IMG(0x102c3bfau), 2, esi, esi + 0x11cu);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(102bd143)
    t40 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x14u, 4u);
    if (eax == 0u)
    {
        eax = esi + 0x11cu;
        ecx = t40;
        goto L_102bd1c5;
    }
    eax = esi + 0x11cu;
    ecx = t40;
    COW_AT(102bd150)
    wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
    wr32(sp0 - 0x1cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, eax, COW_IMG(0x10342e0cu), 4u);
    t42 = g->ecx;
    t43 = g->edx;
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(102bd15b)
    if (eax == 0u)
    {
    COW_AT(102bd162)
        t44 = rd32(esi + 0x68u);
        wr32(esi + 0x68u, t44 | 4u);
    }
    COW_AT(102bd165)
    wr32(sp0 - 0x14u, ebx);
    t45 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t45);
    wr32(sp0 - 0x1cu, esi);
    g->ebx = ebx;
    g->esp = sp0 - 0x10u;
    t46 = cow_call_regs(g, COW_IMG(0x102c627du), eax, ecx, edx, 1, 3, esi, t45, ebx);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    COW_AT(102bd16f)
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, COW_IMG(0x10342e1cu));
    wr32(sp0 - 0x28u, esi + 0x11cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t49 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e1cu), 4u);
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    ebx = esi + 0x11cu;
    COW_AT(102bd181)
    if (eax != 0u) goto L_102bd191;
    COW_AT(102bd188)
    t52 = rd32(esi + 0x68u);
    wr32(esi + 0x68u, t52 | 2u);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_102bd0a1;
L_102bd191: ;
    COW_AT(102bd191)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
    wr32(sp0 - 0x1cu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t53 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, ebx, COW_IMG(0x10342e0cu), 4u);
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(102bd19d)
    if (eax != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102bd0a1;
    }
    COW_AT(102bd1a8)
    if (rd32(esi + 0x68u) & 1u)
    {
        eax = rd32(esi + 0x68u);
        goto L_102bd484;
    }
    eax = rd32(esi + 0x68u);
    COW_AT(102bd1b3)
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e24u));
    loc_14 = COW_IMG(0x103c7e24u);
L_102bd1b8: ;
    COW_AT(102bd1b8)
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    COW_AT(102bd1be)
L_102bd4cc: ;
    COW_AT(102bd4cc)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102bd1c5: ;
    COW_AT(102bd1c5)
    wr32(sp0 - 0x18u, COW_IMG(0x10342e1cu));
    wr32(sp0 - 0x1cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t57 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, eax, COW_IMG(0x10342e1cu), 4u);
    t58 = g->ecx;
    t59 = g->edx;
    eax = t57;
    ecx = t58;
    edx = t59;
    COW_AT(102bd1d0)
    if (eax != 0u) goto L_102bd1e6;
    COW_AT(102bd1d7)
    wr32(sp0 - 0x14u, ebx);
    t60 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t60);
    wr32(sp0 - 0x1cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c4adbu), g->eax, ecx, edx, 1, 3, esi, t60, ebx);
    t61 = g->ecx;
    t62 = g->edx;
    ecx = t61;
    edx = t62;
    COW_AT(102bd1e1)
    goto L_102bd475;
L_102bd1e6: ;
    COW_AT(102bd1e6)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
    wr32(sp0 - 0x1cu, esi + 0x11cu);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t63 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e0cu), 4u);
    t64 = g->ecx;
    t65 = g->edx;
    eax = t63;
    ecx = t64;
    edx = t65;
    COW_AT(102bd1f8)
    if (eax == 0u) goto L_102bd49b;
    COW_AT(102bd203)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e24u));
    wr32(sp0 - 0x1cu, esi + 0x11cu);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t66 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e24u), 4u);
    t67 = g->ecx;
    t68 = g->edx;
    eax = t66;
    ecx = t67;
    edx = t68;
    COW_AT(102bd215)
    if (eax != 0u)
    {
    COW_AT(102bd22b)
        wr32(sp0 - 0x14u, 4u);
        wr32(sp0 - 0x18u, COW_IMG(0x10342e2cu));
        wr32(sp0 - 0x1cu, esi + 0x11cu);
        g->eax = esi + 0x11cu;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t72 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e2cu), 4u);
        t73 = g->ecx;
        t74 = g->edx;
        eax = t72;
        ecx = t73;
        edx = t74;
    COW_AT(102bd23d)
        if (eax != 0u)
        {
    COW_AT(102bd253)
            wr32(sp0 - 0x14u, 4u);
            wr32(sp0 - 0x18u, COW_IMG(0x10342e34u));
            wr32(sp0 - 0x1cu, esi + 0x11cu);
            g->eax = esi + 0x11cu;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t78 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e34u), 4u);
            t79 = g->ecx;
            t80 = g->edx;
            eax = t78;
            ecx = t79;
            edx = t80;
    COW_AT(102bd265)
            if (eax != 0u)
            {
    COW_AT(102bd27b)
                wr32(sp0 - 0x14u, 4u);
                wr32(sp0 - 0x18u, COW_IMG(0x10342e3cu));
                wr32(sp0 - 0x1cu, esi + 0x11cu);
                g->eax = esi + 0x11cu;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t84 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e3cu), 4u);
                t85 = g->ecx;
                t86 = g->edx;
                eax = t84;
                ecx = t85;
                edx = t86;
    COW_AT(102bd28d)
                if (eax != 0u)
                {
    COW_AT(102bd2a3)
                    wr32(sp0 - 0x14u, 4u);
                    wr32(sp0 - 0x18u, COW_IMG(0x10342e54u));
                    wr32(sp0 - 0x1cu, esi + 0x11cu);
                    g->eax = esi + 0x11cu;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t90 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e54u), 4u);
                    t91 = g->ecx;
                    t92 = g->edx;
                    eax = t90;
                    ecx = t91;
                    edx = t92;
    COW_AT(102bd2b5)
                    if (eax != 0u)
                    {
    COW_AT(102bd2cb)
                        wr32(sp0 - 0x14u, 4u);
                        wr32(sp0 - 0x18u, COW_IMG(0x10342e5cu));
                        wr32(sp0 - 0x1cu, esi + 0x11cu);
                        g->eax = esi + 0x11cu;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t96 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e5cu), 4u);
                        t97 = g->ecx;
                        t98 = g->edx;
                        eax = t96;
                        ecx = t97;
                        edx = t98;
    COW_AT(102bd2dd)
                        if (eax != 0u)
                        {
    COW_AT(102bd2f3)
                            wr32(sp0 - 0x14u, 4u);
                            wr32(sp0 - 0x18u, COW_IMG(0x10342e64u));
                            wr32(sp0 - 0x1cu, esi + 0x11cu);
                            g->eax = esi + 0x11cu;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t102 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e64u), 4u);
                            t103 = g->ecx;
                            t104 = g->edx;
                            eax = t102;
                            ecx = t103;
                            edx = t104;
    COW_AT(102bd305)
                            if (eax != 0u)
                            {
    COW_AT(102bd31b)
                                wr32(sp0 - 0x14u, 4u);
                                wr32(sp0 - 0x18u, COW_IMG(0x10342e6cu));
                                wr32(sp0 - 0x1cu, esi + 0x11cu);
                                g->eax = esi + 0x11cu;
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t108 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e6cu), 4u);
                                t109 = g->ecx;
                                t110 = g->edx;
                                eax = t108;
                                ecx = t109;
                                edx = t110;
    COW_AT(102bd32d)
                                if (eax != 0u)
                                {
    COW_AT(102bd343)
                                    wr32(sp0 - 0x14u, 4u);
                                    wr32(sp0 - 0x18u, COW_IMG(0x10342e74u));
                                    wr32(sp0 - 0x1cu, esi + 0x11cu);
                                    g->eax = esi + 0x11cu;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x10u;
                                    t114 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e74u), 4u);
                                    t115 = g->ecx;
                                    t116 = g->edx;
                                    eax = t114;
                                    ecx = t115;
                                    edx = t116;
    COW_AT(102bd355)
                                    if (eax != 0u)
                                    {
    COW_AT(102bd36b)
                                        wr32(sp0 - 0x14u, 4u);
                                        wr32(sp0 - 0x18u, COW_IMG(0x10342e84u));
                                        wr32(sp0 - 0x1cu, esi + 0x11cu);
                                        g->eax = esi + 0x11cu;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x10u;
                                        t120 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e84u), 4u);
                                        t121 = g->ecx;
                                        t122 = g->edx;
                                        eax = t120;
                                        ecx = t121;
                                        edx = t122;
    COW_AT(102bd37d)
                                        if (eax != 0u)
                                        {
    COW_AT(102bd393)
                                            wr32(sp0 - 0x14u, 4u);
                                            wr32(sp0 - 0x18u, COW_IMG(0x10342e44u));
                                            wr32(sp0 - 0x1cu, esi + 0x11cu);
                                            g->eax = esi + 0x11cu;
                                            g->edx = edx;
                                            g->esp = sp0 - 0x10u;
                                            t126 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e44u), 4u);
                                            t127 = g->ecx;
                                            t128 = g->edx;
                                            eax = t126;
                                            ecx = t127;
                                            edx = t128;
    COW_AT(102bd3a5)
                                            if (eax != 0u)
                                            {
    COW_AT(102bd3bb)
                                                wr32(sp0 - 0x14u, 4u);
                                                wr32(sp0 - 0x18u, COW_IMG(0x10342e7cu));
                                                wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                g->eax = esi + 0x11cu;
                                                g->edx = edx;
                                                g->esp = sp0 - 0x10u;
                                                t132 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e7cu), 4u);
                                                t133 = g->ecx;
                                                t134 = g->edx;
                                                eax = t132;
                                                ecx = t133;
                                                edx = t134;
    COW_AT(102bd3cd)
                                                if (eax != 0u)
                                                {
    COW_AT(102bd3e3)
                                                    wr32(sp0 - 0x14u, 4u);
                                                    wr32(sp0 - 0x18u, COW_IMG(0x10342e8cu));
                                                    wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                    g->eax = esi + 0x11cu;
                                                    g->edx = edx;
                                                    g->esp = sp0 - 0x10u;
                                                    t138 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e8cu), 4u);
                                                    t139 = g->ecx;
                                                    t140 = g->edx;
                                                    eax = t138;
                                                    ecx = t139;
                                                    edx = t140;
    COW_AT(102bd3f5)
                                                    if (eax != 0u)
                                                    {
    COW_AT(102bd408)
                                                        wr32(sp0 - 0x14u, 4u);
                                                        wr32(sp0 - 0x18u, COW_IMG(0x10342e94u));
                                                        wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                        g->eax = esi + 0x11cu;
                                                        g->edx = edx;
                                                        g->esp = sp0 - 0x10u;
                                                        t144 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e94u), 4u);
                                                        t145 = g->ecx;
                                                        t146 = g->edx;
                                                        eax = t144;
                                                        ecx = t145;
                                                        edx = t146;
    COW_AT(102bd41a)
                                                        if (eax != 0u)
                                                        {
    COW_AT(102bd42d)
                                                            wr32(sp0 - 0x14u, 4u);
                                                            wr32(sp0 - 0x18u, COW_IMG(0x10342e9cu));
                                                            wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                            g->eax = esi + 0x11cu;
                                                            g->edx = edx;
                                                            g->esp = sp0 - 0x10u;
                                                            t150 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e9cu), 4u);
                                                            t151 = g->ecx;
                                                            t152 = g->edx;
                                                            eax = t150;
                                                            ecx = t151;
                                                            edx = t152;
    COW_AT(102bd43f)
                                                            if (eax != 0u)
                                                            {
    COW_AT(102bd452)
                                                                wr32(sp0 - 0x14u, 4u);
                                                                wr32(sp0 - 0x18u, COW_IMG(0x10342ea4u));
                                                                wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                                g->eax = esi + 0x11cu;
                                                                g->edx = edx;
                                                                g->esp = sp0 - 0x10u;
                                                                t156 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342ea4u), 4u);
                                                                t157 = g->ecx;
                                                                t158 = g->edx;
                                                                eax = t156;
                                                                ecx = t157;
                                                                edx = t158;
    COW_AT(102bd464)
                                                                wr32(sp0 - 0x14u, ebx);
                                                                t159 = rd32(sp0 + 8u);
                                                                wr32(sp0 - 0x18u, t159);
                                                                wr32(sp0 - 0x1cu, esi);
                                                                if (eax != 0u)
                                                                {
                                                                    loc_18 = t159;
                                                                    loc_14 = ebx;
                                                                    loc_1c = esi;
    COW_AT(102bd47d)
                                                                    g->ebx = ebx;
                                                                    g->esp = sp0 - 0x10u;
                                                                    cow_call_regs(g, COW_IMG(0x102c627du), eax, ecx, edx, 1, 3, loc_1c, loc_18, loc_14);
                                                                    t162 = g->ecx;
                                                                    t163 = g->edx;
                                                                    ecx = t162;
                                                                    edx = t163;
    COW_AT(102bd482)
                                                                }
                                                                else
                                                                {
                                                                    loc_18 = t159;
                                                                    loc_14 = ebx;
                                                                    loc_1c = esi;
    COW_AT(102bd470)
                                                                    g->esp = sp0 - 0x10u;
                                                                    cow_call_regs(g, COW_IMG(0x102c6136u), g->eax, ecx, edx, 1, 3, loc_1c, loc_18, loc_14);
                                                                    t160 = g->ecx;
                                                                    t161 = g->edx;
                                                                    ecx = t160;
                                                                    edx = t161;
                                                                }
                                                            }
                                                            else
                                                            {
    COW_AT(102bd446)
                                                                wr32(sp0 - 0x14u, ebx);
                                                                t153 = rd32(sp0 + 8u);
                                                                wr32(sp0 - 0x18u, t153);
                                                                wr32(sp0 - 0x1cu, esi);
                                                                g->ecx = ecx;
                                                                g->esp = sp0 - 0xcu;
                                                                cow_call_regs(g, COW_IMG(0x102c5728u), g->eax, g->ecx, edx, 1, 4, esi, t153, ebx, rd32(sp0 - 0x10u));
                                                                t154 = g->ecx;
                                                                t155 = g->edx;
                                                                ecx = t154;
                                                                edx = t155;
    COW_AT(102bd450)
                                                            }
                                                        }
                                                        else
                                                        {
    COW_AT(102bd421)
                                                            wr32(sp0 - 0x14u, ebx);
                                                            t147 = rd32(sp0 + 8u);
                                                            wr32(sp0 - 0x18u, t147);
                                                            wr32(sp0 - 0x1cu, esi);
                                                            g->ecx = ecx;
                                                            g->esp = sp0 - 0xcu;
                                                            cow_call_regs(g, COW_IMG(0x102c5f85u), g->eax, g->ecx, edx, 1, 4, esi, t147, ebx, rd32(sp0 - 0x10u));
                                                            t148 = g->ecx;
                                                            t149 = g->edx;
                                                            ecx = t148;
                                                            edx = t149;
    COW_AT(102bd42b)
                                                        }
                                                    }
                                                    else
                                                    {
    COW_AT(102bd3fc)
                                                        wr32(sp0 - 0x14u, ebx);
                                                        t141 = rd32(sp0 + 8u);
                                                        wr32(sp0 - 0x18u, t141);
                                                        wr32(sp0 - 0x1cu, esi);
                                                        g->esp = sp0 - 0x10u;
                                                        cow_call_regs(g, COW_IMG(0x102c6037u), g->eax, ecx, edx, 1, 3, esi, t141, ebx);
                                                        t142 = g->ecx;
                                                        t143 = g->edx;
                                                        ecx = t142;
                                                        edx = t143;
    COW_AT(102bd406)
                                                    }
                                                }
                                                else
                                                {
    COW_AT(102bd3d4)
                                                    wr32(sp0 - 0x14u, ebx);
                                                    t135 = rd32(sp0 + 8u);
                                                    wr32(sp0 - 0x18u, t135);
                                                    wr32(sp0 - 0x1cu, esi);
                                                    g->esp = sp0 - 0x10u;
                                                    cow_call_regs(g, COW_IMG(0x102c558au), g->eax, ecx, edx, 1, 3, esi, t135, ebx);
                                                    t136 = g->ecx;
                                                    t137 = g->edx;
                                                    ecx = t136;
                                                    edx = t137;
    COW_AT(102bd3de)
                                                }
                                            }
                                            else
                                            {
    COW_AT(102bd3ac)
                                                wr32(sp0 - 0x14u, ebx);
                                                t129 = rd32(sp0 + 8u);
                                                wr32(sp0 - 0x18u, t129);
                                                wr32(sp0 - 0x1cu, esi);
                                                g->esp = sp0 - 0x10u;
                                                cow_call_regs(g, COW_IMG(0x102c5423u), g->eax, ecx, edx, 1, 3, esi, t129, ebx);
                                                t130 = g->ecx;
                                                t131 = g->edx;
                                                ecx = t130;
                                                edx = t131;
    COW_AT(102bd3b6)
                                            }
                                        }
                                        else
                                        {
    COW_AT(102bd384)
                                            wr32(sp0 - 0x14u, ebx);
                                            t123 = rd32(sp0 + 8u);
                                            wr32(sp0 - 0x18u, t123);
                                            wr32(sp0 - 0x1cu, esi);
                                            g->ecx = ecx;
                                            g->esp = sp0 - 0xcu;
                                            cow_call_regs(g, COW_IMG(0x102c5254u), g->eax, g->ecx, edx, 1, 4, esi, t123, ebx, rd32(sp0 - 0x10u));
                                            t124 = g->ecx;
                                            t125 = g->edx;
                                            ecx = t124;
                                            edx = t125;
    COW_AT(102bd38e)
                                        }
                                    }
                                    else
                                    {
    COW_AT(102bd35c)
                                        wr32(sp0 - 0x14u, ebx);
                                        t117 = rd32(sp0 + 8u);
                                        wr32(sp0 - 0x18u, t117);
                                        wr32(sp0 - 0x1cu, esi);
                                        g->esp = sp0 - 0xcu;
                                        cow_call_regs(g, COW_IMG(0x102c4d70u), g->eax, ecx, edx, 1, 4, esi, t117, ebx, rd32(sp0 - 0x10u));
                                        t118 = g->ecx;
                                        t119 = g->edx;
                                        ecx = t118;
                                        edx = t119;
    COW_AT(102bd366)
                                    }
                                }
                                else
                                {
    COW_AT(102bd334)
                                    wr32(sp0 - 0x14u, ebx);
                                    t111 = rd32(sp0 + 8u);
                                    wr32(sp0 - 0x18u, t111);
                                    wr32(sp0 - 0x1cu, esi);
                                    g->ecx = ecx;
                                    g->esp = sp0 - 0xcu;
                                    cow_call_regs(g, COW_IMG(0x102c5b02u), g->eax, g->ecx, edx, 1, 4, esi, t111, ebx, rd32(sp0 - 0x10u));
                                    t112 = g->ecx;
                                    t113 = g->edx;
                                    ecx = t112;
                                    edx = t113;
    COW_AT(102bd33e)
                                }
                            }
                            else
                            {
    COW_AT(102bd30c)
                                wr32(sp0 - 0x14u, ebx);
                                t105 = rd32(sp0 + 8u);
                                wr32(sp0 - 0x18u, t105);
                                wr32(sp0 - 0x1cu, esi);
                                g->esp = sp0 - 0x10u;
                                cow_call_regs(g, COW_IMG(0x102c5e30u), g->eax, ecx, edx, 1, 3, esi, t105, ebx);
                                t106 = g->ecx;
                                t107 = g->edx;
                                ecx = t106;
                                edx = t107;
    COW_AT(102bd316)
                            }
                        }
                        else
                        {
    COW_AT(102bd2e4)
                            wr32(sp0 - 0x14u, ebx);
                            t99 = rd32(sp0 + 8u);
                            wr32(sp0 - 0x18u, t99);
                            wr32(sp0 - 0x1cu, esi);
                            g->esp = sp0 - 0x10u;
                            cow_call_regs(g, COW_IMG(0x102c5c44u), g->eax, ecx, edx, 1, 3, esi, t99, ebx);
                            t100 = g->ecx;
                            t101 = g->edx;
                            ecx = t100;
                            edx = t101;
    COW_AT(102bd2ee)
                        }
                    }
                    else
                    {
    COW_AT(102bd2bc)
                        wr32(sp0 - 0x14u, ebx);
                        t93 = rd32(sp0 + 8u);
                        wr32(sp0 - 0x18u, t93);
                        wr32(sp0 - 0x1cu, esi);
                        g->ecx = ecx;
                        g->esp = sp0 - 0xcu;
                        cow_call_regs(g, COW_IMG(0x102c5ba3u), g->eax, g->ecx, edx, 1, 4, esi, t93, ebx, rd32(sp0 - 0x10u));
                        t94 = g->ecx;
                        t95 = g->edx;
                        ecx = t94;
                        edx = t95;
    COW_AT(102bd2c6)
                    }
                }
                else
                {
    COW_AT(102bd294)
                    wr32(sp0 - 0x14u, ebx);
                    t87 = rd32(sp0 + 8u);
                    wr32(sp0 - 0x18u, t87);
                    wr32(sp0 - 0x1cu, esi);
                    g->ecx = ecx;
                    g->esp = sp0 - 0x10u;
                    cow_call_regs(g, COW_IMG(0x102c5a36u), g->eax, g->ecx, edx, 1, 3, esi, t87, ebx);
                    t88 = g->ecx;
                    t89 = g->edx;
                    ecx = t88;
                    edx = t89;
    COW_AT(102bd29e)
                }
            }
            else
            {
    COW_AT(102bd26c)
                wr32(sp0 - 0x14u, ebx);
                t81 = rd32(sp0 + 8u);
                wr32(sp0 - 0x18u, t81);
                wr32(sp0 - 0x1cu, esi);
                g->ecx = ecx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x102c4c5du), g->eax, g->ecx, edx, 1, 4, esi, t81, ebx, rd32(sp0 - 0x10u));
                t82 = g->ecx;
                t83 = g->edx;
                ecx = t82;
                edx = t83;
    COW_AT(102bd276)
            }
        }
        else
        {
    COW_AT(102bd244)
            wr32(sp0 - 0x14u, ebx);
            t75 = rd32(sp0 + 8u);
            wr32(sp0 - 0x18u, t75);
            wr32(sp0 - 0x1cu, esi);
            g->ecx = ecx;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x102c4e6eu), g->eax, g->ecx, edx, 1, 3, esi, t75, ebx);
            t76 = g->ecx;
            t77 = g->edx;
            ecx = t76;
            edx = t77;
    COW_AT(102bd24e)
        }
    }
    else
    {
    COW_AT(102bd21c)
        wr32(sp0 - 0x14u, ebx);
        t69 = rd32(sp0 + 8u);
        wr32(sp0 - 0x18u, t69);
        wr32(sp0 - 0x1cu, esi);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x102c58bdu), g->eax, ecx, edx, 1, 4, esi, t69, ebx, rd32(sp0 - 0x10u));
        t70 = g->ecx;
        t71 = g->edx;
        ecx = t70;
        edx = t71;
    COW_AT(102bd226)
    }
    goto L_102bd475;
L_102bd484: ;
    COW_AT(102bd484)
    t56 = rd8(esi + 0x126u);
    if ((uint8_t)t56 != 3u) goto L_102bd4cc;
    COW_AT(102bd48d)
    if ((eax & 2u) != 0u) goto L_102bd4cc;
    COW_AT(102bd491)
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e08u));
    loc_14 = COW_IMG(0x103c7e08u);
    goto L_102bd1b8;
L_102bd49b: ;
    COW_AT(102bd49b)
    if (rd32(esi + 0x68u) & 1u)
    {
        eax = rd32(esi + 0x68u);
        goto L_102bd4a9;
    }
    eax = rd32(esi + 0x68u);
    COW_AT(102bd4a2)
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e24u));
    loc_14 = COW_IMG(0x103c7e24u);
L_102bd4bb: ;
    COW_AT(102bd4bb)
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    COW_AT(102bd4c1)
L_102bd4c3: ;
    COW_AT(102bd4c3)
    t165 = rd32(esi + 0x68u);
    wr32(esi + 0x68u, t165 | 4u);
    wr32(esi + 0x10cu, ebx);
    goto L_102bd4cc;
L_102bd4a9: ;
    COW_AT(102bd4a9)
    t164 = rd8(esi + 0x126u);
    if ((uint8_t)t164 != 3u) goto L_102bd4c3;
    COW_AT(102bd4b2)
    if ((eax & 2u) != 0u) goto L_102bd4c3;
    COW_AT(102bd4b6)
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e08u));
    loc_14 = COW_IMG(0x103c7e08u);
    goto L_102bd4bb;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bd021(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bd034u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
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
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd04bu:
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd060u:
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
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd067u:
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd06cu:
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd07du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd084u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd08bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd090u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd096u:
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
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd098u:
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd09du:
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd0a1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd0afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd0b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd0c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd0ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd0d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd0e4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x14u, COW_IMG(0x103c7e40u));
        (void)sp0;
        return 1;
    }
    case 0x102bd0e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd0f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd0ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd109u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd10eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd120u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd127u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd131u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd136u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd143u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd150u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x14u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd15bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd162u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd165u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd16fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd181u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd188u:
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd191u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd19du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd1a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd1b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd1b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd1beu:
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
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd1c5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x14u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd1d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd1d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd1e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd1e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd1f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd203u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd215u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd21cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd226u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd22bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd23du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd244u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd24eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd253u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd265u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd26cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd276u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd27bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd28du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd294u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd29eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd2a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd2b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd2bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd2c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd2cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd2ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd2e4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd2eeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd2f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd305u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd30cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd316u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd31bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd32du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd334u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd33eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd343u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd355u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd35cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd366u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd36bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd37du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd384u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd38eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd393u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3e3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd3fcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd406u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd408u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd41au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd421u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd42bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd42du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd43fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd446u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd450u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd452u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd464u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd470u:
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
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd475u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd47du:
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
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd482u:
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd484u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd48du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd491u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bd49bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd4a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd4a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd4b2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd4b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd4bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd4c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd4c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd4ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102bd021(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102bd021(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
