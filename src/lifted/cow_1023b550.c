/* f_0x1023b550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1023b550(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t loc_114;
    uint32_t loc_118;
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
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
    uint32_t t192;
    uint32_t t193;
    uint32_t t194;
    uint32_t t195;
    uint32_t t196;
    uint32_t t197;
    uint32_t t198;
    uint32_t t199;
    uint32_t t2;
    uint32_t t20;
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t204;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t208;
    uint32_t t209;
    uint32_t t21;
    uint32_t t210;
    uint32_t t211;
    uint32_t t212;
    uint32_t t213;
    uint32_t t214;
    uint32_t t215;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 296u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023b56du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); in_edi = rd32(sp0 - 0x114u); in_esi = rd32(sp0 - 0x110u); in_ebx = rd32(sp0 - 0x108u); g->ebx = rd32(sp0 - 0x108u); g->edi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x110u); goto E_1023b56d;
    case 0x1023b57au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); in_edi = rd32(sp0 - 0x114u); in_esi = rd32(sp0 - 0x110u); in_ebx = rd32(sp0 - 0x108u); g->ebx = rd32(sp0 - 0x108u); g->edi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x110u); goto E_1023b57a;
    case 0x1023b587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b587;
    case 0x1023b589u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b589;
    case 0x1023b599u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b599;
    case 0x1023b59eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b59e;
    case 0x1023b5a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b5a5;
    case 0x1023b5aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b5aa;
    case 0x1023b5b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_1023b5b5;
    case 0x1023b5bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_1023b5bf;
    case 0x1023b5c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b5c6;
    case 0x1023b5d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b5d5;
    case 0x1023b5deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_1023b5de;
    case 0x1023b5e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b5e5;
    case 0x1023b5f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b5f4;
    case 0x1023b603u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b603;
    case 0x1023b612u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b612;
    case 0x1023b61cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b61c;
    case 0x1023b621u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b621;
    case 0x1023b625u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b625;
    case 0x1023b62au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b62a;
    case 0x1023b62cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b62c;
    case 0x1023b637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_1023b637;
    case 0x1023b646u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b646;
    case 0x1023b64cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b64c;
    case 0x1023b651u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b651;
    case 0x1023b65eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b65e;
    case 0x1023b66du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b66d;
    case 0x1023b67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b67c;
    case 0x1023b67eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b67e;
    case 0x1023b680u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b680;
    case 0x1023b68bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b68b;
    case 0x1023b68du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b68d;
    case 0x1023b6b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_1023b6b1;
    case 0x1023b6c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_1023b6c3;
    case 0x1023b6ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_1023b6cc;
    case 0x1023b6d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_1023b6d2;
    case 0x1023b6e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b6e2;
    case 0x1023b6e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b6e8;
    case 0x1023b6f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b6f3;
    case 0x1023b6feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b6fe;
    case 0x1023b702u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b702;
    case 0x1023b70du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b70d;
    case 0x1023b713u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b713;
    case 0x1023b71au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b71a;
    case 0x1023b71fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b71f;
    case 0x1023b72bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b72b;
    case 0x1023b737u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b737;
    case 0x1023b73bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b73b;
    case 0x1023b745u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023b745;
    case 0x1023b74fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b74f;
    case 0x1023b75au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b75a;
    case 0x1023b767u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b767;
    case 0x1023b774u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b774;
    case 0x1023b77fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b77f;
    case 0x1023b78au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b78a;
    case 0x1023b797u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b797;
    case 0x1023b799u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b799;
    case 0x1023b79eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b79e;
    case 0x1023b7a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b7a8;
    case 0x1023b7b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b7b3;
    case 0x1023b7b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b7b5;
    case 0x1023b7c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b7c0;
    case 0x1023b7c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b7c5;
    case 0x1023b7d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b7d6;
    case 0x1023b7ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b7dd;
    case 0x1023b7e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b7e3;
    case 0x1023b7f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b7f2;
    case 0x1023b801u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b801;
    case 0x1023b80eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b80e;
    case 0x1023b813u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b813;
    case 0x1023b81du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b81d;
    case 0x1023b828u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b828;
    case 0x1023b82fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b82f;
    case 0x1023b838u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b838;
    case 0x1023b83du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b83d;
    case 0x1023b843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b843;
    case 0x1023b852u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b852;
    case 0x1023b861u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b861;
    case 0x1023b868u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b868;
    case 0x1023b879u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b879;
    case 0x1023b881u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b881;
    case 0x1023b88bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b88b;
    case 0x1023b892u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b892;
    case 0x1023b898u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b898;
    case 0x1023b8a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b8a0;
    case 0x1023b8adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b8ad;
    case 0x1023b8afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b8af;
    case 0x1023b8b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b8b9;
    case 0x1023b8c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b8c0;
    case 0x1023b8c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b8c6;
    case 0x1023b8ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b8ce;
    case 0x1023b8dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b8db;
    case 0x1023b8e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b8e8;
    case 0x1023b8efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b8ef;
    case 0x1023b8f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b8f5;
    case 0x1023b8fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b8fd;
    case 0x1023b90au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b90a;
    case 0x1023b917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b917;
    case 0x1023b91eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b91e;
    case 0x1023b924u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b924;
    case 0x1023b92cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b92c;
    case 0x1023b933u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b933;
    case 0x1023b938u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b938;
    case 0x1023b93du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b93d;
    case 0x1023b943u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b943;
    case 0x1023b952u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b952;
    case 0x1023b961u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b961;
    case 0x1023b968u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b968;
    case 0x1023b979u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b979;
    case 0x1023b983u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b983;
    case 0x1023b98au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b98a;
    case 0x1023b990u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b990;
    case 0x1023b998u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b998;
    case 0x1023b9a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b9a5;
    case 0x1023b9abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b9ab;
    case 0x1023b9b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b9b3;
    case 0x1023b9b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b9b8;
    case 0x1023b9c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b9c9;
    case 0x1023b9d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b9d3;
    case 0x1023b9deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b9de;
    case 0x1023b9e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023b9e0;
    case 0x1023b9ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b9eb;
    case 0x1023b9f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b9f8;
    case 0x1023ba03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023ba03;
    case 0x1023ba10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023ba10;
    case 0x1023ba1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023ba1d;
    case 0x1023ba24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023ba24;
    case 0x1023ba31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023ba31;
    case 0x1023ba36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023ba36;
    case 0x1023ba3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023ba3f;
    case 0x1023ba49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023ba49;
    case 0x1023ba54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023ba54;
    case 0x1023ba61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023ba61;
    case 0x1023ba6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023ba6e;
    case 0x1023ba75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023ba75;
    case 0x1023ba82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023ba82;
    case 0x1023ba8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023ba8f;
    case 0x1023ba96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023ba96;
    case 0x1023baa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023baa5;
    case 0x1023bab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023bab4;
    case 0x1023babfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023babf;
    case 0x1023bac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023bac5;
    case 0x1023baccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023bacc;
    case 0x1023bad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023bad3;
    case 0x1023bae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023bae6;
    case 0x1023baf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023baf3;
    case 0x1023baffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023baff;
    case 0x1023bb06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023bb06;
    case 0x1023bb15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023bb15;
    case 0x1023bb24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023bb24;
    case 0x1023bb2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023bb2f;
    case 0x1023bb35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023bb35;
    case 0x1023bb3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023bb3c;
    case 0x1023bb4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023bb4d;
    case 0x1023bb5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1023bb5a;
    default: break;
    }
#endif

    COW_AT(1023b550)
    wr32(sp0 - 0x108u, in_ebx);
    wr32(sp0 - 0x10cu, in_ebp);
    wr32(sp0 - 0x110u, in_esi);
    wr32(sp0 - 0x114u, in_edi);
    wr32(sp0 - 0x118u, 1u);
    wr32(sp0 - 0x104u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b56du);
    t1 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 1u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1023b56d)
    if (rd32(sp0 + 0xcu) == 0u)
    {
        esi = eax;
        eax = rd32(sp0 + 0xcu);
        loc_108 = in_ebx;
        loc_10c = in_ebp;
        loc_110 = in_esi;
        loc_114 = in_edi;
        loc_104 = 0u;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 + 0xcu);
    COW_AT(1023b57a)
        wr32(sp0 - 0x118u, 0x13u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x114u;
        COW_RET(0x1023b587u);
        t3 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x13u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    COW_AT(1023b587)
        esi = eax + esi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_110 = rd32(sp0 - 0x110u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_104 = rd32(sp0 - 0x104u);
    }
    COW_AT(1023b589)
    if (rd32(sp0 + 0x10u) == 1u)
    {
        ebx = rd32(sp0 + 0x10u);
        goto L_1023b67e;
    }
    ebx = rd32(sp0 + 0x10u);
    COW_AT(1023b599)
    if (ebx != 2u) goto L_1023b5a5;
    COW_AT(1023b59e)
    wr32(sp0 - 0x118u, 5u);
    loc_118 = 5u;
L_1023b62c: ;
    COW_AT(1023b62c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b637u);
    t19 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, loc_118);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(1023b637)
    wr32(sp0 - 0x118u, 0x13u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b646u);
    t21 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x13u);
    t22 = g->edx;
    edx = t22;
    esi = eax + esi;
    eax = t21;
    COW_AT(1023b646)
    wr32(sp0 - 0x118u, 2u);
    esi = eax + esi;
    loc_118 = 2u;
    loc_108 = rd32(sp0 - 0x108u);
    loc_10c = rd32(sp0 - 0x10cu);
    loc_110 = rd32(sp0 - 0x110u);
    loc_114 = rd32(sp0 - 0x114u);
    loc_104 = rd32(sp0 - 0x104u);
L_1023b680: ;
    COW_AT(1023b680)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b68bu);
    t29 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, loc_118);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    loc_104 = rd32(sp0 - 0x104u);
L_1023b68b: ;
    COW_AT(1023b68b)
    esi = eax + esi;
    loc_108 = rd32(sp0 - 0x108u);
    loc_10c = rd32(sp0 - 0x10cu);
    loc_110 = rd32(sp0 - 0x110u);
    loc_114 = rd32(sp0 - 0x114u);
L_1023b68d: ;
    COW_AT(1023b68d)
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, 1u);
    wr32(sp0 - 0x120u, COW_IMG(0x10388354u));
    t31 = rd32(COW_IMG(0x10669058u));
    wr8(t31 + 0x14u, 0u);
    wr32(rd32(COW_IMG(0x1066905cu)) + 0x14u, 0u);
    g->ebx = ebx;
    g->eax = t31;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b6b1u);
    t32 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388354u), 1u, 0u);
    t33 = g->edx;
    eax = t32;
    edx = t33;
    COW_AT(1023b6b1)
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, 1u);
    wr32(sp0 - 0x120u, COW_IMG(0x10388340u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b6c3u);
    t34 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388340u), 1u, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
    COW_AT(1023b6c3)
    t37 = rd32(sp0 + 4u);
    if (t37 == 0u) goto L_1023b71f;
    COW_AT(1023b6cc)
    wr32(sp0 - 0x118u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b6d2u);
    t38 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(1023b6d2)
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, 0u);
    g->ebx = ebx;
    g->eax = eax;
    t40 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b6e2u);
    t41 = cow_fastcall(g, COW_IMG(0x100db170u), t40, edx, 2, 0u, 0u);
    t42 = g->ecx;
    t43 = g->edx;
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(1023b6e2)
    wr32(sp0 - 0x118u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b6e8u);
    t44 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t45 = g->edx;
    eax = t44;
    edx = t45;
    COW_AT(1023b6e8)
    if ((int32_t)eax < 0) goto L_1023bb06;
L_1023b6f3: ;
    COW_AT(1023b6f3)
    g->eax = eax;
    g->edx = edx;
    t46 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b6feu);
    t47 = cow_thiscall(g, COW_IMG(0x100db140u), t46, 0);
    t48 = g->ecx;
    t49 = g->edx;
    eax = t47;
    ecx = t48;
    edx = t49;
    COW_AT(1023b6fe)
    if (eax == 0u) goto L_1023b71f;
    COW_AT(1023b702)
    if ((int32_t)eax > 200) goto L_1023bb06;
    COW_AT(1023b70d)
    wr32(sp0 - 0x118u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b713u);
    t50 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(1023b713)
    if ((int32_t)eax >= 0) goto L_1023b6f3;
    COW_AT(1023b71a)
L_1023bb06: ;
    COW_AT(1023bb06)
    wr32(sp0 - 0x118u, COW_IMG(0x10388354u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023bb15u);
    t204 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388354u));
    t205 = g->edx;
    eax = t204;
    edx = t205;
    COW_AT(1023bb15)
    wr32(sp0 - 0x118u, COW_IMG(0x10388340u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023bb24u);
    t206 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388340u));
    t207 = g->edx;
    eax = t206;
    edx = t207;
    COW_AT(1023bb24)
    g->eax = eax;
    g->edx = edx;
    t208 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023bb2fu);
    t209 = cow_thiscall(g, COW_IMG(0x100db130u), t208, 0);
    t210 = g->ecx;
    t211 = g->edx;
    eax = t209;
    ecx = t210;
    edx = t211;
    COW_AT(1023bb2f)
    wr32(sp0 - 0x118u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023bb35u);
    t212 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, eax);
    t213 = g->ecx;
    t214 = g->edx;
    eax = t212;
    ecx = t213;
    edx = t214;
    COW_AT(1023bb35)
    wr32(sp0 - 0x11cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x118u;
    COW_RET(0x1023bb3cu);
    t215 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    eax = t215;
    COW_AT(1023bb3c)
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x10cu);
    return 0xffffffffu;
L_1023b5a5: ;
    COW_AT(1023b5a5)
    if (ebx != 3u) goto L_1023b61c;
    COW_AT(1023b5aa)
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b5b5u);
    t5 = cow_call_regs(g, COW_IMG(0x100dbc50u), eax, g->ecx, g->edx, 1, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(1023b5b5)
    if (eax != 0u)
    {
        ecx = rd32(COW_IMG(0x103601bcu));
        goto L_1023b5de;
    }
    ecx = rd32(COW_IMG(0x103601bcu));
    COW_AT(1023b5bf)
    wr32(sp0 - 0x118u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b5c6u);
    t7 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 4u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1023b5c6)
    wr32(sp0 - 0x118u, 0x13u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b5d5u);
    t9 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x13u);
    t10 = g->edx;
    edx = t10;
    esi = eax + esi;
    eax = t9;
    COW_AT(1023b5d5)
    wr32(sp0 - 0x118u, 2u);
    esi = eax + esi;
    loc_118 = 2u;
    loc_108 = rd32(sp0 - 0x108u);
    loc_10c = rd32(sp0 - 0x10cu);
    loc_110 = rd32(sp0 - 0x110u);
    loc_114 = rd32(sp0 - 0x114u);
    loc_104 = rd32(sp0 - 0x104u);
    goto L_1023b680;
L_1023b5de: ;
    COW_AT(1023b5de)
    wr32(sp0 - 0x118u, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b5e5u);
    t11 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x14u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(1023b5e5)
    wr32(sp0 - 0x118u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b5f4u);
    t13 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 4u);
    t14 = g->edx;
    edx = t14;
    esi = eax + esi;
    eax = t13;
    COW_AT(1023b5f4)
    wr32(sp0 - 0x118u, 0x13u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b603u);
    t15 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x13u);
    t16 = g->edx;
    edx = t16;
    esi = eax + esi;
    eax = t15;
    COW_AT(1023b603)
    wr32(sp0 - 0x118u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b612u);
    t17 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 2u);
    t18 = g->edx;
    edx = t18;
    esi = eax + esi;
    eax = t17;
    COW_AT(1023b612)
    wr32(sp0 - 0x104u, 1u);
    loc_104 = 1u;
    goto L_1023b68b;
L_1023b61c: ;
    COW_AT(1023b61c)
    if (ebx != 4u) goto L_1023b625;
    COW_AT(1023b621)
    wr32(sp0 - 0x118u, 0x14u);
    loc_118 = 0x14u;
    goto L_1023b680;
L_1023b625: ;
    COW_AT(1023b625)
    if (ebx != 5u) goto L_1023b64c;
    COW_AT(1023b62a)
    wr32(sp0 - 0x118u, 0x16u);
    loc_118 = 0x16u;
    goto L_1023b62c;
L_1023b64c: ;
    COW_AT(1023b64c)
    if (ebx != 6u) goto L_1023b68d;
    COW_AT(1023b651)
    wr32(sp0 - 0x118u, 0x17u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b65eu);
    t23 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x17u);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    COW_AT(1023b65e)
    wr32(sp0 - 0x118u, 0x13u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b66du);
    t25 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x13u);
    t26 = g->edx;
    edx = t26;
    esi = eax + esi;
    eax = t25;
    COW_AT(1023b66d)
    wr32(sp0 - 0x118u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b67cu);
    t27 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 2u);
    t28 = g->edx;
    edx = t28;
    esi = eax + esi;
    eax = t27;
    COW_AT(1023b67c)
    esi = eax + esi;
    loc_108 = rd32(sp0 - 0x108u);
    loc_10c = rd32(sp0 - 0x10cu);
    loc_110 = rd32(sp0 - 0x110u);
    loc_114 = rd32(sp0 - 0x114u);
    loc_104 = rd32(sp0 - 0x104u);
L_1023b67e: ;
    COW_AT(1023b67e)
    wr32(sp0 - 0x118u, 3u);
    loc_118 = 3u;
    goto L_1023b680;
L_1023b71f: ;
    COW_AT(1023b71f)
    if (ebx != 5u)
    {
        ebp = rd32(sp0 + 0x14u);
    }
    else
    {
        ebp = rd32(sp0 + 0x14u);
    COW_AT(1023b72b)
        wr32(sp0 - 0x118u, ebp);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x103601bcu));
        t52 = rd32(COW_IMG(0x103601bcu));
        g->esp = sp0 - 0x114u;
        COW_RET(0x1023b737u);
        t53 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, ebp);
        t54 = g->ecx;
        eax = t53;
        ecx = t54;
    COW_AT(1023b737)
        edx = sp0 - 0x100u;
L_1023b73b: ;
    COW_AT(1023b73b)
        t55 = rd8(eax);
        wr8(edx, (uint8_t)t55);
        if ((uint8_t)t55 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t55;
            edx = edx + 1u;
            goto L_1023b73b;
        }
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t55;
        edx = edx + 1u;
    }
    COW_AT(1023b745)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 1u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b74fu);
    t56 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 1u, 0u, 0u, esi);
    t57 = g->edx;
    eax = t56;
    edx = t57;
    COW_AT(1023b74f)
    if ((int32_t)eax < 0) goto L_1023bb06;
    COW_AT(1023b75a)
    wr32(sp0 - 0x118u, 1u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t58 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b767u);
    t59 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 1u);
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
    COW_AT(1023b767)
    if (rd32(sp0 + 0xcu) == 0u)
    {
        edi = eax;
        eax = rd32(sp0 + 0xcu);
        goto L_1023b799;
    }
    edi = eax;
    eax = rd32(sp0 + 0xcu);
    COW_AT(1023b774)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, edi);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 0x13u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b77fu);
    t62 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 0x13u, 0u, edi, esi);
    t63 = g->edx;
    eax = t62;
    edx = t63;
    COW_AT(1023b77f)
    if ((int32_t)eax < 0) goto L_1023ba96;
    COW_AT(1023b78a)
    wr32(sp0 - 0x118u, 0x13u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t64 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b797u);
    t65 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x13u);
    t66 = g->ecx;
    t67 = g->edx;
    eax = t65;
    ecx = t66;
    edx = t67;
    COW_AT(1023b797)
    edi = eax + edi;
L_1023b799: ;
    COW_AT(1023b799)
    if (ebx != 1u) goto L_1023b80e;
    COW_AT(1023b79e)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, edi);
    wr32(sp0 - 0x120u, ebp);
    wr32(sp0 - 0x124u, 3u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b7a8u);
    t68 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 3u, ebp, edi, esi);
    t69 = g->edx;
    eax = t68;
    edx = t69;
    COW_AT(1023b7a8)
    if ((int32_t)eax < 0) goto L_1023bb06;
    COW_AT(1023b7b3)
    wr32(sp0 - 0x118u, 3u);
    loc_118 = 3u;
L_1023b7b5: ;
    COW_AT(1023b7b5)
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t113 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b7c0u);
    t114 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, loc_118);
    t115 = g->ecx;
    t116 = g->edx;
    eax = t114;
    ecx = t115;
    edx = t116;
L_1023b7c0: ;
    COW_AT(1023b7c0)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b7c5u);
    cow_stdcall(g, COW_IMG(0x1023dbb0u), 0);
    t196 = g->ecx;
    t197 = g->edx;
    ecx = t196;
    edx = t197;
L_1023b7c5: ;
    COW_AT(1023b7c5)
    t198 = rd32(COW_IMG(0x1066905cu));
    wr32(t198 + 0x14u, 0x3f800000u);
    eax = t198;
    esi = 0xau;
L_1023b7d6: ;
    COW_AT(1023b7d6)
    wr32(sp0 - 0x118u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b7ddu);
    t199 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t200 = g->ecx;
    t201 = g->edx;
    eax = t199;
    ecx = t200;
    edx = t201;
    COW_AT(1023b7dd)
    if (esi != 1u)
    {
        esi = esi - 1u;
        goto L_1023b7d6;
    }
    COW_AT(1023b7e3)
    wr32(sp0 - 0x118u, COW_IMG(0x10388354u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b7f2u);
    t202 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388354u));
    t203 = g->edx;
    eax = t202;
    edx = t203;
    COW_AT(1023b7f2)
    wr32(sp0 - 0x118u, COW_IMG(0x10388340u));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b801u);
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388340u));
    COW_AT(1023b801)
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x10cu);
    return 0u;
L_1023b80e: ;
    COW_AT(1023b80e)
    if (ebx != 2u) goto L_1023b82f;
    COW_AT(1023b813)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, edi);
    wr32(sp0 - 0x120u, ebp);
    wr32(sp0 - 0x124u, 5u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b81du);
    t70 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 5u, ebp, edi, esi);
    t71 = g->edx;
    eax = t70;
    edx = t71;
    COW_AT(1023b81d)
    if ((int32_t)eax < 0) goto L_1023bb06;
    COW_AT(1023b828)
    wr32(sp0 - 0x118u, 5u);
    loc_118 = 5u;
L_1023b9e0: ;
    COW_AT(1023b9e0)
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t144 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b9ebu);
    t145 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, loc_118);
    t146 = g->ecx;
    t147 = g->edx;
    eax = t145;
    ecx = t146;
    edx = t147;
    COW_AT(1023b9eb)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, eax + edi);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 0x13u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b9f8u);
    t148 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 0x13u, 0u, eax + edi, esi);
    t149 = g->edx;
    edx = t149;
    edi = eax + edi;
    eax = t148;
    COW_AT(1023b9f8)
    if ((int32_t)eax < 0) goto L_1023ba96;
    COW_AT(1023ba03)
    wr32(sp0 - 0x118u, 0x13u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t150 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023ba10u);
    t151 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x13u);
    t152 = g->ecx;
    t153 = g->edx;
    eax = t151;
    ecx = t152;
    edx = t153;
    COW_AT(1023ba10)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, eax + edi);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 2u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023ba1du);
    t154 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 2u, 0u, eax + edi, esi);
    t155 = g->edx;
    eax = t154;
    edx = t155;
    COW_AT(1023ba1d)
    if ((int32_t)eax < 0) goto L_1023ba96;
    COW_AT(1023ba24)
    wr32(sp0 - 0x118u, 2u);
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t156 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023ba31u);
    cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 2u);
    t157 = g->ecx;
    t158 = g->edx;
    ecx = t157;
    edx = t158;
    COW_AT(1023ba31)
    goto L_1023b7c5;
L_1023b82f: ;
    COW_AT(1023b82f)
    if (ebx != 3u) goto L_1023b933;
    COW_AT(1023b838)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b83du);
    t72 = cow_stdcall(g, COW_IMG(0x1023df20u), 0);
    t73 = g->ecx;
    t74 = g->edx;
    eax = t72;
    ecx = t73;
    edx = t74;
    COW_AT(1023b83d)
    if ((int32_t)eax >= 0)
    {
        ebp = eax;
        goto L_1023b879;
    }
    COW_AT(1023b843)
    wr32(sp0 - 0x118u, COW_IMG(0x10388354u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b852u);
    t75 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388354u));
    t76 = g->edx;
    eax = t75;
    edx = t76;
    COW_AT(1023b852)
    wr32(sp0 - 0x118u, COW_IMG(0x10388340u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b861u);
    t77 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388340u));
    t78 = g->ecx;
    t79 = g->edx;
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(1023b861)
    wr32(sp0 - 0x118u, 0x67u);
    g->eax = eax;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b868u);
    t80 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, 0x67u);
    eax = t80;
    COW_AT(1023b868)
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x10cu);
    return 0xffffffffu;
L_1023b879: ;
    COW_AT(1023b879)
    if (rd32(sp0 - 0x104u) == 0u)
    {
        eax = rd32(sp0 - 0x104u);
        goto L_1023b8af;
    }
    eax = rd32(sp0 - 0x104u);
    COW_AT(1023b881)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, edi);
    wr32(sp0 - 0x120u, ebp);
    wr32(sp0 - 0x124u, 0x14u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b88bu);
    t81 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 0x14u, ebp, edi, esi);
    t82 = g->ecx;
    t83 = g->edx;
    eax = t81;
    ecx = t82;
    edx = t83;
    COW_AT(1023b88b)
    if ((int32_t)eax >= 0) goto L_1023b8a0;
    COW_AT(1023b892)
    wr32(sp0 - 0x118u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b898u);
    t84 = cow_cdecl(g, COW_IMG(0x1023df00u), 1, ebp);
    t85 = g->edx;
    eax = t84;
    edx = t85;
    COW_AT(1023b898)
    goto L_1023bb06;
L_1023b8a0: ;
    COW_AT(1023b8a0)
    wr32(sp0 - 0x118u, 0x14u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t86 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b8adu);
    t87 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x14u);
    t88 = g->ecx;
    t89 = g->edx;
    eax = t87;
    ecx = t88;
    edx = t89;
    COW_AT(1023b8ad)
    edi = eax + edi;
L_1023b8af: ;
    COW_AT(1023b8af)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, edi);
    wr32(sp0 - 0x120u, ebp);
    wr32(sp0 - 0x124u, 4u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b8b9u);
    t90 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 4u, ebp, edi, esi);
    t91 = g->ecx;
    t92 = g->edx;
    eax = t90;
    ecx = t91;
    edx = t92;
    COW_AT(1023b8b9)
    if ((int32_t)eax >= 0) goto L_1023b8ce;
    COW_AT(1023b8c0)
    wr32(sp0 - 0x118u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b8c6u);
    t93 = cow_cdecl(g, COW_IMG(0x1023df00u), 1, ebp);
    t94 = g->edx;
    eax = t93;
    edx = t94;
    COW_AT(1023b8c6)
    goto L_1023bb06;
L_1023b8ce: ;
    COW_AT(1023b8ce)
    wr32(sp0 - 0x118u, 4u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t95 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b8dbu);
    t96 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 4u);
    t97 = g->ecx;
    t98 = g->edx;
    eax = t96;
    ecx = t97;
    edx = t98;
    COW_AT(1023b8db)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, eax + edi);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 0x13u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b8e8u);
    t99 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 0x13u, 0u, eax + edi, esi);
    t100 = g->ecx;
    t101 = g->edx;
    ecx = t100;
    edx = t101;
    edi = eax + edi;
    eax = t99;
    COW_AT(1023b8e8)
    if ((int32_t)eax >= 0) goto L_1023b8fd;
    COW_AT(1023b8ef)
    wr32(sp0 - 0x118u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b8f5u);
    t102 = cow_cdecl(g, COW_IMG(0x1023df00u), 1, ebp);
    t103 = g->edx;
    eax = t102;
    edx = t103;
    COW_AT(1023b8f5)
L_1023ba96: ;
    COW_AT(1023ba96)
    wr32(sp0 - 0x118u, COW_IMG(0x10388354u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023baa5u);
    t182 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388354u));
    t183 = g->edx;
    eax = t182;
    edx = t183;
    COW_AT(1023baa5)
    wr32(sp0 - 0x118u, COW_IMG(0x10388340u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023bab4u);
    t184 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388340u));
    t185 = g->edx;
    eax = t184;
    edx = t185;
    COW_AT(1023bab4)
    g->eax = eax;
    g->edx = edx;
    t186 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023babfu);
    t187 = cow_thiscall(g, COW_IMG(0x100db130u), t186, 0);
    t188 = g->ecx;
    t189 = g->edx;
    eax = t187;
    ecx = t188;
    edx = t189;
    COW_AT(1023babf)
    wr32(sp0 - 0x118u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023bac5u);
    t190 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, eax);
    t191 = g->ecx;
    t192 = g->edx;
    eax = t190;
    ecx = t191;
    edx = t192;
    COW_AT(1023bac5)
    wr32(sp0 - 0x11cu, 0x73u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    COW_RET(0x1023baccu);
    t193 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, 0x73u);
    t194 = g->ecx;
    t195 = g->edx;
    eax = t193;
    ecx = t194;
    edx = t195;
    COW_AT(1023bacc)
    wr32(sp0 - 0x120u, 0u);
    g->esp = sp0 - 0x11cu;
    COW_RET(0x1023bad3u);
    cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    COW_AT(1023bad3)
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x10cu);
    return 0xfffffffeu;
L_1023b8fd: ;
    COW_AT(1023b8fd)
    wr32(sp0 - 0x118u, 0x13u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t104 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b90au);
    t105 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x13u);
    t106 = g->ecx;
    t107 = g->edx;
    eax = t105;
    ecx = t106;
    edx = t107;
    COW_AT(1023b90a)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, eax + edi);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 2u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b917u);
    t108 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 2u, 0u, eax + edi, esi);
    t109 = g->ecx;
    t110 = g->edx;
    eax = t108;
    ecx = t109;
    edx = t110;
    COW_AT(1023b917)
    if ((int32_t)eax >= 0) goto L_1023b92c;
    COW_AT(1023b91e)
    wr32(sp0 - 0x118u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b924u);
    t111 = cow_cdecl(g, COW_IMG(0x1023df00u), 1, ebp);
    t112 = g->edx;
    eax = t111;
    edx = t112;
    COW_AT(1023b924)
    goto L_1023ba96;
L_1023b92c: ;
    COW_AT(1023b92c)
    wr32(sp0 - 0x118u, 2u);
    loc_118 = 2u;
    goto L_1023b7b5;
L_1023b933: ;
    COW_AT(1023b933)
    if (ebx != 4u) goto L_1023b9b3;
    COW_AT(1023b938)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b93du);
    t117 = cow_stdcall(g, COW_IMG(0x1023df20u), 0);
    t118 = g->ecx;
    t119 = g->edx;
    eax = t117;
    ecx = t118;
    edx = t119;
    COW_AT(1023b93d)
    if ((int32_t)eax >= 0)
    {
        ebp = eax;
        goto L_1023b979;
    }
    COW_AT(1023b943)
    wr32(sp0 - 0x118u, COW_IMG(0x10388354u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b952u);
    t120 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388354u));
    t121 = g->edx;
    eax = t120;
    edx = t121;
    COW_AT(1023b952)
    wr32(sp0 - 0x118u, COW_IMG(0x10388340u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b961u);
    t122 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388340u));
    t123 = g->ecx;
    t124 = g->edx;
    eax = t122;
    ecx = t123;
    edx = t124;
    COW_AT(1023b961)
    wr32(sp0 - 0x118u, 0x67u);
    g->eax = eax;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b968u);
    t125 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, 0x67u);
    eax = t125;
    COW_AT(1023b968)
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x10cu);
    return 0xffffffffu;
L_1023b979: ;
    COW_AT(1023b979)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, edi);
    wr32(sp0 - 0x120u, ebp);
    wr32(sp0 - 0x124u, 0x14u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b983u);
    t126 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 0x14u, ebp, edi, esi);
    t127 = g->ecx;
    t128 = g->edx;
    eax = t126;
    ecx = t127;
    edx = t128;
    COW_AT(1023b983)
    if ((int32_t)eax >= 0) goto L_1023b998;
    COW_AT(1023b98a)
    wr32(sp0 - 0x118u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b990u);
    t129 = cow_cdecl(g, COW_IMG(0x1023df00u), 1, ebp);
    t130 = g->edx;
    eax = t129;
    edx = t130;
    COW_AT(1023b990)
    goto L_1023bb06;
L_1023b998: ;
    COW_AT(1023b998)
    wr32(sp0 - 0x118u, 0x14u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t131 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b9a5u);
    t132 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x14u);
    t133 = g->ecx;
    t134 = g->edx;
    eax = t132;
    ecx = t133;
    edx = t134;
    COW_AT(1023b9a5)
    wr32(sp0 - 0x118u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b9abu);
    t135 = cow_cdecl(g, COW_IMG(0x1023df00u), 1, ebp);
    t136 = g->ecx;
    t137 = g->edx;
    eax = t135;
    ecx = t136;
    edx = t137;
    COW_AT(1023b9ab)
    goto L_1023b7c0;
L_1023b9b3: ;
    COW_AT(1023b9b3)
    if (ebx != 5u) goto L_1023ba36;
    COW_AT(1023b9b8)
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    wr32(sp0 - 0x11cu, ebp);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = sp0 - 0x100u;
    t138 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b9c9u);
    t139 = cow_stdcall(g, COW_IMG(0x100db810u), 2, ebp, sp0 - 0x100u);
    t140 = g->ecx;
    t141 = g->edx;
    eax = t139;
    ecx = t140;
    edx = t141;
    COW_AT(1023b9c9)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, edi);
    wr32(sp0 - 0x120u, ebp);
    wr32(sp0 - 0x124u, 0x16u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023b9d3u);
    t142 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 0x16u, ebp, edi, esi);
    t143 = g->edx;
    eax = t142;
    edx = t143;
    COW_AT(1023b9d3)
    if ((int32_t)eax < 0) goto L_1023bb06;
    COW_AT(1023b9de)
    wr32(sp0 - 0x118u, 0x16u);
    loc_118 = 0x16u;
    goto L_1023b9e0;
L_1023ba36: ;
    COW_AT(1023ba36)
    if (ebx != 6u) goto L_1023b7c0;
    COW_AT(1023ba3f)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, edi);
    wr32(sp0 - 0x120u, ebp);
    wr32(sp0 - 0x124u, 0x17u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023ba49u);
    t159 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 0x17u, ebp, edi, esi);
    t160 = g->edx;
    eax = t159;
    edx = t160;
    COW_AT(1023ba49)
    if ((int32_t)eax < 0) goto L_1023bb06;
    COW_AT(1023ba54)
    wr32(sp0 - 0x118u, 0x17u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t161 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023ba61u);
    t162 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x17u);
    t163 = g->ecx;
    t164 = g->edx;
    eax = t162;
    ecx = t163;
    edx = t164;
    COW_AT(1023ba61)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, eax + edi);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 0x13u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023ba6eu);
    t165 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 0x13u, 0u, eax + edi, esi);
    t166 = g->edx;
    edx = t166;
    edi = eax + edi;
    eax = t165;
    COW_AT(1023ba6e)
    if ((int32_t)eax < 0) goto L_1023ba96;
    COW_AT(1023ba75)
    wr32(sp0 - 0x118u, 0x13u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t167 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023ba82u);
    t168 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 0x13u);
    t169 = g->ecx;
    t170 = g->edx;
    eax = t168;
    ecx = t169;
    edx = t170;
    COW_AT(1023ba82)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, eax + edi);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 2u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023ba8fu);
    t171 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 2u, 0u, eax + edi, esi);
    t172 = g->edx;
    edx = t172;
    edi = eax + edi;
    eax = t171;
    COW_AT(1023ba8f)
    if ((int32_t)eax >= 0) goto L_1023bae6;
    goto L_1023ba96;
L_1023bae6: ;
    COW_AT(1023bae6)
    wr32(sp0 - 0x118u, 2u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t173 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023baf3u);
    t174 = cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 2u);
    t175 = g->ecx;
    t176 = g->edx;
    eax = t174;
    ecx = t175;
    edx = t176;
    COW_AT(1023baf3)
    wr32(sp0 - 0x118u, esi);
    wr32(sp0 - 0x11cu, eax + edi);
    wr32(sp0 - 0x120u, ebp);
    wr32(sp0 - 0x124u, 3u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023baffu);
    t177 = cow_cdecl(g, COW_IMG(0x1023bb60u), 4, 3u, ebp, eax + edi, esi);
    t178 = g->edx;
    eax = t177;
    edx = t178;
    COW_AT(1023baff)
    if ((int32_t)eax >= 0) goto L_1023bb4d;
    goto L_1023bb06;
L_1023bb4d: ;
    COW_AT(1023bb4d)
    wr32(sp0 - 0x118u, 3u);
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t179 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x114u;
    COW_RET(0x1023bb5au);
    cow_stdcall(g, COW_IMG(0x100dbac0u), 1, 3u);
    t180 = g->ecx;
    t181 = g->edx;
    ecx = t180;
    edx = t181;
    COW_AT(1023bb5a)
    goto L_1023b7c5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023b550(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023b56du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        in_edi = rd32(sp0 - 0x114u);
        in_esi = rd32(sp0 - 0x110u);
        in_ebx = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        wr32(sp0 - 0x10cu, in_ebp);
        wr32(sp0 - 0x104u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023b57au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        in_edi = rd32(sp0 - 0x114u);
        in_esi = rd32(sp0 - 0x110u);
        in_ebx = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        wr32(sp0 - 0x10cu, in_ebp);
        wr32(sp0 - 0x104u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023b587u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b589u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b599u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b59eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b5a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b5aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b5b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b5bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b5c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b5d5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b5deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b5e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b5f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b603u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b612u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b61cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b621u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b625u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b62au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b62cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x118u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b637u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b646u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b64cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b651u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b65eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b66du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b67cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b67eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b680u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x118u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b68bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b68du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b6b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b6c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b6ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b6d2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x118u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b6e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b6e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x118u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b6f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b6feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b702u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b70du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b713u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x118u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b71au:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b71fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b72bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b737u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b73bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b745u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b74fu:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b75au:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b767u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b774u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b77fu:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b78au:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b797u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b799u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b79eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b7a8u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b7b3u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b7b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b7c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b7c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b7d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b7ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b7e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b7f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b801u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b80eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b813u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b81du:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b828u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b82fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b838u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b83du:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b843u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b852u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b861u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b868u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b879u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b881u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b88bu:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b892u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b898u:
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
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8a0u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8b9u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8c0u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8c6u:
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
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8ceu:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8e8u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8efu:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8f5u:
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
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b8fdu:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b90au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b917u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b91eu:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b924u:
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
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b92cu:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b933u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b938u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b93du:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b943u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b952u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b961u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b968u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b979u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b983u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b98au:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b990u:
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
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b998u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b9a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b9abu:
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
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b9b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b9b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b9c9u:
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
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023b9d3u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023b9deu:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b9e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023b9ebu:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023b9f8u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba03u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba1du:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba24u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba49u:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba54u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba6eu:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba75u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba8fu:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023ba96u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023baa5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023bab4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023babfu:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023bac5u:
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
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023baccu:
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
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x1023bad3u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1023bae6u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023baf3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023baffu:
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
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x1023bb06u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023bb15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023bb24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023bb2fu:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023bb35u:
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
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023bb3cu:
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
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x1023bb4du:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023bb5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023b550(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023b550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
