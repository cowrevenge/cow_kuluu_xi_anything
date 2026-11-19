/* f_0x102dfa27 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102dfa27(Guest* g)
{
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
    double d47;
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
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_cc;
    uint32_t loc_d0;
    uint32_t loc_d4;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
    cow_frame(g, sp0, 232u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102dfa40u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0xccu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); goto E_102dfa40;
    case 0x102dfa4au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); goto E_102dfa4a;
    case 0x102dfa65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfa65;
    case 0x102dfa6au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfa6a;
    case 0x102dfa6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfa6e;
    case 0x102dfa78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfa78;
    case 0x102dfa8au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfa8a;
    case 0x102dfa8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfa8f;
    case 0x102dfa97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfa97;
    case 0x102dfaa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfaa7;
    case 0x102dfaacu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfaac;
    case 0x102dfab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfab0;
    case 0x102dfac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfac7;
    case 0x102dfad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfad6;
    case 0x102dfadbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfadb;
    case 0x102dfaeau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfaea;
    case 0x102dfaefu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); in_ebx = rd32(sp0 - 0xccu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xccu); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_102dfaef;
    case 0x102dfb14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102dfb14;
    case 0x102dfb26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102dfb26;
    case 0x102dfb2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_102dfb2a;
    case 0x102dfb34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_102dfb34;
    case 0x102dfb3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_102dfb3e;
    case 0x102dfb4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_102dfb4f;
    case 0x102dfb6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102dfb6b;
    case 0x102dfb7au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102dfb7a;
    case 0x102dfb7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102dfb7c;
    case 0x102dfba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_102dfba2;
    case 0x102dfbbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102dfbbf;
    case 0x102dfbceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102dfbce;
    case 0x102dfbd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102dfbd0;
    case 0x102dfc0au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_102dfc0a;
    case 0x102dfc10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_102dfc10;
    case 0x102dfc1au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_102dfc1a;
    case 0x102dfc22u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_102dfc22;
    case 0x102dfc2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_102dfc2a;
    case 0x102dfc3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_102dfc3c;
    case 0x102dfc56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102dfc56;
    case 0x102dfc67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102dfc67;
    case 0x102dfc82u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dfc82;
    case 0x102dfc94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dfc94;
    case 0x102dfc9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dfc9c;
    case 0x102dfcacu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dfcac;
    case 0x102dfcb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dfcb3;
    case 0x102dfcb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dfcb8;
    case 0x102dfcc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dfcc9;
    case 0x102dfcddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dfcdd;
    case 0x102dfce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); x0 = ST(0); goto E_102dfce9;
    case 0x102dfe57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); x0 = ST(0); goto E_102dfe57;
    case 0x102dfe59u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); goto E_102dfe59;
    case 0x102dfe7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102dfe7f;
    case 0x102dfe94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102dfe94;
    case 0x102dfe9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_102dfe9f;
    case 0x102dfeaau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102dfeaa;
    case 0x102dfeacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102dfeac;
    default: break;
    }
#endif

    COW_AT(102dfa27)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x10328243u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
    wr32(sp0 - 0xccu, in_ebx);
    if (rd8(self + 8u) == 5u)
    {
        loc_10 = t1;
    COW_AT(102dfa4a)
        wr32(sp0 - 0xd0u, in_esi);
        wr32(sp0 - 0xd4u, in_edi);
        t2 = rd32(rd32(self) + 0x1058u);
        if (rd32(rd32(self + 4u) + 0x1058u) == t2 >> 1u)
        {
            eax = t2;
            ecx = rd32(self);
            edx = rd32(self + 4u);
            goto L_102dfa78;
        }
        eax = t2;
        ecx = rd32(self);
        edx = rd32(self + 4u);
        esi = rd32(rd32(self + 4u) + 0x1058u);
    COW_AT(102dfa65)
        if (esi != 1u) goto L_102dfa6e;
    COW_AT(102dfa6a)
        if (eax == esi) goto L_102dfa78;
L_102dfa6e: ;
    COW_AT(102dfa6e)
        eax = 0x80004005u;
        loc_4 = in_ebp;
        loc_cc = in_ebx;
        loc_d0 = in_esi;
        loc_d4 = in_edi;
L_102dfeaa: ;
    COW_AT(102dfeaa)
        esi = loc_d0;
        edi = loc_d4;
    }
    else
    {
        loc_10 = t1;
    COW_AT(102dfa40)
        eax = 0x80004005u;
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_cc = in_ebx;
    }
    COW_AT(102dfeac)
    wr32(g->fs_base, loc_10);
    g->ebx = loc_cc;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102dfa78: ;
    COW_AT(102dfa78)
    if (rd32(edx + 0x105cu) == rd32(ecx + 0x105cu) >> 1u) goto L_102dfa97;
    esi = rd32(edx + 0x105cu);
    COW_AT(102dfa8a)
    if (esi != 1u) goto L_102dfa6e;
    COW_AT(102dfa8f)
    if (rd32(ecx + 0x105cu) != esi) goto L_102dfa6e;
L_102dfa97: ;
    COW_AT(102dfa97)
    if (rd32(edx + 0x1060u) != rd32(ecx + 0x1060u) >> 1u) goto L_102dfa6e;
    COW_AT(102dfaa7)
    if (eax > 1u)
    {
    COW_AT(102dfaac)
        if (eax & 1u)
        {
    COW_AT(102dfab0)
            wr32(ecx + 0x1058u, eax & 0xfffffffeu);
            wr32(rd32(self) + 0x1064u, rd32(rd32(self) + 0x1064u) - rd32(rd32(self) + 0x1068u));
        }
    }
    COW_AT(102dfac7)
    if (rd32(rd32(self) + 0x105cu) > 1u)
    {
        eax = rd32(rd32(self) + 0x105cu);
        ecx = rd32(self) + 0x105cu;
    COW_AT(102dfad6)
        wr32(ecx, eax & 0xfffffffeu);
    }
    COW_AT(102dfadb)
    if (rd32(rd32(self) + 0x1060u) <= 1u)
    {
        ecx = rd32(self) + 0x1060u;
    }
    else
    {
        eax = rd32(rd32(self) + 0x1060u);
        ecx = rd32(self) + 0x1060u;
    COW_AT(102dfaea)
        wr32(ecx, eax & 0xfffffffeu);
    }
    COW_AT(102dfaef)
    t3 = rd32(rd32(self + 4u) + 0x1058u);
    wr32(sp0 - 0xd8u, t3 << 4u);
    g->eax = t3 << 4u;
    g->esp = sp0 - 0xccu;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t3 << 4u, in_edi, in_esi);
    t5 = g->edx;
    wr32(sp0 - 0x18u, t4);
    wr32(sp0 - 8u, 0u);
    if (t4 == 0u)
    {
        ecx = rd32(sp0 - 0xd8u);
        edx = t5;
    COW_AT(102dfb26)
        wr32(sp0 - 0x24u, 0u);
        loc_24 = 0u;
    }
    else
    {
        eax = t4;
        ecx = rd32(sp0 - 0xd8u);
        edx = t5;
        esi = t3;
        loc_18 = t4;
    COW_AT(102dfb14)
        wr32(sp0 - 0xd8u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0xdcu, esi);
        wr32(sp0 - 0xe0u, 0x10u);
        wr32(sp0 - 0xe4u, eax);
        g->ecx = ecx;
        g->esp = sp0 - 0xd4u;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
        t6 = g->ecx;
        t7 = g->edx;
        t8 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0x24u, t8);
        ecx = t6;
        edx = t7;
        loc_24 = t8;
    }
    COW_AT(102dfb2a)
    wr32(sp0 - 8u, 0xffffffffu);
    if (loc_24 != 0u)
    {
    COW_AT(102dfb3e)
        if (rd32(rd32(self) + 0x105cu) != 1u)
        {
            esi = rd32(rd32(self) + 0x1058u);
    COW_AT(102dfba2)
            t14 = esi << 2u << 4u;
            wr32(sp0 - 0xd8u, t14);
            g->eax = t14;
            g->esp = sp0 - 0xccu;
            t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t14, rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
            t16 = g->edx;
            wr32(sp0 - 0x18u, t15);
            wr32(sp0 - 8u, 2u);
            if (t15 == 0u)
            {
    COW_AT(102dfbce)
                edx = 0u;
            }
            else
            {
                eax = t15;
                ecx = rd32(sp0 - 0xd8u);
                edx = t16;
                esi = esi << 2u;
                loc_18 = t15;
    COW_AT(102dfbbf)
                wr32(sp0 - 0xd8u, COW_IMG(0x102d2a17u));
                wr32(sp0 - 0xdcu, esi);
                wr32(sp0 - 0xe0u, 0x10u);
                wr32(sp0 - 0xe4u, eax);
                g->esp = sp0 - 0xd4u;
                cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
                edx = rd32(sp0 - 0x18u);
            }
    COW_AT(102dfbd0)
            wr32(sp0 - 8u, 0xffffffffu);
            t17 = rd32(rd32(self) + 0x1058u);
            t18 = edx + t17 * 0x10u;
            wr32(sp0 - 0x34u, t18);
            t19 = edx + t17 * 0x20u;
            wr32(sp0 - 0x20u, t19);
            t20 = edx + t17 * 0x30u;
            wr32(sp0 - 0x2cu, t20);
            wr32(sp0 - 0x3cu, edx);
            wr32(sp0 - 0x1cu, edx);
            eax = t17;
            ecx = t19;
            esi = t18;
            loc_3c = edx;
            loc_1c = edx;
            edx = t20;
            loc_34 = t18;
            loc_20 = t19;
            loc_2c = t20;
        }
        else
        {
            esi = rd32(rd32(self) + 0x1058u);
    COW_AT(102dfb4f)
            t9 = esi << 1u << 4u;
            wr32(sp0 - 0xd8u, t9);
            g->eax = t9;
            g->esp = sp0 - 0xccu;
            t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t9, rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
            t11 = g->edx;
            wr32(sp0 - 0x18u, t10);
            wr32(sp0 - 8u, 1u);
            if (t10 == 0u)
            {
    COW_AT(102dfb7a)
                ecx = 0u;
            }
            else
            {
                eax = t10;
                ecx = rd32(sp0 - 0xd8u);
                edx = t11;
                esi = esi << 1u;
                loc_18 = t10;
    COW_AT(102dfb6b)
                wr32(sp0 - 0xd8u, COW_IMG(0x102d2a17u));
                wr32(sp0 - 0xdcu, esi);
                wr32(sp0 - 0xe0u, 0x10u);
                wr32(sp0 - 0xe4u, eax);
                g->esp = sp0 - 0xd4u;
                cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
                ecx = rd32(sp0 - 0x18u);
            }
    COW_AT(102dfb7c)
            wr32(sp0 - 8u, 0xffffffffu);
            t12 = rd32(rd32(self) + 0x1058u);
            t13 = ecx + t12 * 0x10u;
            wr32(sp0 - 0x3cu, ecx);
            wr32(sp0 - 0x1cu, ecx);
            wr32(sp0 - 0x34u, t13);
            wr32(sp0 - 0x20u, ecx);
            wr32(sp0 - 0x2cu, t13);
            eax = t12;
            edx = t13;
            esi = t13;
            loc_3c = ecx;
            loc_1c = ecx;
            loc_34 = t13;
            loc_20 = ecx;
            loc_2c = t13;
        }
    COW_AT(102dfc0a)
        if (loc_3c != 0u)
        {
    COW_AT(102dfc1a)
            if (eax != 1u)
            {
                eax = loc_1c;
    COW_AT(102dfc2a)
                wr32(sp0 - 0x40u, eax + 0x10u);
                wr32(sp0 - 0x44u, esi + 0x10u);
                ecx = ecx + 0x10u;
                edx = edx + 0x10u;
                loc_40 = eax + 0x10u;
                loc_44 = esi + 0x10u;
            }
            else
            {
                eax = loc_1c;
    COW_AT(102dfc22)
                wr32(sp0 - 0x40u, eax);
                wr32(sp0 - 0x44u, esi);
                loc_40 = eax;
                loc_44 = esi;
            }
    COW_AT(102dfc3c)
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x48u, ecx);
            wr32(sp0 - 0x18u, edx);
            if (rd32(rd32(self + 4u) + 0x1060u) == 0u)
            {
                eax = rd32(self + 4u);
                goto L_102dfe94;
            }
            eax = rd32(self + 4u);
            loc_18 = edx;
            loc_28 = 0u;
            loc_48 = ecx;
            loc_14 = rd32(sp0 - 0x14u);
L_102dfc56: ;
    COW_AT(102dfc56)
            wr32(sp0 - 0x14u, 0u);
            if (rd32(eax + 0x105cu) == 0u)
            {
                loc_14 = 0u;
                goto L_102dfe7f;
            }
            loc_14 = 0u;
L_102dfc67: ;
    COW_AT(102dfc67)
            wr32(sp0 - 0xd8u, loc_1c);
            wr32(sp0 - 0xdcu, loc_28 * 2u);
            wr32(sp0 - 0xe0u, loc_14 * 2u);
            g->edx = rd32(rd32(self));
            t21 = rd32(rd32(self));
            g->esp = sp0 - 0xd4u;
            cow_thiscall(g, rd32(t21 + 4u), rd32(self), 3, loc_14 * 2u, loc_28 * 2u, loc_1c);
            t22 = g->edx;
            if (esi == rd32(sp0 - 0x1cu))
            {
                edx = t22;
                edi = loc_28 * 2u;
            }
            else
            {
                edi = loc_28 * 2u;
    COW_AT(102dfc82)
                wr32(sp0 - 0xd8u, esi);
                wr32(sp0 - 0xdcu, edi + 1u);
                t23 = rd32(sp0 - 0x14u) * 2u;
                wr32(sp0 - 0xe0u, t23);
                g->edx = rd32(rd32(self));
                t24 = rd32(rd32(self));
                g->esp = sp0 - 0xd4u;
                cow_thiscall(g, rd32(t24 + 4u), rd32(self), 3, t23, edi + 1u, esi);
                t25 = g->edx;
                edx = t25;
            }
    COW_AT(102dfc94)
            if (rd32(sp0 - 0x20u) != rd32(sp0 - 0x1cu))
            {
                eax = rd32(sp0 - 0x20u);
    COW_AT(102dfc9c)
                wr32(sp0 - 0xd8u, eax);
                wr32(sp0 - 0xdcu, edi);
                t26 = rd32(sp0 - 0x14u) * 2u + 1u;
                wr32(sp0 - 0xe0u, t26);
                g->edx = rd32(rd32(self));
                t27 = rd32(rd32(self));
                g->esp = sp0 - 0xd4u;
                cow_thiscall(g, rd32(t27 + 4u), rd32(self), 3, t26, edi, eax);
                t28 = g->edx;
                edx = t28;
            }
    COW_AT(102dfcac)
            if (rd32(sp0 - 0x2cu) != esi)
            {
                eax = rd32(sp0 - 0x2cu);
    COW_AT(102dfcb3)
                if (eax != rd32(sp0 - 0x20u))
                {
    COW_AT(102dfcb8)
                    wr32(sp0 - 0xd8u, eax);
                    wr32(sp0 - 0xdcu, edi + 1u);
                    t29 = rd32(sp0 - 0x14u) * 2u + 1u;
                    wr32(sp0 - 0xe0u, t29);
                    g->edx = rd32(rd32(self));
                    t30 = rd32(rd32(self));
                    g->esp = sp0 - 0xd4u;
                    cow_thiscall(g, rd32(t30 + 4u), rd32(self), 3, t29, edi + 1u, eax);
                    t31 = g->edx;
                    edx = t31;
                }
            }
    COW_AT(102dfcc9)
            wr32(sp0 - 0x30u, 0u);
            if (rd32(rd32(self + 4u) + 0x1058u) == 0u)
            {
                loc_30 = 0u;
            }
            else
            {
    COW_AT(102dfcdd)
                t32 = rd32(sp0 - 0x24u);
                wr32(sp0 - 0x38u, t32);
                loc_30 = 0u;
                loc_38 = t32;
                x0 = (double)rdf32(COW_IMG(0x1032a3bcu));
L_102dfce9: ;
    COW_AT(102dfce9)
                d33 = fr(g, (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x40u) + 8u) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x1cu) + 8u));
                d34 = fr(g, (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x40u) + 4u) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x1cu) + 4u));
                d35 = fr(g, (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x40u)) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x1cu)));
                wrf32(sp0 - 0x90u, (float)(double)(float)d33);
                d36 = fr(g, (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x40u) + 0xcu) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x1cu) + 0xcu));
                wrf32(sp0 - 0x8cu, (float)(double)(float)d36);
                d37 = fr(g, d35 + (double)rdf32(esi + loc_30 * 0x20u));
                wrf32(sp0 - 0xb8u, (float)(double)(float)d37);
                d38 = fr(g, (double)(float)d36 + (double)rdf32(esi + loc_30 * 0x20u + 0xcu));
                d39 = fr(g, (double)(float)d33 + (double)rdf32(esi + loc_30 * 0x20u + 8u));
                d40 = fr(g, d34 + (double)rdf32(esi + loc_30 * 0x20u + 4u));
                wrf32(sp0 - 0xacu, (float)(double)(float)d38);
                d41 = fr(g, (double)(float)d37 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x44u)));
                wrf32(sp0 - 0x88u, (float)(double)(float)d41);
                d42 = fr(g, d40 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x44u) + 4u));
                wrf32(sp0 - 0x84u, (float)(double)(float)d42);
                d43 = fr(g, (double)(float)d41 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x20u)));
                d44 = fr(g, (double)(float)d38 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x44u) + 0xcu));
                d45 = fr(g, d39 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x44u) + 8u));
                wrf32(sp0 - 0x58u, (float)(double)(float)d43);
                d46 = fr(g, (double)(float)d42 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x20u) + 4u));
                wrf32(sp0 - 0x54u, (float)(double)(float)d46);
                d47 = fr(g, d45 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x20u) + 8u));
                wrf32(sp0 - 0x50u, (float)(double)(float)d47);
                d48 = fr(g, (double)(float)d46 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x48u) + 4u));
                d49 = fr(g, (double)(float)d43 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x48u)));
                d50 = fr(g, d44 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x20u) + 0xcu));
                wrf32(sp0 - 0x64u, (float)(double)(float)d48);
                d51 = fr(g, (double)(float)d47 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x48u) + 8u));
                wrf32(sp0 - 0x60u, (float)(double)(float)d51);
                d52 = fr(g, d50 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x48u) + 0xcu));
                wrf32(sp0 - 0x5cu, (float)(double)(float)d52);
                d53 = fr(g, d49 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x2cu)));
                wr32(sp0 - 0x38u, loc_38 + 0x10u);
                d54 = fr(g, (double)(float)d51 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x2cu) + 8u));
                d55 = fr(g, (double)(float)d48 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x2cu) + 4u));
                wrf32(sp0 - 0xa0u, (float)(double)(float)d54);
                d56 = fr(g, (double)(float)d52 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x2cu) + 0xcu));
                wr32(sp0 - 0x30u, loc_30 + 1u);
                wrf32(sp0 - 0x9cu, (float)(double)(float)d56);
                d57 = fr(g, d53 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x18u)));
                wrf32(sp0 - 0xc8u, (float)(double)(float)d57);
                d58 = fr(g, (double)(float)d56 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x18u) + 0xcu));
                d59 = fr(g, (double)(float)d54 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x18u) + 8u));
                d60 = fr(g, d55 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x18u) + 4u));
                wrf32(sp0 - 0xbcu, (float)(double)(float)d58);
                d61 = (double)(float)fr(g, (double)(float)d57 * x0);
                wrf32(sp0 - 0x78u, (float)d61);
                d62 = (double)(float)fr(g, d60 * x0);
                wrf32(sp0 - 0x74u, (float)d62);
                d63 = (double)(float)fr(g, d59 * x0);
                wrf32(sp0 - 0x70u, (float)d63);
                d64 = (double)(float)fr(g, (double)(float)d58 * x0);
                wrf32(sp0 - 0x6cu, (float)d64);
                t65 = rd32(sp0 - 0x1cu);
                esi = sp0 - 0x78u;
                edi = loc_38;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                if (loc_30 + 1u < rd32(rd32(self + 4u) + 0x1058u))
                {
                    esi = rd32(sp0 - 0x34u);
                    loc_30 = loc_30 + 1u;
                    loc_38 = loc_38 + 0x10u;
                    goto L_102dfce9;
                }
                edx = loc_30 * 0x20u + t65;
                esi = rd32(sp0 - 0x34u);
                loc_30 = loc_30 + 1u;
    COW_AT(102dfe57)
            }
    COW_AT(102dfe59)
            t66 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0xd8u, t66);
            t67 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0xdcu, t67);
            t68 = rd32(sp0 - 0x14u);
            wr32(sp0 - 0xe0u, t68);
            g->edx = edx;
            g->esp = sp0 - 0xd4u;
            cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 8u), rd32(self + 4u), 3, t68, t67, t66);
            t69 = g->edx;
            t70 = rd32(sp0 - 0x14u) + 1u;
            wr32(sp0 - 0x14u, t70);
            if (t70 < rd32(rd32(self + 4u) + 0x105cu))
            {
                loc_18 = rd32(sp0 - 0x18u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_34 = rd32(sp0 - 0x34u);
                loc_20 = rd32(sp0 - 0x20u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_40 = rd32(sp0 - 0x40u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_14 = t70;
                goto L_102dfc67;
            }
            edx = t69;
            loc_18 = rd32(sp0 - 0x18u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_34 = rd32(sp0 - 0x34u);
            loc_20 = rd32(sp0 - 0x20u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_14 = t70;
L_102dfe7f: ;
    COW_AT(102dfe7f)
            wr32(sp0 - 0x28u, loc_28 + 1u);
            if (loc_28 + 1u < rd32(rd32(self + 4u) + 0x1060u))
            {
                eax = rd32(self + 4u);
                loc_28 = loc_28 + 1u;
                goto L_102dfc56;
            }
            eax = rd32(self + 4u);
            ecx = loc_28 + 1u;
L_102dfe94: ;
    COW_AT(102dfe94)
            wr32(sp0 - 0xd8u, loc_3c);
            g->eax = eax;
            g->esp = sp0 - 0xd4u;
            t71 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_3c);
            t72 = g->edx;
            eax = t71;
            ecx = rd32(sp0 - 0xd8u);
            edx = t72;
            esi = 0u;
        }
        else
        {
    COW_AT(102dfc10)
            esi = 0x8007000eu;
        }
    COW_AT(102dfe9f)
        t73 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0xd8u, t73);
        g->esp = sp0 - 0xd4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t73);
        t74 = g->edx;
        eax = esi;
        edx = t74;
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
    }
    else
    {
    COW_AT(102dfb34)
        eax = 0x8007000eu;
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
    }
    goto L_102dfeaa;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102dfa27(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102dfa40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0xccu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfa4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfa65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfa6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfa6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfa78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfa8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfa8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfa97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfaa7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfaacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfab0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfac7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfad6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfadbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfaeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfaefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        in_ebx = rd32(sp0 - 0xccu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102dfb14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dfb26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dfb2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dfb34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfb3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        (void)sp0;
        return 1;
    }
    case 0x102dfb4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        (void)sp0;
        return 1;
    }
    case 0x102dfb6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102dfb7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102dfb7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102dfba2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        (void)sp0;
        return 1;
    }
    case 0x102dfbbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102dfbceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102dfbd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102dfc0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfc9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfcacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfcb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfcb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfcc9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfcddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dfce9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_38;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        x0 = ST(0);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfe57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_38;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        x0 = ST(0);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfe59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfe7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfe94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfe9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfeaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfeacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xccu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102dfa27(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102dfa27(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
