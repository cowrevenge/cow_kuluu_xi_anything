/* f_0x10297b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
void cow_fn_10297b30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4;
    uint32_t sf;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg9 = rd32(sp0 + 0x24u);
    const uint32_t arg10 = rd32(sp0 + 0x28u);
    const uint32_t arg11 = rd32(sp0 + 0x2cu);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10297b49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x30u); goto E_10297b49;
    case 0x10297b7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297b7b;
    case 0x10297b83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297b83;
    case 0x10297b8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297b8b;
    case 0x10297b98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297b98;
    case 0x10297ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297ba0;
    case 0x10297ba8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297ba8;
    case 0x10297bb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bb3;
    case 0x10297bbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bba;
    case 0x10297bc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bc5;
    case 0x10297bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bce;
    case 0x10297bd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bd9;
    case 0x10297bebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297beb;
    case 0x10297bedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bed;
    case 0x10297bf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bf2;
    case 0x10297bf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bf4;
    case 0x10297bf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bf8;
    case 0x10297bfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297bfc;
    case 0x10297c01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c01;
    case 0x10297c03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c03;
    case 0x10297c08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c08;
    case 0x10297c0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c0a;
    case 0x10297c11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c11;
    case 0x10297c37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c37;
    case 0x10297c3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c3b;
    case 0x10297c43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c43;
    case 0x10297c67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c67;
    case 0x10297c9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297c9a;
    case 0x10297ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x30u); goto E_10297ccb;
    case 0x10297cceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x30u); goto E_10297cce;
    default: break;
    }
#endif

    COW_AT(10297b30)
    wr32(sp0 - 0x30u, in_esi);
    t1 = rd32(sp0 + 4u) - 2u;
    wr32(sp0 - 0x28u, t1);
    if ((int32_t)(rd32(sp0 + 4u) - 2u) > 0)
    {
        loc_28 = t1;
    COW_AT(10297b49)
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x38u, in_ebp);
        wr32(sp0 - 0x3cu, in_edi);
        t2 = arg7 + rd32(sp0 + 8u) * 4u;
        wr32(sp0 - 0x2cu, t2);
        t3 = arg5 + arg3 * 4u;
        t4 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t3);
        t5 = arg6 + t4 * 0xcu + 8u;
        wr32(sp0 + 4u, t5);
        ecx = t5;
        edx = t2;
        esi = 0u;
        loc_2c = t2;
L_10297b83: ;
    COW_AT(10297b83)
        if (rd32(ecx - 8u) != 0xffffffffu)
        {
            eax = rd32(ecx - 8u);
    COW_AT(10297b98)
            ebp = rd32(arg7 + eax * 4u);
        }
        else
        {
    COW_AT(10297b8b)
            t6 = rd32(edx) == 0u;
            ebp = t6;
        }
    COW_AT(10297ba0)
        if (rd32(ecx - 4u) != 0xffffffffu)
        {
            eax = rd32(ecx - 4u);
    COW_AT(10297bb3)
            ecx = rd32(arg7 + eax * 4u);
        }
        else
        {
    COW_AT(10297ba8)
            ecx = rd32(edx) == 0u;
        }
    COW_AT(10297bba)
        if (rd32(rd32(sp0 + 4u)) != 0xffffffffu)
        {
            eax = rd32(rd32(sp0 + 4u));
    COW_AT(10297bce)
            eax = rd32(arg7 + eax * 4u);
            edx = loc_2c;
        }
        else
        {
    COW_AT(10297bc5)
            eax = rd32(edx) == 0u;
        }
    COW_AT(10297bd9)
        wr32(sp0 - 4u, eax);
        if ((esi & 0x80000001u) == 0u)
        {
            zf = (esi & 0x80000001u) == 0u;
            sf = (int32_t)(esi & 0x80000001u) < 0;
            loc_4 = eax;
            eax = rd32(edx);
            edx = esi & 0x80000001u;
            goto L_10297c01;
        }
        zf = (esi & 0x80000001u) == 0u;
        sf = (int32_t)(esi & 0x80000001u) < 0;
        loc_4 = eax;
        eax = rd32(edx);
        edx = esi & 0x80000001u;
    COW_AT(10297beb)
        if (sf)
        {
    COW_AT(10297bed)
            zf = (edx - 1u | 0xfffffffeu) + 1u == 0u;
            edx = (edx - 1u | 0xfffffffeu) + 1u;
        }
    COW_AT(10297bf2)
        if (zf) goto L_10297c11;
L_10297bf4: ;
    COW_AT(10297bf4)
        if (eax == 0u) goto L_10297c37;
    COW_AT(10297bf8)
        if (edx != 0u) goto L_10297c43;
    COW_AT(10297bfc)
L_10297c9a: ;
    COW_AT(10297c9a)
        t11 = rd32(sp0 + 4u) + 0xcu;
        t12 = rd32(sp0 + 8u);
        wr32(sp0 + 4u, t11);
        wr32(sp0 + 8u, t12 + 4u);
        wr32(sp0 - 0x2cu, loc_2c + 4u);
        if ((int32_t)(esi + 1u) < (int32_t)loc_28)
        {
            esi = esi + 1u;
            loc_2c = loc_2c + 4u;
            goto L_10297b7b;
        }
    COW_AT(10297ccb)
    }
    COW_AT(10297cce)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_10297b7b: ;
    COW_AT(10297b7b)
    ecx = rd32(sp0 + 4u);
    edx = loc_2c;
    goto L_10297b83;
L_10297c01: ;
    COW_AT(10297c01)
    if (sf)
    {
    COW_AT(10297c03)
        zf = (edx - 1u | 0xfffffffeu) + 1u == 0u;
        edx = (edx - 1u | 0xfffffffeu) + 1u;
    }
    COW_AT(10297c08)
    if (zf) goto L_10297bf4;
    COW_AT(10297c0a)
    if (arg11 != 0u) goto L_10297bf4;
L_10297c11: ;
    COW_AT(10297c11)
    wr32(sp0 - 0x24u, ebp);
    wr32(sp0 - 0x20u, ecx);
    t7 = rd32(rd32(sp0 + 8u));
    wr32(sp0 - 0x18u, t7);
    t8 = rd32(arg5 + arg3 * 4u + esi * 4u + 4u);
    wr32(sp0 - 0x14u, t8);
    edx = rd32(arg5 + arg3 * 4u + esi * 4u + 8u);
L_10297c67: ;
    COW_AT(10297c67)
    wr32(sp0 - 0x10u, edx);
    wr32(sp0 - 0x1cu, loc_4);
    wr32(sp0 - 0x40u, arg10);
    wr32(sp0 - 0x44u, arg9);
    wr32(sp0 - 0x48u, arg8);
    wr32(sp0 - 0x4cu, sp0 - 0x24u);
    wr32(sp0 - 0x50u, eax);
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    wr32(sp0 - 0x58u, arg4);
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10297550u), 7, arg4, sp0 - 0x18u, eax, sp0 - 0x24u, arg8, arg9, arg10);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    goto L_10297c9a;
L_10297c37: ;
    COW_AT(10297c37)
    if (edx != 0u) goto L_10297c9a;
    COW_AT(10297c3b)
    if (arg11 != 0u) goto L_10297c9a;
L_10297c43: ;
    COW_AT(10297c43)
    wr32(sp0 - 0x24u, ecx);
    wr32(sp0 - 0x20u, ebp);
    t9 = rd32(arg5 + arg3 * 4u + esi * 4u + 8u);
    wr32(sp0 - 0x18u, t9);
    t10 = rd32(arg5 + arg3 * 4u + esi * 4u + 4u);
    wr32(sp0 - 0x14u, t10);
    edx = rd32(rd32(sp0 + 8u));
    goto L_10297c67;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10297b30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10297b49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10297b7bu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297b83u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297b8bu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297b98u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297ba0u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297ba8u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bb3u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bbau:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bc5u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bceu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bd9u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bebu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bedu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bf2u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bf4u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bf8u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297bfcu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c01u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c03u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c08u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c0au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c11u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c37u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c3bu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c43u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c67u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297c9au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10297ccbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10297cceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10297b30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10297b30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
