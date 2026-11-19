/* f_0x102edcc3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102edcc3(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102edce2u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edce2;
    case 0x102edcf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edcf1;
    case 0x102edcf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edcf7;
    case 0x102edd04u: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd04;
    case 0x102edd0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd0c;
    case 0x102edd1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd1d;
    case 0x102edd2au: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd2a;
    case 0x102edd32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd32;
    case 0x102edd42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd42;
    case 0x102edd4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd4f;
    case 0x102edd57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd57;
    case 0x102edd6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd6a;
    case 0x102edd6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd6f;
    case 0x102edd74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd74;
    case 0x102edd86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edd86;
    case 0x102eddb3u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102eddb3;
    case 0x102eddbcu: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102eddbc;
    case 0x102eddc2u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102eddc2;
    case 0x102eddcfu: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102eddcf;
    case 0x102eddd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102eddd7;
    case 0x102edde7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edde7;
    case 0x102eddf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102eddf4;
    case 0x102eddfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102eddfc;
    case 0x102ede19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102ede19;
    case 0x102ede20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102ede20;
    case 0x102ede31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102ede31;
    case 0x102ede4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102ede4e;
    case 0x102edea0u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edea0;
    case 0x102edea6u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edea6;
    case 0x102edeafu: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edeaf;
    case 0x102edeb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edeb7;
    case 0x102edecau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edeca;
    case 0x102eded3u: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102eded3;
    case 0x102ededbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102ededb;
    case 0x102edeeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edeee;
    case 0x102edef7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edef7;
    case 0x102edefbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edefb;
    case 0x102edf03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edf03;
    case 0x102edf71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); goto E_102edf71;
    default: break;
    }
#endif

    COW_AT(102edcc3)
    t1 = rd32(rd32(in_esi + 0x14u) + 4u);
    if (rd8(rd32(in_esi + 0x190u) + 0x51u) != 0u)
    {
        eax = rd32(in_esi + 0x190u);
        ecx = self;
        edx = in_edx;
        ebx = rd32(in_esi + 0x14u);
        edi = rd32(rd32(in_esi + 0x14u));
        loc_8 = t1;
    }
    else
    {
        ebx = rd32(in_esi + 0x14u);
        edi = rd32(rd32(in_esi + 0x14u));
        loc_8 = t1;
    COW_AT(102edce2)
        wr32(rd32(in_esi) + 0x14u, 0x3du);
        g->eax = rd32(in_esi);
        g->edx = in_edx;
        t2 = rd32(in_esi);
        g->esp = sp0 - 0x30u;
        t3 = cow_thiscall(g, rd32(t2), self, 0);
        t4 = g->edx;
        eax = t3;
        ecx = in_esi;
        edx = t4;
    }
    COW_AT(102edcf1)
    if (loc_8 != 0u) goto L_102edd0c;
    COW_AT(102edcf7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t5 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        goto L_102edef7;
    }
    edx = t6;
    COW_AT(102edd04)
    t7 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t7;
L_102edd0c: ;
    COW_AT(102edd0c)
    t8 = (uint32_t)rd8(edi) << 8u;
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        loc_c = t8;
        goto L_102edd32;
    }
    eax = t8;
    loc_c = t8;
    COW_AT(102edd1d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t9 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t10 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        goto L_102edef7;
    }
    edx = t10;
    COW_AT(102edd2a)
    t11 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t11;
L_102edd32: ;
    COW_AT(102edd32)
    t12 = loc_c + rd8(edi);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        loc_c = t12;
        goto L_102edd57;
    }
    eax = rd8(edi);
    loc_c = t12;
    COW_AT(102edd42)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t13 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        goto L_102edef7;
    }
    edx = t14;
    COW_AT(102edd4f)
    t15 = rd32(ebx + 4u);
    edi = rd32(ebx);
    loc_8 = t15;
L_102edd57: ;
    COW_AT(102edd57)
    if (loc_c != rd8(edi) * 2u + 6u)
    {
        ecx = rd8(edi) * 2u + 6u;
        loc_8 = loc_8 - 1u;
        loc_1c = rd8(edi);
        edi = edi + 1u;
        goto L_102edd74;
    }
    eax = rd8(edi);
    ecx = rd8(edi) * 2u + 6u;
    loc_8 = loc_8 - 1u;
    loc_1c = rd8(edi);
    edi = edi + 1u;
    COW_AT(102edd6a)
    if ((int32_t)eax < 1) goto L_102edd74;
    COW_AT(102edd6f)
    if ((int32_t)eax <= 4) goto L_102edd86;
L_102edd74: ;
    COW_AT(102edd74)
    wr32(rd32(in_esi) + 0x14u, 9u);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, rd32(rd32(in_esi)), ecx, 0);
    t16 = g->edx;
    eax = loc_1c;
    edx = t16;
L_102edd86: ;
    COW_AT(102edd86)
    wr32(rd32(in_esi) + 0x14u, 0x66u);
    t17 = rd32(in_esi);
    wr32(t17 + 0x18u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(rd32(in_esi) + 4u), t17, 0);
    t18 = g->edx;
    wr32(in_esi + 0x120u, loc_1c);
    if ((int32_t)loc_1c <= 0)
    {
        eax = loc_1c;
        edx = t18;
        goto L_102edea0;
    }
    edx = t18;
    COW_AT(102eddb3)
    eax = in_esi + 0x124u;
    loc_18 = 0u;
    loc_14 = in_esi + 0x124u;
L_102eddbc: ;
    COW_AT(102eddbc)
    if (loc_8 != 0u)
    {
        ecx = 1u;
        goto L_102eddd7;
    }
    COW_AT(102eddc2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t19 = cow_thiscall(g, rd32(ebx + 0xcu), 1u, 0);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        goto L_102edef7;
    }
    edx = t20;
    COW_AT(102eddcf)
    t21 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t21;
L_102eddd7: ;
    COW_AT(102eddd7)
    if (loc_8 != 1u)
    {
        loc_8 = loc_8 - 1u;
        loc_10 = rd8(edi);
        edi = edi + 1u;
        goto L_102eddfc;
    }
    eax = rd8(edi);
    loc_10 = rd8(edi);
    COW_AT(102edde7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t22 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t23 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        goto L_102edef7;
    }
    edx = t23;
    COW_AT(102eddf4)
    t24 = rd32(ebx + 4u);
    edi = rd32(ebx);
    loc_8 = t24;
L_102eddfc: ;
    COW_AT(102eddfc)
    t25 = rd32(in_esi + 0xc4u);
    if ((int32_t)rd32(in_esi + 0x20u) <= 0)
    {
        loc_8 = loc_8 - 1u;
        loc_c = 0u;
        loc_24 = rd8(edi);
        edi = edi + 1u;
        loc_20 = t25;
        goto L_102ede31;
    }
    eax = rd8(edi);
    ecx = t25;
    loc_8 = loc_8 - 1u;
    loc_c = 0u;
    loc_24 = rd8(edi);
    edi = edi + 1u;
L_102ede19: ;
    COW_AT(102ede19)
    if (loc_10 == rd32(ecx)) goto L_102ede4e;
    COW_AT(102ede20)
    if ((int32_t)(loc_c + 1u) < (int32_t)rd32(in_esi + 0x20u))
    {
        ecx = ecx + 0x54u;
        loc_c = loc_c + 1u;
        goto L_102ede19;
    }
    edx = loc_c + 1u;
    loc_c = loc_c + 1u;
    loc_20 = ecx + 0x54u;
L_102ede31: ;
    COW_AT(102ede31)
    wr32(rd32(in_esi) + 0x14u, 5u);
    wr32(rd32(in_esi) + 0x18u, loc_10);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, rd32(rd32(in_esi)), loc_10, 0);
    eax = loc_24;
    ecx = loc_20;
L_102ede4e: ;
    COW_AT(102ede4e)
    wr32(loc_14, ecx);
    wr32(ecx + 0x18u, eax & 0xfu);
    t26 = (uint32_t)((int32_t)eax >> 4u) & 0xfu;
    wr32(ecx + 0x14u, t26);
    t27 = rd32(in_esi);
    wr32(t27 + 0x18u, loc_10);
    t28 = rd32(ecx + 0x14u);
    wr32(t27 + 0x1cu, t28);
    t29 = rd32(ecx + 0x18u);
    wr32(t27 + 0x20u, t29);
    wr32(rd32(in_esi) + 0x14u, 0x67u);
    g->edx = t28;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(rd32(in_esi) + 4u), t29, 0);
    t30 = g->edx;
    if ((int32_t)(loc_18 + 1u) < (int32_t)loc_1c)
    {
        eax = loc_18 + 1u;
        edx = t30;
        loc_18 = loc_18 + 1u;
        loc_14 = loc_14 + 4u;
        goto L_102eddbc;
    }
    eax = loc_18 + 1u;
    edx = t30;
L_102edea0: ;
    COW_AT(102edea0)
    if (loc_8 != 0u)
    {
        ecx = 1u;
        goto L_102edeb7;
    }
    COW_AT(102edea6)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t31 = cow_thiscall(g, rd32(ebx + 0xcu), 1u, 0);
    t32 = g->edx;
    if ((uint8_t)t31 == 0u)
    {
        eax = t31;
        goto L_102edef7;
    }
    edx = t32;
    COW_AT(102edeaf)
    t33 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t33;
L_102edeb7: ;
    COW_AT(102edeb7)
    t34 = rd8(edi);
    wr32(in_esi + 0x168u, t34);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102ededb;
    }
    eax = t34;
    COW_AT(102edeca)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t35 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t36 = g->edx;
    if ((uint8_t)t35 == 0u)
    {
        eax = t35;
        goto L_102edef7;
    }
    edx = t36;
    COW_AT(102eded3)
    t37 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t37;
L_102ededb: ;
    COW_AT(102ededb)
    t38 = rd8(edi);
    wr32(in_esi + 0x16cu, t38);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102edf03;
    }
    eax = t38;
    COW_AT(102edeee)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t39 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t40 = g->edx;
    if ((uint8_t)t39 != 0u)
    {
        edx = t40;
        goto L_102edefb;
    }
    eax = t39;
L_102edef7: ;
    COW_AT(102edef7)
    eax = eax & 0xffffff00u;
L_102edf71: ;
    COW_AT(102edf71)
    g->ebx = in_ebx;
    g->edi = in_edi;
    return eax;
L_102edefb: ;
    COW_AT(102edefb)
    t41 = rd32(ebx + 4u);
    edi = rd32(ebx);
    loc_8 = t41;
L_102edf03: ;
    COW_AT(102edf03)
    t42 = rd8(edi) & 0xfu;
    t43 = rd8(edi);
    wr32(in_esi + 0x174u, t42);
    t44 = (uint32_t)((int32_t)t43 >> 4u) & 0xfu;
    t45 = rd32(in_esi);
    wr32(in_esi + 0x170u, t44);
    t46 = rd32(in_esi + 0x168u);
    wr32(t45 + 0x18u, t46);
    t47 = rd32(in_esi + 0x16cu);
    wr32(t45 + 0x1cu, t47);
    t48 = rd32(in_esi + 0x170u);
    wr32(t45 + 0x20u, t48);
    t49 = rd32(in_esi + 0x174u);
    wr32(t45 + 0x24u, t49);
    wr32(rd32(in_esi) + 0x14u, 0x68u);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(rd32(in_esi) + 4u), t49, 0);
    wr32(rd32(in_esi + 0x190u) + 0x54u, 0u);
    wr32(in_esi + 0x7cu, rd32(in_esi + 0x7cu) + 1u);
    wr32(ebx + 4u, loc_8 - 1u);
    wr32(ebx, edi + 1u);
    eax = (loc_8 - 1u & 0xffffff00u) | 1u;
    goto L_102edf71;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102edcc3(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102edce2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edcf1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edcf7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd04u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102edd0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102edd32u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd42u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd57u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd6au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd74u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edd86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eddb3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102eddbcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eddc2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eddcfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102eddd7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edde7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eddf4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eddfcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ede19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ede20u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ede31u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ede4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edea0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edea6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edeafu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102edeb7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edecau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eded3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102ededbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edeeeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edef7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edefbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edf03u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edf71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102edcc3(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102edcc3(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
