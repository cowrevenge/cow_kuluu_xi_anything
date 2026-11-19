/* f_0x1021f480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1021f480(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 244u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021f4d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_9c = rd32(sp0 - 0x9cu); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f4d7;
    case 0x1021f4ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f4ec;
    case 0x1021f4f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f4f5;
    case 0x1021f509u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f509;
    case 0x1021f50cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f50c;
    case 0x1021f511u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f511;
    case 0x1021f517u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f517;
    case 0x1021f521u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f521;
    case 0x1021f52bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_9c = rd32(sp0 - 0x9cu); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f52b;
    case 0x1021f539u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f539;
    case 0x1021f54du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f54d;
    case 0x1021f562u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f562;
    case 0x1021f564u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f564;
    case 0x1021f574u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f574;
    case 0x1021f585u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f585;
    case 0x1021f587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f587;
    case 0x1021f59du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f59d;
    case 0x1021f5d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1021f5d3;
    case 0x1021f5e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1021f5e9;
    case 0x1021f602u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1021f602;
    case 0x1021f617u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1021f617;
    case 0x1021f61fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1021f61f;
    case 0x1021f634u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1021f634;
    case 0x1021f67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f67c;
    case 0x1021f691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f691;
    case 0x1021f693u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f693;
    case 0x1021f699u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f699;
    case 0x1021f6afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f6af;
    case 0x1021f6b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f6b1;
    case 0x1021f710u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); goto E_1021f710;
    case 0x1021f725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f725;
    case 0x1021f729u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f729;
    case 0x1021f73eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f73e;
    case 0x1021f756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f756;
    case 0x1021f75eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f75e;
    case 0x1021f787u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_98 = rd32(sp0 - 0x98u); goto E_1021f787;
    case 0x1021f796u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_98 = rd32(sp0 - 0x98u); goto E_1021f796;
    case 0x1021f79bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_98 = rd32(sp0 - 0x98u); goto E_1021f79b;
    case 0x1021f7a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_98 = rd32(sp0 - 0x98u); goto E_1021f7a3;
    case 0x1021f7d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f7d1;
    case 0x1021f7d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f7d9;
    case 0x1021f7fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f7fb;
    case 0x1021f7fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f7fd;
    case 0x1021f81eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1021f81e;
    case 0x1021f826u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f826;
    case 0x1021f83du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f83d;
    case 0x1021f84bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_9c = rd32(sp0 - 0x9cu); goto E_1021f84b;
    case 0x1021f84fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f84f;
    case 0x1021f86bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f86b;
    case 0x1021f86du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f86d;
    case 0x1021f88eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f88e;
    case 0x1021f898u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f898;
    case 0x1021f8aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1021f8ae;
    case 0x1021f8c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1021f8c2;
    case 0x1021f8e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1021f8e2;
    case 0x1021f91du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f91d;
    case 0x1021f92du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); goto E_1021f92d;
    case 0x1021f93du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); goto E_1021f93d;
    default: break;
    }
#endif

    COW_AT(1021f480)
    wr32(sp0 - 0xa8u, in_ebx);
    wr32(sp0 - 0xacu, in_ebp);
    wr32(sp0 - 0xb0u, in_esi);
    wr32(sp0 - 0xb4u, in_edi);
    wr32(sp0 - 0xb8u, sp0 - 0x90u);
    wr16(sp0 - 0x90u, 0u);
    wr16(sp0 - 0x8eu, 0u);
    wr16(sp0 - 0x8cu, 0u);
    wr16(sp0 - 0x8au, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0xb4u;
    cow_stdcall(g, COW_IMG(0x1021f360u), 1, sp0 - 0x90u);
    t1 = g->edx;
    t2 = rd16(arg1 + 0x28cu);
    wr32(sp0 - 0x88u, t2);
    t3 = rd16(arg1 + 0x28cu) == 0u;
    wr32(sp0 - 0x9cu, t3);
    if ((rd16(arg1 + 0x28eu) & 7u) == 0u)
    {
        ebp = t2;
        edi = t3;
        loc_88 = t2;
        loc_9c = t3;
        goto L_1021f52b;
    }
    edx = (t1 & 0xffff0000u) | rd16(arg1 + 0x28eu);
    ebp = t2;
    edi = t3;
    loc_88 = t2;
    loc_9c = t3;
    COW_AT(1021f4d7)
    t4 = rd8(arg1 + 0x1ffu) - 2u;
    wr32(sp0 - 0x94u, t4);
    if ((int32_t)(rd8(arg1 + 0x1ffu) - 2u) < 0)
    {
        loc_a8 = in_ebx;
        loc_ac = in_ebp;
        loc_b0 = in_esi;
        loc_b4 = in_edi;
        goto L_1021f93d;
    }
    ecx = t4;
    loc_94 = t4;
    COW_AT(1021f4ec)
    if ((int32_t)ecx > 2)
    {
        loc_a8 = in_ebx;
        loc_ac = in_ebp;
        loc_b0 = in_esi;
        loc_b4 = in_edi;
        goto L_1021f93d;
    }
    COW_AT(1021f4f5)
    if ((~(1u << (ecx & 0x1fu)) & (uint16_t)edx) == 1u) goto L_1021f511;
    eax = (~(1u << (ecx & 0x1fu)) & (uint16_t)edx) - 1u;
    COW_AT(1021f509)
    if (eax == 1u) goto L_1021f521;
    eax = eax - 1u;
    COW_AT(1021f50c)
    if (eax == 2u) goto L_1021f517;
L_1021f511: ;
    COW_AT(1021f511)
    wr32(sp0 - 0xa4u, 0u);
    loc_a4 = 0u;
L_1021f539: ;
    COW_AT(1021f539)
    if ((uint16_t)ebp >= 3u)
    {
        eax = (uint32_t)((int32_t)(rd8(arg1 + 0x293u) + 1u - (uint32_t)((int32_t)(rd8(arg1 + 0x293u) + 1u) >> 0x1fu)) >> 1u);
        edx = (uint32_t)((int32_t)(rd8(arg1 + 0x293u) + 1u) >> 0x1fu);
    COW_AT(1021f562)
        ecx = 0u;
    }
    else
    {
        eax = (uint32_t)((int32_t)(rd8(arg1 + 0x293u) + 1u - (uint32_t)((int32_t)(rd8(arg1 + 0x293u) + 1u) >> 0x1fu)) >> 1u);
    COW_AT(1021f54d)
        t5 = rd8(arg1 + (uint16_t)ebp + 0x290u);
        ecx = t5;
        edx = t5;
    }
    COW_AT(1021f564)
    wr32(sp0 - 0x98u, (uint8_t)ecx);
    if ((uint16_t)edi >= 3u)
    {
        loc_98 = (uint8_t)ecx;
    COW_AT(1021f585)
        ecx = 0u;
    }
    else
    {
        loc_98 = (uint8_t)ecx;
    COW_AT(1021f574)
        ecx = rd8(arg1 + (uint16_t)edi + 0x290u);
    }
    COW_AT(1021f587)
    wr32(sp0 - 0x84u, (uint8_t)ecx);
    if (eax == 0u)
    {
        esi = (uint32_t)(int16_t)rd16(sp0 - 0x8au) + 4u;
        loc_84 = (uint8_t)ecx;
        ecx = (uint8_t)ecx;
    }
    else
    {
        esi = (uint32_t)(int16_t)rd16(sp0 - 0x8au) + 4u;
        loc_84 = (uint8_t)ecx;
        ecx = (uint8_t)ecx;
    COW_AT(1021f59d)
        wr32(sp0 - 0xb8u, eax);
        wr32(sp0 - 0xbcu, 0x63u);
        wr32(sp0 - 0xc0u, 0xau);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xb8u;
        t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x63u);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0xbcu, t6);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        g->ebx = 0u;
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0xacu;
        t9 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t6, rd32(sp0 - 0xb8u), in_edi, in_esi);
        wr32(sp0 - 0xc4u, 0x80808080u);
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, esi);
        t10 = rd32(sp0 - 0x90u) + 0x12u;
        wr32(sp0 - 0xd0u, t10);
        g->ecx = sp0 - 0x80u;
        g->edx = t10;
        t11 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t10, esi, sp0 - 0x80u, 0x80808080u, sp0 - 0x80u, rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), in_edi, in_esi);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
        esi = esi + 0xeu;
        loc_88 = rd32(sp0 - 0x88u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_84 = rd32(sp0 - 0x84u);
    }
    COW_AT(1021f5d3)
    wr32(sp0 - 0xb8u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t14 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t15 = g->edx;
    wr32(sp0 - 0xa0u, t14);
    if (t14 == 0u)
    {
        loc_a8 = in_ebx;
        loc_ac = in_ebp;
        loc_b0 = in_esi;
        loc_b4 = in_edi;
    }
    else
    {
        eax = t14;
        edx = t15;
        loc_a0 = t14;
    COW_AT(1021f5e9)
        if ((int32_t)rd32(sp0 - 0x98u) <= 1)
        {
            ebx = rd32(rd32(eax) + 0x7c8u);
            edi = (uint32_t)(int16_t)rd16(sp0 - 0x90u) + 4u;
        }
        else
        {
            ebx = rd32(rd32(eax) + 0x7c8u);
            eax = rd32(sp0 - 0x98u);
            edi = (uint32_t)(int16_t)rd16(sp0 - 0x90u) + 4u;
    COW_AT(1021f602)
            wr32(sp0 - 0xb8u, 0u);
            wr32(sp0 - 0xbcu, 0u);
            wr32(sp0 - 0xc0u, 0x80808080u);
            wr32(sp0 - 0xc4u, esi - 1u);
            wr32(sp0 - 0xc8u, edi);
            g->esp = sp0 - 0xb4u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), ebx, 5, edi, esi - 1u, 0x80808080u, 0u, 0u);
            loc_a0 = rd32(sp0 - 0xa0u);
        }
    COW_AT(1021f617)
        if ((int32_t)rd32(sp0 - 0x98u) > 0)
        {
            eax = rd32(sp0 - 0x98u);
    COW_AT(1021f61f)
            wr32(sp0 - 0xb8u, 0u);
            wr32(sp0 - 0xbcu, 0u);
            wr32(sp0 - 0xc0u, 0x80808080u);
            wr32(sp0 - 0xc4u, esi + 7u);
            wr32(sp0 - 0xc8u, edi);
            g->esp = sp0 - 0xb4u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), ebx, 5, edi, esi + 7u, 0x80808080u, 0u, 0u);
            loc_a0 = rd32(sp0 - 0xa0u);
        }
    COW_AT(1021f634)
        t16 = rd32(sp0 - 0x94u) + 0x9eu;
        wr32(sp0 - 0xb8u, t16);
        wr32(sp0 - 0xbcu, COW_IMG(0x10370084u));
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        g->ebx = ebx;
        g->eax = sp0 - 0x80u;
        g->edx = t16;
        t17 = rd16(ebx + 0x22u);
        t18 = rd16(ebx + 0x20u);
        g->esp = sp0 - 0xacu;
        t19 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10370084u), t16, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
        t20 = g->edx;
        wr32(sp0 - 0xc4u, 0x80808080u);
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, esi);
        t21 = edi + (uint32_t)(int16_t)t17 - (uint32_t)(int16_t)t18 + 5u;
        wr32(sp0 - 0xd0u, t21);
        g->edx = t20;
        t22 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t21, esi, sp0 - 0x80u, 0x80808080u, sp0 - 0x80u, COW_IMG(0x10370084u), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
        t23 = g->edx;
        if ((uint16_t)rd32(sp0 - 0x9cu) >= 3u)
        {
            edx = t23;
            edi = t22;
    COW_AT(1021f691)
            ecx = 0u;
        }
        else
        {
            eax = rd32(sp0 - 0x9cu);
            edi = t22;
    COW_AT(1021f67c)
            ecx = rd32(arg1 + (uint16_t)eax * 4u + 0x280u);
            edx = arg1;
        }
    COW_AT(1021f693)
        if ((uint16_t)ebp >= 3u)
        {
    COW_AT(1021f6af)
            eax = 0u;
        }
        else
        {
    COW_AT(1021f699)
            eax = rd32(arg1 + (uint16_t)ebp * 4u + 0x280u);
        }
    COW_AT(1021f6b1)
        wr32(sp0 - 0xb8u, ecx);
        wr32(sp0 - 0xbcu, eax);
        wr32(sp0 - 0xc0u, COW_IMG(0x10385f08u));
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = sp0 - 0x80u;
        g->esp = sp0 - 0xb0u;
        t24 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10385f08u), eax, ecx, rd32(sp0 - 0xb4u));
        t25 = g->ecx;
        wr32(sp0 - 0xc8u, 0x80808080u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        wr32(sp0 - 0xd0u, esi);
        wr32(sp0 - 0xd4u, edi);
        g->edx = sp0 - 0x80u;
        t26 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, edi, esi, sp0 - 0x80u, 0x80808080u, sp0 - 0x80u, COW_IMG(0x10385f08u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u));
        t27 = g->edx;
        t28 = rd32(sp0 - 0xa4u) + 0x9eu;
        wr32(sp0 - 0xd8u, t28);
        wr32(sp0 - 0xdcu, COW_IMG(0x10370084u));
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        g->ebx = ebx;
        g->eax = t28;
        g->ecx = sp0 - 0x80u;
        g->esp = sp0 - 0xccu;
        t29 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10370084u), t28, rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
        t30 = g->ecx;
        wr32(sp0 - 0xe4u, 0x80808080u);
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xecu, esi);
        wr32(sp0 - 0xf0u, t26);
        g->ecx = t30;
        g->edx = sp0 - 0x80u;
        t31 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t26, esi, sp0 - 0x80u, 0x80808080u, sp0 - 0x80u, COW_IMG(0x10370084u), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
        t32 = g->ecx;
        t33 = g->edx;
        if ((int32_t)rd32(sp0 - 0x84u) <= 1)
        {
            eax = t31;
            ecx = t32;
            edx = t33;
            ebp = rd32(sp0 - 0x84u);
            edi = t31 + 4u;
        }
        else
        {
            edx = t33;
            ebp = rd32(sp0 - 0x84u);
            edi = t31 + 4u;
    COW_AT(1021f710)
            wr32(sp0 - 0xb8u, 0u);
            wr32(sp0 - 0xbcu, 0u);
            wr32(sp0 - 0xc0u, 0x80808080u);
            wr32(sp0 - 0xc4u, esi - 1u);
            wr32(sp0 - 0xc8u, edi);
            g->eax = esi - 1u;
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            t34 = cow_thiscall(g, COW_IMG(0x1011fb60u), ebx, 5, edi, esi - 1u, 0x80808080u, 0u, 0u);
            t35 = g->ecx;
            t36 = g->edx;
            eax = t34;
            ecx = t35;
            edx = t36;
        }
    COW_AT(1021f725)
        if ((int32_t)ebp > 0)
        {
    COW_AT(1021f729)
            wr32(sp0 - 0xb8u, 0u);
            wr32(sp0 - 0xbcu, 0u);
            wr32(sp0 - 0xc0u, 0x80808080u);
            wr32(sp0 - 0xc4u, esi + 7u);
            wr32(sp0 - 0xc8u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            t37 = cow_thiscall(g, COW_IMG(0x1011fb60u), ebx, 5, edi, esi + 7u, 0x80808080u, 0u, 0u);
            t38 = g->ecx;
            t39 = g->edx;
            eax = t37;
            ecx = t38;
            edx = t39;
        }
    COW_AT(1021f73e)
        if (rd8(arg1 + 0x1ffu) < 5u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1ffu);
            esi = esi + 0x10u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1ffu);
            esi = esi + 0x10u;
    COW_AT(1021f756)
            if ((uint8_t)eax <= 6u)
            {
                cf = (uint8_t)eax < 6u;
                pf = PARITY((uint8_t)((uint8_t)eax - 6u));
                zf = (uint8_t)((uint8_t)eax - 6u) == 0u;
                sf = (int8_t)((uint8_t)eax - 6u) < 0;
                of = (((uint8_t)eax ^ 6u) & ((uint8_t)eax ^ (uint8_t)((uint8_t)eax - 6u))) >> 7u;
    COW_AT(1021f75e)
                wr32(sp0 - 0xa4u, 0u);
                t40 = rd32(rd32(rd32(sp0 - 0xa0u)) + 0x7b4u);
                wr32(sp0 - 0x98u, t40);
                eax = rd32(arg1 + 0x298u);
                ecx = 2u;
                ebx = rd32(rd32(rd32(sp0 - 0xa0u)) + 0x7ccu);
                loc_a4 = 0u;
                loc_98 = t40;
L_1021f787: ;
    COW_AT(1021f787)
                if ((eax & 1u << (ecx & 0x1fu)) == 0u)
                {
                    ebp = loc_a4;
                }
                else
                {
                    ebp = loc_a4;
    COW_AT(1021f796)
                    wr32(sp0 - 0xa4u, ebp + 1u);
                    loc_a4 = ebp + 1u;
                    ebp = ebp + 1u;
                }
    COW_AT(1021f79b)
                if ((int32_t)(ecx + 3u) < 17)
                {
                    cf = ecx + 3u < 0x11u;
                    pf = PARITY((uint8_t)(ecx - 0xeu));
                    zf = ecx == 0xeu;
                    sf = (int32_t)(ecx - 0xeu) < 0;
                    of = ((ecx + 3u ^ 0x11u) & (ecx + 3u ^ ecx - 0xeu)) >> 0x1fu;
                    ecx = ecx + 3u;
                    goto L_1021f787;
                }
    COW_AT(1021f7a3)
                t41 = (uint16_t)(uint32_t)((int32_t)eax >> ((rd32(sp0 - 0x88u) << 4u & 0x1fu) < 0x20u ? rd32(sp0 - 0x88u) << 4u & 0x1fu : 0x1fu));
                wr32(sp0 - 0x94u, t41);
                t42 = (uint16_t)(uint32_t)((int32_t)eax >> ((rd32(sp0 - 0x9cu) << 4u & 0x1fu) < 0x20u ? rd32(sp0 - 0x9cu) << 4u & 0x1fu : 0x1fu));
                wr32(sp0 - 0x88u, t42);
                if ((int32_t)ebp <= 0)
                {
                    edx = t41;
                    loc_94 = t41;
                }
                else
                {
                    edi = edi - 8u;
                    pf = PARITY((uint8_t)ebp);
                    zf = ebp == 0u;
                    sf = (int32_t)ebp < 0;
                    loc_94 = t41;
                    loc_88 = t42;
    COW_AT(1021f7d1)
                    t43 = ebp * 3u - 3u;
                    wr32(sp0 - 0xa0u, t43);
                    cf = 0u;
                    of = 0u;
                    loc_a0 = t43;
L_1021f7d9: ;
    COW_AT(1021f7d9)
                    wr32(sp0 - 0xb8u, 0u);
                    wr32(sp0 - 0xbcu, 0u);
                    wr32(sp0 - 0xc0u, 0x80808080u);
                    wr32(sp0 - 0xc4u, esi);
                    wr32(sp0 - 0xc8u, edi);
                    if ((loc_88 & 1u << (loc_a0 & 0x1fu)) != 0u)
                    {
                        eax = loc_88;
                        ecx = loc_98;
                        edx = 1u << (loc_a0 & 0x1fu);
                        loc_c4 = esi;
                        loc_c8 = edi;
                    }
                    else
                    {
                        eax = loc_88;
                        edx = 1u << (loc_a0 & 0x1fu);
                        loc_c4 = esi;
                        loc_c8 = edi;
    COW_AT(1021f7fb)
                        ecx = ebx;
                    }
    COW_AT(1021f7fd)
                    g->esp = sp0 - 0xb4u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, loc_c8, loc_c4, 0x80808080u, 0u, 0u);
                    t44 = rd32(sp0 - 0xa0u) - 3u;
                    t45 = rd32(sp0 - 0xa0u);
                    wr32(sp0 - 0xa0u, t44);
                    if (ebp != 1u)
                    {
                        edi = edi + (uint32_t)(int16_t)rd16(ebx + 0x20u) - (uint32_t)(int16_t)rd16(ebx + 0x22u) - 2u;
                        cf = t45 < 3u;
                        pf = PARITY((uint8_t)(ebp - 1u));
                        zf = ebp == 1u;
                        sf = (int32_t)(ebp - 1u) < 0;
                        of = ebp == 0x80000000u;
                        ebp = ebp - 1u;
                        loc_a4 = rd32(sp0 - 0xa4u);
                        loc_98 = rd32(sp0 - 0x98u);
                        loc_94 = rd32(sp0 - 0x94u);
                        loc_88 = rd32(sp0 - 0x88u);
                        loc_a0 = t44;
                        goto L_1021f7d9;
                    }
    COW_AT(1021f81e)
                    edx = rd32(sp0 - 0x94u);
                    ebp = rd32(sp0 - 0xa4u);
                    loc_a4 = rd32(sp0 - 0xa4u);
                    loc_98 = rd32(sp0 - 0x98u);
                    loc_94 = rd32(sp0 - 0x94u);
                }
    COW_AT(1021f826)
                if ((int32_t)ebp <= 0)
                {
                    eax = (uint32_t)(int16_t)rd16(ebx + 0x22u) - (uint32_t)(int16_t)rd16(ebx + 0x20u);
                    ecx = (uint32_t)(int16_t)rd16(sp0 - 0x90u);
                }
                else
                {
                    edi = (uint32_t)(int16_t)rd16(ebx + 0x22u) + (uint32_t)(int16_t)rd16(sp0 - 0x90u) - (uint32_t)(int16_t)rd16(ebx + 0x20u) + 8u;
                    pf = PARITY((uint8_t)ebp);
                    zf = ebp == 0u;
                    sf = (int32_t)ebp < 0;
    COW_AT(1021f83d)
                    wr32(sp0 - 0x9cu, loc_a4);
                    ebp = ebp * 3u - 3u;
                    cf = 0u;
                    of = 0u;
                    loc_9c = loc_a4;
L_1021f84f: ;
    COW_AT(1021f84f)
                    wr32(sp0 - 0xb8u, 0u);
                    wr32(sp0 - 0xbcu, 0u);
                    wr32(sp0 - 0xc0u, 0x80808080u);
                    wr32(sp0 - 0xc4u, esi);
                    wr32(sp0 - 0xc8u, edi);
                    if ((edx & 1u << (ebp & 0x1fu)) != 0u)
                    {
                        eax = 1u << (ebp & 0x1fu);
                        ecx = loc_98;
                        loc_c4 = esi;
                        loc_c8 = edi;
                    }
                    else
                    {
                        eax = 1u << (ebp & 0x1fu);
                        loc_c4 = esi;
                        loc_c8 = edi;
    COW_AT(1021f86b)
                        ecx = ebx;
                    }
    COW_AT(1021f86d)
                    g->esp = sp0 - 0xb4u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, loc_c8, loc_c4, 0x80808080u, 0u, 0u);
                    t46 = rd32(sp0 - 0x9cu) - 1u;
                    t47 = rd32(sp0 - 0x9cu);
                    wr32(sp0 - 0x9cu, t46);
                    if (t47 != 1u)
                    {
                        edi = edi + (uint32_t)(int16_t)rd16(ebx + 0x22u) - (uint32_t)(int16_t)rd16(ebx + 0x20u) + 2u;
                        cf = ebp < 3u;
                        ebp = ebp - 3u;
                        pf = PARITY((uint8_t)(t47 - 1u));
                        zf = t47 == 1u;
                        sf = (int32_t)(t47 - 1u) < 0;
                        of = t47 == 0x80000000u;
                        loc_9c = t46;
                        goto L_1021f84b;
                    }
                    eax = t46;
                    ecx = (uint32_t)(int16_t)rd16(ebx + 0x22u) - (uint32_t)(int16_t)rd16(ebx + 0x20u);
                    edx = (uint32_t)(int16_t)rd16(ebx + 0x20u);
                }
    COW_AT(1021f88e)
                esi = esi + 8u;
            }
        }
    COW_AT(1021f898)
        wr32(sp0 - 0xb8u, 2u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        t48 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        t49 = g->edx;
        wr32(sp0 - 0xa0u, t48);
        if (t48 == 0u)
        {
            loc_a8 = rd32(sp0 - 0xa8u);
            loc_ac = rd32(sp0 - 0xacu);
            loc_b0 = rd32(sp0 - 0xb0u);
            loc_b4 = rd32(sp0 - 0xb4u);
        }
        else
        {
            eax = t48;
            edx = t49;
            loc_a0 = t48;
    COW_AT(1021f8ae)
            if (rd32(rd32(eax) + 0x59cu) == 0u)
            {
                ebx = rd32(rd32(eax) + 0x59cu);
                edi = (uint32_t)(int16_t)rd16(sp0 - 0x90u) + 0x12u;
            }
            else
            {
                ebx = rd32(rd32(eax) + 0x59cu);
                eax = rd32(eax);
                edi = (uint32_t)(int16_t)rd16(sp0 - 0x90u) + 0x12u;
    COW_AT(1021f8c2)
                wr32(sp0 - 0xb8u, 0u);
                wr32(sp0 - 0xbcu, 0u);
                wr32(sp0 - 0xc0u, 0x80808080u);
                wr32(sp0 - 0xc4u, esi);
                wr32(sp0 - 0xc8u, edi);
                g->esp = sp0 - 0xb4u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), ebx, 5, edi, esi, 0x80808080u, 0u, 0u);
                edx = (uint32_t)(int16_t)rd16(ebx + 0x20u);
                edi = edi + (uint32_t)(int16_t)rd16(ebx + 0x22u) - (uint32_t)(int16_t)rd16(ebx + 0x20u) + 2u;
                loc_a0 = rd32(sp0 - 0xa0u);
            }
    COW_AT(1021f8e2)
            t50 = rd32(arg1 + 0x27cu);
            wr32(sp0 - 0xb8u, t50);
            wr32(sp0 - 0xbcu, COW_IMG(0x1036f890u));
            wr32(sp0 - 0xc0u, sp0 - 0x80u);
            g->ebx = ebx;
            g->ecx = sp0 - 0x80u;
            g->esp = sp0 - 0xacu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x1036f890u), t50, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
            t51 = g->ecx;
            wr32(sp0 - 0xc4u, 0x80808080u);
            wr32(sp0 - 0xc8u, sp0 - 0x80u);
            wr32(sp0 - 0xccu, esi + 4u);
            wr32(sp0 - 0xd0u, edi);
            g->eax = esi + 4u;
            t52 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, edi, esi + 4u, sp0 - 0x80u, 0x80808080u, sp0 - 0x80u, COW_IMG(0x1036f890u), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
            if (!(rd32(arg1 + 0x130u) >> 8u & 1u))
            {
                loc_a8 = rd32(sp0 - 0xa8u);
                loc_ac = rd32(sp0 - 0xacu);
                loc_b0 = rd32(sp0 - 0xb0u);
                loc_b4 = rd32(sp0 - 0xb4u);
            }
            else
            {
                eax = t52;
    COW_AT(1021f91d)
                if (rd32(rd32(rd32(sp0 - 0xa0u)) + 0x5a0u) == 0u)
                {
                    loc_a8 = rd32(sp0 - 0xa8u);
                    loc_ac = rd32(sp0 - 0xacu);
                    loc_b0 = rd32(sp0 - 0xb0u);
                    loc_b4 = rd32(sp0 - 0xb4u);
                }
                else
                {
                    ecx = rd32(rd32(rd32(sp0 - 0xa0u)) + 0x5a0u);
                    edx = rd32(sp0 - 0xa0u);
    COW_AT(1021f92d)
                    wr32(sp0 - 0xb8u, 0u);
                    wr32(sp0 - 0xbcu, 0u);
                    wr32(sp0 - 0xc0u, 0x80808080u);
                    wr32(sp0 - 0xc4u, esi);
                    wr32(sp0 - 0xc8u, eax);
                    g->esp = sp0 - 0xb4u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, eax, esi, 0x80808080u, 0u, 0u);
                    loc_a8 = rd32(sp0 - 0xa8u);
                    loc_ac = rd32(sp0 - 0xacu);
                    loc_b0 = rd32(sp0 - 0xb0u);
                    loc_b4 = rd32(sp0 - 0xb4u);
                }
            }
        }
    }
L_1021f93d: ;
    COW_AT(1021f93d)
    g->ebx = loc_a8;
    g->esi = loc_b0;
    g->edi = loc_b4;
    g->ebp = loc_ac;
    return;
L_1021f517: ;
    COW_AT(1021f517)
    wr32(sp0 - 0xa4u, 2u);
    loc_a4 = 2u;
    goto L_1021f539;
L_1021f521: ;
    COW_AT(1021f521)
    wr32(sp0 - 0xa4u, 1u);
    loc_a4 = 1u;
    goto L_1021f539;
L_1021f52b: ;
    COW_AT(1021f52b)
    wr32(sp0 - 0x94u, ebp + 5u);
    wr32(sp0 - 0xa4u, edi + 5u);
    loc_94 = ebp + 5u;
    loc_a4 = edi + 5u;
    goto L_1021f539;
L_1021f84b: ;
    COW_AT(1021f84b)
    edx = rd32(sp0 - 0x94u);
    loc_98 = rd32(sp0 - 0x98u);
    loc_94 = rd32(sp0 - 0x94u);
    goto L_1021f84f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021f480(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021f4d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f4ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f4f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f509u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f50cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f511u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f517u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f521u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f52bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f539u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t loc_a4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f54du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t loc_a4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f562u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t loc_a4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f564u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t loc_a4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f574u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f585u:
    {
        uint32_t cf;
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
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f587u:
    {
        uint32_t cf;
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
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f59du:
    {
        uint32_t cf;
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
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        wr32(sp0 - 0xb8u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1021f5d3u:
    {
        uint32_t cf;
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
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021f5e9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1021f602u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1021f617u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1021f61fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1021f634u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1021f67cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f691u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f693u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f699u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f6afu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f6b1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f710u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f725u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f729u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f73eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f756u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f75eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f787u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f796u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f79bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f7a3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f7d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f7d9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f7fbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, 0x80808080u);
        wr32(sp0 - 0xbcu, 0u);
        wr32(sp0 - 0xb8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021f7fdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, 0x80808080u);
        wr32(sp0 - 0xbcu, 0u);
        wr32(sp0 - 0xb8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021f81eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f826u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f83du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f84bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f84fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f86bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, 0x80808080u);
        wr32(sp0 - 0xbcu, 0u);
        wr32(sp0 - 0xb8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021f86du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, 0x80808080u);
        wr32(sp0 - 0xbcu, 0u);
        wr32(sp0 - 0xb8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021f88eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f898u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f8aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f8c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f8e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f91du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f92du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        wr32(sp0 - 0xe0u, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1021f93du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_94;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021f480(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1021f480(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
