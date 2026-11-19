/* f_0x102ed9c8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ed9c8(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    case 0x102ed9edu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102ed9ed;
    case 0x102ed9fau: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102ed9fa;
    case 0x102eda02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda02;
    case 0x102eda13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda13;
    case 0x102eda20u: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda20;
    case 0x102eda28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda28;
    case 0x102eda38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda38;
    case 0x102eda45u: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda45;
    case 0x102eda4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda4d;
    case 0x102eda60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda60;
    case 0x102eda6du: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda6d;
    case 0x102eda75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda75;
    case 0x102eda86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda86;
    case 0x102eda93u: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda93;
    case 0x102eda9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102eda9b;
    case 0x102edaabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edaab;
    case 0x102edab8u: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edab8;
    case 0x102edac0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edac0;
    case 0x102edad1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edad1;
    case 0x102edadeu: eax = g->eax; in_esi = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edade;
    case 0x102edae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edae6;
    case 0x102edaf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edaf6;
    case 0x102edb03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edb03;
    case 0x102edb0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edb0b;
    case 0x102edb57u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edb57;
    case 0x102edb66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edb66;
    case 0x102edb6du: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edb6d;
    case 0x102edb72u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edb72;
    case 0x102edb77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edb77;
    case 0x102edb86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edb86;
    case 0x102edb91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edb91;
    case 0x102edba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edba0;
    case 0x102edba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edba9;
    case 0x102edbc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edbc1;
    case 0x102edbd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edbd4;
    case 0x102edbe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edbe8;
    case 0x102edbecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edbec;
    case 0x102edbefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edbef;
    case 0x102edbfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edbfb;
    case 0x102edc08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edc08;
    case 0x102edc13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edc13;
    case 0x102edc22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edc22;
    case 0x102edc2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edc2f;
    case 0x102edc3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edc3a;
    case 0x102edc58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edc58;
    case 0x102edc61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edc61;
    case 0x102edc6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edc6c;
    case 0x102edcb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edcb7;
    case 0x102edcbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_102edcbc;
    default: break;
    }
#endif

    COW_AT(102ed9c8)
    t1 = rd32(rd32(in_esi + 0x14u) + 4u);
    t2 = rd32(in_esi + 0x14u);
    t3 = rd32(rd32(in_esi + 0x14u));
    wr8(in_esi + 0xc8u, (uint8_t)self);
    t4 = rd8(sp0 + 4u);
    wr8(in_esi + 0xc9u, (uint8_t)t4);
    if (t1 != 0u)
    {
        ecx = (self & 0xffffff00u) | t4;
        edx = in_edx;
        ebx = t2;
        edi = t3;
        loc_8 = t1;
        goto L_102eda02;
    }
    eax = t1;
    ecx = (self & 0xffffff00u) | t4;
    ebx = t2;
    COW_AT(102ed9ed)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        goto L_102edcbc;
    }
    edx = t6;
    COW_AT(102ed9fa)
    t7 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t7;
L_102eda02: ;
    COW_AT(102eda02)
    t8 = (uint32_t)rd8(edi) << 8u;
    wr32(sp0 + 4u, t8);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102eda28;
    }
    eax = t8;
    COW_AT(102eda13)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t10 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        goto L_102edcbc;
    }
    edx = t10;
    COW_AT(102eda20)
    t11 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t11;
L_102eda28: ;
    COW_AT(102eda28)
    t12 = rd8(edi);
    wr32(sp0 + 4u, t12 + rd32(sp0 + 4u));
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102eda4d;
    }
    eax = t12;
    COW_AT(102eda38)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        goto L_102edcbc;
    }
    edx = t14;
    COW_AT(102eda45)
    t15 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t15;
L_102eda4d: ;
    COW_AT(102eda4d)
    t16 = rd8(edi);
    wr32(in_esi + 0xc0u, t16);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102eda75;
    }
    eax = t16;
    COW_AT(102eda60)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t17 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t18 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        goto L_102edcbc;
    }
    edx = t18;
    COW_AT(102eda6d)
    t19 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t19;
L_102eda75: ;
    COW_AT(102eda75)
    t20 = (uint32_t)rd8(edi) << 8u;
    wr32(in_esi + 0x1cu, t20);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102eda9b;
    }
    eax = t20;
    COW_AT(102eda86)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t21 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t22 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        goto L_102edcbc;
    }
    edx = t22;
    COW_AT(102eda93)
    t23 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t23;
L_102eda9b: ;
    COW_AT(102eda9b)
    t24 = rd8(edi);
    wr32(in_esi + 0x1cu, t24 + rd32(in_esi + 0x1cu));
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102edac0;
    }
    eax = t24;
    COW_AT(102edaab)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t25 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t26 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        goto L_102edcbc;
    }
    edx = t26;
    COW_AT(102edab8)
    t27 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t27;
L_102edac0: ;
    COW_AT(102edac0)
    t28 = (uint32_t)rd8(edi) << 8u;
    wr32(in_esi + 0x18u, t28);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102edae6;
    }
    eax = t28;
    COW_AT(102edad1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t29 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t30 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
        goto L_102edcbc;
    }
    edx = t30;
    COW_AT(102edade)
    t31 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t31;
L_102edae6: ;
    COW_AT(102edae6)
    t32 = rd8(edi);
    wr32(in_esi + 0x18u, t32 + rd32(in_esi + 0x18u));
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102edb0b;
    }
    eax = t32;
    COW_AT(102edaf6)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t33 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t34 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        eax = t33;
        goto L_102edcbc;
    }
    edx = t34;
    COW_AT(102edb03)
    t35 = rd32(ebx + 4u);
    edi = rd32(ebx);
    loc_8 = t35;
L_102edb0b: ;
    COW_AT(102edb0b)
    t36 = rd8(edi);
    t37 = rd32(in_esi + 0x178u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 8u);
    wr32(in_esi + 0x20u, t36);
    t38 = rd32(in_esi);
    wr32(t38 + 0x18u, t37);
    t39 = rd32(in_esi + 0x18u);
    wr32(t38 + 0x1cu, t39);
    t40 = rd32(in_esi + 0x1cu);
    wr32(t38 + 0x20u, t40);
    t41 = rd32(in_esi + 0x20u);
    wr32(t38 + 0x24u, t41);
    wr32(rd32(in_esi) + 0x14u, 0x63u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(in_esi) + 4u), t41, 0);
    t42 = g->edx;
    if (rd8(rd32(in_esi + 0x190u) + 0x51u) == 0u)
    {
        ecx = 1u;
        edx = t42;
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
    }
    else
    {
        edx = t42;
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
    COW_AT(102edb57)
        wr32(rd32(in_esi) + 0x14u, 0x39u);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(in_esi)), 1u, 0);
        t43 = g->edx;
        ecx = in_esi;
        edx = t43;
    }
    COW_AT(102edb66)
    if (rd32(in_esi + 0x1cu) == 0u) goto L_102edb77;
    COW_AT(102edb6d)
    if (rd32(in_esi + 0x18u) == 0u) goto L_102edb77;
    COW_AT(102edb72)
    if ((int32_t)rd32(in_esi + 0x20u) > 0) goto L_102edb86;
L_102edb77: ;
    COW_AT(102edb77)
    wr32(rd32(in_esi) + 0x14u, 0x1fu);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(in_esi)), ecx, 0);
    t44 = g->edx;
    ecx = in_esi;
    edx = t44;
L_102edb86: ;
    COW_AT(102edb86)
    if (rd32(sp0 + 4u) != rd32(in_esi + 0x20u) * 3u)
    {
    COW_AT(102edb91)
        wr32(rd32(in_esi) + 0x14u, 9u);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(in_esi)), ecx, 0);
        t45 = g->edx;
        edx = t45;
    }
    COW_AT(102edba0)
    if (rd32(in_esi + 0xc4u) == 0u)
    {
    COW_AT(102edba9)
        t46 = rd32(in_esi + 0x20u) * 0x54u;
        g->eax = rd32(in_esi + 4u);
        g->edx = edx;
        t47 = rd32(in_esi + 4u);
        g->esp = sp0 - 0x20u;
        t48 = cow_thiscall(g, rd32(t47), t46, 0);
        t49 = g->edx;
        wr32(in_esi + 0xc4u, t48);
        edx = t49;
    }
    COW_AT(102edbc1)
    t50 = rd32(in_esi + 0xc4u);
    t51 = rd32(in_esi + 0x20u);
    wr32(sp0 + 4u, t50);
    if ((int32_t)t51 > 0)
    {
        eax = t50;
        loc_c = 0u;
        goto L_102edbef;
    }
L_102edbd4: ;
    COW_AT(102edbd4)
    wr8(rd32(in_esi + 0x190u) + 0x51u, 1u);
    wr32(ebx + 4u, loc_8);
    wr32(ebx, edi);
    eax = (loc_8 & 0xffffff00u) | 1u;
L_102edbe8: ;
    COW_AT(102edbe8)
    g->ebx = in_ebx;
    g->edi = in_edi;
    return eax;
L_102edbec: ;
    COW_AT(102edbec)
    eax = rd32(sp0 + 4u);
L_102edbef: ;
    COW_AT(102edbef)
    wr32(eax + 4u, loc_c);
    if (loc_8 != 0u) goto L_102edc13;
    ecx = loc_c;
    COW_AT(102edbfb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t52 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t53 = g->edx;
    if ((uint8_t)t52 == 0u)
    {
        eax = t52;
        goto L_102edcbc;
    }
    edx = t53;
    COW_AT(102edc08)
    t54 = rd32(ebx + 4u);
    eax = rd32(sp0 + 4u);
    edi = rd32(ebx);
    loc_8 = t54;
L_102edc13: ;
    COW_AT(102edc13)
    t55 = rd8(edi);
    wr32(eax, t55);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102edc3a;
    }
    ecx = t55;
    COW_AT(102edc22)
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t56 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    if ((uint8_t)t56 == 0u)
    {
        eax = t56;
        goto L_102edcbc;
    }
    COW_AT(102edc2f)
    t57 = rd32(ebx + 4u);
    eax = rd32(sp0 + 4u);
    edi = rd32(ebx);
    loc_8 = t57;
L_102edc3a: ;
    COW_AT(102edc3a)
    t58 = (uint32_t)((int32_t)rd8(edi) >> 4u) & 0xfu;
    t59 = rd8(edi);
    wr32(eax + 8u, t58);
    wr32(eax + 0xcu, t59 & 0xfu);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102edc6c;
    }
    ecx = t59 & 0xfu;
    edx = t58;
    COW_AT(102edc58)
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t60 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    if ((uint8_t)t60 == 0u)
    {
        eax = t60;
        goto L_102edcbc;
    }
    COW_AT(102edc61)
    t61 = rd32(ebx + 4u);
    eax = rd32(sp0 + 4u);
    edi = rd32(ebx);
    loc_8 = t61;
L_102edc6c: ;
    COW_AT(102edc6c)
    t62 = rd32(eax);
    wr32(eax + 0x10u, rd8(edi));
    t63 = rd32(in_esi);
    wr32(t63 + 0x18u, t62);
    t64 = rd32(eax + 8u);
    wr32(t63 + 0x1cu, t64);
    t65 = rd32(eax + 0xcu);
    wr32(t63 + 0x20u, t65);
    t66 = rd32(eax + 0x10u);
    wr32(t63 + 0x24u, t66);
    wr32(rd32(in_esi) + 0x14u, 0x64u);
    g->edx = t65;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(in_esi) + 4u), t63 + 0x18u, 0);
    t67 = g->edx;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 0x54u);
    if ((int32_t)(loc_c + 1u) < (int32_t)rd32(in_esi + 0x20u))
    {
        edx = t67;
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        loc_c = loc_c + 1u;
        goto L_102edbec;
    }
    edi = edi + 1u;
    loc_8 = loc_8 - 1u;
    COW_AT(102edcb7)
    goto L_102edbd4;
L_102edcbc: ;
    COW_AT(102edcbc)
    eax = eax & 0xffffff00u;
    goto L_102edbe8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ed9c8(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ed9edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ed9fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102eda02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eda13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eda20u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102eda28u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eda38u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eda45u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102eda4du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eda60u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eda6du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102eda75u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eda86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eda93u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102eda9bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edaabu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edab8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102edac0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edad1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edadeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102edae6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edaf6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edb03u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edb0bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edb57u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edb66u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edb6du:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edb72u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edb77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edb86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edb91u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edba0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edba9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edbc1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edbd4u:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edbe8u:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edbecu:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edbefu:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edbfbu:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edc08u:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edc13u:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edc22u:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edc2fu:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edc3au:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edc58u:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edc61u:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edc6cu:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edcb7u:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102edcbcu:
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
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed9c8(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102ed9c8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
