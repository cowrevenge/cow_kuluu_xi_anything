/* f_0x10223ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10223ec0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10223eddu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_10223edd;
    case 0x10223f29u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f29;
    case 0x10223f31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f31;
    case 0x10223f45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f45;
    case 0x10223f5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f5f;
    case 0x10223f64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f64;
    case 0x10223f6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f6d;
    case 0x10223f7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f7a;
    case 0x10223f89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f89;
    case 0x10223f8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f8d;
    case 0x10223f96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f96;
    case 0x10223f9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223f9a;
    case 0x10223fa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223fa6;
    case 0x10223faau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223faa;
    case 0x10223fafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223faf;
    case 0x10223fb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223fb9;
    case 0x10223fc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223fc2;
    case 0x10223fc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223fc6;
    case 0x10223fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223fe6;
    case 0x10223febu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223feb;
    case 0x10223ff4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223ff4;
    case 0x10223ff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223ff6;
    case 0x10223fffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10223fff;
    case 0x10224003u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10224003;
    case 0x1022400eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_1022400e;
    case 0x1022401au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_1022401a;
    case 0x10224034u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10224034;
    case 0x1022403cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_1022403c;
    case 0x1022405eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_1022405e;
    case 0x1022406du: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_1022406d;
    case 0x1022409au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_1022409a;
    case 0x102240a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_102240a7;
    default: break;
    }
#endif

    COW_AT(10223ec0)
    wr32(self + 0x68u, 0u);
    if (rd32(COW_IMG(0x1066714cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066714cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1066714cu));
        loc_c = rd32(COW_IMG(0x1066714cu));
    COW_AT(10223edd)
        g->edx = in_edx;
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x10223c90u), rd32(COW_IMG(0x10667150u)), 0);
        t1 = g->edx;
        t2 = rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u);
        g->eax = rd32(COW_IMG(0x10667150u));
        g->edx = t1;
        t3 = rd32(COW_IMG(0x10667150u));
        t4 = cow_thiscall(g, COW_IMG(0x10221900u), self, 4, COW_IMG(0x10224a80u), t2, 0u, 0xcu);
        t5 = g->edx;
        t6 = rd32(arg1 * 4u + self + 0x70u);
        if ((int32_t)t2 <= 0)
        {
            eax = t4;
            ecx = t6;
            edx = t5;
            ebp = 0u;
            loc_10 = 0xffffffffu;
        }
        else
        {
            loc_4 = t2;
            loc_14 = t6;
    COW_AT(10223f29)
            ebp = 0u;
            loc_10 = 0xffffffffu;
            loc_1c = 0u;
            loc_18 = 0x160u;
L_10223f31: ;
    COW_AT(10223f31)
            if (arg1 == 0u)
            {
                esi = rd16(loc_18 + rd32(COW_IMG(0x10667150u)));
                goto L_10223f8d;
            }
            esi = rd16(loc_18 + rd32(COW_IMG(0x10667150u)));
    COW_AT(10223f45)
            t7 = esi * 0x30u + loc_c;
            if (rd8(t7 + 2u) != arg1) goto L_10223fc6;
            eax = t7;
            ecx = rd8(t7 + 2u);
            edx = loc_c;
            loc_8 = t7;
    COW_AT(10223f5f)
            if (arg1 != 0x14u) goto L_10223f8d;
    COW_AT(10223f64)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t8 = cow_call_regs(g, COW_IMG(0x10087b20u), eax, g->ecx, g->edx, 1, 0);
            t9 = g->ecx;
            t10 = g->edx;
            if ((uint8_t)t8 == 0u) goto L_10223fc2;
            eax = t8;
            ecx = t9;
            edx = t10;
    COW_AT(10223f6d)
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t11 = cow_call_regs(g, COW_IMG(0x102231f0u), eax, g->ecx, g->edx, 1, 1, esi);
            t12 = g->edx;
            if ((uint8_t)t11 == 0u) goto L_10223fc2;
            edx = t12;
    COW_AT(10223f7a)
            if (rd8(COW_IMG(0x10485641u)) < rd8(loc_8 + 0xfu)) goto L_10223fc2;
    COW_AT(10223f89)
L_10223f8d: ;
    COW_AT(10223f8d)
            if (loc_14 != 0xffffffffu)
            {
                eax = loc_14;
    COW_AT(10223f96)
                if (eax == esi)
                {
    COW_AT(10223f9a)
                    loc_10 = ebp;
                    loc_14 = 0xffffffffu;
                }
            }
    COW_AT(10223fa6)
            if ((int32_t)ebp >= 0)
            {
    COW_AT(10223faa)
                if ((int32_t)ebp < (int32_t)rd32(self + 0x44u))
                {
    COW_AT(10223faf)
                    if (ebp * 8u + rd32(self + 0x20u) != 0u)
                    {
                        eax = ebp * 8u + rd32(self + 0x20u);
    COW_AT(10223fb9)
                        wr32(eax, loc_1c);
                        ebp = ebp + 1u;
                    }
                }
            }
L_10223fc6: ;
    COW_AT(10223fc6)
            if ((int32_t)(loc_1c + 1u) < (int32_t)loc_4)
            {
                loc_1c = loc_1c + 1u;
                loc_18 = loc_18 + 2u;
                goto L_10223f31;
            }
            eax = loc_1c + 1u;
            ecx = loc_4;
            edx = loc_18 + 2u;
        }
    COW_AT(10223fe6)
        if (arg1 == 2u)
        {
    COW_AT(10223feb)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t13 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
            t14 = g->ecx;
            t15 = g->edx;
            if (t13 != 0u)
            {
                eax = t13;
                ecx = t14;
                edx = t15;
            }
            else
            {
                eax = t13;
                ecx = t14;
                edx = t15;
    COW_AT(10223ff4)
                ebp = 0u;
            }
    COW_AT(10223ff6)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t16 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
            t17 = g->ecx;
            t18 = g->edx;
            if (t16 == 0u)
            {
                eax = t16;
                edx = t18;
            }
            else
            {
                eax = t16;
                ecx = t17;
                edx = t18;
    COW_AT(10223fff)
                if (ebp == 0u)
                {
    COW_AT(10224003)
                    if (rd16(COW_IMG(0x10485f7au)) == 0u)
                    {
                        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
    COW_AT(1022400e)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x30u;
                        t19 = cow_cdecl(g, COW_IMG(0x100fc9c0u), 2, eax, 1u);
                        t20 = g->edx;
                        eax = t19;
                        edx = t20;
                    }
                }
            }
        }
    COW_AT(1022401a)
        g->esp = sp0 - 0x2cu;
        cow_fastcall(g, COW_IMG(0x10221a80u), self, edx, 2, ebp, 0u);
        t21 = g->edx;
        wr32(self + 0x58u, 1u);
        if (loc_10 == 0xffffffffu)
        {
            eax = loc_10;
            edx = t21;
        }
        else
        {
            eax = loc_10;
            edx = t21;
    COW_AT(10224034)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t22 = cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, eax);
            t23 = g->edx;
            eax = t22;
            edx = t23;
        }
    COW_AT(1022403c)
        wr32(self + 0x64u, arg1);
        wr8(self + 0xd1u, (uint8_t)arg2);
        wr8(self + 0xd0u, 0u);
        wr8(self + 0xd2u, (uint8_t)arg3);
        if ((uint8_t)arg3 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    COW_AT(1022405e)
            if (rd8(COW_IMG(0x1038615au) + arg1 * 3u) == 0u)
            {
                edx = 0u;
            }
            else
            {
                ecx = rd8(COW_IMG(0x1038615au) + arg1 * 3u);
    COW_AT(1022406d)
                t24 = rd32(COW_IMG(0x10578474u));
                wr32(t24 + 0x28u, ecx);
                wr32(t24 + 0x20u, 0u);
                wr32(t24 + 0x24u, 0u);
                wr8(t24 + 0x30u, 0u);
                wr32(t24 + 0x34u, 0u);
                wr32(t24 + 0x2cu, 0x3e8u);
                g->ebx = arg1;
                g->eax = t24;
                g->edx = 0u;
                g->esp = sp0 - 0x2cu;
                t25 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f630u), 1u, 0u);
                t26 = g->edx;
                eax = t25;
                edx = t26;
            }
        }
    COW_AT(1022409a)
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t27 = cow_thiscall(g, COW_IMG(0x1021e820u), rd32(COW_IMG(0x10667154u)), 0);
        eax = t27;
    }
    COW_AT(102240a7)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
L_10223fc2: ;
    COW_AT(10223fc2)
    goto L_10223fc6;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10223ec0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10223eddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10223f29u:
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
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        g->ebp = 0u;
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x10u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x10223f31u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223f45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223f5fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223f64u:
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10223f6du:
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10223f7au:
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10223f89u:
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10223f8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223f96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223f9au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223fa6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223faau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223fafu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223fb9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223fc2u:
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10223fc6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223fe6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223febu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223ff4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223ff6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10223fffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10224003u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022400eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022401au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10224034u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022403cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022405eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022406du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->edx = 0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022409au:
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
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102240a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10223ec0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10223ec0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
