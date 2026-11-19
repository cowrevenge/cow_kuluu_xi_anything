/* f_0x102dbe10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102dbe10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102dbe23u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe23;
    case 0x102dbe2du: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe2d;
    case 0x102dbe3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe3d;
    case 0x102dbe4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe4d;
    case 0x102dbe58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe58;
    case 0x102dbe63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe63;
    case 0x102dbe75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe75;
    case 0x102dbe7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe7a;
    case 0x102dbe7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe7d;
    case 0x102dbe82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe82;
    case 0x102dbe8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe8b;
    case 0x102dbe94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe94;
    case 0x102dbe9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbe9d;
    case 0x102dbea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbea6;
    case 0x102dbeadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbead;
    case 0x102dbec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbec2;
    case 0x102dbec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbec5;
    case 0x102dbeccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbecc;
    case 0x102dbed6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbed6;
    case 0x102dbedfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbedf;
    case 0x102dbee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbee4;
    case 0x102dbee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbee7;
    case 0x102dbeecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbeec;
    case 0x102dbef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbef5;
    case 0x102dbefeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbefe;
    case 0x102dbf07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf07;
    case 0x102dbf10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf10;
    case 0x102dbf19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf19;
    case 0x102dbf23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf23;
    case 0x102dbf2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf2d;
    case 0x102dbf34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf34;
    case 0x102dbf69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf69;
    case 0x102dbf88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf88;
    case 0x102dbf92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf92;
    case 0x102dbf9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbf9c;
    case 0x102dbfafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbfaf;
    case 0x102dbfc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbfc3;
    case 0x102dbfcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dbfcd;
    case 0x102dc002u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc002;
    case 0x102dc008u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc008;
    case 0x102dc017u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc017;
    case 0x102dc01eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc01e;
    case 0x102dc023u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc023;
    case 0x102dc02au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc02a;
    case 0x102dc077u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc077;
    case 0x102dc0b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc0b6;
    case 0x102dc0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc0d9;
    case 0x102dc0edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc0ed;
    case 0x102dc0f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc0f4;
    case 0x102dc0f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc0f7;
    case 0x102dc118u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc118;
    case 0x102dc16bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc16b;
    case 0x102dc170u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc170;
    case 0x102dc175u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc175;
    case 0x102dc17au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc17a;
    case 0x102dc183u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc183;
    case 0x102dc18eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc18e;
    case 0x102dc1a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1a0;
    case 0x102dc1acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1ac;
    case 0x102dc1b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1b0;
    case 0x102dc1bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1bb;
    case 0x102dc1c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1c8;
    case 0x102dc1cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1cd;
    case 0x102dc1d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1d2;
    case 0x102dc1ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1dd;
    case 0x102dc1ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1ec;
    case 0x102dc1f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1f1;
    case 0x102dc1fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc1fb;
    case 0x102dc218u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc218;
    case 0x102dc21bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc21b;
    case 0x102dc222u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); self = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc222;
    case 0x102dc22eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); self = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc22e;
    case 0x102dc24bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); self = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc24b;
    case 0x102dc251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); self = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc251;
    case 0x102dc25au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); self = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc25a;
    case 0x102dc25fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); self = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc25f;
    case 0x102dc262u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); self = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc262;
    case 0x102dc269u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); self = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc269;
    case 0x102dc26cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc26c;
    case 0x102dc272u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc272;
    case 0x102dc27bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc27b;
    case 0x102dc28au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc28a;
    case 0x102dc28fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc28f;
    case 0x102dc294u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc294;
    case 0x102dc297u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc297;
    case 0x102dc2a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc2a7;
    case 0x102dc2abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc2ab;
    case 0x102dc2b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x44u); in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc2b0;
    case 0x102dc2b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102dc2b1;
    default: break;
    }
#endif

    COW_AT(102dbe10)
    if (rd32(sp0 + 8u) >= 0x12u)
    {
    COW_AT(102dbe2d)
        if ((rd8(rd32(sp0 + 4u) + 1u) & 0xfeu) != 0u)
        {
            edx = in_edx;
            goto L_102dc2ab;
        }
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 1u);
        ebx = rd32(sp0 + 4u);
    COW_AT(102dbe3d)
        if ((rd8(ebx + 2u) & 0xfffffff4u) != 0u)
        {
            edx = rd8(ebx + 2u);
            goto L_102dc2ab;
        }
        edx = rd8(ebx + 2u);
    COW_AT(102dbe4d)
        if (rd16(ebx + 0xcu) == 0u) goto L_102dc2ab;
    COW_AT(102dbe58)
        if (rd16(ebx + 0xeu) == 0u) goto L_102dc2ab;
    COW_AT(102dbe63)
        if ((uint8_t)ecx == 0u)
        {
            edi = (rd8(ebx + 7u) + 7u) >> 3u;
            loc_18 = 0u;
            goto L_102dbead;
        }
        eax = rd8(ebx + 7u);
        edi = (rd8(ebx + 7u) + 7u) >> 3u;
    COW_AT(102dbe75)
        if (eax == 0xfu) goto L_102dbea6;
        eax = eax - 0xfu;
    COW_AT(102dbe7a)
        if (eax == 1u) goto L_102dbe9d;
        eax = eax - 1u;
    COW_AT(102dbe7d)
        if (eax == 8u) goto L_102dbe94;
        eax = eax - 8u;
    COW_AT(102dbe82)
        if (eax != 8u) goto L_102dc2ab;
    COW_AT(102dbe8b)
        loc_18 = 0x15u;
L_102dbead: ;
    COW_AT(102dbead)
        t1 = (rd8(ebx + 0x10u) + 7u) >> 3u;
        if ((edx & 3u) == 1u)
        {
            eax = (edx & 3u) - 1u;
            ecx = rd8(ebx + 0x10u);
            loc_c = t1;
            goto L_102dbf19;
        }
        eax = (edx & 3u) - 1u;
        ecx = rd8(ebx + 0x10u);
        loc_c = t1;
    COW_AT(102dbec2)
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_102dbedf;
        }
        eax = eax - 1u;
    COW_AT(102dbec5)
        if (eax != 1u) goto L_102dc2ab;
        eax = eax - 1u;
    COW_AT(102dbecc)
        if (rd8(ebx + 0x10u) != 8u) goto L_102dc2ab;
    COW_AT(102dbed6)
        loc_10 = 0x32u;
L_102dbf34: ;
    COW_AT(102dbf34)
        t2 = -((uint8_t)((rd8(ebx + 0x11u) & 0x20u) - 0x20u) != 0u) + 1u;
        t3 = rd8(ebx);
        t4 = rd8(ebx + 0x11u);
        wr32(sp0 + 8u, rd32(sp0 + 8u) - 0x12u);
        t5 = (t4 & 0x10u) != 0x10u;
        if (rd32(sp0 + 8u) < t3)
        {
            edx = edx & 8u;
            goto L_102dc2ab;
        }
        eax = t3;
        loc_2c = edx & 8u;
        edx = edx & 8u;
        loc_28 = t2;
        loc_24 = t5;
    COW_AT(102dbf69)
        wr32(sp0 + 8u, rd32(sp0 + 8u) - eax);
        t6 = eax + ebx + 0x12u;
        t7 = rd16(ebx + 5u);
        if (rd32(sp0 + 8u) < t7 * edi) goto L_102dc2ab;
        ecx = t7;
        loc_8 = t6;
        loc_34 = t7 * edi;
    COW_AT(102dbf88)
        if (rd32(self + 0x40u) == 0u) goto L_102dc118;
    COW_AT(102dbf92)
        if (loc_10 != 0x29u) goto L_102dc118;
    COW_AT(102dbf9c)
        if ((int32_t)(ecx + rd16(ebx + 3u)) > 256) goto L_102dc2ab;
        eax = ecx + rd16(ebx + 3u);
    COW_AT(102dbfaf)
        g->eax = eax;
        g->esp = sp0 - 0x3cu;
        t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x400u, in_ebx, in_edi);
        wr32(self + 8u, t8);
        if (t8 != 0u)
        {
            eax = t8;
            edx = t8;
            goto L_102dbfcd;
        }
        edx = t8;
L_102dbfc3: ;
    COW_AT(102dbfc3)
        eax = 0x8007000eu;
L_102dc2b0: ;
    COW_AT(102dc2b0)
    }
    else
    {
    COW_AT(102dbe23)
        eax = 0x80004005u;
        edx = in_edx;
    }
    COW_AT(102dc2b1)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_102dbe94: ;
    COW_AT(102dbe94)
    loc_18 = 0x14u;
    goto L_102dbead;
L_102dbe9d: ;
    COW_AT(102dbe9d)
    loc_18 = 0x19u;
    goto L_102dbead;
L_102dbea6: ;
    COW_AT(102dbea6)
    loc_18 = 0x18u;
    goto L_102dbead;
L_102dbedf: ;
    COW_AT(102dbedf)
    if (ecx == 0xfu)
    {
        ecx = ecx - 0xfu;
        goto L_102dbf10;
    }
    ecx = ecx - 0xfu;
    COW_AT(102dbee4)
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        goto L_102dbf07;
    }
    ecx = ecx - 1u;
    COW_AT(102dbee7)
    if (ecx == 8u)
    {
        ecx = ecx - 8u;
        goto L_102dbefe;
    }
    ecx = ecx - 8u;
    COW_AT(102dbeec)
    if (ecx != 8u) goto L_102dc2ab;
    ecx = ecx - 8u;
    COW_AT(102dbef5)
    loc_10 = 0x15u;
    goto L_102dbf34;
L_102dbefe: ;
    COW_AT(102dbefe)
    loc_10 = 0x14u;
    goto L_102dbf34;
L_102dbf07: ;
    COW_AT(102dbf07)
    loc_10 = 0x19u;
    goto L_102dbf34;
L_102dbf10: ;
    COW_AT(102dbf10)
    loc_10 = 0x18u;
    goto L_102dbf34;
L_102dbf19: ;
    COW_AT(102dbf19)
    if (rd8(ebx + 1u) == 0u) goto L_102dc2ab;
    COW_AT(102dbf23)
    if (rd8(ebx + 0x10u) != 8u) goto L_102dc2ab;
    COW_AT(102dbf2d)
    loc_10 = 0x29u;
    goto L_102dbf34;
L_102dbfcd: ;
    COW_AT(102dbfcd)
    wr32(self + 0x3cu, 1u);
    edi = edx;
    eax = 0xffffffffu;
    ecx = 0x100u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t9 = rd32(self + 8u);
    wr32(sp0 + 4u, loc_8);
    t10 = t9 + rd16(ebx + 3u) * 4u;
    t11 = t9 + rd16(ebx + 3u) * 4u + rd16(ebx + 5u) * 4u;
    if (t9 + rd16(ebx + 3u) * 4u < t9 + rd16(ebx + 3u) * 4u + rd16(ebx + 5u) * 4u)
    {
        loc_14 = t10;
        loc_30 = t11;
    COW_AT(102dc002)
        eax = rd32(sp0 + 8u);
        ecx = rd32(sp0 + 8u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
L_102dc008: ;
    COW_AT(102dc008)
        if (loc_18 == 0x14u) goto L_102dc0d9;
        edx = loc_1c;
        edi = loc_18 - 0x14u;
    COW_AT(102dc017)
        if (edi == 1u) goto L_102dc0b6;
        edi = edi - 1u;
    COW_AT(102dc01e)
        if (edi == 3u) goto L_102dc077;
        edi = edi - 3u;
    COW_AT(102dc023)
        if (edi != 1u) goto L_102dc0f7;
    COW_AT(102dc02a)
        t12 = rd16(rd32(sp0 + 4u));
        t13 = (t12 >> 0xfu) * 0xffu;
        t14 = t12 >> 0xau & 0x1fu;
        t15 = t12 >> 5u & 0x1fu;
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 2u);
        eax = t14 >> 2u | t14 << 3u;
        ecx = t15 >> 2u | t15 << 3u;
        edx = (t12 & 0x1fu) >> 2u | (t12 & 0x1fu) << 3u;
        loc_20 = t13;
L_102dc0f4: ;
    COW_AT(102dc0f4)
        loc_1c = edx;
L_102dc0f7: ;
    COW_AT(102dc0f7)
        wr8(loc_14 + 2u, (uint8_t)edx);
        wr8(loc_14 + 3u, (uint8_t)loc_20);
        wr8(loc_14, (uint8_t)eax);
        wr8(loc_14 + 1u, (uint8_t)ecx);
        if (loc_14 + 4u < loc_30)
        {
            loc_14 = loc_14 + 4u;
            goto L_102dc008;
        }
    }
L_102dc118: ;
    COW_AT(102dc118)
    t24 = rd16(ebx + 0xcu);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - loc_34);
    t25 = rd16(ebx + 0xeu);
    wr32(self, loc_10);
    wr32(self + 4u, loc_34 + loc_8);
    t26 = rd16(ebx + 0xcu) * loc_c;
    t27 = rd32(self + 0x40u);
    wr32(self + 0x30u, t26);
    wr32(self + 0x34u, 0u);
    t28 = rd16(ebx + 0xcu);
    wr32(self + 0xcu, t28);
    t29 = rd16(ebx + 0xeu);
    wr32(self + 0x10u, t29);
    wr32(self + 0x14u, 1u);
    if (t27 == 0u)
    {
        edx = t29;
        goto L_102dc2a7;
    }
    eax = t25 * t24 * loc_c;
    ecx = loc_34 + loc_8;
    edx = t29;
    loc_8 = loc_34 + loc_8;
    COW_AT(102dc16b)
    if (loc_2c != 0u) goto L_102dc18e;
    COW_AT(102dc170)
    if (loc_28 == 0u) goto L_102dc18e;
    COW_AT(102dc175)
    if (loc_24 == 0u) goto L_102dc18e;
    COW_AT(102dc17a)
    if (rd32(sp0 + 8u) < eax) goto L_102dc2ab;
    COW_AT(102dc183)
    wr32(self + 4u, ecx);
    wr32(self + 0x38u, 0u);
L_102dc2a7: ;
    COW_AT(102dc2a7)
    eax = 0u;
    goto L_102dc2b0;
L_102dc077: ;
    COW_AT(102dc077)
    t16 = rd16(rd32(sp0 + 4u));
    t17 = t16 >> 0xau & 0x1fu;
    t18 = t16 >> 5u & 0x1fu;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 2u);
    eax = t17 >> 2u | t17 << 3u;
    ecx = t18 >> 2u | t18 << 3u;
    edx = (t16 & 0x1fu) >> 2u | (t16 & 0x1fu) << 3u;
L_102dc0ed: ;
    COW_AT(102dc0ed)
    loc_20 = 0xffu;
    goto L_102dc0f4;
L_102dc0b6: ;
    COW_AT(102dc0b6)
    t19 = rd32(rd32(sp0 + 4u));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 4u);
    eax = (uint8_t)(t19 >> 0x10u);
    ecx = (uint8_t)(t19 >> 8u);
    edx = (uint8_t)t19;
    loc_20 = t19 >> 0x18u;
    goto L_102dc0f4;
L_102dc0d9: ;
    COW_AT(102dc0d9)
    t20 = rd32(sp0 + 4u) + 3u;
    t21 = rd8(rd32(sp0 + 4u) + 2u);
    t22 = rd8(rd32(sp0 + 4u) + 1u);
    t23 = rd8(rd32(sp0 + 4u));
    wr32(sp0 + 4u, t20);
    eax = t21;
    ecx = t22;
    edx = t23;
    goto L_102dc0ed;
L_102dc18e: ;
    COW_AT(102dc18e)
    g->eax = eax;
    g->esp = sp0 - 0x3cu;
    t30 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, in_ebx, in_edi);
    t31 = g->edx;
    wr32(self + 4u, t30);
    if (t30 == 0u)
    {
        edx = t31;
        goto L_102dbfc3;
    }
    eax = t30;
    COW_AT(102dc1a0)
    wr32(self + 0x38u, 1u);
    if (loc_28 == 0u)
    {
    COW_AT(102dc1b0)
        edx = eax + (rd16(ebx + 0xeu) - 1u) * rd32(self + 0x30u);
    }
    else
    {
    COW_AT(102dc1ac)
        edx = eax;
    }
    COW_AT(102dc1bb)
    if (rd16(ebx + 0xeu) == 0u) goto L_102dc2a7;
    loc_18 = 0u;
L_102dc1c8: ;
    COW_AT(102dc1c8)
    if (loc_24 == 0u)
    {
    COW_AT(102dc1d2)
        t32 = edx + rd32(self + 0x30u) - loc_c;
        wr32(sp0 + 4u, t32);
    }
    else
    {
    COW_AT(102dc1cd)
        wr32(sp0 + 4u, edx);
    }
    COW_AT(102dc1dd)
    if (rd16(ebx + 0xcu) == 0u) goto L_102dc28a;
    eax = rd16(ebx + 0xcu);
    loc_1c = 0u;
L_102dc1ec: ;
    COW_AT(102dc1ec)
    if (loc_2c == 0u) goto L_102dc218;
    COW_AT(102dc1f1)
    if (rd32(sp0 + 8u) < 1u) goto L_102dc2ab;
    COW_AT(102dc1fb)
    t33 = rd8(loc_8);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
    eax = (t33 & 0x7fu) + 1u;
    loc_8 = loc_8 + 1u;
    loc_20 = t33 & 0x80u;
L_102dc21b: ;
    COW_AT(102dc21b)
    if (eax == 0u)
    {
        loc_1c = eax + loc_1c;
        goto L_102dc26c;
    }
    loc_1c = eax + loc_1c;
L_102dc222: ;
    COW_AT(102dc222)
    if (rd32(sp0 + 8u) < loc_c) goto L_102dc2ab;
    loc_34 = eax - 1u;
    COW_AT(102dc22e)
    t34 = rd32(sp0 + 4u);
    esi = loc_8;
    edi = t34;
    ecx = loc_c >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = loc_c & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if (loc_20 == 0u)
    {
        eax = loc_c;
    COW_AT(102dc24b)
        wr32(sp0 + 8u, rd32(sp0 + 8u) - eax);
        loc_8 = eax + loc_8;
    }
    COW_AT(102dc251)
    if (loc_24 == 0u)
    {
        eax = loc_c;
    COW_AT(102dc25f)
        wr32(sp0 + 4u, rd32(sp0 + 4u) - eax);
    }
    else
    {
        eax = loc_c;
    COW_AT(102dc25a)
        wr32(sp0 + 4u, eax + rd32(sp0 + 4u));
    }
    COW_AT(102dc262)
    if (loc_34 != 0u)
    {
        eax = loc_34;
        goto L_102dc222;
    }
    COW_AT(102dc269)
L_102dc26c: ;
    COW_AT(102dc26c)
    if (loc_20 != 0u)
    {
    COW_AT(102dc272)
        wr32(sp0 + 8u, rd32(sp0 + 8u) - loc_c);
        loc_8 = loc_8 + loc_c;
    }
    COW_AT(102dc27b)
    if (loc_1c < rd16(ebx + 0xcu))
    {
        eax = rd16(ebx + 0xcu);
        goto L_102dc1ec;
    }
L_102dc28a: ;
    COW_AT(102dc28a)
    if (loc_28 == 0u)
    {
    COW_AT(102dc294)
        edx = edx - rd32(self + 0x30u);
    }
    else
    {
    COW_AT(102dc28f)
        edx = edx + rd32(self + 0x30u);
    }
    COW_AT(102dc297)
    if (loc_18 + 1u < rd16(ebx + 0xeu))
    {
        loc_18 = loc_18 + 1u;
        goto L_102dc1c8;
    }
    goto L_102dc2a7;
L_102dc218: ;
    COW_AT(102dc218)
    loc_20 = 0u;
    goto L_102dc21b;
L_102dc2ab: ;
    COW_AT(102dc2ab)
    eax = 0x80004005u;
    goto L_102dc2b0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102dbe10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102dbe23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dbe2du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = self;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe3du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe4du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe58u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe75u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe7du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe82u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe8bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbe9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbea6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbeadu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbec2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbec5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbeccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbed6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbedfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbee4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbee7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbeecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbef5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbefeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf10u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf23u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf34u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf69u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf88u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf92u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbf9cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbfafu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dbfc3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dbfcdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc002u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc008u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc017u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc01eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc023u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc02au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc077u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc0b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc0d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc0edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc0f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc0f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc118u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc16bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc170u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc175u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc17au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dc183u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dc18eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1d2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc1fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc218u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc21bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc222u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        self = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc22eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        self = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc24bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        self = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc251u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        self = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc25au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        self = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc25fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        self = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc262u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        self = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc269u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        self = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc26cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc272u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc27bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc28au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc28fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc294u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc297u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, self);
        (void)sp0;
        return 1;
    }
    case 0x102dc2a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc2abu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc2b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x44u);
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc2b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
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
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102dbe10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102dbe10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
