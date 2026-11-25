/* f_0x102be32b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102be32b(Guest* g)
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
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
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
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102be345u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x38u); goto E_102be345;
    case 0x102be34cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102be34c;
    case 0x102be35au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102be35a;
    case 0x102be368u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_38 = rd32(sp0 - 0x38u); goto E_102be368;
    case 0x102be371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_38 = rd32(sp0 - 0x38u); goto E_102be371;
    case 0x102be37cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_102be37c;
    case 0x102be381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102be381;
    case 0x102be38fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be38f;
    case 0x102be39du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be39d;
    case 0x102be3a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be3a8;
    case 0x102be3abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be3ab;
    case 0x102be3b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be3b8;
    case 0x102be3d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be3d8;
    case 0x102be3eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be3ee;
    case 0x102be3f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be3f6;
    case 0x102be3fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be3fc;
    case 0x102be405u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be405;
    case 0x102be40cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be40c;
    case 0x102be418u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be418;
    case 0x102be41eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be41e;
    case 0x102be42du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be42d;
    case 0x102be437u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be437;
    case 0x102be447u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be447;
    case 0x102be451u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be451;
    case 0x102be456u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be456;
    case 0x102be460u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be460;
    case 0x102be466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be466;
    case 0x102be475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be475;
    case 0x102be47fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be47f;
    case 0x102be4b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be4b0;
    case 0x102be4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be4ba;
    case 0x102be4c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be4c8;
    case 0x102be4dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be4db;
    case 0x102be4f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be4f3;
    case 0x102be508u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be508;
    case 0x102be51bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be51b;
    case 0x102be52fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be52f;
    case 0x102be538u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); goto E_102be538;
    case 0x102be54au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be54a;
    case 0x102be560u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be560;
    case 0x102be575u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be575;
    case 0x102be584u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_102be584;
    case 0x102be58cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102be58c;
    case 0x102be59bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); goto E_102be59b;
    case 0x102be5aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be5aa;
    case 0x102be5bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102be5ba;
    case 0x102be5c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be5c6;
    case 0x102be5d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_102be5d4;
    case 0x102be5dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102be5dc;
    case 0x102be5e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102be5e9;
    case 0x102be5f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be5f8;
    case 0x102be60fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be60f;
    case 0x102be61au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be61a;
    case 0x102be634u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102be634;
    case 0x102be64au: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102be64a;
    case 0x102be653u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be653;
    case 0x102be662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be662;
    case 0x102be668u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be668;
    case 0x102be67bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be67b;
    case 0x102be68fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be68f;
    case 0x102be6a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be6a3;
    case 0x102be6adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be6ad;
    case 0x102be6b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be6b5;
    case 0x102be6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102be6c2;
    case 0x102be6ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be6dd;
    case 0x102be6efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102be6ef;
    case 0x102be6f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be6f2;
    case 0x102be6fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be6fc;
    case 0x102be70fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be70f;
    case 0x102be71au: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be71a;
    case 0x102be726u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be726;
    case 0x102be734u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be734;
    case 0x102be744u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be744;
    case 0x102be75au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be75a;
    case 0x102be76du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be76d;
    case 0x102be771u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be771;
    case 0x102be77bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be77b;
    case 0x102be781u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be781;
    case 0x102be7a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102be7a2;
    case 0x102be7aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102be7aa;
    case 0x102be7c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102be7c0;
    case 0x102be7c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102be7c8;
    case 0x102be7dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102be7db;
    case 0x102be7e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102be7e6;
    case 0x102be7efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102be7ef;
    case 0x102be83cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be83c;
    case 0x102be841u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be841;
    case 0x102be84eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be84e;
    case 0x102be853u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be853;
    case 0x102be863u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be863;
    case 0x102be865u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be865;
    case 0x102be86fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be86f;
    case 0x102be87bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be87b;
    case 0x102be880u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be880;
    case 0x102be884u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be884;
    case 0x102be88fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be88f;
    case 0x102be89fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102be89f;
    case 0x102be8a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be8a8;
    case 0x102be8b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be8b4;
    case 0x102be8c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be8c0;
    case 0x102be8d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be8d1;
    case 0x102be8dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_38 = rd32(sp0 - 0x38u); goto E_102be8db;
    case 0x102be8e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_38 = rd32(sp0 - 0x38u); goto E_102be8e5;
    case 0x102be8eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_38 = rd32(sp0 - 0x38u); goto E_102be8ea;
    case 0x102be8fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be8fa;
    case 0x102be906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_102be906;
    case 0x102be915u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102be915;
    case 0x102be91cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102be91c;
    case 0x102be92bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be92b;
    case 0x102be93au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be93a;
    case 0x102be943u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be943;
    case 0x102be96fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102be96f;
    case 0x102be977u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be977;
    case 0x102be98eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102be98e;
    case 0x102be996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be996;
    case 0x102be9a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_14 = rd32(sp0 - 0x14u); goto E_102be9a7;
    case 0x102be9aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_14 = rd32(sp0 - 0x14u); goto E_102be9aa;
    case 0x102be9bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_102be9bd;
    case 0x102be9cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be9ca;
    case 0x102be9d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be9d3;
    case 0x102be9d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be9d5;
    case 0x102be9e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be9e6;
    case 0x102be9f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102be9f4;
    case 0x102bea00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_102bea00;
    case 0x102bea0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102bea0c;
    case 0x102bea1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102bea1c;
    case 0x102bea2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102bea2f;
    case 0x102bea38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bea38;
    case 0x102bea3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bea3a;
    default: break;
    }
#endif

    COW_AT(102be32b)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_esi);
    t1 = rd32(rd32(sp0 + 4u) + 0x70u);
    t2 = rd32(sp0 + 4u);
    t3 = rd32(sp0 + 0xcu);
    wr32(t2 + 0x70u, t1 | 0x40u);
    wr32(sp0 - 0x38u, in_edi);
    t4 = rd32(sp0 + 0x18u);
    if (t4 != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        ebx = t2;
        esi = t3;
        loc_38 = in_edi;
    }
    else
    {
        ebx = t2;
        esi = t3;
    COW_AT(102be345)
        wr32(sp0 - 0x3cu, esi);
        wr32(sp0 - 0x40u, ebx);
        g->eax = in_eax;
        g->esp = sp0 - 0x34u;
        t5 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, self, in_edx, 1, 3, ebx, esi, in_edi);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    COW_AT(102be34c)
        wr32(ebx + 0x1f0u, eax);
        if ((int32_t)esi <= 0)
        {
            eax = 0u;
            ecx = rd32(sp0 - 0x3cu);
            loc_38 = rd32(sp0 - 0x38u);
            goto L_102be368;
        }
        eax = 0u;
L_102be35a: ;
    COW_AT(102be35a)
        t7 = rd32(ebx + 0x1f0u);
        wr8(eax + t7, (uint8_t)eax);
        if ((int32_t)(eax + 1u) < (int32_t)esi)
        {
            eax = eax + 1u;
            goto L_102be35a;
        }
        eax = eax + 1u;
        ecx = t7;
        loc_38 = rd32(sp0 - 0x38u);
    }
L_102be368: ;
    COW_AT(102be368)
    if ((int32_t)esi > (int32_t)rd32(sp0 + 0x10u))
    {
    COW_AT(102be371)
        t8 = rd32(sp0 + 0x14u);
        wr32(sp0 - 0x3cu, esi);
        wr32(sp0 - 0x40u, ebx);
        if (t8 == 0u)
        {
            loc_3c = esi;
            loc_40 = ebx;
    COW_AT(102be5d4)
            wr32(sp0 + 4u, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x34u;
            t72 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, loc_40, loc_3c, loc_38);
            t73 = g->ecx;
            t74 = g->edx;
            eax = t72;
            ecx = t73;
            edx = t74;
    COW_AT(102be5dc)
            wr32(sp0 - 0x44u, esi);
            wr32(sp0 - 0x48u, ebx);
            wr32(ebx + 0x258u, eax);
            g->eax = eax;
            g->esp = sp0 - 0x3cu;
            t75 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t76 = g->ecx;
            t77 = g->edx;
            eax = t75;
            ecx = t76;
            edx = t77;
    COW_AT(102be5e9)
            wr32(ebx + 0x25cu, eax);
            if ((int32_t)esi <= 0)
            {
                eax = 0u;
                goto L_102be60f;
            }
            eax = 0u;
L_102be5f8: ;
    COW_AT(102be5f8)
            wr8(eax + rd32(ebx + 0x258u), (uint8_t)eax);
            t78 = rd32(ebx + 0x25cu);
            wr8(eax + t78, (uint8_t)eax);
            if ((int32_t)(eax + 1u) < (int32_t)esi)
            {
                eax = eax + 1u;
                goto L_102be5f8;
            }
            eax = eax + 1u;
            ecx = t78;
L_102be60f: ;
    COW_AT(102be60f)
            wr32(sp0 - 0x3cu, 0xc04u);
            wr32(sp0 - 0x40u, ebx);
            g->eax = eax;
            g->esp = sp0 - 0x34u;
            t79 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, ebx, 0xc04u, rd32(sp0 - 0x38u));
            eax = t79;
    COW_AT(102be61a)
            wr32(sp0 - 0x18u, eax);
            t80 = eax;
            edi = t80;
            eax = 0u;
            ecx = 0x301u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x10u, esi);
            wr32(sp0 - 0xcu, 0x60u);
            loc_10 = esi;
            loc_c = 0x60u;
L_102be634: ;
    COW_AT(102be634)
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 0x1cu, loc_10 - 1u);
            if ((int32_t)(loc_10 - 1u) <= 0)
            {
                eax = loc_10;
                edx = loc_10 - 1u;
                goto L_102be70f;
            }
            eax = loc_10;
            loc_1c = loc_10 - 1u;
    COW_AT(102be64a)
            t81 = rd32(sp0 + 8u) + 2u;
            wr32(sp0 + 0x14u, t81);
            ecx = 0u;
            edx = t81;
            loc_8 = 0u;
L_102be653: ;
    COW_AT(102be653)
            wr32(sp0 - 0x20u, ecx + 1u);
            wr32(sp0 - 0x14u, ecx + 1u);
            if ((int32_t)(ecx + 1u) >= (int32_t)eax)
            {
                loc_20 = ecx + 1u;
                ecx = ecx + 1u;
                goto L_102be6f2;
            }
            loc_20 = ecx + 1u;
            loc_14 = ecx + 1u;
    COW_AT(102be662)
            esi = rd32(sp0 + 0x14u) + 2u;
L_102be668: ;
    COW_AT(102be668)
            t82 = rd8(rd32(sp0 + 0x14u) - 2u) - rd8(esi - 1u);
            wr32(sp0 - 0x3cu, t82);
            g->eax = rd8(esi - 1u);
            g->edx = edx;
            t83 = rd8(esi - 1u);
            g->esp = sp0 - 0x38u;
            t84 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t82);
            t85 = g->edx;
            eax = t84;
            edx = t85;
    COW_AT(102be67b)
            t86 = rd8(rd32(sp0 + 0x14u)) - rd8(esi + 1u);
            wr32(sp0 - 0x40u, t86);
            g->eax = rd8(esi + 1u);
            g->edx = edx;
            t87 = rd8(esi + 1u);
            g->esp = sp0 - 0x3cu;
            t88 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t86);
            t89 = g->edx;
            edx = t89;
            edi = eax;
            eax = t88;
    COW_AT(102be68f)
            t90 = rd8(rd32(sp0 + 0x14u) - 1u) - rd8(esi);
            wr32(sp0 - 0x44u, t90);
            g->eax = t90;
            g->ecx = rd8(esi);
            g->edx = edx;
            t91 = rd8(esi);
            g->esp = sp0 - 0x40u;
            t92 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t90);
            t93 = g->ecx;
            t94 = g->edx;
            ecx = t93;
            edx = t94;
            edi = eax + edi;
            eax = t92;
    COW_AT(102be6a3)
            if ((int32_t)(eax + edi) > (int32_t)rd32(sp0 - 0xcu)) goto L_102be6dd;
            edi = eax + edi;
    COW_AT(102be6ad)
            wr32(sp0 - 0x3cu, 8u);
            wr32(sp0 - 0x40u, ebx);
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t95 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, ecx, edx, 1, 6, ebx, 8u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            t96 = g->edx;
            eax = t95;
            edx = t96;
    COW_AT(102be6b5)
            wr32(sp0 + 4u, eax);
            if (eax == 0u)
            {
                ecx = 8u;
                loc_10 = rd32(sp0 - 0x10u);
                loc_c = rd32(sp0 - 0xcu);
                goto L_102be863;
            }
    COW_AT(102be6c2)
            t97 = rd32(edi * 4u + rd32(sp0 - 0x18u));
            t98 = rd32(sp0 - 0x18u);
            t99 = rd32(sp0 + 4u);
            wr32(t99, t97);
            t100 = rd8(sp0 - 8u);
            wr8(t99 + 4u, (uint8_t)t100);
            t101 = rd8(sp0 - 0x14u);
            wr8(t99 + 5u, (uint8_t)t101);
            wr32(edi * 4u + t98, t99);
            ecx = ((t97 | t100) & 0xffffff00u) | t101;
L_102be6dd: ;
    COW_AT(102be6dd)
            t102 = rd32(sp0 - 0x14u);
            wr32(sp0 - 0x14u, t102 + 1u);
            if ((int32_t)(t102 + 1u) < (int32_t)rd32(sp0 - 0x10u))
            {
                esi = esi + 3u;
                loc_10 = rd32(sp0 - 0x10u);
                loc_c = rd32(sp0 - 0xcu);
                loc_8 = rd32(sp0 - 8u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_14 = t102 + 1u;
                goto L_102be668;
            }
    COW_AT(102be6ef)
            eax = rd32(sp0 - 0x10u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_c = rd32(sp0 - 0xcu);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
L_102be6f2: ;
    COW_AT(102be6f2)
            t103 = rd32(sp0 + 4u);
            if (t103 == 0u) goto L_102be863;
    COW_AT(102be6fc)
            t104 = rd32(sp0 + 0x14u);
            wr32(sp0 + 0x14u, t104 + 3u);
            wr32(sp0 - 8u, loc_20);
            if ((int32_t)loc_20 < (int32_t)loc_1c)
            {
                ecx = loc_20;
                loc_8 = loc_20;
                goto L_102be653;
            }
L_102be70f: ;
    COW_AT(102be70f)
            t105 = rd32(sp0 + 4u);
            if (t105 == 0u)
            {
                ecx = 0u;
            }
            else
            {
    COW_AT(102be71a)
                wr32(sp0 - 8u, 0u);
                if ((int32_t)loc_c < 0)
                {
                    ecx = 0u;
                    goto L_102be863;
                }
                ecx = 0u;
                loc_8 = 0u;
L_102be726: ;
    COW_AT(102be726)
                if (rd32(ecx * 4u + rd32(sp0 - 0x18u)) == 0u)
                {
                    edx = rd32(sp0 - 0x18u);
                    goto L_102be853;
                }
                ecx = rd32(ecx * 4u + rd32(sp0 - 0x18u));
    COW_AT(102be734)
                wr32(sp0 - 0x20u, ecx);
                t106 = eax * 3u + rd32(sp0 + 8u);
                wr32(sp0 + 0x14u, t106);
                loc_20 = ecx;
L_102be744: ;
    COW_AT(102be744)
                if ((int32_t)rd8(rd32(ebx + 0x258u) + rd8(ecx + 4u)) >= (int32_t)eax)
                {
                    edx = rd32(ebx + 0x258u);
                }
                else
                {
                    edx = rd32(ebx + 0x258u);
                    edi = rd8(ecx + 4u);
    COW_AT(102be75a)
                    t107 = rd8(ecx + 5u);
                    wr32(sp0 - 0x1cu, t107);
                    if ((int32_t)rd8(edx + t107) < (int32_t)eax)
                    {
                        loc_1c = t107;
    COW_AT(102be76d)
                        if (!(eax & 1u))
                        {
    COW_AT(102be77b)
                            wr32(sp0 - 0x1cu, edi);
                            ecx = loc_1c;
                            loc_1c = edi;
                        }
                        else
                        {
    COW_AT(102be771)
                            wr32(sp0 - 0x1cu, loc_1c);
                            ecx = edi;
                        }
    COW_AT(102be781)
                        t108 = rd32(sp0 + 0x14u);
                        t109 = rd32(sp0 + 8u);
                        t110 = rd8(ecx + edx);
                        wr32(sp0 + 0x14u, t108 - 3u);
                        wr32(sp0 - 0x10u, eax - 1u);
                        t111 = rd32(sp0 + 0x14u);
                        esi = t111;
                        edi = t109 + t110 * 3u;
                        wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
                        wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
                        t112 = rd32(sp0 + 0x18u);
                        if (t112 != 0u)
                        {
                            eax = eax - 1u;
                        }
                        else
                        {
                            eax = eax - 1u;
    COW_AT(102be7a2)
                            t113 = rd32(sp0 + 0xcu);
                            wr32(sp0 - 0x14u, 0u);
                            if ((int32_t)t113 <= 0) goto L_102be7ef;
                            edi = 0u;
                            loc_14 = 0u;
L_102be7aa: ;
    COW_AT(102be7aa)
                            if (rd8(edi + rd32(ebx + 0x1f0u)) == rd8(ecx + rd32(ebx + 0x258u)))
                            {
                                esi = edi + rd32(ebx + 0x1f0u);
                                edi = rd32(ebx + 0x258u);
    COW_AT(102be7c0)
                                wr8(esi, rd8(edi + rd32(sp0 - 0x1cu)));
                                loc_14 = rd32(sp0 - 0x14u);
                            }
    COW_AT(102be7c8)
                            if (rd8(loc_14 + rd32(ebx + 0x1f0u)) != eax)
                            {
                                edi = loc_14;
                            }
                            else
                            {
                                esi = loc_14 + rd32(ebx + 0x1f0u);
                                edi = loc_14;
    COW_AT(102be7db)
                                wr8(esi, rd8(ecx + rd32(ebx + 0x258u)));
                            }
    COW_AT(102be7e6)
                            wr32(sp0 - 0x14u, edi + 1u);
                            if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 + 0xcu))
                            {
                                loc_14 = edi + 1u;
                                edi = edi + 1u;
                                goto L_102be7aa;
                            }
                        }
L_102be7ef: ;
    COW_AT(102be7ef)
                        wr32(sp0 - 0x1cu, eax);
                        wr8(rd32(ebx + 0x258u) + rd8(eax + rd32(ebx + 0x25cu)), rd8(ecx + rd32(ebx + 0x258u)));
                        t114 = rd32(sp0 - 0x1cu);
                        wr32(sp0 - 0x1cu, t114);
                        wr8(rd32(ebx + 0x25cu) + rd8(ecx + rd32(ebx + 0x258u)), rd8(t114 + rd32(ebx + 0x25cu)));
                        t115 = rd32(sp0 - 0x1cu);
                        wr8(ecx + rd32(ebx + 0x258u), (uint8_t)t115);
                        t116 = rd32(ebx + 0x25cu);
                        wr8(t115 + t116, (uint8_t)ecx);
                        eax = t115;
                        ecx = rd32(sp0 - 0x20u);
                        edx = t116;
                        loc_10 = rd32(sp0 - 0x10u);
                        loc_c = rd32(sp0 - 0xcu);
                        loc_8 = rd32(sp0 - 8u);
                    }
                }
    COW_AT(102be83c)
                if ((int32_t)eax <= (int32_t)rd32(sp0 + 0x10u)) goto L_102be863;
    COW_AT(102be841)
                wr32(sp0 - 0x20u, rd32(ecx));
                if (rd32(ecx) != 0u)
                {
                    loc_20 = rd32(ecx);
                    ecx = rd32(ecx);
                    goto L_102be744;
                }
                ecx = rd32(ecx);
    COW_AT(102be84e)
                if ((int32_t)eax <= (int32_t)rd32(sp0 + 0x10u)) goto L_102be863;
L_102be853: ;
    COW_AT(102be853)
                wr32(sp0 - 8u, loc_8 + 1u);
                if ((int32_t)(loc_8 + 1u) <= (int32_t)loc_c)
                {
                    ecx = loc_8 + 1u;
                    loc_8 = loc_8 + 1u;
                    goto L_102be726;
                }
                ecx = loc_8 + 1u;
            }
L_102be863: ;
    COW_AT(102be863)
            edi = 0u;
L_102be865: ;
    COW_AT(102be865)
            eax = rd32(edi * 4u + rd32(sp0 - 0x18u));
            esi = edi * 4u + rd32(sp0 - 0x18u);
L_102be880: ;
    COW_AT(102be880)
            if (eax != 0u) goto L_102be86f;
    COW_AT(102be884)
            t117 = rd32(esi);
            wr32(esi, t117 & eax);
            if ((int32_t)(edi + 1u) < 769)
            {
                edi = edi + 1u;
                loc_10 = rd32(sp0 - 0x10u);
                loc_c = rd32(sp0 - 0xcu);
                goto L_102be865;
            }
    COW_AT(102be88f)
            t118 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0xcu, t118 + 0x60u);
            if ((int32_t)rd32(sp0 - 0x10u) > (int32_t)rd32(sp0 + 0x10u))
            {
                loc_10 = rd32(sp0 - 0x10u);
                loc_c = t118 + 0x60u;
                goto L_102be634;
            }
            eax = rd32(sp0 - 0x10u);
    COW_AT(102be89f)
            t119 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x3cu, t119);
            wr32(sp0 - 0x40u, ebx);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x38u;
            t120 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, t119);
            t121 = g->ecx;
            t122 = g->edx;
            eax = t120;
            ecx = t121;
            edx = t122;
    COW_AT(102be8a8)
            t123 = rd32(ebx + 0x25cu);
            wr32(sp0 - 0x44u, t123);
            wr32(sp0 - 0x48u, ebx);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x40u;
            t124 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, t123);
            t125 = g->ecx;
            t126 = g->edx;
            eax = t124;
            ecx = t125;
            edx = t126;
    COW_AT(102be8b4)
            t127 = rd32(ebx + 0x258u);
            wr32(sp0 - 0x4cu, t127);
            wr32(sp0 - 0x50u, ebx);
            g->ecx = ecx;
            g->esp = sp0 - 0x48u;
            cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, t127);
            t128 = g->ecx;
            t129 = g->edx;
            ecx = t128;
            edx = t129;
    COW_AT(102be8c0)
            t130 = rd32(ebx + 0x25cu);
            wr32(ebx + 0x25cu, 0u);
            t131 = rd32(ebx + 0x258u);
            wr32(ebx + 0x258u, 0u);
        }
        else
        {
            loc_3c = esi;
            loc_40 = ebx;
    COW_AT(102be37c)
            g->eax = eax;
            g->esp = sp0 - 0x34u;
            t9 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, loc_40, loc_3c, loc_38);
            t10 = g->edx;
            eax = t9;
            edx = t10;
    COW_AT(102be381)
            wr32(ebx + 0x254u, eax);
            if ((int32_t)esi <= 0)
            {
                ecx = rd32(sp0 - 0x3cu);
                goto L_102be39d;
            }
            eax = 0u;
L_102be38f: ;
    COW_AT(102be38f)
            t11 = rd32(ebx + 0x254u);
            wr8(eax + t11, (uint8_t)eax);
            if ((int32_t)(eax + 1u) < (int32_t)esi)
            {
                eax = eax + 1u;
                goto L_102be38f;
            }
            ecx = t11;
L_102be39d: ;
    COW_AT(102be39d)
            t12 = rd32(sp0 + 0x10u);
            wr32(sp0 + 4u, esi - 1u);
            if ((int32_t)(esi - 1u) < (int32_t)t12)
            {
                eax = esi - 1u;
                loc_1c = rd32(sp0 - 0x1cu);
            }
            else
            {
                eax = esi - 1u;
    COW_AT(102be3a8)
                esi = rd32(sp0 + 0x14u);
L_102be3ab: ;
    COW_AT(102be3ab)
                wr32(sp0 - 0x1cu, 1u);
                if ((int32_t)eax <= 0)
                {
                    loc_1c = 1u;
                    goto L_102be405;
                }
                edi = 0u;
                loc_1c = 1u;
L_102be3b8: ;
    COW_AT(102be3b8)
                t13 = rd32(ebx + 0x254u);
                t14 = rd8(edi + rd32(ebx + 0x254u) + 1u);
                t15 = rd8(edi + rd32(ebx + 0x254u));
                wr8(sp0 + 0x17u, (uint8_t)t15);
                if (rd16(esi + (uint8_t)t15 * 2u) >= rd16(esi + (uint8_t)t14 * 2u))
                {
                    ecx = (uint8_t)t14;
                    edx = rd16(esi + (uint8_t)t15 * 2u);
                }
                else
                {
                    eax = edi + t13;
                    ecx = (uint8_t)t14;
                    edx = rd16(esi + (uint8_t)t15 * 2u);
    COW_AT(102be3d8)
                    wr32(sp0 - 0x1cu, 0u);
                    t16 = rd8(eax + 1u);
                    wr8(eax, (uint8_t)t16);
                    t17 = rd8(sp0 + 0x17u);
                    wr8(edi + rd32(ebx + 0x254u) + 1u, (uint8_t)t17);
                    ecx = ((ecx | t16) & 0xffffff00u) | t17;
                    loc_1c = rd32(sp0 - 0x1cu);
                }
    COW_AT(102be3ee)
                if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 + 4u))
                {
                    edi = edi + 1u;
                    goto L_102be3b8;
                }
                eax = rd32(sp0 + 4u);
    COW_AT(102be3f6)
                if (loc_1c != 0u) goto L_102be405;
    COW_AT(102be3fc)
                t18 = rd32(sp0 + 0x10u);
                wr32(sp0 + 4u, eax - 1u);
                if ((int32_t)(eax - 1u) >= (int32_t)t18)
                {
                    eax = eax - 1u;
                    goto L_102be3ab;
                }
                eax = eax - 1u;
            }
L_102be405: ;
    COW_AT(102be405)
            t19 = rd32(sp0 + 0x18u);
            if (t19 == 0u)
            {
    COW_AT(102be456)
                t25 = rd32(sp0 + 0x10u);
                if ((int32_t)t25 <= 0)
                {
                    ecx = 0u;
                    edx = 0u;
                }
                else
                {
                    eax = rd32(sp0 + 0xcu);
    COW_AT(102be460)
                    t26 = rd32(sp0 + 8u);
                    wr32(sp0 + 4u, t26);
                    ecx = 0u;
L_102be466: ;
    COW_AT(102be466)
                    if ((int32_t)rd8(ecx + rd32(ebx + 0x254u)) < (int32_t)rd32(sp0 + 0x10u))
                    {
                        edx = rd32(ebx + 0x254u);
                        goto L_102be4b0;
                    }
                    edx = rd32(ebx + 0x254u);
L_102be475: ;
    COW_AT(102be475)
                    if ((int32_t)rd8(eax + edx - 1u) >= (int32_t)rd32(sp0 + 0x10u))
                    {
                        eax = eax - 1u;
                        goto L_102be475;
                    }
                    eax = eax - 1u;
    COW_AT(102be47f)
                    t27 = eax * 3u + rd32(sp0 + 8u);
                    esi = t27;
                    edi = sp0 + 0x14u;
                    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
                    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
                    t28 = rd32(sp0 + 4u);
                    esi = t28;
                    edi = t27;
                    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
                    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
                    t29 = rd32(sp0 + 4u);
                    esi = sp0 + 0x14u;
                    edi = t29;
                    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
                    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
                    wr8(eax + rd32(ebx + 0x1f0u), (uint8_t)ecx);
                    t30 = rd32(ebx + 0x1f0u);
                    wr8(ecx + t30, (uint8_t)eax);
                    edx = t30;
                    loc_1c = rd32(sp0 - 0x1cu);
L_102be4b0: ;
    COW_AT(102be4b0)
                    t31 = rd32(sp0 + 4u);
                    wr32(sp0 + 4u, t31 + 3u);
                    if ((int32_t)(ecx + 1u) < (int32_t)rd32(sp0 + 0x10u))
                    {
                        ecx = ecx + 1u;
                        goto L_102be466;
                    }
                    ecx = ecx + 1u;
                }
    COW_AT(102be4ba)
                t32 = rd32(sp0 + 0xcu);
                wr32(sp0 + 4u, 0u);
                if ((int32_t)t32 <= 0)
                {
                    eax = 0u;
                    goto L_102be5ba;
                }
                eax = 0u;
L_102be4c8: ;
    COW_AT(102be4c8)
                if ((int32_t)rd8(eax + rd32(ebx + 0x1f0u)) < (int32_t)rd32(sp0 + 0x10u))
                {
                    ecx = rd32(ebx + 0x1f0u);
                }
                else
                {
                    edi = rd8(eax + rd32(ebx + 0x1f0u));
    COW_AT(102be4db)
                    t33 = rd8(edi * 3u + rd32(sp0 + 8u) + 1u) - rd8(rd32(sp0 + 8u) + 1u);
                    wr32(sp0 - 0x3cu, t33);
                    g->eax = rd8(rd32(sp0 + 8u) + 1u);
                    g->edx = edx;
                    t34 = rd8(rd32(sp0 + 8u) + 1u);
                    t35 = rd32(sp0 + 8u);
                    g->esp = sp0 - 0x38u;
                    t36 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t33);
                    t37 = g->edx;
                    eax = t36;
                    edx = t37;
                    edi = edi * 3u + t35;
    COW_AT(102be4f3)
                    t38 = rd8(edi + 2u) - rd8(rd32(sp0 + 8u) + 2u);
                    wr32(sp0 - 0x40u, t38);
                    g->eax = rd8(rd32(sp0 + 8u) + 2u);
                    g->edx = edx;
                    t39 = rd8(rd32(sp0 + 8u) + 2u);
                    g->esp = sp0 - 0x3cu;
                    t40 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t38);
                    t41 = g->edx;
                    edx = t41;
                    esi = eax;
                    eax = t40;
    COW_AT(102be508)
                    t42 = rd8(edi) - rd8(rd32(sp0 + 8u));
                    wr32(sp0 - 0x44u, t42);
                    g->eax = rd8(rd32(sp0 + 8u));
                    g->edx = edx;
                    t43 = rd8(rd32(sp0 + 8u));
                    g->esp = sp0 - 0x40u;
                    t44 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t42);
                    t45 = g->edx;
                    edx = t45;
                    esi = eax + esi;
                    eax = t44;
    COW_AT(102be51b)
                    t46 = rd32(sp0 - 0x1cu);
                    wr32(sp0 - 0x1cu, 0u);
                    t47 = rd32(sp0 + 0x10u);
                    wr32(sp0 - 0x10u, 1u);
                    if ((int32_t)t47 <= 1)
                    {
                        loc_1c = 0u;
                    }
                    else
                    {
                        esi = eax + esi;
    COW_AT(102be52f)
                        t48 = rd32(sp0 + 8u) + 4u;
                        wr32(sp0 + 0x14u, t48);
                        loc_1c = 0u;
                        loc_10 = 1u;
L_102be538: ;
    COW_AT(102be538)
                        t49 = rd8(edi) - rd8(rd32(sp0 + 0x14u) - 1u);
                        wr32(sp0 - 0x3cu, t49);
                        g->eax = rd8(rd32(sp0 + 0x14u) - 1u);
                        g->edx = edx;
                        t50 = rd8(rd32(sp0 + 0x14u) - 1u);
                        g->esp = sp0 - 0x38u;
                        t51 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t49);
                        t52 = g->edx;
                        eax = t51;
                        edx = t52;
    COW_AT(102be54a)
                        wr32(sp0 - 0x18u, eax);
                        t53 = rd8(edi + 2u) - rd8(rd32(sp0 + 0x14u) + 1u);
                        wr32(sp0 - 0x40u, t53);
                        g->eax = rd8(rd32(sp0 + 0x14u) + 1u);
                        g->edx = edx;
                        t54 = rd8(rd32(sp0 + 0x14u) + 1u);
                        g->esp = sp0 - 0x3cu;
                        t55 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t53);
                        t56 = g->edx;
                        eax = t55;
                        edx = t56;
    COW_AT(102be560)
                        t57 = rd32(sp0 - 0x18u);
                        wr32(sp0 - 0x18u, eax + t57);
                        t58 = rd8(edi + 1u) - rd8(rd32(sp0 + 0x14u));
                        wr32(sp0 - 0x44u, t58);
                        g->eax = t58;
                        g->edx = edx;
                        g->esp = sp0 - 0x40u;
                        t59 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t58);
                        t60 = g->edx;
                        eax = t59;
                        edx = t60;
    COW_AT(102be575)
                        t61 = eax + rd32(sp0 - 0x18u);
                        wr32(sp0 - 0x20u, t61);
                        if ((int32_t)(eax + rd32(sp0 - 0x18u)) >= (int32_t)esi)
                        {
                            loc_1c = rd32(sp0 - 0x1cu);
                        }
                        else
                        {
                            ecx = t61;
    COW_AT(102be584)
                            t62 = rd32(sp0 - 0x10u);
                            wr32(sp0 - 0x1cu, t62);
                            esi = ecx;
                            loc_1c = t62;
                        }
    COW_AT(102be58c)
                        t63 = rd32(sp0 - 0x10u);
                        wr32(sp0 - 0x10u, t63 + 1u);
                        t64 = rd32(sp0 + 0x14u);
                        wr32(sp0 + 0x14u, t64 + 3u);
                        if ((int32_t)(t63 + 1u) < (int32_t)rd32(sp0 + 0x10u))
                        {
                            loc_10 = t63 + 1u;
                            goto L_102be538;
                        }
                    }
    COW_AT(102be59b)
                    t65 = rd32(sp0 + 4u);
                    wr8(rd32(ebx + 0x1f0u) + t65, (uint8_t)loc_1c);
                    ecx = t65;
                    edx = (edx & 0xffffff00u) | (uint8_t)loc_1c;
                    loc_1c = rd32(sp0 - 0x1cu);
                }
    COW_AT(102be5aa)
                t66 = rd32(sp0 + 4u) + 1u;
                t67 = rd32(sp0 + 4u);
                t68 = rd32(sp0 + 0xcu);
                wr32(sp0 + 4u, t66);
                if ((int32_t)(t67 + 1u) < (int32_t)t68)
                {
                    eax = t66;
                    goto L_102be4c8;
                }
                eax = t66;
            }
            else
            {
    COW_AT(102be40c)
                t20 = rd32(sp0 + 0x10u);
                if ((int32_t)t20 <= 0)
                {
                    ecx = rd32(sp0 + 0xcu);
                    edx = 0u;
                }
                else
                {
                    ecx = rd32(sp0 + 0xcu);
    COW_AT(102be418)
                    t21 = rd32(sp0 + 8u);
                    wr32(sp0 + 0xcu, t21);
                    edx = 0u;
L_102be41e: ;
    COW_AT(102be41e)
                    if ((int32_t)rd8(edx + rd32(ebx + 0x254u)) < (int32_t)rd32(sp0 + 0x10u))
                    {
                        eax = rd32(ebx + 0x254u);
                        goto L_102be447;
                    }
                    eax = rd32(ebx + 0x254u);
L_102be42d: ;
    COW_AT(102be42d)
                    if ((int32_t)rd8(eax + ecx - 1u) >= (int32_t)rd32(sp0 + 0x10u))
                    {
                        ecx = ecx - 1u;
                        goto L_102be42d;
                    }
                    ecx = ecx - 1u;
    COW_AT(102be437)
                    t22 = rd32(sp0 + 8u);
                    t23 = rd32(sp0 + 0xcu);
                    esi = ecx * 3u + t22;
                    edi = t23;
                    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
                    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
                    eax = ecx * 2u + t22;
L_102be447: ;
    COW_AT(102be447)
                    t24 = rd32(sp0 + 0xcu);
                    wr32(sp0 + 0xcu, t24 + 3u);
                    if ((int32_t)(edx + 1u) < (int32_t)rd32(sp0 + 0x10u))
                    {
                        edx = edx + 1u;
                        goto L_102be41e;
                    }
                    edx = edx + 1u;
    COW_AT(102be451)
                }
            }
L_102be5ba: ;
    COW_AT(102be5ba)
            t69 = rd32(ebx + 0x254u);
            wr32(sp0 - 0x3cu, t69);
            wr32(sp0 - 0x40u, ebx);
            g->esp = sp0 - 0x38u;
            cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, t69);
            t70 = g->edx;
            edx = t70;
    COW_AT(102be5c6)
            t71 = rd32(ebx + 0x254u);
            wr32(ebx + 0x254u, 0u);
            ecx = rd32(sp0 - 0x3cu);
        }
    COW_AT(102be8d1)
        t132 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0xcu, t132);
        esi = t132;
        loc_38 = rd32(sp0 - 0x38u);
    }
    COW_AT(102be8db)
    t135 = rd32(ebx + 0x114u);
    if (t135 != 0u)
    {
        eax = ebx + 0x114u;
    }
    else
    {
        eax = ebx + 0x114u;
    COW_AT(102be8e5)
        t136 = rd32(sp0 + 8u);
        wr32(eax, t136);
        ecx = t136;
        loc_38 = rd32(sp0 - 0x38u);
    }
    COW_AT(102be8ea)
    t137 = rd32(sp0 + 0x18u);
    wr16(ebx + 0x118u, (uint16_t)esi);
    if (t137 != 0u)
    {
    COW_AT(102be8fa)
        wr32(sp0 - 0x3cu, 0x8000u);
        wr32(sp0 - 0x40u, ebx);
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t138 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, ebx, 0x8000u, rd32(sp0 - 0x38u));
        t139 = g->ecx;
        t140 = g->edx;
        eax = t138;
        ecx = t139;
        edx = t140;
    COW_AT(102be906)
        wr32(sp0 - 0x44u, 0x8000u);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, eax);
        wr32(ebx + 0x1ecu, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t141 = cow_cdecl(g, COW_IMG(0x10316dd0u), 3, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
        t142 = g->ecx;
        t143 = g->edx;
        eax = t141;
        ecx = t142;
        edx = t143;
    COW_AT(102be915)
        wr32(sp0 - 0x50u, 0x8000u);
        wr32(sp0 - 0x54u, ebx);
        g->eax = eax;
        g->esp = sp0 - 0x48u;
        t144 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, ebx, 0x8000u, rd32(sp0 - 0x4cu));
        t145 = g->ecx;
        t146 = g->edx;
        eax = t144;
        ecx = t145;
        edx = t146;
    COW_AT(102be91c)
        wr32(sp0 - 0x58u, 0x8000u);
        wr32(sp0 - 0x5cu, 0xffu);
        wr32(sp0 - 0x60u, eax);
        wr32(sp0 - 0x20u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x54u;
        t147 = cow_cdecl(g, COW_IMG(0x10316dd0u), 3, eax, 0xffu, 0x8000u);
        t148 = g->ecx;
        t149 = g->edx;
        eax = t147;
        ecx = t148;
        edx = t149;
    COW_AT(102be92b)
        t150 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0x14u, 0u);
        if ((int32_t)esi > 0)
        {
    COW_AT(102be93a)
            t151 = rd32(sp0 + 8u) + 2u;
            wr32(sp0 - 0x1cu, t151);
            loc_1c = t151;
L_102be943: ;
    COW_AT(102be943)
            t152 = rd32(sp0 + 0x18u);
            wr32(sp0 + 0x18u, 0u);
            t153 = rd8(loc_1c) >> 3u;
            wr32(sp0 - 0x18u, t153);
            t154 = rd8(loc_1c - 1u) >> 3u;
            t155 = rd8(loc_1c - 2u);
            wr32(sp0 + 4u, t154);
            wr32(sp0 - 0x18u, -t153);
            t156 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, -t156);
            t157 = -(t155 >> 3u);
            wr32(sp0 - 8u, t157);
            eax = t157;
            ecx = t154;
            edx = t153;
            loc_18 = -t153;
            loc_8 = t157;
L_102be96f: ;
    COW_AT(102be96f)
            wr32(sp0 - 0x3cu, loc_8);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t158 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, loc_8);
            t159 = g->edx;
            eax = t158;
            edx = t159;
    COW_AT(102be977)
            wr32(sp0 - 0x24u, eax);
            t160 = rd32(sp0 + 8u);
            t161 = rd32(sp0 + 0x18u);
            wr32(sp0 + 8u, 0u);
            wr32(sp0 - 0x28u, t161 << 0xau);
            t162 = rd32(sp0 + 4u);
            wr32(sp0 - 0xcu, t162);
            ecx = rd32(sp0 - 0x3cu);
            loc_24 = eax;
            eax = t162;
            loc_28 = t161 << 0xau;
            loc_c = t162;
L_102be98e: ;
    COW_AT(102be98e)
            wr32(sp0 - 0x3cu, loc_c);
            g->eax = eax;
            g->esp = sp0 - 0x38u;
            t163 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, loc_c);
            eax = t163;
    COW_AT(102be996)
            t164 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0x14u, t164);
            wr32(sp0 - 0x2cu, eax + t164);
            if ((int32_t)rd32(sp0 - 0x24u) > (int32_t)eax)
            {
                ecx = t164;
                edx = eax + t164;
                loc_14 = t164;
                loc_2c = eax + t164;
            }
            else
            {
                ecx = t164;
                edx = eax + t164;
                loc_2c = eax + t164;
    COW_AT(102be9a7)
                wr32(sp0 - 0x14u, eax);
                loc_14 = eax;
            }
    COW_AT(102be9aa)
            t165 = rd32(sp0 + 0x10u);
            t166 = rd32(sp0 - 0x18u);
            t167 = rd32(sp0 + 8u);
            t168 = rd32(sp0 - 0x28u);
            wr32(sp0 + 0x10u, 0u);
            wr32(sp0 - 0x10u, t166);
            eax = t166;
            esi = t167 << 5u | t168;
            loc_10 = t166;
L_102be9bd: ;
    COW_AT(102be9bd)
            wr32(sp0 - 0x3cu, loc_10);
            g->eax = eax;
            t169 = rd32(sp0 + 0x10u);
            g->esp = sp0 - 0x38u;
            t170 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, loc_10);
            eax = t170;
            edi = t169 | esi;
    COW_AT(102be9ca)
            t171 = rd32(sp0 - 0x14u);
            if ((int32_t)t171 > (int32_t)eax)
            {
                ecx = rd32(sp0 - 0x14u);
            }
            else
            {
    COW_AT(102be9d3)
                ecx = eax;
            }
    COW_AT(102be9d5)
            if ((int32_t)(eax + ecx + rd32(sp0 - 0x2cu)) >= (int32_t)rd8(edi + rd32(sp0 - 0x20u)))
            {
                eax = eax + ecx + rd32(sp0 - 0x2cu);
                ecx = edi + rd32(sp0 - 0x20u);
                edx = rd8(edi + rd32(sp0 - 0x20u));
            }
            else
            {
                eax = eax + ecx + rd32(sp0 - 0x2cu);
                ecx = edi + rd32(sp0 - 0x20u);
                edx = rd8(edi + rd32(sp0 - 0x20u));
    COW_AT(102be9e6)
                wr8(ecx, (uint8_t)eax);
                t172 = rd32(ebx + 0x1ecu);
                t173 = rd8(sp0 + 0x14u);
                wr8(edi + t172, (uint8_t)t173);
                eax = t172;
                ecx = (ecx & 0xffffff00u) | t173;
            }
    COW_AT(102be9f4)
            t174 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, t174 + 1u);
            t175 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x10u, t175 + 1u);
            t176 = rd32(sp0 + 0x10u);
            if ((int32_t)t176 < 32)
            {
                loc_14 = rd32(sp0 - 0x14u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_10 = t175 + 1u;
                goto L_102be9bd;
            }
    COW_AT(102bea00)
            t177 = rd32(sp0 + 8u);
            wr32(sp0 + 8u, t177 + 1u);
            t178 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0xcu, t178 + 1u);
            t179 = rd32(sp0 + 8u);
            if ((int32_t)t179 < 32)
            {
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_c = t178 + 1u;
                goto L_102be98e;
            }
    COW_AT(102bea0c)
            t180 = rd32(sp0 + 0x18u);
            wr32(sp0 + 0x18u, t180 + 1u);
            t181 = rd32(sp0 - 8u);
            wr32(sp0 - 8u, t181 + 1u);
            t182 = rd32(sp0 + 0x18u);
            if ((int32_t)t182 < 32)
            {
                loc_1c = rd32(sp0 - 0x1cu);
                loc_18 = rd32(sp0 - 0x18u);
                loc_8 = t181 + 1u;
                goto L_102be96f;
            }
    COW_AT(102bea1c)
            t183 = rd32(sp0 + 0x14u);
            wr32(sp0 + 0x14u, t183 + 1u);
            t184 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x1cu, t184 + 3u);
            if ((int32_t)rd32(sp0 + 0x14u) < (int32_t)rd32(sp0 + 0xcu))
            {
                loc_1c = t184 + 3u;
                goto L_102be943;
            }
            eax = rd32(sp0 + 0x14u);
        }
    COW_AT(102bea2f)
        t185 = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x3cu, t185);
        wr32(sp0 - 0x40u, ebx);
        g->eax = eax;
        g->esp = sp0 - 0x38u;
        t186 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, t185);
        t187 = g->edx;
        eax = t186;
        edx = t187;
    COW_AT(102bea38)
    }
    COW_AT(102bea3a)
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_102be86f: ;
    COW_AT(102be86f)
    wr32(sp0 - 0x3cu, eax);
    wr32(sp0 - 0x40u, ebx);
    t133 = rd32(eax);
    wr32(sp0 + 4u, t133);
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, eax);
    t134 = g->edx;
    edx = t134;
    COW_AT(102be87b)
    eax = rd32(sp0 + 4u);
    ecx = rd32(sp0 - 0x3cu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    goto L_102be880;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102be32b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102be345u:
    {
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be34cu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be35au:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be368u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be371u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be37cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be381u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be38fu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be39du:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be3a8u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be3abu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be3b8u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be3d8u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be3eeu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be3f6u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be3fcu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be405u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be40cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be418u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be41eu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be42du:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be437u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be447u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be451u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be456u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be460u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be466u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be475u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be47fu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be4b0u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be4bau:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be4c8u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be4dbu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be4f3u:
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
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be508u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be51bu:
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
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be52fu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x10u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102be538u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be54au:
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
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be560u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be575u:
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
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be584u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be58cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be59bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be5aau:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be5bau:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be5c6u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be5d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be5dcu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be5e9u:
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
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be5f8u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be60fu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be61au:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, 0xc04u);
        (void)sp0;
        return 1;
    }
    case 0x102be634u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be64au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x38u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102be653u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be662u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be668u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be67bu:
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
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be68fu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be6a3u:
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
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be6adu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be6b5u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, 8u);
        (void)sp0;
        return 1;
    }
    case 0x102be6c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be6ddu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be6efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be6f2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be6fcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be70fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be71au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be726u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be734u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be744u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be75au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be76du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be771u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be77bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be781u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be7a2u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be7aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be7c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be7c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be7dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be7e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be7efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be83cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be841u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be84eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be853u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be863u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be865u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be86fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be87bu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be880u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be884u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be88fu:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be89fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be8a8u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be8b4u:
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
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be8c0u:
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
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be8d1u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be8dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be8e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be8eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102be8fau:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be906u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x102be915u:
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
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x102be91cu:
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
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x102be92bu:
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
        g->esp = sp0 - 0x60u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be93au:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be943u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be96fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be977u:
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
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be98eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be996u:
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
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be9a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be9aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be9bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be9cau:
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
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be9d3u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be9d5u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be9e6u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102be9f4u:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bea00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bea0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bea1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bea2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bea38u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bea3au:
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
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102be32b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102be32b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
