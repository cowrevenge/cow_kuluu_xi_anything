/* f_0x100426f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100426f0(Guest* g)
{
    double d11;
    double d14;
    double d16;
    double d17;
    double d20;
    double d22;
    double d23;
    double d25;
    double d27;
    double d28;
    double d29;
    double d30;
    double d75;
    double d76;
    double d77;
    double d78;
    double d85;
    double d86;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_6c;
    uint32_t loc_98;
    uint32_t loc_9c;
    double loc_a0_f;
    uint32_t loc_a4;
    double loc_a4_f;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t24;
    uint32_t t26;
    uint32_t t3;
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
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
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
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 212u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10042710u: ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_10042710;
    case 0x100427bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100427ba;
    case 0x100427bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_6c = rd32(sp0 - 0x6cu); goto E_100427bd;
    case 0x100427ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100427dd;
    case 0x1004281cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1004281c;
    case 0x1004282cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1004282c;
    case 0x10042843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10042843;
    case 0x10042862u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a0_f = rdf32(sp0 - 0xa0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10042862;
    case 0x1004288fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a0_f = rdf32(sp0 - 0xa0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004288f;
    case 0x100428a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a0_f = rdf32(sp0 - 0xa0u); goto E_100428a4;
    case 0x100428c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100428c0;
    case 0x100428cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100428cf;
    case 0x100428d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100428d7;
    case 0x100428e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100428e2;
    case 0x100428e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100428e8;
    case 0x100428f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100428f9;
    case 0x10042901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10042901;
    case 0x10042912u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10042912;
    case 0x1004291au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004291a;
    case 0x10042922u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10042922;
    case 0x10042949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10042949;
    case 0x10042955u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10042955;
    case 0x1004295bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004295b;
    case 0x1004296eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004296e;
    case 0x1004297au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004297a;
    case 0x10042980u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10042980;
    case 0x10042982u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10042982;
    case 0x100429a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100429a6;
    case 0x100429b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100429b7;
    case 0x100429c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100429c2;
    case 0x10042a59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042a59;
    case 0x10042a6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042a6f;
    case 0x10042a90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042a90;
    case 0x10042aa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042aa7;
    case 0x10042ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10042ab5;
    case 0x10042ac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10042ac9;
    case 0x10042ad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10042ad3;
    case 0x10042ad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10042ad6;
    case 0x10042aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10042aea;
    case 0x10042afcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042afc;
    case 0x10042b12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042b12;
    case 0x10042b1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042b1f;
    case 0x10042b2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042b2c;
    case 0x10042b37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042b37;
    case 0x10042b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042b3f;
    case 0x10042b4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10042b4b;
    case 0x10042b96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10042b96;
    case 0x10042bbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10042bbb;
    case 0x10042be6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10042be6;
    case 0x10042c06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10042c06;
    case 0x10042c3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10042c3b;
    case 0x10042c5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10042c5a;
    case 0x10042c63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10042c63;
    case 0x10042c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10042c78;
    case 0x10042c82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10042c82;
    case 0x10042c85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10042c85;
    case 0x10042c99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10042c99;
    case 0x10042cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10042cac;
    case 0x10042cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0_f = rdf32(sp0 - 0xa0u); goto E_10042cc5;
    default: break;
    }
#endif

    COW_AT(100426f0)
    wr32(sp0 - 0xa8u, in_ebx);
    wr32(sp0 - 0xacu, in_ebp);
    wr32(sp0 - 0xb0u, in_esi);
    wr32(sp0 - 0xb4u, in_edi);
    wr32(sp0 - 0x6cu, self);
    if (rd8(COW_IMG(0x1047bb40u)) & 1u)
    {
        loc_a8 = in_ebx;
        loc_ac = in_ebp;
        loc_b0 = in_esi;
        loc_b4 = in_edi;
        loc_6c = self;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047bb40u));
    COW_AT(10042710)
        wr32(sp0 - 0xb8u, COW_IMG(0x10042cf0u));
        wr32(COW_IMG(0x1047bb04u), 0u);
        wr8(COW_IMG(0x1047bb40u), (uint8_t)(ecx | 1u));
        wr32(COW_IMG(0x1047bb08u), 0u);
        wr32(COW_IMG(0x1047bb0cu), 0u);
        wr32(COW_IMG(0x1047bb10u), 0xbf800000u);
        wr32(COW_IMG(0x1047bb14u), 0u);
        wr32(COW_IMG(0x1047bb18u), 0u);
        wr32(COW_IMG(0x1047bb1cu), 0u);
        wr32(COW_IMG(0x1047bb20u), 0xbf800000u);
        wr32(COW_IMG(0x1047bb24u), 0u);
        wr32(COW_IMG(0x1047bb28u), 0x3f800000u);
        wr32(COW_IMG(0x1047bb2cu), 0u);
        wr32(COW_IMG(0x1047bb30u), 0u);
        wr32(COW_IMG(0x1047bb34u), 0u);
        wr32(COW_IMG(0x1047bb38u), 0x3f800000u);
        wr32(COW_IMG(0x1047bb3cu), 0u);
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10042cf0u));
    COW_AT(100427ba)
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_6c = rd32(sp0 - 0x6cu);
    }
    COW_AT(100427bd)
    t1 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc4u);
    wr32(sp0 - 0xa0u, t1);
    t2 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc0u);
    wr32(sp0 - 0xa4u, t2);
    g->esp = sp0 - 0x8cu;
    cow_thiscall_cdecl(g, COW_IMG(0x10045d40u), self, 10, loc_b4, loc_b0, loc_ac, loc_a8, t2, t1, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u));
    COW_AT(100427dd)
    t3 = rd32(sp0 - 0xa0u);
    wr32(sp0 - 0xb8u, t3);
    t4 = rd32(sp0 - 0xa4u);
    wr32(sp0 - 0xbcu, t4);
    t5 = rd32(COW_IMG(0x1047bfa8u)) + 0xb10u;
    wr32(sp0 - 0xc0u, t5);
    wr32(sp0 - 0x68u, self + 0xa0u);
    wr32(sp0 - 0xc4u, self + 0xa0u);
    wr32(sp0 - 0xc8u, 5u);
    wr32(sp0 - 0xccu, sp0 - 0x3cu);
    wr32(sp0 - 0xd0u, COW_IMG(0x1047bb04u));
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t6 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, rd32(t6 + 0x80u), rd32(COW_IMG(0x1047cf7cu)), 7, COW_IMG(0x1047bb04u), sp0 - 0x3cu, 5u, self + 0xa0u, t5, t4, t3);
    t7 = g->edx;
    edx = t7;
    COW_AT(1004281c)
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = edx;
    t8 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0xb4u;
    t9 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t8 + 0xdc8u), 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(1004282c)
    d11 = (double)(float)(double)(int32_t)rd32(eax + 8u);
    wrf32(sp0 - 0xa0u, (float)d11);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    t12 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0xb4u;
    t13 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t12 + 0xdc8u), 0);
    eax = t13;
    COW_AT(10042843)
    d14 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0xa0u));
    wrf32(sp0 - 0xa0u, (float)(double)(float)d14);
    ecx = sp0 - 0x38u;
    loc_a0_f = (double)(float)d14;
    x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)rd32(eax + 0xcu));
    eax = 0u;
L_10042862: ;
    COW_AT(10042862)
    t15 = rd32(ecx - 4u);
    d16 = fr(g, loc_a0_f * (double)rdf32(ecx - 4u));
    wr32(eax + sp0 - 0x80u, t15);
    wr32(eax + sp0 - 0x94u, rd32(ecx));
    wrf32(eax + sp0 - 0x64u, (float)d16);
    d17 = fr(g, x0 * (double)rdf32(ecx));
    wrf32(eax + sp0 - 0x50u, (float)d17);
    if ((int32_t)(eax + 4u) < 20)
    {
        eax = eax + 4u;
        ecx = ecx + 0xcu;
        goto L_10042862;
    }
    COW_AT(1004288f)
    if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u) != 0u)
    {
        ebx = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
    COW_AT(100428a4)
        t18 = rd32(sp0 - 0x80u);
        wr32(sp0 - 0x98u, t18);
        wr32(sp0 - 0xa4u, t18);
        t19 = rd32(sp0 - 0x94u);
        wr32(sp0 - 0x9cu, t19);
        eax = t19;
        ecx = 0u;
        edx = t18;
        loc_98 = t18;
        loc_a4 = t18;
        loc_9c = t19;
        x0 = (double)rdf32(sp0 - 0x94u);
L_100428c0: ;
    COW_AT(100428c0)
        d20 = (double)rdf32(ecx + sp0 - 0x7cu);
        if (!(cow_bits2f(loc_a4) < d20))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_a4), d20, 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_a4), d20, 1u);
    COW_AT(100428cf)
            t21 = rd32(ecx + sp0 - 0x7cu);
            wr32(sp0 - 0xa4u, t21);
            edx = t21;
            loc_a4 = t21;
        }
    COW_AT(100428d7)
        d22 = (double)rdf32(ecx + sp0 - 0x90u);
        if (!(x0 < d22))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d22, 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d22, 1u);
    COW_AT(100428e2)
            x0 = (double)rdf32(ecx + sp0 - 0x90u);
        }
    COW_AT(100428e8)
        d23 = (double)rdf32(ecx + sp0 - 0x7cu);
        if ((cow_fsw(g, cow_bits2f(loc_98), d23, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, cow_bits2f(loc_98), d23, 1u) & 0x4100u;
        }
        else
        {
    COW_AT(100428f9)
            t24 = rd32(ecx + sp0 - 0x7cu);
            wr32(sp0 - 0x98u, t24);
            eax = t24;
            loc_98 = t24;
        }
    COW_AT(10042901)
        d25 = (double)rdf32(ecx + sp0 - 0x90u);
        if ((cow_fsw(g, cow_bits2f(loc_9c), d25, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, cow_bits2f(loc_9c), d25, 1u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, cow_bits2f(loc_9c), d25, 1u) & 0x4100u;
    COW_AT(10042912)
            t26 = rd32(ecx + sp0 - 0x90u);
            wr32(sp0 - 0x9cu, t26);
            edx = t26;
            loc_9c = t26;
        }
    COW_AT(1004291a)
        if ((int32_t)(ecx + 4u) < 16)
        {
            ecx = ecx + 4u;
            goto L_100428c0;
        }
    COW_AT(10042922)
        d27 = (double)(float)fr(g, cow_bits2f(loc_a4) - cow_bits2f(loc_98));
        wrf32(sp0 - 0xa4u, (float)d27);
        d28 = (double)(float)fr(g, x0 - cow_bits2f(loc_9c));
        wrf32(sp0 - 0xa0u, (float)d28);
        if ((cow_fsw(g, d27, (double)rdf32(COW_IMG(0x1032a344u)), 0u) & 0x100u) != 0u)
        {
            eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x1032a344u)), 0u) & 0x100u;
            loc_a0_f = d28;
            loc_a4_f = d27;
    COW_AT(10042955)
            x0 = (double)rdf32(COW_IMG(0x1032961cu));
        }
        else
        {
            eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x1032a344u)), 0u) & 0x100u;
            loc_a0_f = d28;
            loc_a4_f = d27;
    COW_AT(10042949)
            x0 = fr(g, (double)rdf32(COW_IMG(0x10329a20u)) / loc_a4_f);
        }
    COW_AT(1004295b)
        if ((cow_fsw(g, loc_a0_f, (double)rdf32(COW_IMG(0x1032a344u)), 1u) & 0x100u) != 0u)
        {
    COW_AT(1004297a)
            x1 = (double)rdf32(COW_IMG(0x1032961cu));
        }
        else
        {
    COW_AT(1004296e)
            x1 = fr(g, (double)rdf32(COW_IMG(0x10329a20u)) / loc_a0_f);
        }
    COW_AT(10042980)
        eax = 0u;
L_10042982: ;
    COW_AT(10042982)
        d29 = fr(g, fr(g, (double)rdf32(eax + sp0 - 0x80u) - cow_bits2f(loc_98)) * x0);
        wrf32(eax + sp0 - 0x80u, (float)d29);
        d30 = fr(g, fr(g, (double)rdf32(eax + sp0 - 0x94u) - cow_bits2f(loc_9c)) * x1);
        wrf32(eax + sp0 - 0x94u, (float)d30);
        if ((int32_t)(eax + 4u) < 20)
        {
            eax = eax + 4u;
            goto L_10042982;
        }
        eax = eax + 4u;
    COW_AT(100429a6)
        wr32(sp0 - 0xb8u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        t31 = cow_stdcall(g, COW_IMG(0x10044010u), 1, 4u);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    COW_AT(100429b7)
        g->eax = eax;
        g->esp = sp0 - 0xb4u;
        t33 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba8u)), 0);
        eax = t33;
    COW_AT(100429c2)
        t34 = rd32(sp0 - 0x60u);
        t35 = rd32(sp0 - 0x4cu);
        wr32(eax + 0x14u, t34);
        t36 = rd32(sp0 - 0x5cu);
        wr32(eax + 0x18u, t35);
        t37 = rd32(sp0 - 0x48u);
        wr32(eax + 0x30u, t36);
        t38 = rd32(sp0 - 0x54u);
        wr32(eax + 0x34u, t37);
        t39 = rd32(sp0 - 0x40u);
        wr32(eax + 0x4cu, t38);
        t40 = rd32(sp0 - 0x58u);
        wr32(eax + 0x50u, t39);
        t41 = rd32(sp0 - 0x44u);
        wr32(eax + 0x68u, t40);
        t42 = rd32(sp0 - 0x7cu);
        wr32(eax + 0x6cu, t41);
        t43 = rd32(sp0 - 0x90u);
        wr32(eax, t42);
        t44 = rd32(sp0 - 0x78u);
        wr32(eax + 4u, t43);
        t45 = rd32(sp0 - 0x8cu);
        wr32(eax + 0x1cu, t44);
        t46 = rd32(sp0 - 0x70u);
        wr32(eax + 0x20u, t45);
        t47 = rd32(sp0 - 0x84u);
        wr32(eax + 0x38u, t46);
        t48 = rd32(sp0 - 0x74u);
        wr32(eax + 0x3cu, t47);
        t49 = rd32(sp0 - 0x88u);
        wr32(eax + 8u, 0u);
        wr32(eax + 0xcu, 0x3f800000u);
        wr32(eax + 0x24u, 0u);
        wr32(eax + 0x28u, 0x3f800000u);
        wr32(eax + 0x40u, 0u);
        wr32(eax + 0x44u, 0x3f800000u);
        wr32(eax + 0x54u, t48);
        wr32(eax + 0x58u, t49);
        wr32(eax + 0x5cu, 0u);
        wr32(eax + 0x60u, 0x3f800000u);
        g->edx = t49;
        g->esp = sp0 - 0xb4u;
        cow_stdcall(g, COW_IMG(0x100441a0u), 0);
        t50 = g->edx;
        edx = t50;
    COW_AT(10042a59)
        wr32(sp0 - 0xb8u, 0u);
        wr32(sp0 - 0xbcu, 0u);
        t51 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xc0u, t51);
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, rd32(rd32(t51) + 0xf4u), rd32(t51), 3, t51, 0u, 0u);
    COW_AT(10042a6f)
        t52 = rd32(rd32(COW_IMG(0x1047bb88u)) + 0xcu);
        wr32(sp0 - 0xb8u, t52);
        t53 = rd32(rd32(COW_IMG(0x1047bb88u)) + 8u);
        wr32(sp0 - 0xbcu, t53);
        t54 = rd32(rd32(COW_IMG(0x1047bb88u)) + 4u);
        wr32(sp0 - 0xc0u, t54);
        g->ebx = ebx;
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x10009ea0u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 3, t54, t53, t52);
    COW_AT(10042a90)
        wr32(sp0 - 0xb8u, ebx);
        wr32(sp0 - 0xbcu, 0u);
        t55 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xc0u, t55);
        g->eax = t55;
        g->edx = rd32(t55);
        t56 = rd32(t55);
        g->esp = sp0 - 0xb4u;
        t57 = cow_thiscall(g, rd32(t56 + 0xf4u), rd32(COW_IMG(0x1047bfa8u)), 3, t55, 0u, ebx);
        t58 = g->edx;
        eax = t57;
        edx = t58;
    COW_AT(10042aa7)
        if ((rd8(COW_IMG(0x1047bb40u)) & 2u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb40u));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb40u));
    COW_AT(10042ab5)
            wr8(COW_IMG(0x1047bb40u), (uint8_t)(eax | 2u));
            g->eax = eax;
            g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 2u);
            g->esp = sp0 - 0xb4u;
            t59 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bb50u), 0);
            t60 = g->ecx;
            t61 = g->edx;
            eax = t59;
            ecx = t60;
            edx = t61;
    COW_AT(10042ac9)
            wr32(sp0 - 0xb8u, COW_IMG(0x10042ce0u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            t62 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10042ce0u));
            t63 = g->edx;
            eax = t62;
            edx = t63;
    COW_AT(10042ad3)
        }
    COW_AT(10042ad6)
        wr32(sp0 - 0xb8u, COW_IMG(0x10353028u));
        wr32(sp0 - 0xbcu, COW_IMG(0x103530d0u));
        g->eax = eax;
        g->esp = sp0 - 0xb4u;
        t64 = cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bb50u), edx, 2, COW_IMG(0x103530d0u), COW_IMG(0x10353028u));
        t65 = g->edx;
        eax = t64;
        edx = t65;
    COW_AT(10042aea)
        wr32(sp0 - 0xb8u, 0xffffffffu);
        wr32(sp0 - 0xbcu, 0u);
        wr32(sp0 - 0xc0u, 5u);
        wr32(sp0 - 0xc4u, 2u);
        wr32(sp0 - 0xc8u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bba8u)), 5, 0u, 2u, 5u, 0u, 0xffffffffu);
        t66 = g->edx;
        edx = t66;
    COW_AT(10042afc)
        wr32(sp0 - 0xb8u, 0u);
        wr32(sp0 - 0xbcu, 0u);
        t67 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xc0u, t67);
        g->eax = t67;
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        t68 = cow_thiscall(g, rd32(rd32(t67) + 0xf4u), rd32(t67), 3, t67, 0u, 0u);
        t69 = g->edx;
        eax = t68;
        edx = t69;
    COW_AT(10042b12)
        wr32(sp0 - 0xb8u, 0u);
        wr32(sp0 - 0xbcu, 0u);
        g->eax = eax;
        g->esp = sp0 - 0xb4u;
        t70 = cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), edx, 2, 0u, 0u);
        t71 = g->edx;
        eax = t70;
        edx = t71;
    COW_AT(10042b1f)
        wr32(sp0 - 0xb8u, 6u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        t72 = cow_stdcall(g, COW_IMG(0x10044010u), 1, 6u);
        t73 = g->edx;
        eax = t72;
        edx = t73;
    COW_AT(10042b2c)
        g->eax = eax;
        g->esp = sp0 - 0xb4u;
        t74 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bbacu)), 0);
        eax = t74;
    COW_AT(10042b37)
        ecx = eax + 0x24u;
        edx = 5u;
L_10042b3f: ;
    COW_AT(10042b3f)
        wr32(ecx, 0x808080u);
        if (edx != 1u)
        {
            ecx = ecx + 0x18u;
            edx = edx - 1u;
            goto L_10042b3f;
        }
    COW_AT(10042b4b)
        wr32(eax + 0xcu, rd32(COW_IMG(0x1047bc0cu)));
        wr32(eax + 0x78u, 0xbf800000u);
        wr32(eax + 0x18u, 0xbf800000u);
        wr32(eax + 0x34u, 0xbf800000u);
        wr32(eax + 0x80u, 0u);
        wr32(eax + 0x68u, 0u);
        wr32(eax + 0x50u, 0u);
        wr32(eax + 0x38u, 0u);
        wr32(eax + 0x20u, 0u);
        wr32(eax + 8u, 0u);
        wr32(eax, 0u);
        wr32(eax + 4u, 0u);
        wr32(eax + 0x7cu, 0u);
        wr32(eax + 0x1cu, 0u);
        wr32(eax + 0x30u, 0u);
        wr32(eax + 0x48u, 0x3f800000u);
        wr32(eax + 0x4cu, 0u);
        wr32(eax + 0x60u, 0u);
        wr32(eax + 0x64u, 0x3f800000u);
        ecx = 0u;
        edx = eax + 0x14u;
L_10042b96: ;
    COW_AT(10042b96)
        d75 = fr(g, (double)rdf32(ecx + sp0 - 0x80u) * (double)rdf32(COW_IMG(0x10329e94u)));
        wrf32(edx - 4u, (float)d75);
        d76 = fr(g, (double)rdf32(ecx + sp0 - 0x94u) * (double)rdf32(COW_IMG(0x10329e94u)));
        wrf32(edx, (float)d76);
        if ((int32_t)(ecx + 4u) < 20)
        {
            ecx = ecx + 4u;
            edx = edx + 0x18u;
            goto L_10042b96;
        }
        edx = edx + 0x18u;
    COW_AT(10042bbb)
        d77 = fr(g, (double)rdf32(sp0 - 0x7cu) * (double)rdf32(COW_IMG(0x10329e94u)));
        wrf32(eax + 0x88u, (float)d77);
        d78 = fr(g, (double)rdf32(sp0 - 0x90u) * (double)rdf32(COW_IMG(0x10329e94u)));
        wrf32(eax + 0x8cu, (float)d78);
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        cow_stdcall(g, COW_IMG(0x100441a0u), 0);
        t79 = g->edx;
        edx = t79;
    COW_AT(10042be6)
        t80 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t81 = rd32(COW_IMG(0x1047cf7cu));
        t82 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t81 + 0xa90u, t80);
        g->edx = edx;
        g->esp = sp0 - 0x8cu;
        cow_thiscall_cdecl(g, COW_IMG(0x10045d40u), self, 10, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u));
        t83 = g->edx;
        edx = t83;
        ebx = t82;
    COW_AT(10042c06)
        t84 = rd32(sp0 - 0x6cu);
        esi = rd32(sp0 - 0x68u);
        edi = ebx;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d85 = fr(g, (double)rdf32(t84 + 0x194u) + (double)rdf32(ebx + 0x30u));
        wrf32(ebx + 0x30u, (float)d85);
        d86 = fr(g, (double)rdf32(t84 + 0x194u) + (double)rdf32(ebx + 0x34u));
        wrf32(ebx + 0x34u, (float)d86);
        wr32(sp0 - 0xb8u, ebx);
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, ebx);
    COW_AT(10042c3b)
        t87 = rd32(rd32(COW_IMG(0x1047bb88u)) + 4u);
        wr32(sp0 - 0xb8u, t87);
        wr32(sp0 - 0xbcu, 0u);
        t88 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0xc0u, t88);
        g->eax = t88;
        g->edx = t87;
        g->esp = sp0 - 0xb4u;
        t89 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0xf4u), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 3, t88, 0u, t87);
        t90 = g->edx;
        eax = t89;
        edx = t90;
    COW_AT(10042c5a)
        if ((rd8(COW_IMG(0x1047bb40u)) & 4u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb40u));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb40u));
    COW_AT(10042c63)
            wr8(COW_IMG(0x1047bb40u), (uint8_t)(eax | 4u));
            g->eax = eax;
            g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 4u);
            g->esp = sp0 - 0xb4u;
            t91 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bb44u), 0);
            t92 = g->ecx;
            t93 = g->edx;
            eax = t91;
            ecx = t92;
            edx = t93;
    COW_AT(10042c78)
            wr32(sp0 - 0xb8u, COW_IMG(0x10042cd0u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            t94 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10042cd0u));
            t95 = g->edx;
            eax = t94;
            edx = t95;
    COW_AT(10042c82)
        }
    COW_AT(10042c85)
        wr32(sp0 - 0xb8u, COW_IMG(0x10353108u));
        wr32(sp0 - 0xbcu, COW_IMG(0x10353178u));
        g->eax = eax;
        g->esp = sp0 - 0xb4u;
        t96 = cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bb44u), edx, 2, COW_IMG(0x10353178u), COW_IMG(0x10353108u));
        t97 = g->edx;
        eax = t96;
        edx = t97;
    COW_AT(10042c99)
        wr32(sp0 - 0xb8u, 0xffffffffu);
        wr32(sp0 - 0xbcu, 0u);
        wr32(sp0 - 0xc0u, 6u);
        wr32(sp0 - 0xc4u, 4u);
        wr32(sp0 - 0xc8u, 0u);
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bbacu)), 5, 0u, 4u, 6u, 0u, 0xffffffffu);
    COW_AT(10042cac)
        t98 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t99 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t99 + 0xa90u, t98);
        wr32(t98 * 4u + t99 + 0xa10u, ebx);
    }
    COW_AT(10042cc5)
    g->ebx = rd32(sp0 - 0xa8u);
    g->esi = rd32(sp0 - 0xb0u);
    g->edi = rd32(sp0 - 0xb4u);
    g->ebp = rd32(sp0 - 0xacu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100426f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10042710u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->eax = (g->eax & 0xffffff00u) | 1u;
        wr32(sp0 - 0x6cu, self);
        (void)sp0;
        return 1;
    }
    case 0x100427bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x100427bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_6c;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x100427ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1004281cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004282cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042843u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042862u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_a0_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a0_f = rdf32(sp0 - 0xa0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004288fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_a0_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a0_f = rdf32(sp0 - 0xa0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100428a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_a0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a0_f = rdf32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100428c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100428cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100428d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100428e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100428e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100428f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042901u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042912u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004291au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042922u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042949u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042955u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004295bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004296eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1004297au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042980u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042982u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100429a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100429b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100429c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042a59u:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042a6fu:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042a90u:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042aa7u:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042ab5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebx = 2u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042ac9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebx = 2u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042ad3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xb8u;
        g->ebx = 2u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042ad6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebx = 2u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042aeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebx = 2u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042afcu:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042b12u:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042b1fu:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042b2cu:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042b37u:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042b3fu:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042b4bu:
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
        self = g->esi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042b96u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042bbbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042be6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042c06u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042c3bu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042c5au:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042c63u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042c78u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042c82u:
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
        g->esp = sp0 - 0xb8u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042c85u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042c99u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042cacu:
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
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10042cc5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_a0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0_f = rdf32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xccu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100426f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100426f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
