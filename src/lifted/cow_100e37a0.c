/* f_0x100e37a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e37a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_138;
    uint32_t loc_140;
    uint32_t loc_144;
    uint32_t loc_148;
    uint32_t loc_14c;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 360u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e37afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); in_ebp = rd32(sp0 - 0x128u); in_ebx = rd32(sp0 - 0x124u); g->ebp = rd32(sp0 - 0x128u); g->ebx = rd32(sp0 - 0x124u); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_100e37af;
    case 0x100e37e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_100e37e3;
    case 0x100e37f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); loc_11c = rd32(sp0 - 0x11cu); goto E_100e37f5;
    case 0x100e3801u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); loc_11c = rd32(sp0 - 0x11cu); goto E_100e3801;
    case 0x100e3828u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_100e3828;
    case 0x100e383au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e383a;
    case 0x100e3871u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_100e3871;
    case 0x100e3875u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_100e3875;
    case 0x100e388bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_100e388b;
    case 0x100e38a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e38a0;
    case 0x100e38b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_100e38b9;
    case 0x100e38c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_100e38c3;
    case 0x100e38d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_100e38d4;
    case 0x100e38e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_100e38e2;
    case 0x100e38e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_100e38e8;
    case 0x100e38f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e38f2;
    case 0x100e38feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_100e38fe;
    case 0x100e3908u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3908;
    case 0x100e3913u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3913;
    case 0x100e3922u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3922;
    case 0x100e3931u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3931;
    case 0x100e393cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e393c;
    case 0x100e3940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3940;
    case 0x100e394cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_100e394c;
    case 0x100e3968u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_140 = rd32(sp0 - 0x140u); goto E_100e3968;
    case 0x100e3992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3992;
    case 0x100e39a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e39a6;
    case 0x100e39b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e39b5;
    case 0x100e39ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e39ce;
    case 0x100e39e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e39e7;
    case 0x100e3a12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_100e3a12;
    case 0x100e3a1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3a1a;
    case 0x100e3a32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3a32;
    case 0x100e3a5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_148 = rd32(sp0 - 0x148u); goto E_100e3a5a;
    case 0x100e3a62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3a62;
    case 0x100e3a67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3a67;
    case 0x100e3a6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3a6a;
    case 0x100e3a71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3a71;
    case 0x100e3a78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3a78;
    case 0x100e3a7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3a7d;
    case 0x100e3a84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3a84;
    case 0x100e3acau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3aca;
    case 0x100e3ad2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3ad2;
    case 0x100e3b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3b00;
    case 0x100e3b08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3b08;
    case 0x100e3b31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_140 = rd32(sp0 - 0x140u); goto E_100e3b31;
    case 0x100e3b3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_140 = rd32(sp0 - 0x140u); goto E_100e3b3c;
    case 0x100e3b46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3b46;
    case 0x100e3b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3b56;
    case 0x100e3b7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_140 = rd32(sp0 - 0x140u); goto E_100e3b7f;
    case 0x100e3b8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_140 = rd32(sp0 - 0x140u); goto E_100e3b8a;
    case 0x100e3b91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3b91;
    case 0x100e3ba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3ba1;
    case 0x100e3bb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3bb4;
    case 0x100e3be8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3be8;
    case 0x100e3bf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3bf0;
    case 0x100e3c04u: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); goto E_100e3c04;
    case 0x100e3c19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3c19;
    case 0x100e3c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3c21;
    case 0x100e3c4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_140 = rd32(sp0 - 0x140u); goto E_100e3c4b;
    case 0x100e3c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3c53;
    case 0x100e3c60u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3c60;
    case 0x100e3c85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_140 = rd32(sp0 - 0x140u); goto E_100e3c85;
    case 0x100e3c8du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3c8d;
    case 0x100e3ca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3ca8;
    case 0x100e3cb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3cb7;
    case 0x100e3cc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3cc6;
    case 0x100e3cd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3cd6;
    case 0x100e3cf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3cf1;
    case 0x100e3d10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_100e3d10;
    case 0x100e3d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_100e3d17;
    case 0x100e3d21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3d21;
    case 0x100e3d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3d31;
    case 0x100e3d3bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3d3b;
    case 0x100e3d4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3d4a;
    case 0x100e3d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_14c = rd32(sp0 - 0x14cu); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3d4b;
    case 0x100e3d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e3d50;
    case 0x100e3d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_14c = rd32(sp0 - 0x14cu); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3d53;
    case 0x100e3d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_14c = rd32(sp0 - 0x14cu); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3d57;
    case 0x100e3d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_14c = rd32(sp0 - 0x14cu); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_100e3d64;
    default: break;
    }
#endif

    COW_AT(100e37a0)
    wr32(sp0 - 0x124u, in_ebx);
    wr32(sp0 - 0x128u, in_ebp);
    wr32(sp0 - 0x12cu, in_esi);
    wr32(sp0 - 0x130u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x130u;
    t1 = cow_stdcall(g, COW_IMG(0x100e3730u), 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100e37af)
    wr8(sp0 - 0x118u, 0u);
    wr8(sp0 - 0xfcu, (uint16_t)eax != 0u);
    t3 = rd16(arg3);
    wr8(sp0 - 0xf8u, 0u);
    wr32(sp0 - 0x134u, t3 >> 9u);
    wr32(sp0 - 0x138u, 0x18u);
    wr8(sp0 - 0x28u, 0u);
    g->eax = (eax & 0xffffff00u) | (uint16_t)eax != 0u;
    g->esp = sp0 - 0x130u;
    t4 = cow_cdecl(g, COW_IMG(0x100dddb0u), 2, 0x18u, t3 >> 9u);
    eax = t4;
    COW_AT(100e37e3)
    wr32(sp0 - 0x11cu, eax + 1u);
    if ((int32_t)(eax + 1u) <= 150)
    {
        edx = eax + 1u;
        loc_11c = eax + 1u;
    }
    else
    {
    COW_AT(100e37f5)
        wr32(sp0 - 0x11cu, 0x96u);
        edx = 0x96u;
        loc_11c = 0x96u;
    }
    COW_AT(100e3801)
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0u);
    wr32(sp0 - 0x100u, 0u);
    if ((rd8(arg3 + 5u) & 8u) == 0u)
    {
        eax = arg3 + 0x17u;
        ebx = 0u;
        loc_120 = 0u;
    }
    else
    {
        ecx = rd8(arg3 + 5u);
    COW_AT(100e3828)
        wr32(sp0 - 0x114u, arg3 + 0x17u);
        wr32(sp0 - 0x134u, sp0 - 0x18u);
        wr32(sp0 - 0x138u, arg3 + 0x17u);
        g->eax = arg3 + 0x17u;
        g->esp = sp0 - 0x130u;
        t5 = cow_cdecl(g, COW_IMG(0x100fd910u), 2, arg3 + 0x17u, sp0 - 0x18u);
        eax = t5;
    COW_AT(100e383a)
        t6 = rd32(sp0 - 0x16u);
        wr32(sp0 - 0x120u, t6);
        t7 = rd32(sp0 - 0x11cu);
        t8 = rd32(sp0 - 0x18u);
        esi = sp0 - 0x14u;
        edi = sp0 - 0x110u;
        ecx = 5u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t9 = t7 + rd32(sp0 - 0x114u) - eax;
        wr32(sp0 - 0x11cu, t9);
        edx = t9;
        ebx = t8;
        loc_11c = t9;
        loc_120 = t6;
    }
    COW_AT(100e3871)
    if (edx != 0u)
    {
    COW_AT(100e3875)
        esi = eax;
        edi = sp0 - 0xc0u;
        ecx = edx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = edx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        eax = edx;
    }
    COW_AT(100e388b)
    wr8(edx + sp0 - 0xc0u, 0u);
    wr32(sp0 - 0x134u, 0xfu);
    wr32(sp0 - 0x138u, arg3 + 8u);
    wr32(sp0 - 0x13cu, sp0 - 0xd0u);
    g->edx = sp0 - 0xd0u;
    g->esp = sp0 - 0x130u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0xd0u, arg3 + 8u, 0xfu);
    t10 = g->edx;
    edx = t10;
    COW_AT(100e38a0)
    wr32(sp0 - 0x140u, sp0 - 0xd0u);
    wr32(sp0 - 0x144u, 0x16u);
    wr32(sp0 - 0x148u, sp0 - 0xe8u);
    wr8(sp0 - 0xc1u, 0u);
    g->ebx = ebx;
    g->eax = sp0 - 0xd0u;
    g->ecx = sp0 - 0xe8u;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t11 = cow_cdecl(g, COW_IMG(0x100da580u), 3, sp0 - 0xe8u, 0x16u, sp0 - 0xd0u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(100e38b9)
    if (!(rd8(arg3 + 5u) & 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 5u);
        goto L_100e38e2;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 5u);
    COW_AT(100e38c3)
    wr32(sp0 - 0x134u, 0x10u);
    wr32(sp0 - 0x138u, COW_IMG(0x10361e04u));
    wr32(sp0 - 0x13cu, sp0 - 0xf8u);
    g->ecx = ecx;
    g->edx = sp0 - 0xf8u;
    g->esp = sp0 - 0x130u;
    t14 = cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0xf8u, COW_IMG(0x10361e04u), 0x10u);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(100e38d4)
    if (rd8(arg3 + 5u) & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 5u);
        goto L_100e3992;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 5u);
L_100e38e2: ;
    COW_AT(100e38e2)
    if (rd8(arg3 + 4u) == 0x19u) goto L_100e38fe;
    COW_AT(100e38e8)
    wr32(sp0 - 0x134u, sp0 - 0xd0u);
    g->eax = sp0 - 0xd0u;
    g->edx = edx;
    g->esp = sp0 - 0x130u;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), ecx, 1, sp0 - 0xd0u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(100e38f2)
    if (eax == 1u) goto L_100e3d64;
L_100e38fe: ;
    COW_AT(100e38fe)
    if (rd8(arg3 + 5u) & 1u) goto L_100e3992;
    COW_AT(100e3908)
    if (rd8(arg3 + 4u) - 1u > 0x22u)
    {
        eax = rd8(arg3 + 4u) - 1u;
        goto L_100e3992;
    }
    eax = rd8(arg3 + 4u) - 1u;
    COW_AT(100e3913)
    t19 = rd32(COW_IMG(0x100e3d74u) + rd8(COW_IMG(0x100e3d7cu) + eax) * 4u);
    switch (t19 - RD)
    {
    case 0x100e3922u: ecx = rd8(COW_IMG(0x100e3d7cu) + eax); goto L_100e3922;
    case 0x100e3992u: goto L_100e3992;
    default: rt_fatal(g, COW_IMG(0x100e391bu), "switch");
    }
    return 0;
L_100e3922: ;
    COW_AT(100e3922)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, sp0 - 0xd0u);
    g->ecx = ecx;
    g->edx = sp0 - 0xc0u;
    g->esp = sp0 - 0x130u;
    t20 = cow_call_regs(g, COW_IMG(0x100da5e0u), sp0 - 0xd0u, g->ecx, g->edx, 1, 2, sp0 - 0xd0u, sp0 - 0xc0u);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(100e3931)
    if ((uint8_t)eax == 1u) goto L_100e3d64;
    COW_AT(100e393c)
    if ((uint8_t)eax == 2u)
    {
    COW_AT(100e3940)
        wr32(sp0 - 0x134u, 0x159u);
        wr32(sp0 - 0x138u, 9u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t23 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x159u);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    COW_AT(100e394c)
        wr32(sp0 - 0x13cu, 0x159u);
        edi = eax;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0x140u, 9u);
        t26 = ~ecx - 1u;
        wr32(sp0 - 0x114u, t26);
        g->eax = eax;
        g->esp = sp0 - 0x138u;
        t27 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x159u);
        eax = t27;
    COW_AT(100e3968)
        t28 = rd32(sp0 - 0x114u);
        esi = eax;
        edi = sp0 - 0xc0u;
        ecx = t28 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr8(sp0 - 0x118u, 1u);
        ecx = t28 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(sp0 + t28 - 0xc0u, 0u);
        eax = t28;
        edx = t28;
    }
L_100e3992: ;
    COW_AT(100e3992)
    t29 = (eax & 0xffffff00u) | rd8(arg3 + 4u);
    if ((uint8_t)t29 > 0x23u)
    {
        eax = t29;
        goto L_100e3d64;
    }
    eax = t29;
    esi = (uint8_t)t29;
    COW_AT(100e39a6)
    t30 = rd32(COW_IMG(0x100e3da0u) + rd8(COW_IMG(0x100e3de8u) + esi) * 4u);
    switch (t30 - RD)
    {
    case 0x100e39b5u: goto L_100e39b5;
    case 0x100e39ceu: goto L_100e39ce;
    case 0x100e39e7u: goto L_100e39e7;
    case 0x100e3a1au: goto L_100e3a1a;
    case 0x100e3a62u: ecx = rd8(COW_IMG(0x100e3de8u) + esi); goto L_100e3a62;
    case 0x100e3b08u: goto L_100e3b08;
    case 0x100e3b56u: goto L_100e3b56;
    case 0x100e3ba1u: goto L_100e3ba1;
    case 0x100e3bf0u: goto L_100e3bf0;
    case 0x100e3c21u: goto L_100e3c21;
    case 0x100e3c53u: goto L_100e3c53;
    case 0x100e3ca8u: goto L_100e3ca8;
    case 0x100e3cb7u: goto L_100e3cb7;
    case 0x100e3cd6u: goto L_100e3cd6;
    case 0x100e3cf1u: goto L_100e3cf1;
    case 0x100e3d31u: goto L_100e3d31;
    case 0x100e3d57u: goto L_100e3d57;
    case 0x100e3d64u: goto L_100e3d64;
    default: rt_fatal(g, COW_IMG(0x100e39aeu), "switch");
    }
    return 0;
L_100e39b5: ;
    COW_AT(100e39b5)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, sp0 - 0xe8u);
    wr32(sp0 - 0x13cu, sp0 - 0xf8u);
    wr32(sp0 - 0x140u, COW_IMG(0x103601c0u));
    loc_140 = COW_IMG(0x103601c0u);
L_100e3c04: ;
    COW_AT(100e3c04)
    wr32(sp0 - 0x144u, sp0 - 0x110u);
    t104 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t104);
    wr32(sp0 - 0x14cu, ebx);
    t105 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x150u, t105);
    wr32(sp0 - 0x154u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = t104;
    g->esp = sp0 - 0x138u;
    t106 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, eax, t105, ebx, t104, sp0 - 0x110u, loc_140, sp0 - 0xf8u);
    t107 = g->edx;
    eax = t106;
    edx = t107;
    COW_AT(100e3c19)
L_100e3d53: ;
    COW_AT(100e3d53)
    if (eax == 0u) goto L_100e3d64;
L_100e3d57: ;
    COW_AT(100e3d57)
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = rd32(sp0 - 0x130u);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e39ce: ;
    COW_AT(100e39ce)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, sp0 - 0xe8u);
    wr32(sp0 - 0x13cu, sp0 - 0xf8u);
    wr32(sp0 - 0x140u, COW_IMG(0x10361df8u));
    loc_140 = COW_IMG(0x10361df8u);
    goto L_100e3c04;
L_100e39e7: ;
    COW_AT(100e39e7)
    t99 = rd32(sp0 - 0x118u);
    wr32(sp0 - 0x134u, t99);
    wr32(sp0 - 0x138u, sp0 - 0xc0u);
    wr32(sp0 - 0x13cu, sp0 - 0xe8u);
    wr32(sp0 - 0x140u, sp0 - 0xf8u);
    wr32(sp0 - 0x144u, 0x3fu);
    wr32(sp0 - 0x148u, sp0 - 0x110u);
    t100 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x14cu, t100);
    wr32(sp0 - 0x150u, ebx);
    t101 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x154u, t101);
    wr32(sp0 - 0x158u, eax);
    g->ebx = ebx;
    g->edx = t101;
    g->esp = sp0 - 0x130u;
    t102 = cow_call_regs(g, COW_IMG(0x100da170u), eax, t100, g->edx, 1, 10, eax, t101, ebx, t100, sp0 - 0x110u, 0x3fu, sp0 - 0xf8u, sp0 - 0xe8u, sp0 - 0xc0u, t99);
    t103 = g->edx;
    eax = t102;
    edx = t103;
    COW_AT(100e3a12)
    goto L_100e3d53;
L_100e3a1a: ;
    COW_AT(100e3a1a)
    t91 = rd32(sp0 - 0x118u);
    wr32(sp0 - 0x134u, t91);
    wr32(sp0 - 0x138u, sp0 - 0xc0u);
    wr32(sp0 - 0x13cu, 0u);
    t92 = rd16(arg3 + 6u);
    wr32(sp0 - 0x140u, t92);
    g->ebx = ebx;
    g->eax = t91;
    g->esp = sp0 - 0x130u;
    t93 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, t92, 0u, sp0 - 0xc0u, t91);
    eax = t93;
    COW_AT(100e3a32)
    wr32(sp0 - 0x13cu, eax);
    wr32(sp0 - 0x140u, sp0 - 0xe8u);
    wr32(sp0 - 0x144u, sp0 - 0xf8u);
    wr32(sp0 - 0x148u, 0x3fu);
    wr32(sp0 - 0x14cu, sp0 - 0x110u);
    t94 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x150u, t94);
    wr32(sp0 - 0x154u, ebx);
    t95 = (sp0 - 0xf8u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x158u, t95);
    t96 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 4u);
    wr32(sp0 - 0x15cu, t96);
    g->ebx = ebx;
    g->edx = t96;
    g->esp = sp0 - 0x130u;
    t97 = cow_call_regs(g, COW_IMG(0x100da200u), t94, t95, g->edx, 1, 11, t96, t95, ebx, t94, sp0 - 0x110u, 0x3fu, sp0 - 0xf8u, sp0 - 0xe8u, eax, sp0 - 0xc0u, rd32(sp0 - 0x134u));
    t98 = g->edx;
    eax = t97;
    edx = t98;
    COW_AT(100e3a5a)
    goto L_100e3d53;
L_100e3a62: ;
    COW_AT(100e3a62)
    if (esi == 0x22u)
    {
    COW_AT(100e3a78)
        wr8(sp0 - 0x11cu, 0x4au);
    }
    else
    {
        esi = esi - 0x22u;
    COW_AT(100e3a67)
        if (esi == 1u)
        {
    COW_AT(100e3a71)
            wr8(sp0 - 0x11cu, 0x45u);
        }
        else
        {
    COW_AT(100e3a6a)
            wr8(sp0 - 0x11cu, 0x3fu);
        }
    }
    COW_AT(100e3a7d)
    if (rd16(arg3 + 6u) == 0u)
    {
    COW_AT(100e3ad2)
        t85 = rd32(sp0 - 0x118u);
        wr32(sp0 - 0x134u, t85);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        wr32(sp0 - 0x13cu, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xf8u);
        t86 = rd32(sp0 - 0x11cu);
        wr32(sp0 - 0x144u, t86);
        wr32(sp0 - 0x148u, sp0 - 0x110u);
        t87 = rd32(sp0 - 0x120u);
        wr32(sp0 - 0x14cu, t87);
        wr32(sp0 - 0x150u, ebx);
        t88 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 5u);
        wr32(sp0 - 0x154u, t88);
        wr32(sp0 - 0x158u, eax);
        g->ebx = ebx;
        g->eax = eax;
        g->edx = t88;
        g->esp = sp0 - 0x130u;
        t89 = cow_thiscall_cdecl(g, COW_IMG(0x100da380u), t87, 10, eax, t88, ebx, t87, sp0 - 0x110u, t86, sp0 - 0xf8u, sp0 - 0xe8u, sp0 - 0xc0u, t85);
        t90 = g->edx;
        eax = t89;
        edx = t90;
    COW_AT(100e3b00)
    }
    else
    {
    COW_AT(100e3a84)
        t76 = rd8(arg3 + 6u);
        wr8(sp0 - 0xfcu, rd8(arg3 + 7u));
        t77 = rd32(sp0 - 0x118u);
        wr8(sp0 - 0x114u, (uint8_t)t76);
        wr32(sp0 - 0x134u, t77);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        wr32(sp0 - 0x13cu, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xf8u);
        t78 = rd32(sp0 - 0x114u);
        wr32(sp0 - 0x144u, t78);
        t79 = rd32(sp0 - 0xfcu);
        wr32(sp0 - 0x148u, t79);
        t80 = rd32(sp0 - 0x11cu);
        wr32(sp0 - 0x14cu, t80);
        wr32(sp0 - 0x150u, sp0 - 0x110u);
        t81 = rd32(sp0 - 0x120u);
        wr32(sp0 - 0x154u, t81);
        wr32(sp0 - 0x158u, ebx);
        t82 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 5u);
        wr32(sp0 - 0x15cu, t82);
        wr32(sp0 - 0x160u, eax);
        g->ebx = ebx;
        g->eax = eax;
        g->edx = t82;
        g->esp = sp0 - 0x130u;
        t83 = cow_thiscall_cdecl(g, COW_IMG(0x100da2a0u), t81, 12, eax, t82, ebx, t81, sp0 - 0x110u, t80, t79, t78, sp0 - 0xf8u, sp0 - 0xe8u, sp0 - 0xc0u, t77);
        t84 = g->edx;
        eax = t83;
        edx = t84;
    COW_AT(100e3aca)
    }
    goto L_100e3d53;
L_100e3b08: ;
    COW_AT(100e3b08)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, sp0 - 0xe8u);
    wr32(sp0 - 0x13cu, sp0 - 0xf8u);
    wr32(sp0 - 0x140u, COW_IMG(0x10361decu));
    wr32(sp0 - 0x144u, sp0 - 0x110u);
    t69 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t69);
    wr32(sp0 - 0x14cu, ebx);
    t70 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x150u, t70);
    wr32(sp0 - 0x154u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t69;
    g->edx = t70;
    g->esp = sp0 - 0x138u;
    t71 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, eax, t70, ebx, t69, sp0 - 0x110u, COW_IMG(0x10361decu), sp0 - 0xf8u);
    t72 = g->ecx;
    t73 = g->edx;
    eax = t71;
    ecx = t72;
    edx = t73;
    COW_AT(100e3b31)
    if (eax == 0u) goto L_100e3d64;
    COW_AT(100e3b3c)
    wr32(sp0 - 0x134u, sp0 - 0xd0u);
    g->ebx = ebx;
    g->eax = sp0 - 0xd0u;
    g->esp = sp0 - 0x130u;
    t74 = cow_call_regs(g, COW_IMG(0x100e3e10u), g->eax, g->ecx, edx, 1, 1, sp0 - 0xd0u);
    t75 = g->edx;
    eax = t74;
    edx = t75;
    COW_AT(100e3b46)
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = rd32(sp0 - 0x130u);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e3b56: ;
    COW_AT(100e3b56)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, sp0 - 0xe8u);
    wr32(sp0 - 0x13cu, sp0 - 0xf8u);
    wr32(sp0 - 0x140u, COW_IMG(0x10361de0u));
    wr32(sp0 - 0x144u, sp0 - 0x110u);
    t62 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t62);
    wr32(sp0 - 0x14cu, ebx);
    t63 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x150u, t63);
    wr32(sp0 - 0x154u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t62;
    g->edx = t63;
    g->esp = sp0 - 0x138u;
    t64 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, eax, t63, ebx, t62, sp0 - 0x110u, COW_IMG(0x10361de0u), sp0 - 0xf8u);
    t65 = g->ecx;
    t66 = g->edx;
    eax = t64;
    ecx = t65;
    edx = t66;
    COW_AT(100e3b7f)
    if (eax == 0u) goto L_100e3d64;
    COW_AT(100e3b8a)
    wr32(sp0 - 0x134u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x130u;
    t67 = cow_call_regs(g, COW_IMG(0x100e8f70u), eax, g->ecx, g->edx, 1, 1, 0u);
    t68 = g->edx;
    eax = t67;
    edx = t68;
    COW_AT(100e3b91)
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = rd32(sp0 - 0x130u);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e3ba1: ;
    COW_AT(100e3ba1)
    t56 = rd32(sp0 - 0xfcu);
    wr32(sp0 - 0x134u, t56);
    wr32(sp0 - 0x138u, eax);
    wr32(sp0 - 0x13cu, sp0 - 0x28u);
    g->ebx = ebx;
    g->esp = sp0 - 0x130u;
    cow_thiscall_cdecl(g, COW_IMG(0x100e3750u), t56, 3, sp0 - 0x28u, eax, t56);
    COW_AT(100e3bb4)
    wr32(sp0 - 0x140u, sp0 - 0xc0u);
    wr32(sp0 - 0x144u, sp0 - 0xe8u);
    wr32(sp0 - 0x148u, sp0 - 0xf8u);
    wr32(sp0 - 0x14cu, sp0 - 0x28u);
    wr32(sp0 - 0x150u, COW_IMG(0x10361dd0u));
    wr32(sp0 - 0x154u, sp0 - 0x110u);
    t57 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x158u, t57);
    wr32(sp0 - 0x15cu, ebx);
    t58 = (sp0 - 0x28u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x160u, t58);
    t59 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 4u);
    wr32(sp0 - 0x164u, t59);
    g->ebx = ebx;
    g->eax = t58;
    g->edx = t57;
    g->esp = sp0 - 0x148u;
    t60 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, t59, t58, ebx, t57, sp0 - 0x110u, COW_IMG(0x10361dd0u), sp0 - 0x28u);
    t61 = g->edx;
    eax = t60;
    edx = t61;
    COW_AT(100e3be8)
    goto L_100e3d53;
L_100e3bf0: ;
    COW_AT(100e3bf0)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, sp0 - 0xe8u);
    wr32(sp0 - 0x13cu, sp0 - 0xf8u);
    wr32(sp0 - 0x140u, COW_IMG(0x10361dc4u));
    loc_140 = COW_IMG(0x10361dc4u);
    goto L_100e3c04;
L_100e3c21: ;
    COW_AT(100e3c21)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, sp0 - 0xe8u);
    wr32(sp0 - 0x13cu, sp0 - 0xf8u);
    wr32(sp0 - 0x140u, COW_IMG(0x103601c0u));
    wr32(sp0 - 0x144u, sp0 - 0x110u);
    t52 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t52);
    wr32(sp0 - 0x14cu, ebx);
    t53 = (sp0 - 0xf8u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x150u, t53);
    wr32(sp0 - 0x154u, 0u);
    g->ebx = ebx;
    g->eax = t52;
    g->edx = sp0 - 0x110u;
    g->esp = sp0 - 0x138u;
    t54 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0u, t53, ebx, t52, sp0 - 0x110u, COW_IMG(0x103601c0u), sp0 - 0xf8u);
    t55 = g->edx;
    eax = t54;
    edx = t55;
    COW_AT(100e3c4b)
    goto L_100e3d53;
L_100e3c53: ;
    COW_AT(100e3c53)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    if (rd8(sp0 - 0xd0u) == 0u) goto L_100e3c8d;
    COW_AT(100e3c60)
    wr32(sp0 - 0x138u, sp0 - 0xe8u);
    wr32(sp0 - 0x13cu, sp0 - 0xf8u);
    wr32(sp0 - 0x140u, COW_IMG(0x103601c0u));
    wr32(sp0 - 0x144u, sp0 - 0x110u);
    t44 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t44);
    wr32(sp0 - 0x14cu, ebx);
    t45 = (sp0 - 0xf8u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x150u, t45);
    wr32(sp0 - 0x154u, 0u);
    g->ebx = ebx;
    g->eax = t44;
    g->edx = sp0 - 0x110u;
    g->esp = sp0 - 0x138u;
    t46 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0u, t45, ebx, t44, sp0 - 0x110u, COW_IMG(0x103601c0u), sp0 - 0xf8u);
    t47 = g->edx;
    eax = t46;
    edx = t47;
    COW_AT(100e3c85)
    goto L_100e3d53;
L_100e3c8d: ;
    COW_AT(100e3c8d)
    wr32(sp0 - 0x138u, COW_IMG(0x10361dc0u));
    wr32(sp0 - 0x13cu, sp0 - 0x110u);
    t48 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x140u, t48);
    wr32(sp0 - 0x144u, ebx);
    t49 = (sp0 - 0xc0u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x148u, t49);
    wr32(sp0 - 0x14cu, 0u);
    eax = sp0 - 0x110u;
    ecx = t48;
    edx = t49;
    loc_140 = t48;
    loc_148 = t49;
    loc_138 = COW_IMG(0x10361dc0u);
    loc_144 = ebx;
    loc_14c = 0u;
L_100e3d4b: ;
    COW_AT(100e3d4b)
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x130u;
    t50 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, loc_14c, loc_148, loc_144, loc_140, sp0 - 0x110u, loc_138, sp0 - 0xc0u);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(100e3d50)
    goto L_100e3d53;
L_100e3ca8: ;
    COW_AT(100e3ca8)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, COW_IMG(0x10361da0u));
    loc_138 = COW_IMG(0x10361da0u);
L_100e3d3b: ;
    COW_AT(100e3d3b)
    wr32(sp0 - 0x13cu, sp0 - 0x110u);
    t42 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x140u, t42);
    wr32(sp0 - 0x144u, ebx);
    t43 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x148u, t43);
    ecx = t42;
    edx = t43;
    loc_140 = t42;
    loc_148 = t43;
    loc_144 = ebx;
L_100e3d4a: ;
    COW_AT(100e3d4a)
    wr32(sp0 - 0x14cu, eax);
    loc_14c = eax;
    goto L_100e3d4b;
L_100e3cb7: ;
    COW_AT(100e3cb7)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, sp0 - 0xd0u);
    g->edx = edx;
    g->esp = sp0 - 0x130u;
    t40 = cow_call_regs(g, COW_IMG(0x100a40a0u), sp0 - 0xc0u, g->ecx, g->edx, 1, 2, sp0 - 0xd0u, sp0 - 0xc0u);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    COW_AT(100e3cc6)
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = rd32(sp0 - 0x130u);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e3cd6: ;
    COW_AT(100e3cd6)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, COW_IMG(0x10361dc0u));
    wr32(sp0 - 0x13cu, sp0 - 0x110u);
    t38 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x140u, t38);
    wr32(sp0 - 0x144u, ebx);
    t39 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x148u, t39);
    ecx = t39;
    edx = t38;
    loc_140 = t38;
    loc_148 = t39;
    loc_138 = COW_IMG(0x10361dc0u);
    loc_144 = ebx;
    goto L_100e3d4a;
L_100e3cf1: ;
    COW_AT(100e3cf1)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, COW_IMG(0x10361dc0u));
    wr32(sp0 - 0x13cu, sp0 - 0x110u);
    t31 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x140u, t31);
    wr32(sp0 - 0x144u, ebx);
    t32 = (sp0 - 0x110u & 0xffffff00u) | rd8(arg3 + 5u);
    wr32(sp0 - 0x148u, t32);
    wr32(sp0 - 0x14cu, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t32;
    g->edx = t31;
    g->esp = sp0 - 0x130u;
    t33 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, eax, t32, ebx, t31, sp0 - 0x110u, COW_IMG(0x10361dc0u), sp0 - 0xc0u);
    t34 = g->ecx;
    t35 = g->edx;
    eax = t33;
    ecx = t34;
    edx = t35;
    COW_AT(100e3d10)
    if (eax == 0u) goto L_100e3d64;
    COW_AT(100e3d17)
    wr32(sp0 - 0x134u, sp0 - 0xd0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x130u;
    t36 = cow_call_regs(g, COW_IMG(0x100e3e10u), g->eax, g->ecx, sp0 - 0xd0u, 1, 1, sp0 - 0xd0u);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(100e3d21)
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = rd32(sp0 - 0x130u);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e3d31: ;
    COW_AT(100e3d31)
    wr32(sp0 - 0x134u, sp0 - 0xc0u);
    wr32(sp0 - 0x138u, COW_IMG(0x10361dc0u));
    loc_138 = COW_IMG(0x10361dc0u);
    goto L_100e3d3b;
L_100e3d64: ;
    COW_AT(100e3d64)
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = rd32(sp0 - 0x130u);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e37a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e37afu:
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        in_ebp = rd32(sp0 - 0x128u);
        in_ebx = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100e37e3u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x138u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e37f5u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e3801u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e3828u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x130u;
        g->eax = arg3 + 0x17u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e383au:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x138u;
        g->ebp = arg3;
        wr32(sp0 - 0x134u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100e3871u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e3875u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e388bu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e38a0u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x13cu;
        g->ebp = arg3;
        wr32(sp0 - 0x13cu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e38b9u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x148u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        wr32(sp0 - 0x13cu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e38c3u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        wr32(sp0 - 0x13cu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e38d4u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x13cu;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x100e38e2u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e38e8u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e38f2u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x134u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        wr32(sp0 - 0x134u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e38feu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3908u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3913u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3922u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3931u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x138u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        wr32(sp0 - 0x138u, sp0 - 0xd0u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e393cu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        wr32(sp0 - 0x138u, sp0 - 0xd0u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3940u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        wr32(sp0 - 0x138u, sp0 - 0xd0u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e394cu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x138u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3968u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x140u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3992u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e39a6u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e39b5u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e39ceu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e39e7u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a12u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x158u;
        wr32(sp0 - 0x148u, sp0 - 0x110u);
        wr32(sp0 - 0x140u, sp0 - 0xf8u);
        wr32(sp0 - 0x13cu, sp0 - 0xe8u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a1au:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a32u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x140u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a5au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_148;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_148 = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x15cu;
        wr32(sp0 - 0x14cu, sp0 - 0x110u);
        wr32(sp0 - 0x144u, sp0 - 0xf8u);
        wr32(sp0 - 0x140u, sp0 - 0xe8u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a62u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a67u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a6au:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a71u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a78u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a7du:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3a84u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3acau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        wr32(sp0 - 0x150u, sp0 - 0x110u);
        wr32(sp0 - 0x140u, sp0 - 0xf8u);
        wr32(sp0 - 0x13cu, sp0 - 0xe8u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3ad2u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3b00u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x158u;
        wr32(sp0 - 0x148u, sp0 - 0x110u);
        wr32(sp0 - 0x140u, sp0 - 0xf8u);
        wr32(sp0 - 0x13cu, sp0 - 0xe8u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3b08u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3b31u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x154u;
        wr32(sp0 - 0x144u, sp0 - 0x110u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3b3cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x144u, sp0 - 0x110u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3b46u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x144u, sp0 - 0x110u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3b56u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3b7fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x154u;
        wr32(sp0 - 0x144u, sp0 - 0x110u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3b8au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x144u, sp0 - 0x110u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3b91u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x144u, sp0 - 0x110u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3ba1u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3bb4u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x13cu;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x13cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100e3be8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x164u;
        wr32(sp0 - 0x154u, sp0 - 0x110u);
        wr32(sp0 - 0x14cu, sp0 - 0x28u);
        wr32(sp0 - 0x148u, sp0 - 0xf8u);
        wr32(sp0 - 0x144u, sp0 - 0xe8u);
        wr32(sp0 - 0x140u, sp0 - 0xc0u);
        wr32(sp0 - 0x13cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100e3bf0u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3c04u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x140u;
        g->ecx = sp0 - 0xe8u;
        g->edx = sp0 - 0xf8u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3c19u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x154u;
        wr32(sp0 - 0x144u, sp0 - 0x110u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3c21u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3c4bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x154u;
        wr32(sp0 - 0x144u, sp0 - 0x110u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3c53u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3c60u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->edx = sp0 - 0xc0u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3c85u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x154u;
        wr32(sp0 - 0x144u, sp0 - 0x110u);
        wr32(sp0 - 0x13cu, sp0 - 0xf8u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3c8du:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->edx = sp0 - 0xc0u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3ca8u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3cb7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3cc6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x138u, sp0 - 0xd0u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3cd6u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3cf1u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3d10u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x14cu;
        wr32(sp0 - 0x13cu, sp0 - 0x110u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3d17u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x13cu, sp0 - 0x110u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3d21u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x13cu, sp0 - 0x110u);
        wr32(sp0 - 0x134u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3d31u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x100e3d3bu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x138u;
        g->ecx = sp0 - 0xc0u;
        g->ebp = arg3;
        wr32(sp0 - 0x148u, sp0 - 0xe8u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3d4au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x148u;
        wr32(sp0 - 0x13cu, sp0 - 0x110u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3d4bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_14c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14c = rd32(sp0 - 0x14cu);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x14cu;
        wr32(sp0 - 0x13cu, sp0 - 0x110u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3d50u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14cu;
        wr32(sp0 - 0x13cu, sp0 - 0x110u);
        wr32(sp0 - 0x134u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100e3d53u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_14c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14c = rd32(sp0 - 0x14cu);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100e3d57u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_14c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14c = rd32(sp0 - 0x14cu);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100e3d64u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_14c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14c = rd32(sp0 - 0x14cu);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e37a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e37a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
