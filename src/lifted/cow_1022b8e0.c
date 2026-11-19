/* f_0x1022b8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_1022b8e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    int64_t q51;
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
    uint32_t t35;
    uint32_t t36;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022b924u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1022b924;
    case 0x1022b93eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; zf = g->zf; goto E_1022b93e;
    case 0x1022b9ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1022b9ce;
    case 0x1022b9d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1022b9d5;
    case 0x1022b9dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1022b9dc;
    case 0x1022b9e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1022b9e0;
    case 0x1022b9e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1022b9e4;
    case 0x1022b9f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1022b9f5;
    case 0x1022b9fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1022b9fc;
    case 0x1022ba03u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1022ba03;
    case 0x1022ba0au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1022ba0a;
    case 0x1022ba0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba0e;
    case 0x1022ba1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba1d;
    case 0x1022ba2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba2e;
    case 0x1022ba34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba34;
    case 0x1022ba3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba3b;
    case 0x1022ba4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba4c;
    case 0x1022ba5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba5b;
    case 0x1022ba60u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022ba60;
    case 0x1022ba71u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba71;
    case 0x1022ba78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba78;
    case 0x1022ba7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba7f;
    case 0x1022ba88u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba88;
    case 0x1022ba8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba8e;
    case 0x1022ba94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022ba94;
    case 0x1022ba9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022ba9c;
    case 0x1022baadu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022baad;
    case 0x1022bab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bab6;
    case 0x1022babeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022babe;
    case 0x1022bacfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bacf;
    case 0x1022bad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bad8;
    case 0x1022bae0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bae0;
    case 0x1022baf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022baf1;
    case 0x1022bafau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bafa;
    case 0x1022bb09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bb09;
    case 0x1022bb0du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bb0d;
    case 0x1022bb1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb1b;
    case 0x1022bb22u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb22;
    case 0x1022bb2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bb2a;
    case 0x1022bb3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb3b;
    case 0x1022bb43u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb43;
    case 0x1022bb49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb49;
    case 0x1022bb4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb4f;
    case 0x1022bb55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb55;
    case 0x1022bb5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bb5d;
    case 0x1022bb6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb6e;
    case 0x1022bb73u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb73;
    case 0x1022bb80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bb80;
    case 0x1022bb84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bb84;
    case 0x1022bb8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bb8c;
    case 0x1022bba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bba0;
    case 0x1022bbaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bbae;
    case 0x1022bbb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bbb3;
    case 0x1022bbbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bbba;
    case 0x1022bbc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bbc5;
    case 0x1022bbd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bbd2;
    case 0x1022bbdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bbdc;
    case 0x1022bbe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bbe5;
    case 0x1022bbf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bbf0;
    case 0x1022bbfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bbfd;
    case 0x1022bc21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc21;
    case 0x1022bc3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc3f;
    case 0x1022bc4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc4a;
    case 0x1022bc50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc50;
    case 0x1022bc55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc55;
    case 0x1022bc5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc5e;
    case 0x1022bc64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc64;
    case 0x1022bc6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc6b;
    case 0x1022bc78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc78;
    case 0x1022bc7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bc7a;
    case 0x1022bc86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bc86;
    case 0x1022bc88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bc88;
    case 0x1022bc92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bc92;
    case 0x1022bc9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bc9b;
    case 0x1022bca3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bca3;
    case 0x1022bcaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bcaa;
    case 0x1022bcbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022bcbb;
    case 0x1022bcc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bcc3;
    case 0x1022bcd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bcd0;
    case 0x1022bcd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bcd3;
    case 0x1022bcd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bcd9;
    case 0x1022bce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bce7;
    case 0x1022bcedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bced;
    case 0x1022bcf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bcf1;
    case 0x1022bcf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bcf2;
    case 0x1022bcfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_28 = rd32(sp0 - 0x28u); goto E_1022bcfe;
    case 0x1022bd43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_1022bd43;
    default: break;
    }
#endif

    COW_AT(1022b8e0)
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(arg6, 0u);
    wr8(arg2, 0u);
    wr8(arg3, 0u);
    wr8(arg4, 0u);
    wr16(arg5, 0u);
    wr8(arg7, 0u);
    wr8(arg8, 0u);
    g->eax = arg8;
    g->edx = arg7;
    g->esp = sp0 - 0x30u;
    t1 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        ebx = in_ebx;
        ebp = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(1022b924)
        wr32(sp0 - 0x34u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t3 = cow_thiscall(g, COW_IMG(0x1022c770u), rd32(COW_IMG(0x10667a70u)), 1, arg1);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
            ebx = in_ebx;
            ebp = in_ebp;
            loc_2c = in_esi;
            loc_30 = in_edi;
        }
        else
        {
            esi = t3;
    COW_AT(1022b93e)
            t5 = rd8(esi + 0x47u);
            wr32(sp0 - 0x24u, t5);
            t6 = rd8(esi + 0x46u);
            wr32(sp0 - 0x28u, t6);
            wr32(sp0 - 0x34u, in_ebp);
            wr32(sp0 - 0x38u, 0x199u);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x1cu, 0x40u);
            t7 = rd8(esi + 0x48u);
            wr32(sp0 - 0x18u, t7);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x10u, 0u);
            t8 = rd8(esi + 0x44u);
            t9 = rd16(esi + 2u);
            wr8(sp0 - 0xcu, 0u);
            wr8(sp0 - 0xbu, 0u);
            wr8(sp0 - 0xau, 0u);
            wr8(sp0 - 9u, 0u);
            wr8(sp0 - 8u, 0u);
            wr8(sp0 - 7u, 0u);
            wr8(sp0 - 6u, 0u);
            wr8(sp0 - 5u, 0u);
            wr8(sp0 - 4u, t9 == 7u);
            wr8(sp0 - 3u, t8 >> 5u & 1u);
            wr8(sp0 - 2u, 0u);
            wr8(sp0 - 1u, 0u);
            g->eax = (t5 & 0xffffff00u) | (t8 >> 5u & 1u);
            g->edx = (t6 & 0xffffff00u) | t9 == 7u;
            g->esp = sp0 - 0x34u;
            t10 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), t7, 1, 0x199u);
            t11 = g->ecx;
            t12 = g->edx;
            if ((uint8_t)t10 == 0u)
            {
                eax = t10;
                ecx = t11;
                edx = t12;
            }
            else
            {
                eax = t10;
                ecx = t11;
                edx = t12;
    COW_AT(1022b9ce)
                if (rd16(esi + 2u) == 5u)
                {
    COW_AT(1022b9d5)
                    if (rd8(esi + 0x48u) == 2u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi + 0x48u);
                        goto L_1022b9e0;
                    }
                    eax = (eax & 0xffffff00u) | rd8(esi + 0x48u);
    COW_AT(1022b9dc)
                    if ((uint8_t)eax != 3u) goto L_1022b9e4;
L_1022b9e0: ;
    COW_AT(1022b9e0)
                    wr32(sp0 - 0x24u, 0u);
                }
            }
L_1022b9e4: ;
    COW_AT(1022b9e4)
            wr32(sp0 - 0x38u, 0x163u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t13 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x163u);
            t14 = g->ecx;
            t15 = g->edx;
            if ((uint8_t)t13 == 0u)
            {
                eax = t13;
                ecx = t14;
                edx = t15;
            }
            else
            {
                eax = t13;
                ecx = t14;
                edx = t15;
    COW_AT(1022b9f5)
                if (rd16(esi + 2u) == 6u)
                {
    COW_AT(1022b9fc)
                    if ((rd32(esi + 0x4cu) & 7u) != 0u)
                    {
                        eax = rd32(esi + 0x4cu);
                    }
                    else
                    {
                        eax = rd32(esi + 0x4cu);
    COW_AT(1022ba03)
                        if ((eax & 0x78u) > 0x38u)
                        {
                            eax = eax & 0x78u;
                        }
                        else
                        {
                            eax = eax & 0x78u;
    COW_AT(1022ba0a)
                            wr32(sp0 - 0x24u, 0u);
                        }
                    }
                }
            }
    COW_AT(1022ba0e)
            wr32(sp0 - 0x38u, in_ebx);
            wr32(sp0 - 0x3cu, 0x4eu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t16 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x4eu);
            t17 = g->ecx;
            t18 = g->edx;
            if ((uint8_t)t16 == 0u)
            {
                eax = t16;
                ecx = t17;
                edx = t18;
                goto L_1022ba5b;
            }
            eax = t16;
            ecx = t17;
            edx = t18;
    COW_AT(1022ba1d)
            wr32(sp0 - 0x3cu, 0x445u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t19 = cow_thiscall_cdecl(g, COW_IMG(0x10223360u), ecx, 1, 0x445u);
            t20 = g->ecx;
            t21 = g->edx;
            if ((uint8_t)t19 == 0u)
            {
                eax = t19;
                ecx = t20;
                edx = t21;
                goto L_1022ba5b;
            }
            eax = t19;
            ecx = t20;
            edx = t21;
    COW_AT(1022ba2e)
            if (rd16(esi + 2u) != 1u) goto L_1022ba5b;
    COW_AT(1022ba34)
            if (rd16(esi) == 0x8fu) goto L_1022ba4c;
    COW_AT(1022ba3b)
            if ((rd32(esi + 0x4cu) & 0x7fff80u) != 0x200u)
            {
                ecx = rd32(esi + 0x4cu) & 0x7fff80u;
                goto L_1022ba5b;
            }
            ecx = rd32(esi + 0x4cu) & 0x7fff80u;
L_1022ba4c: ;
    COW_AT(1022ba4c)
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 8u);
            loc_28 = 8u;
L_1022ba60: ;
    COW_AT(1022ba60)
            wr32(sp0 - 0x3cu, 0x164u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t22 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x164u);
            t23 = g->ecx;
            t24 = g->edx;
            if ((uint8_t)t22 == 0u)
            {
                eax = t22;
                ecx = t23;
                edx = t24;
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = t22;
                ecx = t23;
                edx = t24;
    COW_AT(1022ba71)
                if (rd8(esi + 0x47u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi + 0x47u);
                    loc_28 = rd32(sp0 - 0x28u);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(esi + 0x47u);
    COW_AT(1022ba78)
                    if (rd16(esi + 2u) != 6u)
                    {
                        loc_28 = rd32(sp0 - 0x28u);
                    }
                    else
                    {
    COW_AT(1022ba7f)
                        if (rd16(esi) == 0x225u)
                        {
                            eax = (eax & 0xffff0000u) | rd16(esi);
                            loc_28 = rd32(sp0 - 0x28u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | rd16(esi);
    COW_AT(1022ba88)
                            if ((uint16_t)eax == 0x2c7u)
                            {
                                loc_28 = rd32(sp0 - 0x28u);
                            }
                            else
                            {
    COW_AT(1022ba8e)
                                if (rd8(esi + 0x48u) != 1u)
                                {
                                    loc_28 = rd32(sp0 - 0x28u);
                                }
                                else
                                {
    COW_AT(1022ba94)
                                    wr32(sp0 - 0x24u, 1u);
                                    wr32(sp0 - 0x28u, 8u);
                                    loc_28 = 8u;
                                }
                            }
                        }
                    }
                }
            }
    COW_AT(1022ba9c)
            wr32(sp0 - 0x3cu, 0x16eu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t25 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x16eu);
            t26 = g->ecx;
            t27 = g->edx;
            if ((uint8_t)t25 == 0u)
            {
                eax = t25;
                ecx = t26;
                edx = t27;
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = t25;
                ecx = t26;
                edx = t27;
    COW_AT(1022baad)
                if ((rd32(esi + 0x4cu) & 0x800000u) == 0u)
                {
                    loc_28 = rd32(sp0 - 0x28u);
                }
                else
                {
    COW_AT(1022bab6)
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 8u);
                    loc_28 = 8u;
                }
            }
    COW_AT(1022babe)
            wr32(sp0 - 0x3cu, 0x16fu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t28 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x16fu);
            t29 = g->ecx;
            t30 = g->edx;
            if ((uint8_t)t28 == 0u)
            {
                eax = t28;
                ecx = t29;
                edx = t30;
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = t28;
                ecx = t29;
                edx = t30;
    COW_AT(1022bacf)
                if ((rd32(esi + 0x4cu) & 0x1000000u) == 0u)
                {
                    loc_28 = rd32(sp0 - 0x28u);
                }
                else
                {
    COW_AT(1022bad8)
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 8u);
                    loc_28 = 8u;
                }
            }
    COW_AT(1022bae0)
            wr32(sp0 - 0x3cu, 0x207u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t31 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x207u);
            t32 = g->ecx;
            t33 = g->edx;
            if ((uint8_t)t31 == 0u)
            {
                eax = t31;
                ecx = t32;
                edx = t33;
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = t31;
                ecx = t32;
                edx = t33;
    COW_AT(1022baf1)
                if ((rd32(esi + 0x4cu) & 0x20000000u) == 0u)
                {
                    loc_28 = rd32(sp0 - 0x28u);
                }
                else
                {
    COW_AT(1022bafa)
                    t34 = rd32(sp0 - 0x28u) - 4u;
                    t35 = rd32(sp0 - 0x28u);
                    wr32(sp0 - 0x28u, t34);
                    if ((int32_t)(t35 - 4u) >= 1)
                    {
                        eax = t34;
                        loc_28 = t34;
                    }
                    else
                    {
                        eax = t34;
    COW_AT(1022bb09)
                        wr32(sp0 - 0x28u, 1u);
                        loc_28 = 1u;
                    }
                }
            }
    COW_AT(1022bb0d)
            wr32(sp0 - 0x3cu, 0x4fu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t36 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x4fu);
            t37 = g->ecx;
            t38 = g->edx;
            if ((uint8_t)t36 == 0u)
            {
                eax = t36;
                ecx = t37;
                edx = t38;
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = t36;
                ecx = t37;
                edx = t38;
    COW_AT(1022bb1b)
                if (rd16(esi) != 0xdau)
                {
                    loc_28 = rd32(sp0 - 0x28u);
                }
                else
                {
    COW_AT(1022bb22)
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 8u);
                    loc_28 = 8u;
                }
            }
    COW_AT(1022bb2a)
            wr32(sp0 - 0x3cu, 0x26du);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t39 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x26du);
            t40 = g->ecx;
            t41 = g->edx;
            if ((uint8_t)t39 == 0u)
            {
                eax = t39;
                ecx = t40;
                edx = t41;
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = t39;
                ecx = t40;
                edx = t41;
    COW_AT(1022bb3b)
                if ((int16_t)rd16(esi) < 1)
                {
                    eax = (eax & 0xffff0000u) | rd16(esi);
                    goto L_1022bb49;
                }
                eax = (eax & 0xffff0000u) | rd16(esi);
    COW_AT(1022bb43)
                if ((int16_t)eax <= 6) goto L_1022bb55;
L_1022bb49: ;
    COW_AT(1022bb49)
                if ((int16_t)eax < 43)
                {
                    loc_28 = rd32(sp0 - 0x28u);
                    goto L_1022bb5d;
                }
    COW_AT(1022bb4f)
                if ((int16_t)eax > 47)
                {
                    loc_28 = rd32(sp0 - 0x28u);
                    goto L_1022bb5d;
                }
L_1022bb55: ;
    COW_AT(1022bb55)
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 8u);
                loc_28 = 8u;
            }
L_1022bb5d: ;
    COW_AT(1022bb5d)
            wr32(sp0 - 0x3cu, 0x1fcu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t42 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x1fcu);
            t43 = g->ecx;
            t44 = g->edx;
            if ((uint8_t)t42 == 0u)
            {
                ecx = t43;
                edx = t44;
            }
            else
            {
                ecx = t43;
                edx = t44;
    COW_AT(1022bb6e)
                wr8(sp0 - 2u, 1u);
            }
    COW_AT(1022bb73)
            if (rd32(COW_IMG(0x105781acu)) == 0u)
            {
                eax = rd32(COW_IMG(0x105781acu));
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = rd32(COW_IMG(0x105781acu));
    COW_AT(1022bb80)
                ebx = 0u;
                edi = 0u;
                loc_28 = rd32(sp0 - 0x28u);
L_1022bb84: ;
    COW_AT(1022bb84)
                if ((uint8_t)ebx != 0u) goto L_1022bc92;
    COW_AT(1022bb8c)
                wr32(sp0 - 0x3cu, edi);
                g->eax = eax;
                g->edx = edx;
                t45 = rd32(COW_IMG(0x105781acu));
                g->esp = sp0 - 0x38u;
                t46 = cow_thiscall(g, COW_IMG(0x101304a0u), t45, 1, edi);
                t47 = g->ecx;
                t48 = g->edx;
                if (t46 == 0u)
                {
                    eax = t46;
                    ecx = t47;
                    edx = t48;
                    loc_28 = rd32(sp0 - 0x28u);
                }
                else
                {
                    eax = t46;
                    ecx = t47;
    COW_AT(1022bba0)
                    t49 = rd8(eax + 9u);
                    if (t49 == 1u)
                    {
                        eax = t49 - 1u;
                        edx = t49;
                        goto L_1022bc5e;
                    }
                    eax = t49 - 1u;
                    edx = t49;
    COW_AT(1022bbae)
                    if (eax == 3u)
                    {
                        eax = eax - 3u;
                        goto L_1022bbe5;
                    }
                    eax = eax - 3u;
    COW_AT(1022bbb3)
                    if (eax != 1u)
                    {
                        eax = eax - 1u;
                        loc_28 = rd32(sp0 - 0x28u);
                        goto L_1022bc88;
                    }
                    eax = eax - 1u;
    COW_AT(1022bbba)
                    if (rd16(esi + 2u) != 4u)
                    {
                        loc_28 = rd32(sp0 - 0x28u);
                        goto L_1022bc88;
                    }
    COW_AT(1022bbc5)
                    if (rd16(esi) == 0x152u)
                    {
                        eax = (eax & 0xffff0000u) | rd16(esi);
                        goto L_1022bc7a;
                    }
                    eax = (eax & 0xffff0000u) | rd16(esi);
    COW_AT(1022bbd2)
                    if ((uint16_t)eax == 0x153u) goto L_1022bc7a;
    COW_AT(1022bbdc)
                    zf = (uint16_t)((uint16_t)eax - 0x154u) == 0u;
L_1022bc78: ;
    COW_AT(1022bc78)
                    if (!zf)
                    {
                        loc_28 = rd32(sp0 - 0x28u);
                        goto L_1022bc88;
                    }
L_1022bc7a: ;
    COW_AT(1022bc7a)
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 8u);
                    loc_28 = 8u;
L_1022bc86: ;
    COW_AT(1022bc86)
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
L_1022bc88: ;
    COW_AT(1022bc88)
                if ((int32_t)(edi + 1u) < 16)
                {
                    edi = edi + 1u;
                    goto L_1022bb84;
                }
            }
L_1022bc92: ;
    COW_AT(1022bc92)
            if (rd8(sp0 - 4u) == 0u)
            {
                ebx = rd32(sp0 - 0x38u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 4u);
                ebx = rd32(sp0 - 0x38u);
    COW_AT(1022bc9b)
                if (rd8(sp0 - 3u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(sp0 - 3u);
    COW_AT(1022bcaa)
                    wr32(sp0 - 0x38u, 0x248u);
                    g->eax = eax;
                    g->esp = sp0 - 0x34u;
                    t55 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x248u);
                    t56 = g->ecx;
                    if ((uint8_t)t55 == 0u)
                    {
                        ecx = t56;
                    }
                    else
                    {
                        ecx = t56;
    COW_AT(1022bcbb)
                        wr32(sp0 - 0x18u, 6u);
                    }
                }
                else
                {
    COW_AT(1022bca3)
                    wr8(sp0 - 1u, 1u);
                }
    COW_AT(1022bcc3)
                if (rd8(sp0 - 2u) == 0u)
                {
                    eax = rd8(esi + 0x53u);
                }
                else
                {
                    eax = rd8(esi + 0x53u);
    COW_AT(1022bcd0)
                    eax = eax * 3u;
                }
    COW_AT(1022bcd3)
                ecx = eax * 3u + 3u;
                eax = 0u;
L_1022bcd9: ;
    COW_AT(1022bcd9)
                if ((int32_t)rd16(COW_IMG(0x10364488u) + eax * 2u) > (int32_t)ecx)
                {
                    edx = rd16(COW_IMG(0x10364488u) + eax * 2u);
                    goto L_1022bced;
                }
                edx = rd16(COW_IMG(0x10364488u) + eax * 2u);
    COW_AT(1022bce7)
                if (eax + 1u < 0x10u)
                {
                    eax = eax + 1u;
                    goto L_1022bcd9;
                }
                eax = eax + 1u;
L_1022bced: ;
    COW_AT(1022bced)
                if (eax != 0u)
                {
    COW_AT(1022bcf1)
                    eax = eax - 1u;
                }
    COW_AT(1022bcf2)
                wr32(sp0 - 0x10u, eax);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x24u, 1u);
                loc_28 = eax;
            }
    COW_AT(1022bcfe)
            wr32(sp0 - 0x38u, sp0 - 0x28u);
            g->ebx = ebx;
            g->eax = sp0 - 0x28u;
            g->esp = sp0 - 0x24u;
            t57 = cow_call_regs(g, COW_IMG(0x1022d370u), g->eax, ecx, edx, 1, 5, sp0 - 0x28u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), loc_28);
            t58 = g->edx;
            wr32(sp0 - 0x3cu, sp0 - 0x28u);
            g->esp = sp0 - 0x28u;
            cow_call_regs(g, COW_IMG(0x1022d510u), t57, sp0 - 0x28u, t58, 1, 5, sp0 - 0x28u, sp0 - 0x28u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            wr32(sp0 - 0x40u, arg8);
            wr32(sp0 - 0x44u, arg7);
            wr32(sp0 - 0x48u, arg6);
            wr32(sp0 - 0x4cu, arg5);
            wr32(sp0 - 0x50u, arg4);
            wr32(sp0 - 0x54u, arg3);
            wr32(sp0 - 0x58u, arg2);
            wr32(sp0 - 0x5cu, sp0 - 0x28u);
            g->eax = sp0 - 0x28u;
            g->edx = arg2;
            g->esp = sp0 - 0x3cu;
            t59 = cow_thiscall_cdecl(g, COW_IMG(0x1022d290u), arg3, 8, sp0 - 0x28u, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
            t60 = g->edx;
            eax = t59;
            edx = t60;
            ebp = rd32(sp0 - 0x34u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
        }
    }
    COW_AT(1022bd43)
    g->ebx = ebx;
    g->esi = loc_2c;
    g->edi = loc_30;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_1022ba5b: ;
    COW_AT(1022ba5b)
    loc_28 = rd32(sp0 - 0x28u);
    goto L_1022ba60;
L_1022bbe5: ;
    COW_AT(1022bbe5)
    if (rd16(esi + 2u) != 5u)
    {
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1022bc88;
    }
    COW_AT(1022bbf0)
    if (rd32(COW_IMG(0x10667a78u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10667a78u));
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1022bc88;
    }
    eax = rd32(COW_IMG(0x10667a78u));
    COW_AT(1022bbfd)
    t50 = rd16(esi + 0x22u);
    q51 = (int64_t)cow_muls(0x66666667u, rd16(eax + t50 * 2u));
    t52 = (uint32_t)((int32_t)cow_qhi(q51) >> 2u);
    if ((int16_t)(t52 + (t52 >> 0x1fu)) <= 0)
    {
        ecx = rd16(eax + t50 * 2u);
        eax = t52 >> 0x1fu;
        edx = t52 + (t52 >> 0x1fu);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1022bc88;
    }
    eax = t52 >> 0x1fu;
    edx = t52 + (t52 >> 0x1fu);
    COW_AT(1022bc21)
    t53 = cow_divs(g, (rd16(COW_IMG(0x104856f6u)) & 0x7fffu) << 8u, (uint32_t)(int16_t)edx);
    t54 = cow_mods(g, (rd16(COW_IMG(0x104856f6u)) & 0x7fffu) << 8u, (uint32_t)(int16_t)edx);
    if ((int16_t)(t53 - 0x100u) >= 0)
    {
        eax = t53 - 0x100u;
        ecx = (uint32_t)(int16_t)edx;
    COW_AT(1022bc4a)
        if ((int16_t)eax > 256)
        {
    COW_AT(1022bc50)
            eax = 0x100u;
        }
    COW_AT(1022bc55)
        wr16(arg5, (uint16_t)eax);
        edx = arg5;
        loc_28 = rd32(sp0 - 0x28u);
    }
    else
    {
        ecx = (uint32_t)(int16_t)edx;
    COW_AT(1022bc3f)
        wr16(arg5, 0u);
        eax = 0u;
        edx = arg5;
        loc_28 = rd32(sp0 - 0x28u);
    }
    goto L_1022bc86;
L_1022bc5e: ;
    COW_AT(1022bc5e)
    if (rd16(esi + 2u) != 1u)
    {
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1022bc88;
    }
    COW_AT(1022bc64)
    if (rd16(esi) == 0x8fu) goto L_1022bc7a;
    COW_AT(1022bc6b)
    eax = rd32(esi + 0x4cu) & 0x7fff80u;
    zf = (rd32(esi + 0x4cu) & 0x7fff80u) == 0x200u;
    goto L_1022bc78;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022b8e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022b924u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022b93eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022b9ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022b9d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022b9dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022b9e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022b9e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022b9f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022b9fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba2eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba34u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba4cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba5bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022ba9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022baadu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bab6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022babeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bacfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bad8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bae0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022baf1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bafau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb43u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebx = 8u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb84u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bb8cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bba0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bbaeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bbb3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bbbau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bbc5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bbd2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bbdcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bbe5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bbf0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bbfdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc21u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc3fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc4au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc55u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc64u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc6bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc78u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc88u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc92u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bc9bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bca3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcaau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcbbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcc3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcd0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcd3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcd9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bce7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcedu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcf1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcf2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1022bcfeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1022bd43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b8e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022b8e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
