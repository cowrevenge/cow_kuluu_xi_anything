/* f_0x10169b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10169b40(Guest* g)
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
    double d37;
    double d39;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d48;
    double d49;
    double d50;
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
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    double loc_1c_f;
    double loc_20_f;
    double loc_24_f;
    uint32_t loc_4c;
    uint32_t loc_50;
    double loc_54_f;
    double loc_58_f;
    double loc_5c_f;
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
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t loc_bc;
    uint32_t loc_c0;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t47;
    uint32_t t5;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
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
    cow_frame(g, sp0, 204u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10169b61u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 0xb8u); in_ebx = rd32(sp0 - 0xb4u); g->ebp = rd32(sp0 - 0xb8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_10169b61;
    case 0x10169b7fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 0xb8u); in_ebx = rd32(sp0 - 0xb4u); g->ebp = rd32(sp0 - 0xb8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_10169b7f;
    case 0x10169b8cu: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 0xb8u); in_ebx = rd32(sp0 - 0xb4u); g->ebp = rd32(sp0 - 0xb8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_10169b8c;
    case 0x10169b97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 0xb8u); in_ebx = rd32(sp0 - 0xb4u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0xb8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_10169b97;
    case 0x10169ba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_10169ba7;
    case 0x10169bb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_10169bb1;
    case 0x10169bbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_10169bba;
    case 0x10169bcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169bcb;
    case 0x10169bd5u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169bd5;
    case 0x10169be0u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169be0;
    case 0x10169beau: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169bea;
    case 0x10169bf1u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169bf1;
    case 0x10169bf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169bf7;
    case 0x10169c03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c03;
    case 0x10169c07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c07;
    case 0x10169c0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c0e;
    case 0x10169c18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c18;
    case 0x10169c24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c24;
    case 0x10169c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c28;
    case 0x10169c2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c2f;
    case 0x10169c36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c36;
    case 0x10169c3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c3d;
    case 0x10169c3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c3f;
    case 0x10169c44u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169c44;
    case 0x10169c4bu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169c4b;
    case 0x10169c51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169c51;
    case 0x10169c5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c5d;
    case 0x10169c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c61;
    case 0x10169c68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c68;
    case 0x10169c72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c72;
    case 0x10169c7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c7e;
    case 0x10169c82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c82;
    case 0x10169c89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c89;
    case 0x10169c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c8d;
    case 0x10169c94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c94;
    case 0x10169c96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c96;
    case 0x10169c97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c97;
    case 0x10169c9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169c9b;
    case 0x10169ca5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169ca5;
    case 0x10169cb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169cb0;
    case 0x10169cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169cb4;
    case 0x10169cd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_60 = rd32(sp0 - 0x60u); goto E_10169cd3;
    case 0x10169cd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169cd7;
    case 0x10169ce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169ce9;
    case 0x10169cffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169cff;
    case 0x10169d14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169d14;
    case 0x10169d1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169d1c;
    case 0x10169d24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169d24;
    case 0x10169d28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169d28;
    case 0x10169d37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169d37;
    case 0x10169d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169d53;
    case 0x10169d68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169d68;
    case 0x10169d77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169d77;
    case 0x10169e55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169e55;
    case 0x10169f37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10169f37;
    case 0x10169fabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169fab;
    case 0x10169fc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169fc2;
    case 0x1016a003u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016a003;
    case 0x1016a00bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016a00b;
    case 0x1016a0acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a0ac;
    case 0x1016a231u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a231;
    case 0x1016a233u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); goto E_1016a233;
    case 0x1016a240u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a240;
    case 0x1016a242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016a242;
    case 0x1016a25au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016a25a;
    case 0x1016a25eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016a25e;
    case 0x1016a274u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016a274;
    case 0x1016a27eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016a27e;
    case 0x1016a286u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016a286;
    case 0x1016a297u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016a297;
    case 0x1016a29bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016a29b;
    case 0x1016a2acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016a2ac;
    case 0x1016a2bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1016a2bd;
    default: break;
    }
#endif

    COW_AT(10169b40)
    wr32(sp0 - 0xb4u, in_ebx);
    wr32(sp0 - 0xb8u, in_ebp);
    wr32(sp0 - 0xbcu, in_esi);
    wr32(sp0 - 0xc0u, in_edi);
    t1 = rd32(self + 0x60u);
    wr32(self + 0x1807cu, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        loc_b4 = in_ebx;
        loc_b8 = in_ebp;
        loc_bc = in_esi;
        loc_c0 = in_edi;
        goto L_1016a2bd;
    }
    eax = t1;
    COW_AT(10169b61)
    d2 = (double)rdf32(arg1 + 4u);
    d3 = (double)rdf32(arg2 + 4u);
    if (!(d2 < d3))
    {
        eax = rd32(arg1 + 4u);
    COW_AT(10169b8c)
        wr32(sp0 - 0x78u, eax);
        t5 = rd32(arg2 + 4u);
        wr32(sp0 - 0x7cu, t5);
        ecx = self;
        edx = t5;
        loc_7c = t5;
        loc_78 = eax;
    }
    else
    {
        eax = rd32(arg1 + 4u);
    COW_AT(10169b7f)
        wr32(sp0 - 0x7cu, eax);
        t4 = rd32(arg2 + 4u);
        wr32(sp0 - 0x78u, t4);
        ecx = t4;
        edx = in_edx;
        loc_7c = eax;
        loc_78 = t4;
    }
    COW_AT(10169b97)
    g->ecx = ecx;
    g->edx = edx;
    d6 = fr(g, fr(g, (double)rdf32(self + 0x40u) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d6);
    g->esp = sp0 - 0xc0u;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10169ba7)
    if ((int32_t)eax < 0)
    {
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_1016a2bd;
    }
    ebp = eax;
    COW_AT(10169bb1)
    if ((int32_t)ebp >= (int32_t)rd32(self + 0x48u))
    {
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_1016a2bd;
    }
    COW_AT(10169bba)
    g->ecx = ecx;
    d10 = fr(g, fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d10);
    g->esp = sp0 - 0xc0u;
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    COW_AT(10169bcb)
    if ((int32_t)eax < 0)
    {
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_1016a2bd;
    }
    COW_AT(10169bd5)
    if ((int32_t)eax >= (int32_t)rd32(self + 0x4cu))
    {
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_1016a2bd;
    }
    esi = rd32(self + 0x4cu);
    COW_AT(10169be0)
    if (rd8(self + 0x34139u) == 0u)
    {
    COW_AT(10169c44)
        if ((int32_t)(ebp - 1u) >= 0)
        {
            ecx = ebp - 1u;
    COW_AT(10169c51)
            t15 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa4u, t15);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a4 = t15;
            }
            else
            {
    COW_AT(10169c5d)
                wr32(sp0 - 0xa4u, ecx);
                loc_a4 = ecx;
            }
        }
        else
        {
    COW_AT(10169c4b)
            wr32(sp0 - 0xa4u, 0u);
            loc_a4 = 0u;
        }
    COW_AT(10169c61)
        if ((int32_t)(ebp + 1u) >= 0)
        {
            ecx = ebp + 1u;
    COW_AT(10169c72)
            t16 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa8u, t16);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a8 = t16;
            }
            else
            {
    COW_AT(10169c7e)
                wr32(sp0 - 0xa8u, ecx);
                loc_a8 = ecx;
            }
        }
        else
        {
    COW_AT(10169c68)
            wr32(sp0 - 0xa8u, 0u);
            loc_a8 = 0u;
        }
    COW_AT(10169c82)
        if ((int32_t)(eax - 1u) >= 0)
        {
            ecx = eax - 1u;
    COW_AT(10169c8d)
            if ((int32_t)ecx > (int32_t)(esi - 1u))
            {
                edx = esi - 1u;
    COW_AT(10169c94)
                ecx = edx;
            }
        }
        else
        {
    COW_AT(10169c89)
            ecx = 0u;
        }
    COW_AT(10169c96)
        eax = eax + 1u;
    }
    else
    {
    COW_AT(10169bea)
        if ((int32_t)(ebp - 2u) >= 0)
        {
            ecx = ebp - 2u;
    COW_AT(10169bf7)
            t13 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa4u, t13);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a4 = t13;
            }
            else
            {
    COW_AT(10169c03)
                wr32(sp0 - 0xa4u, ecx);
                loc_a4 = ecx;
            }
        }
        else
        {
    COW_AT(10169bf1)
            wr32(sp0 - 0xa4u, 0u);
            loc_a4 = 0u;
        }
    COW_AT(10169c07)
        if ((int32_t)(ebp + 2u) >= 0)
        {
            ecx = ebp + 2u;
    COW_AT(10169c18)
            t14 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa8u, t14);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a8 = t14;
            }
            else
            {
    COW_AT(10169c24)
                wr32(sp0 - 0xa8u, ecx);
                loc_a8 = ecx;
            }
        }
        else
        {
    COW_AT(10169c0e)
            wr32(sp0 - 0xa8u, 0u);
            loc_a8 = 0u;
        }
    COW_AT(10169c28)
        if ((int32_t)(eax - 2u) >= 0)
        {
            ecx = eax - 2u;
    COW_AT(10169c36)
            if ((int32_t)ecx > (int32_t)(esi - 1u))
            {
                edx = esi - 1u;
    COW_AT(10169c3d)
                ecx = edx;
            }
    COW_AT(10169c3f)
            eax = eax + 2u;
        }
        else
        {
    COW_AT(10169c2f)
            eax = eax + 2u;
            ecx = 0u;
        }
    }
    COW_AT(10169c97)
    if ((int32_t)eax >= 0)
    {
    COW_AT(10169ca5)
        wr32(sp0 - 0xacu, esi - 1u);
        if ((int32_t)eax > (int32_t)(esi - 1u))
        {
            loc_ac = esi - 1u;
        }
        else
        {
    COW_AT(10169cb0)
            wr32(sp0 - 0xacu, eax);
            loc_ac = eax;
        }
    }
    else
    {
    COW_AT(10169c9b)
        wr32(sp0 - 0xacu, 0u);
        loc_ac = 0u;
    }
    COW_AT(10169cb4)
    wr32(sp0 - 0x74u, 0x49742400u);
    wr8(sp0 - 0xadu, 0u);
    wr32(sp0 - 0x60u, ecx);
    if ((int32_t)ecx > (int32_t)loc_ac)
    {
        eax = loc_ac;
    }
    else
    {
        edx = ecx;
        loc_60 = ecx;
    COW_AT(10169cd3)
        eax = loc_a4;
        loc_74 = 0x49742400u;
L_10169cd7: ;
    COW_AT(10169cd7)
        wr32(sp0 - 0x50u, eax);
        if ((int32_t)eax > (int32_t)loc_a8) goto L_1016a29b;
        ecx = eax;
        loc_50 = eax;
L_10169ce9: ;
    COW_AT(10169ce9)
        if (rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u) == 0u) goto L_1016a286;
        eax = rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u);
L_10169cff: ;
    COW_AT(10169cff)
        wr32(sp0 - 0x4cu, eax + 4u);
        if ((rd32(eax) >> 8u & 0x20u) == 0u)
        {
            edx = eax + 4u;
            loc_4c = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
    COW_AT(10169d1c)
            if ((int32_t)eax > 0)
            {
    COW_AT(10169d24)
                wr32(sp0 - 0x70u, eax);
                loc_70 = eax;
L_10169d28: ;
    COW_AT(10169d28)
                t17 = rd32(edx + 4u);
                wr32(sp0 - 0x80u, t17);
                if (rd32(edx + 4u) != 0u)
                {
                    ecx = t17;
                    loc_80 = t17;
    COW_AT(10169d37)
                    d18 = (double)rdf32(rd32(edx) + 0xb4u);
                    d19 = (double)rdf32(sp0 - 0x78u);
                    if ((cow_fsw(g, d18, d19, 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
                        ebp = rd32(ecx + 8u);
                        esi = rd32(edx);
    COW_AT(10169d53)
                        d20 = (double)rdf32(esi + 0xb8u);
                        d21 = (double)rdf32(sp0 - 0x7cu);
                        if (!(d20 < d21))
                        {
    COW_AT(10169d68)
                            if (rd32(self + 4u) != rd32(esi + 0xbcu))
                            {
    COW_AT(10169d77)
                                d22 = fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg1 + 4u));
                                d23 = fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg1 + 8u));
                                wr32(sp0 - 0x84u, 0u);
                                d24 = fr(g, fr(g, fr(g, d23 + d22) + fr(g, (double)rdf32(arg1) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                                wrf32(sp0 - 0x90u, (float)(double)(float)d24);
                                d25 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x74u));
                                wrf32(sp0 - 0x8cu, (float)(double)(float)d25);
                                d26 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x78u));
                                wrf32(sp0 - 0x88u, (float)(double)(float)d26);
                                d27 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x78u));
                                d28 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x74u));
                                d29 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(arg2) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                                wrf32(sp0 - 4u, (float)(double)(float)d27);
                                d30 = (double)(float)fr(g, d29 - (double)(float)d24);
                                wrf32(sp0 - 0x6cu, (float)d30);
                                d31 = (double)(float)fr(g, d28 - (double)(float)d25);
                                wrf32(sp0 - 0x68u, (float)d31);
                                d32 = (double)(float)fr(g, (double)(float)d27 - (double)(float)d26);
                                wrf32(sp0 - 0x64u, (float)d32);
                                if ((int16_t)rd16(ecx + 0xcu) <= 0) goto L_1016a25e;
                                eax = arg1;
                                loc_84 = 0u;
                                loc_90_f = (double)(float)d24;
                                loc_8c_f = (double)(float)d25;
                                loc_88_f = (double)(float)d26;
                                loc_6c_f = d30;
                                loc_68_f = d31;
                                loc_64_f = d32;
L_10169e55: ;
    COW_AT(10169e55)
                                t33 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu);
                                wr32(sp0 - 0x24u, t33);
                                t34 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 4u);
                                wr32(sp0 - 0x20u, t34);
                                t35 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 8u);
                                wr32(sp0 - 0x1cu, t35);
                                t36 = rd32(ecx) + (rd16(ebp) & 0x7fffu) * 0xcu;
                                d37 = fr(g, cow_bits2f(t33) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wr32(sp0 - 0x18u, t36);
                                t38 = rd32(ecx) + (rd16(ebp + 2u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x14u, t38);
                                wrf32(sp0 - 0x24u, (float)(double)(float)d37);
                                d39 = fr(g, cow_bits2f(t34) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x20u, (float)(double)(float)d39);
                                t40 = rd32(ecx) + (rd16(ebp + 4u) & 0x3fffu) * 0xcu;
                                d41 = fr(g, cow_bits2f(t35) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wr32(sp0 - 0x10u, t40);
                                wrf32(sp0 - 0x1cu, (float)(double)(float)d41);
                                d42 = fr(g, fr(g, fr(g, d41 * loc_64_f) + fr(g, (double)(float)d39 * loc_68_f)) + fr(g, (double)(float)d37 * loc_6c_f));
                                if (d42 == (double)rdf32(COW_IMG(0x103295d8u)))
                                {
                                    x0 = d42;
    COW_AT(1016a240)
                                }
                                else
                                {
                                    loc_24_f = (double)(float)d37;
                                    loc_20_f = (double)(float)d39;
                                    loc_1c_f = (double)(float)d41;
                                    loc_18 = t36;
                                    x0 = d42;
    COW_AT(10169f37)
                                    d43 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_1c_f * loc_88_f) + fr(g, loc_20_f * loc_8c_f)) + fr(g, loc_24_f * loc_90_f)) - fr(g, fr(g, fr(g, loc_1c_f * (double)rdf32(loc_18 + 8u)) + fr(g, loc_20_f * (double)rdf32(loc_18 + 4u))) + fr(g, loc_24_f * (double)rdf32(loc_18)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                    wrf32(sp0 - 0xa0u, (float)(double)(float)d43);
                                    if (!((double)(float)d43 < (double)rdf32(COW_IMG(0x103295d8u))))
                                    {
                                        eax = (loc_18 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d43, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                        loc_a0_f = (double)(float)d43;
    COW_AT(10169fab)
                                        if ((cow_fsw(g, loc_a0_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                        {
                                            eax = cow_fsw(g, loc_a0_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    COW_AT(10169fc2)
                                            wr32(sp0 - 0xc4u, sp0 - 0x48u);
                                            wr32(sp0 - 0xc8u, sp0 - 0x9cu);
                                            d44 = (double)(float)fr(g, fr(g, loc_a0_f * loc_6c_f) + loc_90_f);
                                            wrf32(sp0 - 0x9cu, (float)d44);
                                            d45 = (double)(float)fr(g, fr(g, loc_a0_f * loc_68_f) + loc_8c_f);
                                            wrf32(sp0 - 0x98u, (float)d45);
                                            d46 = (double)(float)fr(g, fr(g, loc_a0_f * loc_64_f) + loc_88_f);
                                            wrf32(sp0 - 0x94u, (float)d46);
                                            g->esp = sp0 - 0xc0u;
                                            t47 = cow_call_regs(g, COW_IMG(0x1016c390u), eax, g->ecx, g->edx, 0, 2, sp0 - 0x9cu, sp0 - 0x48u);
                                            eax = t47;
    COW_AT(1016a003)
                                            if ((uint8_t)eax == 0u) goto L_1016a233;
    COW_AT(1016a00b)
                                            d48 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
                                            wrf32(sp0 - 0x5cu, (float)(double)(float)d48);
                                            d49 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
                                            wrf32(sp0 - 0x58u, (float)(double)(float)d49);
                                            d50 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                            wrf32(sp0 - 0x54u, (float)(double)(float)d50);
                                            d51 = fr(g, (double)rdf32(arg1 + 8u) - (double)(float)d50);
                                            d52 = fr(g, (double)rdf32(arg1 + 4u) - (double)(float)d49);
                                            d53 = fr(g, (double)rdf32(arg1) - (double)(float)d48);
                                            d54 = (double)rdf32(sp0 - 0x74u);
                                            d55 = fr(g, fr(g, fr(g, d51 * d51) + fr(g, d52 * d52)) + fr(g, d53 * d53));
                                            if (d54 <= d55)
                                            {
                                                x0 = fr(g, fr(g, fr(g, d51 * d51) + fr(g, d52 * d52)) + fr(g, d53 * d53));
                                                goto L_1016a231;
                                            }
                                            loc_5c_f = (double)(float)d48;
                                            loc_58_f = (double)(float)d49;
                                            loc_54_f = (double)(float)d50;
                                            x0 = fr(g, fr(g, fr(g, d51 * d51) + fr(g, d52 * d52)) + fr(g, d53 * d53));
    COW_AT(1016a0ac)
                                            wrf32(sp0 - 0x74u, (float)(double)(float)x0);
                                            d56 = (double)rdf32(sp0 - 0x1cu);
                                            wr32(arg3, cow_f2bits(loc_5c_f));
                                            wr32(arg3 + 4u, cow_f2bits(loc_58_f));
                                            wr32(arg3 + 8u, cow_f2bits(loc_54_f));
                                            d57 = fr(g, fr(g, fr(g, d56 * (double)rdf32(esi + 0x98u)) + fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(esi + 0x8cu))) + fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(esi + 0x80u)));
                                            wrf32(self + 0x3413cu, (float)d57);
                                            d58 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(esi + 0x9cu)) + fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(esi + 0x90u))) + fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(esi + 0x84u)));
                                            wrf32(self + 0x34140u, (float)d58);
                                            d59 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(esi + 0xa0u)) + fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(esi + 0x94u))) + fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(esi + 0x88u)));
                                            wrf32(self + 0x34144u, (float)d59);
                                            t60 = (((rd16(ebp + 6u) >> 0xfu) * 2u | rd16(ebp + 4u) >> 0xfu) * 2u | rd16(ebp + 2u) >> 0xfu) * 2u | rd16(ebp) >> 0xfu;
                                            wr32(self + 0x34148u, t60);
                                            t61 = (uint32_t)((int32_t)(rd32(esi + 0xa4u) << 6u) >> 0xcu);
                                            wr32(self + 0x3414cu, t61);
                                            t62 = rd32(esi + 0xa4u) >> 2u & 1u;
                                            wr32(self + 0x34150u, t62);
                                            t63 = rd32(esi + 0xa4u);
                                            t64 = (t63 >> 0x1au & 3u) << 3u | (t63 >> 3u & 7u);
                                            wr32(self + 0x34154u, t64);
                                            t65 = rd32(esi + 0xb0u);
                                            wr32(self + 0x34158u, t65);
                                            t66 = rd8(esi + 0xacu);
                                            wr8(self + 0x3415cu, (uint8_t)t66);
                                            wr8(self + 0x3415du, rd8(esi + 0xadu));
                                            wr8(self + 0x3415eu, rd8(esi + 0xaeu));
                                            wr8(self + 0x3415fu, rd8(esi + 0xafu));
                                            t67 = rd32(esi + 0xa8u);
                                            wr32(self + 0x1807cu, t67);
                                            t68 = rd32(sp0 - 0x80u);
                                            wr8(sp0 - 0xadu, 1u);
                                            ecx = t68;
                                            loc_a4 = rd32(sp0 - 0xa4u);
                                            loc_a8 = rd32(sp0 - 0xa8u);
                                            loc_ac = rd32(sp0 - 0xacu);
                                            loc_60 = rd32(sp0 - 0x60u);
                                            loc_50 = rd32(sp0 - 0x50u);
                                            loc_4c = rd32(sp0 - 0x4cu);
                                            loc_70 = rd32(sp0 - 0x70u);
                                            loc_80 = rd32(sp0 - 0x80u);
                                            loc_84 = rd32(sp0 - 0x84u);
                                            loc_90_f = (double)rdf32(sp0 - 0x90u);
                                            loc_8c_f = (double)rdf32(sp0 - 0x8cu);
                                            loc_88_f = (double)rdf32(sp0 - 0x88u);
                                            loc_6c_f = (double)rdf32(sp0 - 0x6cu);
                                            loc_68_f = (double)rdf32(sp0 - 0x68u);
                                            loc_64_f = (double)rdf32(sp0 - 0x64u);
                                        }
                                    }
                                }
L_1016a242: ;
    COW_AT(1016a242)
                                wr32(sp0 - 0x84u, loc_84 + 1u);
                                if ((int32_t)(loc_84 + 1u) < (int16_t)rd16(ecx + 0xcu))
                                {
                                    eax = loc_84 + 1u;
                                    ebp = ebp + 8u;
                                    loc_74 = rd32(sp0 - 0x74u);
                                    loc_84 = loc_84 + 1u;
                                    goto L_10169e55;
                                }
    COW_AT(1016a25a)
                                edx = loc_4c;
                                loc_74 = rd32(sp0 - 0x74u);
                            }
                        }
                    }
                }
L_1016a25e: ;
    COW_AT(1016a25e)
                wr32(sp0 - 0x4cu, edx + 8u);
                wr32(sp0 - 0x70u, loc_70 - 1u);
                if (loc_70 != 1u)
                {
                    eax = loc_70 - 1u;
                    loc_4c = edx + 8u;
                    edx = edx + 8u;
                    loc_70 = loc_70 - 1u;
                    goto L_10169d28;
                }
                edx = edx + 8u;
            }
        }
        else
        {
            edx = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
    COW_AT(10169d14)
            edx = eax * 8u + edx;
        }
    COW_AT(1016a274)
        if (rd32(edx) != 0u)
        {
            eax = rd32(edx);
            goto L_10169cff;
        }
    COW_AT(1016a27e)
        ecx = loc_50;
        edx = loc_60;
L_1016a286: ;
    COW_AT(1016a286)
        wr32(sp0 - 0x50u, ecx + 1u);
        if ((int32_t)(ecx + 1u) <= (int32_t)loc_a8)
        {
            loc_50 = ecx + 1u;
            ecx = ecx + 1u;
            goto L_10169ce9;
        }
    COW_AT(1016a297)
        eax = loc_a4;
L_1016a29b: ;
    COW_AT(1016a29b)
        wr32(sp0 - 0x60u, edx + 1u);
        if ((int32_t)(edx + 1u) <= (int32_t)loc_ac)
        {
            loc_60 = edx + 1u;
            edx = edx + 1u;
            goto L_10169cd7;
        }
    }
    COW_AT(1016a2ac)
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xbcu);
    g->edi = rd32(sp0 - 0xc0u);
    g->ebp = rd32(sp0 - 0xb8u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0xadu);
L_1016a231: ;
    COW_AT(1016a231)
L_1016a233: ;
    COW_AT(1016a233)
    ecx = rd32(sp0 - 0x80u);
    loc_a4 = rd32(sp0 - 0xa4u);
    loc_a8 = rd32(sp0 - 0xa8u);
    loc_ac = rd32(sp0 - 0xacu);
    loc_60 = rd32(sp0 - 0x60u);
    loc_50 = rd32(sp0 - 0x50u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_70 = rd32(sp0 - 0x70u);
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_90_f = (double)rdf32(sp0 - 0x90u);
    loc_8c_f = (double)rdf32(sp0 - 0x8cu);
    loc_88_f = (double)rdf32(sp0 - 0x88u);
    loc_6c_f = (double)rdf32(sp0 - 0x6cu);
    loc_68_f = (double)rdf32(sp0 - 0x68u);
    loc_64_f = (double)rdf32(sp0 - 0x64u);
    goto L_1016a242;
L_1016a2bd: ;
    COW_AT(1016a2bd)
    g->ebx = loc_b4;
    g->esi = loc_bc;
    g->edi = loc_c0;
    g->ebp = loc_b8;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10169b40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10169b61u:
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
        in_edi = rd32(sp0 - 0xc0u);
        in_esi = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 0xb8u);
        in_ebx = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xc0u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10169b7fu:
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
        in_edi = rd32(sp0 - 0xc0u);
        in_esi = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 0xb8u);
        in_ebx = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10169b8cu:
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
        in_edi = rd32(sp0 - 0xc0u);
        in_esi = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 0xb8u);
        in_ebx = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10169b97u:
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
        uint32_t loc_78;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0xc0u);
        in_esi = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 0xb8u);
        in_ebx = rd32(sp0 - 0xb4u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10169ba7u:
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
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10169bb1u:
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
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10169bbau:
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
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10169bcbu:
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
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169bd5u:
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
        g->esp = sp0 - 0xc0u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169be0u:
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
        g->esp = sp0 - 0xc0u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169beau:
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
        g->esp = sp0 - 0xc0u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169bf1u:
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
        g->esp = sp0 - 0xc0u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169bf7u:
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
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c03u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c07u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c0eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c18u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c24u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c28u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c2fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c36u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c3du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c3fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c44u:
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
        g->esp = sp0 - 0xc0u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c4bu:
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
        g->esp = sp0 - 0xc0u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c51u:
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
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c5du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c61u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c72u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c7eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c82u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c89u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c8du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c94u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c96u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c97u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169c9bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169ca5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169cb0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169cb4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169cd3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_60;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        wr32(sp0 - 0x74u, 0x49742400u);
        (void)sp0;
        return 1;
    }
    case 0x10169cd7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169ce9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169cffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169d14u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169d1cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169d24u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169d28u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169d37u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169d53u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169d68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169d77u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169e55u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169f37u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169fabu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10169fc2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        (void)sp0;
        return 1;
    }
    case 0x1016a003u:
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
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        wr32(sp0 - 0xc4u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1016a00bu:
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
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        wr32(sp0 - 0xc4u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1016a0acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        wr32(sp0 - 0xc4u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1016a231u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        wr32(sp0 - 0xc4u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1016a233u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        wr32(sp0 - 0xc4u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1016a240u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a242u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a25au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
        double loc_64_f;
        double loc_68_f;
        double loc_6c_f;
        uint32_t loc_70;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        double loc_a0_f;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a25eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a274u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a27eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a286u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a297u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a29bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a2acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        uint32_t loc_4c;
        uint32_t loc_50;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        uint32_t loc_60;
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
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xc0u;
        (void)sp0;
        return 1;
    }
    case 0x1016a2bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xc0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10169b40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10169b40(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
