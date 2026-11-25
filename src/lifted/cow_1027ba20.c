/* f_0x1027ba20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1027ba20(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d48;
    double d55;
    double d62;
    double d75;
    double d82;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_188_f;
    double loc_18c_f;
    uint32_t loc_190;
    uint32_t loc_194;
    uint32_t loc_198;
    uint32_t loc_19c;
    uint32_t loc_1c0;
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
    uint32_t t15;
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
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
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
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
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
    double x0;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 484u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027ba45u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1b0u); in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 0x1a8u); g->ebp = rd32(sp0 - 0x1a8u); g->edi = rd32(sp0 - 0x1b0u); g->esi = rd32(sp0 - 0x1acu); goto E_1027ba45;
    case 0x1027ba59u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ba59;
    case 0x1027ba63u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1b0u); in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 0x1a8u); in_ebx = rd32(sp0 - 0x1a4u); g->ebp = rd32(sp0 - 0x1a8u); g->ebx = rd32(sp0 - 0x1a4u); g->edi = rd32(sp0 - 0x1b0u); g->esi = rd32(sp0 - 0x1acu); goto E_1027ba63;
    case 0x1027ba6fu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1b0u); in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 0x1a8u); in_ebx = rd32(sp0 - 0x1a4u); g->ebp = rd32(sp0 - 0x1a8u); g->ebx = rd32(sp0 - 0x1a4u); g->edi = rd32(sp0 - 0x1b0u); g->esi = rd32(sp0 - 0x1acu); goto E_1027ba6f;
    case 0x1027ba74u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1b0u); in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 0x1a8u); in_ebx = rd32(sp0 - 0x1a4u); g->ebp = rd32(sp0 - 0x1a8u); g->ebx = rd32(sp0 - 0x1a4u); g->edi = rd32(sp0 - 0x1b0u); g->esi = rd32(sp0 - 0x1acu); goto E_1027ba74;
    case 0x1027ba79u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1b0u); in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 0x1a8u); in_ebx = rd32(sp0 - 0x1a4u); g->ebp = rd32(sp0 - 0x1a8u); g->ebx = rd32(sp0 - 0x1a4u); g->edi = rd32(sp0 - 0x1b0u); g->esi = rd32(sp0 - 0x1acu); goto E_1027ba79;
    case 0x1027ba7eu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1b0u); in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 0x1a8u); in_ebx = rd32(sp0 - 0x1a4u); g->ebp = rd32(sp0 - 0x1a8u); g->ebx = rd32(sp0 - 0x1a4u); g->edi = rd32(sp0 - 0x1b0u); g->esi = rd32(sp0 - 0x1acu); goto E_1027ba7e;
    case 0x1027ba92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ba92;
    case 0x1027ba9cu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1b0u); in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 0x1a8u); in_ebx = rd32(sp0 - 0x1a4u); g->ebp = rd32(sp0 - 0x1a8u); g->ebx = rd32(sp0 - 0x1a4u); g->edi = rd32(sp0 - 0x1b0u); g->esi = rd32(sp0 - 0x1acu); goto E_1027ba9c;
    case 0x1027baaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027baae;
    case 0x1027babeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027babe;
    case 0x1027bac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bac5;
    case 0x1027bad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bad5;
    case 0x1027baddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027badd;
    case 0x1027bae1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bae1;
    case 0x1027baf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027baf0;
    case 0x1027bb05u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb05;
    case 0x1027bb15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb15;
    case 0x1027bb1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb1c;
    case 0x1027bb30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb30;
    case 0x1027bb35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1027bb35;
    case 0x1027bb3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb3a;
    case 0x1027bb3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb3d;
    case 0x1027bb4au: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb4a;
    case 0x1027bb57u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb57;
    case 0x1027bb5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb5d;
    case 0x1027bb6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_190 = rd32(sp0 - 0x190u); goto E_1027bb6b;
    case 0x1027bb7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb7f;
    case 0x1027bb94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bb94;
    case 0x1027bba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_190 = rd32(sp0 - 0x190u); goto E_1027bba4;
    case 0x1027bba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bba9;
    case 0x1027bbb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bbb4;
    case 0x1027bbc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bbc3;
    case 0x1027bbcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_19c = rd32(sp0 - 0x19cu); loc_198 = rd32(sp0 - 0x198u); loc_194 = rd32(sp0 - 0x194u); goto E_1027bbcd;
    case 0x1027bbdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_19c = rd32(sp0 - 0x19cu); loc_198 = rd32(sp0 - 0x198u); loc_194 = rd32(sp0 - 0x194u); goto E_1027bbdb;
    case 0x1027bbebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bbeb;
    case 0x1027bbf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bbf6;
    case 0x1027bc0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc0a;
    case 0x1027bc1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc1b;
    case 0x1027bc21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc21;
    case 0x1027bc2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc2d;
    case 0x1027bc32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc32;
    case 0x1027bc3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc3e;
    case 0x1027bc44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027bc44;
    case 0x1027bc51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc51;
    case 0x1027bc53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc53;
    case 0x1027bc5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc5f;
    case 0x1027bc65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027bc65;
    case 0x1027bc72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc72;
    case 0x1027bc74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc74;
    case 0x1027bc80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc80;
    case 0x1027bc86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027bc86;
    case 0x1027bc93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc93;
    case 0x1027bc95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bc95;
    case 0x1027bca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bca1;
    case 0x1027bca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bca7;
    case 0x1027bcb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bcb4;
    case 0x1027bcb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bcb9;
    case 0x1027bcc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bcc5;
    case 0x1027bccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027bccb;
    case 0x1027bcd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18c_f = rdf32(sp0 - 0x18cu); goto E_1027bcd2;
    case 0x1027bcdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18c_f = rdf32(sp0 - 0x18cu); goto E_1027bcdb;
    case 0x1027bce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bce7;
    case 0x1027bcedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027bced;
    case 0x1027bcf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18c_f = rdf32(sp0 - 0x18cu); loc_188_f = rdf32(sp0 - 0x188u); goto E_1027bcf4;
    case 0x1027bcf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18c_f = rdf32(sp0 - 0x18cu); loc_188_f = rdf32(sp0 - 0x188u); goto E_1027bcf9;
    case 0x1027bd09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18c_f = rdf32(sp0 - 0x18cu); loc_188_f = rdf32(sp0 - 0x188u); goto E_1027bd09;
    case 0x1027bd15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd15;
    case 0x1027bd2eu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd2e;
    case 0x1027bd39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd39;
    case 0x1027bd3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd3f;
    case 0x1027bd4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd4d;
    case 0x1027bd57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd57;
    case 0x1027bd5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd5c;
    case 0x1027bd68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd68;
    case 0x1027bd89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd89;
    case 0x1027bd94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd94;
    case 0x1027bd9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bd9f;
    case 0x1027bdaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bdaa;
    case 0x1027bdb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bdb5;
    case 0x1027bdc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bdc0;
    case 0x1027bdcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bdcb;
    case 0x1027bde3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bde3;
    case 0x1027bde6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bde6;
    case 0x1027bdf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bdf6;
    case 0x1027be2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_19c = rd32(sp0 - 0x19cu); loc_198 = rd32(sp0 - 0x198u); loc_194 = rd32(sp0 - 0x194u); goto E_1027be2a;
    case 0x1027be39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027be39;
    case 0x1027be4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027be4d;
    case 0x1027be66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027be66;
    case 0x1027be75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027be75;
    case 0x1027be7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027be7f;
    case 0x1027be8fu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027be8f;
    case 0x1027bea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bea3;
    case 0x1027beacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027beac;
    case 0x1027beb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027beb1;
    case 0x1027bec6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bec6;
    case 0x1027bed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bed1;
    case 0x1027bedbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bedb;
    case 0x1027bedeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bede;
    case 0x1027bee6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bee6;
    case 0x1027bef6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bef6;
    case 0x1027bf06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf06;
    case 0x1027bf1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf1a;
    case 0x1027bf23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf23;
    case 0x1027bf28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf28;
    case 0x1027bf3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf3d;
    case 0x1027bf48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf48;
    case 0x1027bf52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf52;
    case 0x1027bf55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf55;
    case 0x1027bf5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf5d;
    case 0x1027bf6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf6d;
    case 0x1027bf7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf7d;
    case 0x1027bf91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf91;
    case 0x1027bf9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf9a;
    case 0x1027bf9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bf9f;
    case 0x1027bfb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bfb4;
    case 0x1027bfbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bfbf;
    case 0x1027bfc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bfc9;
    case 0x1027bfccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bfcc;
    case 0x1027bfd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bfd4;
    case 0x1027bfe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027bfe4;
    default: break;
    }
#endif

    COW_AT(1027ba20)
    wr32(sp0 - 0x1a4u, in_ebx);
    wr32(sp0 - 0x1a8u, in_ebp);
    wr32(sp0 - 0x1acu, in_esi);
    wr32(sp0 - 0x1b0u, in_edi);
    wr32(sp0 - 0x18cu, 0u);
    wr32(sp0 - 0x188u, 0u);
    if (arg1 != 0u) goto L_1027ba63;
    COW_AT(1027ba45)
    wr32(sp0 - 0x1b4u, 0x13du);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1b4u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1027ba59)
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b4368u));
    ebx = in_ebx;
    loc_1c0 = COW_IMG(0x103b4368u);
L_1027bb35: ;
    COW_AT(1027bb35)
    g->ebx = ebx;
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, loc_1c0, rd32(sp0 - 0x1bcu));
    COW_AT(1027bb3a)
L_1027bb3d: ;
    COW_AT(1027bb3d)
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027ba63: ;
    COW_AT(1027ba63)
    if (arg2 == 4u) goto L_1027ba9c;
    COW_AT(1027ba6f)
    if (arg2 == 1u) goto L_1027ba9c;
    COW_AT(1027ba74)
    if (arg2 == 2u) goto L_1027ba9c;
    COW_AT(1027ba79)
    if (arg2 == 3u) goto L_1027ba9c;
    COW_AT(1027ba7e)
    wr32(sp0 - 0x1b4u, 0x145u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->ebx = arg2;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1b4u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1027ba92)
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b4228u));
    ebx = arg2;
    loc_1c0 = COW_IMG(0x103b4228u);
    goto L_1027bb35;
L_1027ba9c: ;
    COW_AT(1027ba9c)
    wr32(sp0 - 0x1b4u, arg1);
    wr32(sp0 - 0x1b8u, 0x50u);
    wr32(sp0 - 0x1bcu, 1u);
    wr32(sp0 - 0x1c0u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = in_edx;
    g->esp = sp0 - 0x194u;
    t7 = cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x50u, 1u, 0x50u, arg1, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u));
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1027baae)
    wr32(sp0 - 0x1c4u, arg1);
    wr32(sp0 - 0x1c8u, 0x100u);
    wr32(sp0 - 0x1ccu, sp0 - 0x150u);
    g->eax = eax;
    g->ecx = sp0 - 0x150u;
    g->esp = sp0 - 0x1bcu;
    t9 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x150u, 0x100u, arg1, rd32(sp0 - 0x1c0u));
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(1027babe)
    if (eax == 0u) goto L_1027bb1c;
L_1027bac5: ;
    COW_AT(1027bac5)
    edi = sp0 - 0x150u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_1027bb05;
    ecx = ~ecx - 1u;
    COW_AT(1027bad5)
    if (rd8(sp0 - 0x150u) == 0xau)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x150u);
        goto L_1027bb05;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x150u);
    COW_AT(1027badd)
    if ((uint8_t)eax == 0x23u) goto L_1027bb05;
    COW_AT(1027bae1)
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b435cu));
    wr32(sp0 - 0x1b8u, sp0 - 0x150u);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0x1a8u;
    t12 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, sp0 - 0x150u, 1, 4, sp0 - 0x150u, COW_IMG(0x103b435cu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(1027baf0)
    esi = eax;
    edi = COW_IMG(0x103b4350u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_1027bb4a;
    eax = 0u;
L_1027bb05: ;
    COW_AT(1027bb05)
    wr32(sp0 - 0x1b4u, arg1);
    wr32(sp0 - 0x1b8u, 0x100u);
    wr32(sp0 - 0x1bcu, sp0 - 0x150u);
    g->eax = eax;
    g->ecx = sp0 - 0x150u;
    g->esp = sp0 - 0x1acu;
    t142 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x150u, 0x100u, arg1, rd32(sp0 - 0x1b0u));
    t143 = g->ecx;
    t144 = g->edx;
    eax = t142;
    ecx = t143;
    edx = t144;
    COW_AT(1027bb15)
    if (eax != 0u) goto L_1027bac5;
L_1027bb1c: ;
    COW_AT(1027bb1c)
    wr32(sp0 - 0x1b4u, 0x1a0u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->ebx = arg2;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    t145 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t146 = g->ecx;
    t147 = g->edx;
    eax = t145;
    ecx = t146;
    edx = t147;
    COW_AT(1027bb30)
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b4324u));
    ebx = arg2;
    loc_1c0 = COW_IMG(0x103b4324u);
    goto L_1027bb35;
L_1027bb4a: ;
    COW_AT(1027bb4a)
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b435cu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->eax = 0u;
    g->esp = sp0 - 0x1a8u;
    t14 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b435cu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(1027bb57)
    wr32(sp0 - 0x1bcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(1027bb5d)
    wr32(sp0 - 0x190u, eax);
    if ((int32_t)eax >= 1)
    {
        esi = eax;
        loc_190 = eax;
        goto L_1027bba4;
    }
    esi = eax;
    COW_AT(1027bb6b)
    wr32(sp0 - 0x1b4u, 0x15fu);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->ebx = arg2;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(1027bb7f)
    wr32(sp0 - 0x1c0u, esi);
    wr32(sp0 - 0x1c4u, COW_IMG(0x103b4310u));
    wr32(sp0 - 0x1c8u, COW_IMG(0x10362054u));
    wr32(sp0 - 0x1ccu, COW_IMG(0x103b42fcu));
    g->ebx = arg2;
    g->esp = sp0 - 0x1c4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), COW_IMG(0x10362054u));
    COW_AT(1027bb94)
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027bba4: ;
    COW_AT(1027bba4)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1b0u;
    t23 = cow_stdcall(g, COW_IMG(0x1027b5a0u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(1027bba9)
    wr32(sp0 - 0x1b4u, esi);
    wr32(sp0 - 0x1b8u, eax);
    wr32(sp0 - 0x1a0u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x19cu;
    t26 = cow_cdecl(g, COW_IMG(0x1027c4e0u), 7, eax, esi, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), eax);
    t27 = g->ecx;
    eax = t26;
    ecx = t27;
    COW_AT(1027bbb4)
    wr32(sp0 - 0x19cu, 0u);
    if ((int32_t)esi <= 0) goto L_1027be2a;
    COW_AT(1027bbc3)
    wr32(sp0 - 0x194u, 0u);
    wr32(sp0 - 0x198u, 0u);
    loc_19c = 0u;
    loc_194 = 0u;
    loc_198 = 0u;
L_1027bbdb: ;
    COW_AT(1027bbdb)
    wr32(sp0 - 0x1b4u, arg1);
    wr32(sp0 - 0x1b8u, 0x100u);
    wr32(sp0 - 0x1bcu, sp0 - 0x150u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x1acu;
    t28 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x150u, 1, 4, sp0 - 0x150u, 0x100u, arg1, rd32(sp0 - 0x1b0u));
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(1027bbeb)
    if (eax == 0u) goto L_1027be39;
    COW_AT(1027bbf6)
    wr32(sp0 - 0x1b4u, 0x16au);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, sp0 - 0x150u);
    g->eax = sp0 - 0x150u;
    g->edx = edx;
    g->esp = sp0 - 0x1b0u;
    t31 = cow_cdecl(g, COW_IMG(0x10291330u), 3, sp0 - 0x150u, COW_IMG(0x103b40ecu), 0x16au);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(1027bc0a)
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b435cu));
    wr32(sp0 - 0x1c4u, sp0 - 0x150u);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0x1b4u;
    t33 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, sp0 - 0x150u, edx, 1, 4, sp0 - 0x150u, COW_IMG(0x103b435cu), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u));
    t34 = g->ecx;
    t35 = g->edx;
    ecx = t34;
    edx = t35;
    ebp = eax;
    eax = t33;
    COW_AT(1027bc1b)
    wr32(sp0 - 0x1c8u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1c4u;
    t36 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(1027bc21)
    wr32(sp0 - 0x1ccu, COW_IMG(0x103b435cu));
    wr32(sp0 - 0x1d0u, 0u);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0x1c0u;
    t39 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b435cu), rd32(sp0 - 0x1c8u), rd32(sp0 - 0x1c4u));
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(1027bc2d)
    esi = 0u;
L_1027bc32: ;
    COW_AT(1027bc32)
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0x1a8u;
    t42 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(1027bc3e)
    wr32(sp0 - 0x1bcu, eax);
    g->ebx = arg2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1b0u;
    t45 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, eax, rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u));
    t46 = g->ecx;
    t47 = g->edx;
    d48 = cow_take_float(g);
    eax = t45;
    ecx = t46;
    edx = t47;
    x0 = d48;
    COW_AT(1027bc44)
    wrf32(esi * 4u + sp0 - 0x178u, (float)x0);
    if ((int32_t)(esi + 1u) < 3)
    {
        esi = esi + 1u;
        goto L_1027bc32;
    }
    COW_AT(1027bc51)
    esi = 0u;
L_1027bc53: ;
    COW_AT(1027bc53)
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0x1a8u;
    t49 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(1027bc5f)
    wr32(sp0 - 0x1bcu, eax);
    g->ebx = arg2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1b0u;
    t52 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, eax, rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u));
    t53 = g->ecx;
    t54 = g->edx;
    d55 = cow_take_float(g);
    eax = t52;
    ecx = t53;
    edx = t54;
    x0 = d55;
    COW_AT(1027bc65)
    wrf32(esi * 4u + sp0 - 0x160u, (float)x0);
    if ((int32_t)(esi + 1u) < 4)
    {
        esi = esi + 1u;
        goto L_1027bc53;
    }
    COW_AT(1027bc72)
    esi = 0u;
L_1027bc74: ;
    COW_AT(1027bc74)
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0x1a8u;
    t56 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t57 = g->ecx;
    t58 = g->edx;
    eax = t56;
    ecx = t57;
    edx = t58;
    COW_AT(1027bc80)
    wr32(sp0 - 0x1bcu, eax);
    g->ebx = arg2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1b0u;
    t59 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, eax, rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u));
    t60 = g->ecx;
    t61 = g->edx;
    d62 = cow_take_float(g);
    eax = t59;
    ecx = t60;
    edx = t61;
    x0 = d62;
    COW_AT(1027bc86)
    wrf32(esi * 4u + sp0 - 0x16cu, (float)x0);
    if ((int32_t)(esi + 1u) < 3)
    {
        esi = esi + 1u;
        goto L_1027bc74;
    }
    COW_AT(1027bc93)
    esi = 0u;
L_1027bc95: ;
    COW_AT(1027bc95)
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0x1a8u;
    t63 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t64 = g->ecx;
    t65 = g->edx;
    eax = t63;
    ecx = t64;
    edx = t65;
    COW_AT(1027bca1)
    wr32(sp0 - 0x1bcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    t66 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t67 = g->ecx;
    t68 = g->edx;
    eax = t66;
    ecx = t67;
    edx = t68;
    COW_AT(1027bca7)
    wr32(esi * 4u + sp0 - 0x184u, eax);
    if ((int32_t)(esi + 1u) < 3)
    {
        esi = esi + 1u;
        goto L_1027bc95;
    }
    COW_AT(1027bcb4)
    if ((int32_t)arg2 <= 2)
    {
        loc_18c_f = (double)rdf32(sp0 - 0x18cu);
    }
    else
    {
    COW_AT(1027bcb9)
        wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
        wr32(sp0 - 0x1b8u, 0u);
        g->ebx = arg2;
        g->eax = eax;
        g->esp = sp0 - 0x1a8u;
        t69 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t70 = g->ecx;
        t71 = g->edx;
        eax = t69;
        ecx = t70;
        edx = t71;
    COW_AT(1027bcc5)
        wr32(sp0 - 0x1bcu, eax);
        g->ebx = arg2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1b0u;
        t72 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, eax, rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u));
        t73 = g->ecx;
        t74 = g->edx;
        d75 = cow_take_float(g);
        eax = t72;
        ecx = t73;
        edx = t74;
        x0 = d75;
    COW_AT(1027bccb)
        wrf32(sp0 - 0x18cu, (float)(double)(float)x0);
        loc_18c_f = (double)(float)x0;
    }
    COW_AT(1027bcd2)
    if ((int32_t)arg2 <= 3)
    {
        loc_188_f = (double)rdf32(sp0 - 0x188u);
    }
    else
    {
    COW_AT(1027bcdb)
        wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
        wr32(sp0 - 0x1b8u, 0u);
        g->ebx = arg2;
        g->eax = eax;
        g->esp = sp0 - 0x1a8u;
        t76 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t77 = g->ecx;
        t78 = g->edx;
        eax = t76;
        ecx = t77;
        edx = t78;
    COW_AT(1027bce7)
        wr32(sp0 - 0x1bcu, eax);
        g->ebx = arg2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1b0u;
        t79 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, eax, rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u));
        t80 = g->ecx;
        t81 = g->edx;
        d82 = cow_take_float(g);
        eax = t79;
        ecx = t80;
        edx = t81;
        x0 = d82;
    COW_AT(1027bced)
        wrf32(sp0 - 0x188u, (float)(double)(float)x0);
        loc_18c_f = (double)rdf32(sp0 - 0x18cu);
        loc_188_f = (double)(float)x0;
    }
    COW_AT(1027bcf4)
    if (arg2 == 1u)
    {
    COW_AT(1027bcf9)
        wr32(sp0 - 0x184u, 3u);
        wr32(sp0 - 0x180u, 4u);
        wr32(sp0 - 0x17cu, 3u);
    }
    COW_AT(1027bd09)
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0x1a8u;
    t83 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    eax = t83;
    COW_AT(1027bd15)
    esi = eax;
    edi = COW_IMG(0x103b42e4u);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1027be8f;
    COW_AT(1027bd2e)
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0x1a8u;
    t84 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, 0u, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t85 = g->ecx;
    t86 = g->edx;
    eax = t84;
    ecx = t85;
    edx = t86;
    COW_AT(1027bd39)
    wr32(sp0 - 0x1bcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    t87 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t88 = g->ecx;
    t89 = g->edx;
    eax = t87;
    ecx = t88;
    edx = t89;
    COW_AT(1027bd3f)
    if ((int32_t)eax < -1)
    {
        ebx = eax;
        goto L_1027bf7d;
    }
    ebx = eax;
    COW_AT(1027bd4d)
    if ((int32_t)ebx >= (int32_t)rd32(sp0 - 0x190u)) goto L_1027bf7d;
    COW_AT(1027bd57)
    if (ebx != 0xffffffffu) goto L_1027bd68;
    COW_AT(1027bd5c)
    if ((int32_t)rd32(sp0 - 0x198u) > 0)
    {
        eax = rd32(sp0 - 0x198u);
        goto L_1027bf06;
    }
L_1027bd68: ;
    COW_AT(1027bd68)
    wr32(sp0 - 0x1b4u, sp0 - 0x178u);
    t97 = rd32(sp0 - 0x194u) + rd32(rd32(sp0 - 0x1a0u) + 0x24u);
    wr32(sp0 - 0x1b8u, t97);
    g->eax = sp0 - 0x178u;
    g->edx = edx;
    t98 = rd32(sp0 - 0x198u);
    t99 = rd32(rd32(sp0 - 0x1a0u) + 0x20u);
    g->esp = sp0 - 0x1b4u;
    t100 = cow_cdecl(g, COW_IMG(0x102915d0u), 1, t97);
    t101 = g->edx;
    eax = t100;
    edx = t101;
    esi = t97;
    edi = t98 + t99;
    COW_AT(1027bd89)
    wr32(sp0 - 0x1bcu, sp0 - 0x160u);
    wr32(sp0 - 0x1c0u, esi);
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->esp = sp0 - 0x1bcu;
    t102 = cow_cdecl(g, COW_IMG(0x10291600u), 1, esi);
    t103 = g->ecx;
    eax = t102;
    ecx = t103;
    COW_AT(1027bd94)
    wr32(sp0 - 0x1c4u, sp0 - 0x16cu);
    wr32(sp0 - 0x1c8u, esi);
    g->ecx = ecx;
    g->edx = sp0 - 0x16cu;
    g->esp = sp0 - 0x1c4u;
    cow_cdecl(g, COW_IMG(0x10291610u), 1, esi);
    t104 = g->ecx;
    t105 = g->edx;
    ecx = t104;
    edx = t105;
    COW_AT(1027bd9f)
    wr32(sp0 - 0x1ccu, sp0 - 0x184u);
    wr32(sp0 - 0x1d0u, esi);
    g->eax = sp0 - 0x184u;
    g->edx = edx;
    g->esp = sp0 - 0x1c8u;
    t106 = cow_cdecl(g, COW_IMG(0x102916f0u), 2, esi, sp0 - 0x184u);
    t107 = g->edx;
    eax = t106;
    edx = t107;
    COW_AT(1027bdaa)
    t108 = rd32(sp0 - 0x18cu);
    wr32(sp0 - 0x1d4u, t108);
    wr32(sp0 - 0x1d8u, esi);
    g->eax = eax;
    g->ecx = t108;
    g->esp = sp0 - 0x1d0u;
    t109 = cow_cdecl(g, COW_IMG(0x102917a0u), 2, esi, t108);
    t110 = g->ecx;
    eax = t109;
    ecx = t110;
    COW_AT(1027bdb5)
    t111 = rd32(sp0 - 0x188u);
    wr32(sp0 - 0x1dcu, t111);
    wr32(sp0 - 0x1e0u, esi);
    g->ecx = ecx;
    g->edx = t111;
    g->esp = sp0 - 0x1d8u;
    cow_cdecl(g, COW_IMG(0x102917b0u), 2, esi, t111);
    t112 = g->ecx;
    t113 = g->edx;
    ecx = t112;
    edx = t113;
    COW_AT(1027bdc0)
    if (rd32(sp0 - 0x198u) == 0u)
    {
        eax = rd32(sp0 - 0x198u);
    }
    else
    {
    COW_AT(1027bdcb)
        wr32(sp0 - 0x1b4u, edi);
        t114 = ebx * 0xf8u + rd32(rd32(sp0 - 0x1a0u) + 0x20u);
        wr32(sp0 - 0x1b8u, t114);
        g->eax = t114;
        g->ecx = rd32(sp0 - 0x1a0u);
        g->edx = rd32(rd32(sp0 - 0x1a0u) + 0x20u);
        t115 = rd32(sp0 - 0x1a0u);
        t116 = rd32(rd32(sp0 - 0x1a0u) + 0x20u);
        g->esp = sp0 - 0x1b0u;
        t117 = cow_cdecl(g, COW_IMG(0x10291f30u), 2, t114, edi);
        t118 = g->ecx;
        t119 = g->edx;
        eax = t117;
        ecx = t118;
        edx = t119;
    COW_AT(1027bde3)
    }
    COW_AT(1027bde6)
    wr32(sp0 - 0x1b4u, 0x19bu);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, ebp);
    g->esp = sp0 - 0x1b0u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b40ecu), 0x19bu);
    COW_AT(1027bdf6)
    t120 = rd32(sp0 - 0x19cu) + 1u;
    t121 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x19cu, t120);
    t122 = rd32(sp0 - 0x198u) + 0xf8u;
    wr32(sp0 - 0x198u, t122);
    t123 = rd32(sp0 - 0x194u) + 0x9cu;
    wr32(sp0 - 0x194u, t123);
    if ((int32_t)(t121 + 1u) < (int32_t)rd32(sp0 - 0x190u))
    {
        eax = t120;
        ecx = rd32(sp0 - 0x190u);
        loc_19c = t120;
        loc_198 = t122;
        loc_194 = t123;
        goto L_1027bbcd;
    }
L_1027be2a: ;
    COW_AT(1027be2a)
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return rd32(sp0 - 0x1a0u);
L_1027bbcd: ;
    COW_AT(1027bbcd)
    goto L_1027bbdb;
L_1027be39: ;
    COW_AT(1027be39)
    wr32(sp0 - 0x1b4u, 0x168u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->ebx = arg2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    t138 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t139 = g->edx;
    eax = t138;
    edx = t139;
    COW_AT(1027be4d)
    t140 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x1c0u, t140);
    wr32(sp0 - 0x1c4u, COW_IMG(0x103b42ccu));
    wr32(sp0 - 0x1c8u, COW_IMG(0x10362054u));
    wr32(sp0 - 0x1ccu, COW_IMG(0x103b42fcu));
    g->ebx = arg2;
    g->ecx = t140;
    g->esp = sp0 - 0x1c4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), COW_IMG(0x10362054u));
    t141 = g->ecx;
    ecx = t141;
    COW_AT(1027be66)
    if (rd32(sp0 - 0x1a0u) == 0u) goto L_1027bb3d;
    eax = rd32(sp0 - 0x1a0u);
    COW_AT(1027be75)
    wr32(sp0 - 0x1b4u, sp0 - 0x1a0u);
    g->esp = sp0 - 0x1a8u;
    cow_cdecl(g, COW_IMG(0x1027b630u), 3, sp0 - 0x1a0u, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    COW_AT(1027be7f)
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027be8f: ;
    COW_AT(1027be8f)
    wr32(sp0 - 0x1b4u, 0x183u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->ebx = arg2;
    g->edx = 0u;
    g->esp = sp0 - 0x1b4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t131 = g->edx;
    edx = t131;
    COW_AT(1027bea3)
    if (ebp != 0u)
    {
        eax = ebp;
    }
    else
    {
    COW_AT(1027beac)
        eax = COW_IMG(0x10362054u);
    }
    COW_AT(1027beb1)
    t132 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x1b4u, t132);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b42b0u));
    wr32(sp0 - 0x1bcu, eax);
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b42fcu));
    g->ebx = arg2;
    g->ecx = t132;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), eax);
    t133 = g->ecx;
    t134 = g->edx;
    ecx = t133;
    edx = t134;
    COW_AT(1027bec6)
    if (rd32(sp0 - 0x1a0u) == 0u)
    {
        eax = rd32(sp0 - 0x1a0u);
    }
    else
    {
        eax = rd32(sp0 - 0x1a0u);
    COW_AT(1027bed1)
        wr32(sp0 - 0x1b4u, sp0 - 0x1a0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = sp0 - 0x1a0u;
        g->esp = sp0 - 0x1a8u;
        t135 = cow_cdecl(g, COW_IMG(0x1027b630u), 3, sp0 - 0x1a0u, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t136 = g->ecx;
        t137 = g->edx;
        eax = t135;
        ecx = t136;
        edx = t137;
    COW_AT(1027bedb)
    }
    COW_AT(1027bede)
    if (ebp == 0u) goto L_1027bb3d;
    COW_AT(1027bee6)
    wr32(sp0 - 0x1b4u, 0x183u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, ebp);
    g->esp = sp0 - 0x1b0u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b40ecu), 0x183u);
    COW_AT(1027bef6)
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027bf06: ;
    COW_AT(1027bf06)
    wr32(sp0 - 0x1b4u, 0x18au);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t90 = g->edx;
    edx = t90;
    COW_AT(1027bf1a)
    if (ebp != 0u)
    {
        eax = ebp;
    }
    else
    {
    COW_AT(1027bf23)
        eax = COW_IMG(0x10362054u);
    }
    COW_AT(1027bf28)
    t91 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x1b4u, t91);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b4290u));
    wr32(sp0 - 0x1bcu, eax);
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = t91;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), eax);
    t92 = g->ecx;
    t93 = g->edx;
    ecx = t92;
    edx = t93;
    COW_AT(1027bf3d)
    if (rd32(sp0 - 0x1a0u) == 0u)
    {
        eax = rd32(sp0 - 0x1a0u);
    }
    else
    {
        eax = rd32(sp0 - 0x1a0u);
    COW_AT(1027bf48)
        wr32(sp0 - 0x1b4u, sp0 - 0x1a0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = sp0 - 0x1a0u;
        g->esp = sp0 - 0x1a8u;
        t94 = cow_cdecl(g, COW_IMG(0x1027b630u), 3, sp0 - 0x1a0u, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t95 = g->ecx;
        t96 = g->edx;
        eax = t94;
        ecx = t95;
        edx = t96;
    COW_AT(1027bf52)
    }
    COW_AT(1027bf55)
    if (ebp == 0u) goto L_1027bb3d;
    COW_AT(1027bf5d)
    wr32(sp0 - 0x1b4u, 0x18au);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, ebp);
    g->esp = sp0 - 0x1b0u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b40ecu), 0x18au);
    COW_AT(1027bf6d)
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027bf7d: ;
    COW_AT(1027bf7d)
    wr32(sp0 - 0x1b4u, 0x187u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t124 = g->edx;
    edx = t124;
    COW_AT(1027bf91)
    if (ebp != 0u)
    {
        eax = ebp;
    }
    else
    {
    COW_AT(1027bf9a)
        eax = COW_IMG(0x10362054u);
    }
    COW_AT(1027bf9f)
    t125 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x1b4u, t125);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b426cu));
    wr32(sp0 - 0x1bcu, eax);
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = t125;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), eax);
    t126 = g->ecx;
    t127 = g->edx;
    ecx = t126;
    edx = t127;
    COW_AT(1027bfb4)
    if (rd32(sp0 - 0x1a0u) == 0u)
    {
        eax = rd32(sp0 - 0x1a0u);
    }
    else
    {
        eax = rd32(sp0 - 0x1a0u);
    COW_AT(1027bfbf)
        wr32(sp0 - 0x1b4u, sp0 - 0x1a0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = sp0 - 0x1a0u;
        g->esp = sp0 - 0x1a8u;
        t128 = cow_cdecl(g, COW_IMG(0x1027b630u), 3, sp0 - 0x1a0u, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t129 = g->ecx;
        t130 = g->edx;
        eax = t128;
        ecx = t129;
        edx = t130;
    COW_AT(1027bfc9)
    }
    COW_AT(1027bfcc)
    if (ebp == 0u) goto L_1027bb3d;
    COW_AT(1027bfd4)
    wr32(sp0 - 0x1b4u, 0x187u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, ebp);
    g->esp = sp0 - 0x1b0u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b40ecu), 0x187u);
    COW_AT(1027bfe4)
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027ba20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027ba45u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
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
        in_edi = rd32(sp0 - 0x1b0u);
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 0x1a8u);
        g->esp = sp0 - 0x1b0u;
        wr32(sp0 - 0x1a4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1027ba59u:
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
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x1027ba63u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1b0u);
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 0x1a8u);
        in_ebx = rd32(sp0 - 0x1a4u);
        g->esp = sp0 - 0x1b0u;
        g->ebp = arg1;
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1027ba6fu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1b0u);
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 0x1a8u);
        in_ebx = rd32(sp0 - 0x1a4u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1027ba74u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1b0u);
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 0x1a8u);
        in_ebx = rd32(sp0 - 0x1a4u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1027ba79u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1b0u);
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 0x1a8u);
        in_ebx = rd32(sp0 - 0x1a4u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1027ba7eu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1b0u);
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 0x1a8u);
        in_ebx = rd32(sp0 - 0x1a4u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027ba92u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027ba9cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1b0u);
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 0x1a8u);
        in_ebx = rd32(sp0 - 0x1a4u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1027baaeu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027babeu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1ccu;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027bac5u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027bad5u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027baddu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027bae1u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027baf0u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027bb05u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027bb15u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027bb1cu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bb30u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bb35u:
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
        uint32_t loc_1c0;
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
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1c0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bb3au:
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
        g->esp = sp0 - 0x1c0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bb3du:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bb4au:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->eax = 0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027bb57u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bb5du:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bb6bu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bb7fu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bb94u:
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
        g->esp = sp0 - 0x1ccu;
        (void)sp0;
        return 1;
    }
    case 0x1027bba4u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bba9u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bbb4u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bbc3u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x19cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1027bbcdu:
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
        uint32_t loc_194;
        uint32_t loc_198;
        uint32_t loc_19c;
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
        loc_19c = rd32(sp0 - 0x19cu);
        loc_198 = rd32(sp0 - 0x198u);
        loc_194 = rd32(sp0 - 0x194u);
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bbdbu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_194;
        uint32_t loc_198;
        uint32_t loc_19c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_19c = rd32(sp0 - 0x19cu);
        loc_198 = rd32(sp0 - 0x198u);
        loc_194 = rd32(sp0 - 0x194u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027bbebu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bbf6u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc0au:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc1bu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c4u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc21u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc2du:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1d0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc32u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc3eu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc44u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc51u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc53u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc5fu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc65u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc72u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc74u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc80u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc86u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc93u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bc95u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bca1u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bca7u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bcb4u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bcb9u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bcc5u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bccbu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bcd2u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18c_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18c_f = rdf32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bcdbu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_18c_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18c_f = rdf32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1027bce7u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1027bcedu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1027bcf4u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_188_f;
        double loc_18c_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18c_f = rdf32(sp0 - 0x18cu);
        loc_188_f = rdf32(sp0 - 0x188u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1027bcf9u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_188_f;
        double loc_18c_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18c_f = rdf32(sp0 - 0x18cu);
        loc_188_f = rdf32(sp0 - 0x188u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1027bd09u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_188_f;
        double loc_18c_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18c_f = rdf32(sp0 - 0x18cu);
        loc_188_f = rdf32(sp0 - 0x188u);
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bd15u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bd2eu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bd39u:
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
        g->esp = sp0 - 0x1b8u;
        (void)sp0;
        return 1;
    }
    case 0x1027bd3fu:
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
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x1027bd4du:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bd57u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bd5cu:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bd68u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bd89u:
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
        g->esp = sp0 - 0x1b8u;
        (void)sp0;
        return 1;
    }
    case 0x1027bd94u:
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
        g->esp = sp0 - 0x1c0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bd9fu:
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
        g->esp = sp0 - 0x1c8u;
        (void)sp0;
        return 1;
    }
    case 0x1027bdaau:
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
        g->esp = sp0 - 0x1d0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bdb5u:
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
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x1027bdc0u:
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
        g->esp = sp0 - 0x1e0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bdcbu:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bde3u:
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
        g->esp = sp0 - 0x1b8u;
        (void)sp0;
        return 1;
    }
    case 0x1027bde6u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bdf6u:
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
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x1027be2au:
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
        uint32_t loc_194;
        uint32_t loc_198;
        uint32_t loc_19c;
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
        loc_19c = rd32(sp0 - 0x19cu);
        loc_198 = rd32(sp0 - 0x198u);
        loc_194 = rd32(sp0 - 0x194u);
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027be39u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027be4du:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027be66u:
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
        g->esp = sp0 - 0x1ccu;
        (void)sp0;
        return 1;
    }
    case 0x1027be75u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027be7fu:
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
        g->esp = sp0 - 0x1b4u;
        (void)sp0;
        return 1;
    }
    case 0x1027be8fu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bea3u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027beacu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027beb1u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1b0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027bec6u:
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
        g->esp = sp0 - 0x1c0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bed1u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bedbu:
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
        g->esp = sp0 - 0x1b4u;
        (void)sp0;
        return 1;
    }
    case 0x1027bedeu:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bee6u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bef6u:
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
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x1027bf06u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf1au:
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
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x1027bf23u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf28u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf3du:
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
        g->esp = sp0 - 0x1c0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf48u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf52u:
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
        g->esp = sp0 - 0x1b4u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf55u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf5du:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf6du:
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
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x1027bf7du:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf91u:
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
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x1027bf9au:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bf9fu:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bfb4u:
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
        g->esp = sp0 - 0x1c0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bfbfu:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bfc9u:
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
        g->esp = sp0 - 0x1b4u;
        (void)sp0;
        return 1;
    }
    case 0x1027bfccu:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bfd4u:
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
        g->esp = sp0 - 0x1b0u;
        (void)sp0;
        return 1;
    }
    case 0x1027bfe4u:
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
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ba20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1027ba20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
