/* f_0x10086210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10086210(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d10;
    double d12;
    double d18;
    double d19;
    double d24;
    double d25;
    double d26;
    double d27;
    double d32;
    double d33;
    double d37;
    double d41;
    double d48;
    double d53;
    double d56;
    double d60;
    double d63;
    double d66;
    double d70;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d97;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_684_f;
    uint32_t loc_68c;
    uint32_t loc_690;
    uint32_t loc_694;
    double loc_694_f;
    uint32_t loc_6a8;
    uint32_t loc_6b0;
    uint32_t loc_6b4;
    uint32_t loc_6b8;
    double loc_6b8_f;
    uint32_t loc_6bc;
    uint32_t loc_6c0;
    uint32_t loc_6c4;
    double loc_6c4_f;
    uint32_t loc_6d8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
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
    uint32_t t54;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t64;
    uint32_t t65;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t8;
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
    double x0;
    double x1;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1772u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10086226u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x6d4u); in_esi = rd32(sp0 - 0x6d0u); in_ebp = rd32(sp0 - 0x6ccu); g->ebp = rd32(sp0 - 0x6ccu); g->edi = rd32(sp0 - 0x6d4u); g->esi = rd32(sp0 - 0x6d0u); goto E_10086226;
    case 0x10086252u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086252;
    case 0x10086266u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); goto E_10086266;
    case 0x1008627eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008627e;
    case 0x1008628du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008628d;
    case 0x100862afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_68c = rd32(sp0 - 0x68cu); goto E_100862af;
    case 0x100862c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_68c = rd32(sp0 - 0x68cu); goto E_100862c4;
    case 0x100862ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100862ce;
    case 0x100862ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100862dd;
    case 0x100862f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100862f1;
    case 0x100862fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100862fd;
    case 0x10086305u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086305;
    case 0x1008630au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008630a;
    case 0x1008632cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); goto E_1008632c;
    case 0x1008633du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); goto E_1008633d;
    case 0x10086349u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); goto E_10086349;
    case 0x10086351u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); goto E_10086351;
    case 0x10086356u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086356;
    case 0x10086378u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); goto E_10086378;
    case 0x1008637du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008637d;
    case 0x100863a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100863a0;
    case 0x100863d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_684_f = rdf32(sp0 - 0x684u); goto E_100863d8;
    case 0x100863e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_684_f = rdf32(sp0 - 0x684u); goto E_100863e1;
    case 0x100863efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100863ef;
    case 0x100863fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100863fd;
    case 0x10086401u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086401;
    case 0x10086427u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086427;
    case 0x10086448u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086448;
    case 0x10086451u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086451;
    case 0x10086457u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086457;
    case 0x1008645cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_1008645c;
    case 0x10086462u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086462;
    case 0x10086476u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6c4 = rd32(sp0 - 0x6c4u); loc_6bc = rd32(sp0 - 0x6bcu); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086476;
    case 0x10086488u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086488;
    case 0x10086495u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086495;
    case 0x100864b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_100864b6;
    case 0x100864beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_100864be;
    case 0x100864c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_100864c3;
    case 0x100864c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_100864c8;
    case 0x100864edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_100864ed;
    case 0x10086507u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_10086507;
    case 0x10086510u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_10086510;
    case 0x10086515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_10086515;
    case 0x1008652bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_1008652b;
    case 0x10086548u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_10086548;
    case 0x10086566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_10086566;
    case 0x1008656cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_1008656c;
    case 0x10086571u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b8 = rd32(sp0 - 0x6b8u); goto E_10086571;
    case 0x1008657au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_1008657a;
    case 0x10086591u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086591;
    case 0x100865aau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100865aa;
    case 0x100865aeu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100865ae;
    case 0x100865d4u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100865d4;
    case 0x100865e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694_f = rdf32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100865e1;
    case 0x100865e3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100865e3;
    case 0x100865efu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100865ef;
    case 0x100865f3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100865f3;
    case 0x100865f7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100865f7;
    case 0x100865fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100865fb;
    case 0x10086635u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086635;
    case 0x10086639u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086639;
    case 0x10086669u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086669;
    case 0x10086679u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086679;
    case 0x10086696u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086696;
    case 0x100866a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100866a4;
    case 0x100866a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100866a8;
    case 0x10086756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8_f = rdf32(sp0 - 0x6b8u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_10086756;
    case 0x1008677eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); goto E_1008677e;
    case 0x100867abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); goto E_100867ab;
    case 0x100867d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); goto E_100867d7;
    case 0x100867dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); goto E_100867df;
    case 0x100867eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); loc_6b0 = rd32(sp0 - 0x6b0u); goto E_100867ee;
    case 0x100867f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); loc_6b0 = rd32(sp0 - 0x6b0u); goto E_100867f5;
    case 0x100867fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); loc_6b0 = rd32(sp0 - 0x6b0u); goto E_100867fa;
    case 0x1008682eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); goto E_1008682e;
    case 0x10086839u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b0 = rd32(sp0 - 0x6b0u); goto E_10086839;
    case 0x10086844u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6bc = rd32(sp0 - 0x6bcu); goto E_10086844;
    case 0x1008685au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6bc = rd32(sp0 - 0x6bcu); goto E_1008685a;
    case 0x1008686au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6bc = rd32(sp0 - 0x6bcu); goto E_1008686a;
    case 0x10086872u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6bc = rd32(sp0 - 0x6bcu); goto E_10086872;
    case 0x10086889u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6bc = rd32(sp0 - 0x6bcu); goto E_10086889;
    case 0x100868a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6bc = rd32(sp0 - 0x6bcu); goto E_100868a2;
    case 0x100868b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6bc = rd32(sp0 - 0x6bcu); goto E_100868b7;
    case 0x100868bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694 = rd32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100868bd;
    case 0x100868d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c4_f = rdf32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_694_f = rdf32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_684_f = rdf32(sp0 - 0x684u); goto E_100868d3;
    case 0x100868e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6d8 = rd32(sp0 - 0x6d8u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b0 = rd32(sp0 - 0x6b0u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_684_f = rdf32(sp0 - 0x684u); goto E_100868e7;
    case 0x100868f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100868f3;
    default: break;
    }
#endif

    COW_AT(10086210)
    wr32(sp0 - 0x6c8u, in_ebx);
    wr32(sp0 - 0x6ccu, in_ebp);
    wr32(sp0 - 0x6d0u, in_esi);
    wr32(sp0 - 0x6d4u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x6d4u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x650u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10086226)
    wr32(sp0 - 0x6a4u, 0u);
    wr32(sp0 - 0x6a0u, 0u);
    wr32(sp0 - 0x69cu, 0u);
    wr32(sp0 - 0x698u, 0x3f800000u);
    g->edx = edx;
    g->esp = sp0 - 0x6d4u;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x650u, 0);
    t3 = g->edx;
    edx = t3;
    COW_AT(10086252)
    wr32(sp0 - 0x6d8u, arg1);
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x6d4u;
    t4 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x650u, 1, arg1);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(10086266)
    wr32(sp0 - 0x6d8u, sp0 - 0x650u);
    wr32(sp0 - 0x6dcu, 0x100u);
    t6 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x6d4u;
    cow_thiscall(g, COW_IMG(0x1000bd50u), t6, 2, 0x100u, sp0 - 0x650u);
    t7 = g->ecx;
    ecx = t7;
    COW_AT(1008627e)
    wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
    wr32(sp0 - 0x6dcu, sp0 - 0x6a4u);
    g->eax = sp0 - 0x6a4u;
    g->edx = sp0 - 0x6a4u;
    g->esp = sp0 - 0x6d4u;
    t8 = cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0x6a4u, sp0 - 0x6a4u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(1008628d)
    d10 = (double)rdf32(sp0 - 0x69cu);
    t11 = rd32(sp0 - 0x69cu);
    wr32(sp0 - 0x68cu, t11);
    if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
        ecx = t11;
        loc_68c = t11;
    COW_AT(100862af)
        d12 = (double)rdf32(sp0 - 0x69cu);
        if (d12 < (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100862c4)
            wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
            g->ecx = ecx;
            g->edx = sp0 - 0x6a4u;
            g->esp = sp0 - 0x6d4u;
            cow_cdecl(g, COW_IMG(0x100278e0u), 1, sp0 - 0x6a4u);
            t13 = g->ecx;
            t14 = g->edx;
            ecx = t13;
            edx = t14;
    COW_AT(100862ce)
            wr32(sp0 - 0x6dcu, 0xbf000000u);
            wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
            g->eax = sp0 - 0x6a4u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x6d8u;
            t15 = cow_cdecl(g, COW_IMG(0x10027050u), 2, sp0 - 0x6a4u, 0xbf000000u);
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
    COW_AT(100862dd)
            d18 = (double)rdf32(sp0 - 0x6a4u);
            if (!(d18 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100862fd)
                t20 = rd32(sp0 - 0x6a4u);
                wr32(sp0 - 0x6bcu, t20);
                ecx = t20;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100862f1)
                d19 = (double)(float)-(double)rdf32(sp0 - 0x6a4u);
                wrf32(sp0 - 0x6bcu, (float)d19);
            }
    COW_AT(10086305)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x6d4u;
            t21 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
            t22 = g->ecx;
            t23 = g->edx;
            eax = t21;
            ecx = t22;
            edx = t23;
    COW_AT(1008630a)
            wr32(sp0 - 0x6c4u, (uint16_t)eax);
            d24 = fr(g, (double)(int32_t)(uint16_t)eax + (double)rdf32(COW_IMG(0x1032a3c8u)));
            d25 = (double)rdf32(sp0 - 0x6bcu);
            if (d24 < d25)
            {
                eax = (uint16_t)cow_fsw(g, d24, d25, 0u);
            }
            else
            {
                eax = (uint16_t)cow_fsw(g, d24, d25, 0u);
    COW_AT(1008632c)
                d26 = (double)rdf32(sp0 - 0x6a0u);
                if (!(d26 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10086349)
                    t28 = rd32(sp0 - 0x6a0u);
                    wr32(sp0 - 0x6bcu, t28);
                    edx = t28;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1008633d)
                    d27 = (double)(float)-(double)rdf32(sp0 - 0x6a0u);
                    wrf32(sp0 - 0x6bcu, (float)d27);
                }
    COW_AT(10086351)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x6d4u;
                t29 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
                t30 = g->ecx;
                t31 = g->edx;
                eax = t29;
                ecx = t30;
                edx = t31;
    COW_AT(10086356)
                wr32(sp0 - 0x6c4u, (uint16_t)eax);
                d32 = fr(g, (double)(int32_t)(uint16_t)eax + (double)rdf32(COW_IMG(0x1032a3c8u)));
                d33 = (double)rdf32(sp0 - 0x6bcu);
                if (d32 < d33)
                {
                    eax = (uint16_t)cow_fsw(g, d32, d33, 0u);
                }
                else
                {
                    eax = (uint16_t)cow_fsw(g, d32, d33, 0u);
    COW_AT(10086378)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x6d4u;
                    t34 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
                    t35 = g->ecx;
                    t36 = g->edx;
                    eax = t34;
                    ecx = t35;
                    edx = t36;
    COW_AT(1008637d)
                    wr32(sp0 - 0x6c4u, (uint16_t)eax);
                    d37 = fr(g, fr(g, (double)(int32_t)(uint16_t)eax * (double)rdf32(COW_IMG(0x1032ade0u))) * (double)rdf32(sp0 + 0xcu));
                    wrf32(sp0 - 0x688u, (float)(double)(float)d37);
                    g->eax = (uint16_t)eax;
                    g->ecx = ecx;
                    g->esp = sp0 - 0x6d4u;
                    t38 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
                    t39 = g->ecx;
                    eax = t38;
                    ecx = t39;
    COW_AT(100863a0)
                    wr32(sp0 - 0x6c4u, (uint16_t)eax);
                    edi = arg2;
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0u);
                    af = 0u;
                    zf = 1u;
                    sf = 0u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    t40 = ~ecx - 1u;
                    d41 = fr(g, fr(g, (double)(int32_t)(uint16_t)eax * (double)rdf32(COW_IMG(0x1032ade0u))) * (double)rdf32(sp0 + 0xcu));
                    wr32(sp0 - 0x6bcu, t40);
                    wrf32(sp0 - 0x684u, (float)(double)(float)d41);
                    if ((int32_t)(~ecx - 1u) <= 36)
                    {
                        ecx = t40;
                        loc_6c4 = (uint16_t)eax;
                        loc_6bc = t40;
                        loc_684_f = (double)(float)d41;
                    }
                    else
                    {
                        loc_6c4 = (uint16_t)eax;
                        loc_684_f = (double)(float)d41;
    COW_AT(100863d8)
                        wr32(sp0 - 0x6bcu, 0x24u);
                        ecx = 0x24u;
                        loc_6bc = 0x24u;
                    }
    COW_AT(100863e1)
                    wr32(sp0 - 0x690u, 0u);
                    if ((int32_t)ecx <= 0)
                    {
                        ebx = in_ebx;
                        ebp = 0u;
                        loc_690 = 0u;
                        goto L_10086462;
                    }
                    edx = 0u;
                    ebx = in_ebx;
                    ebp = 0u;
                    esi = 0u;
L_100863ef: ;
    COW_AT(100863ef)
                    if (rd8(arg2 + esi) < 0xc8u)
                    {
                        eax = (arg2 & 0xffffff00u) | rd8(arg2 + esi);
                        goto L_10086448;
                    }
                    eax = (arg2 & 0xffffff00u) | rd8(arg2 + esi);
    COW_AT(100863fd)
                    if ((uint8_t)eax > 0xcdu) goto L_10086448;
    COW_AT(10086401)
                    t42 = rd8(COW_IMG(0x1032d36cu) + (uint8_t)eax);
                    wr8(sp0 - 0x6c4u, rd8(COW_IMG(0x1032d374u) + (uint8_t)eax));
                    wr8(ebp + sp0 - 0x674u, (uint8_t)t42);
                    if ((int32_t)(uint8_t)rd32(sp0 - 0x6c4u) <= 0)
                    {
                        edx = (uint8_t)rd32(sp0 - 0x6c4u);
                        ebp = ebp + 1u;
                        loc_6c4 = rd32(sp0 - 0x6c4u);
                    }
                    else
                    {
                        edx = (uint8_t)rd32(sp0 - 0x6c4u);
                        ebp = ebp + 1u;
    COW_AT(10086427)
                        edi = ebp + sp0 - 0x674u;
                        eax = 0xaaaaaaaau;
                        ecx = edx >> 2u;
                        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        ecx = edx & 3u;
                        while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                        ecx = loc_6bc;
                        ebx = edx;
                        ebp = ebp + edx;
                        loc_6c4 = rd32(sp0 - 0x6c4u);
                    }
L_10086457: ;
    COW_AT(10086457)
                    if ((int32_t)(esi + 1u) < (int32_t)ecx)
                    {
                        esi = esi + 1u;
                        goto L_100863ef;
                    }
    COW_AT(1008645c)
                    wr32(sp0 - 0x690u, ebp);
                    loc_690 = ebp;
L_10086462: ;
    COW_AT(10086462)
                    wr32(sp0 - 0x6c0u, 0u);
                    wr32(sp0 - 0x694u, 0u);
                    if ((int32_t)ebp <= 0)
                    {
                        eax = 0u;
                        loc_694 = 0u;
                    }
                    else
                    {
    COW_AT(10086476)
                        wr32(sp0 - 0x6b8u, sp0 - 0x480u);
                        esi = sp0 - 0x610u;
                        edi = 0u;
                        loc_6c0 = 0u;
                        loc_694 = 0u;
                        loc_6b8 = sp0 - 0x480u;
L_10086488: ;
    COW_AT(10086488)
                        if (rd8(edi + sp0 - 0x674u) < 0x20u)
                        {
                            ebx = (ebx & 0xffffff00u) | rd8(edi + sp0 - 0x674u);
    COW_AT(1008657a)
                            wr16(esi, 0u);
                            wr16(esi + 2u, 0u);
                            wr16(edi * 2u + sp0 - 0x580u, 0u);
                            wr16(edi * 2u + sp0 - 0x538u, 0u);
                        }
                        else
                        {
                            ebx = (ebx & 0xffffff00u) | rd8(edi + sp0 - 0x674u);
    COW_AT(10086495)
                            t43 = edi * 2u + sp0 - 0x538u;
                            wr32(sp0 - 0x6d8u, t43);
                            t44 = edi * 2u + sp0 - 0x580u;
                            wr32(sp0 - 0x6dcu, t44);
                            wr32(sp0 - 0x6e0u, esi);
                            wr32(sp0 - 0x6e4u, loc_6b8);
                            wr32(sp0 - 0x6e8u, ebx);
                            g->edx = t43;
                            g->esp = sp0 - 0x6d4u;
                            cow_thiscall(g, COW_IMG(0x10120510u), COW_IMG(0x104e1bf8u), 5, ebx, loc_6b8, esi, t44, t43);
                            t45 = g->ecx;
                            t46 = g->edx;
                            ecx = t45;
                            edx = t46;
                            loc_6b8 = rd32(sp0 - 0x6b8u);
    COW_AT(100864b6)
                            if (edi == 0u) goto L_1008656c;
    COW_AT(100864be)
                            if ((uint8_t)ebx < 0x8eu) goto L_10086510;
    COW_AT(100864c3)
                            if ((uint8_t)ebx > 0xa8u) goto L_10086510;
    COW_AT(100864c8)
                            wr32(sp0 - 0x6c4u, (uint32_t)(int16_t)rd16(esi));
                            t47 = rd32(sp0 - 0x6c0u) + (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi) - (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(esi) >> 0x1fu)) >> 1u);
                            d48 = fr(g, (double)(int32_t)(uint32_t)(int16_t)rd16(esi) * (double)rdf32(COW_IMG(0x10329a34u)));
                            wr32(sp0 - 0x6c0u, t47);
                            g->ecx = t47;
                            t49 = rd16(esi);
                            fpush(g, d48);
                            g->esp = sp0 - 0x6d4u;
                            t50 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)((int32_t)((uint32_t)(int16_t)t49 - (uint32_t)((int32_t)(uint32_t)(int16_t)t49 >> 0x1fu)) >> 1u), g->ecx, g->edx, 1, 0);
                            t51 = g->ecx;
                            eax = t50;
                            ecx = t51;
                            loc_6b8 = rd32(sp0 - 0x6b8u);
    COW_AT(100864ed)
                            t52 = (uint32_t)(int16_t)rd16(esi + 2u);
                            wr32(sp0 - 0x6c4u, t52);
                            wr16(esi, (uint16_t)eax);
                            d53 = fr(g, (double)(int32_t)t52 * (double)rdf32(COW_IMG(0x10329a34u)));
                            fpush(g, d53);
                            g->esp = sp0 - 0x6d4u;
                            t54 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                            eax = t54;
                            loc_6b8 = rd32(sp0 - 0x6b8u);
    COW_AT(10086507)
                            wr16(esi + 2u, (uint16_t)eax);
                            loc_6c0 = rd32(sp0 - 0x6c0u);
                            loc_684_f = (double)rdf32(sp0 - 0x684u);
                            loc_690 = rd32(sp0 - 0x690u);
                            loc_694 = rd32(sp0 - 0x694u);
                        }
L_10086591: ;
    COW_AT(10086591)
                        wr32(sp0 - 0x6b8u, loc_6b8 + 0x20u);
                        if ((int32_t)(edi + 1u) < (int32_t)ebp)
                        {
                            esi = esi + 4u;
                            edi = edi + 1u;
                            loc_6b8 = loc_6b8 + 0x20u;
                            goto L_10086488;
                        }
    COW_AT(100865aa)
                        eax = loc_6c0;
                    }
    COW_AT(100865ae)
                    wr32(sp0 - 0x6c4u, -eax);
                    d66 = fr(g, (double)(int32_t)-eax * (double)rdf32(COW_IMG(0x10329a08u)));
                    wrf32(sp0 - 0x6c4u, (float)(double)(float)d66);
                    wr32(sp0 - 0x6b8u, cow_f2bits((double)(float)d66));
                    if ((int32_t)ebp <= 0)
                    {
                        eax = -eax;
                        edx = 0u;
                    }
                    else
                    {
                        loc_6c4_f = (double)(float)d66;
                        loc_6b8 = cow_f2bits((double)(float)d66);
    COW_AT(100865d4)
                        wr32(sp0 - 0x6bcu, sp0 - 0x47cu);
                        eax = sp0 - 0x47cu;
                        ebx = 0u;
                        loc_6bc = sp0 - 0x47cu;
L_100865e3: ;
    COW_AT(100865e3)
                        if (rd8(ebx + sp0 - 0x674u) == 0xau)
                        {
                            eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x674u);
                            loc_694 = rd32(sp0 - 0x694u);
                            goto L_100868bd;
                        }
                        eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x674u);
                        loc_694 = rd32(sp0 - 0x694u);
    COW_AT(100865ef)
                        if (ebx == 0u) goto L_10086669;
    COW_AT(100865f3)
                        if ((uint8_t)eax < 0x8eu) goto L_10086635;
    COW_AT(100865f7)
                        if ((uint8_t)eax > 0xa8u) goto L_10086635;
    COW_AT(100865fb)
                        t67 = (uint32_t)(int16_t)rd16(ebx * 4u + sp0 - 0x610u);
                        wr32(sp0 - 0x6c0u, t67);
                        t68 = -(uint32_t)((int32_t)(t67 - (uint32_t)((int32_t)t67 >> 0x1fu)) >> 1u);
                        wr32(sp0 - 0x6a8u, t68);
                        t69 = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(ebx * 4u + sp0 - 0x60eu) - (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(ebx * 4u + sp0 - 0x60eu) >> 0x1fu)) >> 1u);
                        d70 = fr(g, (double)(int32_t)t67 * (double)rdf32(COW_IMG(0x1032d444u)));
                        wr32(sp0 - 0x6b4u, t69);
                        loc_6c0 = t67;
                        loc_6a8 = t68;
                        loc_6b4 = t69;
                        x1 = d70;
                        x0 = (double)rdf32(COW_IMG(0x10329a34u));
L_100866a8: ;
    COW_AT(100866a8)
                        t74 = (uint32_t)(int16_t)rd16(ebx * 2u + sp0 - 0x580u);
                        wr32(sp0 - 0x6acu, t74);
                        t75 = (uint32_t)(int16_t)rd16(ebx * 2u + sp0 - 0x538u);
                        wr32(sp0 - 0x6acu, t75);
                        t76 = (uint32_t)(int16_t)rd16(ebx * 4u + sp0 - 0x60eu);
                        wr32(sp0 - 0x6acu, t76);
                        d77 = (double)(float)fr(g, fr(g, (double)(int32_t)t75 + (double)(int32_t)loc_6b4) + cow_bits2f(loc_694));
                        wrf32(sp0 - 0x6b4u, (float)d77);
                        wr32(COW_IMG(0x103582e4u), cow_f2bits(d77));
                        wr32(COW_IMG(0x103582f0u), cow_f2bits(d77));
                        d78 = (double)(float)fr(g, (double)(int32_t)t76 * x0);
                        wrf32(sp0 - 0x6acu, (float)d78);
                        d79 = fr(g, fr(g, (double)(int32_t)t74 + (double)(int32_t)loc_6a8) + cow_bits2f(loc_6b8));
                        wrf32(COW_IMG(0x103582e0u), (float)d79);
                        wrf32(COW_IMG(0x103582ecu), (float)fr(g, fr(g, (double)(int32_t)loc_6c0 * x0) + d79));
                        wrf32(COW_IMG(0x103582f8u), (float)d79);
                        wrf32(COW_IMG(0x10358304u), (float)fr(g, fr(g, (double)(int32_t)loc_6c0 * x0) + d79));
                        wrf32(COW_IMG(0x103582fcu), (float)fr(g, d78 + d77));
                        wrf32(COW_IMG(0x10358308u), (float)fr(g, d78 + d77));
                        d80 = (double)(float)fr(g, x1 + cow_bits2f(loc_6b8));
                        wrf32(sp0 - 0x6b8u, (float)d80);
                        ebp = loc_6bc;
                        esi = sp0 - 0x4e8u;
                        edi = COW_IMG(0x103582e4u);
                        loc_6b8_f = d80;
L_10086756: ;
    COW_AT(10086756)
                        d81 = fr(g, (double)rdf32(sp0 - 0x688u) * (double)rdf32(edi - 4u));
                        wr32(sp0 - 0x6d8u, sp0 - 0x680u);
                        wr32(sp0 - 0x6dcu, sp0 - 0x6a4u);
                        wr32(sp0 - 0x6e0u, esi - 8u);
                        wrf32(sp0 - 0x680u, (float)(double)(float)d81);
                        d82 = fr(g, loc_684_f * (double)rdf32(edi));
                        wrf32(sp0 - 0x67cu, (float)(double)(float)d82);
                        g->esp = sp0 - 0x6d4u;
                        cow_cdecl(g, COW_IMG(0x10026fd0u), 3, esi - 8u, sp0 - 0x6a4u, sp0 - 0x680u);
                        loc_6bc = rd32(sp0 - 0x6bcu);
    COW_AT(1008677e)
                        t83 = rd32(sp0 - 0x68cu);
                        t84 = rd32(ebp - 4u);
                        t85 = rd32(ebp);
                        wr32(esi, t83);
                        wr32(esi + 4u, 0x3f800000u);
                        wr32(esi + 0xcu, t84);
                        wr32(esi + 0x10u, t85);
                        if ((int32_t)(edi + 0xcu) < (int32_t)COW_IMG(0x10358314u))
                        {
                            ebp = ebp + 8u;
                            esi = esi + 0x1cu;
                            edi = edi + 0xcu;
                            loc_6c4_f = (double)rdf32(sp0 - 0x6c4u);
                            loc_684_f = (double)rdf32(sp0 - 0x684u);
                            loc_690 = rd32(sp0 - 0x690u);
                            loc_694 = rd32(sp0 - 0x694u);
                            loc_6b8_f = (double)rdf32(sp0 - 0x6b8u);
                            goto L_10086756;
                        }
    COW_AT(100867ab)
                        wr32(sp0 - 0x6b0u, arg4);
                        wr32(sp0 - 0x6d8u, sp0 + 0x14u);
                        wr32(sp0 - 0x6dcu, sp0 - 0x6b0u);
                        t86 = rd8(ebx + sp0 - 0x674u);
                        wr32(sp0 - 0x6e0u, t86);
                        g->eax = t86;
                        g->esp = sp0 - 0x6d4u;
                        t87 = cow_fastcall(g, COW_IMG(0x10120590u), COW_IMG(0x104e1bf8u), sp0 - 0x6b0u, 3, t86, sp0 - 0x6b0u, sp0 + 0x14u);
                        t88 = g->edx;
                        eax = t87;
                        edx = t88;
                        loc_6bc = rd32(sp0 - 0x6bcu);
    COW_AT(100867d7)
                        if ((uint8_t)eax == 0u) goto L_100868e7;
    COW_AT(100867df)
                        if (arg4 != rd32(sp0 + 0x14u))
                        {
    COW_AT(1008682e)
                            wr32(sp0 - 0x6d8u, 0u);
                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            edx = rd32(COW_IMG(0x1045666cu));
                            loc_6d8 = 0u;
                            loc_6b0 = arg4;
                        }
                        else
                        {
                            eax = rd32(sp0 + 0x14u);
    COW_AT(100867ee)
                            if (rd8(ebx + sp0 - 0x674u) != 0x92u)
                            {
    COW_AT(100867f5)
                                eax = 0x80808080u;
                            }
    COW_AT(100867fa)
                            wr32(sp0 - 0x6b0u, eax);
                            t89 = ((uint8_t)eax | 0xffff8000u) << 0x10u | (uint8_t)(eax >> 0x10u) | (eax & 0xff00u);
                            wr32(sp0 - 0x6b0u, t89);
                            wr32(sp0 - 0x6d8u, 0x60u);
                            edx = (uint8_t)(eax >> 0x10u);
                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            loc_6d8 = 0x60u;
                            loc_6b0 = t89;
                        }
    COW_AT(10086839)
                        wr32(sp0 - 0x6dcu, 0x18u);
                        wr32(sp0 - 0x6e0u, eax);
                        g->esp = sp0 - 0x6d4u;
                        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x18u, loc_6d8);
                        loc_6bc = rd32(sp0 - 0x6bcu);
    COW_AT(10086844)
                        wr32(sp0 - 0x6d8u, 1u);
                        wr32(sp0 - 0x6dcu, 0x1bu);
                        t90 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x6e0u, t90);
                        g->esp = sp0 - 0x6d4u;
                        cow_thiscall(g, rd32(rd32(t90) + 0xc8u), rd32(t90), 3, t90, 0x1bu, 1u);
                        loc_6bc = rd32(sp0 - 0x6bcu);
    COW_AT(1008685a)
                        eax = sp0 - 0x4e0u;
                        ecx = 4u;
                        edx = rd32(sp0 - 0x6b0u);
L_1008686a: ;
    COW_AT(1008686a)
                        wr32(eax, edx);
                        if (ecx != 1u)
                        {
                            eax = eax + 0x1cu;
                            ecx = ecx - 1u;
                            goto L_1008686a;
                        }
    COW_AT(10086872)
                        wr32(sp0 - 0x6d8u, 0x144u);
                        t91 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x6dcu, t91);
                        g->eax = t91;
                        g->esp = sp0 - 0x6d4u;
                        t92 = cow_thiscall(g, rd32(rd32(t91) + 0x130u), rd32(t91), 2, t91, 0x144u);
                        eax = t92;
                        loc_6bc = rd32(sp0 - 0x6bcu);
    COW_AT(10086889)
                        wr32(sp0 - 0x6d8u, 0x1cu);
                        wr32(sp0 - 0x6dcu, sp0 - 0x4f0u);
                        wr32(sp0 - 0x6e0u, 2u);
                        wr32(sp0 - 0x6e4u, 5u);
                        g->ebx = ebx;
                        g->edx = sp0 - 0x4f0u;
                        g->esp = sp0 - 0x6d4u;
                        cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x4f0u, 0x1cu);
                        t93 = g->edx;
                        edx = t93;
                        loc_6bc = rd32(sp0 - 0x6bcu);
    COW_AT(100868a2)
                        wr32(sp0 - 0x6d8u, 0u);
                        wr32(sp0 - 0x6dcu, 0x18u);
                        t94 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x6e0u, t94);
                        g->eax = t94;
                        g->edx = edx;
                        g->esp = sp0 - 0x6d4u;
                        t95 = cow_thiscall(g, rd32(rd32(t94) + 0xc8u), rd32(t94), 3, t94, 0x18u, 0u);
                        t96 = g->edx;
                        eax = t95;
                        edx = t96;
                        loc_6bc = rd32(sp0 - 0x6bcu);
    COW_AT(100868b7)
                        ebp = rd32(sp0 - 0x690u);
                        loc_6c4_f = (double)rdf32(sp0 - 0x6c4u);
                        loc_684_f = (double)rdf32(sp0 - 0x684u);
                        loc_690 = rd32(sp0 - 0x690u);
                        loc_694_f = (double)rdf32(sp0 - 0x694u);
                        loc_6b8 = rd32(sp0 - 0x6b8u);
L_100868d3: ;
    COW_AT(100868d3)
                        wr32(sp0 - 0x6bcu, loc_6bc + 0x20u);
                        if ((int32_t)(ebx + 1u) < (int32_t)ebp)
                        {
                            ebx = ebx + 1u;
                            loc_6bc = loc_6bc + 0x20u;
                            goto L_100865e1;
                        }
                    }
                }
            }
        }
    }
L_100868e7: ;
    COW_AT(100868e7)
    g->esp = sp0 - 0x6d4u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(100868f3)
    g->ebx = rd32(sp0 - 0x6c8u);
    g->esi = rd32(sp0 - 0x6d0u);
    g->edi = rd32(sp0 - 0x6d4u);
    g->ebp = rd32(sp0 - 0x6ccu);
    return;
L_10086448: ;
    COW_AT(10086448)
    wr8(ebp + sp0 - 0x674u, (uint8_t)eax);
    if ((uint8_t)eax != 0xacu)
    {
        ebp = ebp + 1u;
    }
    else
    {
        ebp = ebp + 1u;
    COW_AT(10086451)
        wr8(ebp + sp0 - 0x674u, 0xadu);
        ebp = ebp + 1u;
    }
    goto L_10086457;
L_10086510: ;
    COW_AT(10086510)
    if ((uint8_t)ebx != 0xaau) goto L_1008656c;
    COW_AT(10086515)
    wr32(sp0 - 0x6c4u, (uint32_t)(int16_t)rd16(esi));
    g->edx = edx;
    t55 = rd16(esi);
    d56 = fr(g, (double)(int32_t)(uint32_t)(int16_t)rd16(esi) * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d56);
    g->esp = sp0 - 0x6d4u;
    t57 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t55, g->ecx, g->edx, 1, 0);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    loc_6b8 = rd32(sp0 - 0x6b8u);
    COW_AT(1008652b)
    t59 = (uint32_t)(int16_t)rd16(esi + 2u);
    wr32(sp0 - 0x6c4u, t59);
    wr16(esi, (uint16_t)eax);
    g->ecx = t59;
    d60 = fr(g, (double)(int32_t)t59 * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d60);
    g->esp = sp0 - 0x6d4u;
    t61 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t62 = g->ecx;
    ecx = t62;
    ebx = (ebx & 0xffff0000u) | (uint16_t)eax;
    eax = t61;
    loc_6b8 = rd32(sp0 - 0x6b8u);
    COW_AT(10086548)
    wr32(sp0 - 0x6c4u, (uint32_t)(int16_t)ebx);
    wr16(esi + 2u, (uint16_t)eax);
    d63 = fr(g, fr(g, (double)(int32_t)(uint32_t)(int16_t)ebx * (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)rd32(sp0 - 0x6c0u));
    fpush(g, d63);
    g->esp = sp0 - 0x6d4u;
    t64 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t64;
    loc_6b8 = rd32(sp0 - 0x6b8u);
    COW_AT(10086566)
    wr32(sp0 - 0x6c0u, eax);
    loc_6c0 = eax;
    loc_684_f = (double)rdf32(sp0 - 0x684u);
    loc_690 = rd32(sp0 - 0x690u);
    loc_694 = rd32(sp0 - 0x694u);
    goto L_10086591;
L_1008656c: ;
    COW_AT(1008656c)
    if ((uint8_t)ebx == 0xadu)
    {
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_684_f = (double)rdf32(sp0 - 0x684u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_694 = rd32(sp0 - 0x694u);
    }
    else
    {
    COW_AT(10086571)
        t65 = (uint32_t)(int16_t)rd16(esi) + rd32(sp0 - 0x6c0u);
        wr32(sp0 - 0x6c0u, t65);
        loc_6c0 = t65;
        loc_684_f = (double)rdf32(sp0 - 0x684u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_694 = rd32(sp0 - 0x694u);
    }
    goto L_10086591;
L_100865e1: ;
    COW_AT(100865e1)
    goto L_100865e3;
L_10086635: ;
    COW_AT(10086635)
    if ((uint8_t)eax != 0xaau) goto L_10086669;
    COW_AT(10086639)
    t71 = (uint32_t)(int16_t)rd16(ebx * 4u + sp0 - 0x610u);
    wr32(sp0 - 0x6c0u, t71);
    t72 = (uint32_t)(int16_t)rd16(ebx * 4u + sp0 - 0x60eu);
    wr32(sp0 - 0x6b4u, t72);
    wr32(sp0 - 0x6a8u, -t71);
    loc_6c0 = t71;
    loc_6a8 = -t71;
    loc_6b4 = t72;
    x1 = fr(g, (double)(int32_t)t71 * (double)rdf32(COW_IMG(0x10329a08u)));
    x0 = (double)rdf32(COW_IMG(0x1032961cu));
    goto L_100866a8;
L_10086669: ;
    COW_AT(10086669)
    t73 = (uint32_t)(int16_t)rd16(ebx * 4u + sp0 - 0x610u);
    wr32(sp0 - 0x6c0u, t73);
    if ((uint8_t)eax != 0xadu)
    {
        loc_6c0 = t73;
    COW_AT(10086696)
        wr32(sp0 - 0x6b4u, 0u);
        edx = 0u;
        loc_6b4 = 0u;
        x1 = (double)(int32_t)loc_6c0;
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    else
    {
        eax = t73;
        loc_6c0 = t73;
    COW_AT(10086679)
        wr32(sp0 - 0x6b4u, 0xfffffffeu);
        edx = 0xfffffffeu - eax;
        loc_6b4 = 0xfffffffeu;
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
        x0 = (double)rdf32(COW_IMG(0x10329a08u));
    }
    COW_AT(100866a4)
    wr32(sp0 - 0x6a8u, edx);
    loc_6a8 = edx;
    goto L_100866a8;
L_100868bd: ;
    COW_AT(100868bd)
    d97 = fr(g, cow_bits2f(loc_694) + (double)rdf32(COW_IMG(0x1032a40cu)));
    wr32(sp0 - 0x6b8u, cow_f2bits(loc_6c4_f));
    wrf32(sp0 - 0x694u, (float)(double)(float)d97);
    edx = cow_f2bits(loc_6c4_f);
    loc_694_f = (double)(float)d97;
    loc_6b8 = cow_f2bits(loc_6c4_f);
    goto L_100868d3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10086210(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10086226u:
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
        in_edi = rd32(sp0 - 0x6d4u);
        in_esi = rd32(sp0 - 0x6d0u);
        in_ebp = rd32(sp0 - 0x6ccu);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6c8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10086252u:
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
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6a4u, 0u);
        wr32(sp0 - 0x6a0u, 0u);
        wr32(sp0 - 0x69cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10086266u:
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
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x1008627eu:
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
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6d8u, sp0 - 0x650u);
        (void)sp0;
        return 1;
    }
    case 0x1008628du:
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
        g->esp = sp0 - 0x6dcu;
        wr32(sp0 - 0x6dcu, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100862afu:
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
        uint32_t loc_68c;
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
        loc_68c = rd32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100862c4u:
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
        uint32_t loc_68c;
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
        loc_68c = rd32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100862ceu:
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
        g->esp = sp0 - 0x6d8u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100862ddu:
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
        g->esp = sp0 - 0x6e0u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100862f1u:
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
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100862fdu:
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
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086305u:
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
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x1008630au:
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
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x1008632cu:
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
        uint32_t loc_6c4;
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
        loc_6c4 = rd32(sp0 - 0x6c4u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x1008633du:
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
        uint32_t loc_6c4;
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
        loc_6c4 = rd32(sp0 - 0x6c4u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086349u:
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
        uint32_t loc_6c4;
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
        loc_6c4 = rd32(sp0 - 0x6c4u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086351u:
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
        uint32_t loc_6c4;
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
        loc_6c4 = rd32(sp0 - 0x6c4u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086356u:
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
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086378u:
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
        uint32_t loc_6c4;
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
        loc_6c4 = rd32(sp0 - 0x6c4u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x1008637du:
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
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100863a0u:
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
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100863d8u:
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
        double loc_684_f;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
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
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100863e1u:
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
        double loc_684_f;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
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
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100863efu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x100863fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086401u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086427u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086448u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086451u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086457u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x1008645cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086462u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
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
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        (void)sp0;
        return 1;
    }
    case 0x10086476u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6bc;
        uint32_t loc_6c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x6e0u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x6a4u);
        wr32(sp0 - 0x6c0u, 0u);
        wr32(sp0 - 0x694u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10086488u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        uint32_t loc_6c4;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10086495u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        uint32_t loc_6c4;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100864b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100864beu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100864c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100864c8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100864edu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086507u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086510u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086515u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x1008652bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086548u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086566u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x1008656cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086571u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x1008657au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        uint32_t loc_6c4;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10086591u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        uint32_t loc_6c4;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100865aau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        uint32_t loc_6c4;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100865aeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        uint32_t loc_6c4;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100865d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100865e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        double loc_694_f;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100865e3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100865efu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100865f3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100865f7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100865fbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086635u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10086639u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086669u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10086679u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086696u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
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
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100866a4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        double x1;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100866a8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        double x1;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086756u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6a8;
        double loc_6b8_f;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8_f = rdf32(sp0 - 0x6b8u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x1008677eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6e0u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x680u);
        (void)sp0;
        return 1;
    }
    case 0x100867abu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6a4u);
        wr32(sp0 - 0x6d8u, sp0 - 0x680u);
        (void)sp0;
        return 1;
    }
    case 0x100867d7u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 + 0x14u);
        wr32(sp0 - 0x6b0u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x100867dfu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 + 0x14u);
        wr32(sp0 - 0x6b0u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x100867eeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b0;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x100867f5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b0;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x100867fau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b0;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1008682eu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 + 0x14u);
        wr32(sp0 - 0x6b0u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x10086839u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6b0;
        uint32_t loc_6bc;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        g->esp = sp0 - 0x6d8u;
        wr32(sp0 - 0x6dcu, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x10086844u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x1008685au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x1008686au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086872u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x10086889u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100868a2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        wr32(sp0 - 0x6dcu, sp0 - 0x4f0u);
        (void)sp0;
        return 1;
    }
    case 0x100868b7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6bc;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100868bdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        uint32_t loc_694;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694 = rd32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100868d3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_690;
        double loc_694_f;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        double loc_6c4_f;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c4_f = rdf32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100868e7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_684_f;
        uint32_t loc_68c;
        uint32_t loc_690;
        uint32_t loc_6b0;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        uint32_t loc_6d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6d8 = rd32(sp0 - 0x6d8u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b0 = rd32(sp0 - 0x6b0u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684_f = rdf32(sp0 - 0x684u);
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    case 0x100868f3u:
    {
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
        g->esp = sp0 - 0x6d4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10086210(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10086210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
