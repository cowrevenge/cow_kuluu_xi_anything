/* f_0x1016a990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1016a990(Guest* g)
{
    double d10;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d39;
    double d41;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d6;
    double d62;
    double d63;
    double d64;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    uint32_t loc_24;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    double loc_64_f;
    double loc_68_f;
    double loc_6c_f;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t loc_80;
    uint32_t loc_84;
    double loc_88_f;
    double loc_8c_f;
    double loc_90_f;
    double loc_a0_f;
    double loc_a4_f;
    double loc_a8_f;
    double loc_ac_f;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t loc_c0;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t loc_cc;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t42;
    uint32_t t5;
    uint32_t t50;
    uint32_t t60;
    uint32_t t61;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t8;
    uint32_t t9;
    double x0;
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
    cow_frame(g, sp0, 216u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1016a9b1u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_1016a9b1;
    case 0x1016a9cfu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_1016a9cf;
    case 0x1016a9dcu: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_1016a9dc;
    case 0x1016a9e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); loc_78 = rd32(sp0 - 0x78u); loc_60 = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_1016a9e7;
    case 0x1016a9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_1016a9f7;
    case 0x1016aa01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_1016aa01;
    case 0x1016aa0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_1016aa0a;
    case 0x1016aa1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aa1b;
    case 0x1016aa25u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aa25;
    case 0x1016aa30u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aa30;
    case 0x1016aa3au: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aa3a;
    case 0x1016aa41u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aa41;
    case 0x1016aa47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aa47;
    case 0x1016aa53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa53;
    case 0x1016aa57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa57;
    case 0x1016aa5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa5e;
    case 0x1016aa68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa68;
    case 0x1016aa74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa74;
    case 0x1016aa78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa78;
    case 0x1016aa7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa7f;
    case 0x1016aa86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa86;
    case 0x1016aa8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa8d;
    case 0x1016aa8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aa8f;
    case 0x1016aa94u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aa94;
    case 0x1016aa9bu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aa9b;
    case 0x1016aaa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aaa1;
    case 0x1016aaadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aaad;
    case 0x1016aab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aab1;
    case 0x1016aab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aab8;
    case 0x1016aac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aac2;
    case 0x1016aaceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aace;
    case 0x1016aad2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aad2;
    case 0x1016aad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aad9;
    case 0x1016aaddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aadd;
    case 0x1016aae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aae4;
    case 0x1016aae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aae6;
    case 0x1016aae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aae7;
    case 0x1016aaebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aaeb;
    case 0x1016aaf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016aaf5;
    case 0x1016ab00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_1016ab00;
    case 0x1016ab04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_1016ab04;
    case 0x1016ab23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_58 = rd32(sp0 - 0x58u); goto E_1016ab23;
    case 0x1016ab27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ab27;
    case 0x1016ab39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ab39;
    case 0x1016ab4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ab4f;
    case 0x1016ab64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ab64;
    case 0x1016ab6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ab6c;
    case 0x1016ab74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ab74;
    case 0x1016ab78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ab78;
    case 0x1016ab87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ab87;
    case 0x1016aba3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016aba3;
    case 0x1016abb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016abb8;
    case 0x1016abc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016abc7;
    case 0x1016aceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016acee;
    case 0x1016add9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016add9;
    case 0x1016ae0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016ae0f;
    case 0x1016ae83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ae83;
    case 0x1016ae9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016ae9a;
    case 0x1016aedbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aedb;
    case 0x1016aee3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016aee3;
    case 0x1016af84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016af84;
    case 0x1016b12cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016b12c;
    case 0x1016b12eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); goto E_1016b12e;
    case 0x1016b13bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016b13b;
    case 0x1016b13du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016b13d;
    case 0x1016b155u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016b155;
    case 0x1016b159u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016b159;
    case 0x1016b16fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016b16f;
    case 0x1016b179u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016b179;
    case 0x1016b181u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016b181;
    case 0x1016b192u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016b192;
    case 0x1016b196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016b196;
    case 0x1016b1a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_1016b1a7;
    case 0x1016b1b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_1016b1b8;
    default: break;
    }
#endif

    COW_AT(1016a990)
    wr32(sp0 - 0xc0u, in_ebx);
    wr32(sp0 - 0xc4u, in_ebp);
    wr32(sp0 - 0xc8u, in_esi);
    wr32(sp0 - 0xccu, in_edi);
    t1 = rd32(self + 0x60u);
    wr32(self + 0x1807cu, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        loc_c0 = in_ebx;
        loc_c4 = in_ebp;
        loc_c8 = in_esi;
        loc_cc = in_edi;
        goto L_1016b1b8;
    }
    eax = t1;
    COW_AT(1016a9b1)
    d2 = (double)rdf32(arg1 + 4u);
    d3 = (double)rdf32(arg2 + 4u);
    if (!(d2 < d3))
    {
        eax = rd32(arg1 + 4u);
    COW_AT(1016a9dc)
        wr32(sp0 - 0x78u, eax);
        t5 = rd32(arg2 + 4u);
        wr32(sp0 - 0x60u, t5);
        ecx = self;
        edx = t5;
        loc_60 = t5;
        loc_78 = eax;
    }
    else
    {
        eax = rd32(arg1 + 4u);
    COW_AT(1016a9cf)
        wr32(sp0 - 0x60u, eax);
        t4 = rd32(arg2 + 4u);
        wr32(sp0 - 0x78u, t4);
        ecx = t4;
        edx = in_edx;
        loc_60 = eax;
        loc_78 = t4;
    }
    COW_AT(1016a9e7)
    g->ecx = ecx;
    g->edx = edx;
    d6 = fr(g, fr(g, (double)rdf32(self + 0x40u) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d6);
    g->esp = sp0 - 0xccu;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(1016a9f7)
    if ((int32_t)eax < 0)
    {
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_cc = rd32(sp0 - 0xccu);
        goto L_1016b1b8;
    }
    ebp = eax;
    COW_AT(1016aa01)
    if ((int32_t)ebp >= (int32_t)rd32(self + 0x48u))
    {
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_cc = rd32(sp0 - 0xccu);
        goto L_1016b1b8;
    }
    COW_AT(1016aa0a)
    g->ecx = ecx;
    d10 = fr(g, fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d10);
    g->esp = sp0 - 0xccu;
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    COW_AT(1016aa1b)
    if ((int32_t)eax < 0)
    {
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_cc = rd32(sp0 - 0xccu);
        goto L_1016b1b8;
    }
    COW_AT(1016aa25)
    if ((int32_t)eax >= (int32_t)rd32(self + 0x4cu))
    {
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_cc = rd32(sp0 - 0xccu);
        goto L_1016b1b8;
    }
    esi = rd32(self + 0x4cu);
    COW_AT(1016aa30)
    if (rd8(self + 0x3413au) == 0u)
    {
    COW_AT(1016aa94)
        if ((int32_t)(ebp - 1u) >= 0)
        {
            ecx = ebp - 1u;
    COW_AT(1016aaa1)
            t15 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xb4u, t15);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_b4 = t15;
            }
            else
            {
    COW_AT(1016aaad)
                wr32(sp0 - 0xb4u, ecx);
                loc_b4 = ecx;
            }
        }
        else
        {
    COW_AT(1016aa9b)
            wr32(sp0 - 0xb4u, 0u);
            loc_b4 = 0u;
        }
    COW_AT(1016aab1)
        if ((int32_t)(ebp + 1u) >= 0)
        {
            ecx = ebp + 1u;
    COW_AT(1016aac2)
            t16 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xb8u, t16);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_b8 = t16;
            }
            else
            {
    COW_AT(1016aace)
                wr32(sp0 - 0xb8u, ecx);
                loc_b8 = ecx;
            }
        }
        else
        {
    COW_AT(1016aab8)
            wr32(sp0 - 0xb8u, 0u);
            loc_b8 = 0u;
        }
    COW_AT(1016aad2)
        if ((int32_t)(eax - 1u) >= 0)
        {
            ecx = eax - 1u;
    COW_AT(1016aadd)
            if ((int32_t)ecx > (int32_t)(esi - 1u))
            {
                edx = esi - 1u;
    COW_AT(1016aae4)
                ecx = edx;
            }
        }
        else
        {
    COW_AT(1016aad9)
            ecx = 0u;
        }
    COW_AT(1016aae6)
        eax = eax + 1u;
    }
    else
    {
    COW_AT(1016aa3a)
        if ((int32_t)(ebp - 2u) >= 0)
        {
            ecx = ebp - 2u;
    COW_AT(1016aa47)
            t13 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xb4u, t13);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_b4 = t13;
            }
            else
            {
    COW_AT(1016aa53)
                wr32(sp0 - 0xb4u, ecx);
                loc_b4 = ecx;
            }
        }
        else
        {
    COW_AT(1016aa41)
            wr32(sp0 - 0xb4u, 0u);
            loc_b4 = 0u;
        }
    COW_AT(1016aa57)
        if ((int32_t)(ebp + 2u) >= 0)
        {
            ecx = ebp + 2u;
    COW_AT(1016aa68)
            t14 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xb8u, t14);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_b8 = t14;
            }
            else
            {
    COW_AT(1016aa74)
                wr32(sp0 - 0xb8u, ecx);
                loc_b8 = ecx;
            }
        }
        else
        {
    COW_AT(1016aa5e)
            wr32(sp0 - 0xb8u, 0u);
            loc_b8 = 0u;
        }
    COW_AT(1016aa78)
        if ((int32_t)(eax - 2u) >= 0)
        {
            ecx = eax - 2u;
    COW_AT(1016aa86)
            if ((int32_t)ecx > (int32_t)(esi - 1u))
            {
                edx = esi - 1u;
    COW_AT(1016aa8d)
                ecx = edx;
            }
    COW_AT(1016aa8f)
            eax = eax + 2u;
        }
        else
        {
    COW_AT(1016aa7f)
            eax = eax + 2u;
            ecx = 0u;
        }
    }
    COW_AT(1016aae7)
    if ((int32_t)eax >= 0)
    {
    COW_AT(1016aaf5)
        wr32(sp0 - 0xb0u, esi - 1u);
        if ((int32_t)eax > (int32_t)(esi - 1u))
        {
            loc_b0 = esi - 1u;
        }
        else
        {
    COW_AT(1016ab00)
            wr32(sp0 - 0xb0u, eax);
            loc_b0 = eax;
        }
    }
    else
    {
    COW_AT(1016aaeb)
        wr32(sp0 - 0xb0u, 0u);
        loc_b0 = 0u;
    }
    COW_AT(1016ab04)
    wr32(sp0 - 0x7cu, 0x49742400u);
    wr8(sp0 - 0xb9u, 0u);
    wr32(sp0 - 0x58u, ecx);
    if ((int32_t)ecx > (int32_t)loc_b0)
    {
        eax = loc_b0;
    }
    else
    {
        edx = ecx;
        loc_58 = ecx;
    COW_AT(1016ab23)
        eax = loc_b4;
        loc_7c = 0x49742400u;
L_1016ab27: ;
    COW_AT(1016ab27)
        wr32(sp0 - 0x70u, eax);
        if ((int32_t)eax > (int32_t)loc_b8) goto L_1016b196;
        ecx = eax;
        loc_70 = eax;
L_1016ab39: ;
    COW_AT(1016ab39)
        if (rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u) == 0u) goto L_1016b181;
        eax = rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u);
L_1016ab4f: ;
    COW_AT(1016ab4f)
        wr32(sp0 - 0x80u, eax + 4u);
        if ((rd32(eax) >> 8u & 0x20u) == 0u)
        {
            edx = eax + 4u;
            loc_80 = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
    COW_AT(1016ab6c)
            if ((int32_t)eax > 0)
            {
    COW_AT(1016ab74)
                wr32(sp0 - 0x5cu, eax);
                loc_5c = eax;
L_1016ab78: ;
    COW_AT(1016ab78)
                t17 = rd32(edx + 4u);
                wr32(sp0 - 0x74u, t17);
                if (rd32(edx + 4u) != 0u)
                {
                    ecx = t17;
                    loc_74 = t17;
    COW_AT(1016ab87)
                    d18 = (double)rdf32(rd32(edx) + 0xb4u);
                    d19 = (double)rdf32(sp0 - 0x78u);
                    if ((cow_fsw(g, d18, d19, 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
                        ebp = rd32(ecx + 8u);
                        esi = rd32(edx);
    COW_AT(1016aba3)
                        d20 = (double)rdf32(esi + 0xb8u);
                        d21 = (double)rdf32(sp0 - 0x60u);
                        if (!(d20 < d21))
                        {
    COW_AT(1016abb8)
                            if (rd32(self + 4u) != rd32(esi + 0xbcu))
                            {
    COW_AT(1016abc7)
                                d22 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                                wrf32(sp0 - 0x90u, (float)(double)(float)d22);
                                d23 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x74u));
                                wrf32(sp0 - 0x8cu, (float)(double)(float)d23);
                                d24 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x78u));
                                wrf32(sp0 - 0x88u, (float)(double)(float)d24);
                                d25 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x78u));
                                d26 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x74u));
                                d27 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(arg2) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                                wrf32(sp0 - 4u, (float)(double)(float)d25);
                                d28 = (double)(float)fr(g, d27 - (double)(float)d22);
                                wrf32(sp0 - 0xa8u, (float)d28);
                                d29 = (double)(float)fr(g, d26 - (double)(float)d23);
                                wrf32(sp0 - 0xa4u, (float)d29);
                                d30 = (double)(float)fr(g, (double)(float)d25 - (double)(float)d24);
                                wrf32(sp0 - 0xa0u, (float)d30);
                                d31 = fr(g, d28 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, (double)(float)d25 - (double)(float)d24) * d30) + fr(g, d29 * d29)) + fr(g, d28 * d28))))));
                                d32 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, (double)(float)d25 - (double)(float)d24) * d30) + fr(g, d29 * d29)) + fr(g, d28 * d28)))));
                                wrf32(sp0 - 0x18u, (float)(double)(float)d31);
                                wr32(sp0 - 0x84u, 0u);
                                d33 = (double)(float)fr(g, d29 * d32);
                                wrf32(sp0 - 0x14u, (float)d33);
                                d34 = (double)(float)fr(g, d30 * d32);
                                wrf32(sp0 - 0x10u, (float)d34);
                                if ((int16_t)rd16(ecx + 0xcu) <= 0) goto L_1016b159;
                                eax = arg1;
                                loc_90_f = (double)(float)d22;
                                loc_8c_f = (double)(float)d23;
                                loc_88_f = (double)(float)d24;
                                loc_a8_f = d28;
                                loc_a4_f = d29;
                                loc_a0_f = d30;
                                loc_18_f = (double)(float)d31;
                                loc_84 = 0u;
                                loc_14_f = d33;
                                loc_10_f = d34;
L_1016acee: ;
    COW_AT(1016acee)
                                t35 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu);
                                wr32(sp0 - 0x30u, t35);
                                t36 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 4u);
                                wr32(sp0 - 0x2cu, t36);
                                t37 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 8u);
                                wr32(sp0 - 0x28u, t37);
                                t38 = rd32(ecx) + (rd16(ebp) & 0x7fffu) * 0xcu;
                                d39 = fr(g, cow_bits2f(t35) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wr32(sp0 - 0x24u, t38);
                                t40 = rd32(ecx) + (rd16(ebp + 2u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x20u, t40);
                                wrf32(sp0 - 0x30u, (float)(double)(float)d39);
                                d41 = fr(g, cow_bits2f(t36) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x2cu, (float)(double)(float)d41);
                                t42 = rd32(ecx) + (rd16(ebp + 4u) & 0x3fffu) * 0xcu;
                                d43 = fr(g, cow_bits2f(t37) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wr32(sp0 - 0x1cu, t42);
                                wrf32(sp0 - 0x28u, (float)(double)(float)d43);
                                d44 = fr(g, fr(g, fr(g, d43 * loc_10_f) + fr(g, (double)(float)d41 * loc_14_f)) + fr(g, (double)(float)d39 * loc_18_f));
                                if (!(d44 <= (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    eax = (t42 & 0xffff0000u) | (uint16_t)cow_fsw(g, d44, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                    loc_30_f = (double)(float)d39;
                                    loc_2c_f = (double)(float)d41;
                                    loc_28_f = (double)(float)d43;
                                    loc_24 = t38;
    COW_AT(1016add9)
                                    d45 = fr(g, fr(g, fr(g, loc_28_f * loc_a0_f) + fr(g, loc_2c_f * loc_a4_f)) + fr(g, loc_30_f * loc_a8_f));
                                    if (d45 == (double)rdf32(COW_IMG(0x103295d8u)))
                                    {
                                        x0 = d45;
    COW_AT(1016b13b)
                                    }
                                    else
                                    {
                                        x0 = d45;
    COW_AT(1016ae0f)
                                        d46 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_28_f * loc_88_f) + fr(g, loc_2c_f * loc_8c_f)) + fr(g, loc_30_f * loc_90_f)) - fr(g, fr(g, fr(g, loc_28_f * (double)rdf32(loc_24 + 8u)) + fr(g, loc_2c_f * (double)rdf32(loc_24 + 4u))) + fr(g, loc_30_f * (double)rdf32(loc_24)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                        wrf32(sp0 - 0xacu, (float)(double)(float)d46);
                                        if (!((double)(float)d46 < (double)rdf32(COW_IMG(0x103295d8u))))
                                        {
                                            eax = (loc_24 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d46, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                            loc_ac_f = (double)(float)d46;
    COW_AT(1016ae83)
                                            if ((cow_fsw(g, loc_ac_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                            {
                                                eax = cow_fsw(g, loc_ac_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    COW_AT(1016ae9a)
                                                wr32(sp0 - 0xd0u, sp0 - 0x54u);
                                                wr32(sp0 - 0xd4u, sp0 - 0x9cu);
                                                d47 = (double)(float)fr(g, fr(g, loc_ac_f * loc_a8_f) + loc_90_f);
                                                wrf32(sp0 - 0x9cu, (float)d47);
                                                d48 = (double)(float)fr(g, fr(g, loc_ac_f * loc_a4_f) + loc_8c_f);
                                                wrf32(sp0 - 0x98u, (float)d48);
                                                d49 = (double)(float)fr(g, fr(g, loc_ac_f * loc_a0_f) + loc_88_f);
                                                wrf32(sp0 - 0x94u, (float)d49);
                                                g->esp = sp0 - 0xccu;
                                                t50 = cow_call_regs(g, COW_IMG(0x1016c390u), eax, g->ecx, g->edx, 0, 2, sp0 - 0x9cu, sp0 - 0x54u);
                                                eax = t50;
    COW_AT(1016aedb)
                                                if ((uint8_t)eax == 0u) goto L_1016b12e;
    COW_AT(1016aee3)
                                                d51 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
                                                wrf32(sp0 - 0x6cu, (float)(double)(float)d51);
                                                d52 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
                                                wrf32(sp0 - 0x68u, (float)(double)(float)d52);
                                                d53 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                                wrf32(sp0 - 0x64u, (float)(double)(float)d53);
                                                d54 = fr(g, (double)rdf32(arg1 + 8u) - (double)(float)d53);
                                                d55 = fr(g, (double)rdf32(arg1 + 4u) - (double)(float)d52);
                                                d56 = fr(g, (double)rdf32(arg1) - (double)(float)d51);
                                                d57 = (double)rdf32(sp0 - 0x7cu);
                                                d58 = fr(g, fr(g, fr(g, d54 * d54) + fr(g, d55 * d55)) + fr(g, d56 * d56));
                                                if (d57 <= d58)
                                                {
                                                    x0 = fr(g, fr(g, fr(g, d54 * d54) + fr(g, d55 * d55)) + fr(g, d56 * d56));
                                                    goto L_1016b12c;
                                                }
                                                loc_6c_f = (double)(float)d51;
                                                loc_68_f = (double)(float)d52;
                                                loc_64_f = (double)(float)d53;
                                                x0 = fr(g, fr(g, fr(g, d54 * d54) + fr(g, d55 * d55)) + fr(g, d56 * d56));
    COW_AT(1016af84)
                                                wrf32(sp0 - 0x7cu, (float)(double)(float)x0);
                                                d59 = (double)rdf32(sp0 - 0x28u);
                                                wr32(arg3, cow_f2bits(loc_6c_f));
                                                wr32(arg3 + 4u, cow_f2bits(loc_68_f));
                                                wr32(arg3 + 8u, cow_f2bits(loc_64_f));
                                                t60 = rd32(sp0 - 0x30u);
                                                t61 = rd32(sp0 - 0x2cu);
                                                d62 = fr(g, fr(g, fr(g, d59 * (double)rdf32(esi + 0x98u)) + fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(esi + 0x8cu))) + fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(esi + 0x80u)));
                                                wrf32(self + 0x3413cu, (float)d62);
                                                d63 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(esi + 0x9cu)) + fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(esi + 0x90u))) + fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(esi + 0x84u)));
                                                wrf32(self + 0x34140u, (float)d63);
                                                d64 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(esi + 0xa0u)) + fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(esi + 0x94u))) + fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(esi + 0x88u)));
                                                wrf32(self + 0x34144u, (float)d64);
                                                wr32(self + 0x1a114u, t60);
                                                t65 = rd32(sp0 - 0x28u);
                                                wr32(self + 0x1a118u, t61);
                                                wr32(self + 0x1a11cu, t65);
                                                t66 = (((rd16(ebp + 6u) >> 0xfu) * 2u | rd16(ebp + 4u) >> 0xfu) * 2u | rd16(ebp + 2u) >> 0xfu) * 2u | rd16(ebp) >> 0xfu;
                                                wr32(self + 0x34148u, t66);
                                                t67 = (uint32_t)((int32_t)(rd32(esi + 0xa4u) << 6u) >> 0xcu);
                                                wr32(self + 0x3414cu, t67);
                                                t68 = rd32(esi + 0xa4u) >> 2u & 1u;
                                                wr32(self + 0x34150u, t68);
                                                t69 = rd32(esi + 0xa4u);
                                                t70 = (t69 >> 0x1au & 3u) << 3u | (t69 >> 3u & 7u);
                                                wr32(self + 0x34154u, t70);
                                                t71 = rd32(esi + 0xb0u);
                                                wr32(self + 0x34158u, t71);
                                                t72 = rd8(esi + 0xacu);
                                                wr8(self + 0x3415cu, (uint8_t)t72);
                                                wr8(self + 0x3415du, rd8(esi + 0xadu));
                                                wr8(self + 0x3415eu, rd8(esi + 0xaeu));
                                                t73 = rd8(esi + 0xafu);
                                                wr8(sp0 - 0xb9u, 1u);
                                                wr8(self + 0x3415fu, (uint8_t)t73);
                                                t74 = rd32(esi + 0xa8u);
                                                t75 = rd32(sp0 - 0x74u);
                                                wr32(self + 0x1807cu, t74);
                                                ecx = t75;
                                                loc_b4 = rd32(sp0 - 0xb4u);
                                                loc_b8 = rd32(sp0 - 0xb8u);
                                                loc_b0 = rd32(sp0 - 0xb0u);
                                                loc_58 = rd32(sp0 - 0x58u);
                                                loc_70 = rd32(sp0 - 0x70u);
                                                loc_80 = rd32(sp0 - 0x80u);
                                                loc_5c = rd32(sp0 - 0x5cu);
                                                loc_74 = rd32(sp0 - 0x74u);
                                                loc_90_f = (double)rdf32(sp0 - 0x90u);
                                                loc_8c_f = (double)rdf32(sp0 - 0x8cu);
                                                loc_88_f = (double)rdf32(sp0 - 0x88u);
                                                loc_a8_f = (double)rdf32(sp0 - 0xa8u);
                                                loc_a4_f = (double)rdf32(sp0 - 0xa4u);
                                                loc_a0_f = (double)rdf32(sp0 - 0xa0u);
                                                loc_18_f = (double)rdf32(sp0 - 0x18u);
                                                loc_84 = rd32(sp0 - 0x84u);
                                                loc_14_f = (double)rdf32(sp0 - 0x14u);
                                                loc_10_f = (double)rdf32(sp0 - 0x10u);
                                            }
                                        }
                                    }
                                }
L_1016b13d: ;
    COW_AT(1016b13d)
                                wr32(sp0 - 0x84u, loc_84 + 1u);
                                if ((int32_t)(loc_84 + 1u) < (int16_t)rd16(ecx + 0xcu))
                                {
                                    eax = (uint32_t)(int16_t)rd16(ecx + 0xcu);
                                    ebp = ebp + 8u;
                                    loc_7c = rd32(sp0 - 0x7cu);
                                    loc_84 = loc_84 + 1u;
                                    goto L_1016acee;
                                }
    COW_AT(1016b155)
                                edx = loc_80;
                                loc_7c = rd32(sp0 - 0x7cu);
                            }
                        }
                    }
                }
L_1016b159: ;
    COW_AT(1016b159)
                wr32(sp0 - 0x80u, edx + 8u);
                wr32(sp0 - 0x5cu, loc_5c - 1u);
                if (loc_5c != 1u)
                {
                    eax = loc_5c - 1u;
                    loc_80 = edx + 8u;
                    edx = edx + 8u;
                    loc_5c = loc_5c - 1u;
                    goto L_1016ab78;
                }
                edx = edx + 8u;
            }
        }
        else
        {
            edx = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
    COW_AT(1016ab64)
            edx = eax * 8u + edx;
        }
    COW_AT(1016b16f)
        if (rd32(edx) != 0u)
        {
            eax = rd32(edx);
            goto L_1016ab4f;
        }
    COW_AT(1016b179)
        ecx = loc_70;
        edx = loc_58;
L_1016b181: ;
    COW_AT(1016b181)
        wr32(sp0 - 0x70u, ecx + 1u);
        if ((int32_t)(ecx + 1u) <= (int32_t)loc_b8)
        {
            loc_70 = ecx + 1u;
            ecx = ecx + 1u;
            goto L_1016ab39;
        }
    COW_AT(1016b192)
        eax = loc_b4;
L_1016b196: ;
    COW_AT(1016b196)
        wr32(sp0 - 0x58u, edx + 1u);
        if ((int32_t)(edx + 1u) <= (int32_t)loc_b0)
        {
            loc_58 = edx + 1u;
            edx = edx + 1u;
            goto L_1016ab27;
        }
    }
    COW_AT(1016b1a7)
    g->ebx = rd32(sp0 - 0xc0u);
    g->esi = rd32(sp0 - 0xc8u);
    g->edi = rd32(sp0 - 0xccu);
    g->ebp = rd32(sp0 - 0xc4u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0xb9u);
L_1016b12c: ;
    COW_AT(1016b12c)
L_1016b12e: ;
    COW_AT(1016b12e)
    ecx = rd32(sp0 - 0x74u);
    loc_b4 = rd32(sp0 - 0xb4u);
    loc_b8 = rd32(sp0 - 0xb8u);
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_70 = rd32(sp0 - 0x70u);
    loc_80 = rd32(sp0 - 0x80u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_74 = rd32(sp0 - 0x74u);
    loc_90_f = (double)rdf32(sp0 - 0x90u);
    loc_8c_f = (double)rdf32(sp0 - 0x8cu);
    loc_88_f = (double)rdf32(sp0 - 0x88u);
    loc_a8_f = (double)rdf32(sp0 - 0xa8u);
    loc_a4_f = (double)rdf32(sp0 - 0xa4u);
    loc_a0_f = (double)rdf32(sp0 - 0xa0u);
    loc_18_f = (double)rdf32(sp0 - 0x18u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_14_f = (double)rdf32(sp0 - 0x14u);
    loc_10_f = (double)rdf32(sp0 - 0x10u);
    goto L_1016b13d;
L_1016b1b8: ;
    COW_AT(1016b1b8)
    g->ebx = loc_c0;
    g->esi = loc_c8;
    g->edi = loc_cc;
    g->ebp = loc_c4;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1016a990(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016a9b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1016a9cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016a9dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1016a9e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_60;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016a9f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016aa01u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016aa0au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016aa1bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa25u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa30u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa3au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa41u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa47u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa53u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa57u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa5eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa74u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa78u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa7fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa86u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa8du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa8fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa94u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aa9bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aaa1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aaadu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aab1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aab8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aac2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aaceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aad2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aad9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aaddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aae4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aae6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aae7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aaebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aaf5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab00u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab04u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab23u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_58;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        wr32(sp0 - 0x7cu, 0x49742400u);
        (void)sp0;
        return 1;
    }
    case 0x1016ab27u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab39u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab4fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab64u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab6cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab74u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab78u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ab87u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aba3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016abb8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016abc7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016aceeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016add9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ae0fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ae83u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016ae9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x1016aedbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xd4u, sp0 - 0x9cu);
        wr32(sp0 - 0xd0u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016aee3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xd4u, sp0 - 0x9cu);
        wr32(sp0 - 0xd0u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016af84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xd4u, sp0 - 0x9cu);
        wr32(sp0 - 0xd0u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016b12cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xd4u, sp0 - 0x9cu);
        wr32(sp0 - 0xd0u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016b12eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xd4u, sp0 - 0x9cu);
        wr32(sp0 - 0xd0u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016b13bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016b13du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016b155u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016b159u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016b16fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016b179u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016b181u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016b192u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016b196u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016b1a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_ac_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x1016b1b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1016a990(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1016a990(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
