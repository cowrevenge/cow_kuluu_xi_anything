/* f_0x1010de90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1010de90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
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
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1010dea5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010dea5;
    case 0x1010deaau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010deaa;
    case 0x1010deacu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010deac;
    case 0x1010deb0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010deb0;
    case 0x1010deb5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010deb5;
    case 0x1010deb7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010deb7;
    case 0x1010debcu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010debc;
    case 0x1010dec2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010dec2;
    case 0x1010dec6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010dec6;
    case 0x1010deceu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010dece;
    case 0x1010ded0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010ded0;
    case 0x1010ded5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010ded5;
    case 0x1010ded6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010ded6;
    case 0x1010deddu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010dedd;
    case 0x1010dee9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010dee9;
    case 0x1010def3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010def3;
    case 0x1010def9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010def9;
    case 0x1010defdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010defd;
    case 0x1010df02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df02;
    case 0x1010df0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df0f;
    case 0x1010df1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010df1f;
    case 0x1010df25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010df25;
    case 0x1010df2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010df2f;
    case 0x1010df37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010df37;
    case 0x1010df41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df41;
    case 0x1010df44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df44;
    case 0x1010df52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df52;
    case 0x1010df5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df5d;
    case 0x1010df62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df62;
    case 0x1010df64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df64;
    case 0x1010df68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df68;
    case 0x1010df6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df6d;
    case 0x1010df6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df6f;
    case 0x1010df73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df73;
    case 0x1010df79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df79;
    case 0x1010df7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df7d;
    case 0x1010df85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df85;
    case 0x1010df87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df87;
    case 0x1010df8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df8c;
    case 0x1010df8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df8d;
    case 0x1010df94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010df94;
    case 0x1010dfa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010dfa0;
    case 0x1010dfaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010dfaa;
    case 0x1010dfb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010dfb0;
    case 0x1010dfc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010dfc0;
    case 0x1010dfc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010dfc5;
    case 0x1010dfd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010dfd2;
    case 0x1010dfe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010dfe2;
    case 0x1010dfe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010dfe8;
    case 0x1010dff2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010dff2;
    case 0x1010dffau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010dffa;
    case 0x1010e004u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010e004;
    case 0x1010e007u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010e007;
    case 0x1010e015u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1010e015;
    default: break;
    }
#endif

    COW_AT(1010de90)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x1cu, self);
    if (rd32(rd32(sp0 + 4u) + 4u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
    COW_AT(1010deaa)
        esi = 0u;
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
    COW_AT(1010dea5)
        esi = rd32(eax + 4u);
    }
    COW_AT(1010deac)
    if (esi != 0u)
    {
    COW_AT(1010deb0)
        if (rd8(esi) != 0u)
        {
    COW_AT(1010deb5)
            ecx = 0u;
L_1010deb7: ;
    COW_AT(1010deb7)
            if ((int32_t)ecx >= 1) goto L_1010dedd;
    COW_AT(1010debc)
            if (rd8(esi) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                goto L_1010ded6;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
L_1010dec2: ;
    COW_AT(1010dec2)
            if ((uint8_t)eax == 0x2eu) goto L_1010ded0;
    COW_AT(1010dec6)
            if (rd8(esi + 1u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                esi = esi + 1u;
                goto L_1010dec2;
            }
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
    COW_AT(1010dece)
L_1010ded6: ;
    COW_AT(1010ded6)
            if (rd8(esi) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                ecx = ecx + 1u;
                goto L_1010deb7;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
        }
    }
L_1010dedd: ;
    COW_AT(1010dedd)
    wr32(sp0 - 0x20u, 3u);
    edx = in_edx;
    edi = sp0 - 0xcu;
    loc_24 = in_ebx;
    loc_28 = in_esi;
    loc_2c = in_edi;
    loc_1c = self;
    loc_20 = 3u;
L_1010dee9: ;
    COW_AT(1010dee9)
    wr32(edi, 0u);
    if (esi != 0u)
    {
    COW_AT(1010def3)
        if (rd8(esi) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(1010def9)
            if ((uint8_t)eax != 0x2eu)
            {
    COW_AT(1010defd)
                ebx = 5u;
L_1010df02: ;
    COW_AT(1010df02)
                t1 = rd32(edi) << 6u;
                wr32(edi, t1);
                if (rd8(esi) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
                    edx = t1;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
                    edx = t1;
    COW_AT(1010df0f)
                    wr32(sp0 - 0x30u, 0x2eu);
                    wr32(sp0 - 0x34u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t2 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
                    t3 = g->edx;
                    if ((uint8_t)t2 != 0u)
                    {
                        eax = t2;
                        edx = t3;
                        loc_24 = rd32(sp0 - 0x24u);
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_2c = rd32(sp0 - 0x2cu);
                        loc_1c = rd32(sp0 - 0x1cu);
                        loc_20 = rd32(sp0 - 0x20u);
                    }
                    else
                    {
                        eax = t2;
                        edx = t3;
    COW_AT(1010df1f)
                        if (rd8(esi) <= 0x60u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(1010df2f)
                            eax = (uint8_t)eax - 0x20u;
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(1010df25)
                            eax = (uint8_t)eax - 0x40u;
                        }
    COW_AT(1010df37)
                        t4 = rd32(edi) | (eax & 0x3fu);
                        wr32(edi, t4);
                        eax = eax & 0x3fu;
                        esi = esi + 1u;
                        loc_24 = rd32(sp0 - 0x24u);
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_2c = rd32(sp0 - 0x2cu);
                        loc_1c = rd32(sp0 - 0x1cu);
                        loc_20 = rd32(sp0 - 0x20u);
                    }
                }
    COW_AT(1010df41)
                if (ebx != 1u)
                {
                    ebx = ebx - 1u;
                    goto L_1010df02;
                }
            }
        }
    }
    COW_AT(1010df44)
    wr32(sp0 - 0x20u, loc_20 - 1u);
    if (loc_20 != 1u)
    {
        eax = loc_20 - 1u;
        edi = edi + 4u;
        loc_20 = loc_20 - 1u;
        goto L_1010dee9;
    }
    COW_AT(1010df52)
    if (rd32(rd32(sp0 + 4u) + 4u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
    COW_AT(1010df62)
        esi = 0u;
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
    COW_AT(1010df5d)
        esi = rd32(eax + 4u);
    }
    COW_AT(1010df64)
    if (esi != 0u)
    {
    COW_AT(1010df68)
        if (rd8(esi) != 0u)
        {
    COW_AT(1010df6d)
            ecx = 0u;
L_1010df6f: ;
    COW_AT(1010df6f)
            if ((int32_t)ecx >= 0) goto L_1010df94;
    COW_AT(1010df73)
            if (rd8(esi) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                goto L_1010df8d;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
L_1010df79: ;
    COW_AT(1010df79)
            if ((uint8_t)eax == 0x2eu) goto L_1010df87;
    COW_AT(1010df7d)
            if (rd8(esi + 1u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                esi = esi + 1u;
                goto L_1010df79;
            }
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
    COW_AT(1010df85)
L_1010df8d: ;
    COW_AT(1010df8d)
            if (rd8(esi) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                ecx = ecx + 1u;
                goto L_1010df6f;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
        }
    }
L_1010df94: ;
    COW_AT(1010df94)
    wr32(sp0 + 4u, 3u);
    edi = sp0 - 0x18u;
L_1010dfa0: ;
    COW_AT(1010dfa0)
    wr32(edi, 0u);
    if (esi != 0u)
    {
    COW_AT(1010dfaa)
        if (rd8(esi) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(1010dfb0)
            wr32(sp0 - 0x30u, 0x2eu);
            wr32(sp0 - 0x34u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t5 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
            t6 = g->edx;
            if ((uint8_t)t5 != 0u)
            {
                edx = t6;
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_1c = rd32(sp0 - 0x1cu);
            }
            else
            {
                eax = t5;
    COW_AT(1010dfc0)
                ebx = 5u;
L_1010dfc5: ;
    COW_AT(1010dfc5)
                t7 = rd32(edi) << 6u;
                wr32(edi, t7);
                if (rd8(esi) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
                    edx = t7;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
                    edx = t7;
    COW_AT(1010dfd2)
                    wr32(sp0 - 0x30u, 0x2eu);
                    wr32(sp0 - 0x34u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t8 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
                    t9 = g->edx;
                    if ((uint8_t)t8 != 0u)
                    {
                        eax = t8;
                        edx = t9;
                    }
                    else
                    {
                        eax = t8;
                        edx = t9;
    COW_AT(1010dfe2)
                        if (rd8(esi) <= 0x60u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(1010dff2)
                            eax = (uint8_t)eax - 0x20u;
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(1010dfe8)
                            eax = (uint8_t)eax - 0x40u;
                        }
    COW_AT(1010dffa)
                        t10 = rd32(edi) | (eax & 0x3fu);
                        wr32(edi, t10);
                        eax = eax & 0x3fu;
                        esi = esi + 1u;
                    }
                }
    COW_AT(1010e004)
                if (ebx != 1u)
                {
                    ebx = ebx - 1u;
                    goto L_1010dfc5;
                }
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_1c = rd32(sp0 - 0x1cu);
            }
        }
    }
    COW_AT(1010e007)
    t11 = rd32(sp0 + 4u) - 1u;
    t12 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t11);
    if (t12 != 1u)
    {
        eax = t11;
        edi = edi + 4u;
        goto L_1010dfa0;
    }
    COW_AT(1010e015)
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    wr32(sp0 - 0x34u, sp0 - 0x18u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x1010dcc0u), loc_1c, 2, sp0 - 0x18u, sp0 - 0xcu);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
L_1010ded0: ;
    COW_AT(1010ded0)
    if (rd8(esi) != 0u)
    {
    COW_AT(1010ded5)
        esi = esi + 1u;
    }
    goto L_1010ded6;
L_1010df87: ;
    COW_AT(1010df87)
    if (rd8(esi) != 0u)
    {
    COW_AT(1010df8c)
        esi = esi + 1u;
    }
    goto L_1010df8d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1010de90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1010dea5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010deaau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010deacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010deb0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010deb5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010deb7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010debcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dec2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dec6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010deceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ded0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ded5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ded6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010deddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dee9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010def3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010def9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010defdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df0fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df1fu:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df25u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df2fu:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df37u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df41u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df44u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df52u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df5du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df62u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df64u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df68u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df6du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df73u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df79u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df7du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df85u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df87u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df8cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df8du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010df94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dfa0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dfaau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dfb0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dfc0u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dfc5u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dfd2u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dfe2u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dfe8u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dff2u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010dffau:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010e004u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010e007u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010e015u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1010de90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1010de90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
