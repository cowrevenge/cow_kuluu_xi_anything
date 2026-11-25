/* f_0x101ff3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101ff3e0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 400u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ff3fcu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x150u); in_esi = rd32(sp0 - 0x14cu); in_ebx = rd32(sp0 - 0x148u); g->ebx = rd32(sp0 - 0x148u); g->edi = rd32(sp0 - 0x150u); g->esi = rd32(sp0 - 0x14cu); goto E_101ff3fc;
    case 0x101ff40bu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x150u); in_esi = rd32(sp0 - 0x14cu); in_ebx = rd32(sp0 - 0x148u); g->ebx = rd32(sp0 - 0x148u); g->edi = rd32(sp0 - 0x150u); g->esi = rd32(sp0 - 0x14cu); goto E_101ff40b;
    case 0x101ff414u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff414;
    case 0x101ff429u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff429;
    case 0x101ff436u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff436;
    case 0x101ff443u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff443;
    case 0x101ff44au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff44a;
    case 0x101ff46eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff46e;
    case 0x101ff485u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff485;
    case 0x101ff4abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff4ab;
    case 0x101ff4b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff4b4;
    case 0x101ff4c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff4c5;
    case 0x101ff4e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff4e3;
    case 0x101ff4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff4eb;
    case 0x101ff4f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff4f3;
    case 0x101ff4f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff4f7;
    case 0x101ff4fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff4fa;
    case 0x101ff502u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff502;
    case 0x101ff510u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff510;
    case 0x101ff53fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff53f;
    case 0x101ff565u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff565;
    case 0x101ff56du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff56d;
    case 0x101ff57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff57f;
    case 0x101ff58bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff58b;
    case 0x101ff58fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff58f;
    case 0x101ff5acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff5ac;
    case 0x101ff5b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff5b1;
    case 0x101ff5cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff5cb;
    case 0x101ff5ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff5ce;
    case 0x101ff603u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff603;
    case 0x101ff629u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff629;
    case 0x101ff631u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff631;
    case 0x101ff643u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff643;
    case 0x101ff64fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff64f;
    case 0x101ff653u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff653;
    case 0x101ff670u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff670;
    case 0x101ff675u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff675;
    case 0x101ff68fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff68f;
    case 0x101ff692u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff692;
    case 0x101ff6c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff6c7;
    case 0x101ff6cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff6cf;
    case 0x101ff6e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff6e0;
    case 0x101ff705u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff705;
    case 0x101ff70au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff70a;
    case 0x101ff718u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff718;
    case 0x101ff729u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff729;
    case 0x101ff75fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff75f;
    case 0x101ff764u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff764;
    case 0x101ff768u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff768;
    case 0x101ff76cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff76c;
    case 0x101ff775u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff775;
    case 0x101ff77fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff77f;
    case 0x101ff786u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff786;
    case 0x101ff795u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff795;
    case 0x101ff7a1u: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x150u); in_esi = rd32(sp0 - 0x14cu); in_ebx = rd32(sp0 - 0x148u); g->ebx = rd32(sp0 - 0x148u); g->edi = rd32(sp0 - 0x150u); g->esi = rd32(sp0 - 0x14cu); goto E_101ff7a1;
    case 0x101ff7aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff7ae;
    case 0x101ff7bau: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x150u); in_esi = rd32(sp0 - 0x14cu); in_ebx = rd32(sp0 - 0x148u); g->ebx = rd32(sp0 - 0x148u); g->edi = rd32(sp0 - 0x150u); g->esi = rd32(sp0 - 0x14cu); goto E_101ff7ba;
    case 0x101ff7c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff7c3;
    case 0x101ff7d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff7d2;
    case 0x101ff7deu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x150u); in_esi = rd32(sp0 - 0x14cu); in_ebx = rd32(sp0 - 0x148u); g->ebx = rd32(sp0 - 0x148u); g->edi = rd32(sp0 - 0x150u); g->esi = rd32(sp0 - 0x14cu); goto E_101ff7de;
    case 0x101ff7ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff7eb;
    case 0x101ff7f7u: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x150u); in_esi = rd32(sp0 - 0x14cu); in_ebx = rd32(sp0 - 0x148u); g->ebx = rd32(sp0 - 0x148u); g->edi = rd32(sp0 - 0x150u); g->esi = rd32(sp0 - 0x14cu); goto E_101ff7f7;
    case 0x101ff804u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff804;
    case 0x101ff810u: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x150u); in_esi = rd32(sp0 - 0x14cu); in_ebx = rd32(sp0 - 0x148u); g->ebx = rd32(sp0 - 0x148u); g->edi = rd32(sp0 - 0x150u); g->esi = rd32(sp0 - 0x14cu); goto E_101ff810;
    case 0x101ff81du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ff81d;
    case 0x101ff829u: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x150u); in_esi = rd32(sp0 - 0x14cu); in_ebx = rd32(sp0 - 0x148u); g->ebx = rd32(sp0 - 0x148u); g->edi = rd32(sp0 - 0x150u); g->esi = rd32(sp0 - 0x14cu); goto E_101ff829;
    case 0x101ff83au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x150u); in_esi = rd32(sp0 - 0x14cu); in_ebx = rd32(sp0 - 0x148u); g->ebx = rd32(sp0 - 0x148u); g->edi = rd32(sp0 - 0x150u); g->esi = rd32(sp0 - 0x14cu); goto E_101ff83a;
    default: break;
    }
#endif

    COW_AT(101ff3e0)
    wr32(sp0 - 0x148u, in_ebx);
    wr32(sp0 - 0x14cu, in_esi);
    wr32(sp0 - 0x150u, in_edi);
    if ((uint32_t)(int16_t)arg1 - 3u > 0xfu)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_101ff83a;
    }
    COW_AT(101ff3fc)
    t1 = rd32(COW_IMG(0x101ff848u) + rd8(COW_IMG(0x101ff868u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x101ff40bu: goto L_101ff40b;
    case 0x101ff7a1u: goto L_101ff7a1;
    case 0x101ff7bau: goto L_101ff7ba;
    case 0x101ff7deu: goto L_101ff7de;
    case 0x101ff7f7u: goto L_101ff7f7;
    case 0x101ff810u: goto L_101ff810;
    case 0x101ff829u: goto L_101ff829;
    case 0x101ff83au: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_101ff83a;
    default: rt_fatal(g, COW_IMG(0x101ff404u), "switch");
    }
    return 0;
L_101ff40b: ;
    COW_AT(101ff40b)
    wr32(sp0 - 0x154u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x150u;
    cow_call_regs(g, COW_IMG(0x101feec0u), (uint32_t)(int16_t)arg1 - 3u, self, g->edx, 0, 1, 1u);
    t15 = g->ecx;
    t16 = g->edx;
    ecx = t15;
    edx = t16;
    COW_AT(101ff414)
    edi = self + 0x53u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_101ff7c3;
    ecx = ~ecx - 1u;
    COW_AT(101ff429)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_101ff7c3;
    }
    COW_AT(101ff436)
    if ((uint32_t)(int16_t)rd16(self + 0x14u) > 7u) goto L_101ff764;
    eax = (uint32_t)(int16_t)rd16(self + 0x14u);
    COW_AT(101ff443)
    t17 = rd32(COW_IMG(0x101ff878u) + eax * 4u);
    switch (t17 - RD)
    {
    case 0x101ff44au: goto L_101ff44a;
    case 0x101ff4b4u: goto L_101ff4b4;
    case 0x101ff4ebu: goto L_101ff4eb;
    case 0x101ff56du: goto L_101ff56d;
    case 0x101ff631u: goto L_101ff631;
    case 0x101ff6cfu: goto L_101ff6cf;
    case 0x101ff70au: goto L_101ff70a;
    case 0x101ff764u: goto L_101ff764;
    default: rt_fatal(g, COW_IMG(0x101ff443u), "switch");
    }
    return 0;
L_101ff44a: ;
    COW_AT(101ff44a)
    wr32(sp0 - 0x154u, in_ebp);
    wr32(sp0 - 0x158u, 0x11u);
    wr32(sp0 - 0x15cu, COW_IMG(0x101ff8a0u));
    wr32(sp0 - 0x160u, self + 0x53u);
    wr32(sp0 - 0x164u, 0x1cu);
    wr32(sp0 - 0x168u, 9u);
    g->eax = eax;
    g->edx = rd32(COW_IMG(0x103601bcu));
    t76 = rd32(COW_IMG(0x103601bcu));
    t77 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    t78 = rd32(self + 0x19cu);
    g->esp = sp0 - 0x160u;
    t79 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x1cu);
    t80 = g->edx;
    eax = t79;
    edx = t80;
    ebp = t77;
    edi = t78;
    COW_AT(101ff46e)
    wr32(sp0 - 0x164u, eax);
    wr32(sp0 - 0x168u, self + 0x188u);
    wr32(sp0 - 0x16cu, ebp);
    g->eax = self + 0x188u;
    g->esp = sp0 - 0x168u;
    t81 = cow_stdcall(g, COW_IMG(0x100db780u), 1, ebp);
    eax = t81;
    COW_AT(101ff485)
    t82 = ((uint32_t)(uint8_t)eax << 8u | (edi & 0xf0000u)) << 8u | (uint16_t)edi;
    wr32(sp0 - 0x16cu, t82);
    t83 = rd32(self + 0x198u);
    wr32(sp0 - 0x170u, t83);
    g->eax = t83;
    g->edx = edi & 0xf0000u;
    g->esp = sp0 - 0x154u;
    t84 = cow_cdecl(g, COW_IMG(0x100f70a0u), 7, t83, t82, rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u));
    t85 = g->edx;
    eax = t84;
    edx = t85;
    COW_AT(101ff4ab)
    ebp = rd32(sp0 - 0x154u);
L_101ff768: ;
    COW_AT(101ff768)
    if (eax == 0u)
    {
    COW_AT(101ff76c)
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(101ff775)
            wr32(sp0 - 0x154u, 0x10u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x150u;
            t86 = cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x10u);
            t87 = g->edx;
            eax = t86;
            edx = t87;
        }
    COW_AT(101ff77f)
        wr8(COW_IMG(0x10663ac8u), 1u);
    }
    COW_AT(101ff786)
    wr32(sp0 - 0x154u, COW_IMG(0x10385210u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x150u;
    t88 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385210u));
    t89 = g->edx;
    eax = t88;
    edx = t89;
    COW_AT(101ff795)
    g->ebx = rd32(sp0 - 0x148u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x150u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_101ff4b4: ;
    COW_AT(101ff4b4)
    wr32(sp0 - 0x154u, 0x11u);
    wr32(sp0 - 0x158u, COW_IMG(0x101ff8a0u));
    wr32(sp0 - 0x15cu, self + 0x53u);
    wr32(sp0 - 0x160u, 0x1cu);
    wr32(sp0 - 0x164u, 9u);
    g->eax = eax;
    g->esp = sp0 - 0x15cu;
    t70 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x1cu);
    eax = t70;
    COW_AT(101ff4c5)
    wr32(sp0 - 0x160u, eax);
    t71 = rd32(self + 0x1d8u);
    wr32(sp0 - 0x164u, t71);
    t72 = rd32(self + 0x1d4u);
    wr32(sp0 - 0x168u, t72);
    t73 = rd32(self + 0x1d0u);
    wr32(sp0 - 0x16cu, t73);
    g->eax = t73;
    g->edx = t72;
    g->esp = sp0 - 0x150u;
    t74 = cow_cdecl(g, COW_IMG(0x100f7060u), 7, t73, t72, t71, eax, rd32(sp0 - 0x15cu), COW_IMG(0x101ff8a0u), 0x11u);
    t75 = g->edx;
    eax = t74;
    edx = t75;
    COW_AT(101ff4e3)
    ebp = in_ebp;
    goto L_101ff768;
L_101ff4eb: ;
    COW_AT(101ff4eb)
    if (rd8(self + 0x53u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x53u);
        goto L_101ff502;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x53u);
    ecx = self + 0x53u;
L_101ff4f3: ;
    COW_AT(101ff4f3)
    if ((uint8_t)eax == 7u)
    {
    COW_AT(101ff4f7)
        wr8(ecx, 0u);
    }
    COW_AT(101ff4fa)
    if (rd8(ecx + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_101ff4f3;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
L_101ff502: ;
    COW_AT(101ff502)
    wr32(sp0 - 0x154u, 0x7fu);
    wr32(sp0 - 0x158u, sp0 - 0x100u);
    wr32(sp0 - 0x15cu, 1u);
    g->esp = sp0 - 0x15cu;
    cow_stdcall(g, COW_IMG(0x1031120eu), 0);
    COW_AT(101ff510)
    wr32(sp0 - 0x154u, 0x14u);
    wr32(sp0 - 0x158u, COW_IMG(0x101ff8a0u));
    wr32(sp0 - 0x15cu, self + 0x188u);
    wr32(sp0 - 0x160u, sp0 - 0x100u);
    wr32(sp0 - 0x164u, self + 0x53u);
    t63 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    wr32(sp0 - 0x168u, t63);
    g->eax = t63;
    t64 = rd32(self + 0x19cu);
    g->esp = sp0 - 0x164u;
    t65 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t63);
    eax = t65;
    edi = t64;
    COW_AT(101ff53f)
    t66 = ((uint32_t)(uint8_t)eax << 8u | (edi & 0xf0000u)) << 8u | (uint16_t)edi;
    wr32(sp0 - 0x168u, t66);
    t67 = rd32(self + 0x198u);
    wr32(sp0 - 0x16cu, t67);
    g->eax = t67;
    g->edx = edi & 0xf0000u;
    g->esp = sp0 - 0x150u;
    t68 = cow_cdecl(g, COW_IMG(0x100f6fe0u), 7, t67, t66, rd32(sp0 - 0x164u), sp0 - 0x100u, rd32(sp0 - 0x15cu), COW_IMG(0x101ff8a0u), 0x14u);
    t69 = g->edx;
    eax = t68;
    edx = t69;
    COW_AT(101ff565)
    ebp = in_ebp;
    goto L_101ff768;
L_101ff56d: ;
    COW_AT(101ff56d)
    t47 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    wr32(sp0 - 0x154u, t47);
    g->eax = t47;
    g->edx = edx;
    g->esp = sp0 - 0x150u;
    t48 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t47);
    t49 = g->edx;
    eax = t48;
    edx = t49;
    COW_AT(101ff57f)
    wr32(sp0 - 0x154u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x150u;
    t50 = cow_thiscall(g, COW_IMG(0x100db7b0u), rd32(COW_IMG(0x103601bcu)), 1, eax);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(101ff58b)
    if (eax == 0u)
    {
    COW_AT(101ff5b1)
        t53 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
        wr32(sp0 - 0x154u, t53);
        wr32(sp0 - 0x158u, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0x15cu, sp0 - 0x140u);
        g->ebx = self + 0x53u;
        g->esp = sp0 - 0x148u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x1034f7e0u), t53, rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu));
    COW_AT(101ff5cb)
    }
    else
    {
    COW_AT(101ff58f)
        wr32(sp0 - 0x154u, eax);
        t52 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
        wr32(sp0 - 0x158u, t52);
        wr32(sp0 - 0x15cu, COW_IMG(0x10385224u));
        wr32(sp0 - 0x160u, sp0 - 0x140u);
        g->ebx = self + 0x53u;
        g->esp = sp0 - 0x14cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x10385224u), t52, eax, rd32(sp0 - 0x150u));
    COW_AT(101ff5ac)
    }
    COW_AT(101ff5ce)
    wr32(sp0 - 0x154u, 0x13u);
    wr32(sp0 - 0x158u, COW_IMG(0x101ff8a0u));
    t54 = rd32(self + 0x204u);
    wr32(sp0 - 0x15cu, t54);
    t55 = rd32(self + 0x200u);
    wr32(sp0 - 0x160u, t55);
    wr32(sp0 - 0x164u, self + 0x53u);
    wr32(sp0 - 0x168u, sp0 - 0x140u);
    wr32(sp0 - 0x16cu, 0u);
    t56 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    wr32(sp0 - 0x170u, t56);
    g->eax = t56;
    t57 = rd32(self + 0x19cu);
    g->esp = sp0 - 0x16cu;
    t58 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t56);
    eax = t58;
    edi = t57;
    COW_AT(101ff603)
    t59 = ((uint32_t)(uint8_t)eax << 8u | (edi & 0xf0000u)) << 8u | (uint16_t)edi;
    wr32(sp0 - 0x170u, t59);
    t60 = rd32(self + 0x198u);
    wr32(sp0 - 0x174u, t60);
    g->eax = t60;
    g->edx = edi & 0xf0000u;
    g->esp = sp0 - 0x150u;
    t61 = cow_cdecl(g, COW_IMG(0x100f70e0u), 9, t60, t59, 0u, sp0 - 0x140u, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), COW_IMG(0x101ff8a0u), 0x13u);
    t62 = g->edx;
    eax = t61;
    edx = t62;
    COW_AT(101ff629)
    ebp = in_ebp;
    goto L_101ff768;
L_101ff631: ;
    COW_AT(101ff631)
    t33 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    wr32(sp0 - 0x154u, t33);
    g->eax = t33;
    g->edx = edx;
    g->esp = sp0 - 0x150u;
    t34 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t33);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    COW_AT(101ff643)
    wr32(sp0 - 0x154u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x150u;
    t36 = cow_thiscall(g, COW_IMG(0x100db7b0u), rd32(COW_IMG(0x103601bcu)), 1, eax);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(101ff64f)
    if (eax == 0u)
    {
    COW_AT(101ff675)
        t39 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
        wr32(sp0 - 0x154u, t39);
        wr32(sp0 - 0x158u, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0x15cu, sp0 - 0x140u);
        g->ebx = self + 0x53u;
        g->esp = sp0 - 0x148u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x1034f7e0u), t39, rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu));
    COW_AT(101ff68f)
    }
    else
    {
    COW_AT(101ff653)
        wr32(sp0 - 0x154u, eax);
        t38 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
        wr32(sp0 - 0x158u, t38);
        wr32(sp0 - 0x15cu, COW_IMG(0x10385224u));
        wr32(sp0 - 0x160u, sp0 - 0x140u);
        g->ebx = self + 0x53u;
        g->esp = sp0 - 0x14cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x10385224u), t38, eax, rd32(sp0 - 0x150u));
    COW_AT(101ff670)
    }
    COW_AT(101ff692)
    wr32(sp0 - 0x154u, 0x13u);
    wr32(sp0 - 0x158u, COW_IMG(0x101ff8a0u));
    t40 = rd32(self + 0x204u);
    wr32(sp0 - 0x15cu, t40);
    t41 = rd32(self + 0x200u);
    wr32(sp0 - 0x160u, t41);
    wr32(sp0 - 0x164u, self + 0x53u);
    wr32(sp0 - 0x168u, sp0 - 0x140u);
    t42 = rd32(self + 0x1d8u);
    wr32(sp0 - 0x16cu, t42);
    t43 = rd32(self + 0x1d4u);
    wr32(sp0 - 0x170u, t43);
    t44 = rd32(self + 0x1d0u);
    wr32(sp0 - 0x174u, t44);
    g->eax = t43;
    g->edx = t42;
    g->esp = sp0 - 0x150u;
    t45 = cow_cdecl(g, COW_IMG(0x100f7130u), 9, t44, t43, t42, sp0 - 0x140u, self + 0x53u, t41, t40, COW_IMG(0x101ff8a0u), 0x13u);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(101ff6c7)
    ebp = in_ebp;
    goto L_101ff768;
L_101ff6cf: ;
    COW_AT(101ff6cf)
    wr32(sp0 - 0x154u, 0x12u);
    wr32(sp0 - 0x158u, COW_IMG(0x101ff920u));
    wr32(sp0 - 0x15cu, self + 0x53u);
    wr32(sp0 - 0x160u, 0x1fu);
    wr32(sp0 - 0x164u, 9u);
    g->eax = eax;
    g->esp = sp0 - 0x15cu;
    t26 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x1fu);
    eax = t26;
    COW_AT(101ff6e0)
    wr32(sp0 - 0x160u, eax);
    t27 = rd32(self + 0x1d4u);
    wr32(sp0 - 0x164u, t27);
    t28 = rd32(self + 0x1d0u);
    wr32(sp0 - 0x168u, t28);
    t29 = rd32(self + 0x1e4u);
    wr32(sp0 - 0x16cu, t29);
    t30 = rd32(self + 0x1e0u);
    wr32(sp0 - 0x170u, t30);
    g->eax = t28;
    g->edx = t30;
    g->esp = sp0 - 0x150u;
    t31 = cow_cdecl(g, COW_IMG(0x100f71b0u), 8, t30, t29, t28, t27, eax, rd32(sp0 - 0x15cu), COW_IMG(0x101ff920u), 0x12u);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(101ff705)
    ebp = in_ebp;
    goto L_101ff768;
L_101ff70a: ;
    COW_AT(101ff70a)
    wr32(sp0 - 0x154u, 0x7fu);
    wr32(sp0 - 0x158u, sp0 - 0x100u);
    wr32(sp0 - 0x15cu, 1u);
    g->eax = sp0 - 0x100u;
    g->edx = edx;
    g->esp = sp0 - 0x15cu;
    t18 = cow_stdcall(g, COW_IMG(0x1031120eu), 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(101ff718)
    wr32(sp0 - 0x160u, 0x7fu);
    wr32(sp0 - 0x164u, sp0 - 0x80u);
    wr32(sp0 - 0x168u, 9u);
    g->esp = sp0 - 0x168u;
    cow_stdcall(g, COW_IMG(0x1031120eu), 0);
    COW_AT(101ff729)
    wr32(sp0 - 0x16cu, 0x15u);
    wr32(sp0 - 0x170u, COW_IMG(0x101ff920u));
    wr32(sp0 - 0x174u, sp0 - 0x100u);
    wr32(sp0 - 0x178u, sp0 - 0x80u);
    wr32(sp0 - 0x17cu, self + 0x53u);
    t20 = rd32(self + 0x1d4u);
    wr32(sp0 - 0x180u, t20);
    t21 = rd32(self + 0x1d0u);
    wr32(sp0 - 0x184u, t21);
    t22 = rd32(self + 0x1e4u);
    wr32(sp0 - 0x188u, t22);
    t23 = rd32(self + 0x1e0u);
    wr32(sp0 - 0x18cu, t23);
    g->eax = t22;
    g->edx = t21;
    g->esp = sp0 - 0x168u;
    t24 = cow_cdecl(g, COW_IMG(0x100f7340u), 9, t23, t22, t21, t20, self + 0x53u, sp0 - 0x80u, sp0 - 0x100u, COW_IMG(0x101ff920u), 0x15u);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(101ff75f)
    ebp = in_ebp;
    goto L_101ff768;
L_101ff764: ;
    COW_AT(101ff764)
    eax = rd32(sp0 - 0x144u);
    ebp = in_ebp;
    goto L_101ff768;
L_101ff7a1: ;
    COW_AT(101ff7a1)
    wr32(sp0 - 0x154u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x150u;
    t13 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(101ff7ae)
    g->ebx = rd32(sp0 - 0x148u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x150u);
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_101ff7ba: ;
    COW_AT(101ff7ba)
    wr32(sp0 - 0x154u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x150u;
    t11 = cow_call_regs(g, COW_IMG(0x101feec0u), (uint32_t)(int16_t)arg1 - 3u, self, g->edx, 0, 1, 0u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_101ff7c3: ;
    COW_AT(101ff7c3)
    wr32(sp0 - 0x154u, COW_IMG(0x10385210u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x150u;
    t90 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385210u));
    t91 = g->edx;
    eax = t90;
    edx = t91;
    COW_AT(101ff7d2)
    g->ebx = rd32(sp0 - 0x148u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x150u);
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_101ff7de: ;
    COW_AT(101ff7de)
    wr32(sp0 - 0x154u, 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x150u;
    t9 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(101ff7eb)
    g->ebx = rd32(sp0 - 0x148u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x150u);
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_101ff7f7: ;
    COW_AT(101ff7f7)
    wr32(sp0 - 0x154u, 5u);
    g->edx = in_edx;
    g->esp = sp0 - 0x150u;
    t7 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(101ff804)
    g->ebx = rd32(sp0 - 0x148u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x150u);
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_101ff810: ;
    COW_AT(101ff810)
    wr32(sp0 - 0x154u, 3u);
    g->edx = in_edx;
    g->esp = sp0 - 0x150u;
    t5 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 3u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(101ff81d)
    g->ebx = rd32(sp0 - 0x148u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x150u);
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_101ff829: ;
    COW_AT(101ff829)
    wr32(sp0 - 0x154u, 0u);
    wr32(sp0 - 0x158u, 0u);
    wr32(sp0 - 0x15cu, 2u);
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t2 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 0x150u;
    t3 = cow_thiscall(g, rd32(t2 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 2u, 0u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_101ff83a: ;
    COW_AT(101ff83a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ff3e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ff3fcu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
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
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x150u);
        in_esi = rd32(sp0 - 0x14cu);
        in_ebx = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x150u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101ff40bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
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
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x150u);
        in_esi = rd32(sp0 - 0x14cu);
        in_ebx = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x150u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101ff414u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff429u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff436u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff443u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff44au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff46eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x168u;
        wr32(sp0 - 0x15cu, COW_IMG(0x101ff8a0u));
        wr32(sp0 - 0x158u, 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x101ff485u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x101ff4abu:
    {
        unsigned af;
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
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101ff4b4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff4c5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x164u;
        wr32(sp0 - 0x158u, COW_IMG(0x101ff8a0u));
        wr32(sp0 - 0x154u, 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x101ff4e3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x16cu;
        (void)sp0;
        return 1;
    }
    case 0x101ff4ebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff4f3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff4f7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff4fau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff502u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff510u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x15cu;
        g->ebx = self + 0x53u;
        wr32(sp0 - 0x158u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101ff53fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x164u;
        wr32(sp0 - 0x160u, sp0 - 0x100u);
        wr32(sp0 - 0x158u, COW_IMG(0x101ff8a0u));
        wr32(sp0 - 0x154u, 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x101ff565u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x16cu;
        wr32(sp0 - 0x160u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101ff56du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff57fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff58bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff58fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff5acu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        g->ebx = self + 0x53u;
        wr32(sp0 - 0x160u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x101ff5b1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff5cbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x15cu;
        g->ebx = self + 0x53u;
        wr32(sp0 - 0x15cu, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x101ff5ceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff603u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x16cu;
        wr32(sp0 - 0x16cu, 0u);
        wr32(sp0 - 0x168u, sp0 - 0x140u);
        wr32(sp0 - 0x158u, COW_IMG(0x101ff8a0u));
        wr32(sp0 - 0x154u, 0x13u);
        (void)sp0;
        return 1;
    }
    case 0x101ff629u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x174u;
        wr32(sp0 - 0x168u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x101ff631u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff643u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff64fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff653u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff670u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        g->ebx = self + 0x53u;
        wr32(sp0 - 0x160u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x101ff675u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff68fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x15cu;
        g->ebx = self + 0x53u;
        wr32(sp0 - 0x15cu, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x101ff692u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff6c7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x174u;
        wr32(sp0 - 0x168u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x101ff6cfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff6e0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x164u;
        wr32(sp0 - 0x158u, COW_IMG(0x101ff920u));
        wr32(sp0 - 0x154u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101ff705u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x170u;
        (void)sp0;
        return 1;
    }
    case 0x101ff70au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        g->ebx = self + 0x53u;
        (void)sp0;
        return 1;
    }
    case 0x101ff718u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x15cu;
        g->ebx = self + 0x53u;
        wr32(sp0 - 0x158u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101ff729u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x168u;
        g->ebx = self + 0x53u;
        wr32(sp0 - 0x164u, sp0 - 0x80u);
        wr32(sp0 - 0x158u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101ff75fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18cu;
        wr32(sp0 - 0x178u, sp0 - 0x80u);
        wr32(sp0 - 0x174u, sp0 - 0x100u);
        wr32(sp0 - 0x164u, sp0 - 0x80u);
        wr32(sp0 - 0x158u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101ff764u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff768u:
    {
        unsigned af;
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff76cu:
    {
        unsigned af;
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff775u:
    {
        unsigned af;
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff77fu:
    {
        unsigned af;
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff786u:
    {
        unsigned af;
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff795u:
    {
        unsigned af;
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff7a1u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x150u);
        in_esi = rd32(sp0 - 0x14cu);
        in_ebx = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x150u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101ff7aeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff7bau:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
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
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x150u);
        in_esi = rd32(sp0 - 0x14cu);
        in_ebx = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x150u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101ff7c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff7d2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff7deu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x150u);
        in_esi = rd32(sp0 - 0x14cu);
        in_ebx = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x150u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101ff7ebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff7f7u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x150u);
        in_esi = rd32(sp0 - 0x14cu);
        in_ebx = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x150u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101ff804u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff810u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x150u);
        in_esi = rd32(sp0 - 0x14cu);
        in_ebx = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x150u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101ff81du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101ff829u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x150u);
        in_esi = rd32(sp0 - 0x14cu);
        in_ebx = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x150u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101ff83au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x150u);
        in_esi = rd32(sp0 - 0x14cu);
        in_ebx = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ff3e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ff3e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
