/* f_0x10142e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10142e80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    int64_t q50;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10142e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142e8c;
    case 0x10142ea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142ea0;
    case 0x10142ea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142ea9;
    case 0x10142ebfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142ebf;
    case 0x10142ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142ecb;
    case 0x10142ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142ed0;
    case 0x10142ef1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142ef1;
    case 0x10142efau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142efa;
    case 0x10142efdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142efd;
    case 0x10142f0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142f0a;
    case 0x10142f0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142f0e;
    case 0x10142f10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142f10;
    case 0x10142f13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142f13;
    case 0x10142f22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142f22;
    case 0x10142f3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142f3a;
    case 0x10142f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142f50;
    case 0x10142f8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142f8f;
    case 0x10142fa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142fa7;
    case 0x10142fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10142fbd;
    case 0x10143033u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10143033;
    case 0x10143041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10143041;
    case 0x10143055u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10143055;
    case 0x10143067u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10143067;
    case 0x10143079u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10143079;
    case 0x10143080u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10143080;
    case 0x10143097u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10143097;
    case 0x1014309fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1014309f;
    case 0x101430a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101430a6;
    case 0x101430bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101430bd;
    case 0x101430ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101430ce;
    case 0x101430d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101430d7;
    case 0x101430e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101430e0;
    case 0x101430e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101430e9;
    case 0x10143100u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10143100;
    case 0x10143159u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10143159;
    case 0x1014317au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1014317a;
    case 0x1014317eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1014317e;
    case 0x1014318fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1014318f;
    case 0x101431a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101431a5;
    default: break;
    }
#endif

    COW_AT(10142e80)
    eax = in_eax;
    edx = in_edx;
    edi = 0xeff8u;
L_10142e8c: ;
    COW_AT(10142e8c)
    g->eax = eax;
    g->edx = edx;
    t1 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t1, 1, edi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_101431a5;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(10142ea0)
    if (edi + 1u < 0xefffu)
    {
        edi = edi + 1u;
        goto L_10142e8c;
    }
    COW_AT(10142ea9)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t5 = cow_call_regs(g, COW_IMG(0x10087c30u), eax, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(self + 8u, t5 + 3u);
    if (rd32(self + 0xcu) == 0u)
    {
        ecx = t6;
        edx = t7;
    }
    else
    {
        eax = rd32(self + 0xcu);
        ecx = t6;
        edx = t7;
    COW_AT(10142ebf)
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(self + 0xcu, 0u);
        ecx = t8;
        edx = t9;
    }
    COW_AT(10142ecb)
    if (rd32(self + 0xcu) == 0u)
    {
    COW_AT(10142ed0)
        t10 = rd32(self + 8u) * 0x54u;
        g->eax = t10;
        t11 = rd32(self + 8u);
        g->esp = sp0 - 0x1cu;
        t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t10, in_ebp, in_ebx);
        t13 = g->ecx;
        t14 = g->edx;
        if (t12 == 0u)
        {
            ecx = t13;
            edx = t14;
    COW_AT(10142f0e)
            ebp = 0u;
        }
        else
        {
            ecx = t13;
            edx = t14;
            ebp = t12;
            edi = t11;
    COW_AT(10142ef1)
            if ((int32_t)(edi - 1u) >= 0)
            {
                eax = edi - 1u;
                ebx = ebp;
    COW_AT(10142efa)
                edi = eax + 1u;
L_10142efd: ;
    COW_AT(10142efd)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t15 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t16 = g->ecx;
                t17 = g->edx;
                if (edi != 1u)
                {
                    eax = t15;
                    edx = t17;
                    ebx = ebx + 0x54u;
                    edi = edi - 1u;
                    goto L_10142efd;
                }
                ecx = t16;
                edx = t17;
            }
    COW_AT(10142f0a)
        }
    COW_AT(10142f10)
        wr32(self + 0xcu, ebp);
    }
    COW_AT(10142f13)
    t18 = rd32(self + 0x14u);
    t19 = rd32(self + 0xcu);
    wr32(self + 4u, 0u);
    if ((int32_t)t18 < 0)
    {
        eax = t18;
        edi = t19;
    COW_AT(10142f3a)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t22 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
        t23 = g->edx;
        t24 = rd32(rd32(t22) + 0x208u);
        eax = rd32(t22);
        edx = t23;
        loc_28 = 0x80808080u;
        loc_2c = t24;
    }
    else
    {
        eax = t18;
        edi = t19;
    COW_AT(10142f22)
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t20 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
        t21 = rd32(rd32(t20) + 0x208u);
        eax = t20;
        edx = t21;
        loc_28 = 0x80509050u;
        loc_2c = t21;
    }
    COW_AT(10142f50)
    g->esp = sp0 - 0x24u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 0u, 0xeu, loc_2c, loc_28);
    wr32(edi + 0x4cu, 0u);
    wr32(edi + 0x48u, 0xffffffffu);
    t25 = rd32(self + 4u) + 1u;
    wr32(self + 4u, t25);
    t26 = rd32(self + 0xcu);
    t27 = rd32(COW_IMG(0x105782a4u));
    t28 = cow_call_regs(g, COW_IMG(0x10144340u), t26, t27, t25 * 0x15u, 1, 0);
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 == 0u)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        edi = t25 * 0x54u + t26;
    COW_AT(10142fa7)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t33 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
        t34 = g->edx;
        t35 = rd32(rd32(t33) + 0x2e8u);
        eax = rd32(t33);
        edx = t34;
        loc_28 = 0x80808080u;
        loc_2c = t35;
    }
    else
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        edi = t25 * 0x54u + t26;
    COW_AT(10142f8f)
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t31 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
        t32 = rd32(rd32(t31) + 0x2e8u);
        eax = t31;
        edx = t32;
        loc_28 = 0x80509050u;
        loc_2c = t32;
    }
    COW_AT(10142fbd)
    g->esp = sp0 - 0x24u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 0u, 0xeu, loc_2c, loc_28);
    wr32(edi + 0x4cu, 0u);
    wr32(edi + 0x48u, 0xffffffffu);
    t36 = rd32(self + 4u) + 1u;
    wr32(self + 4u, t36);
    g->eax = rd32(self + 0xcu);
    g->edx = t36 * 0x15u;
    t37 = rd32(self + 0xcu);
    g->esp = sp0 - 0x28u;
    t38 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xe3u);
    t39 = g->edx;
    t40 = t36 * 0x54u + t37;
    g->esp = sp0 - 0x24u;
    t41 = cow_fastcall(g, COW_IMG(0x101f4b20u), t40, t39, 4, 1u, 1u, t38, 0x80909040u);
    t42 = g->ecx;
    t43 = g->edx;
    g->edx = t43;
    t44 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x54u);
    t45 = g->edx;
    wr32(t40 + 0x4cu, t44);
    wr32(t40 + 0x48u, 0xfffffffeu);
    t46 = rd32(self + 4u) + 1u;
    wr32(self + 4u, t46);
    edx = t45;
    edi = 0xeff8u;
    loc_8 = 0xeff8u;
    loc_14 = rd32(sp0 - 0x14u);
L_10143033: ;
    COW_AT(10143033)
    if ((int32_t)rd32(self + 4u) >= (int32_t)rd32(self + 8u)) goto L_1014318f;
    eax = rd32(self + 8u);
    COW_AT(10143041)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t47 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, edi);
    t48 = g->edx;
    if (t47 == 0u)
    {
        edx = t48;
    }
    else
    {
        eax = t47;
        edx = t48;
    COW_AT(10143055)
        t49 = rd32(eax + 0x157cu);
        if (rd32(eax + 0x157cu) != 0u)
        {
            eax = t49;
            loc_4 = t49;
    COW_AT(10143067)
            if (rd16(eax) != 0u)
            {
    COW_AT(10143079)
                edi = eax + 6u;
                loc_10 = 0u;
                loc_c = eax + 6u;
L_10143080: ;
    COW_AT(10143080)
                if ((int32_t)rd32(self + 0x14u) < 0)
                {
                    ecx = rd32(self + 0x14u);
                    ebx = rd8(edi);
                    ebp = rd16(edi - 2u) - 0x7400u;
                    goto L_101430ce;
                }
                ecx = rd32(self + 0x14u);
                ebx = rd8(edi);
                ebp = rd16(edi - 2u) - 0x7400u;
    COW_AT(10143097)
                if ((int32_t)ebp < 768)
                {
    COW_AT(101430a6)
                    q50 = (int64_t)cow_muls(0x55555556u, ebp);
                    edx = (cow_qhi(q50) & 0xffffff00u) | rd8(COW_IMG(0x10370280u) + cow_qhi(q50) + (cow_qhi(q50) >> 0x1fu));
                    loc_14 = (loc_14 & 0xffffff00u) | rd8(COW_IMG(0x10370280u) + cow_qhi(q50) + (cow_qhi(q50) >> 0x1fu));
                }
                else
                {
    COW_AT(1014309f)
                    loc_14 = (loc_14 & 0xffffff00u) | 0x13u;
                }
    COW_AT(101430bd)
                if ((uint8_t)loc_14 != ecx) goto L_10143159;
L_101430ce: ;
    COW_AT(101430ce)
                if (rd32(COW_IMG(0x105782a4u)) == 0u)
                {
                    eax = rd32(COW_IMG(0x105782a4u));
                    goto L_101430e9;
                }
                eax = rd32(COW_IMG(0x105782a4u));
    COW_AT(101430d7)
                if ((int32_t)ebx < (int32_t)rd8(eax + 0x14u)) goto L_10143159;
                ecx = rd8(eax + 0x14u);
    COW_AT(101430e0)
                if ((int32_t)ebx > (int32_t)rd8(eax + 0x15u)) goto L_10143159;
                edx = rd8(eax + 0x15u);
L_101430e9: ;
    COW_AT(101430e9)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t51 = cow_cdecl(g, COW_IMG(0x100fdad0u), 3, COW_IMG(0x10482facu), COW_IMG(0x104830ecu), ebp);
                t52 = g->ecx;
                t53 = g->edx;
                if ((uint8_t)t51 != 0u)
                {
                    eax = t51;
                    ecx = t52;
                    edx = t53;
    COW_AT(10143100)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t54 = cow_cdecl(g, COW_IMG(0x10141f10u), 5, ebp, in_ebp, in_ebx, in_edi, in_esi);
                    t55 = g->edx;
                    t56 = rd32(self + 0xcu) + rd32(self + 4u) * 0x54u;
                    g->eax = rd32(self + 4u) * 0x15u;
                    t57 = rd32(self + 4u);
                    g->esp = sp0 - 0x24u;
                    t58 = cow_fastcall(g, COW_IMG(0x101f4b20u), t56, t55, 4, 0u, 0x15u, ebp + 0x7400u, 0x80808080u);
                    t59 = g->edx;
                    cow_fastcall(g, COW_IMG(0x101f4b20u), t56, t59, 4, 1u, 0x31u, ebp + 0x7400u, t54);
                    wr32(t56 + 0x4cu, 0u);
                    wr32(t56 + 0x48u, ebp + 0x7400u);
                    t60 = rd32(self + 4u) + 1u;
                    wr32(self + 4u, t60);
                    edi = loc_c;
                }
L_10143159: ;
    COW_AT(10143159)
                if ((int32_t)(loc_10 + 1u) < (int32_t)rd16(loc_4))
                {
                    edx = rd16(loc_4);
                    loc_10 = loc_10 + 1u;
                    loc_c = edi + 4u;
                    edi = edi + 4u;
                    goto L_10143080;
                }
                edx = rd16(loc_4);
    COW_AT(1014317a)
                edi = loc_8;
            }
        }
    }
    COW_AT(1014317e)
    if (edi + 1u < 0xefffu)
    {
        loc_8 = edi + 1u;
        edi = edi + 1u;
        goto L_10143033;
    }
    edi = edi + 1u;
L_1014318f: ;
    COW_AT(1014318f)
    t61 = (edx & 0xffff0000u) | rd16(self + 4u);
    t62 = rd32(self + 0xcu);
    g->esi = self;
    g->edi = edi;
    g->eax = t62;
    g->esp = sp0 - 0x24u;
    t63 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t61, 3, t62, t61, 0u);
    t64 = g->edx;
    eax = t63;
    edx = t64;
L_101431a5: ;
    COW_AT(101431a5)
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
int cow_entry_fix_10142e80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10142e8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10142ea0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10142ea9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10142ebfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10142ecbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10142ed0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10142ef1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10142efau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10142efdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10142f0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10142f0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10142f10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10142f13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10142f22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x10142f3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x10142f50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10142f8fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x28u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x10142fa7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x28u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x10142fbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10143033u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10143041u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10143055u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10143067u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10143079u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10143080u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10143097u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1014309fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101430a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101430bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101430ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101430d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101430e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101430e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10143100u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10143159u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1014317au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1014317eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1014318fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101431a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10142e80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10142e80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
