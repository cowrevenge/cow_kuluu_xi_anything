/* f_0x100224d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100224d0(Guest* g)
{
    double d29;
    double d30;
    double d32;
    double d36;
    double d37;
    double d38;
    double d39;
    double d46;
    double d68;
    double d69;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    uint32_t t216;
    uint32_t t217;
    uint32_t t218;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10022535u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10022535;
    case 0x1002253eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1002253e;
    case 0x10022559u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; zf = g->zf; goto E_10022559;
    case 0x1002255du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_1002255d;
    case 0x10022639u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; zf = g->zf; goto E_10022639;
    case 0x1002263bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_1002263b;
    case 0x1002263fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_1002263f;
    case 0x10022647u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022647;
    case 0x10022656u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022656;
    case 0x1002265du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_1002265d;
    case 0x10022686u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022686;
    case 0x1002268bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_1002268b;
    case 0x100226e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_100226e1;
    case 0x100226f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_100226f8;
    case 0x1002270au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_1002270a;
    case 0x10022739u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022739;
    case 0x10022757u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022757;
    case 0x1002277au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002277a;
    case 0x10022787u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10022787;
    case 0x1002278fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002278f;
    case 0x1002279au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1002279a;
    case 0x100228a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100228a4;
    case 0x100228aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100228ae;
    case 0x100228b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100228b9;
    case 0x100228c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100228c5;
    case 0x100228c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100228c9;
    case 0x100228ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100228cc;
    case 0x100228e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100228e9;
    case 0x100228fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100228fd;
    case 0x10022908u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10022908;
    case 0x10022a0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10022a0f;
    case 0x10022a13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10022a13;
    case 0x10022a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10022a16;
    case 0x10022a33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10022a33;
    case 0x10022b24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022b24;
    case 0x10022b2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022b2c;
    case 0x10022b61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022b61;
    case 0x10022b76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022b76;
    case 0x10022b7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022b7d;
    case 0x10022b85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022b85;
    case 0x10022b91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022b91;
    case 0x10022b95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022b95;
    case 0x10022b98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022b98;
    case 0x10022badu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022bad;
    case 0x10022bb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022bb5;
    case 0x10022bd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022bd1;
    case 0x10022bd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022bd7;
    case 0x10022be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022be0;
    case 0x10022be9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022be9;
    case 0x10022bf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022bf5;
    case 0x10022c0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022c0a;
    case 0x10022c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022c13;
    case 0x10022c33u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022c33;
    case 0x10022c44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022c44;
    case 0x10022c68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022c68;
    case 0x10022c74u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022c74;
    case 0x10022c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022c8d;
    case 0x10022cb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022cb9;
    case 0x10022ce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022ce4;
    case 0x10022ceau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022cea;
    case 0x10022cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022cfd;
    case 0x10022d5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022d5a;
    case 0x10022d80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022d80;
    case 0x10022d94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022d94;
    case 0x10022da9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022da9;
    case 0x10022dbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022dbb;
    case 0x10022dcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022dca;
    case 0x10022dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022dd5;
    case 0x10022de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022de1;
    case 0x10022e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022e09;
    case 0x10022e20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022e20;
    case 0x10022e44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022e44;
    case 0x10022e50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022e50;
    case 0x10022e6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022e6f;
    case 0x10022e9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022e9b;
    case 0x10022ecau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022eca;
    case 0x10022ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022ed0;
    case 0x10022ee3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022ee3;
    case 0x10022f3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022f3c;
    case 0x10022f66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10022f66;
    case 0x10022f76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022f76;
    case 0x10022f83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_4 = rd32(sp0 - 4u); goto E_10022f83;
    case 0x10022f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10022f90;
    default: break;
    }
#endif

    COW_AT(100224d0)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 8u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10022fa0u), 1, 0u);
    t1 = g->edx;
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0x16u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t2);
    g->eax = t2;
    t3 = cow_thiscall(g, rd32(rd32(t2) + 0xc8u), rd32(t2), 3, t2, 0x16u, 1u);
    t4 = rd8(rd32(COW_IMG(0x1045666cu)) + 0x921u);
    t5 = rd32(COW_IMG(0x1045666cu));
    t6 = rd32(self + 0x36u);
    t7 = rd32(sp0 + 0x14u);
    wr8(sp0 - 0xeu, 0u);
    wr8(sp0 - 0xdu, (uint8_t)t4);
    t8 = (rd32(t7 + 0x40u) + 0xfu & 0xffffff00u) | (rd32(t7 + 0x40u) + 0xfu & 0xf0u);
    wr32(COW_IMG(0x10456e40u), t8);
    if ((rd8(arg2 + 0x30u) & 0x10u) == 0u)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
    }
    else
    {
        eax = t8;
        ebx = t6;
        esi = t7;
    COW_AT(10022535)
        if (rd8(COW_IMG(0x10457460u)) != 1u)
        {
            loc_14 = in_ebx;
            loc_18 = in_ebp;
            loc_1c = in_esi;
            loc_20 = in_edi;
            loc_8 = self;
        }
        else
        {
    COW_AT(1002253e)
            wr32(sp0 - 0x24u, esi);
            wr32(sp0 - 0x28u, eax);
            t9 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x2cu, t9);
            wr32(sp0 - 0x30u, arg2);
            t10 = rd32(sp0 + 4u);
            wr32(sp0 - 0x34u, t10);
            g->eax = t10;
            g->esp = sp0 - 0x20u;
            t11 = cow_thiscall(g, COW_IMG(0x10023290u), self, 5, t10, arg2, t9, eax, esi);
            if (rd8(esi + 0x3cu) == 0u)
            {
                loc_14 = in_ebx;
                loc_18 = in_ebp;
                loc_1c = in_esi;
                loc_20 = in_edi;
                loc_8 = self;
            }
            else
            {
    COW_AT(10022559)
                wr8(esi + 0x3cu, 0u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_8 = rd32(sp0 - 8u);
            }
        }
    COW_AT(1002255d)
        t12 = rd32(COW_IMG(0x103515bcu));
        t13 = rd32(COW_IMG(0x104574acu));
        t14 = rd16(COW_IMG(0x103515beu));
        t15 = rd16(COW_IMG(0x104574aeu));
        wr32(sp0 + 0x14u, 0u);
        t16 = ((t12 >> 7u & 0xfffffffeu) * (t13 >> 8u) & 0xff00u) | ((((t13 >> 8u & 0xffff0000u) | t14) * ((esi & 0xffff0000u) | t15) & 0x7f80u) | 0xffc00000u) << 9u | (uint8_t)(t12 * t13 >> 7u);
        wr32(sp0 - 0x24u, t16);
        wr32(sp0 - 0x28u, 0x3cu);
        t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x2cu, t17);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(rd32(t17) + 0xc8u), rd32(t17), 3, t17, 0x3cu, t16);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x2cu, t18);
        cow_thiscall(g, rd32(rd32(t18) + 0xf4u), rd32(t18), 3, t18, 0u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x2cu, t19);
        cow_thiscall(g, rd32(rd32(t19) + 0xf4u), rd32(t19), 3, t19, 1u, 0u);
        t20 = rd32(COW_IMG(0x1045666cu));
        wr32(COW_IMG(0x10456e44u), 0u);
        wr32(COW_IMG(0x10456e48u), 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 2u);
        wr32(sp0 - 0x2cu, 0u);
        t21 = rd32(t20 + 0xcu);
        wr32(sp0 - 0x30u, t21);
        cow_thiscall(g, rd32(rd32(t21) + 0xfcu), rd32(t21), 4, t21, 0u, 2u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 5u);
        wr32(sp0 - 0x2cu, 0u);
        t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x30u, t22);
        g->eax = t22;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t23 = rd32(t22);
        t24 = rd32(COW_IMG(0x1045666cu));
        t25 = cow_thiscall(g, rd32(t23 + 0xfcu), t23, 4, t22, 0u, 5u, 0u);
        t26 = g->ecx;
        t27 = g->edx;
        if (rd16(ebx) == 0xffffu)
        {
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
        }
        else
        {
            eax = (t25 & 0xffff0000u) | rd16(ebx);
            ecx = t26;
            edx = t27;
            ebp = t16;
    COW_AT(10022639)
            esi = 0u;
            edi = self;
L_1002263f: ;
    COW_AT(1002263f)
            if ((int8_t)(eax >> 8u) >= 0)
            {
    COW_AT(10022bb5)
                t121 = (esi & 0xffff0000u) | rd16(ebx + 2u);
                wr32(sp0 - 4u, t121);
                wr32(sp0 + 0xcu, t121);
                if ((int32_t)(uint16_t)eax > 17235)
                {
                    eax = (uint16_t)eax;
                    esi = t121;
    COW_AT(10022dca)
                    if (eax == 0x5453u)
                    {
    COW_AT(10022dd5)
                        if (rd8(sp0 - 0xeu) != 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(sp0 - 0xeu);
                        }
                        else
                        {
    COW_AT(10022de1)
                            t170 = rd32(COW_IMG(0x1045b630u));
                            wr32(sp0 + 0xcu, (uint16_t)esi);
                            t171 = (uint16_t)esi * 0x20u + 0x40u;
                            if ((int32_t)(t170 + (uint16_t)esi + 2u) < 512)
                            {
                                eax = rd32(COW_IMG(0x10457154u));
                                edi = t171;
    COW_AT(10022e50)
                                wr32(sp0 - 0x24u, 0x1000u);
                                wr32(sp0 - 0x28u, sp0 - 0xcu);
                                wr32(sp0 - 0x2cu, edi);
                                t181 = rd32(COW_IMG(0x1045b630u)) << 5u;
                                wr32(sp0 - 0x30u, t181);
                                wr32(sp0 - 0x34u, eax);
                                g->eax = eax;
                                g->edx = rd32(eax);
                                t182 = rd32(eax);
                                g->esp = sp0 - 0x20u;
                                t183 = cow_thiscall(g, rd32(t182 + 0x2cu), t181, 5, eax, t181, edi, sp0 - 0xcu, 0x1000u);
                                t184 = g->ecx;
                                t185 = g->edx;
                                if (t183 == 0u) goto L_10022e9b;
                                eax = t183;
                                ecx = t184;
                                edx = t185;
L_10022e6f: ;
    COW_AT(10022e6f)
                                wr32(sp0 - 0x24u, 0u);
                                g->esp = sp0 - 0x20u;
                                cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0u);   /* kernel32.dll!Sleep */
                                wr32(sp0 - 0x24u, 0x1000u);
                                wr32(sp0 - 0x28u, sp0 - 0xcu);
                                wr32(sp0 - 0x2cu, edi);
                                t186 = rd32(COW_IMG(0x1045b630u)) << 5u;
                                wr32(sp0 - 0x30u, t186);
                                wr32(sp0 - 0x34u, rd32(COW_IMG(0x10457154u)));
                                g->eax = rd32(COW_IMG(0x10457154u));
                                g->edx = rd32(rd32(COW_IMG(0x10457154u)));
                                t187 = rd32(COW_IMG(0x10457154u));
                                t188 = rd32(rd32(COW_IMG(0x10457154u)));
                                t189 = cow_thiscall(g, rd32(t188 + 0x2cu), t186, 5, t187, t186, edi, sp0 - 0xcu, 0x1000u);
                                t190 = g->ecx;
                                t191 = g->edx;
                                if (t189 != 0u)
                                {
                                    eax = t189;
                                    ecx = t190;
                                    edx = t191;
                                    goto L_10022e6f;
                                }
                            }
                            else
                            {
                                eax = rd32(COW_IMG(0x10457154u));
                                edi = t171;
    COW_AT(10022e09)
                                wr32(sp0 - 0x24u, 0x2000u);
                                wr32(sp0 - 0x28u, sp0 - 0xcu);
                                wr32(sp0 - 0x2cu, edi);
                                wr32(sp0 - 0x30u, 0u);
                                wr32(sp0 - 0x34u, eax);
                                g->eax = eax;
                                g->edx = sp0 - 0xcu;
                                t172 = rd32(eax);
                                g->esp = sp0 - 0x20u;
                                t173 = cow_thiscall(g, rd32(t172 + 0x2cu), t172, 5, eax, 0u, edi, sp0 - 0xcu, 0x2000u);
                                t174 = g->ecx;
                                t175 = g->edx;
                                if (t173 == 0u) goto L_10022e44;
                                eax = t173;
                                ecx = t174;
                                edx = t175;
L_10022e20: ;
    COW_AT(10022e20)
                                wr32(sp0 - 0x24u, 0u);
                                g->esp = sp0 - 0x20u;
                                cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0u);   /* kernel32.dll!Sleep */
                                wr32(sp0 - 0x24u, 0x2000u);
                                wr32(sp0 - 0x28u, sp0 - 0xcu);
                                wr32(sp0 - 0x2cu, edi);
                                wr32(sp0 - 0x30u, 0u);
                                wr32(sp0 - 0x34u, rd32(COW_IMG(0x10457154u)));
                                g->eax = rd32(COW_IMG(0x10457154u));
                                g->edx = sp0 - 0xcu;
                                t176 = rd32(COW_IMG(0x10457154u));
                                t177 = rd32(rd32(COW_IMG(0x10457154u)));
                                t178 = cow_thiscall(g, rd32(t177 + 0x2cu), t177, 5, t176, 0u, edi, sp0 - 0xcu, 0x2000u);
                                t179 = g->ecx;
                                t180 = g->edx;
                                if (t178 != 0u)
                                {
                                    eax = t178;
                                    ecx = t179;
                                    edx = t180;
                                    goto L_10022e20;
                                }
L_10022e44: ;
    COW_AT(10022e44)
                                wr32(COW_IMG(0x1045b630u), 0u);
                            }
L_10022e9b: ;
    COW_AT(10022e9b)
                            t192 = rd32(sp0 - 0xcu);
                            wr32(sp0 - 0x24u, t192);
                            wr32(sp0 - 0x28u, ebx + 4u);
                            t193 = rd32(sp0 + 0xcu);
                            wr32(sp0 - 0x2cu, t193);
                            g->eax = ebx + 4u;
                            t194 = rd32(sp0 - 8u);
                            g->esp = sp0 - 0x20u;
                            t195 = cow_thiscall(g, COW_IMG(0x100230d0u), t194, 3, t193, ebx + 4u, t192);
                            t196 = g->ecx;
                            wr32(sp0 + 4u, (uint16_t)t195);
                            wr32(sp0 - 0x24u, rd32(COW_IMG(0x10457154u)));
                            g->eax = rd32(COW_IMG(0x10457154u));
                            g->edx = rd32(rd32(COW_IMG(0x10457154u)));
                            t197 = rd32(COW_IMG(0x10457154u));
                            t198 = rd32(rd32(COW_IMG(0x10457154u)));
                            t199 = cow_thiscall(g, rd32(t198 + 0x30u), t196, 1, t197);
                            t200 = g->ecx;
                            t201 = g->edx;
                            if (t199 == 0u)
                            {
                                eax = t199;
                                ecx = t200;
                                edx = t201;
                            }
                            else
                            {
                                eax = t199;
                                ecx = t200;
                                edx = t201;
    COW_AT(10022eca)
                                edi = rd32(COW_IMG(0x103290f8u));
L_10022ed0: ;
    COW_AT(10022ed0)
                                wr32(sp0 - 0x24u, 0u);
                                g->edx = edx;
                                g->esp = sp0 - 0x20u;
                                cow_thiscall(g, edi, ecx, 1, 0u);
                                t202 = g->edx;
                                wr32(sp0 - 0x24u, rd32(COW_IMG(0x10457154u)));
                                g->eax = rd32(COW_IMG(0x10457154u));
                                g->edx = t202;
                                t203 = rd32(COW_IMG(0x10457154u));
                                t204 = rd32(rd32(COW_IMG(0x10457154u)));
                                t205 = cow_thiscall(g, rd32(t204 + 0x30u), t204, 1, t203);
                                t206 = g->ecx;
                                t207 = g->edx;
                                if (t205 != 0u)
                                {
                                    eax = t205;
                                    ecx = t206;
                                    edx = t207;
                                    goto L_10022ed0;
                                }
                                eax = t205;
                                ecx = t206;
                                edx = t207;
                            }
    COW_AT(10022ee3)
                            wr32(sp0 - 0x24u, 0x112u);
                            g->esp = sp0 - 0x20u;
                            cow_cdecl(g, COW_IMG(0x10022fa0u), 1, 0x112u);
                            wr32(sp0 - 0x24u, 0x20u);
                            wr32(sp0 - 0x28u, rd32(COW_IMG(0x10457154u)));
                            wr32(sp0 - 0x2cu, 0u);
                            t208 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x30u, t208);
                            g->edx = rd32(COW_IMG(0x10457154u));
                            t209 = rd32(COW_IMG(0x10457154u));
                            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t208, 0u, t209, 0x20u);
                            t210 = g->edx;
                            t211 = rd32(sp0 + 0xcu);
                            wr32(sp0 - 0x24u, t211);
                            wr32(sp0 - 0x28u, rd32(COW_IMG(0x1045b630u)));
                            wr32(sp0 - 0x2cu, 5u);
                            g->ebx = ebx;
                            g->eax = t211;
                            t212 = cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, 5u, rd32(COW_IMG(0x1045b630u)), t211);
                            wr32(sp0 - 0x24u, ebp);
                            wr32(sp0 - 0x28u, COW_IMG(0x10456e44u));
                            g->ebx = ebx;
                            g->edx = arg2;
                            t213 = cow_thiscall(g, COW_IMG(0x10033800u), arg2 + 0x48u, 2, COW_IMG(0x10456e44u), ebp);
                            t214 = g->edx;
                            if ((uint8_t)t213 != 0u)
                            {
                                edx = t214;
    COW_AT(10022f3c)
                                t215 = rd32(sp0 + 0xcu);
                                wr32(sp0 - 0x24u, t215);
                                wr32(sp0 - 0x28u, rd32(COW_IMG(0x1045b630u)));
                                wr32(sp0 - 0x2cu, 5u);
                                g->ebx = ebx;
                                g->esp = sp0 - 0x20u;
                                cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, 5u, rd32(COW_IMG(0x1045b630u)), t215);
                                t216 = rd32(sp0 + 0x14u);
                                wr32(sp0 - 0x24u, t216);
                                cow_fastcall(g, COW_IMG(0x10033a70u), arg2 + 0x48u, t216, 1, t216);
                            }
    COW_AT(10022f66)
                            t217 = rd32(COW_IMG(0x1045b630u)) + rd32(sp0 + 4u);
                            t218 = rd32(sp0 + 4u);
                            wr32(COW_IMG(0x1045b630u), t217);
                            eax = t217;
                            ecx = t218;
                        }
    COW_AT(10022f76)
                        edx = (uint16_t)esi * 5u;
                        ebx = ebx + (uint16_t)esi * 0xau + 0x18u;
                        esi = (uint16_t)esi;
                    }
                }
                else
                {
                    esi = t121;
                    zf = (uint16_t)eax == 0x4353u;
                    eax = (uint16_t)eax;
                    loc_4 = t121;
    COW_AT(10022bd1)
                    if (zf)
                    {
    COW_AT(10022dbb)
                        ebx = ebx + (uint16_t)esi * 2u + 0xcu;
                        esi = (uint16_t)esi;
                    }
                    else
                    {
    COW_AT(10022bd7)
                        if (eax == 0x43u)
                        {
    COW_AT(10022da9)
                            ecx = (uint16_t)esi * 5u;
                            ebx = ebx + (uint16_t)esi * 0xau + 4u;
                            esi = (uint16_t)esi;
                        }
                        else
                        {
    COW_AT(10022be0)
                            if (eax == 0x54u)
                            {
    COW_AT(10022be9)
                                if (rd8(sp0 - 0xeu) == 0u)
                                {
    COW_AT(10022bf5)
                                    if (!(rd8(rd32(sp0 - 8u) + 0x34u) & 1u))
                                    {
                                        eax = (uint16_t)esi * 3u;
                                        edi = (uint16_t)esi;
                                    }
                                    else
                                    {
                                        eax = (uint16_t)esi * 3u;
                                        edi = (uint16_t)esi;
    COW_AT(10022c0a)
                                        wr32(sp0 + 0xcu, esi * 2u);
                                        eax = eax * 2u;
                                    }
    COW_AT(10022c13)
                                    if ((int32_t)(eax + rd32(COW_IMG(0x1045b62cu))) < 1024)
                                    {
                                        edx = rd32(rd32(COW_IMG(0x10457150u)));
                                        esi = eax << 5u;
                                        eax = rd32(COW_IMG(0x10457150u));
    COW_AT(10022c74)
                                        wr32(sp0 - 0x24u, 0x1000u);
                                        wr32(sp0 - 0x28u, sp0 - 0xcu);
                                        wr32(sp0 - 0x2cu, esi);
                                        t130 = rd32(COW_IMG(0x1045b62cu)) << 5u;
                                        wr32(sp0 - 0x30u, t130);
                                        wr32(sp0 - 0x34u, eax);
                                        g->eax = eax;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x20u;
                                        t131 = cow_thiscall(g, rd32(edx + 0x2cu), t130, 5, eax, t130, esi, sp0 - 0xcu, 0x1000u);
                                        t132 = g->ecx;
                                        t133 = g->edx;
                                        if (t131 == 0u) goto L_10022cb9;
                                        eax = t131;
                                        ecx = t132;
                                        edx = t133;
L_10022c8d: ;
    COW_AT(10022c8d)
                                        wr32(sp0 - 0x24u, 0u);
                                        g->esp = sp0 - 0x20u;
                                        cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0u);   /* kernel32.dll!Sleep */
                                        wr32(sp0 - 0x24u, 0x1000u);
                                        wr32(sp0 - 0x28u, sp0 - 0xcu);
                                        wr32(sp0 - 0x2cu, esi);
                                        t134 = rd32(COW_IMG(0x1045b62cu)) << 5u;
                                        wr32(sp0 - 0x30u, t134);
                                        wr32(sp0 - 0x34u, rd32(COW_IMG(0x10457150u)));
                                        g->eax = rd32(COW_IMG(0x10457150u));
                                        g->edx = rd32(rd32(COW_IMG(0x10457150u)));
                                        t135 = rd32(COW_IMG(0x10457150u));
                                        t136 = rd32(rd32(COW_IMG(0x10457150u)));
                                        t137 = cow_thiscall(g, rd32(t136 + 0x2cu), t134, 5, t135, t134, esi, sp0 - 0xcu, 0x1000u);
                                        t138 = g->ecx;
                                        t139 = g->edx;
                                        if (t137 != 0u)
                                        {
                                            eax = t137;
                                            ecx = t138;
                                            edx = t139;
                                            goto L_10022c8d;
                                        }
                                    }
                                    else
                                    {
                                        edx = rd32(rd32(COW_IMG(0x10457150u)));
                                        esi = eax << 5u;
                                        eax = rd32(COW_IMG(0x10457150u));
    COW_AT(10022c33)
                                        wr32(sp0 - 0x24u, 0x2000u);
                                        wr32(sp0 - 0x28u, sp0 - 0xcu);
                                        wr32(sp0 - 0x2cu, esi);
                                        wr32(sp0 - 0x30u, 0u);
                                        wr32(sp0 - 0x34u, eax);
                                        g->eax = eax;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x20u;
                                        t122 = cow_thiscall(g, rd32(edx + 0x2cu), sp0 - 0xcu, 5, eax, 0u, esi, sp0 - 0xcu, 0x2000u);
                                        t123 = g->ecx;
                                        t124 = g->edx;
                                        if (t122 == 0u) goto L_10022c68;
                                        eax = t122;
                                        ecx = t123;
                                        edx = t124;
L_10022c44: ;
    COW_AT(10022c44)
                                        wr32(sp0 - 0x24u, 0u);
                                        g->esp = sp0 - 0x20u;
                                        cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0u);   /* kernel32.dll!Sleep */
                                        wr32(sp0 - 0x24u, 0x2000u);
                                        wr32(sp0 - 0x28u, sp0 - 0xcu);
                                        wr32(sp0 - 0x2cu, esi);
                                        wr32(sp0 - 0x30u, 0u);
                                        wr32(sp0 - 0x34u, rd32(COW_IMG(0x10457150u)));
                                        g->eax = rd32(COW_IMG(0x10457150u));
                                        g->edx = rd32(rd32(COW_IMG(0x10457150u)));
                                        t125 = rd32(COW_IMG(0x10457150u));
                                        t126 = rd32(rd32(COW_IMG(0x10457150u)));
                                        t127 = cow_thiscall(g, rd32(t126 + 0x2cu), sp0 - 0xcu, 5, t125, 0u, esi, sp0 - 0xcu, 0x2000u);
                                        t128 = g->ecx;
                                        t129 = g->edx;
                                        if (t127 != 0u)
                                        {
                                            eax = t127;
                                            ecx = t128;
                                            edx = t129;
                                            goto L_10022c44;
                                        }
L_10022c68: ;
    COW_AT(10022c68)
                                        wr32(COW_IMG(0x1045b62cu), 0u);
                                    }
L_10022cb9: ;
    COW_AT(10022cb9)
                                    t140 = rd32(sp0 - 0xcu);
                                    wr32(sp0 - 0x24u, t140);
                                    wr32(sp0 - 0x28u, ebx + 4u);
                                    wr32(sp0 - 0x2cu, edi);
                                    g->eax = ebx + 4u;
                                    g->edx = t140;
                                    g->esp = sp0 - 0x20u;
                                    t141 = cow_thiscall(g, COW_IMG(0x10023010u), rd32(sp0 - 8u), 3, edi, ebx + 4u, t140);
                                    t142 = g->edx;
                                    wr32(sp0 + 4u, (uint16_t)t141);
                                    wr32(sp0 - 0x24u, rd32(COW_IMG(0x10457150u)));
                                    g->eax = rd32(COW_IMG(0x10457150u));
                                    g->edx = t142;
                                    t143 = rd32(COW_IMG(0x10457150u));
                                    t144 = rd32(rd32(COW_IMG(0x10457150u)));
                                    t145 = cow_thiscall(g, rd32(t144 + 0x30u), t144, 1, t143);
                                    t146 = g->ecx;
                                    t147 = g->edx;
                                    if (t145 == 0u)
                                    {
                                        eax = t145;
                                        ecx = t146;
                                        edx = t147;
                                    }
                                    else
                                    {
                                        eax = t145;
                                        ecx = t146;
                                        edx = t147;
    COW_AT(10022ce4)
                                        esi = rd32(COW_IMG(0x103290f8u));
L_10022cea: ;
    COW_AT(10022cea)
                                        wr32(sp0 - 0x24u, 0u);
                                        g->esp = sp0 - 0x20u;
                                        cow_thiscall(g, esi, ecx, 1, 0u);
                                        t148 = g->ecx;
                                        wr32(sp0 - 0x24u, rd32(COW_IMG(0x10457150u)));
                                        g->eax = rd32(COW_IMG(0x10457150u));
                                        g->edx = rd32(rd32(COW_IMG(0x10457150u)));
                                        t149 = rd32(COW_IMG(0x10457150u));
                                        t150 = rd32(rd32(COW_IMG(0x10457150u)));
                                        t151 = cow_thiscall(g, rd32(t150 + 0x30u), t148, 1, t149);
                                        t152 = g->ecx;
                                        t153 = g->edx;
                                        if (t151 != 0u)
                                        {
                                            eax = t151;
                                            ecx = t152;
                                            edx = t153;
                                            goto L_10022cea;
                                        }
                                        eax = t151;
                                        ecx = t152;
                                        edx = t153;
                                    }
    COW_AT(10022cfd)
                                    wr32(sp0 - 0x24u, 0x112u);
                                    g->esp = sp0 - 0x20u;
                                    cow_cdecl(g, COW_IMG(0x10022fa0u), 1, 0x112u);
                                    wr32(sp0 - 0x24u, 0x20u);
                                    wr32(sp0 - 0x28u, rd32(COW_IMG(0x10457150u)));
                                    wr32(sp0 - 0x2cu, 0u);
                                    t154 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                    wr32(sp0 - 0x30u, t154);
                                    g->edx = rd32(COW_IMG(0x10457150u));
                                    t155 = rd32(COW_IMG(0x10457150u));
                                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t154, 0u, t155, 0x20u);
                                    t156 = g->edx;
                                    t157 = (uint16_t)rd32(sp0 + 0xcu);
                                    wr32(sp0 - 0x24u, t157);
                                    wr32(sp0 - 0x28u, rd32(COW_IMG(0x1045b62cu)));
                                    wr32(sp0 - 0x2cu, 4u);
                                    g->ebx = ebx;
                                    g->eax = rd32(COW_IMG(0x1045b62cu));
                                    g->edx = t156;
                                    t158 = rd32(COW_IMG(0x1045b62cu));
                                    t159 = cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, 4u, t158, t157);
                                    t160 = g->edx;
                                    wr32(sp0 - 0x24u, ebp);
                                    wr32(sp0 - 0x28u, COW_IMG(0x10456e44u));
                                    g->ebx = ebx;
                                    t161 = cow_thiscall(g, COW_IMG(0x10033800u), arg2 + 0x48u, 2, COW_IMG(0x10456e44u), ebp);
                                    t162 = g->ecx;
                                    if ((uint8_t)t161 == 0u)
                                    {
                                        ecx = t162;
                                    }
                                    else
                                    {
                                        eax = t161;
                                        esi = t157;
    COW_AT(10022d5a)
                                        wr32(sp0 - 0x24u, esi);
                                        wr32(sp0 - 0x28u, rd32(COW_IMG(0x1045b62cu)));
                                        wr32(sp0 - 0x2cu, 4u);
                                        g->ebx = ebx;
                                        g->edx = rd32(COW_IMG(0x1045b62cu));
                                        t163 = rd32(COW_IMG(0x1045b62cu));
                                        g->esp = sp0 - 0x20u;
                                        cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, 4u, t163, esi);
                                        t164 = g->edx;
                                        t165 = rd32(sp0 + 0x14u);
                                        wr32(sp0 - 0x24u, t165);
                                        cow_fastcall(g, COW_IMG(0x10033a70u), arg2 + 0x48u, t164, 1, t165);
                                        t166 = g->ecx;
                                        ecx = t166;
                                    }
    COW_AT(10022d80)
                                    t167 = rd32(COW_IMG(0x1045b62cu)) + rd32(sp0 + 4u);
                                    t168 = rd32(sp0 + 4u);
                                    t169 = rd32(sp0 - 4u);
                                    wr32(COW_IMG(0x1045b62cu), t167);
                                    edx = t168;
                                    esi = t169;
                                }
    COW_AT(10022d94)
                                eax = (uint16_t)esi * 0xfu;
                                ebx = ebx + (uint16_t)esi * 0x1eu + 4u;
                                esi = (uint16_t)esi;
                            }
                        }
                    }
                }
            }
            else
            {
    COW_AT(10022647)
                if ((eax >> 4u & 0xfu) == 0u)
                {
    COW_AT(10022b2c)
                    wr32(sp0 - 0x24u, 2u);
                    wr32(sp0 - 0x28u, 2u);
                    wr32(sp0 - 0x2cu, 0u);
                    t105 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x30u, t105);
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(rd32(t105) + 0xfcu), rd32(t105), 4, t105, 0u, 2u, 2u);
                    wr32(sp0 - 0x24u, 2u);
                    wr32(sp0 - 0x28u, 5u);
                    wr32(sp0 - 0x2cu, 0u);
                    t106 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x30u, t106);
                    g->eax = t106;
                    g->edx = rd32(COW_IMG(0x1045666cu));
                    t107 = rd32(t106);
                    t108 = rd32(COW_IMG(0x1045666cu));
                    t109 = cow_thiscall(g, rd32(t107 + 0xfcu), t107, 4, t106, 0u, 5u, 2u);
                    t110 = g->ecx;
                    t111 = g->edx;
                    if (rd8(ebx) & 1u)
                    {
                        ecx = t110;
                        edx = t111;
                    }
                    else
                    {
                        eax = t109;
                        edx = t111;
    COW_AT(10022b61)
                        wr32(sp0 - 0x24u, edi);
                        wr32(sp0 - 0x28u, ebx + 2u);
                        g->eax = eax;
                        g->edx = edx;
                        t112 = rd32(COW_IMG(0x1047b970u));
                        g->esp = sp0 - 0x20u;
                        t113 = cow_thiscall(g, COW_IMG(0x1003af10u), t112, 2, ebx + 2u, edi);
                        t114 = g->ecx;
                        t115 = g->edx;
                        wr8(ebx, rd8(ebx) | 1u);
                        wr32(ebx + 2u, t113);
                        ecx = t114;
                        edx = t115;
                        esi = ebx + 2u;
                    }
    COW_AT(10022b76)
                    if (rd32(ebx + 2u) == 0u)
                    {
                        eax = rd32(ebx + 2u);
                    }
                    else
                    {
                        eax = rd32(ebx + 2u);
    COW_AT(10022b7d)
                        if (eax != rd32(COW_IMG(0x10456e44u)))
                        {
    COW_AT(10022b85)
                            wr32(COW_IMG(0x10456e44u), eax);
                            if (rd32(eax + 0x40u) == 0u)
                            {
    COW_AT(10022b95)
                                eax = rd32(eax + 0x44u);
                            }
                            else
                            {
                                ecx = rd32(eax + 0x40u);
    COW_AT(10022b91)
                                eax = ecx;
                            }
    COW_AT(10022b98)
                            wr32(sp0 - 0x24u, eax);
                            wr32(sp0 - 0x28u, 0u);
                            t116 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x2cu, t116);
                            g->eax = eax;
                            g->edx = rd32(t116);
                            t117 = rd32(t116);
                            g->esp = sp0 - 0x20u;
                            t118 = cow_thiscall(g, rd32(t117 + 0xf4u), t116, 3, t116, 0u, eax);
                            t119 = g->ecx;
                            t120 = g->edx;
                            eax = t118;
                            ecx = t119;
                            edx = t120;
                        }
                    }
    COW_AT(10022bad)
                    ebx = ebx + 0x12u;
                }
                else
                {
                    eax = eax >> 4u & 0xfu;
    COW_AT(10022656)
                    if (eax != 1u)
                    {
                        eax = eax - 1u;
                    }
                    else
                    {
    COW_AT(1002265d)
                        t28 = rd8(ebx + 0xfu);
                        wr32(sp0 + 0x14u, 0u);
                        wr8(sp0 - 0xeu, rd8(arg2 + (t28 & 0xfu) + 0xa8u) != 0u);
                        wr32(sp0 + 0xcu, COW_IMG(0x104572b8u));
                        eax = COW_IMG(0x104572b8u);
                        edx = t28 & 0xfu;
L_10022686: ;
    COW_AT(10022686)
                        if (rd32(eax) != 0u)
                        {
    COW_AT(1002268b)
                            wr32(sp0 - 0x24u, COW_IMG(0x10456dd0u));
                            esi = rd32(sp0 + 0xcu);
                            edi = COW_IMG(0x10456dd0u);
                            ecx = 0x1au;
                            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                            d29 = fr(g, (double)rdf32(COW_IMG(0x10456dd4u)) * (double)rdf32(ebx + 0x12u));
                            wrf32(COW_IMG(0x10456dd4u), (float)d29);
                            d30 = fr(g, (double)rdf32(COW_IMG(0x10456dd8u)) * (double)rdf32(ebx + 0x12u));
                            wrf32(COW_IMG(0x10456dd8u), (float)d30);
                            t31 = rd32(sp0 + 0x14u);
                            d32 = fr(g, (double)rdf32(COW_IMG(0x10456ddcu)) * (double)rdf32(ebx + 0x12u));
                            wr32(sp0 - 0x28u, t31);
                            t33 = rd32(COW_IMG(0x1045666cu));
                            wrf32(COW_IMG(0x10456ddcu), (float)d32);
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            cow_thiscall(g, COW_IMG(0x1000bf30u), t33, 2, t31, COW_IMG(0x10456dd0u));
                            t34 = g->edx;
                            eax = rd32(sp0 + 0xcu);
                            edx = t34;
                        }
    COW_AT(100226e1)
                        t35 = rd32(sp0 + 0x14u) + 1u;
                        wr32(sp0 + 0x14u, t35);
                        wr32(sp0 + 0xcu, eax + 0x68u);
                        if ((int32_t)(eax + 0x68u) < (int32_t)COW_IMG(0x10457458u))
                        {
                            eax = eax + 0x68u;
                            goto L_10022686;
                        }
                        eax = eax + 0x68u;
    COW_AT(100226f8)
                        d36 = (double)rdf32(ebx + 0x12u);
                        if ((cow_fsw(g, d36, (double)rdf32(COW_IMG(0x1032a3acu)), 0u) & 0x4100u) != 0u)
                        {
    COW_AT(10022739)
                            wr32(COW_IMG(0x10457210u), 0u);
                            wr32(COW_IMG(0x10457214u), 0u);
                            wr32(COW_IMG(0x10457218u), 0u);
                        }
                        else
                        {
    COW_AT(1002270a)
                            d37 = fr(g, (double)rdf32(ebx + 0x12u) - (double)rdf32(COW_IMG(0x1032a3acu)));
                            wrf32(COW_IMG(0x10457210u), (float)d37);
                            d38 = fr(g, (double)rdf32(ebx + 0x12u) - (double)rdf32(COW_IMG(0x1032a3acu)));
                            wrf32(COW_IMG(0x10457214u), (float)d38);
                            d39 = fr(g, (double)rdf32(ebx + 0x12u) - (double)rdf32(COW_IMG(0x1032a3acu)));
                            wrf32(COW_IMG(0x10457218u), (float)d39);
                        }
    COW_AT(10022757)
                        wr32(sp0 - 0x24u, COW_IMG(0x104571e0u));
                        t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x28u, t40);
                        g->eax = t40;
                        g->edx = rd32(COW_IMG(0x1045666cu));
                        t41 = rd32(t40);
                        t42 = rd32(COW_IMG(0x1045666cu));
                        g->esp = sp0 - 0x20u;
                        t43 = cow_thiscall(g, rd32(t41 + 0xa8u), t41, 2, t40, COW_IMG(0x104571e0u));
                        t44 = g->ecx;
                        t45 = g->edx;
                        if (rd16(ebx + 0x10u) == 0u)
                        {
                            eax = t43;
                            ecx = t44;
                            edx = t45;
                            goto L_100228e9;
                        }
                        ecx = t44;
                        edx = t45;
    COW_AT(1002277a)
                        if (rd32(COW_IMG(0x1045745cu)) == 0u)
                        {
                            eax = rd32(COW_IMG(0x1045745cu));
                            goto L_100228e9;
                        }
                        eax = rd32(COW_IMG(0x1045745cu));
    COW_AT(10022787)
                        if (rd32(eax) == 0u) goto L_100228e9;
    COW_AT(1002278f)
                        if (rd8(sp0 - 0xdu) != 1u) goto L_100228e9;
    COW_AT(1002279a)
                        d46 = fr(g, (double)rdf32(ebx + 0x26u) * (double)rdf32(COW_IMG(0x10329a08u)));
                        wr32(sp0 + 0x14u, 2u);
                        fpush(g, d46);
                        g->esp = sp0 - 0x20u;
                        t47 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t48 = (ebp & 0xffffffu) | t47 << 0x18u;
                        wr32(sp0 - 0x24u, t48);
                        wr32(sp0 - 0x28u, 0x3cu);
                        t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x2cu, t49);
                        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t49, 0x3cu, t48);
                        wr32(sp0 - 0x24u, 0x12u);
                        wr32(sp0 - 0x28u, 1u);
                        wr32(sp0 - 0x2cu, 1u);
                        t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x30u, t50);
                        cow_thiscall(g, rd32(rd32(t50) + 0xfcu), rd32(t50), 4, t50, 1u, 1u, 0x12u);
                        wr32(sp0 - 0x24u, 2u);
                        wr32(sp0 - 0x28u, 3u);
                        wr32(sp0 - 0x2cu, 1u);
                        t51 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x30u, t51);
                        cow_thiscall(g, rd32(rd32(t51) + 0xfcu), rd32(t51), 4, t51, 1u, 3u, 2u);
                        wr32(sp0 - 0x24u, 7u);
                        wr32(sp0 - 0x28u, 4u);
                        wr32(sp0 - 0x2cu, 1u);
                        t52 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x30u, t52);
                        cow_thiscall(g, rd32(rd32(t52) + 0xfcu), rd32(t52), 4, t52, 1u, 4u, 7u);
                        wr32(sp0 - 0x24u, 2u);
                        wr32(sp0 - 0x28u, 6u);
                        wr32(sp0 - 0x2cu, 1u);
                        t53 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x30u, t53);
                        cow_thiscall(g, rd32(rd32(t53) + 0xfcu), rd32(t53), 4, t53, 1u, 6u, 2u);
                        wr32(sp0 - 0x24u, COW_IMG(0x10457108u));
                        wr32(sp0 - 0x28u, 0x11u);
                        t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x2cu, t54);
                        cow_thiscall(g, rd32(rd32(t54) + 0x94u), rd32(t54), 3, t54, 0x11u, COW_IMG(0x10457108u));
                        wr32(sp0 - 0x24u, 3u);
                        wr32(sp0 - 0x28u, 0x18u);
                        wr32(sp0 - 0x2cu, 1u);
                        t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x30u, t55);
                        cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 4, t55, 1u, 0x18u, 3u);
                        wr32(sp0 - 0x24u, 0x10001u);
                        wr32(sp0 - 0x28u, 0xbu);
                        wr32(sp0 - 0x2cu, 1u);
                        t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x30u, t56);
                        cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 4, t56, 1u, 0xbu, 0x10001u);
                        wr32(sp0 - 0x24u, 0u);
                        wr32(sp0 - 0x28u, 1u);
                        t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x2cu, t57);
                        g->edx = rd32(COW_IMG(0x1045666cu));
                        t58 = rd32(t57);
                        t59 = rd32(COW_IMG(0x1045666cu));
                        cow_thiscall(g, rd32(t58 + 0xf4u), t58, 3, t57, 1u, 0u);
                        t60 = g->ecx;
                        t61 = g->edx;
                        t62 = rd32(COW_IMG(0x1045745cu));
                        wr32(COW_IMG(0x10456e48u), 0u);
                        if (t62 == 0u)
                        {
                            eax = t62;
                            ecx = t60;
                            edx = t61;
                            ebp = t48;
                            esi = 0u;
                            goto L_10022b24;
                        }
                        eax = t62;
                        ecx = t60;
                        edx = t61;
                        ebp = t48;
    COW_AT(100228a4)
                        if (rd32(eax) == 0u)
                        {
                            eax = rd32(eax);
                            esi = 0u;
                            goto L_10022b24;
                        }
                        eax = rd32(eax);
    COW_AT(100228ae)
                        if (rd32(eax + 0x30u) == 0u)
                        {
                            eax = rd32(eax + 0x30u);
                            esi = 0u;
                            goto L_10022b24;
                        }
                        eax = rd32(eax + 0x30u);
    COW_AT(100228b9)
                        wr32(COW_IMG(0x10456e48u), eax);
                        if (rd32(eax + 0x40u) == 0u)
                        {
    COW_AT(100228c9)
                            eax = rd32(eax + 0x44u);
                        }
                        else
                        {
                            ecx = rd32(eax + 0x40u);
    COW_AT(100228c5)
                            eax = ecx;
                        }
    COW_AT(100228cc)
                        wr32(sp0 - 0x24u, eax);
                        wr32(sp0 - 0x28u, 1u);
                        t63 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x2cu, t63);
                        g->eax = eax;
                        g->edx = rd32(t63);
                        t64 = rd32(t63);
                        g->esp = sp0 - 0x20u;
                        t65 = cow_thiscall(g, rd32(t64 + 0xf4u), t63, 3, t63, 1u, eax);
                        t66 = g->ecx;
                        t67 = g->edx;
                        eax = t65;
                        ecx = t66;
                        edx = t67;
                        ebx = ebx + 0x2eu;
                        esi = 0u;
                    }
                }
            }
L_10022f83: ;
    COW_AT(10022f83)
            if (rd16(ebx) != 0xffffu)
            {
                eax = (eax & 0xffff0000u) | rd16(ebx);
                goto L_1002263b;
            }
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
        }
    }
    COW_AT(10022f90)
    g->ebx = loc_14;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_18;
    return;
L_1002263b: ;
    COW_AT(1002263b)
    edi = rd32(sp0 - 8u);
    goto L_1002263f;
L_100228e9: ;
    COW_AT(100228e9)
    d68 = (double)rdf32(ebx + 0x2au);
    if (d68 == rdf64(COW_IMG(0x1032a108u))) goto L_10022a33;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d68, rdf64(COW_IMG(0x1032a108u)), 0u);
    COW_AT(100228fd)
    if (rd8(sp0 - 0xdu) != 1u) goto L_10022a33;
    COW_AT(10022908)
    d69 = fr(g, (double)rdf32(ebx + 0x26u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 + 0x14u, 1u);
    g->edx = edx;
    fpush(g, d69);
    g->esp = sp0 - 0x20u;
    t70 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t71 = g->edx;
    t72 = (ebp & 0xffffffu) | t70 << 0x18u;
    wr32(sp0 - 0x24u, t72);
    wr32(sp0 - 0x28u, 0x3cu);
    t73 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t73);
    cow_thiscall(g, rd32(rd32(t73) + 0xc8u), rd32(t73), 3, t73, 0x3cu, t72);
    wr32(sp0 - 0x24u, 0x12u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    t74 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t74);
    cow_thiscall(g, rd32(rd32(t74) + 0xfcu), rd32(t74), 4, t74, 1u, 1u, 0x12u);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, 3u);
    wr32(sp0 - 0x2cu, 1u);
    t75 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t75);
    cow_thiscall(g, rd32(rd32(t75) + 0xfcu), rd32(t75), 4, t75, 1u, 3u, 2u);
    wr32(sp0 - 0x24u, 7u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, 1u);
    t76 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t76);
    cow_thiscall(g, rd32(rd32(t76) + 0xfcu), rd32(t76), 4, t76, 1u, 4u, 7u);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, 6u);
    wr32(sp0 - 0x2cu, 1u);
    t77 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t77);
    cow_thiscall(g, rd32(rd32(t77) + 0xfcu), rd32(t77), 4, t77, 1u, 6u, 2u);
    wr32(sp0 - 0x24u, COW_IMG(0x10457198u));
    wr32(sp0 - 0x28u, 0x11u);
    t78 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t78);
    cow_thiscall(g, rd32(rd32(t78) + 0x94u), rd32(t78), 3, t78, 0x11u, COW_IMG(0x10457198u));
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 0x18u);
    wr32(sp0 - 0x2cu, 1u);
    t79 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t79);
    cow_thiscall(g, rd32(rd32(t79) + 0xfcu), rd32(t79), 4, t79, 1u, 0x18u, 3u);
    wr32(sp0 - 0x24u, 0x30001u);
    wr32(sp0 - 0x28u, 0xbu);
    wr32(sp0 - 0x2cu, 1u);
    t80 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t80);
    cow_thiscall(g, rd32(rd32(t80) + 0xfcu), rd32(t80), 4, t80, 1u, 0xbu, 0x30001u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    t81 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t81);
    cow_thiscall(g, rd32(rd32(t81) + 0xf4u), rd32(t81), 3, t81, 1u, 0u);
    t82 = rd32(COW_IMG(0x104570f4u));
    wr32(COW_IMG(0x10456e48u), t82);
    if (rd32(t82 + 0x40u) == 0u)
    {
        eax = t82;
        ebp = t72;
    COW_AT(10022a13)
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(t82 + 0x40u);
        ebp = t72;
    COW_AT(10022a0f)
        eax = ecx;
    }
    COW_AT(10022a16)
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 0x28u, 1u);
    t83 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t83);
    g->eax = eax;
    g->edx = t83;
    t84 = rd32(t83);
    g->esp = sp0 - 0x20u;
    t85 = cow_thiscall(g, rd32(t84 + 0xf4u), t84, 3, t83, 1u, eax);
    t86 = g->ecx;
    t87 = g->edx;
    eax = t85;
    ecx = t86;
    edx = t87;
    ebx = ebx + 0x2eu;
    esi = 0u;
    goto L_10022f83;
L_10022a33: ;
    COW_AT(10022a33)
    wr32(sp0 - 0x24u, 5u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    t88 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    t89 = rd32(COW_IMG(0x1045666cu));
    wr32(sp0 + 0x14u, 0u);
    wr32(sp0 - 0x30u, t88);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(t88) + 0xfcu), rd32(t88), 4, t88, 1u, 1u, 5u);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 3u);
    wr32(sp0 - 0x2cu, 1u);
    t90 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t90);
    cow_thiscall(g, rd32(rd32(t90) + 0xfcu), rd32(t90), 4, t90, 1u, 3u, 3u);
    wr32(sp0 - 0x24u, 6u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, 1u);
    t91 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t91);
    cow_thiscall(g, rd32(rd32(t91) + 0xfcu), rd32(t91), 4, t91, 1u, 4u, 6u);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 6u);
    wr32(sp0 - 0x2cu, 1u);
    t92 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t92);
    cow_thiscall(g, rd32(rd32(t92) + 0xfcu), rd32(t92), 4, t92, 1u, 6u, 3u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x18u);
    wr32(sp0 - 0x2cu, 1u);
    t93 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t93);
    cow_thiscall(g, rd32(rd32(t93) + 0xfcu), rd32(t93), 4, t93, 1u, 0x18u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0xbu);
    wr32(sp0 - 0x2cu, 1u);
    t94 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t94);
    cow_thiscall(g, rd32(rd32(t94) + 0xfcu), rd32(t94), 4, t94, 1u, 0xbu, 0u);
    t95 = rd32(ebx + 2u);
    t96 = ((t95 >> 7u & 0xfffffffeu) * (rd32(COW_IMG(0x104574acu)) >> 8u) & 0xff00u) | ((((rd32(COW_IMG(0x104574acu)) >> 8u & 0xffff0000u) | rd16(ebx + 4u)) * rd16(COW_IMG(0x104574aeu)) & 0x7f80u) | 0xffc00000u) << 9u | (uint8_t)(t95 * rd32(COW_IMG(0x104574acu)) >> 7u);
    wr32(sp0 - 0x24u, t96);
    wr32(sp0 - 0x28u, 0x3cu);
    t97 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t97);
    g->eax = t97;
    g->edx = ((((rd32(COW_IMG(0x104574acu)) >> 8u & 0xffff0000u) | rd16(ebx + 4u)) * rd16(COW_IMG(0x104574aeu)) & 0x7f80u) | 0xffc00000u) << 9u;
    t98 = rd32(t97);
    t99 = rd32(COW_IMG(0x104574acu));
    t100 = rd16(ebx + 4u);
    t101 = rd16(COW_IMG(0x104574aeu));
    t102 = cow_thiscall(g, rd32(t98 + 0xc8u), t98, 3, t97, 0x3cu, t96);
    t103 = g->ecx;
    t104 = g->edx;
    eax = t102;
    ecx = t103;
    edx = t104;
    ebp = t96;
    esi = t101;
L_10022b24: ;
    COW_AT(10022b24)
    ebx = ebx + 0x2eu;
    goto L_10022f83;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100224d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10022535u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ecx = arg2;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002253eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ecx = arg2;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x10022559u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002255du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022639u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002263bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002263fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022647u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022656u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002265du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022686u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002268bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100226e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100226f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002270au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022739u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022757u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002277au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10022787u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002278fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002279au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100228a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100228aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100228b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100228c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100228c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100228ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100228e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100228fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10022908u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10022a0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10022a13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10022a16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10022a33u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10022b24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022b2cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022b61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022b76u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022b7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022b85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022b91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022b95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022b98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022badu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022bb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022bd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022bd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022be0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022be9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022bf5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022c0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022c13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022c33u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10022c44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10022c68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10022c74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10022c8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10022cb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10022ce4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022ceau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022cfdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022d5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022d80u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022d94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022da9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022dbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022dcau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022dd5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022de1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022e09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022e20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10022e44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10022e50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022e6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10022e9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10022ecau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022ed0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022ee3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022f3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022f66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022f76u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022f83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10022f90u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100224d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100224d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
