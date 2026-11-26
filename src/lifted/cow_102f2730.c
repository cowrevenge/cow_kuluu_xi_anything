/* f_0x102f2730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102f2730(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d19;
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
    double d35;
    double d36;
    double d47;
    double d48;
    double d49;
    double d5;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d59;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d67;
    double d68;
    double d69;
    double d7;
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
    double d9;
    double d90;
    double d91;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_10_f;
    uint32_t loc_14;
    double loc_14_f;
    uint32_t loc_1c;
    double loc_1c_f;
    double loc_20_f;
    uint32_t loc_24;
    double loc_24_f;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    double loc_34_f;
    double loc_3c_f;
    double loc_40_f;
    double loc_44_f;
    uint32_t loc_48;
    double loc_48_f;
    double loc_50_f;
    double loc_54_f;
    double loc_58_f;
    double loc_5c_f;
    double loc_64_f;
    uint32_t loc_68;
    uint32_t loc_6c;
    double loc_74_f;
    double loc_78_f;
    double loc_7c_f;
    uint32_t loc_84;
    uint32_t loc_c;
    double loc_c_f;
    uint32_t t1;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
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
    uint32_t t58;
    uint32_t t6;
    uint32_t t65;
    uint32_t t66;
    uint32_t t8;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
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
    cow_frame(g, sp0, 216u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f2741u: in_eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102f2741;
    case 0x102f2751u: in_eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102f2751;
    case 0x102f275fu: in_eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102f275f;
    case 0x102f278cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f278c;
    case 0x102f2799u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2799;
    case 0x102f279fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f279f;
    case 0x102f27acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27ac;
    case 0x102f27b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27b2;
    case 0x102f27beu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27be;
    case 0x102f27c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27c3;
    case 0x102f27d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27d0;
    case 0x102f27d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27d6;
    case 0x102f27e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27e0;
    case 0x102f27e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27e5;
    case 0x102f27f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27f1;
    case 0x102f27f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27f6;
    case 0x102f27fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f27fb;
    case 0x102f2839u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102f2839;
    case 0x102f2861u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102f2861;
    case 0x102f28b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f28b9;
    case 0x102f2926u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102f2926;
    case 0x102f292fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f292f;
    case 0x102f293cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f293c;
    case 0x102f2942u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f2942;
    case 0x102f2948u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f2948;
    case 0x102f294fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f294f;
    case 0x102f295eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f295e;
    case 0x102f2963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f2963;
    case 0x102f296fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f296f;
    case 0x102f297fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f297f;
    case 0x102f29a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f29a3;
    case 0x102f29b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f29b5;
    case 0x102f29bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xd0u); loc_84 = rd32(sp0 - 0x84u); loc_7c_f = rdf32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0xd0u); goto E_102f29bb;
    case 0x102f29c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102f29c3;
    case 0x102f29cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f29cd;
    case 0x102f29d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f29d1;
    case 0x102f29deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f29de;
    case 0x102f2a15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2a15;
    case 0x102f2a4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_102f2a4d;
    case 0x102f2a95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2a95;
    case 0x102f2ac0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2ac0;
    case 0x102f2ac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2ac5;
    case 0x102f2ae2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2ae2;
    case 0x102f2b7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2b7f;
    case 0x102f2b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2b8f;
    case 0x102f2bb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2bb7;
    case 0x102f2bc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2bc7;
    case 0x102f2befu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2bef;
    case 0x102f2bfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2bfe;
    case 0x102f2c0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2c0d;
    case 0x102f2c1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2c1c;
    case 0x102f2c2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2c2b;
    case 0x102f2c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2c3a;
    case 0x102f2c49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2c49;
    case 0x102f2c56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2c56;
    case 0x102f2c58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_102f2c58;
    case 0x102f2c5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_78_f = rdf32(sp0 - 0x78u); loc_64_f = rdf32(sp0 - 0x64u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102f2c5e;
    case 0x102f2c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102f2c8d;
    case 0x102f2c8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102f2c8e;
    default: break;
    }
#endif

    COW_AT(102f2730)
    wr32(sp0 - 4u, in_ebp);
    t1 = rd32(sp0 + 0x10u);
    if (t1 != 3u)
    {
    COW_AT(102f2751)
        wr32(sp0 - 0x6cu, COW_IMG(0x103483bcu));
        wr32(sp0 - 0x68u, COW_IMG(0x103483acu));
        loc_6c = COW_IMG(0x103483bcu);
        loc_68 = COW_IMG(0x103483acu);
    }
    else
    {
    COW_AT(102f2741)
        wr32(sp0 - 0x6cu, COW_IMG(0x103483d8u));
        wr32(sp0 - 0x68u, COW_IMG(0x103483ccu));
        loc_6c = COW_IMG(0x103483d8u);
        loc_68 = COW_IMG(0x103483ccu);
    }
    COW_AT(102f275f)
    wr32(sp0 - 0xc8u, in_esi);
    wr32(sp0 - 0xccu, in_edi);
    wrf32(sp0 - 0x24u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x20u, (float)(double)(float)0.0);
    esi = COW_IMG(0x103cd420u);
    edi = sp0 - 0x14u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1cu, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(sp0 - 0xd0u, 0x10u);
    t2 = rd32(sp0 + 0xcu) + 8u;
    wr32(sp0 - 0x84u, t2);
    eax = in_eax;
    ecx = t2;
    edx = 0x10u;
    esi = t2;
    loc_84 = t2;
    loc_14 = rd32(sp0 - 0x14u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    loc_24 = rd32(sp0 - 0x24u);
    loc_1c = rd32(sp0 - 0x1cu);
    x0 = 0.0;
L_102f278c: ;
    COW_AT(102f278c)
    d3 = (double)rdf32(ecx - 8u);
    if (!(d3 < cow_bits2f(loc_14)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, cow_bits2f(loc_14), 1u);
    }
    else
    {
    COW_AT(102f2799)
        t4 = rd32(ecx - 8u);
        wr32(sp0 - 0x14u, t4);
        eax = t4;
        loc_14 = t4;
    }
    COW_AT(102f279f)
    d5 = (double)rdf32(ecx - 4u);
    if (!(d5 < cow_bits2f(loc_10)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, cow_bits2f(loc_10), 1u);
    }
    else
    {
    COW_AT(102f27ac)
        t6 = rd32(ecx - 4u);
        wr32(sp0 - 0x10u, t6);
        eax = t6;
        loc_10 = t6;
    }
    COW_AT(102f27b2)
    if (!((double)rdf32(ecx) < cow_bits2f(loc_c)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), cow_bits2f(loc_c), 1u);
    }
    else
    {
    COW_AT(102f27be)
        wr32(sp0 - 0xcu, rd32(ecx));
        eax = rd32(ecx);
        loc_c = rd32(ecx);
    }
    COW_AT(102f27c3)
    d7 = (double)rdf32(ecx - 8u);
    if ((cow_fsw(g, d7, cow_bits2f(loc_24), 1u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, cow_bits2f(loc_24), 1u);
    }
    else
    {
    COW_AT(102f27d0)
        t8 = rd32(ecx - 8u);
        wr32(sp0 - 0x24u, t8);
        eax = t8;
        loc_24 = t8;
    }
    COW_AT(102f27d6)
    d9 = (double)rdf32(ecx - 4u);
    if (!(x0 < d9))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d9, 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d9, 1u);
    COW_AT(102f27e0)
        x0 = (double)rdf32(ecx - 4u);
    }
    COW_AT(102f27e5)
    if ((cow_fsw(g, (double)rdf32(ecx), cow_bits2f(loc_1c), 1u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), cow_bits2f(loc_1c), 1u);
    }
    else
    {
    COW_AT(102f27f1)
        wr32(sp0 - 0x1cu, rd32(ecx));
        eax = rd32(ecx);
        loc_1c = rd32(ecx);
    }
    COW_AT(102f27f6)
    if (edx != 1u)
    {
        ecx = ecx + 0x10u;
        edx = edx - 1u;
        goto L_102f278c;
    }
    edx = edx - 1u;
    COW_AT(102f27fb)
    wrf32(sp0 - 0x20u, (float)(double)(float)x0);
    d10 = (double)(float)fr(g, cow_bits2f(loc_24) - cow_bits2f(loc_14));
    wrf32(sp0 - 0x44u, (float)d10);
    d11 = (double)(float)fr(g, x0 - cow_bits2f(loc_10));
    wrf32(sp0 - 0x40u, (float)d11);
    d12 = fr(g, cow_bits2f(loc_1c) - cow_bits2f(loc_c));
    d13 = fr(g, fr(g, fr(g, d12 * d12) + fr(g, d11 * d11)) + fr(g, d10 * d10));
    wrf32(sp0 - 0x48u, (float)(double)(float)d13);
    if (!(d13 < (double)rdf32(COW_IMG(0x1032ac8cu))))
    {
        loc_20_f = (double)(float)x0;
        loc_44_f = d10;
        loc_40_f = d11;
        loc_48_f = (double)(float)d13;
        x2 = d13;
        x1 = d12;
    COW_AT(102f2861)
        d19 = (double)(float)fr(g, loc_44_f * fr(g, 1.0 / x2));
        wrf32(sp0 - 0x7cu, (float)d19);
        d20 = (double)(float)fr(g, loc_40_f * fr(g, 1.0 / x2));
        wrf32(sp0 - 0x78u, (float)d20);
        d21 = (double)(float)fr(g, fr(g, 1.0 / x2) * x1);
        wrf32(sp0 - 0x74u, (float)d21);
        d22 = fr(g, fr(g, cow_bits2f(loc_24) + cow_bits2f(loc_14)) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x58u, (float)(double)(float)d22);
        d23 = fr(g, fr(g, x0 + cow_bits2f(loc_10)) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x54u, (float)(double)(float)d23);
        d24 = fr(g, fr(g, cow_bits2f(loc_1c) + cow_bits2f(loc_c)) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x50u, (float)(double)(float)d24);
        wrf32(sp0 - 0x28u, (float)(double)(float)0.0);
        wrf32(sp0 - 0x2cu, (float)(double)(float)0.0);
        wrf32(sp0 - 0x30u, (float)(double)(float)0.0);
        eax = esi;
        ecx = 0x10u;
        loc_7c_f = d19;
        loc_78_f = d20;
        loc_74_f = d21;
        loc_58_f = (double)(float)d22;
        loc_54_f = (double)(float)d23;
        loc_50_f = (double)(float)d24;
        loc_28_f = (double)(float)0.0;
        loc_2c_f = (double)(float)0.0;
        loc_30_f = (double)(float)0.0;
        x1 = 0.0;
L_102f28b9: ;
    COW_AT(102f28b9)
        d25 = fr(g, fr(g, (double)rdf32(eax - 8u) - loc_58_f) * loc_7c_f);
        wrf32(sp0 - 0x44u, (float)(double)(float)d25);
        d26 = fr(g, fr(g, (double)rdf32(eax - 4u) - loc_54_f) * loc_78_f);
        wrf32(sp0 - 0x40u, (float)(double)(float)d26);
        d27 = fr(g, fr(g, (double)(float)d26 + fr(g, fr(g, (double)rdf32(eax) - loc_50_f) * loc_74_f)) + (double)(float)d25);
        d28 = fr(g, fr(g, (double)(float)d26 + (double)(float)d25) - fr(g, fr(g, (double)rdf32(eax) - loc_50_f) * loc_74_f));
        d29 = fr(g, fr(g, (double)rdf32(eax) - loc_50_f) * loc_74_f);
        d30 = (double)(float)fr(g, fr(g, d28 * d28) + loc_30_f);
        wrf32(sp0 - 0x30u, (float)d30);
        d31 = fr(g, (double)(float)d25 - (double)(float)d26);
        d32 = fr(g, d31 + d29);
        d33 = (double)(float)fr(g, fr(g, d32 * d32) + loc_2c_f);
        wrf32(sp0 - 0x2cu, (float)d33);
        d34 = fr(g, d31 - d29);
        d35 = (double)(float)fr(g, fr(g, d34 * d34) + loc_28_f);
        wrf32(sp0 - 0x28u, (float)d35);
        if (ecx != 1u)
        {
            eax = eax + 0x10u;
            ecx = ecx - 1u;
            loc_28_f = d35;
            loc_2c_f = d33;
            loc_30_f = d30;
            x1 = fr(g, x1 + fr(g, d27 * d27));
            goto L_102f28b9;
        }
        eax = eax + 0x10u;
        x1 = fr(g, x1 + fr(g, d27 * d27));
    COW_AT(102f2926)
        wr32(sp0 - 0xd0u, in_ebx);
        wrf32(sp0 - 0x34u, (float)(double)(float)x1);
        edx = 1u;
        ebx = 0u;
L_102f292f: ;
    COW_AT(102f292f)
        d36 = (double)rdf32(edx * 4u + sp0 - 0x34u);
        if (!(x1 < d36))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, d36, 2u);
            ecx = edx * 4u + sp0 - 0x34u;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, d36, 2u);
            ecx = edx * 4u + sp0 - 0x34u;
    COW_AT(102f293c)
            ebx = edx;
            x1 = (double)rdf32(ecx);
        }
    COW_AT(102f2942)
        if (edx + 1u < 4u)
        {
            edx = edx + 1u;
            goto L_102f292f;
        }
        edx = edx + 1u;
    COW_AT(102f2948)
        if ((ebx & 2u) != 0u)
        {
    COW_AT(102f294f)
            wrf32(sp0 - 0x10u, (float)(double)(float)x0);
            wr32(sp0 - 0x60u, loc_10);
            wrf32(sp0 - 0x20u, (float)(double)(float)cow_bits2f(loc_10));
            eax = loc_10;
            loc_20_f = (double)(float)cow_bits2f(loc_10);
            x0 = cow_bits2f(loc_10);
        }
    COW_AT(102f295e)
        if (ebx & 1u)
        {
    COW_AT(102f2963)
            wrf32(sp0 - 0x1cu, (float)(double)(float)cow_bits2f(loc_c));
            wr32(sp0 - 0xcu, loc_1c);
            eax = loc_1c;
            loc_c = loc_1c;
        }
    COW_AT(102f296f)
        if (!(loc_48_f < (double)rdf32(COW_IMG(0x10330250u))))
        {
    COW_AT(102f29a3)
            t42 = rd32(sp0 + 0x10u) - 1u;
            t43 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, t42);
            if ((int32_t)(t43 - 1u) >= 0)
            {
                eax = t42;
                ebx = t43;
                x0 = (double)(int32_t)rd32(sp0 + 0x10u);
            }
            else
            {
                eax = t42;
                ebx = t43;
                x0 = (double)(int32_t)rd32(sp0 + 0x10u);
    COW_AT(102f29b5)
                x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
            }
    COW_AT(102f29bb)
            wrf32(sp0 - 0x60u, (float)(double)(float)x0);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xd0u;
            COW_RET(0x102f29c3u);
            t44 = cow_thiscall(g, COW_IMG(0x102f22efu), ecx, 0);
            t45 = g->edx;
            eax = t44;
            edx = t45;
    COW_AT(102f29c3)
            t46 = rd32(sp0 - 0x48u);
            wr32(sp0 - 0x48u, 0u);
            loc_48 = 0u;
            loc_14_f = (double)rdf32(sp0 - 0x14u);
            loc_10_f = (double)rdf32(sp0 - 0x10u);
            loc_c_f = (double)rdf32(sp0 - 0xcu);
            loc_24_f = (double)rdf32(sp0 - 0x24u);
            loc_20_f = (double)rdf32(sp0 - 0x20u);
            loc_1c_f = (double)rdf32(sp0 - 0x1cu);
            x0 = (double)rdf32(COW_IMG(0x103483a8u));
L_102f29cd: ;
    COW_AT(102f29cd)
            if (ebx != 0u)
            {
    COW_AT(102f29d1)
                eax = rd32(sp0 - 0x6cu);
                ecx = sp0 - 0xc0u;
                edx = rd32(sp0 - 0x68u) - rd32(sp0 - 0x6cu);
                esi = ebx;
L_102f29de: ;
    COW_AT(102f29de)
                d47 = fr(g, fr(g, loc_14_f * (double)rdf32(eax)) + fr(g, loc_24_f * (double)rdf32(eax + edx)));
                wrf32(ecx - 4u, (float)d47);
                d48 = fr(g, fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(eax)) + fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(eax + edx)));
                wrf32(ecx, (float)d48);
                d49 = fr(g, fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(eax)) + fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(eax + edx)));
                wrf32(ecx + 4u, (float)d49);
                if (esi != 1u)
                {
                    eax = eax + 4u;
                    ecx = ecx + 0x10u;
                    esi = esi - 1u;
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_14_f = (double)rdf32(sp0 - 0x14u);
                    loc_10_f = (double)rdf32(sp0 - 0x10u);
                    loc_c_f = (double)rdf32(sp0 - 0xcu);
                    loc_24_f = (double)rdf32(sp0 - 0x24u);
                    loc_20_f = (double)rdf32(sp0 - 0x20u);
                    loc_1c_f = (double)rdf32(sp0 - 0x1cu);
                    goto L_102f29de;
                }
                eax = eax + 4u;
                loc_48 = rd32(sp0 - 0x48u);
                loc_14_f = (double)rdf32(sp0 - 0x14u);
                loc_10_f = (double)rdf32(sp0 - 0x10u);
                loc_c_f = (double)rdf32(sp0 - 0xcu);
                loc_24_f = (double)rdf32(sp0 - 0x24u);
                loc_20_f = (double)rdf32(sp0 - 0x20u);
                loc_1c_f = (double)rdf32(sp0 - 0x1cu);
            }
    COW_AT(102f2a15)
            d50 = (double)(float)fr(g, loc_20_f - loc_10_f);
            wrf32(sp0 - 0x40u, (float)d50);
            d51 = fr(g, loc_1c_f - loc_c_f);
            d52 = fr(g, loc_24_f - loc_14_f);
            d53 = fr(g, fr(g, fr(g, d51 * d51) + fr(g, d50 * d50)) + fr(g, d52 * d52));
            if (d53 < (double)rdf32(COW_IMG(0x10330250u)))
            {
                x3 = d53;
                x2 = d51;
                x1 = d52;
                goto L_102f2c58;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d53, (double)rdf32(COW_IMG(0x10330250u)), 4u);
            loc_40_f = d50;
            x3 = d53;
            x2 = d51;
            x1 = d52;
    COW_AT(102f2a4d)
            d54 = fr(g, (double)rdf32(sp0 - 0x60u) / x3);
            d55 = (double)(float)fr(g, d54 * x1);
            wrf32(sp0 - 0x44u, (float)d55);
            d56 = (double)(float)fr(g, loc_40_f * d54);
            wrf32(sp0 - 0x40u, (float)d56);
            d57 = (double)(float)fr(g, d54 * x2);
            wrf32(sp0 - 0x3cu, (float)d57);
            wrf32(sp0 - 0x2cu, (float)(double)(float)0.0);
            wrf32(sp0 - 0x30u, (float)(double)(float)0.0);
            wrf32(sp0 - 0x34u, (float)(double)(float)0.0);
            wrf32(sp0 - 0x50u, (float)(double)(float)0.0);
            wrf32(sp0 - 0x54u, (float)(double)(float)0.0);
            wrf32(sp0 - 0x58u, (float)(double)(float)0.0);
            wrf32(sp0 - 0x5cu, (float)(double)(float)0.0);
            t58 = rd32(sp0 - 0x84u);
            wrf32(sp0 + 0x10u, (float)0.0);
            ecx = t58;
            esi = 0x10u;
            loc_40_f = d56;
            loc_44_f = d55;
            loc_3c_f = d57;
            loc_2c_f = (double)(float)0.0;
            loc_30_f = (double)(float)0.0;
            loc_34_f = (double)(float)0.0;
            loc_50_f = (double)(float)0.0;
            loc_54_f = (double)(float)0.0;
            loc_58_f = (double)(float)0.0;
            loc_5c_f = (double)(float)0.0;
L_102f2a95: ;
    COW_AT(102f2a95)
            d59 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx - 4u) - loc_10_f) * loc_40_f) + fr(g, fr(g, (double)rdf32(ecx - 8u) - loc_14_f) * loc_44_f)) + fr(g, fr(g, (double)rdf32(ecx) - loc_c_f) * loc_3c_f));
            wrf32(sp0 - 0x64u, (float)(double)(float)d59);
            d60 = (double)rdf32(sp0 - 0x60u);
            if (cow_fsw(g, d59, d60, 1u) >> 8u & 1u)
            {
                loc_64_f = (double)(float)d59;
    COW_AT(102f2ac5)
                d61 = fr(g, loc_64_f + (double)rdf32(COW_IMG(0x10329a08u)));
                wrf32(sp0 - 0x64u, (float)(double)(float)d61);
                wr32(sp0 - 0x80u, (uint32_t)fist32(g, (double)(float)d61));
                edx = (uint32_t)fist32(g, (double)(float)d61);
                x0 = (double)rdf32(COW_IMG(0x103483a8u));
            }
            else
            {
    COW_AT(102f2ac0)
                edx = ebx - 1u;
            }
    COW_AT(102f2ae2)
            wr32(sp0 - 0xd4u, 0x10u);
            d62 = fr(g, (double)rdf32(edx * 0x10u + sp0 - 0xc0u) - (double)rdf32(ecx - 4u));
            d63 = fr(g, (double)rdf32(edx * 0x10u + sp0 - 0xc4u) - (double)rdf32(ecx - 8u));
            wrf32(sp0 - 0x78u, (float)(double)(float)d62);
            d64 = fr(g, (double)rdf32(edx * 4u + rd32(sp0 - 0x6cu)) * (double)rdf32(COW_IMG(0x1032a3bcu)));
            t65 = rd32(sp0 - 0x68u);
            t66 = rd32(sp0 - 0x6cu);
            d67 = fr(g, fr(g, d64 * (double)rdf32(edx * 4u + rd32(sp0 - 0x6cu))) + (double)rdf32(sp0 + 0x10u));
            d68 = fr(g, (double)rdf32(edx * 4u + rd32(sp0 - 0x68u)) * (double)rdf32(COW_IMG(0x1032a3bcu)));
            d69 = fr(g, (double)rdf32(edx * 0x10u + sp0 - 0xbcu) - (double)rdf32(ecx));
            wrf32(sp0 + 0x10u, (float)d67);
            d70 = (double)(float)fr(g, fr(g, d64 * d63) + loc_58_f);
            wrf32(sp0 - 0x58u, (float)d70);
            d71 = (double)(float)fr(g, fr(g, d64 * (double)(float)d62) + loc_54_f);
            wrf32(sp0 - 0x54u, (float)d71);
            d72 = (double)(float)fr(g, fr(g, d64 * d69) + loc_50_f);
            wrf32(sp0 - 0x50u, (float)d72);
            d73 = fr(g, fr(g, d68 * (double)rdf32(edx * 4u + t65)) + loc_5c_f);
            wrf32(sp0 - 0x5cu, (float)(double)(float)d73);
            d74 = (double)(float)fr(g, fr(g, d68 * d63) + loc_34_f);
            wrf32(sp0 - 0x34u, (float)d74);
            d75 = (double)(float)fr(g, fr(g, (double)(float)d62 * d68) + loc_30_f);
            wrf32(sp0 - 0x30u, (float)d75);
            d76 = (double)(float)fr(g, fr(g, d68 * d69) + loc_2c_f);
            wrf32(sp0 - 0x2cu, (float)d76);
            if (esi != 1u)
            {
                eax = edx * 4u + t65;
                ecx = ecx + 0x10u;
                esi = esi - 1u;
                loc_2c_f = d76;
                loc_30_f = d75;
                loc_34_f = d74;
                loc_50_f = d72;
                loc_54_f = d71;
                loc_58_f = d70;
                loc_5c_f = (double)(float)d73;
                goto L_102f2a95;
            }
            eax = edx * 4u + t65;
            edx = edx * 4u + t66;
            loc_2c_f = d76;
            loc_30_f = d75;
            loc_34_f = d74;
            loc_50_f = d72;
            loc_54_f = d71;
            loc_58_f = d70;
            loc_5c_f = (double)(float)d73;
    COW_AT(102f2b7f)
            d77 = (double)rdf32(sp0 + 0x10u);
            if ((cow_fsw(g, d77, (double)rdf32(COW_IMG(0x103295d8u)), 1u) >> 8u & 0x41u) != 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(102f2b8f)
                d78 = fr(g, fr(g, loc_58_f * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / (double)rdf32(sp0 + 0x10u))) + loc_14_f);
                d79 = fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / (double)rdf32(sp0 + 0x10u));
                wrf32(sp0 - 0x14u, (float)(double)(float)d78);
                d80 = (double)(float)fr(g, fr(g, loc_54_f * d79) + loc_10_f);
                wrf32(sp0 - 0x10u, (float)d80);
                d81 = (double)(float)fr(g, fr(g, d79 * loc_50_f) + loc_c_f);
                wrf32(sp0 - 0xcu, (float)d81);
                loc_14_f = (double)(float)d78;
                loc_10_f = d80;
                loc_c_f = d81;
            }
    COW_AT(102f2bb7)
            if ((cow_fsw(g, loc_5c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u) >> 8u & 0x41u) != 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_5c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_5c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(102f2bc7)
                d82 = fr(g, fr(g, loc_34_f * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / loc_5c_f)) + loc_24_f);
                d83 = fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / loc_5c_f);
                wrf32(sp0 - 0x24u, (float)(double)(float)d82);
                d84 = (double)(float)fr(g, fr(g, loc_30_f * d83) + loc_20_f);
                wrf32(sp0 - 0x20u, (float)d84);
                d85 = (double)(float)fr(g, fr(g, d83 * loc_2c_f) + loc_1c_f);
                wrf32(sp0 - 0x1cu, (float)d85);
                loc_24_f = (double)(float)d82;
                loc_20_f = d84;
                loc_1c_f = d85;
            }
    COW_AT(102f2bef)
            d86 = fr(g, loc_58_f * loc_58_f);
            if (!(d86 < x0))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d86, x0, 1u);
                goto L_102f2c49;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d86, x0, 1u);
    COW_AT(102f2bfe)
            d87 = fr(g, loc_54_f * loc_54_f);
            if (!(d87 < x0))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d87, x0, 1u);
                goto L_102f2c49;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d87, x0, 1u);
    COW_AT(102f2c0d)
            d88 = fr(g, loc_50_f * loc_50_f);
            if (!(d88 < x0))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d88, x0, 1u);
                goto L_102f2c49;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d88, x0, 1u);
    COW_AT(102f2c1c)
            d89 = fr(g, loc_34_f * loc_34_f);
            if (!(d89 < x0))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d89, x0, 1u);
                goto L_102f2c49;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d89, x0, 1u);
    COW_AT(102f2c2b)
            d90 = fr(g, loc_30_f * loc_30_f);
            if (!(d90 < x0))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d90, x0, 1u);
                goto L_102f2c49;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d90, x0, 1u);
    COW_AT(102f2c3a)
            d91 = fr(g, loc_2c_f * loc_2c_f);
            if (d91 < x0) goto L_102f2c5e;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d91, x0, 1u);
L_102f2c49: ;
    COW_AT(102f2c49)
            wr32(sp0 - 0x48u, loc_48 + 1u);
            if (loc_48 + 1u < 8u)
            {
                loc_48 = loc_48 + 1u;
                goto L_102f29cd;
            }
    COW_AT(102f2c56)
L_102f2c5e: ;
    COW_AT(102f2c5e)
            wr32(sp0 + 0x10u, rd32(COW_IMG(0x109b262cu)));
            g->fcw = rd16(sp0 + 0x10u);
            t92 = rd32(sp0 + 4u);
            wr32(t92, cow_f2bits(loc_14_f));
            t93 = rd32(sp0 - 0x10u);
            wr32(t92 + 4u, t93);
            t94 = rd32(sp0 - 0xcu);
            wr32(t92 + 8u, t94);
            t95 = rd32(sp0 - 0x24u);
            t96 = rd32(sp0 + 8u);
            wr32(t96, t95);
            t97 = rd32(sp0 - 0x20u);
            wr32(t96 + 4u, t97);
            eax = t96;
        }
        else
        {
    COW_AT(102f297f)
            t37 = rd32(sp0 + 4u);
            wr32(t37, loc_14);
            t38 = rd32(sp0 - 0x10u);
            wr32(t37 + 4u, t38);
            t39 = rd32(sp0 - 0xcu);
            wr32(t37 + 8u, t39);
            t40 = rd32(sp0 + 8u);
            t41 = rd32(sp0 - 0x24u);
            wrf32(t40 + 4u, (float)x0);
            wr32(t40, t41);
            eax = t40;
        }
    COW_AT(102f2c8d)
        ebx = rd32(sp0 - 0xd0u);
    }
    else
    {
        x2 = d13;
        x1 = d12;
    COW_AT(102f2839)
        t14 = rd32(sp0 + 4u);
        wr32(t14, loc_14);
        t15 = rd32(sp0 - 0x10u);
        wr32(t14 + 4u, t15);
        t16 = rd32(sp0 - 0xcu);
        wr32(t14 + 8u, t16);
        t17 = rd32(sp0 + 8u);
        t18 = rd32(sp0 - 0x24u);
        wrf32(t17 + 4u, (float)x0);
        wr32(t17, t18);
        eax = t17;
        ebx = in_ebx;
    }
    COW_AT(102f2c8e)
    t98 = rd32(sp0 - 0x1cu);
    t99 = rd32(sp0 - 0xccu);
    wr32(eax + 8u, t98);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0xc8u);
    g->edi = t99;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_102f2c58: ;
    COW_AT(102f2c58)
    goto L_102f2c5e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f2730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f2741u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xc4u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2751u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xc4u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f275fu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_68;
        uint32_t loc_6c;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xc4u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f278cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2799u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f279fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f27fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2839u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2861u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f28b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2926u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f292fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f293cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2942u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2948u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f294fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f295eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2963u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f296fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f297fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f29a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f29b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f29bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        double loc_20_f;
        uint32_t loc_24;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_74_f;
        double loc_78_f;
        double loc_7c_f;
        uint32_t loc_84;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xd0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f29c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f29cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f29d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f29deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2a15u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2a4du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2a95u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2ac0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2ac5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2ae2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2b7fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2b8fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2bb7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2bc7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2befu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2bfeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2c0du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2c1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2c2bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2c3au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2c49u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102f2c56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2c58u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2c5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_10_f;
        double loc_14_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_3c_f;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_5c_f;
        double loc_64_f;
        double loc_78_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_64_f = rdf32(sp0 - 0x64u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2c8du:
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
        g->esp = sp0 - 0xd0u;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102f2c8eu:
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
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f2730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f2730(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
