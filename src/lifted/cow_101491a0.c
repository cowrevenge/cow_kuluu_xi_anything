/* f_0x101491a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101491a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_8;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101491b6u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101491b6;
    case 0x101491e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101491e3;
    case 0x10149205u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149205;
    case 0x10149212u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149212;
    case 0x10149216u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149216;
    case 0x1014921bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1014921b;
    case 0x1014922cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1014922c;
    case 0x10149231u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149231;
    case 0x10149242u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149242;
    case 0x10149247u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149247;
    case 0x10149251u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149251;
    case 0x10149255u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149255;
    case 0x1014925du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1014925d;
    case 0x101492b8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101492b8;
    case 0x101492c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101492c4;
    case 0x101492d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101492d6;
    case 0x101492dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101492da;
    case 0x101492fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101492fa;
    case 0x10149308u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149308;
    case 0x10149318u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149318;
    case 0x10149320u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149320;
    case 0x1014932bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1014932b;
    case 0x10149337u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149337;
    case 0x1014934bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1014934b;
    case 0x10149356u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149356;
    case 0x1014935eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1014935e;
    case 0x1014936eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1014936e;
    case 0x10149375u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149375;
    case 0x1014937eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1014937e;
    case 0x10149393u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149393;
    case 0x10149397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149397;
    case 0x101493a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101493a2;
    case 0x101493b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101493b5;
    case 0x101493c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101493c3;
    case 0x101493d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101493d5;
    case 0x101493ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101493dd;
    case 0x101493e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101493e1;
    case 0x101493eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101493ea;
    case 0x101493ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101493ec;
    case 0x101493f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101493f9;
    case 0x10149403u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149403;
    case 0x10149409u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149409;
    case 0x10149411u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149411;
    case 0x10149419u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149419;
    case 0x10149468u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149468;
    case 0x1014947fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_ebx = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1014947f;
    case 0x10149480u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10149480;
    default: break;
    }
#endif

    COW_AT(101491a0)
    if (arg1 == 0u) goto L_101492b8;
    COW_AT(101491b6)
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    t1 = cow_call_regs(g, COW_IMG(0x100991d0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    g->edi = self;
    g->edx = t2;
    t3 = cow_stdcall(g, COW_IMG(0x10161010u), 1, arg1);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x10160f30u), rd32(COW_IMG(0x106218fcu)), 1, arg1);
    if (t5 == 0u) goto L_10149480;
    eax = t5;
    loc_14 = t1;
    loc_10 = t3;
    COW_AT(101491e3)
    t6 = rd32(eax + 4u);
    t7 = rd32(eax + 8u);
    if (rd8(COW_IMG(0x10485640u)) == 0u)
    {
        ecx = (rd32(eax) & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        eax = t7;
        edx = t6;
        loc_8 = t6;
    COW_AT(10149212)
        loc_24 = 0u;
    }
    else
    {
        ecx = (rd32(eax) & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        edx = t6;
        pf = PARITY(rd8(COW_IMG(0x10485640u)));
        zf = rd8(COW_IMG(0x10485640u)) == 0u;
        sf = (int8_t)rd8(COW_IMG(0x10485640u)) < 0;
        loc_8 = t6;
    COW_AT(10149205)
        t8 = 1u << (ecx & 0x1fu);
        eax = t8;
        loc_24 = t8;
    }
    COW_AT(10149216)
    if (arg1 == 0x1au)
    {
    COW_AT(1014921b)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t9 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0xc98u);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        else
        {
            eax = t9;
            ecx = t10;
            edx = t11;
    COW_AT(1014922c)
            loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)((uint8_t)loc_8 + 5u);
        }
    COW_AT(10149231)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t12 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0xc99u);
        t13 = g->ecx;
        t14 = g->edx;
        if ((uint8_t)t12 == 0u)
        {
            eax = t12;
            ecx = t13;
            edx = t14;
        }
        else
        {
            eax = t12;
            ecx = t13;
            edx = t14;
    COW_AT(10149242)
            loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)((uint8_t)loc_8 + 5u);
        }
    COW_AT(10149247)
        if ((uint8_t)loc_8 <= 0x64u)
        {
            eax = (eax & 0xffffff00u) | 0x64u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 0x64u;
    COW_AT(10149251)
            loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)eax;
        }
    }
    COW_AT(10149255)
    if (rd8(sp0 + 0xcu) == 0u)
    {
        loc_28 = 0u;
    }
    else
    {
    COW_AT(1014925d)
        t15 = rd32(arg2 * 4u + self + 0x60u);
        t16 = rd32(self + 0x5cu) + (uint32_t)(int8_t)rd8(self + 0x51u) * 0x54u;
        g->eax = arg2;
        g->esp = sp0 - 0x38u;
        t17 = cow_fastcall(g, COW_IMG(0x101f4b20u), t16, rd32(self + 0x5cu), 4, 0u, 0xeu, t15, 0x80808080u);
        t18 = cow_fastcall(g, COW_IMG(0x101f4b20u), t16, (uint8_t)loc_8, 4, 6u, 7u, (uint8_t)loc_8, 0x80808080u);
        t19 = g->edx;
        wr32(t16 + 0x48u, 0xffffffffu);
        wr8(self + 0x51u, (uint8_t)(rd8(self + 0x51u) + 1u));
        edx = t19;
        loc_28 = 0u;
    }
L_101492c4: ;
    COW_AT(101492c4)
    t20 = arg1 * 0x20u + loc_28;
    ebx = t20;
    loc_20 = t20;
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = rd32(sp0 - 0x18u);
L_101492da: ;
    COW_AT(101492da)
    if (arg1 == 0u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x51u) * 0x15u;
        ecx = rd32(COW_IMG(0x106218fcu));
        esi = rd32(self + 0x5cu) + (uint32_t)(int8_t)rd8(self + 0x51u) * 0x54u;
    COW_AT(10149308)
        g->eax = eax;
        g->edx = loc_28;
        g->esp = sp0 - 0x3cu;
        t23 = cow_thiscall(g, COW_IMG(0x10160f00u), ecx, 1, loc_28);
        t24 = g->edx;
        edx = t24;
        ebp = t23;
        loc_2c = t23;
    }
    else
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x51u) * 0x15u;
        ecx = rd32(COW_IMG(0x106218fcu));
        esi = rd32(self + 0x5cu) + (uint32_t)(int8_t)rd8(self + 0x51u) * 0x54u;
    COW_AT(101492fa)
        g->eax = eax;
        g->esp = sp0 - 0x3cu;
        t21 = cow_fastcall(g, COW_IMG(0x10160ef0u), ecx, edx, 1, ebx);
        t22 = g->edx;
        edx = t22;
        ebp = t21;
        loc_2c = t21;
    }
    COW_AT(10149318)
    if (ebp != 0u)
    {
    COW_AT(10149320)
        if (rd16(ebp) != 0u)
        {
    COW_AT(1014932b)
            if (arg1 == 0u) goto L_10149409;
    COW_AT(10149337)
            g->edi = self;
            g->eax = arg1;
            g->ecx = rd32(COW_IMG(0x106218fcu));
            g->edx = edx;
            t25 = rd32(COW_IMG(0x106218fcu));
            g->esp = sp0 - 0x3cu;
            t26 = cow_stdcall(g, COW_IMG(0x10160fb0u), 1, ebx);
            t27 = g->ecx;
            t28 = g->edx;
            if (t26 == 0u)
            {
                eax = t26;
                ecx = t27;
                edx = t28;
                loc_1c = t26;
    COW_AT(10149356)
                wr32(sp0 + 0xcu, 0u);
            }
            else
            {
                eax = t26;
                edx = t28;
                loc_1c = t26;
    COW_AT(1014934b)
                t29 = rd8(eax + 2u);
                wr32(sp0 + 0xcu, t29);
                ecx = t29;
            }
    COW_AT(1014935e)
            if (rd8(self + 0x52u) == 0u)
            {
                ebx = 0x80404040u;
                loc_18 = 0x80404040u;
            }
            else
            {
                ecx = (ecx & 0xffffff00u) | rd8(self + 0x52u);
    COW_AT(1014936e)
                if (arg1 != 0x1au) goto L_10149397;
    COW_AT(10149375)
                if (rd8(COW_IMG(0x10485641u)) < 0x60u)
                {
                    ebx = 0x80404040u;
                    loc_18 = 0x80404040u;
                    goto L_101493dd;
                }
    COW_AT(1014937e)
                g->eax = eax;
                g->esp = sp0 - 0x3cu;
                t30 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0x80bu);
                if ((uint8_t)t30 == 0u)
                {
                    eax = loc_1c;
                    ebx = 0x80404040u;
                    loc_18 = 0x80404040u;
                    goto L_101493dd;
                }
                eax = loc_1c;
    COW_AT(10149393)
                ebp = loc_2c;
L_10149397: ;
    COW_AT(10149397)
                if ((loc_24 & rd32(ebp + 8u)) == 0u)
                {
                    ebx = 0x80404040u;
                    loc_18 = 0x80404040u;
                }
                else
                {
                    edx = loc_24;
    COW_AT(101493a2)
                    if (loc_14 == 0u)
                    {
                        ebx = rd32(COW_IMG(0x10371858u) + arg2 * 4u);
                        loc_18 = 0x80404040u;
                    }
                    else
                    {
                        ebx = rd32(COW_IMG(0x10371858u) + arg2 * 4u);
                        ebp = loc_14;
    COW_AT(101493b5)
                        if ((int32_t)rd32(sp0 + 0xcu) > (int32_t)(rd8(ebp + 2u) & 0x7fu))
                        {
                            loc_18 = 0x80404040u;
                        }
                        else
                        {
    COW_AT(101493c3)
                            if ((int32_t)loc_10 >= (int32_t)(uint8_t)loc_8)
                            {
                                loc_18 = 0x80404040u;
                            }
                            else
                            {
    COW_AT(101493d5)
                                loc_18 = 0x80808080u;
                            }
                        }
                    }
                }
            }
L_101493dd: ;
    COW_AT(101493dd)
            if (eax == 0u)
            {
    COW_AT(101493ea)
                ebp = 0u;
            }
            else
            {
    COW_AT(101493e1)
                t31 = rd8(eax + 3u);
                ebp = t31;
            }
    COW_AT(101493ec)
            if (ebp != rd8(loc_2c + 4u))
            {
                eax = rd8(loc_2c + 4u);
                goto L_10149403;
            }
            eax = rd8(loc_2c + 4u);
    COW_AT(101493f9)
            loc_1c = 0x802060a0u;
L_10149411: ;
    COW_AT(10149411)
            wr32(sp0 + 0xcu, 0xffffffffu);
L_10149419: ;
    COW_AT(10149419)
            g->esp = sp0 - 0x3cu;
            cow_fastcall(g, COW_IMG(0x101f4b20u), esi, loc_20, 4, 1u, 0x1eu, loc_20, ebx);
            t32 = g->edx;
            g->eax = loc_1c;
            t33 = cow_fastcall(g, COW_IMG(0x101f4b20u), esi, t32, 4, 3u, 8u, ebp + 1u, loc_1c);
            t34 = rd32(sp0 + 0xcu) + 1u;
            cow_fastcall(g, COW_IMG(0x101f4b20u), esi, t34, 4, 5u, 0x1fu, t34, loc_18);
            t35 = g->edx;
            wr32(esi + 0x48u, (uint32_t)(int16_t)rd16(loc_2c));
            wr8(self + 0x51u, (uint8_t)(rd8(self + 0x51u) + 1u));
            edx = t35;
            ebx = loc_20;
        }
    }
    COW_AT(10149468)
    if ((int32_t)(loc_28 + 1u) < 32)
    {
        loc_28 = loc_28 + 1u;
        loc_20 = ebx + 1u;
        ebx = ebx + 1u;
        goto L_101492d6;
    }
    COW_AT(1014947f)
L_10149480: ;
    COW_AT(10149480)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_101492b8: ;
    COW_AT(101492b8)
    edx = in_edx;
    loc_14 = rd32(sp0 - 0x14u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = 1u;
    loc_24 = 0u;
    goto L_101492c4;
L_101492d6: ;
    COW_AT(101492d6)
    goto L_101492da;
L_10149403: ;
    COW_AT(10149403)
    loc_1c = ebx;
    goto L_10149419;
L_10149409: ;
    COW_AT(10149409)
    eax = arg1;
    ebx = 0x80808080u;
    ebp = 0xffffffffu;
    goto L_10149411;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101491a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101491b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        g->esi = 0u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x101491e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10149205u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10149212u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10149216u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1014921bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1014922cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10149231u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10149242u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10149247u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10149251u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10149255u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1014925du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101492b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101492c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101492d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101492dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101492fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149308u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149318u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149320u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1014932bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149337u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014934bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149356u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1014935eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1014936eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0x80404040u;
        wr32(sp0 - 0x18u, 0x80404040u);
        (void)sp0;
        return 1;
    }
    case 0x10149375u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0x80404040u;
        wr32(sp0 - 0x18u, 0x80404040u);
        (void)sp0;
        return 1;
    }
    case 0x1014937eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0x80404040u;
        wr32(sp0 - 0x18u, 0x80404040u);
        (void)sp0;
        return 1;
    }
    case 0x10149393u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0x80404040u;
        wr32(sp0 - 0x18u, 0x80404040u);
        (void)sp0;
        return 1;
    }
    case 0x10149397u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0x80404040u;
        wr32(sp0 - 0x18u, 0x80404040u);
        (void)sp0;
        return 1;
    }
    case 0x101493a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x18u, 0x80404040u);
        (void)sp0;
        return 1;
    }
    case 0x101493b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x18u, 0x80404040u);
        (void)sp0;
        return 1;
    }
    case 0x101493c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x18u, 0x80404040u);
        (void)sp0;
        return 1;
    }
    case 0x101493d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101493ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101493e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101493eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101493ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x101493f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149403u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149409u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10149411u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149419u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149468u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1014947fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10149480u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101491a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101491a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
