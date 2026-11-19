/* f_0x10314273 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=4 */
uint32_t cow_fn_10314273(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d27;
    double d3;
    double d32;
    double d34;
    double d35;
    double d38;
    double d4;
    double d43;
    double d45;
    double d46;
    double d49;
    double d5;
    double d52;
    double d53;
    double d56;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    double loc_38_d;
    uint32_t loc_4;
    double loc_40_d;
    double loc_48_d;
    uint32_t loc_50;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t47;
    uint32_t t48;
    uint32_t t50;
    uint32_t t51;
    uint32_t t54;
    uint32_t t55;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031428cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031428c;
    case 0x103142a6u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103142a6;
    case 0x103142b1u: eax = g->eax; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103142b1;
    case 0x103142c2u: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103142c2;
    case 0x103142c7u: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103142c7;
    case 0x103142cbu: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103142cb;
    case 0x103142d5u: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103142d5;
    case 0x103142dau: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103142da;
    case 0x103142e0u: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103142e0;
    case 0x10314307u: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314307;
    case 0x10314310u: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314310;
    case 0x10314319u: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314319;
    case 0x1031431eu: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031431e;
    case 0x10314329u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314329;
    case 0x10314332u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10314332;
    case 0x1031433cu: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031433c;
    case 0x1031434au: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031434a;
    case 0x1031435cu: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031435c;
    case 0x10314362u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314362;
    case 0x10314369u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314369;
    case 0x10314377u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314377;
    case 0x10314382u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314382;
    case 0x10314390u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314390;
    case 0x1031439bu: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031439b;
    case 0x103143abu: loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143ab;
    case 0x103143aeu: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143ae;
    case 0x103143bcu: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143bc;
    case 0x103143c7u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143c7;
    case 0x103143d5u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143d5;
    case 0x103143e0u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143e0;
    case 0x103143f0u: loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143f0;
    case 0x103143f1u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143f1;
    case 0x103143f6u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143f6;
    case 0x103143f9u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143f9;
    case 0x103143ffu: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103143ff;
    case 0x10314408u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314408;
    case 0x1031440cu: eax = g->eax; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031440c;
    case 0x1031441du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1031441d;
    case 0x10314439u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10314439;
    case 0x10314460u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314460;
    case 0x10314469u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314469;
    case 0x1031446du: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031446d;
    case 0x10314476u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10314476;
    case 0x1031447au: eax = g->eax; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031447a;
    case 0x1031448bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1031448b;
    case 0x103144a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_103144a7;
    case 0x103144ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_48_d = rdf64(sp0 - 0x48u); loc_40_d = rdf64(sp0 - 0x40u); loc_38_d = rdf64(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_103144cc;
    case 0x103144d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_103144d1;
    case 0x103144d6u: eax = g->eax; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103144d6;
    case 0x103144dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103144df;
    case 0x103144e6u: esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_103144e6;
    case 0x10314500u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10314500;
    case 0x10314503u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10314503;
    default: break;
    }
#endif

    COW_AT(10314273)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, 0xffffu);
    wr32(sp0 - 0x34u, 0x133fu);
    g->esp = sp0 - 0x24u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), self, 4, 0x133fu, 0xffffu, in_edi, in_esi);
    eax = t1;
    COW_AT(1031428c)
    wr32(sp0 - 8u, eax);
    t2 = rd32(sp0 + 0xau);
    if ((t2 & 0x7ff0u) == 0x7ff0u)
    {
        edi = t2;
        loc_8 = eax;
        goto L_103142b1;
    }
    edi = t2;
    loc_8 = eax;
    COW_AT(103142a6)
    if ((rd32(sp0 + 0x12u) & 0x7ff0u) != 0x7ff0u)
    {
        eax = (rd32(sp0 + 0x12u) & 0xffff0000u) | (rd32(sp0 + 0x12u) & 0x7ff0u);
        goto L_1031431e;
    }
L_103142b1: ;
    COW_AT(103142b1)
    if ((edi & 0x7ff8u) != 0x7ff0u)
    {
        edi = edi & 0x7ff8u;
        goto L_103142cb;
    }
    edi = edi & 0x7ff8u;
    COW_AT(103142c2)
    if ((arg2 & 0x7ffffu) != 0u) goto L_103142e0;
    COW_AT(103142c7)
    if (arg1 != 0u) goto L_103142e0;
L_103142cb: ;
    COW_AT(103142cb)
    if ((rd32(sp0 + 0x12u) & 0x7ff8u) != 0x7ff0u)
    {
        esi = rd32(sp0 + 0x12u) & 0x7ff8u;
        goto L_10314307;
    }
    esi = rd32(sp0 + 0x12u) & 0x7ff8u;
    COW_AT(103142d5)
    if ((arg4 & 0x7ffffu) != 0u) goto L_103142e0;
    COW_AT(103142da)
    if (arg3 == 0u) goto L_10314307;
L_103142e0: ;
    COW_AT(103142e0)
    wr32(sp0 - 0x30u, loc_8);
    d3 = fr(g, rdf64(sp0 + 4u) + rdf64(sp0 + 0xcu));
    wr32(sp0 - 0x34u, 0x7ff0u);
    wr32(sp0 - 0x38u, 0x7ff0u);
    wrf64(sp0 - 0x38u, d3);
    wr32(sp0 - 0x3cu, 0x7ff0u);
    wr32(sp0 - 0x40u, 0x7ff0u);
    d4 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x40u, d4);
    wr32(sp0 - 0x44u, 0x7ff0u);
    wr32(sp0 - 0x48u, 0x7ff0u);
    d5 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x48u, d5);
    wr32(sp0 - 0x4cu, 0x26u);
    wr32(sp0 - 0x50u, 8u);
    eax = 0x7ff8u;
    ecx = 0x7ff0u;
    edx = arg1;
    loc_4 = in_ebp;
    loc_24 = in_ebx;
    loc_28 = in_esi;
    loc_2c = in_edi;
    loc_30 = loc_8;
    loc_38_d = d3;
    loc_40_d = d4;
    loc_48_d = d5;
    loc_50 = 8u;
L_103144cc: ;
    COW_AT(103144cc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x1031f8b2u), ecx, 11, loc_50, 0x26u, cow_dlo(loc_48_d), cow_dhi(loc_48_d), cow_dlo(loc_40_d), cow_dhi(loc_40_d), cow_dlo(loc_38_d), cow_dhi(loc_38_d), loc_30, loc_2c, loc_28);
    t48 = g->edx;
    d49 = cow_take_float(g);
    eax = t47;
    edx = t48;
    x0 = d49;
    COW_AT(103144d1)
L_10314503: ;
    COW_AT(10314503)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    fpush(g, x0);
    return eax;
L_10314307: ;
    COW_AT(10314307)
    if ((uint16_t)edi == 0x7ff8u) goto L_103144e6;
    COW_AT(10314310)
    if ((uint16_t)esi == 0x7ff8u) goto L_103144e6;
    COW_AT(10314319)
    eax = 0x7ff8u;
L_1031431e: ;
    COW_AT(1031431e)
    d6 = rdf64(sp0 + 0xcu);
    d7 = rdf64(sp0 + 4u);
    if (d6 < d7 || d6 > d7)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 0u);
        goto L_1031433c;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 0u);
    COW_AT(10314329)
    wr32(sp0 - 0x30u, 0xffffu);
    wr32(sp0 - 0x34u, loc_8);
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 0x24u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), 0x7ff0u, 4, loc_8, 0xffffu, in_edi, in_esi);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(10314332)
    x0 = rdf64(sp0 + 4u);
    goto L_10314503;
L_1031433c: ;
    COW_AT(1031433c)
    d10 = rdf64(sp0 + 4u);
    if (d10 < rdf64(COW_IMG(0x1034a1d8u)) || d10 > rdf64(COW_IMG(0x1034a1d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    COW_AT(1031434a)
        d11 = rdf64(sp0 + 0xcu);
        d12 = rdf64(sp0 + 4u);
        wr32(sp0 - 0x20u, 1u);
        if (!(d11 > d12))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, d12, 0u);
    COW_AT(10314362)
            wr32(sp0 - 0x1cu, 0x80000000u);
            loc_20 = 1u;
            loc_1c = 0x80000000u;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, d12, 0u);
    COW_AT(1031435c)
            wr32(sp0 - 0x1cu, 0u);
            loc_20 = 1u;
            loc_1c = 0u;
        }
    }
    COW_AT(10314369)
    d13 = rdf64(sp0 + 4u);
    if (!(d13 > rdf64(COW_IMG(0x1034a1d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        goto L_10314382;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    COW_AT(10314377)
    d14 = rdf64(sp0 + 0xcu);
    d15 = rdf64(sp0 + 4u);
    if (!(d14 >= d15)) goto L_1031439b;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, d15, 0u);
L_10314382: ;
    COW_AT(10314382)
    d16 = rdf64(sp0 + 4u);
    if (d16 >= rdf64(COW_IMG(0x1034a1d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        goto L_103143ae;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    COW_AT(10314390)
    d17 = rdf64(sp0 + 0xcu);
    d18 = rdf64(sp0 + 4u);
    if (!(d17 > d18))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, d18, 0u);
        goto L_103143ae;
    }
L_1031439b: ;
    COW_AT(1031439b)
    wr32(sp0 - 0x20u, arg1 - 1u);
    wr32(sp0 - 0x1cu, arg2);
    if (arg1 != 0u)
    {
        eax = arg2;
        edi = arg1 - 1u;
        loc_20 = arg1 - 1u;
        loc_1c = arg2;
        goto L_103143f9;
    }
    COW_AT(103143ab)
    eax = arg2 - 1u;
    edi = arg1 - 1u;
    loc_20 = arg1 - 1u;
L_103143f1: ;
    COW_AT(103143f1)
    wr32(sp0 - 0x1cu, eax);
    loc_1c = eax;
L_103143f9: ;
    COW_AT(103143f9)
    if ((loc_1c >> 0x10u & 0x7ff0u) != 0u) goto L_10314460;
    COW_AT(103143ff)
    if ((loc_1c & 0xfffffu) != 0u) goto L_1031440c;
    COW_AT(10314408)
    if (edi == 0u) goto L_10314460;
L_1031440c: ;
    COW_AT(1031440c)
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    wr32(sp0 - 0x34u, 0x7ff0u);
    wr32(sp0 - 0x38u, 0x7ff0u);
    wrf64(sp0 - 0x38u, cow_bits2d(loc_20, loc_1c));
    g->edx = arg1;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x1031f6a5u), sp0 - 0xcu, 0x7ff0u, g->edx, 1, 3, cow_dlo(cow_bits2d(loc_20, loc_1c)), cow_dhi(cow_bits2d(loc_20, loc_1c)), sp0 - 0xcu);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    ecx = t25;
    edx = t26;
    x0 = d27;
    COW_AT(1031441d)
    wrf64(sp0 - 0x14u, x0);
    t28 = rd32(sp0 - 0xcu) + 0x600u;
    wr32(sp0 - 0x30u, t28);
    wr32(sp0 - 0x34u, ecx);
    wr32(sp0 - 0x38u, ecx);
    wrf64(sp0 - 0x38u, x0);
    g->eax = t28;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t29 = cow_thiscall_cdecl(g, COW_IMG(0x1031f5beu), ecx, 5, cow_dlo(x0), cow_dhi(x0), t28, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t30 = g->ecx;
    t31 = g->edx;
    d32 = cow_take_float(g);
    eax = t29;
    ecx = t30;
    edx = t31;
    x0 = d32;
    COW_AT(10314439)
    wrf64(sp0 - 0x20u, x0);
    t33 = rd32(sp0 - 8u);
    wr32(sp0 - 0x30u, t33);
    wr32(sp0 - 0x34u, ecx);
    wr32(sp0 - 0x38u, ecx);
    wrf64(sp0 - 0x38u, x0);
    wr32(sp0 - 0x3cu, ecx);
    wr32(sp0 - 0x40u, ecx);
    d34 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x40u, d34);
    wr32(sp0 - 0x44u, ecx);
    wr32(sp0 - 0x48u, ecx);
    d35 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x48u, d35);
    wr32(sp0 - 0x4cu, 0x26u);
    wr32(sp0 - 0x50u, 0x12u);
    loc_4 = rd32(sp0 - 4u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = t33;
    loc_38_d = x0;
    loc_40_d = d34;
    loc_48_d = d35;
    loc_50 = 0x12u;
    goto L_103144cc;
L_103143ae: ;
    COW_AT(103143ae)
    d19 = rdf64(sp0 + 4u);
    if (!(d19 > rdf64(COW_IMG(0x1034a1d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        goto L_103143c7;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    COW_AT(103143bc)
    d20 = rdf64(sp0 + 0xcu);
    d21 = rdf64(sp0 + 4u);
    if (d20 > d21) goto L_103143e0;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, d21, 0u);
L_103143c7: ;
    COW_AT(103143c7)
    d22 = rdf64(sp0 + 4u);
    if (d22 >= rdf64(COW_IMG(0x1034a1d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        goto L_103143f6;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    COW_AT(103143d5)
    d23 = rdf64(sp0 + 0xcu);
    d24 = rdf64(sp0 + 4u);
    if (d23 >= d24)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, d24, 0u);
        goto L_103143f6;
    }
L_103143e0: ;
    COW_AT(103143e0)
    wr32(sp0 - 0x20u, arg1 + 1u);
    wr32(sp0 - 0x1cu, arg2);
    if (arg1 + 1u != 0u)
    {
        eax = arg2;
        edi = arg1 + 1u;
        loc_20 = arg1 + 1u;
        loc_1c = arg2;
        goto L_103143f9;
    }
    COW_AT(103143f0)
    eax = arg2 + 1u;
    edi = arg1 + 1u;
    loc_20 = arg1 + 1u;
    goto L_103143f1;
L_103143f6: ;
    COW_AT(103143f6)
    edi = loc_20;
    goto L_103143f9;
L_10314460: ;
    COW_AT(10314460)
    if (loc_1c != 0x7ff00000u) goto L_1031446d;
    COW_AT(10314469)
    if (edi == 0u) goto L_1031447a;
L_1031446d: ;
    COW_AT(1031446d)
    if (loc_1c != 0xfff00000u) goto L_103144d6;
    COW_AT(10314476)
    if (edi != 0u) goto L_103144d6;
L_1031447a: ;
    COW_AT(1031447a)
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    wr32(sp0 - 0x34u, 0x7ff0u);
    wr32(sp0 - 0x38u, 0x7ff0u);
    wrf64(sp0 - 0x38u, cow_bits2d(loc_20, loc_1c));
    g->edx = arg1;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x1031f6a5u), sp0 - 0xcu, 0x7ff0u, g->edx, 1, 3, cow_dlo(cow_bits2d(loc_20, loc_1c)), cow_dhi(cow_bits2d(loc_20, loc_1c)), sp0 - 0xcu);
    t36 = g->ecx;
    t37 = g->edx;
    d38 = cow_take_float(g);
    ecx = t36;
    edx = t37;
    x0 = d38;
    COW_AT(1031448b)
    wrf64(sp0 - 0x14u, x0);
    t39 = rd32(sp0 - 0xcu) - 0x600u;
    wr32(sp0 - 0x30u, t39);
    wr32(sp0 - 0x34u, ecx);
    wr32(sp0 - 0x38u, ecx);
    wrf64(sp0 - 0x38u, x0);
    g->eax = t39;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t40 = cow_thiscall_cdecl(g, COW_IMG(0x1031f5beu), ecx, 5, cow_dlo(x0), cow_dhi(x0), t39, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t41 = g->ecx;
    t42 = g->edx;
    d43 = cow_take_float(g);
    eax = t40;
    ecx = t41;
    edx = t42;
    x0 = d43;
    COW_AT(103144a7)
    wrf64(sp0 - 0x20u, x0);
    t44 = rd32(sp0 - 8u);
    wr32(sp0 - 0x30u, t44);
    wr32(sp0 - 0x34u, ecx);
    wr32(sp0 - 0x38u, ecx);
    wrf64(sp0 - 0x38u, x0);
    wr32(sp0 - 0x3cu, ecx);
    wr32(sp0 - 0x40u, ecx);
    d45 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x40u, d45);
    wr32(sp0 - 0x44u, ecx);
    wr32(sp0 - 0x48u, ecx);
    d46 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x48u, d46);
    wr32(sp0 - 0x4cu, 0x26u);
    wr32(sp0 - 0x50u, 0x11u);
    loc_4 = rd32(sp0 - 4u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = t44;
    loc_38_d = x0;
    loc_40_d = d45;
    loc_48_d = d46;
    loc_50 = 0x11u;
    goto L_103144cc;
L_103144d6: ;
    COW_AT(103144d6)
    wr32(sp0 - 0x30u, 0xffffu);
    wr32(sp0 - 0x34u, loc_8);
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 0x24u;
    t50 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), 0x7ff0u, 4, loc_8, 0xffffu, in_edi, in_esi);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(103144df)
    x0 = rdf64(sp0 - 0x20u);
    goto L_10314503;
L_103144e6: ;
    COW_AT(103144e6)
    wr32(sp0 - 0x30u, loc_8);
    wr32(sp0 - 0x34u, 0x7ff0u);
    wr32(sp0 - 0x38u, 0x7ff0u);
    d52 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x38u, d52);
    wr32(sp0 - 0x3cu, 0x7ff0u);
    wr32(sp0 - 0x40u, 0x7ff0u);
    d53 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x40u, d53);
    wr32(sp0 - 0x44u, 0x26u);
    g->eax = 0x7ff8u;
    g->esp = sp0 - 0x2cu;
    t54 = cow_call_regs(g, COW_IMG(0x1031f7bau), g->eax, 0x7ff0u, arg1, 1, 6, 0x26u, cow_dlo(d53), cow_dhi(d53), cow_dlo(d52), cow_dhi(d52), loc_8);
    t55 = g->edx;
    d56 = cow_take_float(g);
    eax = t54;
    edx = t55;
    x0 = d56;
    COW_AT(10314500)
    goto L_10314503;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10314273(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031428cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        wr32(sp0 - 0x34u, 0x133fu);
        wr32(sp0 - 0x30u, 0xffffu);
        (void)sp0;
        return 1;
    }
    case 0x103142a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103142b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103142c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebx = 0x7ffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103142c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebx = 0x7ffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103142cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebx = 0x7ffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103142d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebx = 0x7ffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103142dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103142e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314307u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314310u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314319u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031431eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10314329u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10314332u:
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
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031433cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031434au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031435cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        wr32(sp0 - 0x20u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10314362u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        wr32(sp0 - 0x20u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10314369u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10314377u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10314382u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10314390u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031439bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103143abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_8;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        g->edi = arg1 - 1u;
        wr32(sp0 - 0x20u, arg1 - 1u);
        (void)sp0;
        return 1;
    }
    case 0x103143aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103143bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103143c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103143d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103143e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103143f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_8;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        g->edi = arg1 + 1u;
        wr32(sp0 - 0x20u, arg1 + 1u);
        (void)sp0;
        return 1;
    }
    case 0x103143f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103143f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103143f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103143ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10314408u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031440cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031441du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10314439u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314460u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10314469u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031446du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10314476u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031447au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031448bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x103144a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103144ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        double loc_38_d;
        uint32_t loc_4;
        double loc_40_d;
        double loc_48_d;
        uint32_t loc_50;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_48_d = rdf64(sp0 - 0x48u);
        loc_40_d = rdf64(sp0 - 0x40u);
        loc_38_d = rdf64(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, 0x26u);
        (void)sp0;
        return 1;
    }
    case 0x103144d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103144d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103144dfu:
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
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103144e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_8;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7ff8u;
        g->ecx = 0x7ff0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314500u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314503u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
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
void cow_adapter_10314273(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10314273(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
