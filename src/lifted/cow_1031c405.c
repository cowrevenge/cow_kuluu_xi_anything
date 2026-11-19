/* f_0x1031c405 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031c405(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_144;
    uint32_t loc_148;
    uint32_t loc_14c;
    uint32_t loc_150;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 344u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031c42du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x14cu); in_esi = rd32(sp0 - 0x148u); in_ebx = rd32(sp0 - 0x144u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x144u); g->edi = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x148u); goto E_1031c42d;
    case 0x1031c435u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x14cu); in_esi = rd32(sp0 - 0x148u); in_ebx = rd32(sp0 - 0x144u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x144u); g->edi = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x148u); goto E_1031c435;
    case 0x1031c44fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x14cu); in_esi = rd32(sp0 - 0x148u); in_ebx = rd32(sp0 - 0x144u); loc_3c = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x144u); g->edi = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x148u); goto E_1031c44f;
    case 0x1031c451u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c451;
    case 0x1031c453u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_14c = rd32(sp0 - 0x14cu); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1031c453;
    case 0x1031c46au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); goto E_1031c46a;
    case 0x1031c493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c493;
    case 0x1031c495u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c495;
    case 0x1031c4b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1031c4b4;
    case 0x1031c4cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); goto E_1031c4ca;
    case 0x1031c4d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c4d5;
    case 0x1031c4e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c4e8;
    case 0x1031c4f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c4f1;
    case 0x1031c4fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c4fa;
    case 0x1031c507u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c507;
    case 0x1031c50cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c50c;
    case 0x1031c517u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c517;
    case 0x1031c51au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c51a;
    case 0x1031c528u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c528;
    case 0x1031c531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c531;
    case 0x1031c53au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c53a;
    case 0x1031c546u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c546;
    case 0x1031c553u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c553;
    case 0x1031c559u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c559;
    case 0x1031c55fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c55f;
    case 0x1031c56fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c56f;
    case 0x1031c57du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c57d;
    case 0x1031c58au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c58a;
    case 0x1031c5a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c5a1;
    case 0x1031c5abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c5ab;
    case 0x1031c5b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c5b6;
    case 0x1031c5c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c5c4;
    case 0x1031c5dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c5dc;
    case 0x1031c5e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c5e0;
    case 0x1031c5ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c5eb;
    case 0x1031c5f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c5f3;
    case 0x1031c5feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c5fe;
    case 0x1031c601u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c601;
    case 0x1031c60au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c60a;
    case 0x1031c616u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c616;
    case 0x1031c629u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c629;
    case 0x1031c62fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c62f;
    case 0x1031c637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c637;
    case 0x1031c646u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c646;
    case 0x1031c656u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c656;
    case 0x1031c65fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c65f;
    case 0x1031c66du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c66d;
    case 0x1031c675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c675;
    case 0x1031c688u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c688;
    case 0x1031c68eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c68e;
    case 0x1031c69au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c69a;
    case 0x1031c6a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c6a5;
    case 0x1031c6c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c6c9;
    case 0x1031c6d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c6d0;
    case 0x1031c6d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c6d8;
    case 0x1031c6f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_14c = rd32(sp0 - 0x14cu); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1031c6f0;
    case 0x1031c6f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_14c = rd32(sp0 - 0x14cu); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1031c6f2;
    case 0x1031c6f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); goto E_1031c6f7;
    case 0x1031c6fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); goto E_1031c6fb;
    case 0x1031c6ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c6ff;
    case 0x1031c703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c703;
    case 0x1031c707u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c707;
    case 0x1031c70bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c70b;
    case 0x1031c70fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_8 = rd32(sp0 - 8u); goto E_1031c70f;
    case 0x1031c713u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c713;
    case 0x1031c717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c717;
    case 0x1031c71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c71b;
    case 0x1031c71fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c71f;
    case 0x1031c723u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c723;
    case 0x1031c727u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c727;
    case 0x1031c72bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c72b;
    case 0x1031c72fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c72f;
    case 0x1031c731u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_150 = rd32(sp0 - 0x150u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1031c731;
    default: break;
    }
#endif

    COW_AT(1031c405)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x144u, in_ebx);
    wr32(sp0 - 0x148u, in_esi);
    wr32(sp0 - 0x14cu, in_edi);
    t1 = rd32(COW_IMG(0x109f83f8u)) * 0x14u;
    wr32(sp0 - 0x150u, t1);
    wr32(sp0 - 0x154u, rd32(COW_IMG(0x109f83fcu)));
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14cu;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x103290b8u)), 2, rd32(COW_IMG(0x109f83fcu)), t1);   /* kernel32.dll!IsBadWritePtr */
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(1031c435)
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x109f83fcu)));
        wr32(sp0 - 0x24u, 0u);
        if ((int32_t)rd32(COW_IMG(0x109f83f8u)) <= 0)
        {
            loc_4 = in_ebp;
            loc_144 = in_ebx;
            loc_148 = in_esi;
            loc_14c = in_edi;
            goto L_1031c6f0;
        }
        ebx = rd32(COW_IMG(0x109f83fcu));
        loc_3c = rd32(COW_IMG(0x109f83fcu));
    COW_AT(1031c44f)
        loc_4 = in_ebp;
        loc_144 = in_ebx;
        loc_148 = in_esi;
        loc_14c = in_edi;
        loc_24 = 0u;
        loc_c = rd32(sp0 - 0xcu);
        loc_14 = rd32(sp0 - 0x14u);
L_1031c453: ;
    COW_AT(1031c453)
        wr32(sp0 - 0x150u, 0x41c4u);
        t5 = rd32(ebx + 0x10u);
        wr32(sp0 - 0x154u, t5);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14cu;
        t6 = cow_stdcall(g, rd32(COW_IMG(0x103290b8u)), 2, t5, 0x41c4u);   /* kernel32.dll!IsBadWritePtr */
        t7 = g->edx;
        if (t6 != 0u)
        {
            edx = t7;
            goto L_1031c6f7;
        }
        edx = t7;
        esi = t5;
    COW_AT(1031c46a)
        wr32(sp0 - 0x30u, 0u);
        t8 = rd32(ebx + 0xcu);
        wr32(sp0 - 0x10u, t8);
        wr32(sp0 - 0x2cu, esi + 0x144u);
        t9 = rd32(ebx + 8u);
        wr32(sp0 - 0x18u, t9);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x40u, esi + 0xc4u);
        loc_30 = 0u;
        loc_10 = t8;
        loc_2c = esi + 0x144u;
        loc_18 = t9;
        loc_1c = 0u;
        loc_34 = 0u;
        loc_40 = esi + 0xc4u;
        esi = esi + 0xc4u;
        loc_c = rd32(sp0 - 0xcu);
        loc_14 = rd32(sp0 - 0x14u);
L_1031c495: ;
    COW_AT(1031c495)
        wr32(sp0 - 0x150u, 0x40u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 8u, 0u);
        edi = sp0 - 0x140u;
        eax = 0u;
        ecx = 0x40u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if ((int32_t)loc_18 < 0)
        {
            loc_28 = 0u;
            loc_20 = 0u;
            goto L_1031c68e;
        }
    COW_AT(1031c4b4)
        wr32(sp0 - 0x150u, 0x8000u);
        wr32(sp0 - 0x154u, loc_10);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14cu;
        t10 = cow_stdcall(g, rd32(COW_IMG(0x103290b8u)), 2, loc_10, 0x8000u);   /* kernel32.dll!IsBadWritePtr */
        t11 = g->edx;
        if (t10 != 0u)
        {
            edx = t11;
            goto L_1031c6fb;
        }
    COW_AT(1031c4ca)
        edx = rd32(sp0 - 0x10u) + 0xffcu;
        ebx = 0u;
        loc_8 = rd32(sp0 - 8u);
L_1031c4d5: ;
    COW_AT(1031c4d5)
        if (rd32(edx - 0xff4u) != 0xffffffffu) goto L_1031c70b;
        esi = edx - 0xff0u;
    COW_AT(1031c4e8)
        if (rd32(edx) != 0xffffffffu) goto L_1031c70b;
L_1031c4f1: ;
    COW_AT(1031c4f1)
        if (!(rd32(esi) & 1u))
        {
            ecx = rd32(esi);
            edi = rd32(esi);
            goto L_1031c50c;
        }
        ecx = rd32(esi);
        edi = rd32(esi);
    COW_AT(1031c4fa)
        if ((int32_t)(ecx - 1u) > 1024) goto L_1031c6ff;
        ecx = ecx - 1u;
    COW_AT(1031c507)
        wr32(sp0 - 8u, loc_8 + 1u);
        loc_8 = loc_8 + 1u;
L_1031c528: ;
    COW_AT(1031c528)
        if ((int32_t)ecx < 16) goto L_1031c707;
    COW_AT(1031c531)
        if ((ecx & 0xfu) != 0u) goto L_1031c707;
    COW_AT(1031c53a)
        if ((int32_t)ecx > 4080) goto L_1031c707;
    COW_AT(1031c546)
        if (rd32(ecx + esi - 4u) != edi) goto L_1031c703;
        eax = ecx + esi;
    COW_AT(1031c553)
        if (eax < edx)
        {
            esi = eax;
            goto L_1031c4f1;
        }
        zf = eax == edx;
    COW_AT(1031c559)
        if (!zf) goto L_1031c703;
    COW_AT(1031c55f)
        if ((int32_t)(ebx + 1u) < 8)
        {
            edx = edx + 0x1000u;
            ebx = ebx + 1u;
            goto L_1031c4d5;
        }
        edx = edx + 0x1000u;
    COW_AT(1031c56f)
        if (rd32(rd32(sp0 - 0x2cu)) != loc_8) goto L_1031c70f;
        esi = rd32(sp0 - 0x2cu);
    COW_AT(1031c57d)
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, sp0 - 0x140u);
        loc_8 = sp0 - 0x140u;
        loc_c = 0u;
        loc_14 = rd32(sp0 - 0x14u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
L_1031c58a: ;
    COW_AT(1031c58a)
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x38u, esi);
        if (rd32(esi + 4u) == esi)
        {
            edx = esi;
            edi = esi + 8u;
            loc_14 = 0u;
            goto L_1031c656;
        }
        eax = rd32(esi + 4u);
        edx = esi;
        edi = esi + 8u;
        loc_14 = 0u;
        loc_38 = esi;
L_1031c5a1: ;
    COW_AT(1031c5a1)
        if (loc_14 == rd32(loc_8)) goto L_1031c629;
    COW_AT(1031c5ab)
        if (eax < rd32(sp0 - 0x10u)) goto L_1031c71f;
        ecx = rd32(sp0 - 0x10u);
    COW_AT(1031c5b6)
        if (eax >= ecx + 0x8000u) goto L_1031c71f;
    COW_AT(1031c5c4)
        if (((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xcu == ((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xffcu)
        {
            edx = ((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xffcu;
            goto L_1031c713;
        }
        ecx = ((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xcu;
        edx = ((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xffcu;
L_1031c5dc: ;
    COW_AT(1031c5dc)
        if (ecx == eax) goto L_1031c5eb;
    COW_AT(1031c5e0)
        if (ecx + (rd32(ecx) & 0xfffffffeu) != edx)
        {
            ecx = ecx + (rd32(ecx) & 0xfffffffeu);
            goto L_1031c5dc;
        }
        ecx = ecx + (rd32(ecx) & 0xfffffffeu);
L_1031c5eb: ;
    COW_AT(1031c5eb)
        if (ecx == edx) goto L_1031c713;
    COW_AT(1031c5f3)
        if ((int32_t)((uint32_t)((int32_t)rd32(eax) >> 4u) - 1u) <= 63)
        {
            ecx = (uint32_t)((int32_t)rd32(eax) >> 4u) - 1u;
        }
        else
        {
    COW_AT(1031c5fe)
            wr32(sp0 - 0x150u, 0x3fu);
            ecx = 0x3fu;
        }
    COW_AT(1031c601)
        if (ecx != loc_c) goto L_1031c717;
    COW_AT(1031c60a)
        if (rd32(eax + 8u) != loc_38) goto L_1031c71b;
    COW_AT(1031c616)
        wr32(sp0 - 0x14u, loc_14 + 1u);
        wr32(sp0 - 0x38u, eax);
        if (rd32(eax + 4u) != esi)
        {
            edx = eax;
            loc_14 = loc_14 + 1u;
            loc_38 = eax;
            eax = rd32(eax + 4u);
            goto L_1031c5a1;
        }
        edx = eax;
        loc_14 = loc_14 + 1u;
L_1031c629: ;
    COW_AT(1031c629)
        if (loc_14 != 0u)
        {
    COW_AT(1031c62f)
            if ((int32_t)loc_c >= 32)
            {
                ecx = loc_c;
    COW_AT(1031c646)
                t14 = loc_20 | 0x80000000u >> (ecx - 0x20u & 0x1fu);
                wr32(sp0 - 0x20u, t14);
                t15 = loc_1c | 0x80000000u >> (ecx - 0x20u & 0x1fu);
                wr32(sp0 - 0x1cu, t15);
                loc_20 = t14;
                loc_1c = t15;
            }
            else
            {
                ecx = loc_c;
                cf = loc_c < 0x20u;
                pf = PARITY((uint8_t)(loc_c - 0x20u));
                zf = loc_c == 0x20u;
                sf = (int32_t)(loc_c - 0x20u) < 0;
                of = ((loc_c ^ 0x20u) & (loc_c ^ loc_c - 0x20u)) >> 0x1fu;
    COW_AT(1031c637)
                t12 = loc_28 | 0x80000000u >> (ecx & 0x1fu);
                wr32(sp0 - 0x28u, t12);
                t13 = loc_30 | 0x80000000u >> (ecx & 0x1fu);
                wr32(sp0 - 0x30u, t13);
                loc_28 = t12;
                loc_30 = t13;
            }
        }
L_1031c656: ;
    COW_AT(1031c656)
        if (rd32(edx + 4u) != esi) goto L_1031c727;
    COW_AT(1031c65f)
        if (loc_14 != rd32(loc_8)) goto L_1031c727;
        ecx = loc_8;
    COW_AT(1031c66d)
        if (rd32(edi) != edx) goto L_1031c723;
    COW_AT(1031c675)
        wr32(sp0 - 0xcu, loc_c + 1u);
        wr32(sp0 - 8u, loc_8 + 4u);
        if ((int32_t)(loc_c + 1u) < 64)
        {
            esi = edi;
            loc_8 = loc_8 + 4u;
            loc_c = loc_c + 1u;
            goto L_1031c58a;
        }
        loc_c = loc_c + 1u;
    COW_AT(1031c688)
        ebx = rd32(sp0 - 0x3cu);
        esi = rd32(sp0 - 0x40u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_34 = rd32(sp0 - 0x34u);
L_1031c68e: ;
    COW_AT(1031c68e)
        if (loc_28 != rd32(esi - 0x80u)) goto L_1031c72b;
    COW_AT(1031c69a)
        if (loc_20 != rd32(esi)) goto L_1031c72b;
    COW_AT(1031c6a5)
        wr32(sp0 - 0x10u, loc_10 + 0x8000u);
        wr32(sp0 - 0x2cu, loc_2c + 0x204u);
        wr32(sp0 - 0x18u, loc_18 << 1u);
        wr32(sp0 - 0x34u, loc_34 + 1u);
        wr32(sp0 - 0x40u, esi + 4u);
        if ((int32_t)(loc_34 + 1u) < 32)
        {
            loc_10 = loc_10 + 0x8000u;
            loc_2c = loc_2c + 0x204u;
            loc_18 = loc_18 << 1u;
            loc_34 = loc_34 + 1u;
            loc_40 = esi + 4u;
            esi = esi + 4u;
            goto L_1031c493;
        }
    COW_AT(1031c6c9)
        if (loc_30 != rd32(ebx)) goto L_1031c72f;
    COW_AT(1031c6d0)
        if (loc_1c != rd32(ebx + 4u)) goto L_1031c72f;
    COW_AT(1031c6d8)
        t16 = rd32(sp0 - 0x24u) + 1u;
        wr32(sp0 - 0x24u, t16);
        wr32(sp0 - 0x3cu, ebx + 0x14u);
        if ((int32_t)t16 < (int32_t)rd32(COW_IMG(0x109f83f8u)))
        {
            eax = t16;
            loc_24 = t16;
            loc_3c = ebx + 0x14u;
            ebx = ebx + 0x14u;
            goto L_1031c451;
        }
        loc_4 = rd32(sp0 - 4u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_14c = rd32(sp0 - 0x14cu);
L_1031c6f0: ;
    COW_AT(1031c6f0)
        eax = 0u;
    }
    else
    {
        eax = t2;
        edx = t4;
    COW_AT(1031c42d)
        eax = 0xffffffffu;
        loc_4 = in_ebp;
        loc_144 = in_ebx;
        loc_148 = in_esi;
        loc_14c = in_edi;
    }
L_1031c6f2: ;
    COW_AT(1031c6f2)
    g->ebx = loc_144;
    g->esi = loc_148;
    g->edi = loc_14c;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_1031c451: ;
    COW_AT(1031c451)
    loc_4 = rd32(sp0 - 4u);
    loc_144 = rd32(sp0 - 0x144u);
    loc_148 = rd32(sp0 - 0x148u);
    loc_14c = rd32(sp0 - 0x14cu);
    goto L_1031c453;
L_1031c493: ;
    COW_AT(1031c493)
    goto L_1031c495;
L_1031c50c: ;
    COW_AT(1031c50c)
    if ((int32_t)((uint32_t)((int32_t)ecx >> 4u) - 1u) <= 63)
    {
        eax = (uint32_t)((int32_t)ecx >> 4u) - 1u;
    }
    else
    {
    COW_AT(1031c517)
        wr32(sp0 - 0x150u, 0x3fu);
        eax = 0x3fu;
    }
    COW_AT(1031c51a)
    wr32(eax * 4u + sp0 - 0x140u, rd32(eax * 4u + sp0 - 0x140u) + 1u);
    goto L_1031c528;
L_1031c6f7: ;
    COW_AT(1031c6f7)
    wr32(sp0 - 0x150u, 0xfffffffeu);
    loc_150 = 0xfffffffeu;
L_1031c731: ;
    COW_AT(1031c731)
    eax = loc_150;
    loc_4 = rd32(sp0 - 4u);
    loc_144 = rd32(sp0 - 0x144u);
    loc_148 = rd32(sp0 - 0x148u);
    loc_14c = rd32(sp0 - 0x14cu);
    goto L_1031c6f2;
L_1031c6fb: ;
    COW_AT(1031c6fb)
    wr32(sp0 - 0x150u, 0xfffffffcu);
    loc_150 = 0xfffffffcu;
    goto L_1031c731;
L_1031c6ff: ;
    COW_AT(1031c6ff)
    wr32(sp0 - 0x150u, 0xfffffffau);
    loc_150 = 0xfffffffau;
    goto L_1031c731;
L_1031c703: ;
    COW_AT(1031c703)
    wr32(sp0 - 0x150u, 0xfffffff8u);
    loc_150 = 0xfffffff8u;
    goto L_1031c731;
L_1031c707: ;
    COW_AT(1031c707)
    wr32(sp0 - 0x150u, 0xfffffff9u);
    loc_150 = 0xfffffff9u;
    goto L_1031c731;
L_1031c70b: ;
    COW_AT(1031c70b)
    wr32(sp0 - 0x150u, 0xfffffffbu);
    loc_150 = 0xfffffffbu;
    goto L_1031c731;
L_1031c70f: ;
    COW_AT(1031c70f)
    wr32(sp0 - 0x150u, 0xfffffff7u);
    loc_150 = 0xfffffff7u;
    goto L_1031c731;
L_1031c713: ;
    COW_AT(1031c713)
    wr32(sp0 - 0x150u, 0xfffffff5u);
    loc_150 = 0xfffffff5u;
    goto L_1031c731;
L_1031c717: ;
    COW_AT(1031c717)
    wr32(sp0 - 0x150u, 0xfffffff4u);
    loc_150 = 0xfffffff4u;
    goto L_1031c731;
L_1031c71b: ;
    COW_AT(1031c71b)
    wr32(sp0 - 0x150u, 0xfffffff3u);
    loc_150 = 0xfffffff3u;
    goto L_1031c731;
L_1031c71f: ;
    COW_AT(1031c71f)
    wr32(sp0 - 0x150u, 0xfffffff6u);
    loc_150 = 0xfffffff6u;
    goto L_1031c731;
L_1031c723: ;
    COW_AT(1031c723)
    wr32(sp0 - 0x150u, 0xfffffff1u);
    loc_150 = 0xfffffff1u;
    goto L_1031c731;
L_1031c727: ;
    COW_AT(1031c727)
    wr32(sp0 - 0x150u, 0xfffffff2u);
    loc_150 = 0xfffffff2u;
    goto L_1031c731;
L_1031c72b: ;
    COW_AT(1031c72b)
    wr32(sp0 - 0x150u, 0xfffffff0u);
    loc_150 = 0xfffffff0u;
    goto L_1031c731;
L_1031c72f: ;
    COW_AT(1031c72f)
    wr32(sp0 - 0x150u, 0xffffffefu);
    loc_150 = 0xffffffefu;
    goto L_1031c731;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031c405(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031c42du:
    {
        uint32_t cf;
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
        in_edi = rd32(sp0 - 0x14cu);
        in_esi = rd32(sp0 - 0x148u);
        in_ebx = rd32(sp0 - 0x144u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c435u:
    {
        uint32_t cf;
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
        in_edi = rd32(sp0 - 0x14cu);
        in_esi = rd32(sp0 - 0x148u);
        in_ebx = rd32(sp0 - 0x144u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c44fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x14cu);
        in_esi = rd32(sp0 - 0x148u);
        in_ebx = rd32(sp0 - 0x144u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031c451u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c453u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_14c;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_150 = rd32(sp0 - 0x150u);
        loc_14c = rd32(sp0 - 0x14cu);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031c46au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031c493u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c495u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031c4b4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031c4cau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
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
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c4d5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c4e8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c4f1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c4fau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c507u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c50cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c517u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c51au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c528u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c531u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c53au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c546u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c553u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c559u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c55fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c56fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c57du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c58au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c5a1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c5abu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c5b6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c5c4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c5dcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c5e0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c5ebu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c5f3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c5feu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c601u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c60au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c616u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c629u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c62fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c637u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c646u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c656u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c65fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c66du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c675u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c688u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c68eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c69au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c6a5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c6c9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c6d0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c6d8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c6f0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_14c;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_14c = rd32(sp0 - 0x14cu);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c6f2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_14c;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_14c = rd32(sp0 - 0x14cu);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c6f7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
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
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c6fbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
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
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c6ffu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c703u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c707u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c70bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c70fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_150;
        uint32_t loc_8;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c713u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c717u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c71bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c71fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c723u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c727u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c72bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c72fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031c731u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_150;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_150 = rd32(sp0 - 0x150u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x150u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031c405(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031c405(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
