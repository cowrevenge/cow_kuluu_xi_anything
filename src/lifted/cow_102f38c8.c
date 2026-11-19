/* f_0x102f38c8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102f38c8(Guest* g)
{
    double d16;
    double d17;
    double d18;
    double d22;
    double d23;
    double d27;
    double d28;
    double d3;
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
    double d4;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_10_f;
    uint32_t loc_14;
    double loc_18_f;
    double loc_1c_f;
    uint32_t loc_40;
    double loc_40_f;
    double loc_44_f;
    uint32_t loc_8;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t loc_c;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t29;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 196u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f38f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f38f3;
    case 0x102f38f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f38f7;
    case 0x102f3937u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f3937;
    case 0x102f393cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f393c;
    case 0x102f3946u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f3946;
    case 0x102f3949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f3949;
    case 0x102f3956u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f3956;
    case 0x102f3966u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f3966;
    case 0x102f396bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f396b;
    case 0x102f396fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f396f;
    case 0x102f397fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f397f;
    case 0x102f3994u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f3994;
    case 0x102f39a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f39a4;
    case 0x102f39a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f39a6;
    case 0x102f39b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_102f39b3;
    case 0x102f39cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_102f39cf;
    case 0x102f39d9u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_102f39d9;
    case 0x102f39e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_102f39e5;
    case 0x102f39f1u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_102f39f1;
    case 0x102f39fdu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_102f39fd;
    case 0x102f3a09u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_102f3a09;
    case 0x102f3a11u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_102f3a11;
    case 0x102f3a1bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_102f3a1b;
    case 0x102f3a2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102f3a2d;
    case 0x102f3a35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102f3a35;
    case 0x102f3a9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3a9d;
    case 0x102f3aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3aa1;
    case 0x102f3aaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102f3aaa;
    case 0x102f3ab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3ab7;
    case 0x102f3abcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3abc;
    case 0x102f3acfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102f3acf;
    case 0x102f3adeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3ade;
    case 0x102f3ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3ae4;
    case 0x102f3af1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3af1;
    case 0x102f3af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3af7;
    case 0x102f3b0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102f3b0c;
    case 0x102f3b1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3b1f;
    case 0x102f3b2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102f3b2d;
    case 0x102f3b3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3b3c;
    case 0x102f3b42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3b42;
    case 0x102f3b4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3b4f;
    case 0x102f3b55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f3b55;
    case 0x102f3b6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102f3b6a;
    case 0x102f3b71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102f3b71;
    case 0x102f3b7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3b7c;
    case 0x102f3b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3b82;
    case 0x102f3b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102f3b92;
    case 0x102f3b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102f3b9d;
    case 0x102f3b9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_44_f = rdf32(sp0 - 0x44u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3b9f;
    case 0x102f3bb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_102f3bb1;
    case 0x102f3bb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3bb9;
    case 0x102f3bceu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3bce;
    case 0x102f3bd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3bd4;
    case 0x102f3bf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3bf8;
    case 0x102f3c00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3c00;
    case 0x102f3c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3c13;
    case 0x102f3c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3c17;
    case 0x102f3c1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3c1b;
    case 0x102f3c25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3c25;
    case 0x102f3c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3c2d;
    case 0x102f3c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3c46;
    case 0x102f3c48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3c48;
    case 0x102f3c4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3c4b;
    case 0x102f3c50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3c50;
    case 0x102f3c68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3c68;
    case 0x102f3c83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3c83;
    case 0x102f3c93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3c93;
    case 0x102f3c98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3c98;
    case 0x102f3c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3c9c;
    case 0x102f3cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3cac;
    case 0x102f3cc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3cc1;
    case 0x102f3cd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f3cd1;
    case 0x102f3cd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3cd3;
    case 0x102f3ce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3ce1;
    case 0x102f3ce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3ce4;
    case 0x102f3d05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3d05;
    case 0x102f3d10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3d10;
    case 0x102f3d12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f3d12;
    default: break;
    }
#endif

    COW_AT(102f38c8)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xa8u, in_ebx);
    wr32(sp0 - 0xacu, in_esi);
    wr32(sp0 - 0xb0u, in_edi);
    t1 = rd32(rd32(sp0 + 8u) + 0xcu);
    wr32(sp0 - 0xcu, t1);
    wr32(sp0 - 0x10u, t1);
    wr32(sp0 - 0xb4u, 0x10u);
    t2 = rd32(sp0 + 8u);
    edi = sp0 - 0xa4u;
    eax = 0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 0xa4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), ecx, 3, in_edi, in_esi, in_ebx);
    ebx = t2 + 0xcu;
    COW_AT(102f38f3)
    edx = 0u;
    edi = ebx;
    loc_c_f = (double)rdf32(sp0 - 0xcu);
    loc_10_f = (double)rdf32(sp0 - 0x10u);
L_102f38f7: ;
    COW_AT(102f38f7)
    d3 = fr(g, (double)rdf32(edx * 4u + sp0 - 0xa4u) + (double)rdf32(edi));
    wrf32(sp0 - 0x18u, (float)(double)(float)d3);
    d4 = fr(g, fr(g, d3 * (double)rdf32(COW_IMG(0x10329a20u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 8u, (float)(double)(float)d4);
    wr32(sp0 - 0x14u, (uint32_t)fist32(g, (double)(float)d4));
    wr32(sp0 - 8u, (uint32_t)fist32(g, (double)(float)d4));
    d5 = fr(g, (double)(int32_t)(uint32_t)fist32(g, (double)(float)d4) * (double)rdf32(COW_IMG(0x10329e94u)));
    wrf32(edx * 4u + sp0 - 0x64u, (float)d5);
    if (!(d5 < loc_c_f))
    {
        eax = ((uint32_t)fist32(g, (double)(float)d4) & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, loc_c_f, 1u);
        ecx = edx << 2u;
        loc_18_f = (double)(float)d3;
        x0 = d5;
    COW_AT(102f393c)
        if ((cow_fsw(g, x0, loc_10_f, 1u) >> 8u & 0x41u) == 0u)
        {
    COW_AT(102f3946)
            wrf32(sp0 - 0x10u, (float)(double)(float)x0);
            loc_10_f = (double)(float)x0;
        }
    }
    else
    {
        ecx = edx << 2u;
        loc_18_f = (double)(float)d3;
        x0 = d5;
    COW_AT(102f3937)
        wrf32(sp0 - 0xcu, (float)(double)(float)x0);
        loc_c_f = (double)(float)x0;
    }
    COW_AT(102f3949)
    if ((edx & 3u) == 3u)
    {
        esi = edx & 3u;
        x0 = fr(g, loc_18_f - x0);
    }
    else
    {
        esi = edx & 3u;
        x0 = fr(g, loc_18_f - x0);
    COW_AT(102f3956)
        d6 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348408u)) * x0) + (double)rdf32(ecx + sp0 - 0xa0u));
        wrf32(ecx + sp0 - 0xa0u, (float)d6);
    }
    COW_AT(102f3966)
    if (edx >= 0xcu) goto L_102f39a4;
    COW_AT(102f396b)
    if (esi != 0u)
    {
    COW_AT(102f396f)
        d7 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348404u)) * x0) + (double)rdf32(ecx + sp0 - 0x98u));
        wrf32(ecx + sp0 - 0x98u, (float)d7);
    }
    COW_AT(102f397f)
    d8 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348400u)) * x0) + (double)rdf32(ecx + sp0 - 0x94u));
    wrf32(ecx + sp0 - 0x94u, (float)d8);
    if (esi == 3u) goto L_102f39a4;
    COW_AT(102f3994)
    d9 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(ecx + sp0 - 0x90u));
    wrf32(ecx + sp0 - 0x90u, (float)d9);
L_102f39a6: ;
    COW_AT(102f39a6)
    if (edx + 1u < 0x10u)
    {
        edx = edx + 1u;
        edi = edi + 0x10u;
        goto L_102f38f7;
    }
    edx = edx + 1u;
    COW_AT(102f39b3)
    wr32(sp0 - 8u, rd32(COW_IMG(0x109b262cu)));
    g->fcw = (uint16_t)rd32(COW_IMG(0x109b262cu));
    wr32(sp0 - 0xb4u, 0u);
    t10 = rd32(sp0 + 4u) + 8u;
    wr32(sp0 - 0xb8u, t10);
    g->edx = edx;
    t11 = rd32(sp0 + 8u);
    t12 = rd32(sp0 + 4u);
    t13 = rd32(COW_IMG(0x109b262cu));
    g->esp = sp0 - 0xb0u;
    t14 = cow_call_regs(g, COW_IMG(0x102f2c9bu), t11, g->ecx, g->edx, 1, 2, t10, 0u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    esi = t12;
    loc_b8 = rd32(sp0 - 0xb8u);
    COW_AT(102f39cf)
    if ((int32_t)eax >= 0)
    {
    COW_AT(102f39d9)
        d16 = (double)rdf32(sp0 - 0xcu);
        if (1.0 != d16)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, 1.0, d16, 0u);
            goto L_102f39f1;
        }
    COW_AT(102f39e5)
        wr8(esi, rd8(esi) | 0xffu);
        wr8(esi + 1u, rd8(esi + 1u) | 0xffu);
L_102f3aaa: ;
    COW_AT(102f3aaa)
        edi = esi + 2u;
        eax = 0u;
        wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
        wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
L_102f3d10: ;
    COW_AT(102f3d10)
        eax = 0u;
    }
    COW_AT(102f3d12)
    g->ebx = rd32(sp0 - 0xa8u);
    g->esi = rd32(sp0 - 0xacu);
    g->edi = rd32(sp0 - 0xb0u);
    g->ebp = rd32(sp0 - 4u);
    return eax;
L_102f39a4: ;
    COW_AT(102f39a4)
    goto L_102f39a6;
L_102f39f1: ;
    COW_AT(102f39f1)
    d17 = (double)rdf32(sp0 - 0xcu);
    if (0.0 == d17) goto L_102f3a11;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, 0.0, d17, 0u);
    COW_AT(102f39fd)
    d18 = (double)rdf32(sp0 - 0x10u);
    if (1.0 == d18) goto L_102f3a11;
    COW_AT(102f3a09)
    wr32(sp0 - 0xb4u, 8u);
    wr32(sp0 + 8u, 8u);
    edi = 8u;
L_102f3a1b: ;
    COW_AT(102f3a1b)
    wr32(sp0 - 0xb4u, edi);
    wr32(sp0 - 0xb8u, sp0 - 0x64u);
    wr32(sp0 - 0xbcu, sp0 + 4u);
    wr32(sp0 - 0xc0u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->ecx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t19 = cow_cdecl(g, COW_IMG(0x102f242bu), 6, sp0 - 8u, sp0 + 4u, sp0 - 0x64u, edi, rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu));
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(102f3a2d)
    g->esp = sp0 - 0xa4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), ecx, 3, rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u));
    COW_AT(102f3a35)
    d22 = fr(g, fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329a20u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 8u, (float)(double)(float)d22);
    wr32(sp0 - 0x14u, (uint32_t)fist32(g, (double)(float)d22));
    d23 = fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a20u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 4u, (float)d23);
    t24 = (uint32_t)fist32(g, (double)rdf32(sp0 + 4u));
    wr32(sp0 - 8u, t24);
    wr32(sp0 + 4u, rd32(COW_IMG(0x109b262cu)));
    t25 = (uint32_t)fist32(g, (double)(float)d22);
    g->fcw = rd16(sp0 + 4u);
    wr32(sp0 + 4u, (uint8_t)t25);
    t26 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, (uint8_t)t24);
    d27 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329e94u)));
    d28 = fr(g, (double)(int32_t)t26 * (double)rdf32(COW_IMG(0x10329e94u)));
    wrf32(sp0 + 4u, (float)d27);
    if (edi != 8u)
    {
        eax = t25;
        ecx = t24;
        edx = (uint8_t)t24;
        x1 = d27;
        x0 = d28;
        goto L_102f3ab7;
    }
    eax = t25;
    ecx = t24;
    edx = (uint8_t)t24;
    x1 = d27;
    x0 = d28;
    COW_AT(102f3a9d)
    if ((uint8_t)eax != (uint8_t)ecx) goto L_102f3b1f;
    COW_AT(102f3aa1)
    wr8(esi, (uint8_t)eax);
    wr8(esi + 1u, (uint8_t)ecx);
    goto L_102f3aaa;
L_102f3a11: ;
    COW_AT(102f3a11)
    wr32(sp0 + 8u, 6u);
    edi = rd32(sp0 + 8u);
    goto L_102f3a1b;
L_102f3ab7: ;
    COW_AT(102f3ab7)
    if (edi != 6u) goto L_102f3b1f;
    COW_AT(102f3abc)
    wr8(esi, (uint8_t)eax);
    wrf32(sp0 - 0x44u, (float)(double)(float)x0);
    t29 = rd32(sp0 + 4u);
    wr32(sp0 - 0x40u, t29);
    wr8(esi + 1u, (uint8_t)ecx);
    eax = 1u;
    loc_44_f = (double)(float)x0;
    loc_40 = t29;
L_102f3acf: ;
    COW_AT(102f3acf)
    wr32(sp0 - 0xb4u, 5u);
    wr32(sp0 + 4u, 5u - eax);
    if ((int32_t)(5u - eax) >= 0)
    {
        x0 = (double)(int32_t)rd32(sp0 + 4u);
    }
    else
    {
        x0 = (double)(int32_t)rd32(sp0 + 4u);
    COW_AT(102f3ade)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102f3ae4)
    wr32(sp0 + 4u, eax);
    if ((int32_t)eax >= 0)
    {
        x1 = (double)(int32_t)rd32(sp0 + 4u);
        x0 = fr(g, x0 * loc_44_f);
    }
    else
    {
        x1 = (double)(int32_t)rd32(sp0 + 4u);
        x0 = fr(g, x0 * loc_44_f);
    COW_AT(102f3af1)
        x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102f3af7)
    d30 = fr(g, fr(g, x0 + fr(g, x1 * cow_bits2f(loc_40))) * (double)rdf32(COW_IMG(0x1032a39cu)));
    wrf32(eax * 4u + sp0 - 0x40u, (float)d30);
    if (eax + 1u < 5u)
    {
        eax = eax + 1u;
        goto L_102f3acf;
    }
    eax = eax + 1u;
    COW_AT(102f3b0c)
    wr32(sp0 - 0x14u, COW_IMG(0x1034842cu));
    wrf32(sp0 - 0x2cu, (float)(double)(float)0.0);
    wrf32(sp0 - 0x28u, (float)(double)(float)1.0);
    loc_14 = COW_IMG(0x1034842cu);
L_102f3b71: ;
    COW_AT(102f3b71)
    wr32(sp0 + 4u, edi - 1u);
    if ((int32_t)(edi - 1u) >= 0)
    {
        x0 = (double)(int32_t)rd32(sp0 + 4u);
    }
    else
    {
        x0 = (double)(int32_t)rd32(sp0 + 4u);
    COW_AT(102f3b7c)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102f3b82)
    wrf32(sp0 - 0x1cu, (float)(double)(float)x0);
    d32 = (double)rdf32(sp0 - 0x40u);
    if (loc_44_f == d32)
    {
        loc_1c_f = (double)(float)x0;
    COW_AT(102f3b9d)
        x0 = 0.0;
    }
    else
    {
        loc_1c_f = (double)(float)x0;
    COW_AT(102f3b92)
        x0 = fr(g, loc_1c_f / fr(g, (double)rdf32(sp0 - 0x40u) - loc_44_f));
    }
    COW_AT(102f3b9f)
    wr32(sp0 - 0xb4u, 0x10u);
    wrf32(sp0 - 0x18u, (float)(double)(float)x0);
    edi = sp0 - 0xa4u;
    eax = 0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 0xa4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), ecx, 3, rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u));
    COW_AT(102f3bb1)
    wr32(sp0 - 0xcu, ebx);
    eax = 0u;
    ecx = esi + 3u;
    loc_c = ebx;
L_102f3bb9: ;
    COW_AT(102f3bb9)
    wr32(sp0 + 4u, 0u);
    wr32(sp0 - 8u, eax + 8u);
    if (eax >= eax + 8u)
    {
        edx = 0u;
        loc_8 = eax + 8u;
    }
    else
    {
        ebx = eax;
        loc_8 = eax + 8u;
    COW_AT(102f3bce)
        wr32(sp0 - 0x10u, loc_c);
        edx = 0u;
        loc_10 = loc_c;
L_102f3bd4: ;
    COW_AT(102f3bd4)
        d33 = fr(g, (double)rdf32(ebx * 4u + sp0 - 0xa4u) + (double)rdf32(loc_10));
        wrf32(sp0 + 4u, (float)d33);
        d34 = fr(g, fr(g, d33 - (double)rdf32(sp0 - 0x44u)) * (double)rdf32(sp0 - 0x18u));
        if (!(d34 <= (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (loc_10 & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            esi = ebx << 2u;
            x0 = d34;
            goto L_102f3c1b;
        }
        eax = (loc_10 & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        esi = ebx << 2u;
        x0 = d34;
    COW_AT(102f3bf8)
        if (rd32(sp0 + 8u) != 6u) goto L_102f3c17;
    COW_AT(102f3c00)
        d35 = fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(COW_IMG(0x10329a08u)));
        d36 = (double)rdf32(sp0 + 4u);
        if (cow_fsw(g, d35, d36, 0u) >> 8u & 1u) goto L_102f3c17;
    COW_AT(102f3c13)
        wr32(sp0 - 0xb4u, 6u);
        loc_b4 = 6u;
L_102f3c48: ;
    COW_AT(102f3c48)
        eax = loc_b4;
L_102f3c68: ;
    COW_AT(102f3c68)
        if ((ebx & 3u) == 3u)
        {
            edx = edx >> 3u | eax << 0x15u;
            edi = ebx & 3u;
            x0 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(eax * 4u + sp0 - 0x44u));
        }
        else
        {
            edx = edx >> 3u | eax << 0x15u;
            edi = ebx & 3u;
            x0 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(eax * 4u + sp0 - 0x44u));
    COW_AT(102f3c83)
            d41 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348408u)) * x0) + (double)rdf32(esi + sp0 - 0xa0u));
            wrf32(esi + sp0 - 0xa0u, (float)d41);
            eax = esi + sp0 - 0xa0u;
        }
    COW_AT(102f3c93)
        if (ebx >= 0xcu) goto L_102f3cd1;
    COW_AT(102f3c98)
        if (edi != 0u)
        {
    COW_AT(102f3c9c)
            d42 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348404u)) * x0) + (double)rdf32(esi + sp0 - 0x98u));
            wrf32(esi + sp0 - 0x98u, (float)d42);
        }
    COW_AT(102f3cac)
        d43 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348400u)) * x0) + (double)rdf32(esi + sp0 - 0x94u));
        wrf32(esi + sp0 - 0x94u, (float)d43);
        if (edi == 3u)
        {
            eax = esi + sp0 - 0x94u;
            goto L_102f3cd1;
        }
    COW_AT(102f3cc1)
        d44 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(esi + sp0 - 0x90u));
        wrf32(esi + sp0 - 0x90u, (float)d44);
        eax = esi + sp0 - 0x90u;
L_102f3cd3: ;
    COW_AT(102f3cd3)
        wr32(sp0 - 0x10u, loc_10 + 0x10u);
        if (ebx + 1u < loc_8)
        {
            ebx = ebx + 1u;
            loc_10 = loc_10 + 0x10u;
            goto L_102f3bd4;
        }
    COW_AT(102f3ce1)
        wr32(sp0 + 4u, edx);
    }
    COW_AT(102f3ce4)
    wr32(sp0 - 0xcu, loc_c + 0x80u);
    wr8(ecx + 1u, rd8(sp0 + 6u));
    wr8(ecx - 1u, (uint8_t)edx);
    wr8(ecx, (uint8_t)(edx >> 8u));
    if (loc_8 < 0x10u)
    {
        eax = loc_8;
        ecx = ecx + 3u;
        loc_c = loc_c + 0x80u;
        goto L_102f3bb9;
    }
    COW_AT(102f3d05)
    wr32(sp0 + 8u, rd32(COW_IMG(0x109b262cu)));
    g->fcw = rd16(sp0 + 8u);
    goto L_102f3d10;
L_102f3b1f: ;
    COW_AT(102f3b1f)
    wr8(esi + 1u, (uint8_t)eax);
    wrf32(sp0 - 0x44u, (float)(double)(float)x1);
    wrf32(sp0 - 0x40u, (float)(double)(float)x0);
    wr8(esi, (uint8_t)ecx);
    eax = 1u;
    loc_44_f = (double)(float)x1;
    loc_40_f = (double)(float)x0;
L_102f3b2d: ;
    COW_AT(102f3b2d)
    wr32(sp0 - 0xb4u, 7u);
    wr32(sp0 + 4u, 7u - eax);
    if ((int32_t)(7u - eax) >= 0)
    {
        x0 = (double)(int32_t)rd32(sp0 + 4u);
    }
    else
    {
        x0 = (double)(int32_t)rd32(sp0 + 4u);
    COW_AT(102f3b3c)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102f3b42)
    wr32(sp0 + 4u, eax);
    if ((int32_t)eax >= 0)
    {
        x1 = (double)(int32_t)rd32(sp0 + 4u);
        x0 = fr(g, x0 * loc_44_f);
    }
    else
    {
        x1 = (double)(int32_t)rd32(sp0 + 4u);
        x0 = fr(g, x0 * loc_44_f);
    COW_AT(102f3b4f)
        x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102f3b55)
    d31 = fr(g, fr(g, x0 + fr(g, x1 * loc_40_f)) * (double)rdf32(COW_IMG(0x10346184u)));
    wrf32(eax * 4u + sp0 - 0x40u, (float)d31);
    if (eax + 1u < 7u)
    {
        eax = eax + 1u;
        goto L_102f3b2d;
    }
    eax = eax + 1u;
    COW_AT(102f3b6a)
    wr32(sp0 - 0x14u, COW_IMG(0x1034840cu));
    loc_14 = COW_IMG(0x1034840cu);
    goto L_102f3b71;
L_102f3c17: ;
    COW_AT(102f3c17)
    eax = 0u;
    goto L_102f3c68;
L_102f3c1b: ;
    COW_AT(102f3c1b)
    d37 = (double)rdf32(sp0 - 0x1cu);
    if (cow_fsw(g, x0, d37, 1u) >> 8u & 1u) goto L_102f3c50;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d37, 1u);
    COW_AT(102f3c25)
    if (rd32(sp0 + 8u) != 6u) goto L_102f3c4b;
    COW_AT(102f3c2d)
    d38 = fr(g, fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
    d39 = (double)rdf32(sp0 + 4u);
    if (!(d38 <= d39)) goto L_102f3c4b;
    COW_AT(102f3c46)
    wr32(sp0 - 0xb4u, 7u);
    loc_b4 = 7u;
    goto L_102f3c48;
L_102f3c4b: ;
    COW_AT(102f3c4b)
    eax = 1u;
    goto L_102f3c68;
L_102f3c50: ;
    COW_AT(102f3c50)
    d40 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x20u, (float)(double)(float)d40);
    wr32(sp0 - 0x24u, (uint32_t)fist32(g, (double)(float)d40));
    eax = rd32((uint32_t)fist32(g, (double)(float)d40) * 4u + rd32(sp0 - 0x14u));
    goto L_102f3c68;
L_102f3cd1: ;
    COW_AT(102f3cd1)
    goto L_102f3cd3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f38c8(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f38f3u:
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
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f38f7u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3937u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f393cu:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3946u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3949u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3956u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3966u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f396bu:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f396fu:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f397fu:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3994u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f39a4u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f39a6u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f39b3u:
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
        double loc_10_f;
        uint32_t loc_14;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f39cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb8u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102f39d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        g->ecx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f39e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f39f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        g->ecx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f39fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        g->ecx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3a09u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        g->ecx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3a11u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        g->ecx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3a1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        g->ecx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3a2du:
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
        g->esp = sp0 - 0xc0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3a35u:
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
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3a9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_8;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3aa1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_8;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3aaau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3ab7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_8;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3abcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_8;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3acfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_40;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3adeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_40;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3ae4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_40;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3af1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_40;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3af7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_40;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_40;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b1fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_8;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b42u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b55u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b6au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b7cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b82u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b92u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_1c_f;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_1c_f;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3b9fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_1c_f;
        double loc_44_f;
        uint32_t loc_8;
        uint32_t loc_b4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3bb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3bb9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3bceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3bd4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3bf8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c17u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c46u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c4bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c68u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c83u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c93u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c98u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3c9cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3cacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3cc1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3cd1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3cd3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3ce1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3ce4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3d05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xc0u, sp0 - 8u);
        wr32(sp0 - 0xbcu, sp0 + 4u);
        wr32(sp0 - 0xb8u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102f3d10u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102f3d12u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f38c8(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102f38c8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
