/* f_0x102988f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102988f0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_210;
    uint32_t loc_214;
    uint32_t loc_218;
    uint32_t loc_21c;
    uint32_t loc_220;
    uint32_t loc_4;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 648u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029891cu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1029891c;
    case 0x10298921u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10298921;
    case 0x102a8e90u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a8e90;
    case 0x102a8eb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a8eb5;
    case 0x102a8ee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a8ee4;
    case 0x102a8f93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_218 = rd32(sp0 - 0x218u); goto E_102a8f93;
    case 0x102a8fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_218 = rd32(sp0 - 0x218u); goto E_102a8fcc;
    case 0x102a8fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a8fd5;
    case 0x102a9051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a9051;
    case 0x102a9146u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a9146;
    case 0x102a9158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a9158;
    case 0x102a915eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_214 = rd32(sp0 - 0x214u); goto E_102a915e;
    case 0x102a9170u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a9170;
    case 0x102a9183u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a9183;
    case 0x102a9189u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a9189;
    case 0x102a918bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a918b;
    case 0x102a919cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a919c;
    case 0x102a91a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a91a2;
    case 0x102a91a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a91a8;
    case 0x102a91acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a91ac;
    case 0x102a91b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a91b7;
    case 0x102a91d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a91d0;
    case 0x102a91e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_210 = rd32(sp0 - 0x210u); goto E_102a91e7;
    case 0x102a91efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a91ef;
    case 0x102a9200u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a9200;
    case 0x102a9204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a9204;
    case 0x102a920cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a920c;
    case 0x102a9211u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a9211;
    case 0x102a9236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a9236;
    case 0x102a9247u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a9247;
    case 0x102a9263u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_102a9263;
    case 0x102a928du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a928d;
    case 0x102a9300u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a9300;
    case 0x102a9330u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); goto E_102a9330;
    case 0x102a9359u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); goto E_102a9359;
    case 0x102a9374u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102a9374;
    case 0x102a9377u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102a9377;
    case 0x102a93a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102a93a9;
    case 0x102a9408u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a9408;
    case 0x102a9440u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a9440;
    case 0x102a9448u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a9448;
    case 0x102a945du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a945d;
    case 0x102a9464u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a9464;
    case 0x102a946cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a946c;
    case 0x102a9472u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a9472;
    case 0x102a9476u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a9476;
    case 0x102a947eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a947e;
    case 0x102a9484u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a9484;
    case 0x102a9486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a9486;
    case 0x102a9492u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a9492;
    case 0x102a949bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a949b;
    case 0x102a94c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a94c1;
    case 0x102a94c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102a94c3;
    case 0x102a94e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a94e3;
    case 0x102a94f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a94f1;
    case 0x102a94f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a94f4;
    case 0x102a950au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a950a;
    case 0x102a950cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102a950c;
    case 0x102a9520u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102a9520;
    default: break;
    }
#endif

    COW_AT(102988f0)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    t1 = rd32(sp0 + 8u);
    edi = t1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 + 8u, t1);
    esi = t1 + ~ecx - 5u;
    edi = COW_IMG(0x103bbdb0u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = t1;
        goto L_10298921;
    }
    edx = t1;
    COW_AT(1029891c)
    COW_AT(102a9300)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, COW_IMG(0x1034f7fcu));
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0x28u, t2);
    t3 = rd32(sp0 + 4u);
    wr8(sp0 + 4u, rd32(t3 + 0x2cu) == 1u);
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), ecx, 2, t2, COW_IMG(0x1034f7fcu));
    t5 = g->edx;
    wr32(sp0 - 0x10u, t4);
    if (t4 != 0u)
    {
        ecx = t4;
        edx = t5;
        edi = t3;
        loc_10 = t4;
        goto L_102a9359;
    }
    eax = t4;
    ecx = t4;
    edx = t5;
    esi = t2;
    COW_AT(102a9330)
    wr32(sp0 - 0x24u, 0x27u);
    wr32(sp0 - 0x28u, COW_IMG(0x103be71cu));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be71cu));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x30u, esi);
    wr32(sp0 - 0x34u, COW_IMG(0x103be664u));
    g->edx = t8;
    g->esp = sp0 - 0x2cu;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be664u), esi);
    t10 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t10;
    return t9 & 0xffffff00u;
L_10298921: ;
    COW_AT(10298921)
    COW_AT(102a8e90)
    wr32(sp0 - 0x230u, in_ebx);
    wr32(sp0 - 0x234u, in_ebp);
    wr32(sp0 - 0x238u, in_esi);
    wr32(sp0 - 0x23cu, in_edi);
    wr32(sp0 - 0x240u, COW_IMG(0x1034f7fcu));
    t61 = rd32(sp0 + 8u);
    wr32(sp0 - 0x244u, t61);
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t62 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), ecx, 2, t61, COW_IMG(0x1034f7fcu));
    t63 = g->ecx;
    t64 = g->edx;
    if (t62 != 0u)
    {
        esi = t62;
        goto L_102a8ee4;
    }
    eax = t62;
    ecx = t63;
    edx = t64;
    edi = t61;
    COW_AT(102a8eb5)
    wr32(sp0 - 0x240u, 0x192u);
    wr32(sp0 - 0x244u, COW_IMG(0x103be560u));
    wr32(sp0 - 0x248u, COW_IMG(0x103b27fcu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x240u;
    t65 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be560u));
    t66 = g->ecx;
    t67 = g->edx;
    wr32(sp0 - 0x24cu, edi);
    wr32(sp0 - 0x250u, COW_IMG(0x103be664u));
    g->ebx = in_ebx;
    g->edx = t67;
    g->esp = sp0 - 0x248u;
    t68 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be664u), edi);
    t69 = g->edx;
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    g->edx = t69;
    return t68 & 0xffffff00u;
L_102a8ee4: ;
    COW_AT(102a8ee4)
    wr32(sp0 - 0x240u, 0x4fu);
    t70 = rd32(sp0 + 8u);
    wr32(sp0 - 0x244u, t70);
    t71 = rd32(rd32(sp0 + 4u) + 0x20u);
    t72 = rd32(rd32(sp0 + 4u) + 0x24u);
    t73 = rd32(rd32(sp0 + 4u) + 0x1cu);
    t74 = rd32(sp0 + 4u);
    wr8(sp0 - 0x229u, rd32(t74 + 0x2cu) == 0u);
    wr32(sp0 - 0x20cu, t71);
    wr16(sp0 - 0x1f8u, (uint16_t)t71);
    wr32(sp0 - 0x248u, sp0 - 0x1e8u);
    wr32(sp0 - 0x208u, t72);
    wr16(sp0 - 0x200u, 0x1dau);
    wr8(sp0 - 0x1feu, 0u);
    wr8(sp0 - 0x1fdu, 1u);
    wr16(sp0 - 0x1fcu, (uint16_t)(((int32_t)t72 > 1) + 2u));
    wr16(sp0 - 0x1fau, (uint16_t)t73);
    wr16(sp0 - 0x1f6u, (uint16_t)t72);
    wr32(sp0 - 0x1f4u, 0u);
    wr32(sp0 - 0x1f0u, 0xffu);
    g->ecx = ((int32_t)t72 > 1) + 2u;
    g->edx = t70;
    g->esp = sp0 - 0x23cu;
    cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x1e8u, g->ecx, g->edx, 1, 3, sp0 - 0x1e8u, t70, 0x4fu);
    t75 = g->ecx;
    t76 = g->edx;
    wr32(sp0 - 0x24cu, 0x1aau);
    wr32(sp0 - 0x250u, COW_IMG(0x103be560u));
    t77 = (uint32_t)(int16_t)rd16(sp0 - 0x1fau);
    wr32(sp0 - 0x254u, t77);
    wr32(sp0 - 0x258u, 1u);
    wr8(sp0 - 0x199u, 0u);
    wr32(sp0 - 0x198u, 0u);
    wr32(sp0 - 0x220u, t77);
    g->eax = t77;
    g->ecx = t75;
    g->edx = t76;
    g->esp = sp0 - 0x234u;
    t78 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t77, COW_IMG(0x103be560u), 0x1aau, sp0 - 0x1e8u, rd32(sp0 - 0x244u), 0x4fu, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t79 = g->ecx;
    t80 = g->edx;
    wr32(sp0 - 0x218u, t78);
    if (t78 != 0u)
    {
        eax = t78;
        ecx = t79;
        edx = t80;
        ebx = t72;
        ebp = t73;
        edi = t74;
        loc_218 = t78;
        goto L_102a8fcc;
    }
    eax = t78;
    ecx = t79;
    edx = t80;
    ebx = t72;
    edi = t74;
    COW_AT(102a8f93)
    wr32(sp0 - 0x240u, 0x1abu);
    wr32(sp0 - 0x244u, COW_IMG(0x103be560u));
    wr32(sp0 - 0x248u, COW_IMG(0x103b27fcu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x240u;
    t81 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be560u));
    t82 = g->edx;
    t83 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x24cu, t83);
    wr32(sp0 - 0x250u, COW_IMG(0x103be62cu));
    g->ebx = ebx;
    g->ecx = t83;
    g->edx = t82;
    g->esp = sp0 - 0x248u;
    t84 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be62cu), t83);
    t85 = g->ecx;
    t86 = g->edx;
    wr32(sp0 - 0x254u, esi);
    g->edi = edi;
    t87 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t86, 1, 3, esi, COW_IMG(0x103be62cu), rd32(sp0 - 0x24cu));
    t88 = g->edx;
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    g->edx = t88;
    return t87 & 0xffffff00u;
L_102a8fcc: ;
    COW_AT(102a8fcc)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t89 = cow_stdcall(g, COW_IMG(0x102a92f0u), 0);
    t90 = g->ecx;
    t91 = g->edx;
    if (t89 == 0u)
    {
        eax = t89;
        edx = t91;
    }
    else
    {
        eax = t89;
        ecx = t90;
    COW_AT(102a8fd5)
        wr32(sp0 - 0x240u, 1u);
        wr32(sp0 - 0x244u, 2u);
        wr32(sp0 - 0x248u, sp0 - 0x200u);
        g->ecx = ecx;
        g->edx = sp0 - 0x200u;
        g->esp = sp0 - 0x228u;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x200u, 2u, 1u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu));
        t92 = g->ecx;
        t93 = g->edx;
        wr32(sp0 - 0x24cu, 1u);
        wr32(sp0 - 0x250u, 2u);
        wr32(sp0 - 0x254u, sp0 - 0x1fcu);
        g->eax = sp0 - 0x1fcu;
        g->edx = t93;
        g->esp = sp0 - 0x234u;
        t94 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1fcu, 2u, 1u, sp0 - 0x200u, 2u, 1u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
        t95 = g->edx;
        wr32(sp0 - 0x258u, 1u);
        wr32(sp0 - 0x25cu, 2u);
        wr32(sp0 - 0x260u, sp0 - 0x1fau);
        g->ecx = sp0 - 0x1fau;
        g->esp = sp0 - 0x240u;
        t96 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1fau, 2u, 1u, sp0 - 0x1fcu, 2u, 1u, sp0 - 0x200u, 2u);
        t97 = g->ecx;
        wr32(sp0 - 0x264u, 1u);
        wr32(sp0 - 0x268u, 2u);
        wr32(sp0 - 0x26cu, sp0 - 0x1f8u);
        g->ecx = t97;
        g->edx = sp0 - 0x1f8u;
        g->esp = sp0 - 0x24cu;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1f8u, 2u, 1u, sp0 - 0x1fau, 2u, 1u, sp0 - 0x1fcu, 2u);
        t98 = g->ecx;
        t99 = g->edx;
        wr32(sp0 - 0x270u, 1u);
        wr32(sp0 - 0x274u, 2u);
        wr32(sp0 - 0x278u, sp0 - 0x1f6u);
        g->eax = sp0 - 0x1f6u;
        g->edx = t99;
        g->esp = sp0 - 0x258u;
        t100 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1f6u, 2u, 1u, sp0 - 0x1f8u, 2u, 1u, sp0 - 0x1fau, 2u);
        t101 = g->edx;
        wr32(sp0 - 0x27cu, 1u);
        wr32(sp0 - 0x280u, 4u);
        wr32(sp0 - 0x284u, sp0 - 0x1f4u);
        g->ecx = sp0 - 0x1f4u;
        g->esp = sp0 - 0x264u;
        t102 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1f4u, 4u, 1u, sp0 - 0x1f6u, 2u, 1u, sp0 - 0x1f8u, 2u);
        t103 = g->ecx;
        wr32(sp0 - 0x240u, 1u);
        wr32(sp0 - 0x244u, 4u);
        wr32(sp0 - 0x248u, sp0 - 0x1f0u);
        g->ecx = t103;
        g->edx = sp0 - 0x1f0u;
        g->esp = sp0 - 0x228u;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1f0u, 4u, 1u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu));
        t104 = g->ecx;
        t105 = g->edx;
        wr32(sp0 - 0x24cu, 1u);
        wr32(sp0 - 0x250u, 4u);
        wr32(sp0 - 0x254u, sp0 - 0x198u);
        g->eax = sp0 - 0x198u;
        g->edx = t105;
        g->esp = sp0 - 0x234u;
        t106 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x198u, 4u, 1u, sp0 - 0x1f0u, 4u, 1u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
        t107 = g->edx;
        eax = t106;
        edx = t107;
    }
    COW_AT(102a9051)
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, 1u);
    wr32(sp0 - 0x248u, 2u);
    wr32(sp0 - 0x24cu, sp0 - 0x200u);
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x23cu;
    t108 = cow_call_regs(g, COW_IMG(0x10298ab0u), eax, g->ecx, edx, 1, 4, sp0 - 0x200u, 2u, 1u, esi);
    t109 = g->ecx;
    wr32(sp0 - 0x250u, esi);
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x25cu, sp0 - 0x1feu);
    g->ecx = t109;
    g->esp = sp0 - 0x24cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t108, g->ecx, sp0 - 0x1feu, 1, 4, sp0 - 0x1feu, 1u, 1u, esi);
    t110 = g->ecx;
    t111 = g->edx;
    wr32(sp0 - 0x260u, esi);
    wr32(sp0 - 0x264u, 1u);
    wr32(sp0 - 0x268u, 1u);
    wr32(sp0 - 0x26cu, sp0 - 0x1fdu);
    g->esp = sp0 - 0x25cu;
    t112 = cow_call_regs(g, COW_IMG(0x10298ab0u), sp0 - 0x1fdu, g->ecx, t111, 1, 4, sp0 - 0x1fdu, 1u, 1u, esi);
    t113 = g->edx;
    wr32(sp0 - 0x270u, esi);
    wr32(sp0 - 0x274u, 1u);
    wr32(sp0 - 0x278u, 2u);
    wr32(sp0 - 0x27cu, sp0 - 0x1fcu);
    g->ecx = sp0 - 0x1fcu;
    g->esp = sp0 - 0x26cu;
    t114 = cow_call_regs(g, COW_IMG(0x10298ab0u), t112, g->ecx, t113, 1, 4, sp0 - 0x1fcu, 2u, 1u, esi);
    t115 = g->ecx;
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, 1u);
    wr32(sp0 - 0x248u, 2u);
    wr32(sp0 - 0x24cu, sp0 - 0x1fau);
    g->ecx = t115;
    g->esp = sp0 - 0x23cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t114, g->ecx, sp0 - 0x1fau, 1, 4, sp0 - 0x1fau, 2u, 1u, esi);
    t116 = g->ecx;
    t117 = g->edx;
    wr32(sp0 - 0x250u, esi);
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 2u);
    wr32(sp0 - 0x25cu, sp0 - 0x1f8u);
    g->esp = sp0 - 0x24cu;
    t118 = cow_call_regs(g, COW_IMG(0x10298ab0u), sp0 - 0x1f8u, g->ecx, t117, 1, 4, sp0 - 0x1f8u, 2u, 1u, esi);
    t119 = g->edx;
    wr32(sp0 - 0x260u, esi);
    wr32(sp0 - 0x264u, 1u);
    wr32(sp0 - 0x268u, 2u);
    wr32(sp0 - 0x26cu, sp0 - 0x1f6u);
    g->ecx = sp0 - 0x1f6u;
    g->esp = sp0 - 0x25cu;
    t120 = cow_call_regs(g, COW_IMG(0x10298ab0u), t118, g->ecx, t119, 1, 4, sp0 - 0x1f6u, 2u, 1u, esi);
    t121 = g->ecx;
    wr32(sp0 - 0x270u, esi);
    wr32(sp0 - 0x274u, 1u);
    wr32(sp0 - 0x278u, 4u);
    wr32(sp0 - 0x27cu, sp0 - 0x1f4u);
    g->ecx = t121;
    g->esp = sp0 - 0x26cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t120, g->ecx, sp0 - 0x1f4u, 1, 4, sp0 - 0x1f4u, 4u, 1u, esi);
    t122 = g->ecx;
    t123 = g->edx;
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, 1u);
    wr32(sp0 - 0x248u, 4u);
    wr32(sp0 - 0x24cu, sp0 - 0x1f0u);
    g->esp = sp0 - 0x23cu;
    t124 = cow_call_regs(g, COW_IMG(0x10298ab0u), sp0 - 0x1f0u, g->ecx, t123, 1, 4, sp0 - 0x1f0u, 4u, 1u, esi);
    t125 = g->edx;
    wr32(sp0 - 0x250u, esi);
    wr32(sp0 - 0x254u, 4u);
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
    g->ecx = sp0 - 0x1ecu;
    g->esp = sp0 - 0x24cu;
    t126 = cow_call_regs(g, COW_IMG(0x10298ab0u), t124, g->ecx, t125, 1, 4, sp0 - 0x1ecu, 1u, 4u, esi);
    t127 = g->ecx;
    wr32(sp0 - 0x260u, esi);
    wr32(sp0 - 0x264u, 0x50u);
    wr32(sp0 - 0x268u, 1u);
    wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
    g->ecx = t127;
    g->esp = sp0 - 0x25cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t126, g->ecx, sp0 - 0x1e8u, 1, 4, sp0 - 0x1e8u, 1u, 0x50u, esi);
    t128 = g->ecx;
    t129 = g->edx;
    wr32(sp0 - 0x270u, esi);
    wr32(sp0 - 0x274u, 1u);
    wr32(sp0 - 0x278u, 4u);
    wr32(sp0 - 0x27cu, sp0 - 0x198u);
    g->esp = sp0 - 0x26cu;
    t130 = cow_call_regs(g, COW_IMG(0x10298ab0u), sp0 - 0x198u, g->ecx, t129, 1, 4, sp0 - 0x198u, 4u, 1u, esi);
    t131 = g->edx;
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, 0x194u);
    wr32(sp0 - 0x248u, 1u);
    wr32(sp0 - 0x24cu, sp0 - 0x194u);
    g->ecx = sp0 - 0x194u;
    g->esp = sp0 - 0x23cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t130, g->ecx, t131, 1, 4, sp0 - 0x194u, 1u, 0x194u, esi);
    t132 = g->ecx;
    t133 = g->edx;
    t134 = rd8(rd32(edi + 0x28u));
    t135 = rd32(edi + 0x28u);
    t136 = rd8(sp0 - 0x229u);
    wr8(sp0 - 0x224u, (uint8_t)t134);
    wr8(sp0 - 0x228u, (uint8_t)t134);
    if ((uint8_t)t136 == 0u)
    {
        eax = ebx * ebp;
        edx = (t133 & 0xffffff00u) | t134;
        edi = t135;
    COW_AT(102a9158)
        wr32(sp0 - 0x214u, edi);
        ecx = edi;
        loc_214 = edi;
    }
    else
    {
        eax = ebx * ebp;
        edx = (t133 & 0xffffff00u) | t134;
        edi = t135;
    COW_AT(102a9146)
        t137 = edi + (rd32(sp0 - 0x20cu) - 1u) * eax;
        wr32(sp0 - 0x214u, t137);
        eax = -eax;
        ecx = t137;
        loc_214 = t137;
    }
    COW_AT(102a915e)
    wr32(sp0 - 0x220u, eax);
    wr32(sp0 - 0x21cu, 0u);
    if ((int32_t)ebx <= 0)
    {
        eax = 0u;
        goto L_102a9204;
    }
    loc_220 = eax;
    eax = 0u;
    loc_21c = 0u;
L_102a9170: ;
    COW_AT(102a9170)
    wr32(sp0 - 0x210u, 0u);
    if ((int32_t)rd32(sp0 - 0x20cu) <= 0) goto L_102a91ef;
    edx = rd32(sp0 - 0x20cu);
    ebx = eax + ecx;
    loc_210 = 0u;
L_102a9183: ;
    COW_AT(102a9183)
    if ((int32_t)ebp <= 0)
    {
        ecx = 0u;
    }
    else
    {
    COW_AT(102a9189)
        ecx = 0u;
        edi = ebx;
L_102a918b: ;
    COW_AT(102a918b)
        t138 = rd32(sp0 - 0x218u);
        wr8(ecx + t138, rd8(edi));
        if (rd8(ebx) >= rd8(sp0 - 0x228u))
        {
            eax = (t138 & 0xffffff00u) | rd8(ebx);
    COW_AT(102a91a2)
            if ((uint8_t)eax > rd8(sp0 - 0x224u))
            {
    COW_AT(102a91a8)
                wr8(sp0 - 0x224u, (uint8_t)eax);
            }
        }
        else
        {
            eax = (t138 & 0xffffff00u) | rd8(ebx);
    COW_AT(102a919c)
            wr8(sp0 - 0x228u, (uint8_t)eax);
        }
    COW_AT(102a91ac)
        if ((int32_t)(ecx + 1u) < (int32_t)ebp)
        {
            ecx = ecx + 1u;
            edx = rd32(sp0 - 0x208u);
            edi = edi + rd32(sp0 - 0x208u);
            goto L_102a918b;
        }
        ecx = ecx + 1u;
        edx = rd32(sp0 - 0x208u);
    }
    COW_AT(102a91b7)
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, ebp);
    wr32(sp0 - 0x248u, 1u);
    t139 = rd32(sp0 - 0x218u);
    wr32(sp0 - 0x24cu, t139);
    g->ecx = ecx;
    g->esp = sp0 - 0x23cu;
    t140 = cow_call_regs(g, COW_IMG(0x10298ab0u), eax, g->ecx, edx, 1, 4, t139, 1u, ebp, esi);
    t141 = g->ecx;
    t142 = g->edx;
    if (t140 != ebp)
    {
        eax = t140;
        ecx = t141;
        edx = t142;
        edi = t139;
        goto L_102a928d;
    }
    edi = t139;
    COW_AT(102a91d0)
    t143 = rd32(sp0 - 0x210u) + 1u;
    t144 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x210u, t143);
    if ((int32_t)(t144 + 1u) < (int32_t)rd32(sp0 - 0x20cu))
    {
        eax = t143;
        edx = rd32(sp0 - 0x220u);
        ebx = ebx + rd32(sp0 - 0x220u);
        loc_214 = rd32(sp0 - 0x214u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_210 = t143;
        goto L_102a9183;
    }
    COW_AT(102a91e7)
    eax = rd32(sp0 - 0x21cu);
    ecx = rd32(sp0 - 0x214u);
    loc_214 = rd32(sp0 - 0x214u);
    loc_220 = rd32(sp0 - 0x220u);
L_102a91ef: ;
    COW_AT(102a91ef)
    wr32(sp0 - 0x21cu, eax + 1u);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(sp0 - 0x208u))
    {
        loc_21c = eax + 1u;
        eax = eax + 1u;
        goto L_102a9170;
    }
    eax = eax + 1u;
    edx = rd32(sp0 - 0x208u);
    COW_AT(102a9200)
    edx = (edx & 0xffffff00u) | rd8(sp0 - 0x224u);
L_102a9204: ;
    COW_AT(102a9204)
    if (rd8(sp0 - 0x228u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x228u);
        goto L_102a9211;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x228u);
    COW_AT(102a920c)
    if ((uint8_t)edx == 0xffu) goto L_102a9263;
L_102a9211: ;
    COW_AT(102a9211)
    t156 = (uint8_t)rd32(sp0 - 0x228u);
    wr32(sp0 - 0x208u, t156);
    t157 = (uint8_t)rd32(sp0 - 0x224u);
    wr32(sp0 - 0x204u, t157);
    g->eax = eax;
    g->ecx = t156;
    g->edx = t157;
    g->esp = sp0 - 0x23cu;
    t158 = cow_stdcall(g, COW_IMG(0x102a92f0u), 0);
    t159 = g->ecx;
    t160 = g->edx;
    if (t158 == 0u)
    {
        eax = t158;
        ecx = t159;
        edx = t160;
    }
    else
    {
        ecx = t159;
        edx = t160;
    COW_AT(102a9236)
        wr32(sp0 - 0x240u, 2u);
        wr32(sp0 - 0x244u, 4u);
        wr32(sp0 - 0x248u, sp0 - 0x208u);
        g->eax = sp0 - 0x208u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x228u;
        t161 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x208u, 4u, 2u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu));
        t162 = g->ecx;
        t163 = g->edx;
        eax = t161;
        ecx = t162;
        edx = t163;
    }
    COW_AT(102a9247)
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, 0xcu);
    wr32(sp0 - 0x248u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x23cu;
    t164 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, esi, 0xcu, 0u);
    t165 = g->edx;
    wr32(sp0 - 0x24cu, esi);
    wr32(sp0 - 0x250u, 2u);
    wr32(sp0 - 0x254u, 4u);
    wr32(sp0 - 0x258u, sp0 - 0x208u);
    g->ecx = sp0 - 0x208u;
    g->esp = sp0 - 0x248u;
    t166 = cow_call_regs(g, COW_IMG(0x10298ab0u), t164, g->ecx, t165, 1, 4, sp0 - 0x208u, 4u, 2u, esi);
    t167 = g->ecx;
    t168 = g->edx;
    eax = t166;
    ecx = t167;
    edx = t168;
L_102a9263: ;
    COW_AT(102a9263)
    wr32(sp0 - 0x240u, esi);
    g->edi = edi;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x234u;
    t169 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t170 = g->ecx;
    wr32(sp0 - 0x244u, 0x1fau);
    wr32(sp0 - 0x248u, COW_IMG(0x103be560u));
    t171 = rd32(sp0 - 0x218u);
    wr32(sp0 - 0x24cu, t171);
    g->edx = t171;
    g->esp = sp0 - 0x240u;
    t172 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t171, COW_IMG(0x103be560u), 0x1fau);
    t173 = g->edx;
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    g->edx = t173;
    return (t172 & 0xffffff00u) | (uint8_t)(t172 | 0xffu);
L_102a928d: ;
    COW_AT(102a928d)
    wr32(sp0 - 0x240u, 0x1e5u);
    wr32(sp0 - 0x244u, COW_IMG(0x103be560u));
    wr32(sp0 - 0x248u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be560u));
    t145 = rd32(sp0 + 8u);
    wr32(sp0 - 0x24cu, t145);
    t146 = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x250u, t146);
    t147 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x254u, t147);
    wr32(sp0 - 0x258u, COW_IMG(0x103be5f8u));
    g->ebx = ebx;
    g->eax = t147;
    g->ecx = t145;
    g->edx = t146;
    g->esp = sp0 - 0x250u;
    t148 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be5f8u), t147);
    t149 = g->ecx;
    t150 = g->edx;
    wr32(sp0 - 0x25cu, esi);
    g->edi = edi;
    g->ecx = t149;
    t151 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t150, 1, 3, esi, COW_IMG(0x103be5f8u), rd32(sp0 - 0x254u));
    t152 = g->ecx;
    t153 = g->edx;
    wr32(sp0 - 0x260u, 0x1e7u);
    wr32(sp0 - 0x264u, COW_IMG(0x103be560u));
    wr32(sp0 - 0x268u, edi);
    g->edx = t153;
    g->esp = sp0 - 0x25cu;
    t154 = cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103be560u), 0x1e7u);
    t155 = g->edx;
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    g->edx = t155;
    return t154 & 0xffffff00u;
L_102a9359: ;
    COW_AT(102a9359)
    t11 = rd32(edi + 0x24u);
    t12 = rd32(edi + 0x1cu);
    wr32(sp0 - 4u, t12);
    if (t11 == 3u)
    {
        eax = t11 - 3u;
        ebx = rd32(edi + 0x20u);
        ebp = t12;
        esi = t11 * rd32(edi + 0x1cu);
        goto L_102a94c3;
    }
    eax = t11 - 3u;
    ebx = rd32(edi + 0x20u);
    ebp = t12;
    esi = t11 * rd32(edi + 0x1cu);
    loc_4 = t12;
    COW_AT(102a9374)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102a93a9;
    }
    eax = eax - 1u;
    COW_AT(102a9377)
    wr32(sp0 - 0x24u, 0x67u);
    wr32(sp0 - 0x28u, COW_IMG(0x103be71cu));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b27fcu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be71cu));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103be6fcu));
    g->ebx = ebx;
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be6fcu), COW_IMG(0x103b27fcu));
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x34u, t18);
    g->edi = edi;
    g->eax = t18;
    t19 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t17, 1, 3, t18, COW_IMG(0x103be6fcu), COW_IMG(0x103b27fcu));
    t20 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t20;
    return t19 & 0xffffff00u;
L_102a93a9: ;
    COW_AT(102a93a9)
    wr32(sp0 - 0x24u, 0x47u);
    wr32(sp0 - 0x28u, COW_IMG(0x103be71cu));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b27fcu));
    wr32(sp0 - 0xcu, ebp * 3u);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ebp * 3u;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be71cu));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103be6ccu));
    g->ebx = ebx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be6ccu), COW_IMG(0x103b27fcu));
    t24 = rd32(edi + 0x20u);
    wr32(sp0 - 0x34u, t24);
    t25 = rd32(edi + 0x1cu);
    wr32(sp0 - 0x38u, t25);
    t26 = rd32(sp0 + 8u);
    wr32(sp0 - 0x3cu, t26);
    wr32(sp0 - 0x40u, COW_IMG(0x103be6b8u));
    t27 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x44u, t27);
    g->ebx = ebx;
    g->ecx = t26;
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t27, 1, 5, t27, COW_IMG(0x103be6b8u), t26, t25, t24);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0x48u, 0x49u);
    wr32(sp0 - 0x4cu, COW_IMG(0x103be71cu));
    t30 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x50u, t30);
    wr32(sp0 - 0x54u, 1u);
    g->eax = t30;
    g->ecx = t28;
    t31 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t30, COW_IMG(0x103be71cu), 0x49u, rd32(sp0 - 0x44u), COW_IMG(0x103be6b8u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t32 = g->ecx;
    wr32(sp0 - 8u, t31);
    if (t31 != 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t31;
        loc_8 = t31;
        goto L_102a9440;
    }
    eax = t31;
    ecx = t32;
    edx = t31;
    COW_AT(102a9408)
    wr32(sp0 - 0x24u, 0x4au);
    wr32(sp0 - 0x28u, COW_IMG(0x103be71cu));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t33 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be71cu));
    t34 = g->edx;
    t35 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x30u, t35);
    wr32(sp0 - 0x34u, ebp);
    wr32(sp0 - 0x38u, COW_IMG(0x103be684u));
    g->ebx = ebx;
    g->ecx = t35;
    g->esp = sp0 - 0x30u;
    t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be684u), ebp);
    t37 = g->ecx;
    t38 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x3cu, t38);
    g->edi = edi;
    t39 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t38, 1, 3, t38, COW_IMG(0x103be684u), rd32(sp0 - 0x34u));
    t40 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t40;
    return t39 & 0xffffff00u;
L_102a9440: ;
    COW_AT(102a9440)
    if (rd8(sp0 + 4u) == 0u)
    {
    COW_AT(102a945d)
        t41 = rd32(edi + 0x28u);
        wr32(sp0 + 8u, esi);
        ebp = t41;
    }
    else
    {
    COW_AT(102a9448)
        wr32(sp0 + 8u, -esi);
        ebp = rd32(edi + 0x28u) + (ebx - 1u) * esi;
    }
    COW_AT(102a9464)
    if ((int32_t)ebx > 0)
    {
    COW_AT(102a946c)
        wr32(sp0 + 4u, ebx);
L_102a9476: ;
    COW_AT(102a9476)
        if ((int32_t)rd32(sp0 - 4u) > 0)
        {
            eax = rd32(sp0 - 4u);
    COW_AT(102a947e)
            ecx = ebp;
            esi = edx;
            edi = eax;
L_102a9484: ;
    COW_AT(102a9484)
            eax = 0u;
L_102a9486: ;
    COW_AT(102a9486)
            t42 = rd8(eax + ecx);
            wr8(eax + esi, (uint8_t)t42);
            if ((int32_t)(eax + 1u) < 3)
            {
                eax = eax + 1u;
                ebx = (ebx & 0xffffff00u) | t42;
                goto L_102a9486;
            }
            ebx = (ebx & 0xffffff00u) | t42;
    COW_AT(102a9492)
            if (edi != 1u)
            {
                ecx = ecx + 4u;
                esi = esi + 3u;
                edi = edi - 1u;
                goto L_102a9484;
            }
            edi = edi - 1u;
        }
    COW_AT(102a949b)
        t43 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x24u, t43);
        t44 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x28u, t44);
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, edx);
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x10298ab0u), t43, g->ecx, edx, 1, 4, edx, 1u, t44, t43);
        t45 = g->edx;
        t46 = rd32(sp0 + 4u) - 1u;
        t47 = rd32(sp0 + 8u);
        t48 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t46);
        if (t48 != 1u)
        {
            ebp = ebp + t47;
            goto L_102a9472;
        }
        ecx = t47;
        edx = t45;
    COW_AT(102a94c1)
    }
L_102a9520: ;
    COW_AT(102a9520)
    t58 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t58);
    g->edi = edi;
    g->eax = t58;
    g->esp = sp0 - 0x18u;
    t59 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, t58, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t60 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t60;
    return (t59 & 0xffffff00u) | (uint8_t)(t59 | 0xffu);
L_102a9472: ;
    COW_AT(102a9472)
    edx = rd32(sp0 - 8u);
    loc_8 = rd32(sp0 - 8u);
    goto L_102a9476;
L_102a94c3: ;
    COW_AT(102a94c3)
    wr32(sp0 - 0x24u, ebx);
    wr32(sp0 - 0x28u, ebp);
    t49 = rd32(sp0 + 8u);
    wr32(sp0 - 0x2cu, t49);
    wr32(sp0 - 0x30u, COW_IMG(0x103be6b8u));
    wr32(sp0 - 0x34u, ecx);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    t50 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t49, 1, 5, ecx, COW_IMG(0x103be6b8u), t49, ebp, ebx);
    t51 = g->ecx;
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (t50 & 0xffffff00u) | rd8(sp0 + 4u);
        edx = rd32(edi + 0x28u);
    COW_AT(102a950c)
        t55 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x24u, t55);
        wr32(sp0 - 0x28u, esi * ebx);
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, edx);
        g->ecx = t55;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x10298ab0u), eax, g->ecx, edx, 1, 4, edx, 1u, esi * ebx, t55);
        t56 = g->ecx;
        t57 = g->edx;
        ecx = t56;
        edx = t57;
    }
    else
    {
        ecx = t51;
        edx = rd32(edi + 0x28u);
    COW_AT(102a94e3)
        if ((int32_t)(ebx - 1u) >= 0)
        {
            eax = ebx - 1u;
            ebx = edx + (ebx - 1u) * esi;
    COW_AT(102a94f1)
            edi = eax + 1u;
L_102a94f4: ;
    COW_AT(102a94f4)
            t52 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x24u, t52);
            wr32(sp0 - 0x28u, esi);
            wr32(sp0 - 0x2cu, 1u);
            wr32(sp0 - 0x30u, ebx);
            g->ecx = ecx;
            g->esp = sp0 - 0x20u;
            cow_call_regs(g, COW_IMG(0x10298ab0u), t52, g->ecx, edx, 1, 4, ebx, 1u, esi, t52);
            t53 = g->ecx;
            t54 = g->edx;
            if (edi != 1u)
            {
                ecx = t53;
                edx = t54;
                ebx = ebx - esi;
                edi = edi - 1u;
                goto L_102a94f4;
            }
            ecx = t53;
            edx = t54;
            edi = edi - 1u;
    COW_AT(102a950a)
        }
    }
    goto L_102a9520;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102988f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029891cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10298921u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a8e90u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a8eb5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x102a8ee4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x102a8f93u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_218;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_218 = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x248u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x102a8fccu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_218;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_218 = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x248u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x102a8fd5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x248u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x102a9051u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x102a9146u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        wr32(sp0 - 0x24cu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x102a9158u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        wr32(sp0 - 0x24cu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x102a915eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_214;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_214 = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        wr32(sp0 - 0x24cu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x102a9170u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a9183u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a9189u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        g->ecx = 0u;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a918bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a919cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a91a2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a91a8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a91acu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a91b7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a91d0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a91e7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a91efu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a9200u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a9204u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a920cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a9211u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a9236u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a9247u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a9263u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_210;
        uint32_t loc_214;
        uint32_t loc_21c;
        uint32_t loc_220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a928du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        wr32(sp0 - 0x27cu, sp0 - 0x198u);
        wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
        wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
        (void)sp0;
        return 1;
    }
    case 0x102a9300u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a9330u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9359u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9374u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9377u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a93a9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9408u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9440u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9448u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a945du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9464u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a946cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9472u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9476u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a947eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9484u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9486u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9492u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a949bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a94c1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a94c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a94e3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a94f1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a94f4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a950au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a950cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a9520u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102988f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102988f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
