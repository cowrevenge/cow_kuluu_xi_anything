/* f_0x101f9a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_101f9a50(Guest* g)
{
    double d100;
    double d105;
    double d122;
    double d128;
    double d145;
    double d154;
    double d169;
    double d183;
    double d42;
    double d70;
    double d74;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t t1;
    uint32_t t10;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
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
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
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
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
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
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f9a66u: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x1cu); goto E_101f9a66;
    case 0x101f9a77u: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_101f9a77;
    case 0x101f9a80u: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_101f9a80;
    case 0x101f9a90u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f9a90;
    case 0x101f9aa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f9aa2;
    case 0x101f9abcu: eax = g->eax; ecx = g->ecx; self = g->esi; goto E_101f9abc;
    case 0x101f9ac5u: eax = g->eax; ecx = g->ecx; self = g->esi; goto E_101f9ac5;
    case 0x101f9accu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9acc;
    case 0x101f9b87u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9b87;
    case 0x101f9b9au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9b9a;
    case 0x101f9ba1u: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; goto E_101f9ba1;
    case 0x101f9ba5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9ba5;
    case 0x101f9babu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9bab;
    case 0x101f9bb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101f9bb9;
    case 0x101f9bd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9bd0;
    case 0x101f9be9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9be9;
    case 0x101f9bfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9bfe;
    case 0x101f9c0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9c0f;
    case 0x101f9c20u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9c20;
    case 0x101f9c22u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9c22;
    case 0x101f9c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9c3e;
    case 0x101f9c45u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9c45;
    case 0x101f9c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9c61;
    case 0x101f9cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f9cc5;
    case 0x101f9cceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f9cce;
    case 0x101f9cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9cec;
    case 0x101f9d19u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9d19;
    case 0x101f9d28u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9d28;
    case 0x101f9d2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9d2f;
    case 0x101f9d38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9d38;
    case 0x101f9d47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9d47;
    case 0x101f9d5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_101f9d5f;
    case 0x101f9d98u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9d98;
    case 0x101f9da1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9da1;
    case 0x101f9e01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f9e01;
    case 0x101f9e0au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e0a;
    case 0x101f9e21u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e21;
    case 0x101f9e25u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e25;
    case 0x101f9e2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e2f;
    case 0x101f9e38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e38;
    case 0x101f9e47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e47;
    case 0x101f9e4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e4b;
    case 0x101f9e55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e55;
    case 0x101f9e5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e5e;
    case 0x101f9e6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e6c;
    case 0x101f9e71u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e71;
    case 0x101f9e75u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9e75;
    case 0x101f9ed5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9ed5;
    case 0x101f9f0du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f9f0d;
    case 0x101f9f16u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f9f16;
    case 0x101f9f4au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f9f4a;
    case 0x101f9f95u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f9f95;
    case 0x101f9fc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f9fc0;
    case 0x101f9ff9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f9ff9;
    case 0x101fa002u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101fa002;
    case 0x101fa075u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101fa075;
    case 0x101fa085u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101fa085;
    case 0x101fa08eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa08e;
    case 0x101fa0abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa0ab;
    case 0x101fa0d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa0d8;
    case 0x101fa149u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa149;
    case 0x101fa150u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa150;
    case 0x101fa159u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa159;
    case 0x101fa168u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa168;
    case 0x101fa1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa1a2;
    case 0x101fa1a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa1a6;
    case 0x101fa1afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa1af;
    case 0x101fa1bbu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_101fa1bb;
    case 0x101fa1c2u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_101fa1c2;
    case 0x101fa1c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa1c7;
    case 0x101fa20bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_101fa20b;
    case 0x101fa236u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_101fa236;
    case 0x101fa269u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa269;
    case 0x101fa274u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa274;
    case 0x101fa27au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa27a;
    case 0x101fa283u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa283;
    case 0x101fa28eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa28e;
    case 0x101fa2a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa2a5;
    case 0x101fa2abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa2ab;
    case 0x101fa2afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa2af;
    case 0x101fa2b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa2b8;
    case 0x101fa2ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa2ce;
    case 0x101fa2f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101fa2f4;
    case 0x101fa317u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa317;
    case 0x101fa31cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa31c;
    case 0x101fa375u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa375;
    case 0x101fa37du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa37d;
    case 0x101fa381u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa381;
    case 0x101fa385u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa385;
    case 0x101fa38au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa38a;
    case 0x101fa38cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa38c;
    case 0x101fa3c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa3c5;
    case 0x101fa3cau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa3ca;
    case 0x101fa3cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101fa3cf;
    case 0x101fa3d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101fa3d8;
    default: break;
    }
#endif

    COW_AT(101f9a50)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if ((int32_t)arg3 >= 8)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_101fa3d8;
    }
    COW_AT(101f9a66)
    if ((int32_t)rd32(sp0 + 0x10u) < 0)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_101fa3d8;
    }
    eax = rd32(sp0 + 0x10u);
    COW_AT(101f9a77)
    if ((int32_t)eax >= 4)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_101fa3d8;
    }
    COW_AT(101f9a80)
    wr32(sp0 - 0x24u, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_call_regs(g, COW_IMG(0x101f9a20u), eax, self, g->edx, 0, 1, arg3);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_101fa3d8;
    }
    eax = t1;
    edx = t2;
    COW_AT(101f9a90)
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t3 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t4 = g->ecx;
    if (t3 == 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_101fa3d8;
    }
    eax = t3;
    ecx = t4;
    COW_AT(101f9aa2)
    wr8(sp0 - 0xeu, 1u);
    wr8(sp0 - 0xdu, 0u);
    if (arg3 == 2u)
    {
        edx = arg3 - 2u;
        goto L_101f9bd0;
    }
    COW_AT(101f9abc)
    if (arg3 - 2u == 4u) goto L_101f9ba1;
    COW_AT(101f9ac5)
    if (arg3 != 7u)
    {
        edx = arg3 - 7u;
        goto L_101f9ba5;
    }
    edx = arg3 - 7u;
    edi = 0xffffffffu;
L_101f9acc: ;
    COW_AT(101f9acc)
    t17 = rd16(sp0 + 8u);
    t18 = rd16(sp0 + 0x10u);
    wr16(self + 0x102u, (uint16_t)t17);
    t19 = rd8(sp0 + 0x14u);
    wr16(self + 0x108u, 0xffffu);
    wr16(self + 0x110u, 0xffffu);
    wr16(self + 0x112u, 0xffffu);
    wr16(self + 0x106u, (uint16_t)t18);
    t20 = rd8(sp0 - 0xdu);
    wr8(self + 0x10au, (uint8_t)t19);
    wr32(sp0 - 0x24u, arg3);
    wr32(self + 0xfcu, edi);
    wr16(self + 0x100u, (uint16_t)arg1);
    wr8(self + 0xa44u, 0u);
    wr8(self + 0x10bu, 0u);
    wr8(self + 0x10cu, 0u);
    wr8(self + 0x10du, 0u);
    wr8(self + 0xa46u, 0u);
    wr8(self + 0xa47u, (uint8_t)t20);
    g->esp = sp0 - 0x20u;
    cow_fastcall(g, COW_IMG(0x101f92e0u), self, (((edx & 0xffff0000u) | t18) & 0xffffff00u) | t20, 1, arg3);
    t21 = g->ecx;
    t22 = g->edx;
    wr8(self + 0x15u, rd8(self + 0x15u) & 0xf7u);
    wr32(self + 0x94u, 0u);
    wr16(self + 0x7au, 0u);
    wr32(self + 0x98u, 0u);
    wr8(self + 0xa0u, 0u);
    wr32(self + 0x9cu, 0u);
    wr8(self + 0xa1u, 0u);
    t23 = rd32(COW_IMG(0x104dfd98u));
    wr8(sp0 + 8u, 1u);
    wr8(sp0 + 0x14u, 0u);
    wr8(sp0 + 0x1cu, 0u);
    if (t23 == 0u)
    {
        eax = t23;
        ecx = t21;
        edx = t22;
        goto L_101f9c20;
    }
    eax = t23;
    edx = t22;
    COW_AT(101f9b87)
    if ((uint32_t)(int16_t)rd16(self + 0x100u) != rd32(eax + 0x3c350u))
    {
        ecx = (uint32_t)(int16_t)rd16(self + 0x100u);
        goto L_101f9c20;
    }
    ecx = (uint32_t)(int16_t)rd16(self + 0x100u);
    COW_AT(101f9b9a)
    eax = (eax & 0xffffff00u) | 1u;
L_101f9c22: ;
    COW_AT(101f9c22)
    wr32(sp0 + 0x10u, 0x44u);
    wr16(self + 0x104u, (uint16_t)arg3);
    if (arg3 > 7u) goto L_101fa2f4;
    COW_AT(101f9c3e)
    t24 = rd32(COW_IMG(0x101fa3e4u) + arg3 * 4u);
    switch (t24 - RD)
    {
    case 0x101f9c45u: goto L_101f9c45;
    case 0x101f9c61u: goto L_101f9c61;
    case 0x101f9cecu: goto L_101f9cec;
    case 0x101f9ed5u: goto L_101f9ed5;
    case 0x101f9fc0u: goto L_101f9fc0;
    case 0x101fa08eu: goto L_101fa08e;
    case 0x101fa0abu: goto L_101fa0ab;
    case 0x101fa2ceu: goto L_101fa2ce;
    default: rt_fatal(g, COW_IMG(0x101f9c3eu), "switch");
    }
    return;
L_101f9ba1: ;
    COW_AT(101f9ba1)
    wr8(sp0 - 0xeu, 0u);
    edx = arg3 - 6u;
L_101f9ba5: ;
    COW_AT(101f9ba5)
    if (rd8(sp0 + 0x1cu) == 0u) goto L_101f9bd0;
    COW_AT(101f9bab)
    g->eax = eax;
    g->edx = rd32(eax);
    t5 = rd32(eax);
    g->esp = sp0 - 0x20u;
    t6 = cow_thiscall(g, rd32(t5 + 0x19cu), eax, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_101f9bd0;
    }
    eax = t6;
    edx = t8;
    COW_AT(101f9bb9)
    wr32(sp0 - 0x24u, 0x1fu);
    g->ebx = 0u;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0x1fu);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_101f9bd0: ;
    COW_AT(101f9bd0)
    wr32(sp0 - 0x24u, 0u);
    t9 = rd32(sp0 + 8u);
    wr32(sp0 - 0x28u, t9);
    wr32(sp0 - 0x2cu, arg1);
    g->ebx = 0u;
    g->eax = t9;
    g->esp = sp0 - 0x20u;
    t10 = cow_call_regs(g, COW_IMG(0x101f7430u), g->eax, ecx, edx, 1, 3, arg1, t9, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)t10 >= 0)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        edi = t10;
        goto L_101f9acc;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(101f9be9)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, arg1);
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t13 = cow_call_regs(g, COW_IMG(0x101f7430u), g->eax, ecx, edx, 1, 3, arg1, 0u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 >= 0)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        edi = t13;
        goto L_101f9acc;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    edi = t13;
    COW_AT(101f9bfe)
    t16 = rd8(sp0 - 0xeu);
    wr8(sp0 - 0xdu, 1u);
    if ((uint8_t)t16 == 0u)
    {
        eax = (eax & 0xffffff00u) | t16;
        goto L_101f9acc;
    }
    eax = (eax & 0xffffff00u) | t16;
    COW_AT(101f9c0f)
    g->ebx = 0u;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, COW_IMG(0x101f86b0u), 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_101f9c20: ;
    COW_AT(101f9c20)
    eax = eax & 0xffffff00u;
    goto L_101f9c22;
L_101f9c45: ;
    COW_AT(101f9c45)
    t191 = (uint32_t)(int16_t)rd16(self + 0x102u);
    wr32(sp0 - 0x24u, t191);
    t192 = (uint32_t)(int16_t)rd16(self + 0x100u);
    wr32(sp0 - 0x28u, t192);
    g->eax = t192;
    g->esp = sp0 - 0x20u;
    t193 = cow_thiscall(g, COW_IMG(0x101f80b0u), self, 2, t192, t191);
    eax = t193;
L_101fa2f4: ;
    COW_AT(101fa2f4)
    t194 = rd32(sp0 + 0x10u);
    wr32(self + 0xacu, t194);
    g->eax = eax;
    g->edx = t194;
    g->esp = sp0 - 0x20u;
    t195 = cow_thiscall(g, COW_IMG(0x101efca0u), self, 0);
    t196 = g->edx;
    g->edx = t196;
    cow_thiscall(g, COW_IMG(0x101faaf0u), self, 0);
    t197 = g->edx;
    if (rd32(self + 8u) == 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_101fa3d8;
    }
    eax = rd32(self + 8u);
    edx = t197;
    COW_AT(101fa317)
    if (arg3 != 6u) goto L_101fa375;
    COW_AT(101fa31c)
    wr16(eax + 0x38u, 0u);
    t198 = rd32(sp0 - 0x20u);
    wr8(rd32(self + 8u) + 0x30u, rd8(rd32(self + 8u) + 0x30u) & 0xfbu);
    t199 = rd32(rd32(self + 8u) + 0x34u) | 1u;
    wr32(rd32(self + 8u) + 0x34u, t199);
    wr32(rd32(self + 8u) + 0x7cu, 0u);
    t200 = rd32(self + 8u);
    t201 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
    wr16(self + 0xf6u, (uint16_t)arg3);
    wr16(self + 0xf8u, 0u);
    t202 = rd32(sp0 - 0x1cu);
    wr8(self + 0xf4u, t201 != 0u);
    t203 = rd32(sp0 - 0x18u);
    wr32(t200 + 0x80u, self + 0xf4u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = t202;
    g->edi = t198;
    g->ebp = t203;
    return;
L_101f9c61: ;
    COW_AT(101f9c61)
    t175 = (uint32_t)(int16_t)rd16(self + 0x102u);
    wr32(sp0 - 0x24u, t175);
    t176 = (uint32_t)(int16_t)rd16(self + 0x100u);
    wr32(sp0 - 0x28u, t176);
    g->edx = t176;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x101f80b0u), self, 2, t176, t175);
    t177 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    t178 = (uint32_t)(int16_t)rd16(self + 0x100u);
    wr32(sp0 - 0x30u, t178);
    t179 = rd32(self + 0xfcu);
    wr32(sp0 - 0x34u, t179);
    g->ebx = 0u;
    g->ebp = arg3;
    cow_call_regs(g, COW_IMG(0x101f8360u), t178, self, t177, 0, 5, t179, t178, 1u, 1u, 0u);
    t180 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t181 = rd32(COW_IMG(0x106218b8u));
    t182 = rd32(COW_IMG(0x106218b4u));
    wr32(sp0 + 0x1cu, t180);
    d183 = fr(g, (double)(int32_t)rd32(sp0 + 0x1cu) * (double)rdf32(COW_IMG(0x1032ac88u)));
    wrf32(self + 0x68u, (float)d183);
    wrf32(self + 0x58u, (float)d183);
    g->eax = t180;
    g->edx = t181 - t182;
    t184 = cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
    t185 = g->edx;
    if (rd8(sp0 + 0x18u) == 0u)
    {
        eax = t184;
        edx = t185;
    }
    else
    {
        eax = t184;
        edx = t185;
    COW_AT(101f9cc5)
        wr32(sp0 - 0x24u, 1u);
        g->ebx = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t186 = cow_thiscall(g, COW_IMG(0x101f8ea0u), self, 1, 1u);
        t187 = g->edx;
        eax = t186;
        edx = t187;
    }
    COW_AT(101f9cce)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t188 = cow_thiscall(g, COW_IMG(0x101f93d0u), self, 0);
    t189 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, COW_IMG(0x1035d2c0u));
    g->ebx = 0u;
    t190 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035d2c0u), 1u, 0u);
    eax = t190;
    goto L_101fa2f4;
L_101f9cec: ;
    COW_AT(101f9cec)
    t129 = (uint32_t)(int16_t)rd16(self + 0x102u);
    wr32(sp0 - 0x24u, t129);
    t130 = (uint32_t)(int16_t)rd16(self + 0x100u);
    wr32(sp0 - 0x28u, t130);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t131 = cow_thiscall(g, COW_IMG(0x101f80b0u), self, 2, t130, t129);
    t132 = g->ecx;
    t133 = rd32(self + 0xfcu);
    wr32(sp0 - 0x24u, t133);
    g->ecx = t132;
    g->edx = t133;
    t134 = cow_cdecl(g, COW_IMG(0x101f7480u), 1, t133);
    t135 = g->ecx;
    t136 = g->edx;
    if (t134 != 0x180u)
    {
        eax = t134;
        ecx = t135;
        edx = t136;
    COW_AT(101f9d28)
        if (eax != 0x17fu)
        {
    COW_AT(101f9d38)
            wr32(sp0 - 0x24u, eax);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x20u;
            t138 = cow_cdecl(g, COW_IMG(0x101f74e0u), 1, eax);
            t139 = g->ecx;
            wr8(self + 0xa46u, (uint8_t)t138);
            ecx = t139;
        }
        else
        {
    COW_AT(101f9d2f)
            wr8(self + 0xa46u, 1u);
        }
    COW_AT(101f9d47)
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        t140 = (ecx & 0xffffff00u) | rd8(self + 0xa46u);
        wr32(sp0 - 0x2cu, t140);
        t141 = (uint32_t)(int16_t)rd16(self + 0x100u);
        wr32(sp0 - 0x30u, t141);
        t142 = rd32(self + 0xfcu);
        wr32(sp0 - 0x34u, t142);
        eax = t142;
        edx = t141;
        loc_2c = t140;
        loc_30 = t141;
        loc_34 = t142;
    }
    else
    {
        edx = t136;
    COW_AT(101f9d19)
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 1u);
        t137 = (uint32_t)(int16_t)rd16(self + 0x100u);
        wr32(sp0 - 0x30u, t137);
        wr32(sp0 - 0x34u, edx);
        eax = t137;
        loc_2c = 1u;
        loc_30 = t137;
        loc_34 = edx;
    }
    COW_AT(101f9d5f)
    g->ebx = 0u;
    g->ebp = arg3;
    g->esp = sp0 - 0x20u;
    t143 = cow_call_regs(g, COW_IMG(0x101f8360u), eax, self, edx, 0, 5, loc_34, loc_30, loc_2c, 0u, 0u);
    t144 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    wr32(sp0 + 0x1cu, t144);
    d145 = fr(g, (double)(int32_t)rd32(sp0 + 0x1cu) * (double)rdf32(COW_IMG(0x1032ac88u)));
    wrf32(self + 0x68u, (float)d145);
    wrf32(self + 0x58u, (float)d145);
    g->edx = t144;
    t146 = cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
    t147 = g->edx;
    if (rd8(sp0 + 0x18u) == 0u)
    {
        eax = t146;
        edx = t147;
    }
    else
    {
        eax = t146;
        edx = t147;
    COW_AT(101f9d98)
        wr32(sp0 - 0x24u, 1u);
        g->ebx = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t148 = cow_thiscall(g, COW_IMG(0x101f8ea0u), self, 1, 1u);
        t149 = g->edx;
        eax = t148;
        edx = t149;
    }
    COW_AT(101f9da1)
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x101f93d0u), self, 0);
    t150 = g->edx;
    t151 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t152 = rd32(COW_IMG(0x106218b8u));
    t153 = rd32(COW_IMG(0x106218b4u));
    wr32(sp0 + 0x18u, t151);
    d154 = fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032ac88u)));
    wrf32(self + 0x68u, (float)d154);
    wrf32(self + 0x58u, (float)d154);
    g->eax = t152 - t153;
    g->edx = t150;
    t155 = cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
    t156 = g->edx;
    t157 = rd16(self + 0x14u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(self + 0x14u, (uint16_t)((t157 & 0xffff00fcu) | (t157 >> 8u | 8u) << 8u));
    t158 = rd32(COW_IMG(0x105781f8u));
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    if (t158 == 0u)
    {
        eax = t155;
        edx = (((t156 & 0xffff0000u) | t157) & 0xffff00fcu) | (uint32_t)(uint8_t)(t157 >> 8u | 8u) << 8u;
        edi = 0u;
    }
    else
    {
        eax = t155;
        ecx = t158;
        edx = (((t156 & 0xffff0000u) | t157) & 0xffff00fcu) | (uint32_t)(uint8_t)(t157 >> 8u | 8u) << 8u;
    COW_AT(101f9e01)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t159 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
        t160 = g->edx;
        if ((uint8_t)t159 == 0u)
        {
            eax = t159;
            edx = t160;
            edi = 0u;
        }
        else
        {
            edx = t160;
    COW_AT(101f9e0a)
            wr32(sp0 - 0x24u, sp0 - 0xcu);
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t161 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, rd32(rd32(COW_IMG(0x105781f8u)) + 8u), g->edx, 0, 1, sp0 - 0xcu);
            t162 = g->edx;
            eax = t161;
            edx = t162;
            edi = rd32(sp0 - 6u);
        }
    COW_AT(101f9e21)
    }
    COW_AT(101f9e25)
    if (rd32(COW_IMG(0x1057845cu)) == 0u) goto L_101f9e4b;
    ecx = rd32(COW_IMG(0x1057845cu));
    COW_AT(101f9e2f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t163 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t164 = g->edx;
    if ((uint8_t)t163 == 0u)
    {
        eax = t163;
        edx = t164;
        goto L_101f9e47;
    }
    COW_AT(101f9e38)
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    eax = rd32(COW_IMG(0x1057845cu));
    ecx = rd32(rd32(COW_IMG(0x1057845cu)) + 8u);
    edx = sp0 - 0xcu;
L_101f9e6c: ;
    COW_AT(101f9e6c)
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, ecx, g->edx, 0, 1, sp0 - 0xcu);
L_101f9e71: ;
    COW_AT(101f9e71)
L_101f9e75: ;
    COW_AT(101f9e75)
    t166 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t167 = rd32(COW_IMG(0x106218b8u));
    t168 = rd32(COW_IMG(0x106218b4u));
    wr32(sp0 + 0x18u, t166);
    d169 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x10331390u)));
    fpush(g, d169);
    g->esp = sp0 - 0x20u;
    t170 = cow_call_regs(g, COW_IMG(0x10311c6cu), t167 - t168, g->ecx, g->edx, 1, 0);
    wr16(self + 0x1cu, (uint16_t)t170);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, COW_IMG(0x1035d2c0u));
    t171 = rd16(sp0 - 0xau);
    wr16(self + 0x1eu, (uint16_t)(edi + (uint32_t)((int32_t)((uint32_t)(int16_t)t171 - (uint32_t)(int16_t)edi - (uint32_t)((int32_t)((uint32_t)(int16_t)t171 - (uint32_t)(int16_t)edi) >> 0x1fu)) >> 1u)));
    g->ebx = 0u;
    g->eax = edi + (uint32_t)((int32_t)((uint32_t)(int16_t)t171 - (uint32_t)(int16_t)edi - (uint32_t)((int32_t)((uint32_t)(int16_t)t171 - (uint32_t)(int16_t)edi) >> 0x1fu)) >> 1u);
    g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)t171 - (uint32_t)(int16_t)edi) >> 0x1fu);
    t172 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035d2c0u), 1u, 0u);
    t173 = g->edx;
    t174 = cow_call_regs(g, COW_IMG(0x101efb10u), t172, self, g->edx, 1, 0);
    eax = t174;
    goto L_101fa2f4;
L_101f9e47: ;
    COW_AT(101f9e47)
L_101f9e4b: ;
    COW_AT(101f9e4b)
    if (rd32(COW_IMG(0x1062193cu)) == 0u) goto L_101f9e75;
    ecx = rd32(COW_IMG(0x1062193cu));
    COW_AT(101f9e55)
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t165 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    if ((uint8_t)t165 == 0u) goto L_101f9e71;
    eax = t165;
    COW_AT(101f9e5e)
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    ecx = rd32(rd32(COW_IMG(0x1062193cu)) + 8u);
    edx = rd32(COW_IMG(0x1062193cu));
    goto L_101f9e6c;
L_101f9ed5: ;
    COW_AT(101f9ed5)
    t106 = (uint32_t)(int16_t)rd16(self + 0x102u);
    wr32(sp0 - 0x24u, t106);
    t107 = (uint32_t)(int16_t)rd16(self + 0x100u);
    wr32(sp0 - 0x28u, t107);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x101f80b0u), self, 2, t107, t106);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    t108 = (uint32_t)(int16_t)rd16(self + 0x100u);
    wr32(sp0 - 0x30u, t108);
    t109 = rd32(self + 0xfcu);
    wr32(sp0 - 0x34u, t109);
    g->ebx = 0u;
    g->ebp = arg3;
    t110 = cow_call_regs(g, COW_IMG(0x101f8360u), t109, self, t108, 0, 5, t109, t108, 1u, 1u, 0u);
    t111 = g->edx;
    if (rd8(sp0 + 0x18u) == 0u)
    {
        eax = t110;
        edx = t111;
    }
    else
    {
        eax = t110;
        edx = t111;
    COW_AT(101f9f0d)
        wr32(sp0 - 0x24u, 1u);
        g->ebx = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t112 = cow_thiscall(g, COW_IMG(0x101f8ea0u), self, 1, 1u);
        t113 = g->edx;
        eax = t112;
        edx = t113;
    }
    COW_AT(101f9f16)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t114 = cow_thiscall(g, COW_IMG(0x101f93d0u), self, 0);
    t115 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, COW_IMG(0x1035d2c0u));
    g->ebx = 0u;
    g->edx = t115;
    t116 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035d2c0u), 1u, 0u);
    t117 = g->edx;
    t118 = rd32(self + 0xfcu);
    wr32(sp0 - 0x24u, t118);
    t119 = cow_cdecl(g, COW_IMG(0x101f7480u), 1, t118);
    if (t119 == 0x180u)
    {
        eax = rd32(COW_IMG(0x106218b4u));
    COW_AT(101f9f95)
        t127 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - eax);
        wr32(sp0 + 0x18u, t127);
        d128 = fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032ac88u)));
        wrf32(self + 0x68u, (float)d128);
        wrf32(self + 0x58u, (float)d128);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
    }
    else
    {
        eax = rd32(COW_IMG(0x106218b4u));
    COW_AT(101f9f4a)
        t120 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - eax);
        t121 = rd32(COW_IMG(0x106218b8u));
        wr32(sp0 + 0x18u, t120);
        d122 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x1033a910u)));
        wrf32(self + 0x68u, (float)d122);
        wrf32(self + 0x58u, (float)d122);
        g->eax = t120;
        g->edx = t121 - eax;
        g->esp = sp0 - 0x20u;
        t123 = cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
        t124 = g->edx;
        wr32(sp0 - 0x24u, 0u);
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = arg3;
        t125 = cow_call_regs(g, COW_IMG(0x101fad70u), t123, self, t124, 0, 1, 0u);
        t126 = g->edx;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, COW_IMG(0x10384ff4u));
        g->ebx = 0u;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10384ff4u), 1u, 0u);
    }
L_101fa075: ;
    COW_AT(101fa075)
    if (rd32(rd32(COW_IMG(0x1066388cu)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1066388cu)) + 8u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1066388cu)) + 8u);
    COW_AT(101fa085)
        wr32(eax + 0x34u, rd32(eax + 0x34u) | 1u);
    }
    goto L_101fa2f4;
L_101f9fc0: ;
    COW_AT(101f9fc0)
    t88 = (uint32_t)(int16_t)rd16(self + 0x102u);
    wr32(sp0 - 0x24u, t88);
    t89 = (uint32_t)(int16_t)rd16(self + 0x100u);
    wr32(sp0 - 0x28u, t89);
    g->edx = t89;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x101f80b0u), self, 2, t89, t88);
    t90 = g->edx;
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    t91 = (uint32_t)(int16_t)rd16(self + 0x100u);
    wr32(sp0 - 0x30u, t91);
    t92 = rd32(self + 0xfcu);
    wr32(sp0 - 0x34u, t92);
    g->ebx = 0u;
    g->ebp = arg3;
    t93 = cow_call_regs(g, COW_IMG(0x101f8360u), t91, self, t90, 0, 5, t92, t91, 1u, 1u, 1u);
    t94 = g->edx;
    if (rd8(sp0 + 0x18u) == 0u)
    {
        eax = t93;
        edx = t94;
    }
    else
    {
        eax = t93;
        edx = t94;
    COW_AT(101f9ff9)
        wr32(sp0 - 0x24u, 1u);
        g->ebx = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t95 = cow_thiscall(g, COW_IMG(0x101f8ea0u), self, 1, 1u);
        t96 = g->edx;
        eax = t95;
        edx = t96;
    }
    COW_AT(101fa002)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, COW_IMG(0x1035d2c0u));
    g->ebx = 0u;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035d2c0u), 1u, 0u);
    t97 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t98 = rd32(COW_IMG(0x106218b8u));
    t99 = rd32(COW_IMG(0x106218b4u));
    wr32(sp0 + 0x18u, t97);
    d100 = fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032ac88u)));
    wrf32(self + 0x68u, (float)d100);
    wrf32(self + 0x58u, (float)d100);
    g->eax = t97;
    t101 = cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
    t102 = (uint32_t)(int16_t)rd16(self + 0x22u);
    t103 = rd16(self + 0x20u);
    wr32(sp0 + 0x18u, t102);
    t104 = rd32(sp0 + 0x18u);
    wr8(self + 0x14u, rd8(self + 0x14u) & 0xfcu);
    wr32(sp0 + 0x18u, (uint32_t)(int16_t)t103);
    wrf32(sp0 - 0x24u, (float)(double)(float)(double)(int32_t)t104);
    d105 = (double)(float)(double)(int32_t)rd32(sp0 + 0x18u);
    wrf32(sp0 - 0x28u, (float)d105);
    cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits(d105), cow_f2bits((double)(float)(double)(int32_t)t104));
    wr32(sp0 + 0x10u, 8u);
    goto L_101fa075;
L_101fa08e: ;
    COW_AT(101fa08e)
    wr8(sp0 + 0x18u, (uint8_t)eax);
    wr8(self + 0x10cu, (uint8_t)eax == 0u);
    wr8(sp0 + 8u, (uint8_t)eax);
    wr8(sp0 + 0x14u, 1u);
    wr8(sp0 + 0x1cu, 1u);
L_101fa0ab: ;
    COW_AT(101fa0ab)
    t30 = (uint32_t)(int16_t)rd16(self + 0x102u);
    wr32(sp0 - 0x24u, t30);
    t31 = (uint32_t)(int16_t)rd16(self + 0x100u);
    wr32(sp0 - 0x28u, t31);
    g->eax = t31;
    g->esp = sp0 - 0x20u;
    t32 = cow_thiscall(g, COW_IMG(0x101f80b0u), self, 2, t31, t30);
    t33 = g->ecx;
    t34 = rd32(self + 0xfcu);
    wr32(sp0 - 0x24u, t34);
    g->ecx = t33;
    g->edx = t34;
    t35 = cow_cdecl(g, COW_IMG(0x101f7480u), 1, t34);
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 != 0x180u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
    COW_AT(101fa149)
        if (eax != 0x17fu)
        {
    COW_AT(101fa159)
            wr32(sp0 - 0x24u, eax);
            g->eax = eax;
            g->esp = sp0 - 0x20u;
            t47 = cow_cdecl(g, COW_IMG(0x101f74e0u), 1, eax);
            wr8(self + 0xa46u, (uint8_t)t47);
            eax = t47;
        }
        else
        {
    COW_AT(101fa150)
            wr8(self + 0xa46u, 1u);
        }
    COW_AT(101fa168)
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        t48 = (eax & 0xffffff00u) | rd8(self + 0xa46u);
        wr32(sp0 - 0x2cu, t48);
        t49 = (uint32_t)(int16_t)rd16(self + 0x100u);
        wr32(sp0 - 0x30u, t49);
        t50 = rd32(self + 0xfcu);
        wr32(sp0 - 0x34u, t50);
        g->ebx = 0u;
        g->ebp = arg3;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x101f8360u), t48, self, t50, 0, 5, t50, t49, t48, 1u, 0u);
        t51 = g->edx;
        t52 = rd32(sp0 + 8u);
        wr32(sp0 - 0x24u, t52);
        g->eax = t52;
        g->edx = t51;
        t53 = cow_thiscall(g, COW_IMG(0x101f7db0u), self, 1, t52);
        t54 = g->edx;
        wr32(sp0 - 0x24u, 0u);
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = arg3;
        t55 = cow_call_regs(g, COW_IMG(0x101fad70u), t53, self, t54, 0, 1, 0u);
        t56 = g->edx;
        if (rd8(sp0 + 0x18u) != 0u)
        {
            eax = t55;
            edx = t56;
            goto L_101fa1a6;
        }
        eax = t55;
        edx = t56;
    COW_AT(101fa1a2)
        if (arg3 != 0u) goto L_101fa1af;
L_101fa1a6: ;
    COW_AT(101fa1a6)
        wr32(sp0 - 0x24u, 1u);
        g->ebx = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t57 = cow_thiscall(g, COW_IMG(0x101f8ea0u), self, 1, 1u);
        t58 = g->edx;
        eax = t57;
        edx = t58;
L_101fa1af: ;
    COW_AT(101fa1af)
        if (rd8(self + 0xa46u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xa46u);
    COW_AT(101fa1c2)
            g->eax = eax;
            g->esp = sp0 - 0x20u;
            t60 = cow_fastcall(g, COW_IMG(0x101f9370u), self, edx, 0);
            eax = t60;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xa46u);
    COW_AT(101fa1bb)
            g->eax = eax;
            g->esp = sp0 - 0x20u;
            t59 = cow_thiscall(g, COW_IMG(0x101f93d0u), self, 0);
            eax = t59;
        }
    COW_AT(101fa1c7)
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, 1u);
        t61 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
        wr32(sp0 - 0x34u, t61);
        g->eax = eax;
        g->edx = t61;
        g->esp = sp0 - 0x20u;
        t62 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t61, 1u, 1u, 0u, 0u);
        t63 = g->edx;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, COW_IMG(0x1035d2c0u));
        g->ebx = 0u;
        g->edx = t63;
        t64 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035d2c0u), 1u, 0u);
        t65 = g->edx;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, COW_IMG(0x1038502cu));
        g->ebx = 0u;
        g->edx = t65;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038502cu), 1u, 0u);
        t66 = g->edx;
        if (rd8(sp0 + 0x1cu) != 0u)
        {
            edx = t66;
    COW_AT(101fa20b)
            t67 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
            t68 = rd32(COW_IMG(0x106218b8u));
            t69 = rd32(COW_IMG(0x106218b4u));
            wr32(sp0 + 0x18u, t67);
            d70 = fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032ac88u)));
            wrf32(self + 0x68u, (float)d70);
            wrf32(self + 0x58u, (float)d70);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
        }
    }
    else
    {
        eax = t35;
        edx = t37;
    COW_AT(101fa0d8)
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, 1u);
        t38 = (uint32_t)(int16_t)rd16(self + 0x100u);
        wr32(sp0 - 0x30u, t38);
        wr32(sp0 - 0x34u, edx);
        g->ebx = 0u;
        g->ebp = arg3;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x101f8360u), eax, self, edx, 0, 5, edx, t38, 1u, 1u, 0u);
        t39 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        t40 = rd32(COW_IMG(0x106218b8u));
        t41 = rd32(COW_IMG(0x106218b4u));
        wr32(sp0 + 0x18u, t39);
        d42 = fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032ac88u)));
        wrf32(self + 0x68u, (float)d42);
        wrf32(self + 0x58u, (float)d42);
        g->eax = t39;
        t43 = cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, 1u);
        t44 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
        wr32(sp0 - 0x34u, t44);
        g->edx = t44;
        t45 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t44, 1u, 1u, 0u, 0u);
        t46 = g->edx;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, COW_IMG(0x1035d2c0u));
        g->ebx = 0u;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035d2c0u), 1u, 0u);
    }
    COW_AT(101fa236)
    t71 = (uint32_t)(int16_t)rd16(self + 0x22u);
    t72 = rd16(self + 0x20u);
    wr32(sp0 + 0x18u, t71);
    t73 = rd32(sp0 + 0x18u);
    wr32(sp0 + 0x18u, (uint32_t)(int16_t)t72);
    wrf32(sp0 - 0x24u, (float)(double)(float)(double)(int32_t)t73);
    d74 = (double)(float)(double)(int32_t)rd32(sp0 + 0x18u);
    wrf32(sp0 - 0x28u, (float)d74);
    g->eax = (uint32_t)(int16_t)t72;
    g->edx = t71;
    g->esp = sp0 - 0x20u;
    t75 = cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits(d74), cow_f2bits((double)(float)(double)(int32_t)t73));
    t76 = g->edx;
    if (rd32(COW_IMG(0x10663884u)) == 0u)
    {
        eax = t75;
        ecx = rd32(COW_IMG(0x10663884u));
        edx = t76;
    }
    else
    {
        eax = t75;
        ecx = rd32(COW_IMG(0x10663884u));
        edx = t76;
    COW_AT(101fa269)
        g->esp = sp0 - 0x20u;
        t77 = cow_call_regs(g, COW_IMG(0x101f7c00u), eax, ecx, edx, 1, 0);
        t78 = g->edx;
        eax = t77;
        ecx = rd32(COW_IMG(0x10663884u));
        edx = t78;
    }
    COW_AT(101fa274)
    if (rd8(sp0 + 0x14u) != 0u)
    {
    COW_AT(101fa27a)
        if (rd32(COW_IMG(0x1066389cu)) == 0u)
        {
            eax = rd32(COW_IMG(0x1066389cu));
            goto L_101fa2ab;
        }
        eax = rd32(COW_IMG(0x1066389cu));
    COW_AT(101fa283)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t79 = cow_thiscall(g, COW_IMG(0x1011ba40u), eax, 0);
        t80 = g->edx;
        if ((uint8_t)t79 == 0u)
        {
            eax = t79;
            edx = t80;
            goto L_101fa2a5;
        }
        eax = t79;
    COW_AT(101fa28e)
        wr32(sp0 - 0x24u, 0u);
        t81 = rd32(rd32(COW_IMG(0x1066389cu)) + 8u);
        wr32(sp0 - 0x28u, t81);
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t82 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t81, 2, t81, 0u);
        eax = t82;
    }
    goto L_101fa2f4;
L_101fa2a5: ;
    COW_AT(101fa2a5)
    ecx = rd32(COW_IMG(0x10663884u));
L_101fa2ab: ;
    COW_AT(101fa2ab)
    if (ecx != 0u)
    {
    COW_AT(101fa2af)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t83 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
        t84 = g->edx;
        if ((uint8_t)t83 == 0u)
        {
            eax = t83;
        }
        else
        {
            edx = t84;
    COW_AT(101fa2b8)
            wr32(sp0 - 0x24u, 0u);
            t85 = rd32(rd32(COW_IMG(0x10663884u)) + 8u);
            wr32(sp0 - 0x28u, t85);
            g->eax = rd32(COW_IMG(0x10663884u));
            t86 = rd32(COW_IMG(0x10663884u));
            g->esp = sp0 - 0x20u;
            t87 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t85, 0u);
            eax = t87;
        }
    }
    goto L_101fa2f4;
L_101fa2ce: ;
    COW_AT(101fa2ce)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t25 = cow_thiscall(g, COW_IMG(0x101fb1b0u), self, 0);
    t26 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, COW_IMG(0x1035d2c0u));
    g->ebx = 0u;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035d2c0u), 1u, 0u);
    t28 = g->edx;
    wr32(sp0 - 0x24u, 0xc28c0000u);
    wr32(sp0 - 0x28u, 0u);
    t29 = cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, 0u, 0xc28c0000u);
    eax = t29;
    goto L_101fa2f4;
L_101fa375: ;
    COW_AT(101fa375)
    if (rd8(self + 0x10au) == 0u)
    {
    COW_AT(101fa37d)
        wr8(eax + 0x30u, rd8(eax + 0x30u) & 0xfbu);
    }
    COW_AT(101fa381)
    if (arg3 == 0u) goto L_101fa38c;
    COW_AT(101fa385)
    if (arg3 == 5u) goto L_101fa38c;
    COW_AT(101fa38a)
L_101fa3c5: ;
    COW_AT(101fa3c5)
    if (arg3 == 1u) goto L_101fa3cf;
    COW_AT(101fa3ca)
    if (arg3 != 2u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_101fa3d8;
    }
L_101fa3cf: ;
    COW_AT(101fa3cf)
    wr8(rd32(self + 8u) + 0x86u, 0u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
L_101fa3d8: ;
    COW_AT(101fa3d8)
    g->ebx = loc_14;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_18;
    return;
L_101fa38c: ;
    COW_AT(101fa38c)
    wr32(rd32(self + 8u) + 0x7cu, COW_IMG(0x101faff0u));
    t204 = rd32(self + 8u);
    t205 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
    wr16(self + 0xf6u, 5u);
    wr8(self + 0xf4u, t205 != 0u);
    wr16(self + 0xf8u, 0u);
    wr32(t204 + 0x80u, self + 0xf4u);
    goto L_101fa3c5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f9a50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f9a66u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ecx = arg3;
        wr32(sp0 - 0x20u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101f9a77u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ecx = arg3;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101f9a80u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ecx = arg3;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101f9a90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101f9aa2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101f9abcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->edx = arg3 - 2u;
        g->ebx = 0u;
        g->ebp = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101f9ac5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->edx = arg3 - 6u;
        g->ebx = 0u;
        g->ebp = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101f9accu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f9b87u:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9b9au:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9ba1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->edx = arg3 - 6u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f9ba5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f9babu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f9bb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9bd0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f9be9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f9bfeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f9c0fu:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9c20u:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9c22u:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9c3eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9c45u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9c61u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9cc5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9cceu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9cecu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9d19u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9d28u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9d2fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9d38u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9d47u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9d5fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->ebp = arg3;
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f9d98u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9da1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9e01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9e0au:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9e21u:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9e25u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9e2fu:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9e38u:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9e47u:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9e4bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9e55u:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9e5eu:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9e6cu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101f9e71u:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f9e75u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9ed5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9f0du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9f16u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9f4au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9f95u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9fc0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101f9ff9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa002u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa075u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa085u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa08eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa0abu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa0d8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa149u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa150u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa159u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa168u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa1a2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa1a6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa1afu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa1bbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101fa1c2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101fa1c7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa20bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa236u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa269u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa274u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa27au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa283u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa28eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa2a5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa2abu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa2afu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa2b8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa2ceu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa2f4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa317u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa31cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa375u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa37du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa381u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa385u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa38au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa38cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa3c5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa3cau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101fa3cfu:
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101fa3d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9a50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f9a50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
