/* f_0x101693b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101693b0(Guest* g)
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
    case 0x101693d1u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 0xb8u); in_ebx = rd32(sp0 - 0xb4u); g->ebp = rd32(sp0 - 0xb8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_101693d1;
    case 0x101693efu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 0xb8u); in_ebx = rd32(sp0 - 0xb4u); g->ebp = rd32(sp0 - 0xb8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_101693ef;
    case 0x101693fcu: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 0xb8u); in_ebx = rd32(sp0 - 0xb4u); g->ebp = rd32(sp0 - 0xb8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_101693fc;
    case 0x10169407u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 0xb8u); in_ebx = rd32(sp0 - 0xb4u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0xb8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_10169407;
    case 0x10169417u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_10169417;
    case 0x10169421u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_10169421;
    case 0x1016942au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_1016942a;
    case 0x1016943bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016943b;
    case 0x10169445u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169445;
    case 0x10169450u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169450;
    case 0x1016945au: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016945a;
    case 0x10169461u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169461;
    case 0x10169467u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169467;
    case 0x10169473u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169473;
    case 0x10169477u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169477;
    case 0x1016947eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1016947e;
    case 0x10169488u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_10169488;
    case 0x10169494u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169494;
    case 0x10169498u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169498;
    case 0x1016949fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016949f;
    case 0x101694a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_101694a6;
    case 0x101694adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_101694ad;
    case 0x101694afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_101694af;
    case 0x101694b4u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101694b4;
    case 0x101694bbu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101694bb;
    case 0x101694c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101694c1;
    case 0x101694cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_101694cd;
    case 0x101694d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_101694d1;
    case 0x101694d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_101694d8;
    case 0x101694e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_101694e2;
    case 0x101694eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_101694ee;
    case 0x101694f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_101694f2;
    case 0x101694f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_101694f9;
    case 0x101694fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_101694fd;
    case 0x10169504u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169504;
    case 0x10169506u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169506;
    case 0x10169507u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169507;
    case 0x1016950bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016950b;
    case 0x10169515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169515;
    case 0x10169520u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169520;
    case 0x10169524u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10169524;
    case 0x10169543u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_60 = rd32(sp0 - 0x60u); goto E_10169543;
    case 0x10169547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169547;
    case 0x10169559u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169559;
    case 0x1016956fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016956f;
    case 0x10169584u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169584;
    case 0x1016958cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016958c;
    case 0x10169594u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169594;
    case 0x10169598u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169598;
    case 0x101695a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101695a7;
    case 0x101695c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101695c3;
    case 0x101695d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101695d8;
    case 0x101695e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101695e7;
    case 0x101696c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101696c5;
    case 0x101697a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101697a7;
    case 0x1016981bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1016981b;
    case 0x10169832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169832;
    case 0x10169873u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10169873;
    case 0x1016987bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016987b;
    case 0x1016991cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016991c;
    case 0x10169aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10169aa1;
    case 0x10169aa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); goto E_10169aa3;
    case 0x10169ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10169ab0;
    case 0x10169ab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169ab2;
    case 0x10169acau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169aca;
    case 0x10169aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169ace;
    case 0x10169ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169ae4;
    case 0x10169aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169aee;
    case 0x10169af6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169af6;
    case 0x10169b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169b07;
    case 0x10169b0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169b0b;
    case 0x10169b1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64_f = rdf32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10169b1c;
    case 0x10169b2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10169b2d;
    default: break;
    }
#endif

    COW_AT(101693b0)
    wr32(sp0 - 0xb4u, in_ebx);
    wr32(sp0 - 0xb8u, in_ebp);
    wr32(sp0 - 0xbcu, in_esi);
    wr32(sp0 - 0xc0u, in_edi);
    t1 = rd32(self + 0x60u);
    wr32(self + 0x1807cu, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
        loc_b4 = in_ebx;
        loc_b8 = in_ebp;
        loc_bc = in_esi;
        loc_c0 = in_edi;
        goto L_10169b2d;
    }
    eax = t1;
    COW_AT(101693d1)
    d2 = (double)rdf32(arg1 + 4u);
    d3 = (double)rdf32(arg2 + 4u);
    if (!(d2 < d3))
    {
        eax = rd32(arg1 + 4u);
    COW_AT(101693fc)
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
    COW_AT(101693ef)
        wr32(sp0 - 0x7cu, eax);
        t4 = rd32(arg2 + 4u);
        wr32(sp0 - 0x78u, t4);
        ecx = t4;
        edx = in_edx;
        loc_7c = eax;
        loc_78 = t4;
    }
    COW_AT(10169407)
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
    COW_AT(10169417)
    if ((int32_t)eax < 0)
    {
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_10169b2d;
    }
    ebp = eax;
    COW_AT(10169421)
    if ((int32_t)ebp >= (int32_t)rd32(self + 0x48u))
    {
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_10169b2d;
    }
    COW_AT(1016942a)
    g->ecx = ecx;
    d10 = fr(g, fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d10);
    g->esp = sp0 - 0xc0u;
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    COW_AT(1016943b)
    if ((int32_t)eax < 0)
    {
        edx = 0u;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_10169b2d;
    }
    COW_AT(10169445)
    if ((int32_t)eax >= (int32_t)rd32(self + 0x4cu))
    {
        edx = 0u;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_10169b2d;
    }
    esi = rd32(self + 0x4cu);
    COW_AT(10169450)
    if (rd8(self + 0x3413au) == 0u)
    {
    COW_AT(101694b4)
        if ((int32_t)(ebp - 1u) >= 0)
        {
            ecx = ebp - 1u;
    COW_AT(101694c1)
            t15 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa4u, t15);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a4 = t15;
            }
            else
            {
    COW_AT(101694cd)
                wr32(sp0 - 0xa4u, ecx);
                loc_a4 = ecx;
            }
        }
        else
        {
    COW_AT(101694bb)
            wr32(sp0 - 0xa4u, 0u);
            loc_a4 = 0u;
        }
    COW_AT(101694d1)
        if ((int32_t)(ebp + 1u) >= 0)
        {
            ecx = ebp + 1u;
    COW_AT(101694e2)
            t16 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa8u, t16);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a8 = t16;
            }
            else
            {
    COW_AT(101694ee)
                wr32(sp0 - 0xa8u, ecx);
                loc_a8 = ecx;
            }
        }
        else
        {
    COW_AT(101694d8)
            wr32(sp0 - 0xa8u, 0u);
            loc_a8 = 0u;
        }
    COW_AT(101694f2)
        if ((int32_t)(eax - 1u) >= 0)
        {
            ecx = eax - 1u;
    COW_AT(101694fd)
            if ((int32_t)ecx > (int32_t)(esi - 1u))
            {
                edx = esi - 1u;
    COW_AT(10169504)
                ecx = edx;
            }
        }
        else
        {
    COW_AT(101694f9)
            ecx = 0u;
        }
    COW_AT(10169506)
        eax = eax + 1u;
    }
    else
    {
    COW_AT(1016945a)
        if ((int32_t)(ebp - 2u) >= 0)
        {
            ecx = ebp - 2u;
    COW_AT(10169467)
            t13 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa4u, t13);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a4 = t13;
            }
            else
            {
    COW_AT(10169473)
                wr32(sp0 - 0xa4u, ecx);
                loc_a4 = ecx;
            }
        }
        else
        {
    COW_AT(10169461)
            wr32(sp0 - 0xa4u, 0u);
            loc_a4 = 0u;
        }
    COW_AT(10169477)
        if ((int32_t)(ebp + 2u) >= 0)
        {
            ecx = ebp + 2u;
    COW_AT(10169488)
            t14 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0xa8u, t14);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                loc_a8 = t14;
            }
            else
            {
    COW_AT(10169494)
                wr32(sp0 - 0xa8u, ecx);
                loc_a8 = ecx;
            }
        }
        else
        {
    COW_AT(1016947e)
            wr32(sp0 - 0xa8u, 0u);
            loc_a8 = 0u;
        }
    COW_AT(10169498)
        if ((int32_t)(eax - 2u) >= 0)
        {
            ecx = eax - 2u;
    COW_AT(101694a6)
            if ((int32_t)ecx > (int32_t)(esi - 1u))
            {
                edx = esi - 1u;
    COW_AT(101694ad)
                ecx = edx;
            }
    COW_AT(101694af)
            eax = eax + 2u;
        }
        else
        {
    COW_AT(1016949f)
            eax = eax + 2u;
            ecx = 0u;
        }
    }
    COW_AT(10169507)
    if ((int32_t)eax >= 0)
    {
    COW_AT(10169515)
        wr32(sp0 - 0xacu, esi - 1u);
        if ((int32_t)eax > (int32_t)(esi - 1u))
        {
            loc_ac = esi - 1u;
        }
        else
        {
    COW_AT(10169520)
            wr32(sp0 - 0xacu, eax);
            loc_ac = eax;
        }
    }
    else
    {
    COW_AT(1016950b)
        wr32(sp0 - 0xacu, 0u);
        loc_ac = 0u;
    }
    COW_AT(10169524)
    wr32(sp0 - 0x74u, 0x49742400u);
    wr8(sp0 - 0xadu, 0u);
    wr32(sp0 - 0x60u, ecx);
    if ((int32_t)ecx > (int32_t)loc_ac)
    {
        eax = loc_ac;
        edx = ecx;
    }
    else
    {
        edx = ecx;
        loc_60 = ecx;
    COW_AT(10169543)
        eax = loc_a4;
        loc_74 = 0x49742400u;
L_10169547: ;
    COW_AT(10169547)
        wr32(sp0 - 0x50u, eax);
        if ((int32_t)eax > (int32_t)loc_a8) goto L_10169b0b;
        ecx = eax;
        loc_50 = eax;
L_10169559: ;
    COW_AT(10169559)
        if (rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u) == 0u) goto L_10169af6;
        eax = rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u);
L_1016956f: ;
    COW_AT(1016956f)
        wr32(sp0 - 0x4cu, eax + 4u);
        if ((rd32(eax) >> 8u & 0x20u) == 0u)
        {
            edx = eax + 4u;
            loc_4c = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
    COW_AT(1016958c)
            if ((int32_t)eax > 0)
            {
    COW_AT(10169594)
                wr32(sp0 - 0x70u, eax);
                loc_70 = eax;
L_10169598: ;
    COW_AT(10169598)
                t17 = rd32(edx + 4u);
                wr32(sp0 - 0x80u, t17);
                if (rd32(edx + 4u) != 0u)
                {
                    ecx = t17;
                    loc_80 = t17;
    COW_AT(101695a7)
                    d18 = (double)rdf32(rd32(edx) + 0xb4u);
                    d19 = (double)rdf32(sp0 - 0x78u);
                    if ((cow_fsw(g, d18, d19, 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
                        ebp = rd32(ecx + 8u);
                        esi = rd32(edx);
    COW_AT(101695c3)
                        d20 = (double)rdf32(esi + 0xb8u);
                        d21 = (double)rdf32(sp0 - 0x7cu);
                        if (!(d20 < d21))
                        {
    COW_AT(101695d8)
                            if (rd32(self + 4u) != rd32(esi + 0xbcu))
                            {
    COW_AT(101695e7)
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
                                if ((int16_t)rd16(ecx + 0xcu) <= 0) goto L_10169ace;
                                eax = arg1;
                                loc_84 = 0u;
                                loc_90_f = (double)(float)d24;
                                loc_8c_f = (double)(float)d25;
                                loc_88_f = (double)(float)d26;
                                loc_6c_f = d30;
                                loc_68_f = d31;
                                loc_64_f = d32;
L_101696c5: ;
    COW_AT(101696c5)
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
    COW_AT(10169ab0)
                                }
                                else
                                {
                                    loc_24_f = (double)(float)d37;
                                    loc_20_f = (double)(float)d39;
                                    loc_1c_f = (double)(float)d41;
                                    loc_18 = t36;
                                    x0 = d42;
    COW_AT(101697a7)
                                    d43 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_1c_f * loc_88_f) + fr(g, loc_20_f * loc_8c_f)) + fr(g, loc_24_f * loc_90_f)) - fr(g, fr(g, fr(g, loc_1c_f * (double)rdf32(loc_18 + 8u)) + fr(g, loc_20_f * (double)rdf32(loc_18 + 4u))) + fr(g, loc_24_f * (double)rdf32(loc_18)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                    wrf32(sp0 - 0xa0u, (float)(double)(float)d43);
                                    if (!((double)(float)d43 < (double)rdf32(COW_IMG(0x103295d8u))))
                                    {
                                        eax = (loc_18 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d43, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                        loc_a0_f = (double)(float)d43;
    COW_AT(1016981b)
                                        if ((cow_fsw(g, loc_a0_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                        {
                                            eax = cow_fsw(g, loc_a0_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    COW_AT(10169832)
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
    COW_AT(10169873)
                                            if ((uint8_t)eax == 0u) goto L_10169aa3;
    COW_AT(1016987b)
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
                                                goto L_10169aa1;
                                            }
                                            loc_5c_f = (double)(float)d48;
                                            loc_58_f = (double)(float)d49;
                                            loc_54_f = (double)(float)d50;
                                            x0 = fr(g, fr(g, fr(g, d51 * d51) + fr(g, d52 * d52)) + fr(g, d53 * d53));
    COW_AT(1016991c)
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
L_10169ab2: ;
    COW_AT(10169ab2)
                                wr32(sp0 - 0x84u, loc_84 + 1u);
                                if ((int32_t)(loc_84 + 1u) < (int16_t)rd16(ecx + 0xcu))
                                {
                                    eax = loc_84 + 1u;
                                    ebp = ebp + 8u;
                                    loc_74 = rd32(sp0 - 0x74u);
                                    loc_84 = loc_84 + 1u;
                                    goto L_101696c5;
                                }
    COW_AT(10169aca)
                                edx = loc_4c;
                                loc_74 = rd32(sp0 - 0x74u);
                            }
                        }
                    }
                }
L_10169ace: ;
    COW_AT(10169ace)
                wr32(sp0 - 0x4cu, edx + 8u);
                wr32(sp0 - 0x70u, loc_70 - 1u);
                if (loc_70 != 1u)
                {
                    eax = loc_70 - 1u;
                    loc_4c = edx + 8u;
                    edx = edx + 8u;
                    loc_70 = loc_70 - 1u;
                    goto L_10169598;
                }
                edx = edx + 8u;
            }
        }
        else
        {
            edx = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
    COW_AT(10169584)
            edx = eax * 8u + edx;
        }
    COW_AT(10169ae4)
        if (rd32(edx) != 0u)
        {
            eax = rd32(edx);
            goto L_1016956f;
        }
    COW_AT(10169aee)
        ecx = loc_50;
        edx = loc_60;
L_10169af6: ;
    COW_AT(10169af6)
        wr32(sp0 - 0x50u, ecx + 1u);
        if ((int32_t)(ecx + 1u) <= (int32_t)loc_a8)
        {
            loc_50 = ecx + 1u;
            ecx = ecx + 1u;
            goto L_10169559;
        }
    COW_AT(10169b07)
        eax = loc_a4;
L_10169b0b: ;
    COW_AT(10169b0b)
        wr32(sp0 - 0x60u, edx + 1u);
        if ((int32_t)(edx + 1u) <= (int32_t)loc_ac)
        {
            loc_60 = edx + 1u;
            edx = edx + 1u;
            goto L_10169547;
        }
        edx = edx + 1u;
    }
    COW_AT(10169b1c)
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xbcu);
    g->edi = rd32(sp0 - 0xc0u);
    g->ebp = rd32(sp0 - 0xb8u);
    g->edx = edx;
    return (eax & 0xffffff00u) | rd8(sp0 - 0xadu);
L_10169aa1: ;
    COW_AT(10169aa1)
L_10169aa3: ;
    COW_AT(10169aa3)
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
    goto L_10169ab2;
L_10169b2d: ;
    COW_AT(10169b2d)
    g->ebx = loc_b4;
    g->esi = loc_bc;
    g->edi = loc_c0;
    g->ebp = loc_b8;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101693b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101693d1u:
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
    case 0x101693efu:
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
    case 0x101693fcu:
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
    case 0x10169407u:
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
    case 0x10169417u:
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
    case 0x10169421u:
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
    case 0x1016942au:
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
    case 0x1016943bu:
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
    case 0x10169445u:
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
    case 0x10169450u:
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
    case 0x1016945au:
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
    case 0x10169461u:
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
    case 0x10169467u:
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
    case 0x10169473u:
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
    case 0x10169477u:
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
    case 0x1016947eu:
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
    case 0x10169488u:
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
    case 0x10169494u:
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
    case 0x10169498u:
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
    case 0x1016949fu:
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
    case 0x101694a6u:
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
    case 0x101694adu:
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
    case 0x101694afu:
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
    case 0x101694b4u:
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
    case 0x101694bbu:
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
    case 0x101694c1u:
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
    case 0x101694cdu:
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
    case 0x101694d1u:
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
    case 0x101694d8u:
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
    case 0x101694e2u:
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
    case 0x101694eeu:
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
    case 0x101694f2u:
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
    case 0x101694f9u:
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
    case 0x101694fdu:
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
    case 0x10169504u:
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
    case 0x10169506u:
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
    case 0x10169507u:
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
    case 0x1016950bu:
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
    case 0x10169515u:
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
    case 0x10169520u:
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
    case 0x10169524u:
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
    case 0x10169543u:
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
    case 0x10169547u:
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
    case 0x10169559u:
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
    case 0x1016956fu:
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
    case 0x10169584u:
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
    case 0x1016958cu:
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
    case 0x10169594u:
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
    case 0x10169598u:
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
    case 0x101695a7u:
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
    case 0x101695c3u:
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
    case 0x101695d8u:
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
    case 0x101695e7u:
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
    case 0x101696c5u:
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
    case 0x101697a7u:
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
    case 0x1016981bu:
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
    case 0x10169832u:
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
    case 0x10169873u:
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
    case 0x1016987bu:
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
    case 0x1016991cu:
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
    case 0x10169aa1u:
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
    case 0x10169aa3u:
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
    case 0x10169ab0u:
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
    case 0x10169ab2u:
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
    case 0x10169acau:
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
    case 0x10169aceu:
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
    case 0x10169ae4u:
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
    case 0x10169aeeu:
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
    case 0x10169af6u:
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
    case 0x10169b07u:
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
    case 0x10169b0bu:
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
    case 0x10169b1cu:
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
    case 0x10169b2du:
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
void cow_adapter_101693b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101693b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
