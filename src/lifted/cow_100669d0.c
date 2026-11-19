/* f_0x100669d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100669d0(Guest* g)
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
    uint32_t loc_1815c;
    uint32_t loc_18160;
    uint32_t loc_18168;
    uint32_t loc_1816c;
    uint32_t loc_18170;
    uint32_t loc_18174;
    uint32_t loc_18178;
    uint32_t loc_1817c;
    uint32_t loc_18190;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 98780u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100669dau: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100669da;
    case 0x100669eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100669ea;
    case 0x100669feu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_100669fe;
    case 0x10066a02u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066a02;
    case 0x10066a0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066a0c;
    case 0x10066a14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066a14;
    case 0x10066a20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066a20;
    case 0x10066a3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066a3b;
    case 0x10066a45u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066a45;
    case 0x10066a4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066a4c;
    case 0x10066a62u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066a62;
    case 0x10066a6au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066a6a;
    case 0x10066a71u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066a71;
    case 0x10066a87u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066a87;
    case 0x10066a8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066a8f;
    case 0x10066a96u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066a96;
    case 0x10066aacu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066aac;
    case 0x10066ab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066ab4;
    case 0x10066abbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066abb;
    case 0x10066ad1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066ad1;
    case 0x10066ad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066ad9;
    case 0x10066ae0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066ae0;
    case 0x10066b4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066b4d;
    case 0x10066b55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066b55;
    case 0x10066b6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066b6d;
    case 0x10066b74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066b74;
    case 0x10066b7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066b7d;
    case 0x10066b88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066b88;
    case 0x10066b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066b8f;
    case 0x10066bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066bce;
    case 0x10066bd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066bd8;
    case 0x10066c1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066c1f;
    case 0x10066c32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066c32;
    case 0x10066c44u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066c44;
    case 0x10066c4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066c4a;
    case 0x10066c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066c61;
    case 0x10066c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066c66;
    case 0x10066c6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066c6d;
    case 0x10066c96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066c96;
    case 0x10066ca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066ca2;
    case 0x10066cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066cb4;
    case 0x10066cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066cc5;
    case 0x10066cd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066cd7;
    case 0x10066ce3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066ce3;
    case 0x10066cf5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066cf5;
    case 0x10066d01u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); loc_1817c = rd32(sp0 - 0x1817cu); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066d01;
    case 0x10066d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); goto E_10066d07;
    case 0x10066d13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066d13;
    case 0x10066d63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066d63;
    case 0x10066d73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066d73;
    case 0x10066dbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066dbf;
    case 0x10066dcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066dcf;
    case 0x10066e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066e14;
    case 0x10066e24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066e24;
    case 0x10066e69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066e69;
    case 0x10066e76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066e76;
    case 0x10066ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066ea2;
    case 0x10066eadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066ead;
    case 0x10066ebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066ebd;
    case 0x10066ed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066ed7;
    case 0x10066edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066ede;
    case 0x10066ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066ef5;
    case 0x10066efcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066efc;
    case 0x10066effu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066eff;
    case 0x10066f02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066f02;
    case 0x10066f12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066f12;
    case 0x10066f22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066f22;
    case 0x10066f30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066f30;
    case 0x10066f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1817c = rd32(sp0 - 0x1817cu); loc_18178 = rd32(sp0 - 0x18178u); loc_18174 = rd32(sp0 - 0x18174u); loc_18170 = rd32(sp0 - 0x18170u); loc_1816c = rd32(sp0 - 0x1816cu); loc_18168 = rd32(sp0 - 0x18168u); loc_18160 = rd32(sp0 - 0x18160u); loc_1815c = rd32(sp0 - 0x1815cu); goto E_10066f50;
    case 0x10066fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066fbd;
    case 0x10066fdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066fda;
    case 0x10066fe3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066fe3;
    case 0x10066ff2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10066ff2;
    case 0x10066ff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10066ff7;
    case 0x10067006u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10067006;
    case 0x1006700cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006700c;
    case 0x1006702du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006702d;
    case 0x10067033u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10067033;
    case 0x1006704bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006704b;
    case 0x10067051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10067051;
    case 0x10067075u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10067075;
    case 0x10067082u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_10067082;
    case 0x10067091u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10067091;
    case 0x10067097u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10067097;
    case 0x100670a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100670a1;
    case 0x100670b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100670b0;
    case 0x100670bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_100670bd;
    case 0x100670c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_100670c4;
    case 0x100670cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_100670cb;
    case 0x100670d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_100670d2;
    case 0x100670d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_100670d9;
    case 0x100670deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_100670de;
    case 0x100670e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100670e3;
    case 0x100670e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_100670e9;
    case 0x100670ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18190 = rd32(sp0 - 0x18190u); goto E_100670ec;
    case 0x100670f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100670f8;
    default: break;
    }
#endif

    COW_AT(100669d0)
    COW_AT(100669da)
    wr32(sp0 - 0x18180u, in_ebx);
    wr32(sp0 - 0x18184u, in_ebp);
    wr32(sp0 - 0x18188u, in_esi);
    wr32(sp0 - 0x1818cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x1818cu;
    cow_thiscall(g, COW_IMG(0x10067310u), sp0 - 0x803cu, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(100669ea)
    wr32(sp0 - 0x18190u, arg1);
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t2 = cow_thiscall(g, COW_IMG(0x10067350u), sp0 - 0x803cu, 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(100669fe)
    if ((uint8_t)eax != 0u) goto L_10066a14;
    COW_AT(10066a02)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353fe4u));
    g->eax = eax;
    g->esp = sp0 - 0x18188u;
    t5 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353fe4u), rd32(sp0 - 0x1818cu));
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(10066a0c)
L_100670ec: ;
    COW_AT(100670ec)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t103 = cow_thiscall(g, COW_IMG(0x10067330u), sp0 - 0x803cu, 0);
    t104 = g->edx;
    eax = t103;
    edx = t104;
    COW_AT(100670f8)
    g->ebx = rd32(sp0 - 0x18180u);
    g->esi = rd32(sp0 - 0x18188u);
    g->edi = rd32(sp0 - 0x1818cu);
    g->ebp = rd32(sp0 - 0x18184u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10066a14: ;
    COW_AT(10066a14)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t7 = cow_thiscall(g, COW_IMG(0x100673c0u), sp0 - 0x803cu, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(10066a20)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353fd8u));
    wr32(sp0 - 0x18164u, eax);
    wr32(sp0 - 0x18160u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t9 = cow_thiscall(g, COW_IMG(0x10067910u), sp0 - 0x803cu, 1, COW_IMG(0x10353fd8u));
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
    esi = eax;
    eax = t9;
    COW_AT(10066a3b)
    if (eax == 0u) goto L_100670d9;
    COW_AT(10066a45)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t12 = cow_thiscall(g, COW_IMG(0x100643f0u), eax, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(10066a4c)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353fccu));
    wr32(COW_IMG(0x1047bf4cu), eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t14 = cow_thiscall(g, COW_IMG(0x10067910u), sp0 - 0x803cu, 1, COW_IMG(0x10353fccu));
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(10066a62)
    if (eax == 0u) goto L_100670d2;
    COW_AT(10066a6a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t17 = cow_thiscall(g, COW_IMG(0x100643f0u), eax, 0);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(10066a71)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353fc4u));
    wr32(COW_IMG(0x1047bf44u), eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t19 = cow_thiscall(g, COW_IMG(0x10067910u), sp0 - 0x803cu, 1, COW_IMG(0x10353fc4u));
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(10066a87)
    if (eax == 0u) goto L_100670cb;
    COW_AT(10066a8f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t22 = cow_thiscall(g, COW_IMG(0x100643f0u), eax, 0);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(10066a96)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353fb8u));
    wr32(COW_IMG(0x1047bf54u), eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t24 = cow_thiscall(g, COW_IMG(0x10067910u), sp0 - 0x803cu, 1, COW_IMG(0x10353fb8u));
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    COW_AT(10066aac)
    if (eax == 0u) goto L_100670c4;
    COW_AT(10066ab4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t27 = cow_thiscall(g, COW_IMG(0x100643f0u), eax, 0);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(10066abb)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353fa8u));
    wr32(COW_IMG(0x1047bf50u), eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t29 = cow_thiscall(g, COW_IMG(0x10067910u), sp0 - 0x803cu, 1, COW_IMG(0x10353fa8u));
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(10066ad1)
    if (eax == 0u) goto L_100670bd;
    COW_AT(10066ad9)
    g->eax = eax;
    g->esp = sp0 - 0x1818cu;
    t32 = cow_thiscall(g, COW_IMG(0x100643f0u), eax, 0);
    eax = t32;
    COW_AT(10066ae0)
    wr32(COW_IMG(0x1047bf48u), eax);
    edi = sp0 - 0x1815cu;
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x18038u, 0u);
    wr32(sp0 - 0x1803cu, 0x201u);
    wr32(sp0 - 0x1816cu, sp0 - 0x18034u);
    wr32(sp0 - 0x1817cu, 0u);
    wr32(sp0 - 0x1813cu, 0u);
    wr32(sp0 - 0x18170u, sp0 - 0xc03cu);
    wr32(sp0 - 0x18168u, sp0 - 0x1003cu);
    wr32(sp0 - 0x18174u, sp0 - 0x1813cu);
    eax = esi + 1u;
    ecx = sp0 - 0x1003cu;
    ebx = rd32(sp0 - 0x18164u);
    ebp = rd32(sp0 - 0x18164u);
    edi = sp0 - 0x1813cu;
    loc_1816c = sp0 - 0x18034u;
    loc_1817c = 0u;
    loc_18170 = sp0 - 0xc03cu;
    loc_18168 = sp0 - 0x1003cu;
    loc_18174 = sp0 - 0x1813cu;
    loc_1815c = rd32(sp0 - 0x1815cu);
    loc_18160 = rd32(sp0 - 0x18160u);
L_10066b55: ;
    COW_AT(10066b55)
    wr32(sp0 - 0x18178u, 0u);
    if (rd8(eax) - 1u > 6u)
    {
        loc_18178 = 0u;
        goto L_10066ef5;
    }
    edx = rd8(eax);
    eax = rd8(eax) - 1u;
    COW_AT(10066b6d)
    t33 = rd32(COW_IMG(0x10067108u) + eax * 4u);
    switch (t33 - RD)
    {
    case 0x10066b74u: goto L_10066b74;
    case 0x10066c66u: goto L_10066c66;
    case 0x10066d13u: goto L_10066d13;
    case 0x10066d73u: goto L_10066d73;
    case 0x10066dcfu: goto L_10066dcf;
    case 0x10066e24u: goto L_10066e24;
    case 0x10066e76u: goto L_10066e76;
    default: rt_fatal(g, COW_IMG(0x10066b6du), "switch");
    }
    return 0;
L_10066b4d: ;
    COW_AT(10066b4d)
    esi = loc_18160;
    edi = loc_18174;
    goto L_10066b55;
L_10066b74: ;
    COW_AT(10066b74)
    if (rd32(esi + 4u) < 0xffffu)
    {
    COW_AT(10066bd8)
        edi = ebp;
        eax = 0u;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t53 = ebx + rd8(esi + 2u) * 4u - 0xcu;
        wr32(sp0 - 0x18178u, t53);
        t54 = ((uint32_t)((int32_t)(t53 + 3u) >> 2u) & 0x1fu) << 8u ^ ((rd32(ebp) & 0xffff00ffu) | (rd32(ebp) >> 8u & 0xe0u) << 8u);
        wr32(ebp, t54);
        t55 = rd8(esi + 4u);
        wr8(ebp, (uint8_t)t55);
        if (loc_1817c != 2u)
        {
            loc_18178 = t53;
        }
        else
        {
            eax = loc_1817c;
            ecx = (t54 & 0xffffff00u) | t55;
            loc_18178 = t53;
    COW_AT(10066c1f)
            wr16(ebp + 4u, rd16(loc_18174));
            wr16(ebp + 6u, rd16(esi + 8u));
        }
    COW_AT(10066c32)
        if ((int32_t)(rd8(esi + 2u) - 3u) <= 0)
        {
            ecx = 0u;
        }
        else
        {
    COW_AT(10066c44)
            eax = esi + 0xcu;
            ecx = 0u;
            edi = ebp + ebx;
L_10066c4a: ;
    COW_AT(10066c4a)
            wr32(edi, rd32(eax));
            if ((int32_t)(ecx + 1u) < (int32_t)(rd8(esi + 2u) - 3u))
            {
                eax = eax + 4u;
                ecx = ecx + 1u;
                edi = edi + 4u;
                goto L_10066c4a;
            }
            ecx = ecx + 1u;
    COW_AT(10066c61)
        }
    }
    else
    {
    COW_AT(10066b7d)
        if (rd16(esi + 6u) == 0u)
        {
    COW_AT(10066bce)
            t52 = rd32(esi + 8u);
            wr32(edi, t52);
            loc_18178 = 0u;
        }
        else
        {
            eax = rd16(esi + 6u);
    COW_AT(10066b88)
            if (eax != 1u)
            {
                loc_18178 = 0u;
            }
            else
            {
    COW_AT(10066b8f)
                t49 = loc_1815c ^ ((rd32(esi + 8u) ^ loc_1815c) & 0xfu);
                wr32(sp0 - 0x1815cu, t49);
                t50 = t49 ^ ((rd32(esi + 0xcu) << 4u ^ t49) & 0x3f0u);
                wr32(sp0 - 0x1815cu, t50);
                t51 = t50 ^ ((rd32(esi + 0x10u) << 0xau ^ t50) & 0xfc00u);
                wr32(sp0 - 0x1815cu, t51);
                ecx = (rd32(esi + 0x10u) << 0xau ^ t50) & 0xfc00u;
                loc_18178 = 0u;
                loc_1815c = t51;
            }
        }
    }
L_10066ef5: ;
    COW_AT(10066ef5)
    if (loc_1817c == 1u)
    {
    COW_AT(10066f22)
        wr32(sp0 - 0x18170u, loc_18170 + loc_18178);
        loc_18170 = loc_18170 + loc_18178;
    }
    else
    {
        eax = loc_1817c - 1u;
    COW_AT(10066efc)
        if (eax == 1u)
        {
    COW_AT(10066f12)
            wr32(sp0 - 0x1816cu, loc_1816c + loc_18178);
            ecx = loc_18178;
            loc_1816c = loc_1816c + loc_18178;
        }
        else
        {
            eax = eax - 1u;
    COW_AT(10066eff)
            if (eax == 1u)
            {
    COW_AT(10066f02)
                wr32(sp0 - 0x18168u, loc_18168 + loc_18178);
                ecx = loc_18168 + loc_18178;
                loc_18168 = loc_18168 + loc_18178;
            }
        }
    }
    COW_AT(10066f30)
    t56 = esi + rd8(esi + 2u) * 4u;
    wr32(sp0 - 0x18160u, t56);
    if (rd8(t56 + 1u) != 0u)
    {
        eax = t56 + 1u;
        ecx = (ecx & 0xffffff00u) | rd8(t56 + 1u);
        ebp = ebp + loc_18178;
        loc_18160 = t56;
        goto L_10066b4d;
    }
    COW_AT(10066f50)
    wr32(loc_18170, 0u);
    wr32(loc_18170 + 4u, 0u);
    wr32(loc_1816c, 0u);
    wr32(loc_1816c + 4u, 0u);
    wr32(loc_18168, 0u);
    wr32(loc_18168 + 4u, 0u);
    t57 = (rd32(loc_18170) & 0xffff00ffu) | ((rd32(loc_18170) >> 8u & 0xe1u) << 8u >> 8u | 1u) << 8u;
    wr32(loc_18170, t57);
    t58 = (rd32(loc_1816c) & 0xffff00ffu) | ((rd32(loc_1816c) >> 8u & 0xe2u) << 8u >> 8u | 2u) << 8u;
    wr32(loc_1816c, t58);
    wr32(sp0 - 0x18190u, sp0 - 0x1803cu);
    t59 = (rd32(loc_18168) & 0xffff00ffu) | ((rd32(loc_18168) >> 8u & 0xe1u) << 8u >> 8u | 1u) << 8u;
    wr32(loc_18168, t59);
    wr32(sp0 - 0x18194u, sp0 - 0x1403cu);
    g->ebp = loc_18168 + (t59 >> 8u & 0x1fu) * 4u;
    g->eax = sp0 - 0x1403cu;
    t60 = rd32(loc_18170);
    g->esp = sp0 - 0x1818cu;
    t61 = cow_cdecl(g, COW_IMG(0x10067130u), 2, sp0 - 0x1403cu, sp0 - 0x1803cu);
    eax = t61;
    ebx = loc_18170 + (t60 >> 8u & 0x1fu) * 4u;
    ebp = loc_18168 + (t59 >> 8u & 0x1fu) * 4u;
    COW_AT(10066fbd)
    wr32(sp0 - 0x18198u, COW_IMG(0x1034f7fcu));
    wr32(sp0 - 0x1819cu, arg2);
    g->eax = eax;
    g->ecx = sp0 - 0x1403cu;
    g->edx = arg2;
    g->esp = sp0 - 0x18188u;
    t62 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg2, COW_IMG(0x1034f7fcu), sp0 - 0x1403cu, sp0 - 0x1803cu, rd32(sp0 - 0x1818cu));
    t63 = g->ecx;
    t64 = g->edx;
    ecx = t63;
    edx = t64;
    esi = eax - (sp0 - 0x1403cu);
    eax = t62;
    COW_AT(10066fda)
    if (eax != 0u)
    {
        edi = eax;
        goto L_10066ff7;
    }
    COW_AT(10066fe3)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353f68u));
    wr32(sp0 - 0x18194u, COW_IMG(0x10353f44u));
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x1818cu;
    t65 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353f44u), COW_IMG(0x10353f68u));
    t66 = g->edx;
    eax = t65;
    edx = t66;
    COW_AT(10066ff2)
L_100670e9: ;
    COW_AT(100670e9)
    goto L_100670ec;
L_10066c66: ;
    COW_AT(10066c66)
    wr32(sp0 - 0x18190u, 9u);
    g->eax = eax;
    g->esp = sp0 - 0x18184u;
    t45 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 9u, rd32(sp0 - 0x1818cu), rd32(sp0 - 0x18188u));
    eax = t45;
    loc_1816c = rd32(sp0 - 0x1816cu);
    loc_18170 = rd32(sp0 - 0x18170u);
    loc_18168 = rd32(sp0 - 0x18168u);
    loc_18174 = rd32(sp0 - 0x18174u);
    COW_AT(10066c6d)
    t46 = rd32(esi + 4u);
    wr32(eax, t46);
    t47 = rd32(esi + 8u);
    wr32(eax + 4u, t47);
    wr8(eax + 8u, 0u);
    esi = COW_IMG(0x10353f9cu);
    edi = eax;
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        loc_1817c = rd32(sp0 - 0x1817cu);
    }
    else
    {
    COW_AT(10066c96)
        wr32(sp0 - 0x1817cu, 1u);
        ebp = loc_18170;
        loc_1817c = 1u;
    }
    COW_AT(10066ca2)
    esi = COW_IMG(0x10353f90u);
    edi = eax;
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        ebx = 4u;
    }
    else
    {
    COW_AT(10066cb4)
        wr32(sp0 - 0x1817cu, 2u);
        ebx = 8u;
        ebp = loc_1816c;
        loc_1817c = 2u;
    }
    COW_AT(10066cc5)
    esi = COW_IMG(0x10353f84u);
    edi = eax;
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
    COW_AT(10066cd7)
        wr32(sp0 - 0x1817cu, 3u);
        ebp = loc_18168;
        loc_1817c = 3u;
    }
    COW_AT(10066ce3)
    esi = COW_IMG(0x10353f78u);
    edi = eax;
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
    COW_AT(10066cf5)
        wr32(sp0 - 0x1817cu, 4u);
        ebp = loc_18170;
        loc_1817c = 4u;
    }
    COW_AT(10066d01)
    wr32(sp0 - 0x18190u, eax);
    g->esp = sp0 - 0x1818cu;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, 0u, 1, 1, eax);
    t48 = g->ecx;
    ecx = t48;
    loc_1816c = rd32(sp0 - 0x1816cu);
    loc_18170 = rd32(sp0 - 0x18170u);
    loc_18168 = rd32(sp0 - 0x18168u);
    loc_18174 = rd32(sp0 - 0x18174u);
    COW_AT(10066d07)
    esi = rd32(sp0 - 0x18160u);
    loc_1817c = rd32(sp0 - 0x1817cu);
    loc_18178 = rd32(sp0 - 0x18178u);
    loc_1815c = rd32(sp0 - 0x1815cu);
    goto L_10066ef5;
L_10066d13: ;
    COW_AT(10066d13)
    wr32(sp0 - 0x18174u, edi + 4u);
    wr32(edi + 4u, rd32(edi));
    edi = ebp;
    eax = 0u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x18178u, ebx);
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t43 = ((uint32_t)((int32_t)(ebx + 3u) >> 2u) & 0x1fu) << 8u ^ ((rd32(ebp) & 0xffff00ffu) | (rd32(ebp) >> 8u & 0xe0u) << 8u);
    wr32(ebp, t43);
    wr8(ebp, rd8(COW_IMG(0x1047bf4cu)));
    if (loc_1817c != 2u)
    {
        ecx = t43;
        loc_18174 = edi + 4u;
        loc_18178 = ebx;
    }
    else
    {
        ecx = t43;
        loc_18174 = edi + 4u;
        loc_18178 = ebx;
    COW_AT(10066d63)
        t44 = rd16(loc_18174);
        wr16(ebp + 4u, (uint16_t)t44);
        ecx = (ecx & 0xffff0000u) | t44;
    }
    goto L_10066ef5;
L_10066d73: ;
    COW_AT(10066d73)
    wr32(sp0 - 0x18174u, edi - 4u);
    edi = ebp;
    eax = 0u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x18178u, ebx);
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t41 = ((uint32_t)((int32_t)(ebx + 3u) >> 2u) & 0x1fu) << 8u ^ ((rd32(ebp) & 0xffff00ffu) | (rd32(ebp) >> 8u & 0xe0u) << 8u);
    wr32(ebp, t41);
    wr8(ebp, rd8(COW_IMG(0x1047bf44u)));
    if (loc_1817c != 2u)
    {
        ecx = t41;
        loc_18174 = edi - 4u;
        loc_18178 = ebx;
    }
    else
    {
        ecx = t41;
        loc_18174 = edi - 4u;
        loc_18178 = ebx;
    COW_AT(10066dbf)
        t42 = rd16(loc_18174);
        wr16(ebp + 4u, (uint16_t)t42);
        ecx = (ecx & 0xffff0000u) | t42;
    }
    goto L_10066ef5;
L_10066dcf: ;
    COW_AT(10066dcf)
    edi = ebp;
    eax = 0u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x18178u, ebx);
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t39 = ((uint32_t)((int32_t)(ebx + 3u) >> 2u) & 0x1fu) << 8u ^ ((rd32(ebp) & 0xffff00ffu) | (rd32(ebp) >> 8u & 0xe0u) << 8u);
    wr32(ebp, t39);
    wr8(ebp, rd8(COW_IMG(0x1047bf54u)));
    if (loc_1817c != 2u)
    {
        ecx = t39;
        loc_18178 = ebx;
    }
    else
    {
        ecx = t39;
        loc_18178 = ebx;
    COW_AT(10066e14)
        t40 = rd16(loc_18174);
        wr16(ebp + 4u, (uint16_t)t40);
        ecx = (ecx & 0xffff0000u) | t40;
    }
    goto L_10066ef5;
L_10066e24: ;
    COW_AT(10066e24)
    edi = ebp;
    eax = 0u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x18178u, ebx);
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t37 = ((uint32_t)((int32_t)(ebx + 3u) >> 2u) & 0x1fu) << 8u ^ ((rd32(ebp) & 0xffff00ffu) | (rd32(ebp) >> 8u & 0xe0u) << 8u);
    wr32(ebp, t37);
    wr8(ebp, rd8(COW_IMG(0x1047bf50u)));
    if (loc_1817c != 2u)
    {
        ecx = t37;
        loc_18178 = ebx;
    }
    else
    {
        ecx = t37;
        loc_18178 = ebx;
    COW_AT(10066e69)
        t38 = rd16(loc_18174);
        wr16(ebp + 4u, (uint16_t)t38);
        ecx = (ecx & 0xffff0000u) | t38;
    }
    goto L_10066ef5;
L_10066e76: ;
    COW_AT(10066e76)
    edi = ebp;
    eax = 0u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(ebp, rd8(COW_IMG(0x1047bf48u)));
    wr32(sp0 - 0x18178u, ebx + 4u);
    if (loc_1817c != 2u)
    {
        eax = loc_1817c;
        ecx = ebx + 4u;
        edx = ebx;
        loc_18178 = ebx + 4u;
    }
    else
    {
        eax = loc_1817c;
        ecx = ebx + 4u;
        loc_18178 = ebx + 4u;
    COW_AT(10066ea2)
        t34 = rd16(loc_18174);
        wr16(ebp + 4u, (uint16_t)t34);
        eax = (eax & 0xffff0000u) | t34;
        edx = loc_18174;
    }
    COW_AT(10066ead)
    wr16(ebp + ebx, rd8(esi + 5u));
    if (rd8(esi + 5u) != 0x1cu)
    {
    COW_AT(10066ed7)
        wr16(ebp + ebx + 2u, 0u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 5u);
    COW_AT(10066ebd)
        wr16(ebp + ebx + 2u, rd8(esi + 4u));
        t35 = rd32(esi + 8u);
        wr32(ebp + ebx + 4u, t35);
        wr32(sp0 - 0x18178u, ecx + 4u);
        loc_18178 = ecx + 4u;
        ecx = ecx + 4u;
    }
    COW_AT(10066ede)
    t36 = ((uint32_t)((int32_t)(ecx + 3u) >> 2u) & 0x1fu) << 8u ^ ((rd32(ebp) & 0xffff00ffu) | (rd32(ebp) >> 8u & 0xe0u) << 8u);
    wr32(ebp, t36);
    ecx = t36;
    goto L_10066ef5;
L_10066ff7: ;
    COW_AT(10066ff7)
    wr32(sp0 - 0x18190u, edi);
    wr32(sp0 - 0x18194u, 1u);
    wr32(sp0 - 0x18198u, 0x20u);
    wr32(sp0 - 0x1819cu, sp0 - 0x1815cu);
    g->eax = sp0 - 0x1815cu;
    g->ecx = ecx;
    g->esp = sp0 - 0x18184u;
    t67 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, sp0 - 0x1815cu, 0x20u, 1u, edi, rd32(sp0 - 0x1818cu), rd32(sp0 - 0x18188u));
    t68 = g->ecx;
    t69 = g->edx;
    eax = t67;
    ecx = t68;
    edx = t69;
    COW_AT(10067006)
    wr32(sp0 - 0x181a0u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x18194u;
    t70 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, edi, sp0 - 0x1815cu, 0x20u);
    eax = t70;
    COW_AT(1006700c)
    wr32(sp0 - 0x181a4u, edi);
    wr32(sp0 - 0x181a8u, 1u);
    t71 = ebx - (sp0 - 0xc03cu);
    wr32(sp0 - 0x181acu, t71);
    wr32(sp0 - 0x181b0u, sp0 - 0xc03cu);
    wr32(sp0 - 0x1814cu, eax + 0x10u);
    g->eax = eax + 0x10u;
    g->ecx = sp0 - 0xc03cu;
    g->esp = sp0 - 0x18198u;
    t72 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, sp0 - 0xc03cu, 1, 6, sp0 - 0xc03cu, t71, 1u, edi, rd32(sp0 - 0x181a0u), sp0 - 0x1815cu);
    t73 = g->ecx;
    t74 = g->edx;
    eax = t72;
    ecx = t73;
    edx = t74;
    COW_AT(1006702d)
    wr32(sp0 - 0x181b4u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x181a8u;
    t75 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, edi, sp0 - 0xc03cu, rd32(sp0 - 0x181acu));
    t76 = g->ecx;
    t77 = g->edx;
    eax = t75;
    ecx = t76;
    edx = t77;
    COW_AT(10067033)
    wr32(sp0 - 0x181b8u, edi);
    wr32(sp0 - 0x18148u, eax + 0x10u);
    wr32(sp0 - 0x181bcu, 1u);
    wr32(sp0 - 0x181c0u, esi);
    wr32(sp0 - 0x181c4u, sp0 - 0x1403cu);
    g->eax = sp0 - 0x1403cu;
    g->ecx = ecx;
    g->esp = sp0 - 0x181acu;
    t78 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, sp0 - 0x1403cu, esi, 1u, edi, rd32(sp0 - 0x181b4u), sp0 - 0xc03cu);
    t79 = g->ecx;
    t80 = g->edx;
    eax = t78;
    ecx = t79;
    edx = t80;
    COW_AT(1006704b)
    wr32(sp0 - 0x181c8u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x181bcu;
    t81 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, edi, sp0 - 0x1403cu, rd32(sp0 - 0x181c0u));
    eax = t81;
    COW_AT(10067051)
    wr32(sp0 - 0x181ccu, edi);
    wr32(sp0 - 0x181d0u, 1u);
    t82 = ebp - (sp0 - 0x1003cu);
    wr32(sp0 - 0x181d4u, t82);
    wr32(sp0 - 0x181d8u, sp0 - 0x1003cu);
    wr32(sp0 - 0x18144u, eax + 0x10u);
    g->eax = eax + 0x10u;
    g->ecx = sp0 - 0x1003cu;
    g->esp = sp0 - 0x181c0u;
    t83 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, sp0 - 0x1003cu, 1, 6, sp0 - 0x1003cu, t82, 1u, edi, rd32(sp0 - 0x181c8u), sp0 - 0x1403cu);
    t84 = g->ecx;
    t85 = g->edx;
    eax = t83;
    ecx = t84;
    edx = t85;
    COW_AT(10067075)
    wr32(sp0 - 0x18190u, 0u);
    wr32(sp0 - 0x18194u, 0u);
    wr32(sp0 - 0x18198u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x1818cu;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, edi, 0u, 0u);
    t86 = g->ecx;
    t87 = g->edx;
    ecx = t86;
    edx = t87;
    COW_AT(10067082)
    wr32(sp0 - 0x1819cu, edi);
    wr32(sp0 - 0x181a0u, 1u);
    wr32(sp0 - 0x181a4u, 0x20u);
    wr32(sp0 - 0x181a8u, sp0 - 0x1815cu);
    g->eax = sp0 - 0x1815cu;
    g->ecx = ecx;
    g->esp = sp0 - 0x18190u;
    t88 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, sp0 - 0x1815cu, 0x20u, 1u, edi, rd32(sp0 - 0x18198u), 0u);
    t89 = g->ecx;
    t90 = g->edx;
    eax = t88;
    ecx = t89;
    edx = t90;
    COW_AT(10067091)
    wr32(sp0 - 0x181acu, edi);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x181a0u;
    t91 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, edi, sp0 - 0x1815cu, 0x20u);
    t92 = g->edx;
    eax = t91;
    edx = t92;
    COW_AT(10067097)
    t93 = rd32(sp0 - 0x18164u);
    wr32(sp0 - 0x181b0u, t93);
    g->eax = eax;
    g->esp = sp0 - 0x181acu;
    t94 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t93, edx, 1, 1, t93);
    t95 = g->edx;
    eax = t94;
    edx = t95;
    COW_AT(100670a1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1818cu;
    t96 = cow_thiscall(g, COW_IMG(0x10067330u), sp0 - 0x803cu, 0);
    t97 = g->edx;
    eax = t96;
    edx = t97;
    COW_AT(100670b0)
    g->ebx = rd32(sp0 - 0x18180u);
    g->esi = rd32(sp0 - 0x18188u);
    g->edi = rd32(sp0 - 0x1818cu);
    g->ebp = rd32(sp0 - 0x18184u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100670bd: ;
    COW_AT(100670bd)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353f24u));
    loc_18190 = COW_IMG(0x10353f24u);
L_100670de: ;
    COW_AT(100670de)
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x18188u;
    t98 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, loc_18190, rd32(sp0 - 0x1818cu));
    t99 = g->ecx;
    t100 = g->edx;
    eax = t98;
    ecx = t99;
    edx = t100;
    COW_AT(100670e3)
    wr32(sp0 - 0x18194u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x18190u;
    t101 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
    t102 = g->edx;
    eax = t101;
    edx = t102;
    goto L_100670e9;
L_100670c4: ;
    COW_AT(100670c4)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353f08u));
    loc_18190 = COW_IMG(0x10353f08u);
    goto L_100670de;
L_100670cb: ;
    COW_AT(100670cb)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353ef0u));
    loc_18190 = COW_IMG(0x10353ef0u);
    goto L_100670de;
L_100670d2: ;
    COW_AT(100670d2)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353ed4u));
    loc_18190 = COW_IMG(0x10353ed4u);
    goto L_100670de;
L_100670d9: ;
    COW_AT(100670d9)
    wr32(sp0 - 0x18190u, COW_IMG(0x10353eb8u));
    loc_18190 = COW_IMG(0x10353eb8u);
    goto L_100670de;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100669d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100669dau:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
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
        g->esp = sp0 - 0x1817cu;
        g->eax = 0x1817cu;
        (void)sp0;
        return 1;
    }
    case 0x100669eau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x100669feu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066a02u:
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
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066a0cu:
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
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x18190u;
        (void)sp0;
        return 1;
    }
    case 0x10066a14u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066a20u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066a3bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066a45u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066a4cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066a62u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066a6au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066a71u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066a87u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066a8fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066a96u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066aacu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066ab4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18190;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066abbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066ad1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066ad9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066ae0u:
    {
        unsigned af;
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
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066b4du:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066b55u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066b6du:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x18178u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10066b74u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x18178u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10066b7du:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x18178u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10066b88u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x18178u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10066b8fu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x18178u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10066bceu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x18178u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10066bd8u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066c1fu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066c32u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066c44u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066c4au:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066c61u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066c66u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x18178u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10066c6du:
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
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x18190u;
        (void)sp0;
        return 1;
    }
    case 0x10066c96u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 4u;
        (void)sp0;
        return 1;
    }
    case 0x10066ca2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 4u;
        (void)sp0;
        return 1;
    }
    case 0x10066cb4u:
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
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066cc5u:
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
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066cd7u:
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
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066ce3u:
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
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066cf5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x1818cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066d01u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_1817c;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x1818cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10066d07u:
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
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
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
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        g->esp = sp0 - 0x18190u;
        (void)sp0;
        return 1;
    }
    case 0x10066d13u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066d63u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066d73u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066dbfu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066dcfu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066e14u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066e24u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066e69u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066e76u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066ea2u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066eadu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066ebdu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066ed7u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066edeu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066ef5u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066efcu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066effu:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066f02u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066f12u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066f22u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066f30u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066f50u:
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
        uint32_t loc_1815c;
        uint32_t loc_18160;
        uint32_t loc_18168;
        uint32_t loc_1816c;
        uint32_t loc_18170;
        uint32_t loc_18174;
        uint32_t loc_18178;
        uint32_t loc_1817c;
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
        loc_1817c = rd32(sp0 - 0x1817cu);
        loc_18178 = rd32(sp0 - 0x18178u);
        loc_18174 = rd32(sp0 - 0x18174u);
        loc_18170 = rd32(sp0 - 0x18170u);
        loc_1816c = rd32(sp0 - 0x1816cu);
        loc_18168 = rd32(sp0 - 0x18168u);
        loc_18160 = rd32(sp0 - 0x18160u);
        loc_1815c = rd32(sp0 - 0x1815cu);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x10066fbdu:
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
        g->esp = sp0 - 0x18194u;
        wr32(sp0 - 0x18194u, sp0 - 0x1403cu);
        wr32(sp0 - 0x18190u, sp0 - 0x1803cu);
        (void)sp0;
        return 1;
    }
    case 0x10066fdau:
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
        g->esp = sp0 - 0x1819cu;
        wr32(sp0 - 0x18194u, sp0 - 0x1403cu);
        wr32(sp0 - 0x18190u, sp0 - 0x1803cu);
        (void)sp0;
        return 1;
    }
    case 0x10066fe3u:
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
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x18194u, sp0 - 0x1403cu);
        wr32(sp0 - 0x18190u, sp0 - 0x1803cu);
        (void)sp0;
        return 1;
    }
    case 0x10066ff2u:
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
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x18194u;
        (void)sp0;
        return 1;
    }
    case 0x10066ff7u:
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
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x18194u, sp0 - 0x1403cu);
        wr32(sp0 - 0x18190u, sp0 - 0x1803cu);
        (void)sp0;
        return 1;
    }
    case 0x10067006u:
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
        g->esp = sp0 - 0x1819cu;
        wr32(sp0 - 0x1819cu, sp0 - 0x1815cu);
        wr32(sp0 - 0x18198u, 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1006700cu:
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
        g->esp = sp0 - 0x181a0u;
        wr32(sp0 - 0x1819cu, sp0 - 0x1815cu);
        (void)sp0;
        return 1;
    }
    case 0x1006702du:
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
        g->esp = sp0 - 0x181b0u;
        wr32(sp0 - 0x181b0u, sp0 - 0xc03cu);
        wr32(sp0 - 0x1819cu, sp0 - 0x1815cu);
        (void)sp0;
        return 1;
    }
    case 0x10067033u:
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
        g->esp = sp0 - 0x181b4u;
        wr32(sp0 - 0x181b0u, sp0 - 0xc03cu);
        wr32(sp0 - 0x1819cu, sp0 - 0x1815cu);
        (void)sp0;
        return 1;
    }
    case 0x1006704bu:
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
        g->esp = sp0 - 0x181c4u;
        wr32(sp0 - 0x181c4u, sp0 - 0x1403cu);
        wr32(sp0 - 0x181b0u, sp0 - 0xc03cu);
        wr32(sp0 - 0x1819cu, sp0 - 0x1815cu);
        (void)sp0;
        return 1;
    }
    case 0x10067051u:
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
        g->esp = sp0 - 0x181c8u;
        wr32(sp0 - 0x181c4u, sp0 - 0x1403cu);
        wr32(sp0 - 0x181b0u, sp0 - 0xc03cu);
        wr32(sp0 - 0x1819cu, sp0 - 0x1815cu);
        (void)sp0;
        return 1;
    }
    case 0x10067075u:
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
        g->esp = sp0 - 0x181d8u;
        wr32(sp0 - 0x181d8u, sp0 - 0x1003cu);
        wr32(sp0 - 0x181c4u, sp0 - 0x1403cu);
        wr32(sp0 - 0x181b0u, sp0 - 0xc03cu);
        wr32(sp0 - 0x1819cu, sp0 - 0x1815cu);
        (void)sp0;
        return 1;
    }
    case 0x10067082u:
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
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x18198u;
        wr32(sp0 - 0x181d8u, sp0 - 0x1003cu);
        wr32(sp0 - 0x181c4u, sp0 - 0x1403cu);
        wr32(sp0 - 0x181b0u, sp0 - 0xc03cu);
        wr32(sp0 - 0x1819cu, sp0 - 0x1815cu);
        wr32(sp0 - 0x18194u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10067091u:
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
        g->esp = sp0 - 0x181a8u;
        wr32(sp0 - 0x181d8u, sp0 - 0x1003cu);
        wr32(sp0 - 0x181c4u, sp0 - 0x1403cu);
        wr32(sp0 - 0x181b0u, sp0 - 0xc03cu);
        wr32(sp0 - 0x181a8u, sp0 - 0x1815cu);
        wr32(sp0 - 0x181a4u, 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10067097u:
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
        g->esp = sp0 - 0x181acu;
        wr32(sp0 - 0x181d8u, sp0 - 0x1003cu);
        wr32(sp0 - 0x181c4u, sp0 - 0x1403cu);
        wr32(sp0 - 0x181b0u, sp0 - 0xc03cu);
        wr32(sp0 - 0x181a8u, sp0 - 0x1815cu);
        (void)sp0;
        return 1;
    }
    case 0x100670a1u:
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
        g->esp = sp0 - 0x181b0u;
        wr32(sp0 - 0x181d8u, sp0 - 0x1003cu);
        wr32(sp0 - 0x181c4u, sp0 - 0x1403cu);
        wr32(sp0 - 0x181a8u, sp0 - 0x1815cu);
        (void)sp0;
        return 1;
    }
    case 0x100670b0u:
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
        g->esp = sp0 - 0x1818cu;
        wr32(sp0 - 0x181d8u, sp0 - 0x1003cu);
        wr32(sp0 - 0x181c4u, sp0 - 0x1403cu);
        wr32(sp0 - 0x181a8u, sp0 - 0x1815cu);
        (void)sp0;
        return 1;
    }
    case 0x100670bdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100670c4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100670cbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100670d2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100670d9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100670deu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x18190u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100670e3u:
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
        g->esp = sp0 - 0x18190u;
        (void)sp0;
        return 1;
    }
    case 0x100670e9u:
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
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x18194u;
        (void)sp0;
        return 1;
    }
    case 0x100670ecu:
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
        uint32_t loc_18190;
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
        loc_18190 = rd32(sp0 - 0x18190u);
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    case 0x100670f8u:
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
        g->esp = sp0 - 0x1818cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100669d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100669d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
