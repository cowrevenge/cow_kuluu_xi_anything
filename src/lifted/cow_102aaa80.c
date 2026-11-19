/* f_0x102aaa80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102aaa80(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
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
    double d37;
    double d38;
    double d39;
    double d4;
    double d40;
    double d5;
    double d6;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t t1;
    uint32_t t19;
    uint32_t t26;
    uint32_t t27;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102aaa96u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); goto E_102aaa96;
    case 0x102aaa9fu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); goto E_102aaa9f;
    case 0x102aaacbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aaacb;
    case 0x102aaacfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aaacf;
    case 0x102aaad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aaad8;
    case 0x102aaae9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aaae9;
    case 0x102aaaeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aaaee;
    case 0x102aaaf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aaaf2;
    case 0x102aabe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aabe8;
    case 0x102aabedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aabed;
    case 0x102aabf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aabf1;
    case 0x102aabf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aabf5;
    case 0x102aac1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aac1c;
    case 0x102aac21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aac21;
    case 0x102aac27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aac27;
    case 0x102aac2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aac2b;
    case 0x102aac3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aac3a;
    case 0x102aad23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad23;
    case 0x102aad32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad32;
    case 0x102aad36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad36;
    case 0x102aad41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad41;
    case 0x102aad48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad48;
    case 0x102aad51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad51;
    case 0x102aad54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad54;
    case 0x102aad5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad5c;
    case 0x102aad7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad7d;
    case 0x102aad88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad88;
    case 0x102aad91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad91;
    case 0x102aad94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad94;
    case 0x102aad9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aad9c;
    case 0x102aadb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aadb6;
    case 0x102aadc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_102aadc1;
    case 0x102aadd4u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); goto E_102aadd4;
    default: break;
    }
#endif

    COW_AT(102aaa80)
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ebx = rd32(sp0 + 4u);
        goto L_102aadd4;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    ebx = rd32(sp0 + 4u);
    COW_AT(102aaa96)
    if (rd32(eax + 0x14u) == 0u) goto L_102aadd4;
    COW_AT(102aaa9f)
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x102a9f10u), 3, eax, in_edi, in_esi);
    if (rd32(rd32(ebx + 0x48u)) == 0u)
    {
        eax = rd32(rd32(ebx + 0x34u) + 0x58u);
        ecx = rd32(rd32(ebx + 0x34u) + 0x54u);
    }
    else
    {
        eax = rd32(rd32(ebx + 0x34u) + 0x58u);
        ecx = rd32(rd32(ebx + 0x34u) + 0x54u);
        edx = rd32(rd32(ebx + 0x48u));
        esi = rd32(ebx + 0x48u) + 4u;
    COW_AT(102aaacb)
        ebp = 0u;
        loc_40 = 0u;
        loc_3c = 0u;
        loc_34 = edx;
L_102aaacf: ;
    COW_AT(102aaacf)
        if ((int32_t)rd32(esi) > 0)
        {
            ebx = rd32(esi);
            esi = esi + 4u;
            goto L_102aaaf2;
        }
        ebx = rd32(esi);
        esi = esi + 4u;
    COW_AT(102aaad8)
        if (-ebx != 0u)
        {
            loc_44 = -ebx;
    COW_AT(102aaae9)
            edx = 0u;
L_102aabf1: ;
    COW_AT(102aabf1)
            if (edx != 0u)
            {
    COW_AT(102aac1c)
                if (edx != 1u)
                {
    COW_AT(102aac27)
                    loc_40 = ebp;
                }
                else
                {
    COW_AT(102aac21)
                    loc_3c = ebp;
                }
    COW_AT(102aac2b)
                loc_44 = loc_44 - 1u;
                loc_38 = -edx;
            }
            else
            {
    COW_AT(102aabf5)
                t1 = rd32(esi + 4u);
                loc_40 = t1;
                loc_3c = rd32(esi);
                esi = esi + 8u;
                loc_44 = loc_44 - 3u;
                loc_38 = 1u;
            }
    COW_AT(102aac3a)
            d2 = (double)(float)fr(g, (double)rdf32(ecx + rd32(esi) * 0xcu) - (double)rdf32(ecx + loc_3c * 0xcu));
            d3 = (double)(float)fr(g, (double)rdf32(ecx + rd32(esi) * 0xcu + 4u) - (double)rdf32(ecx + loc_3c * 0xcu + 4u));
            d4 = fr(g, (double)rdf32(ecx + rd32(esi) * 0xcu + 8u) - (double)rdf32(ecx + loc_3c * 0xcu + 8u));
            d5 = (double)(float)fr(g, fr(g, d4 * fr(g, (double)rdf32(ecx + loc_40 * 0xcu + 4u) - (double)rdf32(ecx + loc_3c * 0xcu + 4u))) - fr(g, d3 * fr(g, (double)rdf32(ecx + loc_40 * 0xcu + 8u) - (double)rdf32(ecx + loc_3c * 0xcu + 8u))));
            d6 = fr(g, (double)rdf32(ecx + loc_40 * 0xcu) - (double)rdf32(ecx + loc_3c * 0xcu));
            d7 = (double)(float)fr(g, fr(g, d2 * fr(g, (double)rdf32(ecx + loc_40 * 0xcu + 8u) - (double)rdf32(ecx + loc_3c * 0xcu + 8u))) - fr(g, d6 * d4));
            t8 = rd32(esi);
            d9 = fr(g, d5 + (double)rdf32(eax + loc_3c * 0xcu));
            d10 = fr(g, fr(g, d6 * d3) - fr(g, d2 * fr(g, (double)rdf32(ecx + loc_40 * 0xcu + 4u) - (double)rdf32(ecx + loc_3c * 0xcu + 4u))));
            wrf32(eax + loc_3c * 0xcu, (float)d9);
            d11 = fr(g, d7 + (double)rdf32(eax + loc_3c * 0xcu + 4u));
            wrf32(eax + loc_3c * 0xcu + 4u, (float)d11);
            d12 = fr(g, d10 + (double)rdf32(eax + loc_3c * 0xcu + 8u));
            wrf32(eax + loc_3c * 0xcu + 8u, (float)d12);
            d13 = fr(g, d5 + (double)rdf32(eax + loc_40 * 0xcu));
            wrf32(eax + loc_40 * 0xcu, (float)d13);
            d14 = fr(g, d7 + (double)rdf32(eax + loc_40 * 0xcu + 4u));
            wrf32(eax + loc_40 * 0xcu + 4u, (float)d14);
            d15 = fr(g, d10 + (double)rdf32(eax + loc_40 * 0xcu + 8u));
            wrf32(eax + loc_40 * 0xcu + 8u, (float)d15);
            d16 = fr(g, d5 + (double)rdf32(eax + t8 * 0xcu));
            wrf32(eax + t8 * 0xcu, (float)d16);
            d17 = fr(g, d7 + (double)rdf32(eax + t8 * 0xcu + 4u));
            wrf32(eax + t8 * 0xcu + 4u, (float)d17);
            d18 = fr(g, d10 + (double)rdf32(eax + t8 * 0xcu + 8u));
            wrf32(eax + t8 * 0xcu + 8u, (float)d18);
            if (loc_44 != 0u)
            {
                ebp = t8;
                esi = esi + 4u;
                goto L_102aabed;
            }
            ebp = t8;
            esi = esi + 4u;
        }
L_102aad23: ;
    COW_AT(102aad23)
        if (loc_34 != 1u)
        {
            loc_34 = loc_34 - 1u;
            goto L_102aaacf;
        }
    COW_AT(102aad32)
        ebx = rd32(sp0 + 4u);
    }
    COW_AT(102aad36)
    if (rd32(ebx + 0x34u) != 0u)
    {
        edi = rd32(ebx + 0x34u);
    COW_AT(102aad41)
        if (rd32(edi + 0x6cu) != 0u)
        {
            ebp = rd32(edi + 0x6cu);
    COW_AT(102aad48)
            if ((int32_t)rd32(edi + 0x14u) > 0)
            {
    COW_AT(102aad51)
                edx = eax + 8u;
                esi = 0u;
L_102aad54: ;
    COW_AT(102aad54)
                if ((int32_t)rd32(ebp + esi * 4u) >= 0)
                {
                    ecx = rd32(ebp + esi * 4u);
    COW_AT(102aad5c)
                    d38 = fr(g, (double)rdf32(edx - 8u) + (double)rdf32(eax + ecx * 0xcu));
                    wrf32(eax + ecx * 0xcu, (float)d38);
                    d39 = fr(g, (double)rdf32(edx - 4u) + (double)rdf32(eax + ecx * 0xcu + 4u));
                    wrf32(eax + ecx * 0xcu + 4u, (float)d39);
                    d40 = fr(g, (double)rdf32(eax + ecx * 0xcu + 8u) + (double)rdf32(edx));
                    wrf32(eax + ecx * 0xcu + 8u, (float)d40);
                }
    COW_AT(102aad7d)
                if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0x14u))
                {
                    edx = edx + 0xcu;
                    esi = esi + 1u;
                    goto L_102aad54;
                }
            }
    COW_AT(102aad88)
            if ((int32_t)rd32(edi + 0x14u) <= 0)
            {
                ecx = rd32(edi + 0x14u);
            }
            else
            {
    COW_AT(102aad91)
                edx = eax + 8u;
                esi = 0u;
L_102aad94: ;
    COW_AT(102aad94)
                if ((int32_t)rd32(ebp + esi * 4u) >= 0)
                {
                    ecx = rd32(ebp + esi * 4u);
    COW_AT(102aad9c)
                    t41 = rd32(eax + ecx * 0xcu);
                    wr32(edx - 8u, t41);
                    t42 = rd32(eax + ecx * 0xcu + 4u);
                    wr32(edx - 4u, t42);
                    t43 = rd32(eax + ecx * 0xcu + 8u);
                    t44 = rd32(sp0 + 4u);
                    wr32(edx, t43);
                    ebx = t44;
                }
    COW_AT(102aadb6)
                if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0x14u))
                {
                    edx = edx + 0xcu;
                    esi = esi + 1u;
                    goto L_102aad94;
                }
                ecx = rd32(edi + 0x14u);
            }
        }
    }
    COW_AT(102aadc1)
    t45 = rd32(ebx + 0x34u);
    wr32(sp0 + 4u, t45);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t45;
    return cow_tailcall(g, COW_IMG(0x102aa260u), eax, ecx, t45);
L_102aaaee: ;
    COW_AT(102aaaee)
    ebx = loc_44;
L_102aaaf2: ;
    COW_AT(102aaaf2)
    t19 = rd32(esi + 4u);
    d20 = (double)(float)fr(g, (double)rdf32(ecx + rd32(esi + 8u) * 0xcu) - (double)rdf32(ecx + rd32(esi) * 0xcu));
    d21 = (double)(float)fr(g, (double)rdf32(ecx + rd32(esi + 8u) * 0xcu + 4u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 4u));
    d22 = fr(g, (double)rdf32(ecx + rd32(esi + 8u) * 0xcu + 8u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 8u));
    d23 = (double)(float)fr(g, fr(g, d22 * fr(g, (double)rdf32(ecx + t19 * 0xcu + 4u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 4u))) - fr(g, d21 * fr(g, (double)rdf32(ecx + t19 * 0xcu + 8u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 8u))));
    d24 = fr(g, (double)rdf32(ecx + t19 * 0xcu) - (double)rdf32(ecx + rd32(esi) * 0xcu));
    d25 = (double)(float)fr(g, fr(g, d20 * fr(g, (double)rdf32(ecx + t19 * 0xcu + 8u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 8u))) - fr(g, d24 * d22));
    t26 = rd32(esi);
    t27 = rd32(esi + 8u);
    d28 = fr(g, d23 + (double)rdf32(eax + rd32(esi) * 0xcu));
    d29 = fr(g, fr(g, d24 * d21) - fr(g, d20 * fr(g, (double)rdf32(ecx + t19 * 0xcu + 4u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 4u))));
    wrf32(eax + t26 * 0xcu, (float)d28);
    d30 = fr(g, d25 + (double)rdf32(eax + t26 * 0xcu + 4u));
    wrf32(eax + t26 * 0xcu + 4u, (float)d30);
    d31 = fr(g, d29 + (double)rdf32(eax + t26 * 0xcu + 8u));
    wrf32(eax + t26 * 0xcu + 8u, (float)d31);
    d32 = fr(g, d23 + (double)rdf32(eax + t19 * 0xcu));
    wrf32(eax + t19 * 0xcu, (float)d32);
    d33 = fr(g, d25 + (double)rdf32(eax + t19 * 0xcu + 4u));
    wrf32(eax + t19 * 0xcu + 4u, (float)d33);
    d34 = fr(g, d29 + (double)rdf32(eax + t19 * 0xcu + 8u));
    wrf32(eax + t19 * 0xcu + 8u, (float)d34);
    d35 = fr(g, d23 + (double)rdf32(eax + t27 * 0xcu));
    wrf32(eax + t27 * 0xcu, (float)d35);
    d36 = fr(g, d25 + (double)rdf32(eax + t27 * 0xcu + 4u));
    wrf32(eax + t27 * 0xcu + 4u, (float)d36);
    d37 = fr(g, d29 + (double)rdf32(eax + t27 * 0xcu + 8u));
    wrf32(eax + t27 * 0xcu + 8u, (float)d37);
    if (ebx != 3u)
    {
        esi = esi + 0xcu;
        loc_44 = ebx - 3u;
        goto L_102aaaee;
    }
    ebp = t27;
    esi = esi + 0xcu;
    loc_40 = t19;
    loc_3c = t26;
    COW_AT(102aabe8)
    goto L_102aad23;
L_102aabed: ;
    COW_AT(102aabed)
    edx = loc_38;
    goto L_102aabf1;
L_102aadd4: ;
    COW_AT(102aadd4)
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t46 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be980u));
    t47 = g->ecx;
    t48 = g->edx;
    g->ebx = ebx;
    g->edx = t48;
    g->esp = sp0 - 0x58u;
    t49 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beae0u));
    t50 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t50;
    return t49;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102aaa80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102aaa96u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102aaa9fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102aaacbu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x54u;
        g->ebp = 0u;
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102aaacfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aaad8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aaae9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102aaaeeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aaaf2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aabe8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aabedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aabf1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aabf5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aac1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aac21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aac27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aac2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aac3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102aad54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad5cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102aad94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aad9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aadb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aadc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102aadd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102aaa80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102aaa80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
