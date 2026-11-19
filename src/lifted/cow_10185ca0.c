/* f_0x10185ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10185ca0(Guest* g)
{
    double d1;
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
    double d116;
    double d119;
    double d2;
    double d3;
    double d31;
    double d33;
    double d34;
    double d4;
    double d43;
    double d44;
    double d48;
    double d6;
    double d60;
    double d61;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
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
    double d91;
    double d92;
    double d93;
    double d94;
    double d95;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_118;
    double loc_118_f;
    uint32_t loc_12c;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t loc_bc;
    uint32_t loc_c0;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t loc_cc;
    uint32_t loc_d0;
    uint32_t loc_d4;
    uint32_t loc_d8;
    uint32_t t10;
    uint32_t t11;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t117;
    uint32_t t118;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t t30;
    uint32_t t32;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
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
    uint32_t t62;
    uint32_t t7;
    uint32_t t79;
    uint32_t t8;
    uint32_t t9;
    uint32_t t96;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 348u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10185cc7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x128u); in_esi = rd32(sp0 - 0x124u); in_ebp = rd32(sp0 - 0x120u); in_ebx = rd32(sp0 - 0x11cu); g->ebp = rd32(sp0 - 0x120u); g->ebx = rd32(sp0 - 0x11cu); g->edi = rd32(sp0 - 0x128u); g->esi = rd32(sp0 - 0x124u); goto E_10185cc7;
    case 0x10185ce2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x128u); in_esi = rd32(sp0 - 0x124u); in_ebp = rd32(sp0 - 0x120u); in_ebx = rd32(sp0 - 0x11cu); g->ebp = rd32(sp0 - 0x120u); g->ebx = rd32(sp0 - 0x11cu); g->edi = rd32(sp0 - 0x128u); g->esi = rd32(sp0 - 0x124u); goto E_10185ce2;
    case 0x10185cf6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x128u); in_esi = rd32(sp0 - 0x124u); in_ebp = rd32(sp0 - 0x120u); in_ebx = rd32(sp0 - 0x11cu); g->ebp = rd32(sp0 - 0x120u); g->ebx = rd32(sp0 - 0x11cu); g->edi = rd32(sp0 - 0x128u); g->esi = rd32(sp0 - 0x124u); goto E_10185cf6;
    case 0x10185d38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185d38;
    case 0x10185d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185d4e;
    case 0x10185d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185d64;
    case 0x10185d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185d7a;
    case 0x10185d90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185d90;
    case 0x10185da6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185da6;
    case 0x10185dbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185dbc;
    case 0x10185dddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185ddd;
    case 0x10185de7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185de7;
    case 0x10185e03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_10185e03;
    case 0x10185e0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_10185e0a;
    case 0x10185e0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185e0c;
    case 0x10185e17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_10185e17;
    case 0x10185e1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185e1a;
    case 0x10185e32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185e32;
    case 0x10185e49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185e49;
    case 0x10185e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185e65;
    case 0x10185e7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10185e7b;
    case 0x10185fe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_10185fe2;
    case 0x1018607cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1018607c;
    case 0x1018611bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1018611b;
    case 0x101861bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_101861ba;
    case 0x101861c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_101861c8;
    case 0x101861d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_101861d9;
    case 0x101861f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_101861f6;
    case 0x10186209u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10186209;
    case 0x10186212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_10186212;
    case 0x10186218u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_10186218;
    case 0x10186224u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10186224;
    case 0x10186228u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10186228;
    case 0x1018622fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_1018622f;
    case 0x10186235u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10186235;
    case 0x10186241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10186241;
    case 0x10186245u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10186245;
    case 0x1018624cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_1018624c;
    case 0x10186250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10186250;
    case 0x10186258u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10186258;
    case 0x1018625au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_1018625a;
    case 0x1018625fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_1018625f;
    case 0x10186265u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10186265;
    case 0x10186271u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10186271;
    case 0x10186275u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10186275;
    case 0x10186287u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186287;
    case 0x1018629eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_1018629e;
    case 0x101862b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_101862b4;
    case 0x101862c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_101862c9;
    case 0x101862d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_101862d5;
    case 0x101862ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_101862dd;
    case 0x101862e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_101862e4;
    case 0x10186303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186303;
    case 0x1018630eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_1018630e;
    case 0x10186322u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186322;
    case 0x1018632du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_1018632d;
    case 0x10186339u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186339;
    case 0x10186344u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186344;
    case 0x1018634fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_1018634f;
    case 0x10186372u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10186372;
    case 0x1018638au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_cc = rd32(sp0 - 0xccu); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_1018638a;
    case 0x1018638eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_cc = rd32(sp0 - 0xccu); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_1018638e;
    case 0x101863a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_cc = rd32(sp0 - 0xccu); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_101863a9;
    case 0x101863c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_cc = rd32(sp0 - 0xccu); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101863c3;
    case 0x101863d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_cc = rd32(sp0 - 0xccu); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101863d2;
    case 0x101863eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_cc = rd32(sp0 - 0xccu); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_101863ee;
    case 0x101863fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_cc = rd32(sp0 - 0xccu); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_101863fb;
    case 0x10186415u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_cc = rd32(sp0 - 0xccu); loc_c4 = rd32(sp0 - 0xc4u); goto E_10186415;
    case 0x1018643au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_1018643a;
    case 0x10186446u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_10186446;
    case 0x101864c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_101864c0;
    case 0x1018652bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_1018652b;
    case 0x10186592u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10186592;
    case 0x1018660cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1018660c;
    case 0x10186675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10186675;
    case 0x101866dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101866da;
    case 0x10186759u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10186759;
    case 0x101867c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101867c3;
    case 0x10186829u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10186829;
    case 0x10186836u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10186836;
    case 0x10186848u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10186848;
    case 0x1018685eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018685e;
    case 0x1018686bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018686b;
    case 0x10186872u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10186872;
    case 0x1018687au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018687a;
    case 0x10186887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_10186887;
    case 0x1018688bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_1018688b;
    case 0x1018688eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_1018688e;
    case 0x10186897u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_10186897;
    case 0x101869f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c4 = rd32(sp0 - 0xc4u); goto E_101869f7;
    case 0x101869fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_101869fc;
    case 0x10186a1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_10186a1b;
    case 0x10186a24u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_10186a24;
    case 0x10186a28u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_10186a28;
    case 0x10186a3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186a3c;
    case 0x10186a5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186a5c;
    case 0x10186a63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186a63;
    case 0x10186a71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186a71;
    case 0x10186a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186a83;
    case 0x10186a97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10186a97;
    case 0x10186aa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_118_f = rdf32(sp0 - 0x118u); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10186aa8;
    case 0x10186ac1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10186ac1;
    case 0x10186ad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10186ad6;
    case 0x10186aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10186aec;
    case 0x10186b02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10186b02;
    case 0x10186b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10186b18;
    case 0x10186b2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10186b2e;
    case 0x10186b3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10186b3c;
    case 0x10186b58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10186b58;
    case 0x10186b61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_12c = rd32(sp0 - 0x12cu); goto E_10186b61;
    case 0x10186b6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10186b6c;
    default: break;
    }
#endif

    COW_AT(10185ca0)
    d1 = (double)rdf32(sp0 + 0x10u);
    wr32(sp0 - 0x11cu, in_ebx);
    wr32(sp0 - 0x120u, in_ebp);
    wr32(sp0 - 0x124u, in_esi);
    wr32(sp0 - 0x128u, in_edi);
    wr32(sp0 - 0x90u, self);
    if (d1 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(10185ce2)
        wr32(COW_IMG(0x103773e0u), 0x3f800000u);
        wr32(COW_IMG(0x103773d8u), 0x3f800000u);
    }
    else
    {
    COW_AT(10185cc7)
        d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x10u));
        wrf32(COW_IMG(0x103773e0u), (float)d2);
        wrf32(COW_IMG(0x103773d8u), (float)d2);
    }
    COW_AT(10185cf6)
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, 0x89u);
    d3 = (double)(float)-(double)rdf32(arg1);
    wrf32(sp0 - 0x8cu, (float)d3);
    d4 = (double)(float)-(double)rdf32(arg1 + 4u);
    wrf32(sp0 - 0x88u, (float)d4);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t5);
    d6 = (double)(float)-(double)rdf32(arg1 + 8u);
    wrf32(sp0 - 0x84u, (float)d6);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t5, 0x89u, 0u);
    COW_AT(10185d38)
    wr32(sp0 - 0x12cu, 1u);
    wr32(sp0 - 0x130u, 0x1bu);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t7);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 3, t7, 0x1bu, 1u);
    COW_AT(10185d4e)
    wr32(sp0 - 0x12cu, 1u);
    wr32(sp0 - 0x130u, 0x13u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t8);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x13u, 1u);
    COW_AT(10185d64)
    wr32(sp0 - 0x12cu, 4u);
    wr32(sp0 - 0x130u, 0x14u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t9);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 0x14u, 4u);
    COW_AT(10185d7a)
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, 0xfu);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t10);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0xfu, 0u);
    COW_AT(10185d90)
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, 0x1cu);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t11);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 0x1cu, 0u);
    COW_AT(10185da6)
    wr32(sp0 - 0x12cu, 3u);
    wr32(sp0 - 0x130u, 0x16u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t12);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t12) + 0xc8u), rd32(t12), 3, t12, 0x16u, 3u);
    COW_AT(10185dbc)
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, 0xeu);
    wr32(sp0 - 0xa4u, 0u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t13);
    g->eax = t13;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t14 = rd32(t13);
    t15 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x128u;
    t16 = cow_thiscall(g, rd32(t14 + 0xc8u), t14, 3, t13, 0xeu, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(10185ddd)
    if (rd8(self + 0x39598u) == 0u)
    {
    COW_AT(10185e0c)
        wr32(sp0 - 0x12cu, rd32(COW_IMG(0x10631c88u)));
        g->esp = sp0 - 0x128u;
        cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10631c88u)));
    COW_AT(10185e17)
    }
    else
    {
    COW_AT(10185de7)
        wr32(sp0 - 0x12cu, sp0 - 0x40u);
        wr32(sp0 - 0x130u, 3u);
        t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x134u, t19);
        g->eax = t19;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0x128u;
        t20 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x98u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t19, 3u, sp0 - 0x40u);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    COW_AT(10185e03)
        g->esp = sp0 - 0xbcu;
        cow_bridge_indirect(g, COW_IMG(0x10177420u), 0u, 27u, (const uint32_t[]){rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u)}, self, g->edx, g->eax, 108u);
    COW_AT(10185e0a)
    }
    COW_AT(10185e1a)
    wr32(sp0 - 0x12cu, 2u);
    wr32(sp0 - 0x130u, 0x11u);
    wr32(sp0 - 0x134u, 0u);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x138u, t22);
    g->edx = rd32(t22);
    t23 = rd32(t22);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(t23 + 0xfcu), rd32(COW_IMG(0x1045666cu)), 4, t22, 0u, 0x11u, 2u);
    t24 = g->edx;
    edx = t24;
    COW_AT(10185e32)
    wr32(sp0 - 0x12cu, 2u);
    wr32(sp0 - 0x130u, 0x10u);
    wr32(sp0 - 0x134u, 0u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x138u, t25);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 0x10u, 2u);
    COW_AT(10185e49)
    wr32(sp0 - 0x12cu, arg3);
    wr32(sp0 - 0x130u, 0u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t26);
    g->edx = arg3;
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xf4u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t26, 0u, arg3);
    t27 = g->edx;
    edx = t27;
    COW_AT(10185e65)
    wr32(sp0 - 0x12cu, 0x142u);
    t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t28);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t28) + 0x130u), rd32(t28), 2, t28, 0x142u);
    COW_AT(10185e7b)
    t29 = rd32(sp0 - 0x8cu);
    wr32(sp0 - 0xe8u, t29);
    t30 = rd32(sp0 - 0x88u);
    d31 = fr(g, atan2(-(double)rdf32(arg2), (double)rdf32(arg2 + 8u)));
    wr32(sp0 - 0xe4u, t30);
    t32 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xe0u, t32);
    wr32(sp0 - 0x12cu, sp0 - 0x118u);
    wr32(sp0 - 0x130u, sp0 - 0x80u);
    wr32(sp0 - 0x134u, sp0 - 0x80u);
    wr32(sp0 - 0x80u, 0x3f800000u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x6cu, 0x3f800000u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0x3f800000u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x118u, 0x3f800000u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0x3f800000u);
    wr32(sp0 - 0x100u, 0u);
    wr32(sp0 - 0xfcu, 0u);
    wr32(sp0 - 0xf8u, 0u);
    wr32(sp0 - 0xf4u, 0u);
    wr32(sp0 - 0xf0u, 0x3f800000u);
    wr32(sp0 - 0xecu, 0u);
    wr32(sp0 - 0xdcu, 0x3f800000u);
    wrf32(sp0 - 0xc8u, (float)(double)(float)d31);
    g->esp = sp0 - 0x128u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x80u, sp0 - 0x80u, sp0 - 0x118u);
    COW_AT(10185fe2)
    d33 = fr(g, cos((double)rdf32(sp0 - 0xc8u)));
    wrf32(sp0 - 0x118u, (float)(double)(float)d33);
    d34 = fr(g, sin((double)rdf32(sp0 - 0xc8u)));
    wr32(sp0 - 0x138u, sp0 - 0x118u);
    wr32(sp0 - 0x13cu, sp0 - 0x80u);
    wr32(sp0 - 0x140u, sp0 - 0x80u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0x3f800000u);
    wr32(sp0 - 0x100u, 0u);
    wr32(sp0 - 0xfcu, 0u);
    wr32(sp0 - 0xf4u, 0u);
    wr32(sp0 - 0xecu, 0u);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xe4u, 0u);
    wr32(sp0 - 0xe0u, 0u);
    wr32(sp0 - 0xdcu, 0x3f800000u);
    wrf32(sp0 - 0x110u, (float)(double)(float)-d34);
    wrf32(sp0 - 0xf8u, (float)(double)(float)d34);
    wrf32(sp0 - 0xf0u, (float)(double)(float)d33);
    g->esp = sp0 - 0x134u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x80u, sp0 - 0x80u, sp0 - 0x118u);
    COW_AT(1018607c)
    wr32(sp0 - 0x118u, rd32(COW_IMG(0x103773d8u)));
    wr32(sp0 - 0x104u, rd32(COW_IMG(0x103773dcu)));
    wr32(sp0 - 0xf0u, rd32(COW_IMG(0x103773e0u)));
    wr32(sp0 - 0x144u, sp0 - 0x118u);
    wr32(sp0 - 0x148u, sp0 - 0x80u);
    wr32(sp0 - 0x14cu, sp0 - 0x80u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x100u, 0u);
    wr32(sp0 - 0xfcu, 0u);
    wr32(sp0 - 0xf8u, 0u);
    wr32(sp0 - 0xf4u, 0u);
    wr32(sp0 - 0xecu, 0u);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xe4u, 0u);
    wr32(sp0 - 0xe0u, 0u);
    wr32(sp0 - 0xdcu, 0x3f800000u);
    g->esp = sp0 - 0x140u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x80u, sp0 - 0x80u, sp0 - 0x118u);
    COW_AT(1018611b)
    wr32(sp0 - 0xe8u, rd32(COW_IMG(0x103773ccu)));
    wr32(sp0 - 0xe4u, rd32(COW_IMG(0x103773d0u)));
    wr32(sp0 - 0xe0u, rd32(COW_IMG(0x103773d4u)));
    wr32(sp0 - 0x150u, sp0 - 0x118u);
    wr32(sp0 - 0x154u, sp0 - 0x80u);
    wr32(sp0 - 0x158u, sp0 - 0x80u);
    wr32(sp0 - 0x118u, 0x3f800000u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0x3f800000u);
    wr32(sp0 - 0x100u, 0u);
    wr32(sp0 - 0xfcu, 0u);
    wr32(sp0 - 0xf8u, 0u);
    wr32(sp0 - 0xf4u, 0u);
    wr32(sp0 - 0xf0u, 0x3f800000u);
    wr32(sp0 - 0xecu, 0u);
    wr32(sp0 - 0xdcu, 0x3f800000u);
    g->eax = sp0 - 0x80u;
    g->edx = sp0 - 0x118u;
    t35 = rd32(COW_IMG(0x103773ccu));
    t36 = rd32(COW_IMG(0x103773d0u));
    t37 = rd32(COW_IMG(0x103773d4u));
    g->esp = sp0 - 0x14cu;
    t38 = cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x80u, sp0 - 0x80u, sp0 - 0x118u);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(101861ba)
    g->eax = eax;
    g->esp = sp0 - 0x128u;
    t40 = cow_thiscall(g, COW_IMG(0x10167940u), self + 0x178u, 0);
    t41 = g->ecx;
    eax = t40;
    ecx = t41;
    COW_AT(101861c8)
    wr32(sp0 - 0x98u, eax);
    if (eax == 0u)
    {
        ebp = self;
    }
    else
    {
        ebx = eax;
        loc_98 = eax;
    COW_AT(101861d9)
        t42 = rd32(self + 0x17cu);
        d43 = fr(g, (double)rdf32(ebx + 0x38u) + (double)rdf32(arg1));
        wr32(sp0 - 0x94u, t42);
        g->ecx = ecx;
        g->edx = t42;
        d44 = fr(g, d43 * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d44);
        g->esp = sp0 - 0x128u;
        t45 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t46 = g->ecx;
        t47 = g->edx;
        eax = t45;
        ecx = t46;
        edx = t47;
    COW_AT(101861f6)
        d48 = fr(g, fr(g, (double)rdf32(ebx + 0x3cu) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d48);
        g->esp = sp0 - 0x128u;
        t49 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        edi = eax;
        eax = t49;
    COW_AT(10186209)
        if ((int32_t)(edi - 1u) >= 0)
        {
            ecx = edi - 1u;
    COW_AT(10186218)
            t50 = rd32(ebx + 0x40u) - 1u;
            wr32(sp0 - 0xb0u, t50);
            if ((int32_t)ecx > (int32_t)(rd32(ebx + 0x40u) - 1u))
            {
                loc_b0 = t50;
            }
            else
            {
    COW_AT(10186224)
                wr32(sp0 - 0xb0u, ecx);
                loc_b0 = ecx;
            }
        }
        else
        {
    COW_AT(10186212)
            wr32(sp0 - 0xb0u, 0u);
            loc_b0 = 0u;
        }
    COW_AT(10186228)
        if ((int32_t)(edi + 1u) >= 0)
        {
            ecx = edi + 1u;
    COW_AT(10186235)
            t51 = rd32(ebx + 0x40u) - 1u;
            wr32(sp0 - 0xb8u, t51);
            if ((int32_t)ecx > (int32_t)(rd32(ebx + 0x40u) - 1u))
            {
                loc_b8 = t51;
            }
            else
            {
    COW_AT(10186241)
                wr32(sp0 - 0xb8u, ecx);
                loc_b8 = ecx;
            }
        }
        else
        {
    COW_AT(1018622f)
            wr32(sp0 - 0xb8u, 0u);
            loc_b8 = 0u;
        }
    COW_AT(10186245)
        if ((int32_t)(eax - 1u) >= 0)
        {
            ecx = eax - 1u;
    COW_AT(10186250)
            if ((int32_t)ecx > (int32_t)(rd32(ebx + 0x44u) - 1u))
            {
                edx = rd32(ebx + 0x44u) - 1u;
    COW_AT(10186258)
                ecx = edx;
            }
        }
        else
        {
    COW_AT(1018624c)
            ecx = 0u;
        }
    COW_AT(1018625a)
        if ((int32_t)(eax + 1u) >= 0)
        {
            eax = eax + 1u;
    COW_AT(10186265)
            t52 = rd32(ebx + 0x44u) - 1u;
            wr32(sp0 - 0xbcu, t52);
            if ((int32_t)eax > (int32_t)(rd32(ebx + 0x44u) - 1u))
            {
                loc_bc = t52;
            }
            else
            {
    COW_AT(10186271)
                wr32(sp0 - 0xbcu, eax);
                loc_bc = eax;
            }
        }
        else
        {
    COW_AT(1018625f)
            wr32(sp0 - 0xbcu, 0u);
            loc_bc = 0u;
        }
    COW_AT(10186275)
        wr32(sp0 - 0xacu, ecx);
        if ((int32_t)ecx > (int32_t)loc_bc)
        {
            ebp = self;
            goto L_10186aa8;
        }
        edx = ecx;
        ebp = self;
        loc_ac = ecx;
        loc_118_f = (double)rdf32(sp0 - 0x118u);
L_10186287: ;
    COW_AT(10186287)
        wr32(sp0 - 0xa8u, loc_b0);
        if ((int32_t)loc_b0 > (int32_t)loc_b8) goto L_10186a97;
        ecx = loc_b0;
        loc_a8 = loc_b0;
L_1018629e: ;
    COW_AT(1018629e)
        if (rd32(ecx * 4u + rd32(ebx + 0x58u) + rd32(ebx + 0x40u) * edx * 4u) == 0u) goto L_10186a83;
        eax = rd32(ecx * 4u + rd32(ebx + 0x58u) + rd32(ebx + 0x40u) * edx * 4u);
L_101862b4: ;
    COW_AT(101862b4)
        wr32(sp0 - 0xb4u, eax + 4u);
        if ((rd32(eax) >> 8u & 0x20u) == 0u)
        {
            edx = eax + 4u;
            loc_b4 = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
    COW_AT(101862d5)
            if ((int32_t)eax > 0)
            {
    COW_AT(101862dd)
                wr32(sp0 - 0x9cu, eax);
                loc_9c = eax;
L_101862e4: ;
    COW_AT(101862e4)
                t54 = rd32(edx + 4u);
                wr32(sp0 - 0xa0u, t54);
                if (rd32(sp0 - 0x94u) != rd32(rd32(edx) + 0xbcu))
                {
                    ebp = rd32(edx);
                    edx = rd32(sp0 - 0x94u);
                    esi = t54;
                    loc_a0 = t54;
    COW_AT(10186303)
                    if (rd16(esi + 0xeu) == 0u)
                    {
    COW_AT(1018630e)
                        if (rd32(sp0 - 0xa4u) == (rd32(ebp + 0xa4u) & 1u))
                        {
                            eax = rd32(ebp + 0xa4u) & 1u;
                        }
                        else
                        {
                            eax = rd32(ebp + 0xa4u) & 1u;
    COW_AT(10186322)
                            wr32(sp0 - 0xa4u, eax);
                            if (eax == 0u)
                            {
                                loc_a4 = eax;
    COW_AT(10186339)
                                wr32(sp0 - 0x12cu, 3u);
                                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                edx = rd32(COW_IMG(0x1045666cu));
                                loc_12c = 3u;
                            }
                            else
                            {
                                loc_a4 = eax;
    COW_AT(1018632d)
                                wr32(sp0 - 0x12cu, 2u);
                                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                loc_12c = 2u;
                            }
    COW_AT(10186344)
                            wr32(sp0 - 0x130u, 0x16u);
                            wr32(sp0 - 0x134u, eax);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x128u;
                            t55 = cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, loc_12c);
                            t56 = g->edx;
                            eax = t55;
                            edx = t56;
                            loc_b0 = rd32(sp0 - 0xb0u);
                            loc_b8 = rd32(sp0 - 0xb8u);
                            loc_bc = rd32(sp0 - 0xbcu);
                            loc_ac = rd32(sp0 - 0xacu);
                            loc_a8 = rd32(sp0 - 0xa8u);
                            loc_b4 = rd32(sp0 - 0xb4u);
                            loc_9c = rd32(sp0 - 0x9cu);
                            loc_a0 = rd32(sp0 - 0xa0u);
                            loc_118_f = (double)rdf32(sp0 - 0x118u);
                        }
    COW_AT(1018634f)
                        wr32(sp0 - 0x12cu, ebp);
                        wr32(sp0 - 0x130u, 0x100u);
                        wr32(sp0 - 0xc8u, 0u);
                        t57 = rd32(esi);
                        t58 = rd32(esi + 8u);
                        g->esp = sp0 - 0x128u;
                        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, ebp);
                        ebx = t57;
                        edi = t58;
    COW_AT(10186372)
                        wr32(sp0 - 0xccu, 4u);
                        t59 = ebp - (sp0 - 0x118u);
                        wr32(sp0 - 0xc0u, t59);
                        eax = sp0 - 0x118u;
                        ebp = t59;
                        loc_cc = 4u;
                        loc_c0 = t59;
                        loc_118_f = (double)rdf32(sp0 - 0x118u);
L_1018638e: ;
    COW_AT(1018638e)
                        wr32(sp0 - 0xd8u, eax + ebp);
                        wr32(sp0 - 0xd4u, sp0 - 0x80u);
                        wr32(sp0 - 0xc4u, 4u);
                        loc_d8 = eax + ebp;
                        ebp = eax;
                        loc_d4 = sp0 - 0x80u;
                        loc_c4 = 4u;
L_101863a9: ;
    COW_AT(101863a9)
                        d60 = (double)rdf32(COW_IMG(0x103295d8u));
                        wr32(ebp, 0u);
                        eax = loc_d4;
                        ecx = loc_d8;
                        edx = 4u;
                        x0 = d60;
L_101863c3: ;
    COW_AT(101863c3)
                        if (edx != 1u)
                        {
                            edx = edx - 1u;
                            x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
                            eax = eax + 0x10u;
                            ecx = ecx + 4u;
                            goto L_101863c3;
                        }
                        loc_118 = rd32(sp0 - 0x118u);
                        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    COW_AT(101863d2)
                        wrf32(ebp, (float)x0);
                        wr32(sp0 - 0xd4u, loc_d4 + 4u);
                        wr32(sp0 - 0xc4u, loc_c4 - 1u);
                        if (loc_c4 != 1u)
                        {
                            ebp = ebp + 4u;
                            loc_d4 = loc_d4 + 4u;
                            loc_c4 = loc_c4 - 1u;
                            goto L_101863a9;
                        }
                        ebp = ebp + 4u;
    COW_AT(101863ee)
                        wr32(sp0 - 0xccu, loc_cc - 1u);
                        if (loc_cc != 1u)
                        {
                            eax = ebp;
                            loc_cc = loc_cc - 1u;
                            loc_118_f = (double)rdf32(sp0 - 0x118u);
                            goto L_1018638a;
                        }
                        eax = ebp;
                        loc_118_f = (double)rdf32(sp0 - 0x118u);
    COW_AT(101863fb)
                        wr32(sp0 - 0xc0u, 0u);
                        if ((int16_t)rd16(rd32(sp0 - 0xa0u) + 0xcu) <= 0)
                        {
                            loc_b0 = rd32(sp0 - 0xb0u);
                            loc_b8 = rd32(sp0 - 0xb8u);
                            loc_bc = rd32(sp0 - 0xbcu);
                            loc_ac = rd32(sp0 - 0xacu);
                            loc_a8 = rd32(sp0 - 0xa8u);
                            loc_b4 = rd32(sp0 - 0xb4u);
                            loc_9c = rd32(sp0 - 0x9cu);
                        }
                        else
                        {
    COW_AT(10186415)
                            wr32(sp0 - 0xd8u, COW_IMG(0x106390ccu));
                            wr32(sp0 - 0xd0u, COW_IMG(0x106390c8u));
                            wr32(sp0 - 0xd4u, COW_IMG(0x106390b4u));
                            wr32(sp0 - 0xc4u, COW_IMG(0x106390b0u));
                            ecx = COW_IMG(0x106390b0u);
                            edx = COW_IMG(0x106390b4u);
                            ebp = COW_IMG(0x106390c8u);
                            esi = COW_IMG(0x10639088u);
                            loc_c8 = 0u;
                            loc_c0 = 0u;
                            loc_d8 = COW_IMG(0x106390ccu);
                            loc_d4 = COW_IMG(0x106390b4u);
                            loc_c4 = COW_IMG(0x106390b0u);
                            loc_d0 = COW_IMG(0x106390c8u);
L_10186446: ;
    COW_AT(10186446)
                            d61 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 4u))) + fr(g, loc_118_f * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu)));
                            t62 = rd16(edi);
                            d63 = fr(g, d61 + (double)rdf32(sp0 - 0xe8u));
                            wrf32(esi + 0x10u, (float)d63);
                            d64 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (t62 & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (t62 & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (t62 & 0x7fffu) * 0xcu)));
                            d65 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf0u) * (double)rdf32(ebx + (t62 & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x100u) * (double)rdf32(ebx + (t62 & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(ebx + (t62 & 0x7fffu) * 0xcu)));
                            d66 = fr(g, d65 + (double)rdf32(sp0 - 0xe0u));
                            d67 = fr(g, d64 + (double)rdf32(sp0 - 0xe4u));
                            wrf32(esi + 0x14u, (float)d66);
                            if (!(d67 < (double)rdf32(COW_IMG(0x103295d8u))))
                            {
                                eax = (ebx + (t62 & 0x7fffu) * 0xcu & 0xffff0000u) | rd16(edi);
    COW_AT(1018652b)
                                d73 = fr(g, fr(g, fr(g, fr(g, loc_118_f * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0xe8u));
                                wrf32(esi + 0x10u, (float)d73);
                                d74 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u)));
                                d75 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf0u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x100u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u)));
                                d76 = fr(g, d75 + (double)rdf32(sp0 - 0xe0u));
                                d77 = fr(g, d74 + (double)rdf32(sp0 - 0xe4u));
                                wrf32(esi + 0x14u, (float)d76);
                                eax = ebx + (eax & 0x7fffu) * 0xcu;
                                x0 = d77;
                            }
                            else
                            {
                                eax = (ebx + (t62 & 0x7fffu) * 0xcu & 0xffff0000u) | rd16(edi);
    COW_AT(101864c0)
                                d68 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + fr(g, loc_118_f * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu))) + (double)rdf32(sp0 - 0xe8u));
                                wrf32(esi + 0x10u, (float)d68);
                                d69 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)));
                                d70 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf0u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x100u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)));
                                d71 = fr(g, d70 + (double)rdf32(sp0 - 0xe0u));
                                d72 = fr(g, d69 + (double)rdf32(sp0 - 0xe4u));
                                wrf32(esi + 0x14u, (float)d71);
                                eax = ebx + (eax & 0x7fffu) * 0xcu;
                                x0 = -d72;
                            }
    COW_AT(10186592)
                            d78 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_118_f * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu)));
                            t79 = rd16(edi + 2u);
                            d80 = fr(g, d78 + (double)rdf32(sp0 - 0xe8u));
                            wrf32(ecx, (float)d80);
                            d81 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (t79 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (t79 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (t79 & 0x3fffu) * 0xcu)));
                            d82 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf0u) * (double)rdf32(ebx + (t79 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x100u) * (double)rdf32(ebx + (t79 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(ebx + (t79 & 0x3fffu) * 0xcu)));
                            d83 = fr(g, d82 + (double)rdf32(sp0 - 0xe0u));
                            d84 = fr(g, d81 + (double)rdf32(sp0 - 0xe4u));
                            wrf32(edx, (float)d83);
                            if (!(d84 < (double)rdf32(COW_IMG(0x103295d8u))))
                            {
                                eax = (ebx + (t79 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 2u);
    COW_AT(10186675)
                                d90 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_118_f * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu))) + (double)rdf32(sp0 - 0xe8u));
                                wrf32(ecx, (float)d90);
                                d91 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)));
                                d92 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf0u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x100u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)));
                                d93 = fr(g, d92 + (double)rdf32(sp0 - 0xe0u));
                                d94 = fr(g, d91 + (double)rdf32(sp0 - 0xe4u));
                                wrf32(edx, (float)d93);
                                eax = ebx + (eax & 0x3fffu) * 0xcu;
                                x1 = d94;
                            }
                            else
                            {
                                eax = (ebx + (t79 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 2u);
    COW_AT(1018660c)
                                d85 = fr(g, fr(g, fr(g, fr(g, loc_118_f * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0xe8u));
                                wrf32(ecx, (float)d85);
                                d86 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                d87 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf0u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x100u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                d88 = fr(g, d87 + (double)rdf32(sp0 - 0xe0u));
                                d89 = fr(g, d86 + (double)rdf32(sp0 - 0xe4u));
                                wrf32(edx, (float)d88);
                                eax = ebx + (eax & 0x3fffu) * 0xcu;
                                x1 = -d89;
                            }
    COW_AT(101866da)
                            d95 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_118_f * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu)));
                            t96 = rd16(edi + 4u);
                            d97 = fr(g, d95 + (double)rdf32(sp0 - 0xe8u));
                            wrf32(ebp, (float)d97);
                            d98 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (t96 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (t96 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (t96 & 0x3fffu) * 0xcu)));
                            d99 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf0u) * (double)rdf32(ebx + (t96 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x100u) * (double)rdf32(ebx + (t96 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(ebx + (t96 & 0x3fffu) * 0xcu)));
                            d100 = fr(g, d99 + (double)rdf32(sp0 - 0xe0u));
                            d101 = fr(g, d98 + (double)rdf32(sp0 - 0xe4u));
                            wrf32(loc_d8, (float)d100);
                            if (!(d101 < (double)rdf32(COW_IMG(0x103295d8u))))
                            {
                                eax = (ebx + (t96 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 4u);
                                ecx = loc_d8;
    COW_AT(101867c3)
                                d107 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_118_f * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu))) + (double)rdf32(sp0 - 0xe8u));
                                wrf32(ebp, (float)d107);
                                d108 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)));
                                d109 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf0u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x100u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)));
                                d110 = fr(g, d109 + (double)rdf32(sp0 - 0xe0u));
                                d111 = fr(g, d108 + (double)rdf32(sp0 - 0xe4u));
                                wrf32(ecx, (float)d110);
                                eax = ebx + (eax & 0x3fffu) * 0xcu;
                                x2 = d111;
                            }
                            else
                            {
                                eax = (ebx + (t96 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 4u);
                                ecx = loc_d8;
    COW_AT(10186759)
                                d102 = fr(g, fr(g, fr(g, fr(g, loc_118_f * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0xe8u));
                                wrf32(ebp, (float)d102);
                                d103 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                d104 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf0u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x100u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                d105 = fr(g, d104 + (double)rdf32(sp0 - 0xe0u));
                                d106 = fr(g, d103 + (double)rdf32(sp0 - 0xe4u));
                                wrf32(ecx, (float)d105);
                                edx = (eax & 0x3fffu) * 3u;
                                eax = ebx + (eax & 0x3fffu) * 0xcu;
                                x2 = -d106;
                            }
    COW_AT(10186829)
                            g->ecx = ecx;
                            g->edx = edx;
                            d112 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032b08cu)));
                            fpush(g, d112);
                            g->esp = sp0 - 0x128u;
                            t113 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                            t114 = g->ecx;
                            t115 = g->edx;
                            eax = t113;
                            ecx = t114;
                            edx = t115;
                            x0 = x2;
    COW_AT(10186836)
                            g->edx = edx;
                            d116 = fr(g, x1 * (double)rdf32(COW_IMG(0x1032b08cu)));
                            fpush(g, d116);
                            g->esp = sp0 - 0x128u;
                            t117 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                            t118 = g->edx;
                            edx = t118;
                            ebp = 0x40u - eax;
                            eax = t117;
    COW_AT(10186848)
                            d119 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032b08cu)));
                            wr32(sp0 - 0xccu, 0x40u - eax);
                            fpush(g, d119);
                            g->esp = sp0 - 0x128u;
                            t120 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                            eax = t120;
    COW_AT(1018685e)
                            if ((int32_t)ebp >= 0)
                            {
                                ecx = 0x40u - eax;
                                eax = 0u;
                            }
                            else
                            {
                                ecx = 0x40u - eax;
    COW_AT(1018686b)
                                eax = 1u;
                                ebp = 0u;
                            }
    COW_AT(10186872)
                            if ((int32_t)rd32(sp0 - 0xccu) >= 0)
                            {
                                edx = rd32(sp0 - 0xccu);
                            }
                            else
                            {
    COW_AT(1018687a)
                                wr32(sp0 - 0xccu, 0u);
                                eax = eax + 1u;
                                edx = 0u;
                            }
    COW_AT(10186887)
                            if ((int32_t)ecx < 0)
                            {
    COW_AT(1018688b)
                                eax = eax + 1u;
                                ecx = 0u;
                            }
    COW_AT(1018688e)
                            if ((int32_t)eax > 2)
                            {
                                loc_d4 = rd32(sp0 - 0xd4u);
                                loc_d0 = rd32(sp0 - 0xd0u);
                                loc_d8 = rd32(sp0 - 0xd8u);
                                loc_c4 = rd32(sp0 - 0xc4u);
                                loc_c8 = rd32(sp0 - 0xc8u);
                                goto L_101869fc;
                            }
    COW_AT(10186897)
                            t121 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu);
                            wr32(esi, t121);
                            t122 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 4u);
                            wr32(esi + 4u, t122);
                            t123 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 8u);
                            wr32(esi + 8u, t123);
                            t124 = ((ebp | 0xffff8000u) << 8u | ebp) << 8u | ebp;
                            t125 = rd32(sp0 - 0xc4u);
                            wr32(esi + 0xcu, t124);
                            t126 = rd32(sp0 - 0xd4u) + 0x18u;
                            wr32(sp0 - 0xd4u, t126);
                            t127 = rd32(sp0 - 0xd0u) + 0x18u;
                            wr32(sp0 - 0xd0u, t127);
                            t128 = rd32(sp0 - 0xd8u) + 0x18u;
                            wr32(sp0 - 0xd8u, t128);
                            t129 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu);
                            wr32(esi + 0x18u, t129);
                            t130 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 4u);
                            wr32(esi + 0x1cu, t130);
                            t131 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 8u);
                            wr32(esi + 0x20u, t131);
                            t132 = ((edx | 0xffff8000u) << 8u | edx) << 8u | edx;
                            wr32(esi + 0x24u, t132);
                            wr32(sp0 - 0xd0u, t127 + 0x18u);
                            wr32(sp0 - 0xd8u, t128 + 0x18u);
                            t133 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu);
                            wr32(esi + 0x30u, t133);
                            t134 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 4u);
                            wr32(esi + 0x34u, t134);
                            t135 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 8u);
                            wr32(esi + 0x38u, t135);
                            t136 = ((ecx | 0xffff8000u) << 8u | ecx) << 8u | ecx;
                            wr32(esi + 0x3cu, t136);
                            wr32(sp0 - 0xc4u, t125 + 0x48u);
                            wr32(sp0 - 0xd0u, t127 + 0x30u);
                            wr32(sp0 - 0xd4u, t126 + 0x30u);
                            wr32(sp0 - 0xd8u, t128 + 0x30u);
                            if ((int32_t)rd32(sp0 - 0xc8u) > 1500)
                            {
                                eax = rd32(sp0 - 0xc8u);
                                edx = t126 + 0x30u;
                                goto L_10186a24;
                            }
                            eax = rd32(sp0 - 0xc8u);
                            esi = esi + 0x48u;
                            loc_d4 = t126 + 0x30u;
                            loc_d0 = t127 + 0x30u;
                            loc_d8 = t128 + 0x30u;
                            loc_c4 = t125 + 0x48u;
    COW_AT(101869f7)
                            wr32(sp0 - 0xc8u, eax + 1u);
                            loc_c8 = eax + 1u;
L_101869fc: ;
    COW_AT(101869fc)
                            t137 = rd32(sp0 - 0xc0u) + 1u;
                            t138 = rd32(sp0 - 0xc0u);
                            wr32(sp0 - 0xc0u, t137);
                            if ((int32_t)(t138 + 1u) < (int16_t)rd16(rd32(sp0 - 0xa0u) + 0xcu))
                            {
                                eax = t137;
                                edi = edi + 8u;
                                loc_c0 = t137;
                                goto L_1018643a;
                            }
                            edx = (uint32_t)(int16_t)rd16(rd32(sp0 - 0xa0u) + 0xcu);
    COW_AT(10186a1b)
                            eax = loc_c8;
L_10186a24: ;
    COW_AT(10186a24)
                            if (eax == 0u)
                            {
                                loc_b0 = rd32(sp0 - 0xb0u);
                                loc_b8 = rd32(sp0 - 0xb8u);
                                loc_bc = rd32(sp0 - 0xbcu);
                                loc_ac = rd32(sp0 - 0xacu);
                                loc_a8 = rd32(sp0 - 0xa8u);
                                loc_b4 = rd32(sp0 - 0xb4u);
                                loc_9c = rd32(sp0 - 0x9cu);
                                loc_118_f = (double)rdf32(sp0 - 0x118u);
                            }
                            else
                            {
    COW_AT(10186a28)
                                wr32(sp0 - 0x12cu, 0x18u);
                                wr32(sp0 - 0x130u, COW_IMG(0x10639088u));
                                wr32(sp0 - 0x134u, eax);
                                wr32(sp0 - 0x138u, 4u);
                                g->ebx = ebx;
                                g->esp = sp0 - 0x128u;
                                cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 4u, eax, COW_IMG(0x10639088u), 0x18u);
                                loc_b0 = rd32(sp0 - 0xb0u);
                                loc_b8 = rd32(sp0 - 0xb8u);
                                loc_bc = rd32(sp0 - 0xbcu);
                                loc_ac = rd32(sp0 - 0xacu);
                                loc_a8 = rd32(sp0 - 0xa8u);
                                loc_b4 = rd32(sp0 - 0xb4u);
                                loc_9c = rd32(sp0 - 0x9cu);
                                loc_118_f = (double)rdf32(sp0 - 0x118u);
                            }
                        }
                    }
                }
    COW_AT(10186a3c)
                wr32(sp0 - 0xb4u, loc_b4 + 8u);
                wr32(sp0 - 0x9cu, loc_9c - 1u);
                if (loc_9c != 1u)
                {
                    edx = loc_b4 + 8u;
                    loc_b4 = loc_b4 + 8u;
                    loc_9c = loc_9c - 1u;
                    goto L_101862e4;
                }
                loc_b4 = loc_b4 + 8u;
    COW_AT(10186a5c)
                ebx = rd32(sp0 - 0x98u);
            }
        }
        else
        {
            edx = eax + 4u;
            eax = rd32(eax) & 0x7ffu;
    COW_AT(101862c9)
            t53 = eax * 8u + edx;
            wr32(sp0 - 0xb4u, t53);
            loc_b4 = t53;
        }
    COW_AT(10186a63)
        if (rd32(loc_b4) != 0u)
        {
            eax = rd32(loc_b4);
            goto L_101862b4;
        }
    COW_AT(10186a71)
        ecx = loc_a8;
        edx = loc_ac;
        ebp = rd32(sp0 - 0x90u);
L_10186a83: ;
    COW_AT(10186a83)
        wr32(sp0 - 0xa8u, ecx + 1u);
        if ((int32_t)(ecx + 1u) <= (int32_t)loc_b8)
        {
            loc_a8 = ecx + 1u;
            ecx = ecx + 1u;
            goto L_1018629e;
        }
L_10186a97: ;
    COW_AT(10186a97)
        wr32(sp0 - 0xacu, edx + 1u);
        if ((int32_t)(edx + 1u) <= (int32_t)loc_bc)
        {
            loc_ac = edx + 1u;
            edx = edx + 1u;
            goto L_10186287;
        }
    }
L_10186aa8: ;
    COW_AT(10186aa8)
    wr32(sp0 - 0x12cu, 1u);
    wr32(sp0 - 0x130u, 0x89u);
    t139 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t139);
    g->edx = rd32(t139);
    t140 = rd32(t139);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(t140 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t139, 0x89u, 1u);
    t141 = g->edx;
    edx = t141;
    COW_AT(10186ac1)
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, 0x1bu);
    t142 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t142);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t142) + 0xc8u), rd32(t142), 3, t142, 0x1bu, 0u);
    COW_AT(10186ad6)
    wr32(sp0 - 0x12cu, 1u);
    wr32(sp0 - 0x130u, 0xfu);
    t143 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t143);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t143) + 0xc8u), rd32(t143), 3, t143, 0xfu, 1u);
    COW_AT(10186aec)
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, 0x1cu);
    t144 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t144);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t144) + 0xc8u), rd32(t144), 3, t144, 0x1cu, 0u);
    COW_AT(10186b02)
    wr32(sp0 - 0x12cu, 1u);
    wr32(sp0 - 0x130u, 0x16u);
    t145 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t145);
    g->esp = sp0 - 0x128u;
    cow_thiscall(g, rd32(rd32(t145) + 0xc8u), rd32(t145), 3, t145, 0x16u, 1u);
    COW_AT(10186b18)
    wr32(sp0 - 0x12cu, 1u);
    wr32(sp0 - 0x130u, 0xeu);
    t146 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x134u, t146);
    g->eax = t146;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t147 = rd32(t146);
    t148 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x128u;
    t149 = cow_thiscall(g, rd32(t147 + 0xc8u), t147, 3, t146, 0xeu, 1u);
    t150 = g->ecx;
    t151 = g->edx;
    eax = t149;
    ecx = t150;
    edx = t151;
    COW_AT(10186b2e)
    if (rd8(ebp + 0x39598u) == 0u)
    {
        ebx = rd32(sp0 - 0x11cu);
        ebp = rd32(sp0 - 0x120u);
        esi = rd32(sp0 - 0x124u);
        edi = rd32(sp0 - 0x128u);
        goto L_10186b61;
    }
    ebx = rd32(sp0 - 0x11cu);
    ebp = rd32(sp0 - 0x120u);
    esi = rd32(sp0 - 0x124u);
    edi = rd32(sp0 - 0x128u);
    COW_AT(10186b3c)
    wr32(sp0 - 0x11cu, sp0 - 0x40u);
    wr32(sp0 - 0x120u, 3u);
    t152 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x124u, t152);
    g->esp = sp0 - 0x118u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x94u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t152, 3u, sp0 - 0x40u);
    COW_AT(10186b58)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_1018638a: ;
    COW_AT(1018638a)
    ebp = loc_c0;
    goto L_1018638e;
L_1018643a: ;
    COW_AT(1018643a)
    ecx = loc_c4;
    edx = loc_d4;
    ebp = loc_d0;
    loc_118_f = (double)rdf32(sp0 - 0x118u);
    goto L_10186446;
L_10186b61: ;
    COW_AT(10186b61)
    wr32(sp0 - 0x11cu, rd32(COW_IMG(0x10621c00u)));
    g->esp = sp0 - 0x118u;
    cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10621c00u)));
    COW_AT(10186b6c)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10185ca0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10185cc7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x128u);
        in_esi = rd32(sp0 - 0x124u);
        in_ebp = rd32(sp0 - 0x120u);
        in_ebx = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x90u, self);
        (void)sp0;
        return 1;
    }
    case 0x10185ce2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x128u);
        in_esi = rd32(sp0 - 0x124u);
        in_ebp = rd32(sp0 - 0x120u);
        in_ebx = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x90u, self);
        (void)sp0;
        return 1;
    }
    case 0x10185cf6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x128u);
        in_esi = rd32(sp0 - 0x124u);
        in_ebp = rd32(sp0 - 0x120u);
        in_ebx = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x90u, self);
        (void)sp0;
        return 1;
    }
    case 0x10185d38u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185d4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185d64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185d7au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185d90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185da6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185dbcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185dddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10185de7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10185e03u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        wr32(sp0 - 0x12cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10185e0au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        wr32(sp0 - 0x12cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10185e0cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10185e17u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x12cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185e1au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185e32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185e49u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185e65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185e7bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185fe2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x134u;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x1018607cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x140u;
        g->esi = arg1;
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x1018611bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14cu;
        g->esi = arg1;
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x101861bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->esi = arg1;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        wr32(sp0 - 0x118u, 0x3f800000u);
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x110u, 0u);
        wr32(sp0 - 0x108u, 0u);
        wr32(sp0 - 0x104u, 0x3f800000u);
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0xf8u, 0u);
        wr32(sp0 - 0xf4u, 0u);
        wr32(sp0 - 0xf0u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x101861c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x101861d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x101861f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186209u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186212u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186218u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186224u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186228u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x1018622fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186235u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186241u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186245u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x1018624cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186250u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186258u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x1018625au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x1018625fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        g->esi = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186265u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186271u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        uint32_t loc_bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186275u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b0;
        uint32_t loc_b8;
        uint32_t loc_bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x80u);
        wr32(sp0 - 0x130u, sp0 - 0x80u);
        wr32(sp0 - 0x12cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10186287u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018629eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101862b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101862c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101862d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101862ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101862e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186303u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018630eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186322u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018632du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186339u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186344u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018634fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186372u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1018638au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_cc;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1018638eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_cc;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101863a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_cc;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101863c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_cc;
        uint32_t loc_d4;
        uint32_t loc_d8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x128u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101863d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_118;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_cc;
        uint32_t loc_d4;
        uint32_t loc_d8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x128u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101863eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_cc;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101863fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_cc;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10186415u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_118_f;
        uint32_t loc_c4;
        uint32_t loc_cc;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x128u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0xc8u, 0u);
        wr32(sp0 - 0xc0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1018643au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186446u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101864c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018652bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186592u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018660cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186675u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101866dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186759u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101867c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186829u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186836u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186848u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018685eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018686bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186872u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018687au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186887u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018688bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018688eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186897u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101869f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101869fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186a1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186a24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        g->ecx = 0x18u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186a28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x128u;
        g->ecx = 0x18u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186a3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186a5cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186a63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186a71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186a83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186a97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186aa8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_12c;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186ac1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186ad6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186aecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186b02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186b18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186b2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186b3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186b58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        wr32(sp0 - 0x11cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10186b61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10186b6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x154u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x118u);
        wr32(sp0 - 0x14cu, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x80u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10185ca0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10185ca0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
