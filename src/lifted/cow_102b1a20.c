/* f_0x102b1a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b1a20(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d75;
    double d82;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
    uint32_t loc_40c;
    uint32_t loc_418;
    uint32_t loc_41c;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 1116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b1a36u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x430u); in_esi = rd32(sp0 - 0x42cu); in_ebp = rd32(sp0 - 0x428u); g->ebp = rd32(sp0 - 0x428u); g->edi = rd32(sp0 - 0x430u); g->esi = rd32(sp0 - 0x42cu); goto E_102b1a36;
    case 0x102b1a47u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1a47;
    case 0x102b1a59u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1a59;
    case 0x102b1a70u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1a70;
    case 0x102b1a7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1a7b;
    case 0x102b1a8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1a8f;
    case 0x102b1a9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1a9b;
    case 0x102b1aa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1aa3;
    case 0x102b1aa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1aa5;
    case 0x102b1ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ab5;
    case 0x102b1ac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ac4;
    case 0x102b1addu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1add;
    case 0x102b1ae8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ae8;
    case 0x102b1aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1aee;
    case 0x102b1b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_40c = rd32(sp0 - 0x40cu); goto E_102b1b00;
    case 0x102b1b1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b1a;
    case 0x102b1b21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b21;
    case 0x102b1b34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b34;
    case 0x102b1b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b3f;
    case 0x102b1b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_418 = rd32(sp0 - 0x418u); goto E_102b1b48;
    case 0x102b1b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_41c = rd32(sp0 - 0x41cu); loc_418 = rd32(sp0 - 0x418u); goto E_102b1b56;
    case 0x102b1b6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b6d;
    case 0x102b1b78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b78;
    case 0x102b1b87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b87;
    case 0x102b1ba0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ba0;
    case 0x102b1babu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1bab;
    case 0x102b1bb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1bb1;
    case 0x102b1bc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_102b1bc2;
    case 0x102b1bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1bce;
    case 0x102b1bd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1bd4;
    case 0x102b1be2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1be2;
    case 0x102b1bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1bfb;
    case 0x102b1c0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c0f;
    case 0x102b1c25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c25;
    case 0x102b1c32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c32;
    case 0x102b1c3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c3d;
    case 0x102b1c43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c43;
    case 0x102b1c51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c51;
    case 0x102b1c5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c5d;
    case 0x102b1c63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c63;
    case 0x102b1c6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c6e;
    case 0x102b1c7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c7e;
    case 0x102b1c90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c90;
    case 0x102b1c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c9d;
    case 0x102b1ca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ca8;
    case 0x102b1caeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102b1cae;
    case 0x102b1cc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1cc0;
    case 0x102b1cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ccc;
    case 0x102b1cd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102b1cd2;
    case 0x102b1ce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ce1;
    case 0x102b1cf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1cf1;
    case 0x102b1cf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1cf6;
    case 0x102b1d2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d2c;
    case 0x102b1d47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d47;
    case 0x102b1d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d4c;
    case 0x102b1d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d4e;
    case 0x102b1d5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d5f;
    case 0x102b1d6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d6d;
    case 0x102b1d72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d72;
    case 0x102b1d7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d7c;
    case 0x102b1d7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d7f;
    case 0x102b1d96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d96;
    case 0x102b1d9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d9d;
    case 0x102b1da5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1da5;
    case 0x102b1db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_41c = rd32(sp0 - 0x41cu); loc_418 = rd32(sp0 - 0x418u); goto E_102b1db2;
    case 0x102b1dc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1dc9;
    case 0x102b1dd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1dd4;
    case 0x102b1ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_40c = rd32(sp0 - 0x40cu); goto E_102b1ddf;
    case 0x102b1df3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1df3;
    case 0x102b1e08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e08;
    case 0x102b1e15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e15;
    case 0x102b1e22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e22;
    case 0x102b1e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e30;
    case 0x102b1e44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e44;
    case 0x102b1e59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e59;
    case 0x102b1e66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e66;
    case 0x102b1e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e73;
    case 0x102b1e81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_102b1e81;
    case 0x102b1e95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e95;
    case 0x102b1eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1eaa;
    case 0x102b1eb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1eb7;
    case 0x102b1ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ec4;
    case 0x102b1ed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ed2;
    case 0x102b1ee6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ee6;
    case 0x102b1efbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1efb;
    case 0x102b1f08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f08;
    case 0x102b1f15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f15;
    case 0x102b1f23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f23;
    case 0x102b1f37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f37;
    case 0x102b1f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f50;
    case 0x102b1f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f5d;
    case 0x102b1f6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f6a;
    case 0x102b1f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f78;
    case 0x102b1f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f8c;
    case 0x102b1fa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1fa5;
    case 0x102b1fb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1fb2;
    case 0x102b1fbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1fbf;
    case 0x102b1fc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1fc2;
    default: break;
    }
#endif

    COW_AT(102b1a20)
    wr32(sp0 - 0x424u, in_ebx);
    wr32(sp0 - 0x428u, in_ebp);
    wr32(sp0 - 0x42cu, in_esi);
    wr32(sp0 - 0x430u, in_edi);
    wr32(sp0 - 0x434u, 0x2cu);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x438u, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x42cu;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), self, 3, t1, 0x2cu, in_edi);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(102b1a36)
    wr32(sp0 - 0x43cu, sp0 - 0x410u);
    wr32(sp0 - 0x440u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x444u, eax + 1u);
    g->ecx = sp0 - 0x410u;
    g->esp = sp0 - 0x438u;
    cow_cdecl(g, COW_IMG(0x10313683u), 3, eax + 1u, COW_IMG(0x10352ff0u), sp0 - 0x410u);
    t4 = g->ecx;
    ecx = t4;
    COW_AT(102b1a47)
    t5 = rd32(sp0 - 0x410u);
    wr32(sp0 - 0x448u, t5);
    t6 = rd32(sp0 + 4u);
    wr32(sp0 - 0x44cu, t6);
    g->eax = t6;
    g->esp = sp0 - 0x440u;
    t7 = cow_cdecl(g, COW_IMG(0x1029a350u), 3, t6, t5, rd32(sp0 - 0x444u));
    eax = t7;
    COW_AT(102b1a59)
    t8 = rd32(sp0 + 8u);
    wr32(sp0 - 0x450u, t8);
    wr32(sp0 - 0x454u, 0x200u);
    wr32(sp0 - 0x458u, sp0 - 0x400u);
    g->eax = eax;
    g->ecx = t8;
    g->esp = sp0 - 0x448u;
    t9 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x400u, 1, 4, sp0 - 0x400u, 0x200u, t8, rd32(sp0 - 0x44cu));
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(102b1a70)
    if (eax == 0u) goto L_102b1fc2;
    ebx = in_ebx;
L_102b1a7b: ;
    COW_AT(102b1a7b)
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_102b1db2;
    ecx = ~ecx - 1u;
    COW_AT(102b1a8f)
    if (rd8(sp0 - 0x400u) == 0xau) goto L_102b1db2;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x400u);
    COW_AT(102b1a9b)
    if ((uint8_t)eax == 0x23u) goto L_102b1db2;
    COW_AT(102b1aa3)
    eax = 0u;
L_102b1aa5: ;
    COW_AT(102b1aa5)
    t12 = rd8(eax + sp0 - 0x400u);
    wr8(eax + sp0 - 0x200u, (uint8_t)t12);
    if ((uint8_t)t12 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t12;
        goto L_102b1aa5;
    }
    ecx = (ecx & 0xffffff00u) | t12;
    COW_AT(102b1ab5)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, sp0 - 0x400u);
    g->ebx = ebx;
    g->eax = sp0 - 0x400u;
    g->esp = sp0 - 0x428u;
    t13 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, sp0 - 0x400u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    eax = t13;
    COW_AT(102b1ac4)
    esi = eax;
    edi = COW_IMG(0x103bfb94u);
    ecx = 0xcu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_102b1db2;
    }
    COW_AT(102b1add)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t14 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, 0u, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(102b1ae8)
    wr32(sp0 - 0x43cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x438u;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(102b1aee)
    wr32(sp0 - 0x40cu, eax);
    if ((int32_t)eax < 1)
    {
        ebp = eax;
        goto L_102b1ddf;
    }
    ebp = eax;
    loc_40c = eax;
    COW_AT(102b1b00)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfb8cu));
    wr32(sp0 - 0x438u, sp0 - 0x200u);
    wr32(sp0 - 0x418u, 0x200u);
    g->ecx = ecx;
    g->esp = sp0 - 0x41cu;
    t20 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0x200u, g->ecx, edx, 1, 7, sp0 - 0x200u, COW_IMG(0x103bfb8cu), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u), rd32(sp0 - 0x424u), rd32(sp0 - 0x420u));
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(102b1b1a)
    if (eax == 0u)
    {
        loc_418 = rd32(sp0 - 0x418u);
    }
    else
    {
    COW_AT(102b1b21)
        wr32(sp0 - 0x434u, sp0 - 0x408u);
        wr32(sp0 - 0x438u, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x43cu, eax + 7u);
        g->ecx = sp0 - 0x408u;
        g->edx = edx;
        g->esp = sp0 - 0x430u;
        cow_cdecl(g, COW_IMG(0x10313683u), 3, eax + 7u, COW_IMG(0x10352ff0u), sp0 - 0x408u);
        t23 = g->ecx;
        t24 = g->edx;
        ecx = t23;
        edx = t24;
    COW_AT(102b1b34)
        if ((int32_t)rd32(sp0 - 0x408u) <= 0)
        {
            loc_418 = rd32(sp0 - 0x418u);
        }
        else
        {
            eax = rd32(sp0 - 0x408u);
    COW_AT(102b1b3f)
            wr32(sp0 - 0x418u, eax * 0xau);
            loc_418 = eax * 0xau;
        }
    }
    COW_AT(102b1b48)
    wr32(sp0 - 0x41cu, 0u);
    if ((int32_t)ebp <= 0)
    {
        ebx = 0u;
        goto L_102b1db2;
    }
    ebx = 0u;
    loc_41c = 0u;
L_102b1b56: ;
    COW_AT(102b1b56)
    t25 = rd32(sp0 + 8u);
    wr32(sp0 - 0x434u, t25);
    wr32(sp0 - 0x438u, 0x200u);
    wr32(sp0 - 0x43cu, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->ecx = ecx;
    g->esp = sp0 - 0x42cu;
    t26 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, t25, 1, 4, sp0 - 0x400u, 0x200u, t25, rd32(sp0 - 0x430u));
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(102b1b6d)
    if (eax == 0u) goto L_102b1e30;
    COW_AT(102b1b78)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, sp0 - 0x400u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t29 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, sp0 - 0x400u, edx, 1, 4, sp0 - 0x400u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    eax = t29;
    COW_AT(102b1b87)
    esi = eax;
    edi = COW_IMG(0x103bfb84u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_102b1da5;
    }
    COW_AT(102b1ba0)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t30 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, 0u, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t31 = g->ecx;
    t32 = g->edx;
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(102b1bab)
    wr32(sp0 - 0x43cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x438u;
    t33 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t34 = g->ecx;
    t35 = g->edx;
    eax = t33;
    ecx = t34;
    edx = t35;
    COW_AT(102b1bb1)
    wr32(sp0 - 0x404u, eax);
    if ((int32_t)eax < 0)
    {
        esi = eax;
        goto L_102b1e81;
    }
    loc_404 = eax;
    COW_AT(102b1bc2)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t36 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(102b1bce)
    wr32(sp0 - 0x43cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x438u;
    t39 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(102b1bd4)
    if ((int32_t)eax < 1)
    {
        esi = eax;
        goto L_102b1ed2;
    }
    esi = eax;
    COW_AT(102b1be2)
    wr32(sp0 - 0x434u, 0x2b1u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, esi * 4u);
    wr32(sp0 - 0x440u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x41cu;
    t42 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, esi * 4u, COW_IMG(0x103bf904u), 0x2b1u, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u), rd32(sp0 - 0x424u), rd32(sp0 - 0x420u));
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    edi = esi * 4u;
    COW_AT(102b1bfb)
    wr32(sp0 - 0x444u, 0x2b2u);
    wr32(sp0 - 0x448u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x44cu, edi);
    wr32(sp0 - 0x450u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x42cu;
    t45 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, edi, COW_IMG(0x103bf904u), 0x2b2u, rd32(sp0 - 0x440u), rd32(sp0 - 0x43cu), rd32(sp0 - 0x438u), rd32(sp0 - 0x434u), rd32(sp0 - 0x430u));
    t46 = g->edx;
    edx = t46;
    ebx = eax;
    eax = t45;
    COW_AT(102b1c0f)
    wr32(sp0 - 0x414u, eax);
    t47 = rd32(sp0 - 0x418u);
    wr32(sp0 - 0x454u, t47);
    t48 = rd32(sp0 + 8u);
    wr32(sp0 - 0x458u, t48);
    g->eax = t47;
    g->edx = edx;
    g->esp = sp0 - 0x448u;
    t49 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), t48, 4, t48, t47, rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu));
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(102b1c25)
    if (eax == 0u) goto L_102b1f23;
    ebp = eax;
    COW_AT(102b1c32)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, ebp);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t52 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, ebp, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(102b1c3d)
    wr32(sp0 - 0x43cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x438u;
    t55 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t56 = g->ecx;
    t57 = g->edx;
    eax = t55;
    ecx = t56;
    edx = t57;
    COW_AT(102b1c43)
    wr32(ebx, eax);
    if ((int32_t)esi <= 1) goto L_102b1c6e;
    edi = 1u;
L_102b1c51: ;
    COW_AT(102b1c51)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t58 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t59 = g->ecx;
    t60 = g->edx;
    eax = t58;
    ecx = t59;
    edx = t60;
    COW_AT(102b1c5d)
    wr32(sp0 - 0x43cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x438u;
    t61 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t62 = g->ecx;
    t63 = g->edx;
    eax = t61;
    ecx = t62;
    edx = t63;
    COW_AT(102b1c63)
    wr32(ebx + edi * 4u, eax);
    if ((int32_t)(edi + 1u) < (int32_t)esi)
    {
        edi = edi + 1u;
        goto L_102b1c51;
    }
L_102b1c6e: ;
    COW_AT(102b1c6e)
    wr32(sp0 - 0x434u, 0x2b9u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, ebp);
    g->ecx = ecx;
    g->esp = sp0 - 0x430u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bf904u), 0x2b9u);
    t64 = g->ecx;
    ecx = t64;
    COW_AT(102b1c7e)
    t65 = rd32(sp0 - 0x418u);
    wr32(sp0 - 0x440u, t65);
    t66 = rd32(sp0 + 8u);
    wr32(sp0 - 0x444u, t66);
    g->eax = t66;
    g->edx = t65;
    g->esp = sp0 - 0x434u;
    t67 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), ecx, 4, t66, t65, rd32(sp0 - 0x43cu), rd32(sp0 - 0x438u));
    t68 = g->ecx;
    t69 = g->edx;
    eax = t67;
    ecx = t68;
    edx = t69;
    COW_AT(102b1c90)
    if (eax == 0u) goto L_102b1f78;
    ebp = eax;
    COW_AT(102b1c9d)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, ebp);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t70 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, ebp, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t71 = g->ecx;
    t72 = g->edx;
    eax = t70;
    ecx = t71;
    edx = t72;
    COW_AT(102b1ca8)
    wr32(sp0 - 0x43cu, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x430u;
    t73 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, eax, rd32(sp0 - 0x438u), rd32(sp0 - 0x434u));
    t74 = g->edx;
    d75 = cow_take_float(g);
    eax = t73;
    edx = t74;
    x0 = d75;
    COW_AT(102b1cae)
    t76 = rd32(sp0 - 0x414u);
    wrf32(t76, (float)x0);
    if ((int32_t)esi <= 1)
    {
        ecx = t76;
        goto L_102b1ce1;
    }
    ecx = t76;
    edi = 1u;
L_102b1cc0: ;
    COW_AT(102b1cc0)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t77 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t78 = g->ecx;
    t79 = g->edx;
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(102b1ccc)
    wr32(sp0 - 0x43cu, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x430u;
    t80 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, eax, rd32(sp0 - 0x438u), rd32(sp0 - 0x434u));
    t81 = g->ecx;
    d82 = cow_take_float(g);
    eax = t80;
    ecx = t81;
    x0 = d82;
    COW_AT(102b1cd2)
    t83 = rd32(sp0 - 0x414u);
    wrf32(edi * 4u + t83, (float)x0);
    if ((int32_t)(edi + 1u) < (int32_t)esi)
    {
        edx = t83;
        edi = edi + 1u;
        goto L_102b1cc0;
    }
    edx = t83;
L_102b1ce1: ;
    COW_AT(102b1ce1)
    wr32(sp0 - 0x434u, 0x2bfu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x430u;
    t84 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bf904u), 0x2bfu);
    t85 = g->ecx;
    t86 = g->edx;
    eax = t84;
    ecx = t85;
    edx = t86;
    COW_AT(102b1cf1)
    g->eax = eax;
    g->esp = sp0 - 0x43cu;
    t87 = cow_stdcall(g, COW_IMG(0x102af560u), 0);
    eax = t87;
    COW_AT(102b1cf6)
    wr32(sp0 - 0x420u, eax);
    t88 = rd32(sp0 - 0x414u);
    wr32(eax + 0x50u, esi);
    wr32(rd32(sp0 - 0x420u) + 0x30u, ebx);
    wr32(rd32(sp0 - 0x420u) + 0x38u, t88);
    t89 = rd32(sp0 - 0x420u);
    t90 = rd32(sp0 - 0x404u);
    wr32(t89 + 0x3cu, 0u);
    wr32(sp0 - 0x440u, t90);
    t91 = rd32(sp0 + 4u);
    wr32(sp0 - 0x444u, t91);
    g->eax = t89;
    g->edx = t91;
    g->esp = sp0 - 0x43cu;
    t92 = cow_cdecl(g, COW_IMG(0x1029a440u), 2, t91, t90);
    t93 = g->edx;
    eax = t92;
    edx = t93;
    COW_AT(102b1d2c)
    wr32(rd32(sp0 - 0x420u) + 0x9cu, eax);
    if (rd32(rd32(sp0 - 0x420u) + 0x9cu) == 0u)
    {
        ecx = rd32(sp0 - 0x420u);
    COW_AT(102b1d4c)
        eax = 0u;
    }
    else
    {
        eax = rd32(rd32(sp0 - 0x420u) + 0x9cu);
        ecx = rd32(sp0 - 0x420u);
    COW_AT(102b1d47)
        eax = eax + 0x24u;
    }
    COW_AT(102b1d4e)
    wr32(ecx + 0x58u, eax);
    if (rd32(rd32(sp0 - 0x420u) + 0x9cu) == 0u)
    {
        ecx = rd32(rd32(sp0 - 0x420u) + 0x9cu);
    COW_AT(102b1d72)
        wr32(sp0 - 0x434u, sp0 - 0x420u);
        g->eax = sp0 - 0x420u;
        g->esp = sp0 - 0x428u;
        t96 = cow_cdecl(g, COW_IMG(0x102af600u), 3, sp0 - 0x420u, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
        eax = t96;
    COW_AT(102b1d7c)
    }
    else
    {
        eax = rd32(sp0 - 0x420u);
        ecx = rd32(rd32(sp0 - 0x420u) + 0x9cu);
    COW_AT(102b1d5f)
        wr32(sp0 - 0x434u, eax);
        t94 = rd32(sp0 + 4u);
        wr32(sp0 - 0x438u, t94);
        g->esp = sp0 - 0x424u;
        t95 = cow_call_regs(g, COW_IMG(0x1029a3a0u), eax, g->ecx, g->edx, 1, 5, t94, eax, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u));
        eax = t95;
    COW_AT(102b1d6d)
    }
    COW_AT(102b1d7f)
    t97 = rd32(sp0 + 8u);
    wr32(sp0 - 0x434u, t97);
    wr32(sp0 - 0x438u, 0x200u);
    wr32(sp0 - 0x43cu, sp0 - 0x400u);
    g->eax = eax;
    g->ecx = t97;
    g->esp = sp0 - 0x42cu;
    t98 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x400u, 1, 4, sp0 - 0x400u, 0x200u, t97, rd32(sp0 - 0x430u));
    t99 = g->ecx;
    t100 = g->edx;
    eax = t98;
    ecx = t99;
    edx = t100;
    COW_AT(102b1d96)
    if (eax == 0u) goto L_102b1db2;
    COW_AT(102b1d9d)
    ebx = rd32(sp0 - 0x41cu);
    ebp = rd32(sp0 - 0x40cu);
L_102b1da5: ;
    COW_AT(102b1da5)
    wr32(sp0 - 0x41cu, ebx + 1u);
    if ((int32_t)(ebx + 1u) < (int32_t)ebp)
    {
        loc_418 = rd32(sp0 - 0x418u);
        loc_41c = ebx + 1u;
        ebx = ebx + 1u;
        goto L_102b1b56;
    }
    ebx = ebx + 1u;
L_102b1db2: ;
    COW_AT(102b1db2)
    t143 = rd32(sp0 + 8u);
    wr32(sp0 - 0x434u, t143);
    wr32(sp0 - 0x438u, 0x200u);
    wr32(sp0 - 0x43cu, sp0 - 0x400u);
    g->eax = t143;
    g->ecx = sp0 - 0x400u;
    g->esp = sp0 - 0x42cu;
    t144 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x400u, 0x200u, t143, rd32(sp0 - 0x430u));
    t145 = g->ecx;
    t146 = g->edx;
    eax = t144;
    ecx = t145;
    edx = t146;
    COW_AT(102b1dc9)
    if (eax != 0u) goto L_102b1a7b;
    COW_AT(102b1dd4)
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1ddf: ;
    COW_AT(102b1ddf)
    wr32(sp0 - 0x434u, 0x299u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t136 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t137 = g->ecx;
    eax = t136;
    ecx = t137;
    COW_AT(102b1df3)
    wr32(sp0 - 0x440u, ebp);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb6cu));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t138 = g->ecx;
    t139 = g->edx;
    ecx = t138;
    edx = t139;
    COW_AT(102b1e08)
    t140 = rd32(sp0 + 4u);
    wr32(sp0 - 0x450u, t140);
    g->eax = t140;
    g->edx = edx;
    g->esp = sp0 - 0x43cu;
    t141 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, t140, rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u), rd32(sp0 - 0x444u), rd32(sp0 - 0x440u));
    t142 = g->edx;
    eax = t141;
    edx = t142;
    COW_AT(102b1e15)
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu));
    COW_AT(102b1e22)
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1e30: ;
    COW_AT(102b1e30)
    wr32(sp0 - 0x434u, 0x2a7u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t129 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t130 = g->ecx;
    eax = t129;
    ecx = t130;
    COW_AT(102b1e44)
    wr32(sp0 - 0x440u, ebx);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb50u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t131 = g->ecx;
    t132 = g->edx;
    ecx = t131;
    edx = t132;
    COW_AT(102b1e59)
    t133 = rd32(sp0 + 4u);
    wr32(sp0 - 0x450u, t133);
    g->eax = t133;
    g->edx = edx;
    g->esp = sp0 - 0x43cu;
    t134 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, t133, rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u), rd32(sp0 - 0x444u), rd32(sp0 - 0x440u));
    t135 = g->edx;
    eax = t134;
    edx = t135;
    COW_AT(102b1e66)
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu));
    COW_AT(102b1e73)
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1e81: ;
    COW_AT(102b1e81)
    wr32(sp0 - 0x434u, 0x2acu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t122 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t123 = g->ecx;
    eax = t122;
    ecx = t123;
    COW_AT(102b1e95)
    wr32(sp0 - 0x440u, esi);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb40u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t124 = g->ecx;
    t125 = g->edx;
    ecx = t124;
    edx = t125;
    COW_AT(102b1eaa)
    t126 = rd32(sp0 + 4u);
    wr32(sp0 - 0x450u, t126);
    g->eax = t126;
    g->edx = edx;
    g->esp = sp0 - 0x43cu;
    t127 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, t126, rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u), rd32(sp0 - 0x444u), rd32(sp0 - 0x440u));
    t128 = g->edx;
    eax = t127;
    edx = t128;
    COW_AT(102b1eb7)
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu));
    COW_AT(102b1ec4)
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1ed2: ;
    COW_AT(102b1ed2)
    wr32(sp0 - 0x434u, 0x2afu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t115 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t116 = g->ecx;
    eax = t115;
    ecx = t116;
    COW_AT(102b1ee6)
    wr32(sp0 - 0x440u, esi);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb2cu));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t117 = g->ecx;
    t118 = g->edx;
    ecx = t117;
    edx = t118;
    COW_AT(102b1efb)
    t119 = rd32(sp0 + 4u);
    wr32(sp0 - 0x450u, t119);
    g->eax = t119;
    g->edx = edx;
    g->esp = sp0 - 0x43cu;
    t120 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, t119, rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u), rd32(sp0 - 0x444u), rd32(sp0 - 0x440u));
    t121 = g->edx;
    eax = t120;
    edx = t121;
    COW_AT(102b1f08)
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu));
    COW_AT(102b1f15)
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1f23: ;
    COW_AT(102b1f23)
    wr32(sp0 - 0x434u, 0x2b5u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t108 = g->ecx;
    ecx = t108;
    COW_AT(102b1f37)
    t109 = rd32(sp0 - 0x41cu);
    wr32(sp0 - 0x440u, t109);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb50u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->eax = sp0 - 0x400u;
    g->edx = t109;
    g->esp = sp0 - 0x444u;
    t110 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t111 = g->edx;
    eax = t110;
    edx = t111;
    COW_AT(102b1f50)
    t112 = rd32(sp0 + 4u);
    wr32(sp0 - 0x450u, t112);
    g->eax = eax;
    g->ecx = t112;
    g->esp = sp0 - 0x43cu;
    t113 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, t112, rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u), rd32(sp0 - 0x444u), rd32(sp0 - 0x440u));
    t114 = g->ecx;
    eax = t113;
    ecx = t114;
    COW_AT(102b1f5d)
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu));
    COW_AT(102b1f6a)
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1f78: ;
    COW_AT(102b1f78)
    wr32(sp0 - 0x434u, 0x2bbu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x434u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t101 = g->edx;
    edx = t101;
    COW_AT(102b1f8c)
    t102 = rd32(sp0 - 0x41cu);
    wr32(sp0 - 0x440u, t102);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb50u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->eax = t102;
    g->ecx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    t103 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t104 = g->ecx;
    eax = t103;
    ecx = t104;
    COW_AT(102b1fa5)
    t105 = rd32(sp0 + 4u);
    wr32(sp0 - 0x450u, t105);
    g->ecx = ecx;
    g->edx = t105;
    g->esp = sp0 - 0x43cu;
    cow_cdecl(g, COW_IMG(0x1029a300u), 5, t105, rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u), rd32(sp0 - 0x444u), rd32(sp0 - 0x440u));
    t106 = g->ecx;
    t107 = g->edx;
    ecx = t106;
    edx = t107;
    COW_AT(102b1fb2)
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu));
    COW_AT(102b1fbf)
L_102b1fc2: ;
    COW_AT(102b1fc2)
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b1a20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b1a36u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
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
        in_edi = rd32(sp0 - 0x430u);
        in_esi = rd32(sp0 - 0x42cu);
        in_ebp = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x438u;
        wr32(sp0 - 0x424u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102b1a47u:
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
        g->esp = sp0 - 0x444u;
        (void)sp0;
        return 1;
    }
    case 0x102b1a59u:
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
        g->esp = sp0 - 0x44cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1a70u:
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
        g->esp = sp0 - 0x458u;
        (void)sp0;
        return 1;
    }
    case 0x102b1a7bu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1a8fu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1a9bu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1aa3u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1aa5u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ab5u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ac4u:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1addu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
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
        g->esp = sp0 - 0x430u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ae8u:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1aeeu:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1b00u:
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
        uint32_t loc_40c;
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
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b1au:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b21u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b34u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1b3fu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b48u:
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
        uint32_t loc_418;
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
        loc_418 = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b56u:
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
        uint32_t loc_418;
        uint32_t loc_41c;
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
        loc_41c = rd32(sp0 - 0x41cu);
        loc_418 = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b6du:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1b78u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b87u:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ba0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
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
        g->esp = sp0 - 0x430u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b1babu:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1bb1u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1bc2u:
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
        uint32_t loc_404;
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
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1bceu:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1bd4u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1be2u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1bfbu:
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
        g->esp = sp0 - 0x440u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c0fu:
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
        g->esp = sp0 - 0x450u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c25u:
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
        g->esp = sp0 - 0x458u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c32u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c3du:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c43u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1c51u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c5du:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c63u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1c6eu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c7eu:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1c90u:
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
        g->esp = sp0 - 0x444u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c9du:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ca8u:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1caeu:
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
        double x0;
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
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1cc0u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1cccu:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1cd2u:
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
        double x0;
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
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1ce1u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1cf1u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1cf6u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1d2cu:
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
        g->esp = sp0 - 0x444u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d47u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d4cu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d4eu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d5fu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d6du:
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
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d72u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d7cu:
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
        g->esp = sp0 - 0x434u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d7fu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d96u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1d9du:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1da5u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1db2u:
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
        uint32_t loc_418;
        uint32_t loc_41c;
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
        loc_41c = rd32(sp0 - 0x41cu);
        loc_418 = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1dc9u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1dd4u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ddfu:
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
        uint32_t loc_40c;
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
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1df3u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1e08u:
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
        g->esp = sp0 - 0x44cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1e15u:
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
        g->esp = sp0 - 0x450u;
        (void)sp0;
        return 1;
    }
    case 0x102b1e22u:
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
        g->esp = sp0 - 0x454u;
        (void)sp0;
        return 1;
    }
    case 0x102b1e30u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1e44u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1e59u:
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
        g->esp = sp0 - 0x44cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1e66u:
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
        g->esp = sp0 - 0x450u;
        (void)sp0;
        return 1;
    }
    case 0x102b1e73u:
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
        g->esp = sp0 - 0x454u;
        (void)sp0;
        return 1;
    }
    case 0x102b1e81u:
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
        uint32_t loc_404;
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
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1e95u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1eaau:
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
        g->esp = sp0 - 0x44cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1eb7u:
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
        g->esp = sp0 - 0x450u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ec4u:
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
        g->esp = sp0 - 0x454u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ed2u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ee6u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1efbu:
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
        g->esp = sp0 - 0x44cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1f08u:
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
        g->esp = sp0 - 0x450u;
        (void)sp0;
        return 1;
    }
    case 0x102b1f15u:
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
        g->esp = sp0 - 0x454u;
        (void)sp0;
        return 1;
    }
    case 0x102b1f23u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1f37u:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1f50u:
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
        g->esp = sp0 - 0x44cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1f5du:
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
        g->esp = sp0 - 0x450u;
        (void)sp0;
        return 1;
    }
    case 0x102b1f6au:
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
        g->esp = sp0 - 0x454u;
        (void)sp0;
        return 1;
    }
    case 0x102b1f78u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1f8cu:
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
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1fa5u:
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
        g->esp = sp0 - 0x44cu;
        (void)sp0;
        return 1;
    }
    case 0x102b1fb2u:
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
        g->esp = sp0 - 0x450u;
        (void)sp0;
        return 1;
    }
    case 0x102b1fbfu:
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
        g->esp = sp0 - 0x454u;
        (void)sp0;
        return 1;
    }
    case 0x102b1fc2u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b1a20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b1a20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
