/* f_0x102f2c9b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102f2c9b(Guest* g)
{
    double d100;
    double d101;
    double d102;
    double d103;
    double d104;
    double d105;
    double d106;
    double d107;
    double d108;
    double d109;
    double d110;
    double d111;
    double d112;
    double d114;
    double d115;
    double d116;
    double d117;
    double d118;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d25;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d89;
    double d90;
    double d96;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_18_f;
    double loc_1c_f;
    double loc_20_f;
    uint32_t loc_24;
    double loc_24_f;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_2d8;
    uint32_t loc_2dc;
    uint32_t loc_2e0;
    double loc_34_f;
    double loc_38_f;
    uint32_t loc_4;
    double loc_44_f;
    double loc_48_f;
    double loc_4c_f;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    double loc_8_f;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t loc_bc;
    uint32_t loc_c;
    uint32_t loc_c0;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t113;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t24;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t68;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    double x0;
    double x1;
    double x2;
    double x3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 756u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f2cb2u: in_eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2e0u); in_esi = rd32(sp0 - 0x2dcu); in_ebx = rd32(sp0 - 0x2d8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2d8u); g->edi = rd32(sp0 - 0x2e0u); g->esi = rd32(sp0 - 0x2dcu); goto E_102f2cb2;
    case 0x102f2cbau: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2e0u); in_esi = rd32(sp0 - 0x2dcu); in_ebx = rd32(sp0 - 0x2d8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2d8u); g->edi = rd32(sp0 - 0x2e0u); g->esi = rd32(sp0 - 0x2dcu); goto E_102f2cba;
    case 0x102f2cc9u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2e0u); in_esi = rd32(sp0 - 0x2dcu); in_ebx = rd32(sp0 - 0x2d8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2d8u); g->edi = rd32(sp0 - 0x2e0u); g->esi = rd32(sp0 - 0x2dcu); goto E_102f2cc9;
    case 0x102f2ccau: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2e0u); in_esi = rd32(sp0 - 0x2dcu); in_ebx = rd32(sp0 - 0x2d8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2d8u); g->edi = rd32(sp0 - 0x2e0u); g->esi = rd32(sp0 - 0x2dcu); goto E_102f2cca;
    case 0x102f2cd0u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2e0u); in_esi = rd32(sp0 - 0x2dcu); in_ebx = rd32(sp0 - 0x2d8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2d8u); g->edi = rd32(sp0 - 0x2e0u); g->esi = rd32(sp0 - 0x2dcu); goto E_102f2cd0;
    case 0x102f2cd5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2e0u); in_esi = rd32(sp0 - 0x2dcu); in_ebx = rd32(sp0 - 0x2d8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2d8u); g->edi = rd32(sp0 - 0x2e0u); g->esi = rd32(sp0 - 0x2dcu); goto E_102f2cd5;
    case 0x102f2ceau: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2e0u); in_esi = rd32(sp0 - 0x2dcu); in_ebx = rd32(sp0 - 0x2d8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2d8u); g->edi = rd32(sp0 - 0x2e0u); g->esi = rd32(sp0 - 0x2dcu); goto E_102f2cea;
    case 0x102f2cf8u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2e0u); in_esi = rd32(sp0 - 0x2dcu); in_ebx = rd32(sp0 - 0x2d8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2d8u); g->edi = rd32(sp0 - 0x2e0u); g->esi = rd32(sp0 - 0x2dcu); goto E_102f2cf8;
    case 0x102f2cffu: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2e0u); in_esi = rd32(sp0 - 0x2dcu); in_ebx = rd32(sp0 - 0x2d8u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2d8u); g->edi = rd32(sp0 - 0x2e0u); g->esi = rd32(sp0 - 0x2dcu); goto E_102f2cff;
    case 0x102f2d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; goto E_102f2d11;
    case 0x102f2dbau: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); goto E_102f2dba;
    case 0x102f2dbdu: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); goto E_102f2dbd;
    case 0x102f2e95u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_102f2e95;
    case 0x102f2ec4u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_102f2ec4;
    case 0x102f2ed0u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_102f2ed0;
    case 0x102f2ed6u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_102f2ed6;
    case 0x102f2f05u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_102f2f05;
    case 0x102f2f3eu: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f2f3e;
    case 0x102f2f73u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_102f2f73;
    case 0x102f2f77u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f2f77;
    case 0x102f2f79u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2f79;
    case 0x102f2fb7u: eax = g->eax; ecx = g->ecx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); goto E_102f2fb7;
    case 0x102f2fd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; goto E_102f2fd9;
    case 0x102f302cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; goto E_102f302c;
    case 0x102f3039u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; goto E_102f3039;
    case 0x102f3044u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102f3044;
    case 0x102f3049u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102f3049;
    case 0x102f305cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102f305c;
    case 0x102f3066u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; goto E_102f3066;
    case 0x102f3070u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; goto E_102f3070;
    case 0x102f30ceu: ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); goto E_102f30ce;
    case 0x102f30e4u: ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); goto E_102f30e4;
    case 0x102f30f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); goto E_102f30f8;
    case 0x102f310du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f310d;
    case 0x102f315cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f315c;
    case 0x102f31e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102f31e2;
    case 0x102f31fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102f31fb;
    case 0x102f3201u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102f3201;
    case 0x102f320eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f320e;
    case 0x102f3225u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3225;
    case 0x102f3227u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102f3227;
    case 0x102f3253u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_eax = g->ebx; esi = g->esi; edi = g->edi; goto E_102f3253;
    case 0x102f3484u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_c = rd32(sp0 - 0xcu); goto E_102f3484;
    case 0x102f3495u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2e0 = rd32(sp0 - 0x2e0u); loc_2dc = rd32(sp0 - 0x2dcu); loc_2d8 = rd32(sp0 - 0x2d8u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102f3495;
    default: break;
    }
#endif

    COW_AT(102f2c9b)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x2d8u, in_ebx);
    wr32(sp0 - 0x2dcu, in_esi);
    wr32(sp0 - 0x2e0u, in_edi);
    if (rd32(sp0 + 8u) == 0u) goto L_102f2cf8;
    COW_AT(102f2cb2)
    wr32(sp0 - 0x2e4u, 0x10u);
    eax = in_eax;
    ecx = in_eax + 0xcu;
    esi = 0u;
    edi = 0x10u;
L_102f2cba: ;
    COW_AT(102f2cba)
    if (!((double)rdf32(ecx) < (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    COW_AT(102f2cc9)
        esi = esi + 1u;
    }
    COW_AT(102f2cca)
    if (edi != 1u)
    {
        ecx = ecx + 0x10u;
        edi = edi - 1u;
        goto L_102f2cba;
    }
    COW_AT(102f2cd0)
    if (esi != 0x10u) goto L_102f2cea;
    COW_AT(102f2cd5)
    wr16(arg1 + 2u, rd16(arg1 + 2u) | 0xffffu);
    wr32(arg1 + 4u, 0xffffffffu);
    wr16(arg1, 0u);
    loc_4 = in_ebp;
    loc_2d8 = in_ebx;
    loc_2dc = in_esi;
    loc_2e0 = in_edi;
L_102f3495: ;
    COW_AT(102f3495)
    g->ebx = loc_2d8;
    g->esi = loc_2dc;
    g->edi = loc_2e0;
    g->ebp = loc_4;
    return 0u;
L_102f2cea: ;
    COW_AT(102f2cea)
    t1 = -(0u < esi) + 4u;
    wr32(sp0 - 0x10u, t1);
    loc_10 = t1;
L_102f2cff: ;
    COW_AT(102f2cff)
    wr32(sp0 - 0x2e4u, 0x40u);
    edi = sp0 - 0x1d4u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = 0u;
    g->esp = sp0 - 0x2d4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), ecx, 3, in_edi, in_esi, in_ebx);
    t2 = g->edx;
    edx = t2;
    COW_AT(102f2d11)
    t3 = sp0 - 0x1ccu - in_eax;
    wr32(sp0 - 0x58u, t3);
    t4 = sp0 - 0x1c8u - in_eax;
    wr32(sp0 - 0xb8u, t4);
    t5 = sp0 - 0x1c4u - in_eax;
    wr32(sp0 - 0xc0u, t5);
    t6 = sp0 - 0x1acu - in_eax;
    wr32(sp0 - 0x5cu, t6);
    t7 = sp0 - 0x1a8u - in_eax;
    wr32(sp0 - 0xb4u, t7);
    t8 = sp0 - 0x1a4u - in_eax;
    wr32(sp0 - 0xacu, t8);
    t9 = sp0 - 0x19cu - in_eax;
    wr32(sp0 - 0x28u, t9);
    t10 = sp0 - 0x198u - in_eax;
    wr32(sp0 - 0xbcu, t10);
    t11 = sp0 - 0x194u - in_eax;
    wr32(sp0 - 0xa4u, t11);
    t12 = sp0 - 0x18cu - in_eax;
    wr32(sp0 - 0x2cu, t12);
    t13 = sp0 - 0x188u - in_eax;
    wr32(sp0 - 0xa0u, t13);
    wr32(sp0 + 8u, edx);
    t14 = sp0 - 0x184u - in_eax;
    wr32(sp0 - 0xb0u, t14);
    t15 = sp0 - 0x1d4u - in_eax;
    wr32(sp0 - 0xa8u, t15);
    eax = in_eax + 8u;
    ecx = 0u;
    esi = t15;
    loc_58 = t3;
    loc_b8 = t4;
    loc_c0 = t5;
    loc_5c = t6;
    loc_b4 = t7;
    loc_ac = t8;
    loc_28 = t9;
    loc_bc = t10;
    loc_a4 = t11;
    loc_2c = t12;
    loc_a0 = t13;
    loc_b0 = t14;
    loc_a8 = t15;
L_102f2dbd: ;
    COW_AT(102f2dbd)
    d16 = fr(g, (double)rdf32(ecx + sp0 - 0x1d4u) + (double)rdf32(eax - 8u));
    wrf32(sp0 - 0x20u, (float)(double)(float)d16);
    d17 = fr(g, (double)rdf32(eax - 4u) + (double)rdf32(ecx + sp0 - 0x1d0u));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d17);
    d18 = fr(g, (double)rdf32(eax + esi) + (double)rdf32(eax));
    wrf32(sp0 - 0x18u, (float)(double)(float)d18);
    d19 = fr(g, fr(g, (double)(float)d16 * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 8u, (float)(double)(float)d19);
    wr32(sp0 - 0xc4u, (uint32_t)fist32(g, (double)(float)d19));
    wr32(sp0 - 8u, (uint32_t)fist32(g, (double)(float)d19));
    d20 = fr(g, (double)(int32_t)(uint32_t)fist32(g, (double)(float)d19) * (double)rdf32(COW_IMG(0x1034617cu)));
    wrf32(sp0 - 0x24u, (float)(double)(float)d20);
    wrf32(ecx + sp0 - 0x2d4u, (float)d20);
    d21 = fr(g, fr(g, (double)(float)d17 * (double)rdf32(COW_IMG(0x10346160u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 8u, (float)(double)(float)d21);
    wr32(sp0 - 0x50u, (uint32_t)fist32(g, (double)(float)d21));
    wr32(sp0 - 8u, (uint32_t)fist32(g, (double)(float)d21));
    d22 = fr(g, (double)(int32_t)(uint32_t)fist32(g, (double)(float)d21) * (double)rdf32(COW_IMG(0x10346178u)));
    wrf32(sp0 - 8u, (float)(double)(float)d22);
    wrf32(ecx + sp0 - 0x2d0u, (float)d22);
    d23 = fr(g, fr(g, (double)(float)d18 * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0xcu, (float)(double)(float)d23);
    wr32(sp0 - 0x54u, (uint32_t)fist32(g, (double)(float)d23));
    wr32(sp0 - 0xcu, (uint32_t)fist32(g, (double)(float)d23));
    t24 = rd32(sp0 + 8u) & 3u;
    d25 = fr(g, (double)(int32_t)(uint32_t)fist32(g, (double)(float)d23) * (double)rdf32(COW_IMG(0x1034617cu)));
    wr32(sp0 - 0xcu, t24);
    t26 = rd32(sp0 + 8u);
    wrf32(eax + sp0 - in_eax - 0x2d4u, (float)d25);
    wrf32(eax + sp0 - in_eax - 0x2d0u, (float)1.0);
    d27 = (double)(float)fr(g, (double)(float)d17 - (double)(float)d22);
    wrf32(sp0 - 0x38u, (float)d27);
    d28 = (double)(float)fr(g, (double)(float)d18 - d25);
    wrf32(sp0 - 0x34u, (float)d28);
    if ((t26 & 3u) == 3u)
    {
        loc_20_f = (double)(float)d16;
        loc_1c_f = (double)(float)d17;
        loc_18_f = (double)(float)d18;
        loc_8_f = (double)(float)d22;
        loc_24_f = (double)(float)d20;
        loc_c = t24;
        loc_38_f = d27;
        loc_34_f = d28;
        x3 = fr(g, (double)(float)d18 - d25);
        x2 = fr(g, (double)(float)d17 - (double)(float)d22);
        x1 = fr(g, (double)(float)d16 - (double)(float)d20);
        x0 = d25;
    }
    else
    {
        loc_20_f = (double)(float)d16;
        loc_1c_f = (double)(float)d17;
        loc_18_f = (double)(float)d18;
        loc_8_f = (double)(float)d22;
        loc_24_f = (double)(float)d20;
        loc_c = t24;
        loc_38_f = d27;
        loc_34_f = d28;
        x3 = fr(g, (double)(float)d18 - d25);
        x2 = fr(g, (double)(float)d17 - (double)(float)d22);
        x1 = fr(g, (double)(float)d16 - (double)(float)d20);
        x0 = d25;
    COW_AT(102f2e95)
        d29 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x10348408u))) + (double)rdf32(eax + loc_58));
        d30 = (double)rdf32(COW_IMG(0x10348408u));
        wrf32(eax + loc_58, (float)d29);
        d31 = fr(g, fr(g, x2 * d30) + (double)rdf32(eax + loc_b8));
        wrf32(eax + loc_b8, (float)d31);
        d32 = fr(g, fr(g, x3 * d30) + (double)rdf32(eax + loc_c0));
        wrf32(eax + loc_c0, (float)d32);
    }
    COW_AT(102f2ec4)
    if (ecx >= 0xc0u) goto L_102f2f73;
    COW_AT(102f2ed0)
    if (loc_c != 0u)
    {
    COW_AT(102f2ed6)
        d33 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x10348404u))) + (double)rdf32(eax + loc_5c));
        d34 = (double)rdf32(COW_IMG(0x10348404u));
        wrf32(eax + loc_5c, (float)d33);
        d35 = fr(g, fr(g, x2 * d34) + (double)rdf32(eax + loc_b4));
        wrf32(eax + loc_b4, (float)d35);
        d36 = fr(g, fr(g, x3 * d34) + (double)rdf32(eax + loc_ac));
        wrf32(eax + loc_ac, (float)d36);
    }
    COW_AT(102f2f05)
    d37 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x10348400u))) + (double)rdf32(eax + loc_28));
    d38 = (double)rdf32(COW_IMG(0x10348400u));
    wrf32(eax + loc_28, (float)d37);
    d39 = fr(g, fr(g, x2 * d38) + (double)rdf32(eax + loc_bc));
    wrf32(eax + loc_bc, (float)d39);
    d40 = fr(g, fr(g, x3 * d38) + (double)rdf32(eax + loc_a4));
    wrf32(eax + loc_a4, (float)d40);
    if (loc_c == 3u) goto L_102f2f77;
    COW_AT(102f2f3e)
    d41 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(eax + loc_2c));
    wrf32(eax + loc_2c, (float)d41);
    d42 = fr(g, fr(g, loc_38_f * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(eax + loc_a0));
    wrf32(eax + loc_a0, (float)d42);
    d43 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(eax + loc_b0));
    wrf32(eax + loc_b0, (float)d43);
L_102f2f79: ;
    COW_AT(102f2f79)
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    d44 = fr(g, loc_24_f * (double)rdf32(COW_IMG(0x103cd420u)));
    wrf32(ecx + sp0 - 0x2d4u, (float)d44);
    d45 = fr(g, loc_8_f * (double)rdf32(COW_IMG(0x103cd424u)));
    wrf32(ecx + sp0 - 0x2d0u, (float)d45);
    d46 = fr(g, x0 * (double)rdf32(COW_IMG(0x103cd428u)));
    wrf32(eax + sp0 - in_eax - 0x2d4u, (float)d46);
    if (ecx + 0x10u < 0x100u)
    {
        eax = eax + 0x10u;
        ecx = ecx + 0x10u;
        goto L_102f2dba;
    }
    ecx = ecx + 0x10u;
    COW_AT(102f2fb7)
    wr32(sp0 + 8u, rd32(COW_IMG(0x109b262cu)));
    g->fcw = rd16(sp0 + 8u);
    t47 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x2e4u, t47);
    wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
    wr32(sp0 - 0x2ecu, sp0 - 0x20u);
    wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
    g->edx = sp0 - 0x2d0u - in_eax;
    g->esp = sp0 - 0x2e0u;
    t48 = cow_call_regs(g, COW_IMG(0x102f2730u), sp0 - 0x4cu, g->ecx, g->edx, 1, 4, sp0 - 0x4cu, sp0 - 0x20u, sp0 - 0x2d4u, t47);
    t49 = g->edx;
    eax = t48;
    edx = t49;
    COW_AT(102f2fd9)
    d50 = fr(g, (double)rdf32(sp0 - 0x4cu) * (double)rdf32(COW_IMG(0x103cd430u)));
    wrf32(sp0 - 0xd4u, (float)(double)(float)d50);
    d51 = fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(COW_IMG(0x103cd434u)));
    wrf32(sp0 - 0xd0u, (float)(double)(float)d51);
    d52 = fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(COW_IMG(0x103cd438u)));
    wrf32(sp0 - 0xccu, (float)(double)(float)d52);
    d53 = fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(COW_IMG(0x103cd430u)));
    wrf32(sp0 - 0x3cu, (float)(double)(float)d53);
    d54 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x103cd434u)));
    wrf32(sp0 - 0x38u, (float)(double)(float)d54);
    d55 = fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(COW_IMG(0x103cd438u)));
    wrf32(sp0 - 0x34u, (float)(double)(float)d55);
    g->edx = edx;
    g->esp = sp0 - 0x2e0u;
    t56 = cow_call_regs(g, COW_IMG(0x102f2331u), eax, sp0 - 0xd4u, g->edx, 1, 0);
    t57 = g->edx;
    eax = t56;
    edx = t57;
    COW_AT(102f302c)
    wr32(sp0 - 0x28u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x2e0u;
    t58 = cow_call_regs(g, COW_IMG(0x102f2331u), eax, sp0 - 0x3cu, g->edx, 1, 0);
    t59 = g->edx;
    edx = t59;
    esi = eax;
    eax = t58;
    COW_AT(102f3039)
    wr32(sp0 - 0x2cu, eax);
    if (rd32(sp0 - 0x10u) != 4u)
    {
        edi = eax;
        loc_2c = eax;
        goto L_102f305c;
    }
    edi = eax;
    loc_2c = eax;
    COW_AT(102f3044)
    if ((uint16_t)esi != (uint16_t)edi) goto L_102f305c;
    COW_AT(102f3049)
    wr32(arg1 + 4u, 0u);
    wr16(arg1, (uint16_t)esi);
    wr16(arg1 + 2u, (uint16_t)edi);
    loc_4 = rd32(sp0 - 4u);
    loc_2d8 = rd32(sp0 - 0x2d8u);
    loc_2dc = rd32(sp0 - 0x2dcu);
    loc_2e0 = rd32(sp0 - 0x2e0u);
    goto L_102f3495;
L_102f2cf8: ;
    COW_AT(102f2cf8)
    wr32(sp0 - 0x10u, 4u);
    loc_10 = 4u;
    goto L_102f2cff;
L_102f2dba: ;
    COW_AT(102f2dba)
    esi = loc_a8;
    goto L_102f2dbd;
L_102f2f73: ;
    COW_AT(102f2f73)
L_102f2f77: ;
    COW_AT(102f2f77)
    goto L_102f2f79;
L_102f305c: ;
    COW_AT(102f305c)
    g->esp = sp0 - 0x2e0u;
    cow_call_regs(g, COW_IMG(0x102f21afu), sp0 - 0xd4u, esi, edx, 1, 0);
    t60 = g->edx;
    edx = t60;
    COW_AT(102f3066)
    g->esp = sp0 - 0x2e0u;
    t61 = cow_call_regs(g, COW_IMG(0x102f21afu), sp0 - 0x3cu, edi, edx, 1, 0);
    eax = t61;
    COW_AT(102f3070)
    d62 = fr(g, (double)rdf32(sp0 - 0xd4u) * (double)rdf32(COW_IMG(0x103cd420u)));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d62);
    d63 = fr(g, (double)rdf32(sp0 - 0xd0u) * (double)rdf32(COW_IMG(0x103cd424u)));
    wrf32(sp0 - 0x48u, (float)(double)(float)d63);
    d64 = fr(g, (double)rdf32(sp0 - 0xccu) * (double)rdf32(COW_IMG(0x103cd428u)));
    wrf32(sp0 - 0x44u, (float)(double)(float)d64);
    d65 = fr(g, (double)rdf32(sp0 - 0x3cu) * (double)rdf32(COW_IMG(0x103cd420u)));
    wrf32(sp0 - 0x20u, (float)(double)(float)d65);
    d66 = fr(g, (double)rdf32(sp0 - 0x38u) * (double)rdf32(COW_IMG(0x103cd424u)));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d66);
    d67 = fr(g, (double)rdf32(sp0 - 0x34u) * (double)rdf32(COW_IMG(0x103cd428u)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d67);
    if (rd32(sp0 - 0x10u) == 3u != -((uint16_t)edi < (uint16_t)esi) + 1u)
    {
    COW_AT(102f30e4)
        wr16(arg1 + 2u, (uint16_t)esi);
        wr16(arg1, (uint16_t)edi);
        esi = sp0 - 0x20u;
        edi = sp0 - 0x9cu;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        esi = sp0 - 0x4cu;
    }
    else
    {
    COW_AT(102f30ce)
        wr16(arg1, (uint16_t)esi);
        wr16(arg1 + 2u, (uint16_t)edi);
        esi = sp0 - 0x4cu;
        edi = sp0 - 0x9cu;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        esi = sp0 - 0x20u;
    }
    COW_AT(102f30f8)
    t68 = rd32(sp0 - 0x10u);
    edi = sp0 - 0x8cu;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    if (t68 != 3u)
    {
        eax = t68;
        x0 = fr(g, (double)rdf32(sp0 - 0x8cu) - (double)rdf32(sp0 - 0x9cu));
    COW_AT(102f315c)
        wr32(sp0 - 0x24u, COW_IMG(0x103483e4u));
        d76 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a84cu)) * x0) + (double)rdf32(sp0 - 0x9cu));
        wrf32(sp0 - 0x7cu, (float)(double)(float)d76);
        d77 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a84cu)) * fr(g, (double)rdf32(sp0 - 0x88u) - (double)rdf32(sp0 - 0x98u))) + (double)rdf32(sp0 - 0x98u));
        d78 = fr(g, (double)rdf32(sp0 - 0x88u) - (double)rdf32(sp0 - 0x98u));
        wrf32(sp0 - 0x78u, (float)(double)(float)d77);
        d79 = fr(g, (double)rdf32(sp0 - 0x84u) - (double)rdf32(sp0 - 0x94u));
        wrf32(sp0 + 8u, (float)d79);
        d80 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a84cu)) * d79) + (double)rdf32(sp0 - 0x94u));
        wrf32(sp0 - 0x74u, (float)(double)(float)d80);
        d81 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a84cu)) * fr(g, (double)rdf32(sp0 - 0x80u) - (double)rdf32(sp0 - 0x90u))) + (double)rdf32(sp0 - 0x90u));
        d82 = fr(g, (double)rdf32(sp0 - 0x80u) - (double)rdf32(sp0 - 0x90u));
        wrf32(sp0 - 0x70u, (float)(double)(float)d81);
        d83 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x9cu));
        wrf32(sp0 - 0x6cu, (float)(double)(float)d83);
        d84 = fr(g, fr(g, d78 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x98u));
        wrf32(sp0 - 0x68u, (float)(double)(float)d84);
        d85 = fr(g, fr(g, d79 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x94u));
        wrf32(sp0 - 0x64u, (float)(double)(float)d85);
        d86 = fr(g, fr(g, d82 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x90u));
        wrf32(sp0 - 0x60u, (float)(double)(float)d86);
        loc_24 = COW_IMG(0x103483e4u);
        x2 = d79;
        x1 = d78;
    }
    else
    {
        eax = t68;
        x0 = fr(g, (double)rdf32(sp0 - 0x8cu) - (double)rdf32(sp0 - 0x9cu));
    COW_AT(102f310d)
        wr32(sp0 - 0x24u, COW_IMG(0x103483f4u));
        d69 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10329a08u)) * x0) + (double)rdf32(sp0 - 0x9cu));
        wrf32(sp0 - 0x7cu, (float)(double)(float)d69);
        d70 = fr(g, (double)rdf32(sp0 - 0x88u) - (double)rdf32(sp0 - 0x98u));
        d71 = fr(g, fr(g, d70 * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(sp0 - 0x98u));
        wrf32(sp0 - 0x78u, (float)(double)(float)d71);
        d72 = fr(g, (double)rdf32(sp0 - 0x84u) - (double)rdf32(sp0 - 0x94u));
        d73 = (double)rdf32(COW_IMG(0x10329a08u));
        wrf32(sp0 + 8u, (float)d72);
        d74 = fr(g, fr(g, d72 * d73) + (double)rdf32(sp0 - 0x94u));
        wrf32(sp0 - 0x74u, (float)(double)(float)d74);
        d75 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x80u) - (double)rdf32(sp0 - 0x90u)) * d73) + (double)rdf32(sp0 - 0x90u));
        wrf32(sp0 - 0x70u, (float)(double)(float)d75);
        loc_24 = COW_IMG(0x103483f4u);
        x2 = d73;
        x1 = d70;
    }
    COW_AT(102f31e2)
    wrf32(sp0 - 0x20u, (float)(double)(float)x0);
    d87 = (double)rdf32(sp0 + 8u);
    wr32(sp0 + 8u, eax - 1u);
    if ((int32_t)(eax - 1u) >= 0)
    {
        eax = eax - 1u;
        loc_20_f = (double)(float)x0;
        x2 = (double)(int32_t)rd32(sp0 + 8u);
        x0 = x1;
        x1 = d87;
    }
    else
    {
        eax = eax - 1u;
        loc_20_f = (double)(float)x0;
        x2 = (double)(int32_t)rd32(sp0 + 8u);
        x0 = x1;
        x1 = d87;
    COW_AT(102f31fb)
        x2 = fr(g, x2 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102f3201)
    wrf32(sp0 - 8u, (float)(double)(float)x2);
    if (rd16(sp0 - 0x28u) == rd16(sp0 - 0x2cu))
    {
        loc_8_f = (double)(float)x2;
    COW_AT(102f3225)
        x2 = 0.0;
    }
    else
    {
        loc_8_f = (double)(float)x2;
    COW_AT(102f320e)
        x2 = fr(g, loc_8_f / fr(g, fr(g, fr(g, x1 * x1) + fr(g, x0 * x0)) + fr(g, loc_20_f * loc_20_f)));
    }
    COW_AT(102f3227)
    wr32(sp0 - 0x2e4u, 0x40u);
    d88 = (double)(float)fr(g, loc_20_f * x2);
    wrf32(sp0 - 0x20u, (float)d88);
    edi = sp0 - 0x1d4u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    d89 = (double)(float)fr(g, x2 * x0);
    wrf32(sp0 - 0x1cu, (float)d89);
    d90 = (double)(float)fr(g, x2 * x1);
    wrf32(sp0 - 0x18u, (float)d90);
    g->edx = 0u;
    g->esp = sp0 - 0x2d4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), ecx, 3, rd32(sp0 - 0x2e0u), rd32(sp0 - 0x2dcu), rd32(sp0 - 0x2d8u));
    t91 = g->edx;
    edx = t91;
    COW_AT(102f3253)
    wr32(sp0 - 0xcu, sp0 - 0x1d4u);
    t92 = sp0 - 0x1d0u - in_eax;
    wr32(sp0 - 0x2cu, t92);
    t93 = sp0 - 0x1c0u - in_eax;
    wr32(sp0 - 0x58u, t93);
    t94 = sp0 - 0x1a0u - in_eax;
    wr32(sp0 - 0x54u, t94);
    wr32(sp0 + 8u, edx);
    t95 = sp0 - 0x180u - in_eax;
    wr32(sp0 - 0x50u, t95);
    eax = t95;
    ecx = in_eax + 4u;
    loc_c = sp0 - 0x1d4u;
    loc_2c = t92;
    loc_58 = t93;
    loc_54 = t94;
    loc_50 = t95;
L_102f329e: ;
    COW_AT(102f329e)
    if (rd32(sp0 - 0x10u) != 3u) goto L_102f32c2;
    COW_AT(102f32a4)
    d96 = (double)rdf32(ecx + 8u);
    if (!(d96 < (double)rdf32(COW_IMG(0x10329a08u)))) goto L_102f32c2;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d96, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    COW_AT(102f32b4)
    edx = edx >> 2u | 0xc0000000u;
L_102f3470: ;
    COW_AT(102f3470)
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    wr32(sp0 - 0xcu, loc_c + 0x10u);
    if (rd32(sp0 + 8u) < 0x10u)
    {
        ecx = ecx + 0x10u;
        loc_c = loc_c + 0x10u;
        goto L_102f329e;
    }
    COW_AT(102f3484)
    wr32(sp0 + 8u, rd32(COW_IMG(0x109b262cu)));
    g->fcw = rd16(sp0 + 8u);
    wr32(arg1 + 4u, edx);
    loc_4 = rd32(sp0 - 4u);
    loc_2d8 = rd32(sp0 - 0x2d8u);
    loc_2dc = rd32(sp0 - 0x2dcu);
    loc_2e0 = rd32(sp0 - 0x2e0u);
    goto L_102f3495;
L_102f32c2: ;
    COW_AT(102f32c2)
    d97 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103cd420u)) * (double)rdf32(ecx - 4u)) + (double)rdf32(loc_c));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d97);
    d98 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103cd424u)) * (double)rdf32(ecx)) + (double)rdf32(ecx + rd32(sp0 - 0xa8u)));
    wrf32(sp0 - 0x48u, (float)(double)(float)d98);
    d99 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103cd428u)) * (double)rdf32(ecx + 4u)) + (double)rdf32(ecx + loc_2c));
    wrf32(sp0 - 0x44u, (float)(double)(float)d99);
    d100 = fr(g, fr(g, fr(g, fr(g, (double)(float)d97 - (double)rdf32(sp0 - 0x9cu)) * (double)rdf32(sp0 - 0x20u)) + fr(g, fr(g, (double)(float)d99 - (double)rdf32(sp0 - 0x94u)) * (double)rdf32(sp0 - 0x18u))) + fr(g, fr(g, (double)(float)d98 - (double)rdf32(sp0 - 0x98u)) * (double)rdf32(sp0 - 0x1cu)));
    if (!(d100 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (loc_2c & 0xffff0000u) | (uint16_t)cow_fsw(g, d100, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        loc_4c_f = (double)(float)d97;
        loc_48_f = (double)(float)d98;
        loc_44_f = (double)(float)d99;
        x0 = d100;
    COW_AT(102f3328)
        d101 = (double)rdf32(sp0 - 8u);
        if (cow_fsw(g, x0, d101, 1u) >> 8u & 1u)
        {
    COW_AT(102f3339)
            d102 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x28u, (float)(double)(float)d102);
            wr32(sp0 - 0x5cu, (uint32_t)fist32(g, (double)(float)d102));
            eax = rd32((uint32_t)fist32(g, (double)(float)d102) * 4u + rd32(sp0 - 0x24u));
        }
        else
        {
    COW_AT(102f3332)
            eax = 1u;
        }
    }
    else
    {
        loc_4c_f = (double)(float)d97;
        loc_48_f = (double)(float)d98;
        loc_44_f = (double)(float)d99;
        x0 = d100;
    COW_AT(102f3322)
        eax = 0u;
    }
    COW_AT(102f3351)
    d103 = fr(g, fr(g, loc_48_f - (double)rdf32(eax * 0x10u + sp0 - 0x98u)) * (double)rdf32(ecx + sp0 - in_eax - 0x2ccu));
    d104 = fr(g, fr(g, loc_4c_f - (double)rdf32(eax * 0x10u + sp0 - 0x9cu)) * (double)rdf32(ecx + sp0 - in_eax - 0x2ccu));
    wrf32(sp0 - 0x38u, (float)(double)(float)d103);
    d105 = fr(g, fr(g, loc_44_f - (double)rdf32(eax * 0x10u + sp0 - 0x94u)) * (double)rdf32(ecx + sp0 - in_eax - 0x2ccu));
    wrf32(sp0 - 0x34u, (float)(double)(float)d105);
    if ((rd32(sp0 + 8u) & 3u) == 3u)
    {
        edx = edx >> 2u | eax << 0x1eu;
        eax = eax << 4u;
        ebx = rd32(sp0 + 8u) & 3u;
        loc_38_f = (double)(float)d103;
        loc_34_f = (double)(float)d105;
        x1 = d103;
        x0 = d104;
    }
    else
    {
        edx = edx >> 2u | eax << 0x1eu;
        ebx = rd32(sp0 + 8u) & 3u;
        loc_38_f = (double)(float)d103;
        loc_34_f = (double)(float)d105;
        x1 = d103;
        x0 = d104;
    COW_AT(102f338d)
        d106 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10348408u))) + (double)rdf32(ecx + rd32(sp0 - 0xb8u)));
        wrf32(ecx + rd32(sp0 - 0xb8u), (float)d106);
        d107 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348408u)) * x1) + (double)rdf32(ecx + rd32(sp0 - 0xc0u)));
        wrf32(ecx + rd32(sp0 - 0xc0u), (float)d107);
        d108 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x10348408u))) + (double)rdf32(ecx + loc_58));
        wrf32(ecx + loc_58, (float)d108);
        eax = ecx + loc_58;
    }
    COW_AT(102f33c1)
    if (rd32(sp0 + 8u) >= 0xcu) goto L_102f346c;
    COW_AT(102f33cb)
    if (ebx != 0u)
    {
    COW_AT(102f33cf)
        d109 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10348404u))) + (double)rdf32(ecx + rd32(sp0 - 0xb4u)));
        wrf32(ecx + rd32(sp0 - 0xb4u), (float)d109);
        d110 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348404u)) * x1) + (double)rdf32(ecx + rd32(sp0 - 0xacu)));
        wrf32(ecx + rd32(sp0 - 0xacu), (float)d110);
        d111 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x10348404u))) + (double)rdf32(ecx + loc_54));
        wrf32(ecx + loc_54, (float)d111);
    }
    COW_AT(102f3403)
    d112 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10348400u))) + (double)rdf32(ecx + rd32(sp0 - 0xbcu)));
    wrf32(ecx + rd32(sp0 - 0xbcu), (float)d112);
    t113 = rd32(sp0 - 0xa4u);
    d114 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x10348400u))) + (double)rdf32(ecx + rd32(sp0 - 0xa4u)));
    wrf32(ecx + t113, (float)d114);
    d115 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x10348400u))) + (double)rdf32(ecx + sp0 - in_eax - 0x190u));
    wrf32(ecx + sp0 - in_eax - 0x190u, (float)d115);
    if (ebx == 3u)
    {
        eax = ecx + t113;
        goto L_102f346e;
    }
    COW_AT(102f3437)
    d116 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(ecx + rd32(sp0 - 0xa0u)));
    wrf32(ecx + rd32(sp0 - 0xa0u), (float)d116);
    d117 = fr(g, fr(g, loc_38_f * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(ecx + rd32(sp0 - 0xb0u)));
    wrf32(ecx + rd32(sp0 - 0xb0u), (float)d117);
    d118 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(ecx + loc_50));
    wrf32(ecx + loc_50, (float)d118);
    eax = ecx + loc_50;
    goto L_102f3470;
L_102f346c: ;
    COW_AT(102f346c)
L_102f346e: ;
    COW_AT(102f346e)
    goto L_102f3470;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f2c9b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f2cb2u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2e0u);
        in_esi = rd32(sp0 - 0x2dcu);
        in_ebx = rd32(sp0 - 0x2d8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->edx = 0u;
        g->ebx = in_eax;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2cbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2e0u);
        in_esi = rd32(sp0 - 0x2dcu);
        in_ebx = rd32(sp0 - 0x2d8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2cc9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2e0u);
        in_esi = rd32(sp0 - 0x2dcu);
        in_ebx = rd32(sp0 - 0x2d8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2ccau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2e0u);
        in_esi = rd32(sp0 - 0x2dcu);
        in_ebx = rd32(sp0 - 0x2d8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2cd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2e0u);
        in_esi = rd32(sp0 - 0x2dcu);
        in_ebx = rd32(sp0 - 0x2d8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2cd5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2e0u);
        in_esi = rd32(sp0 - 0x2dcu);
        in_ebx = rd32(sp0 - 0x2d8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2ceau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2e0u);
        in_esi = rd32(sp0 - 0x2dcu);
        in_ebx = rd32(sp0 - 0x2d8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2cf8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2e0u);
        in_esi = rd32(sp0 - 0x2dcu);
        in_ebx = rd32(sp0 - 0x2d8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2cffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2e0u);
        in_esi = rd32(sp0 - 0x2dcu);
        in_ebx = rd32(sp0 - 0x2d8u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2d11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2dbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2dbdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2e95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2ec4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2ed0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2ed6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2f05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2f3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2f73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2f77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2f79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        g->edi = sp0 - 0x2d4u - in_eax;
        (void)sp0;
        return 1;
    }
    case 0x102f2fb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x2e0u;
        g->edx = sp0 - 0x2d0u - in_eax;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f2fd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2f0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f302cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3039u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3044u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3049u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f305cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3066u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3070u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f30ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x2e0u;
        g->eax = arg1;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f30e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x2e0u;
        g->eax = arg1;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f30f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f310du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f315cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f31e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        uint32_t loc_24;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f31fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        uint32_t loc_24;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3201u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        uint32_t loc_24;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f320eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        uint32_t loc_24;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3225u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        uint32_t loc_24;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3227u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        uint32_t loc_24;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double loc_8_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3253u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_eax = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3484u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        double loc_34_f;
        double loc_38_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
        wr32(sp0 - 0x2ecu, sp0 - 0x20u);
        wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
        (void)sp0;
        return 1;
    }
    case 0x102f3495u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_2d8;
        uint32_t loc_2dc;
        uint32_t loc_2e0;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_4;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2e0 = rd32(sp0 - 0x2e0u);
        loc_2dc = rd32(sp0 - 0x2dcu);
        loc_2d8 = rd32(sp0 - 0x2d8u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2e0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     102f329e: holds in_eax, which no location here says
     102f32a4: holds in_eax, which no location here says
     102f32b4: holds in_eax, which no location here says
     102f32c2: holds in_eax, which no location here says
     102f3322: holds in_eax, which no location here says
     102f3328: holds in_eax, which no location here says
     102f3332: holds in_eax, which no location here says
     102f3339: holds in_eax, which no location here says
     102f3351: holds in_eax, which no location here says
     102f338d: holds in_eax, which no location here says
     102f33c1: holds in_eax, which no location here says
     102f33cb: holds in_eax, which no location here says
     102f33cf: holds in_eax, which no location here says
     102f3403: holds in_eax, which no location here says
     102f3437: holds in_eax, which no location here says
     102f346c: holds in_eax, which no location here says
     102f346e: holds in_eax, which no location here says
     102f3470: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f2c9b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102f2c9b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
