/* f_0x10303539 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10303539(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_110;
    uint32_t loc_114;
    uint32_t loc_118;
    uint32_t loc_14;
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
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t loc_8;
    uint32_t loc_80;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 304u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10303560u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x114u); goto E_10303560;
    case 0x1030356cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x114u); goto E_1030356c;
    case 0x10303577u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x114u); goto E_10303577;
    case 0x10303590u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x114u); goto E_10303590;
    case 0x10303598u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x114u); goto E_10303598;
    case 0x103035a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x114u); goto E_103035a3;
    case 0x103035b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x118u); in_edi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x118u); goto E_103035b6;
    case 0x103035cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_103035cd;
    case 0x103035d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_103035d7;
    case 0x103035e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_103035e5;
    case 0x103035f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_103035f2;
    case 0x103035f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_103035f9;
    case 0x10303607u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10303607;
    case 0x1030360au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1030360a;
    case 0x10303611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10303611;
    case 0x10303617u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10303617;
    case 0x1030363au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1030363a;
    case 0x10303650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10303650;
    case 0x103036b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_7c = rd32(sp0 - 0x7cu); loc_68 = rd32(sp0 - 0x68u); loc_50 = rd32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_103036b8;
    case 0x103036bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_103036bd;
    case 0x103036d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_103036d1;
    case 0x103036d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_103036d5;
    case 0x103036d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_103036d8;
    case 0x103036deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_103036de;
    case 0x103036eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_103036ea;
    case 0x103036edu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_103036ed;
    case 0x10303734u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_10303734;
    case 0x10303750u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10303750;
    case 0x1030376fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030376f;
    case 0x10303778u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303778;
    case 0x10303782u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303782;
    case 0x1030379fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030379f;
    case 0x103037aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037ae;
    case 0x103037b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037b7;
    case 0x103037bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037bc;
    case 0x103037cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037cb;
    case 0x103037d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037d4;
    case 0x103037d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037d7;
    case 0x103037d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037d9;
    case 0x103037e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037e0;
    case 0x103037eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037ea;
    case 0x103037f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103037f4;
    case 0x10303811u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303811;
    case 0x1030381au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030381a;
    case 0x10303823u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303823;
    case 0x10303828u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303828;
    case 0x10303831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303831;
    case 0x1030383au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030383a;
    case 0x1030383du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030383d;
    case 0x1030383fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030383f;
    case 0x1030384bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030384b;
    case 0x10303854u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303854;
    case 0x1030385bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030385b;
    case 0x10303880u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303880;
    case 0x1030388fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030388f;
    case 0x10303898u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303898;
    case 0x1030389du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030389d;
    case 0x103038acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103038ac;
    case 0x103038b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103038b5;
    case 0x103038b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103038b8;
    case 0x103038bau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103038ba;
    case 0x103038beu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103038be;
    case 0x103038c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103038c7;
    case 0x103038d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103038d1;
    case 0x103038f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103038f3;
    case 0x10303902u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303902;
    case 0x1030390bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030390b;
    case 0x10303910u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303910;
    case 0x1030391fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030391f;
    case 0x10303928u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303928;
    case 0x1030392bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030392b;
    case 0x1030392du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030392d;
    case 0x10303934u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303934;
    case 0x1030393du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030393d;
    case 0x10303947u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303947;
    case 0x1030396cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030396c;
    case 0x1030397bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_1030397b;
    case 0x10303984u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303984;
    case 0x10303989u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303989;
    case 0x10303998u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_10303998;
    case 0x103039a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103039a1;
    case 0x103039a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103039a4;
    case 0x103039a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103039a6;
    case 0x103039adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); goto E_103039ad;
    case 0x10303a04u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_4c = rd32(sp0 - 0x4cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); goto E_10303a04;
    case 0x10303a1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10303a1f;
    case 0x10303a39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10303a39;
    case 0x10303a4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10303a4f;
    default: break;
    }
#endif

    COW_AT(10303539)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_edi);
    t1 = rd32(rd32(sp0 + 4u) + 0x184u);
    wr32(sp0 - 0x74u, t1);
    t2 = rd32(rd32(sp0 + 4u) + 0x118u) - 1u;
    wr32(sp0 - 0x88u, t2);
    edx = in_edx;
    edi = rd32(sp0 + 4u);
    loc_74 = t1;
    loc_88 = t2;
L_10303598: ;
    COW_AT(10303598)
    if ((int32_t)rd32(edi + 0x7cu) <= (int32_t)rd32(edi + 0x84u)) goto L_10303560;
L_103035a3: ;
    COW_AT(103035a3)
    wr32(sp0 - 0x118u, in_esi);
    wr32(sp0 - 0x54u, 0u);
    if ((int32_t)rd32(edi + 0x20u) <= 0)
    {
        loc_4 = in_ebp;
        loc_110 = in_ebx;
        loc_114 = in_edi;
        loc_118 = in_esi;
    }
    else
    {
        esi = rd32(edi + 0xc4u);
    COW_AT(103035b6)
        wr32(sp0 - 0x70u, 0u);
        wr32(sp0 - 0x6cu, 0xffffffb8u);
        wr32(sp0 - 0x6cu, 0xffffffb8u - loc_74);
        wr32(sp0 - 0x24u, loc_74 + 0x48u);
        loc_4 = in_ebp;
        loc_110 = in_ebx;
        loc_114 = in_edi;
        loc_118 = in_esi;
        loc_54 = 0u;
        loc_70 = 0u;
        loc_6c = 0xffffffb8u - loc_74;
        loc_24 = loc_74 + 0x48u;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_60 = rd32(sp0 - 0x60u);
        loc_4c = rd32(sp0 - 0x4cu);
L_103035cd: ;
    COW_AT(103035cd)
        if (rd8(esi + 0x30u) != 0u)
        {
    COW_AT(103035d7)
            if (rd32(edi + 0x88u) >= loc_88)
            {
                ecx = rd32(esi + 0xcu);
                ebx = rd32(edi + 0x88u);
    COW_AT(103035f9)
                t5 = cow_divu(g, rd32(esi + 0x20u), ecx);
                t6 = cow_modu(g, rd32(esi + 0x20u), ecx);
                wr32(sp0 - 0x14u, t6);
                if (t6 != 0u)
                {
                    edx = t6;
                    loc_14 = t6;
                }
                else
                {
                    edx = t6;
    COW_AT(10303607)
                    wr32(sp0 - 0x14u, ecx);
                    loc_14 = ecx;
                }
    COW_AT(1030360a)
                wr8(sp0 - 9u, 1u);
                eax = loc_14;
            }
            else
            {
                ecx = rd32(esi + 0xcu);
                ebx = rd32(edi + 0x88u);
    COW_AT(103035e5)
                wr32(sp0 - 0x14u, ecx);
                wr8(sp0 - 9u, 0u);
                eax = ecx * 2u;
                loc_14 = ecx;
            }
    COW_AT(10303611)
            wr32(sp0 - 0x11cu, 0u);
            if (ebx == 0u)
            {
    COW_AT(1030363a)
                wr32(sp0 - 0x120u, eax);
                wr32(sp0 - 0x124u, 0u);
                wr32(sp0 - 0x128u, rd32(loc_24));
                wr32(sp0 - 0x12cu, edi);
                g->eax = loc_24;
                g->edx = edx;
                g->esp = sp0 - 0x12cu;
                t12 = cow_thiscall(g, rd32(rd32(edi + 4u) + 0x20u), rd32(edi + 4u), 0);
                t13 = g->edx;
                wr8(sp0 + 7u, 1u);
                eax = t12;
                edx = t13;
            }
            else
            {
    COW_AT(10303617)
                wr32(sp0 - 0x120u, eax + ecx);
                t7 = (ebx - 1u) * ecx;
                wr32(sp0 - 0x124u, t7);
                wr32(sp0 - 0x128u, rd32(loc_24));
                wr32(sp0 - 0x12cu, edi);
                g->eax = loc_24;
                g->edx = rd32(edi + 4u);
                t8 = rd32(edi + 4u);
                g->esp = sp0 - 0x12cu;
                t9 = cow_thiscall(g, rd32(t8 + 0x20u), ecx, 0);
                t10 = g->edx;
                t11 = rd32(esi + 0xcu);
                wr8(sp0 + 7u, 0u);
                eax = t11 * 4u + t9;
                edx = t10;
            }
    COW_AT(10303650)
            wr32(sp0 - 0x7cu, eax);
            wr32(sp0 - 0x1cu, 0u);
            t14 = rd32(sp0 - 0x70u) + rd32(rd32(sp0 - 0x74u) + 0x70u);
            wr32(sp0 - 8u, t14);
            t15 = rd16(rd32(esi + 0x4cu));
            wr32(sp0 - 0x20u, t15);
            t16 = rd16(rd32(esi + 0x4cu) + 2u);
            wr32(sp0 - 0x44u, t16);
            t17 = rd16(rd32(esi + 0x4cu) + 0x10u);
            wr32(sp0 - 0x30u, t17);
            t18 = rd16(rd32(esi + 0x4cu) + 0x20u);
            wr32(sp0 - 0x50u, t18);
            t19 = rd16(rd32(esi + 0x4cu) + 4u);
            wr32(sp0 - 0x48u, t19);
            t20 = rd16(rd32(esi + 0x4cu) + 0x12u);
            wr32(sp0 - 0x38u, t20);
            t21 = rd32(rd32(edi + 0x198u) + rd32(sp0 - 0x6cu) + rd32(sp0 - 0x24u) + 4u);
            wr32(sp0 - 0x8cu, t21);
            t22 = rd32(arg2 + rd32(sp0 - 0x54u) * 4u);
            wr32(sp0 - 0x68u, t22);
            if ((int32_t)rd32(sp0 - 0x14u) <= 0)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_110 = rd32(sp0 - 0x110u);
                loc_114 = rd32(sp0 - 0x114u);
                loc_74 = rd32(sp0 - 0x74u);
                loc_88 = rd32(sp0 - 0x88u);
                loc_118 = rd32(sp0 - 0x118u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_70 = rd32(sp0 - 0x70u);
                loc_6c = rd32(sp0 - 0x6cu);
                loc_24 = rd32(sp0 - 0x24u);
                loc_1c = 0u;
                loc_60 = rd32(sp0 - 0x60u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
            else
            {
                loc_7c = eax;
                loc_8 = t14;
                loc_20 = t15;
                loc_44 = t16;
                loc_30 = t17;
                loc_50 = t18;
                loc_48 = t19;
                loc_38 = t20;
                loc_8c = t21;
                loc_68 = t22;
    COW_AT(103036b8)
                loc_1c = 0u;
                loc_60 = rd32(sp0 - 0x60u);
                loc_4c = rd32(sp0 - 0x4cu);
L_103036bd: ;
    COW_AT(103036bd)
                t23 = rd32(loc_1c * 4u + loc_7c);
                wr32(sp0 - 0x10u, t23);
                if (rd8(sp0 + 7u) == 0u)
                {
                    edx = loc_1c * 4u + loc_7c;
                    loc_10 = t23;
                    goto L_103036d5;
                }
                eax = loc_1c;
                ecx = t23;
                edx = loc_1c * 4u + loc_7c;
                loc_10 = t23;
    COW_AT(103036d1)
                if (eax == 0u) goto L_103036d8;
L_103036d5: ;
    COW_AT(103036d5)
                ecx = rd32(edx - 4u);
L_103036d8: ;
    COW_AT(103036d8)
                if (rd8(sp0 - 9u) == 0u) goto L_103036ea;
    COW_AT(103036de)
                if (loc_1c == rd32(sp0 - 0x14u) - 1u)
                {
                    eax = loc_10;
                    goto L_103036ed;
                }
L_103036ea: ;
    COW_AT(103036ea)
                eax = rd32(edx + 4u);
L_103036ed: ;
    COW_AT(103036ed)
                wr32(sp0 - 0x60u, 0u);
                wr32(sp0 - 0x4cu, 0u);
                wr32(sp0 - 0x40u, (uint32_t)(int16_t)rd16(ecx));
                wr32(sp0 - 0x2cu, (uint32_t)(int16_t)rd16(ecx));
                wr32(sp0 - 0x84u, (uint32_t)(int16_t)rd16(ecx));
                wr32(sp0 - 0x18u, (uint32_t)(int16_t)rd16(loc_10));
                wr32(sp0 - 0x34u, (uint32_t)(int16_t)rd16(loc_10));
                wr32(sp0 - 0x58u, (uint32_t)(int16_t)rd16(loc_10));
                wr32(sp0 - 0x3cu, (uint32_t)(int16_t)rd16(eax));
                wr32(sp0 - 0x28u, (uint32_t)(int16_t)rd16(eax));
                wr32(sp0 - 0x80u, (uint32_t)(int16_t)rd16(eax));
                t24 = rd32(esi + 0x1cu) - 1u;
                wr32(sp0 - 0x78u, t24);
                wr32(sp0 - 0x5cu, eax + 0x80u);
                wr32(sp0 - 0x64u, ecx + 0x80u);
                edx = t24;
                loc_60 = 0u;
                loc_4c = 0u;
                loc_40 = (uint32_t)(int16_t)rd16(ecx);
                loc_2c = (uint32_t)(int16_t)rd16(ecx);
                loc_84 = (uint32_t)(int16_t)rd16(ecx);
                loc_18 = (uint32_t)(int16_t)rd16(loc_10);
                loc_34 = (uint32_t)(int16_t)rd16(loc_10);
                loc_58 = (uint32_t)(int16_t)rd16(loc_10);
                loc_3c = (uint32_t)(int16_t)rd16(eax);
                loc_28 = (uint32_t)(int16_t)rd16(eax);
                loc_80 = (uint32_t)(int16_t)rd16(eax);
                loc_78 = t24;
                loc_5c = eax + 0x80u;
                loc_64 = ecx + 0x80u;
                ecx = ecx + 0x80u;
L_10303734: ;
    COW_AT(10303734)
                wr32(sp0 - 0x11cu, 1u);
                wr32(sp0 - 0x120u, sp0 - 0x10cu);
                wr32(sp0 - 0x124u, loc_10);
                g->edx = edx;
                g->esp = sp0 - 0x10cu;
                cow_cdecl(g, COW_IMG(0x102f593cu), 6, loc_10, sp0 - 0x10cu, 1u, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
                t25 = g->edx;
                if (rd32(sp0 - 0x4cu) >= rd32(sp0 - 0x78u))
                {
                    edx = t25;
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_3c = rd32(sp0 - 0x3cu);
                }
                else
                {
                    edx = t25;
    COW_AT(10303750)
                    t26 = (uint32_t)(int16_t)rd16(rd32(sp0 - 0x64u));
                    wr32(sp0 - 0x40u, t26);
                    t27 = (uint32_t)(int16_t)rd16(rd32(sp0 - 0x10u) + 0x80u);
                    wr32(sp0 - 0x18u, t27);
                    t28 = (uint32_t)(int16_t)rd16(rd32(sp0 - 0x5cu));
                    wr32(sp0 - 0x3cu, t28);
                    loc_40 = t26;
                    loc_18 = t27;
                    loc_3c = t28;
                }
    COW_AT(1030376f)
                if (rd32(rd32(sp0 - 8u) + 4u) != 0u)
                {
    COW_AT(10303778)
                    if (rd16(sp0 - 0x10au) == 0u)
                    {
    COW_AT(10303782)
                        t29 = rd32(sp0 - 0x44u);
                        if ((int32_t)((rd32(sp0 - 0x58u) - loc_18) * rd32(sp0 - 0x20u) * 0x24u) < 0)
                        {
                            eax = t29 << 7u;
                            ecx = t29 << 8u;
                            edx = (rd32(sp0 - 0x58u) - loc_18) * rd32(sp0 - 0x20u) * 0x24u;
    COW_AT(103037bc)
                            t32 = cow_divs(g, eax - edx, ecx);
                            t33 = cow_mods(g, eax - edx, ecx);
                            if ((int32_t)rd32(rd32(sp0 - 8u) + 4u) <= 0)
                            {
                                eax = t32;
                                edx = t33;
                            }
                            else
                            {
                                eax = t32;
                                ecx = rd32(rd32(sp0 - 8u) + 4u);
    COW_AT(103037cb)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(103037d4)
                                    eax = edx - 1u;
                                }
                            }
    COW_AT(103037d7)
                            eax = -eax;
                        }
                        else
                        {
                            eax = t29 << 7u;
                            ecx = t29 << 8u;
                            edx = (rd32(sp0 - 0x58u) - loc_18) * rd32(sp0 - 0x20u) * 0x24u;
    COW_AT(1030379f)
                            t30 = cow_divs(g, eax + edx, ecx);
                            t31 = cow_mods(g, eax + edx, ecx);
                            if ((int32_t)rd32(rd32(sp0 - 8u) + 4u) <= 0)
                            {
                                eax = t30;
                                edx = t31;
                            }
                            else
                            {
                                eax = t30;
                                ecx = rd32(rd32(sp0 - 8u) + 4u);
    COW_AT(103037ae)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(103037b7)
                                    eax = edx - 1u;
                                }
                            }
                        }
    COW_AT(103037d9)
                        wr16(sp0 - 0x10au, (uint16_t)eax);
                    }
                }
    COW_AT(103037e0)
                if (rd32(rd32(sp0 - 8u) + 8u) == 0u)
                {
                    ecx = rd32(rd32(sp0 - 8u) + 8u);
                }
                else
                {
                    ecx = rd32(rd32(sp0 - 8u) + 8u);
    COW_AT(103037ea)
                    if (rd16(sp0 - 0xfcu) == 0u)
                    {
    COW_AT(103037f4)
                        t34 = rd32(sp0 - 0x30u);
                        if ((int32_t)((rd32(sp0 - 0x2cu) - rd32(sp0 - 0x28u)) * rd32(sp0 - 0x20u) * 0x24u) < 0)
                        {
                            eax = t34 << 7u;
                            edx = (rd32(sp0 - 0x2cu) - rd32(sp0 - 0x28u)) * rd32(sp0 - 0x20u) * 0x24u;
                            ebx = t34 << 8u;
    COW_AT(10303828)
                            t37 = cow_divs(g, eax - edx, ebx);
                            t38 = cow_mods(g, eax - edx, ebx);
                            if ((int32_t)ecx <= 0)
                            {
                                eax = t37;
                                edx = t38;
                            }
                            else
                            {
                                eax = t37;
    COW_AT(10303831)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(1030383a)
                                    eax = edx - 1u;
                                }
                            }
    COW_AT(1030383d)
                            eax = -eax;
                        }
                        else
                        {
                            eax = t34 << 7u;
                            edx = (rd32(sp0 - 0x2cu) - rd32(sp0 - 0x28u)) * rd32(sp0 - 0x20u) * 0x24u;
                            ebx = t34 << 8u;
    COW_AT(10303811)
                            t35 = cow_divs(g, eax + edx, ebx);
                            t36 = cow_mods(g, eax + edx, ebx);
                            if ((int32_t)ecx <= 0)
                            {
                                eax = t35;
                                edx = t36;
                            }
                            else
                            {
                                eax = t35;
    COW_AT(1030381a)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(10303823)
                                    eax = edx - 1u;
                                }
                            }
                        }
    COW_AT(1030383f)
                        wr16(sp0 - 0xfcu, (uint16_t)eax);
                    }
                }
    COW_AT(1030384b)
                if (rd32(rd32(sp0 - 8u) + 0xcu) != 0u)
                {
    COW_AT(10303854)
                    if (rd16(sp0 - 0xecu) == 0u)
                    {
    COW_AT(1030385b)
                        t39 = rd32(sp0 - 0x34u) * 2u;
                        t40 = rd32(sp0 - 0x50u);
                        if ((int32_t)((rd32(sp0 - 0x28u) + rd32(sp0 - 0x2cu) - t39) * rd32(sp0 - 0x20u) * 9u) < 0)
                        {
                            eax = t40 << 7u;
                            ecx = t40 << 8u;
                            edx = (rd32(sp0 - 0x28u) + rd32(sp0 - 0x2cu) - t39) * rd32(sp0 - 0x20u) * 9u;
    COW_AT(1030389d)
                            t43 = cow_divs(g, eax - edx, ecx);
                            t44 = cow_mods(g, eax - edx, ecx);
                            if ((int32_t)rd32(rd32(sp0 - 8u) + 0xcu) <= 0)
                            {
                                eax = t43;
                                ecx = rd32(rd32(sp0 - 8u) + 0xcu);
                                edx = t44;
                            }
                            else
                            {
                                eax = t43;
                                ecx = rd32(rd32(sp0 - 8u) + 0xcu);
    COW_AT(103038ac)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(103038b5)
                                    eax = edx - 1u;
                                }
                            }
    COW_AT(103038b8)
                            eax = -eax;
                        }
                        else
                        {
                            eax = t40 << 7u;
                            ecx = t40 << 8u;
                            edx = (rd32(sp0 - 0x28u) + rd32(sp0 - 0x2cu) - t39) * rd32(sp0 - 0x20u) * 9u;
    COW_AT(10303880)
                            t41 = cow_divs(g, eax + edx, ecx);
                            t42 = cow_mods(g, eax + edx, ecx);
                            if ((int32_t)rd32(rd32(sp0 - 8u) + 0xcu) <= 0)
                            {
                                eax = t41;
                                ecx = rd32(rd32(sp0 - 8u) + 0xcu);
                                edx = t42;
                            }
                            else
                            {
                                eax = t41;
                                ecx = rd32(rd32(sp0 - 8u) + 0xcu);
    COW_AT(1030388f)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(10303898)
                                    eax = edx - 1u;
                                }
                            }
                        }
    COW_AT(103038ba)
                        wr16(sp0 - 0xecu, (uint16_t)eax);
                    }
                }
    COW_AT(103038be)
                if (rd32(rd32(sp0 - 8u) + 0x10u) != 0u)
                {
    COW_AT(103038c7)
                    if (rd16(sp0 - 0xfau) == 0u)
                    {
    COW_AT(103038d1)
                        t45 = rd32(sp0 - 0x38u);
                        if ((int32_t)((loc_3c + rd32(sp0 - 0x84u) - loc_40 - rd32(sp0 - 0x80u)) * rd32(sp0 - 0x20u) * 5u) < 0)
                        {
                            eax = t45 << 7u;
                            ecx = t45 << 8u;
                            edx = (loc_3c + rd32(sp0 - 0x84u) - loc_40 - rd32(sp0 - 0x80u)) * rd32(sp0 - 0x20u) * 5u;
    COW_AT(10303910)
                            t48 = cow_divs(g, eax - edx, ecx);
                            t49 = cow_mods(g, eax - edx, ecx);
                            if ((int32_t)rd32(rd32(sp0 - 8u) + 0x10u) <= 0)
                            {
                                eax = t48;
                                ecx = rd32(rd32(sp0 - 8u) + 0x10u);
                                edx = t49;
                            }
                            else
                            {
                                eax = t48;
                                ecx = rd32(rd32(sp0 - 8u) + 0x10u);
    COW_AT(1030391f)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(10303928)
                                    eax = edx - 1u;
                                }
                            }
    COW_AT(1030392b)
                            eax = -eax;
                        }
                        else
                        {
                            eax = t45 << 7u;
                            ecx = t45 << 8u;
                            edx = (loc_3c + rd32(sp0 - 0x84u) - loc_40 - rd32(sp0 - 0x80u)) * rd32(sp0 - 0x20u) * 5u;
    COW_AT(103038f3)
                            t46 = cow_divs(g, eax + edx, ecx);
                            t47 = cow_mods(g, eax + edx, ecx);
                            if ((int32_t)rd32(rd32(sp0 - 8u) + 0x10u) <= 0)
                            {
                                eax = t46;
                                ecx = rd32(rd32(sp0 - 8u) + 0x10u);
                                edx = t47;
                            }
                            else
                            {
                                eax = t46;
                                ecx = rd32(rd32(sp0 - 8u) + 0x10u);
    COW_AT(10303902)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(1030390b)
                                    eax = edx - 1u;
                                }
                            }
                        }
    COW_AT(1030392d)
                        wr16(sp0 - 0xfau, (uint16_t)eax);
                    }
                }
    COW_AT(10303934)
                if (rd32(rd32(sp0 - 8u) + 0x14u) != 0u)
                {
    COW_AT(1030393d)
                    if (rd16(sp0 - 0x108u) == 0u)
                    {
    COW_AT(10303947)
                        t50 = rd32(sp0 - 0x34u) * 2u;
                        t51 = rd32(sp0 - 0x48u);
                        if ((int32_t)((loc_18 + rd32(sp0 - 0x58u) - t50) * rd32(sp0 - 0x20u) * 9u) < 0)
                        {
                            eax = t51 << 7u;
                            ecx = t51 << 8u;
                            edx = (loc_18 + rd32(sp0 - 0x58u) - t50) * rd32(sp0 - 0x20u) * 9u;
    COW_AT(10303989)
                            t54 = cow_divs(g, eax - edx, ecx);
                            t55 = cow_mods(g, eax - edx, ecx);
                            if ((int32_t)rd32(rd32(sp0 - 8u) + 0x14u) <= 0)
                            {
                                eax = t54;
                                ecx = rd32(rd32(sp0 - 8u) + 0x14u);
                                edx = t55;
                            }
                            else
                            {
                                eax = t54;
                                ecx = rd32(rd32(sp0 - 8u) + 0x14u);
    COW_AT(10303998)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(103039a1)
                                    eax = edx - 1u;
                                }
                            }
    COW_AT(103039a4)
                            eax = -eax;
                        }
                        else
                        {
                            eax = t51 << 7u;
                            ecx = t51 << 8u;
                            edx = (loc_18 + rd32(sp0 - 0x58u) - t50) * rd32(sp0 - 0x20u) * 9u;
    COW_AT(1030396c)
                            t52 = cow_divs(g, eax + edx, ecx);
                            t53 = cow_mods(g, eax + edx, ecx);
                            if ((int32_t)rd32(rd32(sp0 - 8u) + 0x14u) <= 0)
                            {
                                eax = t52;
                                ecx = rd32(rd32(sp0 - 8u) + 0x14u);
                                edx = t53;
                            }
                            else
                            {
                                eax = t52;
                                ecx = rd32(rd32(sp0 - 8u) + 0x14u);
    COW_AT(1030397b)
                                if ((int32_t)eax < (int32_t)(1u << (ecx & 0x1fu)))
                                {
                                    edx = 1u << (ecx & 0x1fu);
                                }
                                else
                                {
                                    edx = 1u << (ecx & 0x1fu);
    COW_AT(10303984)
                                    eax = edx - 1u;
                                }
                            }
                        }
    COW_AT(103039a6)
                        wr16(sp0 - 0x108u, (uint16_t)eax);
                    }
                }
    COW_AT(103039ad)
                t56 = rd32(sp0 - 0x60u);
                wr32(sp0 - 0x11cu, t56);
                t57 = rd32(sp0 - 0x68u);
                wr32(sp0 - 0x120u, t57);
                wr32(sp0 - 0x124u, sp0 - 0x10cu);
                wr32(sp0 - 0x128u, esi);
                wr32(sp0 - 0x12cu, edi);
                g->edx = edx;
                g->esp = sp0 - 0x12cu;
                cow_thiscall(g, rd32(sp0 - 0x8cu), ecx, 0);
                t58 = g->ecx;
                t59 = g->edx;
                t60 = rd32(sp0 - 0x10u) + 0x80u;
                wr32(sp0 - 0x10u, t60);
                t61 = rd32(sp0 - 0x64u) + 0x80u;
                wr32(sp0 - 0x64u, t61);
                t62 = rd32(sp0 - 0x5cu) + 0x80u;
                wr32(sp0 - 0x5cu, t62);
                t63 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x84u, t63);
                t64 = rd32(sp0 - 0x40u);
                wr32(sp0 - 0x2cu, t64);
                t65 = rd32(sp0 - 0x34u);
                wr32(sp0 - 0x58u, t65);
                t66 = rd32(sp0 - 0x18u);
                wr32(sp0 - 0x34u, t66);
                t67 = rd32(sp0 - 0x28u);
                wr32(sp0 - 0x80u, t67);
                t68 = rd32(sp0 - 0x3cu);
                wr32(sp0 - 0x28u, t68);
                t69 = rd32(esi + 0x24u) + rd32(sp0 - 0x60u);
                wr32(sp0 - 0x60u, t69);
                t70 = rd32(sp0 - 0x4cu) + 1u;
                wr32(sp0 - 0x4cu, t70);
                if (t70 <= rd32(sp0 - 0x78u))
                {
                    ecx = t58;
                    edx = t59;
                    loc_7c = rd32(sp0 - 0x7cu);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_8 = rd32(sp0 - 8u);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_50 = rd32(sp0 - 0x50u);
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_38 = rd32(sp0 - 0x38u);
                    loc_8c = rd32(sp0 - 0x8cu);
                    loc_68 = rd32(sp0 - 0x68u);
                    loc_10 = t60;
                    loc_60 = t69;
                    loc_4c = t70;
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_2c = t64;
                    loc_84 = t63;
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_34 = t66;
                    loc_58 = t65;
                    loc_3c = rd32(sp0 - 0x3cu);
                    loc_28 = t68;
                    loc_80 = t67;
                    loc_78 = rd32(sp0 - 0x78u);
                    loc_5c = t62;
                    loc_64 = t61;
                    goto L_10303734;
                }
                edx = t59;
                loc_60 = t69;
                loc_4c = t70;
    COW_AT(10303a04)
                t71 = rd32(sp0 - 0x1cu) + 1u;
                wr32(sp0 - 0x1cu, t71);
                t72 = rd32(esi + 0x24u) * 4u + rd32(sp0 - 0x68u);
                wr32(sp0 - 0x68u, t72);
                if ((int32_t)t71 < (int32_t)rd32(sp0 - 0x14u))
                {
                    loc_7c = rd32(sp0 - 0x7cu);
                    loc_1c = t71;
                    loc_8 = rd32(sp0 - 8u);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_50 = rd32(sp0 - 0x50u);
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_38 = rd32(sp0 - 0x38u);
                    loc_8c = rd32(sp0 - 0x8cu);
                    loc_68 = t72;
                    goto L_103036bd;
                }
                loc_4 = rd32(sp0 - 4u);
                loc_110 = rd32(sp0 - 0x110u);
                loc_114 = rd32(sp0 - 0x114u);
                loc_74 = rd32(sp0 - 0x74u);
                loc_88 = rd32(sp0 - 0x88u);
                loc_118 = rd32(sp0 - 0x118u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_70 = rd32(sp0 - 0x70u);
                loc_6c = rd32(sp0 - 0x6cu);
                loc_24 = rd32(sp0 - 0x24u);
                loc_1c = t71;
            }
        }
    COW_AT(10303a1f)
        wr32(sp0 - 0x54u, loc_54 + 1u);
        wr32(sp0 - 0x70u, loc_70 + 0x18u);
        wr32(sp0 - 0x24u, loc_24 + 4u);
        if ((int32_t)(loc_54 + 1u) < (int32_t)rd32(edi + 0x20u))
        {
            esi = esi + 0x54u;
            loc_54 = loc_54 + 1u;
            loc_70 = loc_70 + 0x18u;
            loc_24 = loc_24 + 4u;
            goto L_103035cd;
        }
    }
    COW_AT(10303a39)
    wr32(edi + 0x88u, rd32(edi + 0x88u) + 1u);
    eax = -(rd32(edi + 0x88u) < rd32(edi + 0x118u)) + 4u;
    esi = loc_118;
L_10303a4f: ;
    COW_AT(10303a4f)
    g->ebx = loc_110;
    g->esi = esi;
    g->edi = loc_114;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_10303560: ;
    COW_AT(10303560)
    if (rd8(rd32(edi + 0x18cu) + 0x11u) != 0u) goto L_103035a3;
    eax = rd32(edi + 0x18cu);
    COW_AT(1030356c)
    if (rd32(edi + 0x7cu) != rd32(edi + 0x84u))
    {
        ecx = rd32(edi + 0x7cu);
        goto L_10303590;
    }
    COW_AT(10303577)
    if (rd32(edi + 0x80u) > rd32(edi + 0x88u) + (rd32(edi + 0x168u) == 0u)) goto L_103035a3;
    ecx = rd32(edi + 0x88u) + (rd32(edi + 0x168u) == 0u);
L_10303590: ;
    COW_AT(10303590)
    wr32(sp0 - 0x118u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t3 = cow_thiscall(g, rd32(eax), ecx, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        edx = t4;
        goto L_103035f2;
    }
    edx = t4;
    loc_74 = rd32(sp0 - 0x74u);
    loc_88 = rd32(sp0 - 0x88u);
    goto L_10303598;
L_103035f2: ;
    COW_AT(103035f2)
    eax = 0u;
    esi = in_esi;
    loc_4 = rd32(sp0 - 4u);
    loc_110 = rd32(sp0 - 0x110u);
    loc_114 = rd32(sp0 - 0x114u);
    goto L_10303a4f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10303539(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10303560u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_74;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1030356cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_74;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303577u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_74;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303590u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_74;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303598u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_74;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103035a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_74;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103035b6u:
    {
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
        uint32_t loc_74;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x118u);
        in_edi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x54u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x103035cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103035d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103035e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103035f2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x114u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103035f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303607u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1030360au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303611u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303617u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x11cu;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1030363au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x11cu;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303650u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103036b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_50;
        uint32_t loc_68;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x103036bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103036d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103036d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103036d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103036deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103036eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x103036edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303734u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303750u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030376fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303778u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303782u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030379fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103037f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303811u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030381au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303823u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303828u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303831u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030383au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030383du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030383fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030384bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303854u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030385bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303880u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030388fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303898u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030389du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103038acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103038b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103038b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103038bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103038beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103038c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103038d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103038f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303902u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030390bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303910u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030391fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303928u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030392bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030392du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303934u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030393du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303947u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030396cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1030397bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303984u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303989u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303998u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103039a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103039a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103039a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x103039adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x120u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303a04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_4c;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x118u;
        g->ebx = 0x80u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x124u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x10303a1fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303a39u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10303a4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x114u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10303539(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10303539(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
