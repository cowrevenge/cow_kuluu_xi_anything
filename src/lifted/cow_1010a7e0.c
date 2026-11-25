/* f_0x1010a7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1010a7e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t51;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1010a7f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1010a7f4;
    case 0x1010a801u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a801;
    case 0x1010a80cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a80c;
    case 0x1010a81bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a81b;
    case 0x1010a823u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a823;
    case 0x1010a82bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a82b;
    case 0x1010a833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a833;
    case 0x1010a842u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a842;
    case 0x1010a849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a849;
    case 0x1010a84eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a84e;
    case 0x1010a850u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a850;
    case 0x1010a85bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a85b;
    case 0x1010a865u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a865;
    case 0x1010a86au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a86a;
    case 0x1010a871u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a871;
    case 0x1010a87au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a87a;
    case 0x1010a87eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a87e;
    case 0x1010a888u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a888;
    case 0x1010a890u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a890;
    case 0x1010a896u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a896;
    case 0x1010a899u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a899;
    case 0x1010a89bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a89b;
    case 0x1010a8a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a8a1;
    case 0x1010a8adu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a8ad;
    case 0x1010a8c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a8c3;
    case 0x1010a8ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a8cc;
    case 0x1010a8dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a8df;
    case 0x1010a8e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a8e6;
    case 0x1010a8ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a8eb;
    case 0x1010a8edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a8ed;
    case 0x1010a8f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a8f8;
    case 0x1010a902u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a902;
    case 0x1010a907u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a907;
    case 0x1010a90eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a90e;
    case 0x1010a917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a917;
    case 0x1010a91bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a91b;
    case 0x1010a925u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a925;
    case 0x1010a92du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a92d;
    case 0x1010a933u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a933;
    case 0x1010a936u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a936;
    case 0x1010a938u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a938;
    case 0x1010a93eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a93e;
    case 0x1010a949u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a949;
    case 0x1010a95fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1010a95f;
    case 0x1010a968u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a968;
    case 0x1010a96au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a96a;
    case 0x1010a989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a989;
    case 0x1010a996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1010a996;
    case 0x1010a99bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010a99b;
    case 0x1010a9b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1010a9b2;
    case 0x1010a9c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1010a9c4;
    case 0x1010a9ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1010a9ce;
    case 0x1010a9d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1010a9d7;
    case 0x1010a9e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1010a9e5;
    case 0x1010a9eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010a9ee;
    case 0x1010a9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010a9f7;
    case 0x1010aa05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010aa05;
    case 0x1010aa09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010aa09;
    case 0x1010aa16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010aa16;
    case 0x1010aa24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010aa24;
    case 0x1010aa28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010aa28;
    case 0x1010aa31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010aa31;
    case 0x1010aa3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010aa3c;
    case 0x1010aa4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010aa4b;
    case 0x1010aa55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010aa55;
    case 0x1010aa5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010aa5e;
    case 0x1010aa6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010aa6c;
    case 0x1010aa70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010aa70;
    case 0x1010aa7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010aa7c;
    case 0x1010aa8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010aa8a;
    case 0x1010aa8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010aa8e;
    case 0x1010aa9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010aa9e;
    case 0x1010aaacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010aaac;
    case 0x1010aab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1010aab0;
    case 0x1010aab9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010aab9;
    case 0x1010aac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010aac7;
    case 0x1010aacbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010aacb;
    case 0x1010aad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010aad8;
    case 0x1010aae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010aae6;
    case 0x1010aaeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010aaea;
    case 0x1010aaf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010aaf7;
    case 0x1010ab05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab05;
    case 0x1010ab09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab09;
    case 0x1010ab16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab16;
    case 0x1010ab21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab21;
    case 0x1010ab32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab32;
    case 0x1010ab3cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab3c;
    case 0x1010ab41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab41;
    case 0x1010ab4du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab4d;
    case 0x1010ab52u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab52;
    case 0x1010ab57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab57;
    case 0x1010ab63u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab63;
    case 0x1010ab69u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab69;
    case 0x1010ab6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab6e;
    case 0x1010ab7au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab7a;
    case 0x1010ab80u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab80;
    case 0x1010ab85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab85;
    case 0x1010ab91u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab91;
    case 0x1010ab96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010ab96;
    default: break;
    }
#endif

    COW_AT(1010a7e0)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x30u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1cu, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1010a7f4)
    wr32(sp0 - 0x34u, 0x2eu);
    t3 = rd32(sp0 + 4u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t4 = cow_fastcall(g, COW_IMG(0x10109830u), t3, edx, 1, 0x2eu);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    ebx = t3;
    COW_AT(1010a801)
    if ((int16_t)eax <= 0) goto L_1010a96a;
    esi = eax;
    COW_AT(1010a80c)
    wr32(sp0 - 0x34u, esi + 1u);
    wr32(sp0 + 4u, esi + 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t6 = cow_thiscall(g, COW_IMG(0x101093f0u), ebx, 1, esi + 1u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    edi = esi + 1u;
    COW_AT(1010a81b)
    if ((uint8_t)eax == 0u) goto L_1010a96a;
    COW_AT(1010a823)
    wr32(sp0 - 0x34u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t8 = cow_thiscall(g, COW_IMG(0x101093f0u), ebx, 1, edi);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(1010a82b)
    if ((uint8_t)eax == 0x2au) goto L_1010a96a;
    COW_AT(1010a833)
    wr32(sp0 - 0x34u, esi);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    g->esi = esi;
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x30u;
    t10 = cow_thiscall(g, COW_IMG(0x10109430u), ebx, 3, sp0 - 0x14u, 0u, esi);
    eax = t10;
    COW_AT(1010a842)
    if (rd32(eax + 4u) == 0u)
    {
    COW_AT(1010a84e)
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 4u);
    COW_AT(1010a849)
        eax = rd32(eax + 4u);
    }
    COW_AT(1010a850)
    edx = eax;
    ebp = 3u;
    edi = sp0 - 0xcu;
    loc_c = rd32(sp0 - 0xcu);
L_1010a85b: ;
    COW_AT(1010a85b)
    wr32(edi, 0u);
    if (edx == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
    }
    else
    {
        loc_c = rd32(sp0 - 0xcu);
    COW_AT(1010a865)
        t11 = rd8(edx);
        if ((uint8_t)t11 != 0u)
        {
    COW_AT(1010a86a)
            ecx = 0u;
            esi = 5u;
L_1010a871: ;
    COW_AT(1010a871)
            if (rd8(edx) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(edx);
                ecx = ecx << 6u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(edx);
                ecx = ecx << 6u;
    COW_AT(1010a87a)
                if ((uint8_t)eax <= 0x60u)
                {
    COW_AT(1010a888)
                    eax = (uint8_t)eax - 0x20u;
                }
                else
                {
    COW_AT(1010a87e)
                    eax = (uint8_t)eax - 0x40u;
                }
    COW_AT(1010a890)
                ecx = ecx | (eax & 0x3fu);
                eax = eax & 0x3fu;
                edx = edx + 1u;
            }
    COW_AT(1010a896)
            if (esi != 1u)
            {
                esi = esi - 1u;
                goto L_1010a871;
            }
            esi = esi - 1u;
    COW_AT(1010a899)
            wr32(edi, ecx);
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    COW_AT(1010a89b)
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        edi = edi + 4u;
        goto L_1010a85b;
    }
    COW_AT(1010a8a1)
    if (rd32(sp0 - 0x20u) == sp0 - 0xcu)
    {
        ebp = rd32(sp0 - 0x20u);
    }
    else
    {
        ebp = rd32(sp0 - 0x20u);
    COW_AT(1010a8ad)
        t12 = rd32(sp0 - 8u);
        wr32(ebp, loc_c);
        t13 = rd32(sp0 - 4u);
        wr32(ebp + 4u, t12);
        wr32(ebp + 8u, t13);
        eax = t13;
        edx = ebp;
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(1010a8c3)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t14 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x14u, 0);
    eax = t14;
    COW_AT(1010a8cc)
    wr32(sp0 - 0x34u, 0xffffffffu);
    t15 = rd32(sp0 + 4u);
    wr32(sp0 - 0x38u, t15);
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    g->esi = esi;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t16 = cow_thiscall(g, COW_IMG(0x10109430u), ebx, 3, sp0 - 0x14u, t15, 0xffffffffu);
    eax = t16;
    COW_AT(1010a8df)
    if (rd32(eax + 4u) == 0u)
    {
    COW_AT(1010a8eb)
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 4u);
    COW_AT(1010a8e6)
        eax = rd32(eax + 4u);
    }
    COW_AT(1010a8ed)
    edx = eax;
    ebx = 3u;
    esi = sp0 - 0xcu;
    loc_c = rd32(sp0 - 0xcu);
L_1010a8f8: ;
    COW_AT(1010a8f8)
    wr32(esi, 0u);
    if (edx == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
    }
    else
    {
        loc_c = rd32(sp0 - 0xcu);
    COW_AT(1010a902)
        t17 = rd8(edx);
        if ((uint8_t)t17 != 0u)
        {
    COW_AT(1010a907)
            ecx = 0u;
            edi = 5u;
L_1010a90e: ;
    COW_AT(1010a90e)
            if (rd8(edx) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(edx);
                ecx = ecx << 6u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(edx);
                ecx = ecx << 6u;
    COW_AT(1010a917)
                if ((uint8_t)eax <= 0x60u)
                {
    COW_AT(1010a925)
                    eax = (uint8_t)eax - 0x20u;
                }
                else
                {
    COW_AT(1010a91b)
                    eax = (uint8_t)eax - 0x40u;
                }
    COW_AT(1010a92d)
                ecx = ecx | (eax & 0x3fu);
                eax = eax & 0x3fu;
                edx = edx + 1u;
            }
    COW_AT(1010a933)
            if (edi != 1u)
            {
                edi = edi - 1u;
                goto L_1010a90e;
            }
    COW_AT(1010a936)
            wr32(esi, ecx);
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    COW_AT(1010a938)
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_1010a8f8;
    }
    COW_AT(1010a93e)
    if (ebp + 0xcu == sp0 - 0xcu)
    {
        eax = sp0 - 0xcu;
        ebx = ebp + 0xcu;
    }
    else
    {
        ebx = ebp + 0xcu;
    COW_AT(1010a949)
        t18 = rd32(sp0 - 8u);
        wr32(ebx, loc_c);
        t19 = rd32(sp0 - 4u);
        wr32(ebx + 4u, t18);
        wr32(ebx + 8u, t19);
        eax = t18;
        edx = t19;
    }
    COW_AT(1010a95f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t20 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x14u, 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(1010a968)
L_1010a989: ;
    COW_AT(1010a989)
    wr32(sp0 - 0x34u, 0x3au);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t23 = cow_fastcall(g, COW_IMG(0x10109830u), arg2, edx, 1, 0x3au);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    COW_AT(1010a996)
    if ((int16_t)eax > 0)
    {
    COW_AT(1010a9b2)
        wr32(sp0 - 0x34u, eax + 1u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        g->esi = eax + 1u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t26 = cow_thiscall(g, COW_IMG(0x10109430u), arg2, 3, sp0 - 0x14u, 0u, eax + 1u);
        t27 = g->edx;
        edx = t27;
        esi = eax + 1u;
        eax = t26;
    COW_AT(1010a9c4)
        wr32(sp0 - 0x34u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t28 = cow_thiscall(g, COW_IMG(0x10109260u), sp0 - 0x1cu, 1, eax);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    COW_AT(1010a9ce)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t30 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x14u, 0);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    COW_AT(1010a9d7)
        wr32(sp0 - 0x34u, COW_IMG(0x1036bf14u));
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t32 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf14u));
        t33 = g->edx;
        eax = t32;
        edx = t33;
    COW_AT(1010a9e5)
        if (eax != 0u)
        {
    COW_AT(1010a9f7)
            wr32(sp0 - 0x34u, COW_IMG(0x1036bf10u));
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t35 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf10u));
            t36 = g->edx;
            eax = t35;
            edx = t36;
    COW_AT(1010aa05)
            if (eax != 0u)
            {
    COW_AT(1010aa16)
                wr32(sp0 - 0x34u, COW_IMG(0x1036bf0cu));
                g->ebx = ebx;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                t37 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf0cu));
                t38 = g->edx;
                eax = t37;
                edx = t38;
    COW_AT(1010aa24)
                if (eax != 0u)
                {
    COW_AT(1010aa31)
                    t39 = rd32(sp0 - 0x20u);
                    wr32(t39 + 0x18u, 3u);
                    edx = t39;
                }
                else
                {
    COW_AT(1010aa28)
                    wr32(rd32(sp0 - 0x20u) + 0x18u, 2u);
                }
            }
            else
            {
    COW_AT(1010aa09)
                wr32(rd32(sp0 - 0x20u) + 0x18u, 1u);
            }
        }
        else
        {
    COW_AT(1010a9ee)
            t34 = rd32(sp0 - 0x20u);
            wr32(t34 + 0x18u, eax);
            edx = t34;
        }
    COW_AT(1010aa3c)
        wr32(sp0 - 0x34u, 0xffffffffu);
        wr32(sp0 - 0x38u, esi);
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        g->esi = esi;
        g->eax = sp0 - 0x14u;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t40 = cow_thiscall(g, COW_IMG(0x10109430u), arg2, 3, sp0 - 0x14u, esi, 0xffffffffu);
        t41 = g->edx;
        eax = t40;
        edx = t41;
    COW_AT(1010aa4b)
        wr32(sp0 - 0x34u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t42 = cow_thiscall(g, COW_IMG(0x10109260u), sp0 - 0x1cu, 1, eax);
        t43 = g->edx;
        eax = t42;
        edx = t43;
    COW_AT(1010aa55)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t44 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x14u, 0);
        t45 = g->edx;
        eax = t44;
        edx = t45;
    COW_AT(1010aa5e)
        wr32(sp0 - 0x34u, COW_IMG(0x1036bf08u));
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t46 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf08u));
        t47 = g->edx;
        eax = t46;
        edx = t47;
    COW_AT(1010aa6c)
        if (eax != 0u)
        {
    COW_AT(1010aa7c)
            wr32(sp0 - 0x34u, COW_IMG(0x1036bf04u));
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t48 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf04u));
            t49 = g->edx;
            eax = t48;
            edx = t49;
    COW_AT(1010aa8a)
            if (eax != 0u)
            {
    COW_AT(1010aa9e)
                wr32(sp0 - 0x34u, COW_IMG(0x1036bf00u));
                g->ebx = ebx;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                t50 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf00u));
                t51 = g->edx;
                eax = t50;
                edx = t51;
    COW_AT(1010aaac)
                if (eax != 0u)
                {
    COW_AT(1010aab9)
                    wr32(sp0 - 0x34u, COW_IMG(0x1036befcu));
                    g->ebx = ebx;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    t53 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036befcu));
                    t54 = g->edx;
                    eax = t53;
                    edx = t54;
    COW_AT(1010aac7)
                    if (eax != 0u)
                    {
    COW_AT(1010aad8)
                        wr32(sp0 - 0x34u, COW_IMG(0x1036bef8u));
                        g->ebx = ebx;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x30u;
                        t55 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bef8u));
                        t56 = g->edx;
                        eax = t55;
                        edx = t56;
    COW_AT(1010aae6)
                        if (eax != 0u)
                        {
    COW_AT(1010aaf7)
                            wr32(sp0 - 0x34u, COW_IMG(0x1036bef4u));
                            g->ebx = ebx;
                            g->eax = eax;
                            g->esp = sp0 - 0x30u;
                            t57 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bef4u));
                            eax = t57;
    COW_AT(1010ab05)
                            if (eax != 0u)
                            {
    COW_AT(1010ab16)
                                wr32(rd32(sp0 - 0x20u) + 0x1cu, 6u);
                            }
                            else
                            {
    COW_AT(1010ab09)
                                t58 = rd32(sp0 - 0x20u);
                                wr32(t58 + 0x1cu, 5u);
                                eax = t58;
                            }
                        }
                        else
                        {
    COW_AT(1010aaea)
                            wr32(rd32(sp0 - 0x20u) + 0x1cu, 4u);
                        }
                    }
                    else
                    {
    COW_AT(1010aacb)
                        wr32(rd32(sp0 - 0x20u) + 0x1cu, 3u);
                    }
                }
                else
                {
    COW_AT(1010aab0)
                    t52 = rd32(sp0 - 0x20u);
                    wr32(t52 + 0x1cu, 2u);
                    eax = t52;
                }
            }
            else
            {
    COW_AT(1010aa8e)
                wr32(rd32(sp0 - 0x20u) + 0x1cu, 1u);
            }
        }
        else
        {
    COW_AT(1010aa70)
            wr32(rd32(sp0 - 0x20u) + 0x1cu, eax);
        }
    }
    else
    {
    COW_AT(1010a99b)
        t25 = rd32(sp0 - 0x20u);
        wr32(t25 + 0x18u, 3u);
        wr32(t25 + 0x1cu, 6u);
        eax = t25;
    }
    COW_AT(1010ab21)
    wr32(sp0 - 0x34u, arg3);
    g->edx = arg3;
    t59 = rd32(sp0 - 0x20u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10109260u), t59 + 0x20u, 1, arg3);
    t60 = g->edx;
    edx = t60;
    esi = t59;
    COW_AT(1010ab32)
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        goto L_1010ab4d;
    }
    eax = rd32(esi);
    COW_AT(1010ab3c)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t61 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    eax = t61;
    COW_AT(1010ab41)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return eax & 0xffffff00u;
L_1010a96a: ;
    COW_AT(1010a96a)
    t22 = rd32(sp0 - 0x20u);
    wr32(t22, 0u);
    wr32(t22 + 4u, 0u);
    wr32(t22 + 8u, 0u);
    wr32(t22 + 0xcu, 0u);
    wr32(t22 + 0x10u, 0u);
    wr32(t22 + 0x14u, 0u);
    eax = t22 + 0xcu;
    edx = 0u;
    ebx = t22 + 0xcu;
    goto L_1010a989;
L_1010ab4d: ;
    COW_AT(1010ab4d)
    t62 = rd32(ebx);
    if (t62 != 0u) goto L_1010ab63;
    COW_AT(1010ab52)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t63 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    eax = t63;
    COW_AT(1010ab57)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return eax & 0xffffff00u;
L_1010ab63: ;
    COW_AT(1010ab63)
    t64 = rd32(esi + 0x18u);
    if (t64 != 3u) goto L_1010ab7a;
    COW_AT(1010ab69)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t65 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    eax = t65;
    COW_AT(1010ab6e)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return eax & 0xffffff00u;
L_1010ab7a: ;
    COW_AT(1010ab7a)
    t66 = rd32(esi + 0x1cu);
    if (t66 != 6u) goto L_1010ab91;
    COW_AT(1010ab80)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t67 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    eax = t67;
    COW_AT(1010ab85)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return eax & 0xffffff00u;
L_1010ab91: ;
    COW_AT(1010ab91)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t68 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    eax = t68;
    COW_AT(1010ab96)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1010a7e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1010a7f4u:
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
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a801u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a80cu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a81bu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a823u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a82bu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a833u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a842u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a849u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a84eu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a850u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a85bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a865u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a86au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a871u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a87au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a87eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a888u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a890u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a896u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a899u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a89bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a8a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a8adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        g->ecx = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1010a8c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a8ccu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a8dfu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a8e6u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a8ebu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a8edu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a8f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a902u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a907u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a90eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a917u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a91bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a925u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a92du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a933u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a936u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a938u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a93eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a949u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1010a95fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a968u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a96au:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a989u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a996u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010a99bu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010a9b2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010a9c4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010a9ceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010a9d7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010a9e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010a9eeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010a9f7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010aa05u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010aa09u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010aa16u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010aa24u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010aa28u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010aa31u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010aa3cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010aa4bu:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1010aa55u:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1010aa5eu:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1010aa6cu:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1010aa70u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010aa7cu:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1010aa8au:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1010aa8eu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010aa9eu:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1010aaacu:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1010aab0u:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1010aab9u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010aac7u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010aacbu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010aad8u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010aae6u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010aaeau:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010aaf7u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab05u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab09u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab16u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab21u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab32u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ecx = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ab41u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ecx = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ab52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ecx = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ab57u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ecx = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ab69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ecx = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ab6eu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ecx = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ab80u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ecx = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ab85u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1010ab91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ecx = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1010ab96u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a7e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1010a7e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
