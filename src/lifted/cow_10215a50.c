/* f_0x10215a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10215a50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10215a5au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10215a5a;
    case 0x10215a6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215a6c;
    case 0x10215a7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215a7e;
    case 0x10215a99u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215a99;
    case 0x10215aa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215aa0;
    case 0x10215aaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215aae;
    case 0x10215ac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215ac4;
    case 0x10215acdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215acd;
    case 0x10215ad1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215ad1;
    case 0x10215ad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215ad6;
    case 0x10215adfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10215adf;
    case 0x10215ae2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10215ae2;
    case 0x10215ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215ae7;
    case 0x10215af4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215af4;
    case 0x10215b03u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215b03;
    case 0x10215b11u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215b11;
    case 0x10215b28u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215b28;
    case 0x10215b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215b2f;
    case 0x10215b36u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215b36;
    case 0x10215b43u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215b43;
    case 0x10215b4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215b4c;
    case 0x10215b63u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10215b63;
    case 0x10215b74u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10215b74;
    case 0x10215b85u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10215b85;
    case 0x10215b8du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10215b8d;
    case 0x10215bb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10215bb4;
    case 0x10215bcau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215bca;
    case 0x10215bd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10215bd3;
    case 0x10215bdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10215bde;
    case 0x10215be7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10215be7;
    case 0x10215beau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10215bea;
    case 0x10215c10u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10215c10;
    case 0x10215c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); goto E_10215c28;
    case 0x10215c42u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215c42;
    case 0x10215c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); goto E_10215c59;
    case 0x10215ce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215ce8;
    case 0x10215d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215d4e;
    case 0x10215d63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10215d63;
    case 0x10215d71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10215d71;
    case 0x10215d79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10215d79;
    case 0x10215d7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10215d7f;
    case 0x10215d83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215d83;
    case 0x10215d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215d91;
    case 0x10215dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215dfa;
    case 0x10215dffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215dff;
    case 0x10215e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e09;
    case 0x10215e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e10;
    case 0x10215e1au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e1a;
    case 0x10215e24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e24;
    case 0x10215e26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e26;
    case 0x10215e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e30;
    case 0x10215e38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e38;
    case 0x10215e3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e3e;
    case 0x10215e42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e42;
    case 0x10215e47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10215e47;
    case 0x10215eacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215eac;
    case 0x10215eb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215eb4;
    case 0x10215ec8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215ec8;
    case 0x10215eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_10215ecc;
    case 0x10215ed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10215ed2;
    case 0x10215ef1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10215ef1;
    case 0x10215ef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215ef8;
    case 0x10215effu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215eff;
    case 0x10215f0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215f0a;
    case 0x10215f13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215f13;
    case 0x10215f1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215f1a;
    case 0x10215f21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215f21;
    case 0x10215f28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10215f28;
    case 0x10215f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10215f38;
    case 0x10215f3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10215f3b;
    case 0x10215f3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10215f3e;
    case 0x10215f42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10215f42;
    case 0x10215f47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10215f47;
    case 0x10215f4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10215f4d;
    case 0x10215f51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10215f51;
    case 0x10215f58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10215f58;
    case 0x10215f5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10215f5e;
    case 0x10215f62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10215f62;
    case 0x10215f69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10215f69;
    case 0x10215f6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10215f6f;
    case 0x10215f73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10215f73;
    case 0x10215f7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10215f7a;
    default: break;
    }
#endif

    COW_AT(10215a50)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, 7u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 7u);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10215a5a)
    wr32(sp0 - 0xcu, 8u);
    wr8(self + 0x1c3u, (uint8_t)eax != 0u);
    g->eax = (eax & 0xffffff00u) | (uint8_t)eax != 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, rd32(sp0 - 0xcu));
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10215a6c)
    wr32(sp0 - 0x10u, 9u);
    wr8(self + 0x1c4u, (uint8_t)eax != 0u);
    g->eax = eax;
    g->ecx = (ecx & 0xffffff00u) | (uint8_t)eax != 0u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, rd32(sp0 - 0x10u));
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10215a7e)
    wr8(self + 0x1c5u, (uint8_t)eax == 0u);
    if (rd8(self + 0x114u) == 0u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)eax == 0u;
        goto L_10215b03;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)eax == 0u;
    eax = rd8(self + 0x114u);
    COW_AT(10215a99)
    if (eax != 1u) goto L_10215bea;
    COW_AT(10215aa0)
    if (!(rd32(self + 0x11cu) & 1u)) goto L_10215bea;
    eax = rd32(self + 0x11cu);
    COW_AT(10215aae)
    t10 = (eax & 0xffffff00u) | (eax & 0xfeu);
    t11 = rd32(self + 0x154u);
    wr32(self + 0x11cu, t10);
    if ((int32_t)t11 < 0) goto L_10215bea;
    eax = t10;
    ecx = t11;
    COW_AT(10215ac4)
    if ((int32_t)ecx > 2) goto L_10215bea;
    COW_AT(10215acd)
    if ((eax & 2u) != 0u)
    {
    COW_AT(10215ad1)
        if (ecx != 2u)
        {
            ecx = ecx - 2u;
        }
        else
        {
            ecx = ecx - 2u;
    COW_AT(10215ad6)
            wr32(sp0 - 8u, 1u);
            wr32(sp0 - 0xcu, 9u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t12 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 9u, 1u);
            t13 = g->ecx;
            t14 = g->edx;
            eax = t12;
            ecx = t13;
            edx = t14;
    COW_AT(10215adf)
        }
    COW_AT(10215ae2)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t15 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    COW_AT(10215ae7)
    wr32(sp0 - 8u, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10210fc0u), rd32(COW_IMG(0x10664520u)), 1, 0u);
    t17 = g->edx;
    edx = t17;
    COW_AT(10215af4)
    wr8(self + 0x114u, 0u);
    esi = rd32(sp0 - 4u);
L_10215c10: ;
    COW_AT(10215c10)
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x18u, 0u);
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = self;
        loc_1c = in_ebp;
        loc_20 = in_edi;
        loc_18 = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(10215c28)
        t33 = rd32(eax + 4u);
        wr32(sp0 - 8u, t33);
        wr32(sp0 - 0x24u, sp0 - 8u);
        t34 = rd32(eax + 8u);
        wr32(sp0 - 4u, t34);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x20u;
        t35 = cow_fastcall(g, COW_IMG(0x10215050u), self, t34, 1, sp0 - 8u);
        t36 = g->ecx;
        t37 = g->edx;
        eax = t35;
        ecx = t36;
        edx = t37;
    COW_AT(10215c42)
        t38 = rd16(self + 0x178u);
        wr16(self + 0x178u, (uint16_t)(((t38 ^ eax) & 0xfu) ^ t38));
        edx = ((t38 ^ eax) & 0xfu) ^ ((ecx & 0xffff0000u) | t38);
        ecx = (ecx & 0xffff0000u) | t38;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
    }
    COW_AT(10215c59)
    t39 = rd16(self + 0x16au);
    t40 = rd16(self + 0x17au);
    t41 = rd16(self + 0x166u);
    wr16(self + 0x18eu, (uint16_t)t41);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, esi);
    wr16(self + 0x190u, (uint16_t)(t39 + t40));
    wr32(sp0 - 0x2cu, 3u);
    t42 = rd16(self + 0x17cu);
    wr16(self + 0x18au, (uint16_t)((uint16_t)t41 + t42));
    wr16(self + 0x18cu, (uint16_t)(rd16(self + 0x17eu) + (uint16_t)(t39 + t40)));
    t43 = rd16(self + 0x16au);
    t44 = rd16(self + 0x186u);
    t45 = rd16(self + 0x16cu);
    t46 = rd16(self + 0x184u);
    t47 = rd16(self + 0x168u);
    t48 = rd16(self + 0x166u);
    wr16(self + 0x194u, (uint16_t)(t43 + (uint16_t)(t44 - t45)));
    wr16(self + 0x192u, (uint16_t)((uint16_t)(t46 - t47) - t48));
    g->eax = (eax & 0xffff0000u) | (uint16_t)(t43 + (uint16_t)(t44 - t45));
    t49 = rd32(self + 0xcu);
    g->esp = sp0 - 0x28u;
    t50 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, rd32(sp0 - 0x2cu));
    eax = t50;
    ebx = t49;
    COW_AT(10215ce8)
    t51 = rd32(ebx + 0xcu) - 1u;
    wr32(sp0 - 0x2cu, 0x80808080u);
    t52 = rd32(ebx + 8u);
    esi = eax;
    edi = t52;
    ecx = t51 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t51 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t53 = rd32(ebx + 0xcu);
    t54 = rd32(ebx + 8u);
    wr8(t53 + t54 - 1u, 0u);
    wr16(ebx + 0x14u, 0u);
    wr16(ebx + 0x16u, 0u);
    wr16(ebx + 0x10u, rd16(self + 0x18au));
    wr16(ebx + 0x12u, rd16(self + 0x18cu));
    wr32(sp0 - 0x30u, self + 0x17cu);
    t55 = rd16(self + 0x192u);
    wr16(ebx + 0x18u, (uint16_t)t55);
    wr16(ebx + 0x1au, 0u);
    g->esp = sp0 - 0x28u;
    cow_fastcall(g, COW_IMG(0x10211ec0u), ebx, (t54 & 0xffff0000u) | t55, 2, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    esi = ebx + 0x10u;
    COW_AT(10215d4e)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0xcu, self + 0x10u);
    eax = 0u;
    edx = esi;
    ebx = 0u;
    loc_10 = 0u;
    loc_14 = 0u;
    loc_c = self + 0x10u;
    loc_18 = rd32(sp0 - 0x18u);
L_10215d63: ;
    COW_AT(10215d63)
    if (rd32(loc_c) == 0u) goto L_10215ed2;
    ecx = rd32(loc_c);
    COW_AT(10215d71)
    if (eax != rd32(self + 0x154u))
    {
    COW_AT(10215d7f)
        t57 = rd8(ecx + 0x28u);
        wr8(ecx + 0x28u, t57 & 0xfdu);
    }
    else
    {
    COW_AT(10215d79)
        t56 = rd8(ecx + 0x28u);
        wr8(ecx + 0x28u, (uint8_t)(t56 | 2u));
    }
    COW_AT(10215d83)
    if (eax != rd32(self + 0x150u) - 1u)
    {
        esi = ecx + 0x10u;
        edi = rd32(self + 0x150u) - 1u;
        goto L_10215dff;
    }
    esi = ecx + 0x10u;
    edi = rd32(self + 0x150u) - 1u;
    COW_AT(10215d91)
    wr32(sp0 - 0x2cu, 0x80808080u);
    t58 = rd16(edx + 6u);
    t59 = rd16(edx + 0xau);
    t60 = rd16(self + 0x174u);
    t61 = rd16(self + 0x170u);
    wr16(esi + 4u, (uint16_t)t61);
    wr16(esi + 6u, (uint16_t)(t58 + (uint16_t)(t59 + t60)));
    wr16(esi, (uint16_t)((uint16_t)t61 + rd16(self + 0x18au)));
    t62 = rd16(self + 0x18cu);
    wr16(esi + 2u, (uint16_t)(t62 + (uint16_t)(t58 + (uint16_t)(t59 + t60))));
    t63 = rd16(self + 0x192u);
    t64 = rd16(self + 0x172u);
    t65 = rd16(self + 0x170u);
    wr16(esi + 0xau, 0u);
    wr16(esi + 8u, (uint16_t)((uint16_t)(t63 - t64) - t65));
    wr32(sp0 - 0x30u, self + 0x17cu);
    g->eax = self + 0x17cu;
    g->esp = sp0 - 0x28u;
    t66 = cow_fastcall(g, COW_IMG(0x10212050u), ecx, ((edx | t61) & 0xffff0000u) | (uint16_t)(t62 + (uint16_t)(t58 + (uint16_t)(t59 + t60))), 2, self + 0x17cu, rd32(sp0 - 0x2cu));
    eax = t66;
    COW_AT(10215dfa)
L_10215eb4: ;
    COW_AT(10215eb4)
    wr32(sp0 - 0x2cu, ebx);
    wr32(sp0 - 0x30u, esi);
    wr32(sp0 - 0x34u, esi);
    wr32(sp0 - 0x38u, sp0 - 8u);
    t77 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x3cu, t77);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t78 = cow_thiscall(g, COW_IMG(0x10214e70u), self, 5, t77, sp0 - 8u, esi, esi, ebx);
    eax = t78;
    COW_AT(10215ec8)
    wr32(sp0 - 0x18u, eax);
    loc_18 = eax;
L_10215ecc: ;
    COW_AT(10215ecc)
    eax = rd32(sp0 - 0x14u);
    edx = esi;
    loc_c = rd32(sp0 - 0xcu);
L_10215ed2: ;
    COW_AT(10215ed2)
    wr32(sp0 - 0x10u, ebx + 1u);
    wr32(sp0 - 0x14u, eax + 1u);
    wr32(sp0 - 0xcu, loc_c + 4u);
    if ((int16_t)(ebx + 1u) < 31)
    {
        loc_10 = ebx + 1u;
        ebx = ebx + 1u;
        loc_14 = eax + 1u;
        eax = eax + 1u;
        loc_c = loc_c + 4u;
        goto L_10215d63;
    }
    eax = eax + 1u;
    esi = loc_c + 4u;
    COW_AT(10215ef1)
    g->esi = esi;
    g->edi = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t79 = cow_call_regs(g, COW_IMG(0x10215f90u), eax, self, g->edx, 1, 0);
    t80 = g->edx;
    eax = t79;
    edx = t80;
    COW_AT(10215ef8)
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x102148a0u), self, 0);
    t81 = g->edx;
    edx = t81;
    COW_AT(10215eff)
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ebx = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ebx = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
    COW_AT(10215f0a)
        t82 = rd8(self + 0x178u);
        if ((t82 & 0xfu) != 0u)
        {
    COW_AT(10215f13)
            t83 = rd16(sp0 - 0x18u);
            if ((uint16_t)t83 == 0u)
            {
    COW_AT(10215f1a)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t84 = cow_thiscall(g, COW_IMG(0x10215030u), self, 0);
                t85 = g->edx;
                eax = t84;
                edx = t85;
    COW_AT(10215f21)
                t86 = rd8(self + 0x178u);
                wr8(self + 0x178u, t86 & 0xf0u);
            }
        }
    }
    COW_AT(10215f28)
    if (rd32(self + 0x154u) == 0u)
    {
        ecx = rd32(COW_IMG(0x10664530u));
        goto L_10215f6f;
    }
    ecx = rd32(COW_IMG(0x10664530u));
    ebp = rd32(self + 0x154u);
    COW_AT(10215f38)
    if (ebp == 1u) goto L_10215f5e;
    ebp = ebp - 1u;
    COW_AT(10215f3b)
    if (ebp == 1u) goto L_10215f4d;
    COW_AT(10215f3e)
    if (ecx == 0u) goto L_10215f7a;
    COW_AT(10215f42)
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
    COW_AT(10215f47)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
L_10215b03: ;
    COW_AT(10215b03)
    if (!(rd32(self + 0x11cu) & 1u)) goto L_10215bea;
    eax = rd32(self + 0x11cu);
    COW_AT(10215b11)
    t18 = (eax & 0xffffff00u) | (eax & 0xfeu);
    wr32(self + 0x11cu, t18);
    if (rd32(self + 0x154u) == 0u)
    {
        eax = rd32(self + 0x154u);
        goto L_10215bde;
    }
    eax = rd32(self + 0x154u);
    COW_AT(10215b28)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10215bca;
    }
    eax = eax - 1u;
    COW_AT(10215b2f)
    if (eax != 1u) goto L_10215bea;
    COW_AT(10215b36)
    if (rd32(COW_IMG(0x10664520u)) == 0u) goto L_10215bea;
    eax = rd32(COW_IMG(0x10664520u));
    COW_AT(10215b43)
    if (!(rd8(COW_IMG(0x1066452cu)) & 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1066452cu));
    COW_AT(10215b4c)
        wr32(sp0 - 8u, 0xd2u);
        wr32(sp0 - 0xcu, 9u);
        wr8(COW_IMG(0x1066452cu), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->ecx = (ecx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xd2u);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    COW_AT(10215b63)
        wr32(sp0 - 0x10u, 0xd3u);
        wr32(sp0 - 0x14u, 9u);
        wr32(COW_IMG(0x10664534u), eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xd3u);
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    COW_AT(10215b74)
        wr32(sp0 - 0x18u, 0xd4u);
        wr32(sp0 - 0x1cu, 9u);
        wr32(COW_IMG(0x10664538u), eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xd4u);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    COW_AT(10215b85)
        wr32(COW_IMG(0x1066453cu), eax);
    }
    COW_AT(10215b8d)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    t27 = rd32(COW_IMG(0x10664534u) + rd32(self + 0x154u) * 4u);
    wr32(sp0 - 0x18u, t27);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, COW_IMG(0x10215c00u));
    g->eax = rd32(self + 0x154u);
    g->edx = edx;
    t28 = rd32(self + 0x154u);
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10215c00u), self, t27, 0u, 0u, 1u, 0u);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    COW_AT(10215bb4)
    wr8(self + 0x114u, (uint8_t)(rd8(self + 0x114u) + 1u));
    esi = rd32(sp0 - 4u);
    goto L_10215c10;
L_10215bca: ;
    COW_AT(10215bca)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 8u, 0u);
    t31 = g->edx;
    edx = t31;
    COW_AT(10215bd3)
    esi = rd32(sp0 - 4u);
    goto L_10215c10;
L_10215bde: ;
    COW_AT(10215bde)
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 8u, 1u);
    t32 = g->edx;
    edx = t32;
    COW_AT(10215be7)
L_10215bea: ;
    COW_AT(10215bea)
    esi = rd32(sp0 - 4u);
    goto L_10215c10;
L_10215dff: ;
    COW_AT(10215dff)
    if (eax > 3u)
    {
        ebx = 0x80404040u;
        goto L_10215e47;
    }
    COW_AT(10215e09)
    t67 = rd32(COW_IMG(0x10215f80u) + eax * 4u);
    switch (t67 - RD)
    {
    case 0x10215e10u: goto L_10215e10;
    case 0x10215e26u: goto L_10215e26;
    case 0x10215e38u: goto L_10215e38;
    case 0x10215e42u: goto L_10215e42;
    default: rt_fatal(g, COW_IMG(0x10215e09u), "switch");
    }
    return;
L_10215e10: ;
    COW_AT(10215e10)
    if (rd8(self + 0x1c3u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x1c3u);
        ebx = 0x80404040u;
        goto L_10215e47;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x1c3u);
    COW_AT(10215e1a)
    if (rd8(self + 0x1c4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x1c4u);
        ebx = 0x80404040u;
        goto L_10215e47;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x1c4u);
    COW_AT(10215e24)
L_10215e42: ;
    COW_AT(10215e42)
    ebx = 0x80808080u;
L_10215e47: ;
    COW_AT(10215e47)
    wr32(sp0 - 0x2cu, ebx);
    t68 = rd16(edx + 6u);
    t69 = rd16(edx + 0xau);
    t70 = rd16(self + 0x174u);
    t71 = rd16(self + 0x170u);
    wr16(esi + 4u, (uint16_t)t71);
    wr16(esi + 6u, (uint16_t)(t68 + (uint16_t)(t69 + t70)));
    wr16(esi, (uint16_t)((uint16_t)t71 + rd16(self + 0x18au)));
    t72 = rd16(self + 0x18cu);
    wr16(esi + 2u, (uint16_t)(t72 + (uint16_t)(t68 + (uint16_t)(t69 + t70))));
    t73 = rd16(self + 0x192u);
    t74 = rd16(self + 0x172u);
    t75 = rd16(self + 0x170u);
    wr16(esi + 0xau, 0u);
    wr16(esi + 8u, (uint16_t)((uint16_t)(t73 - t74) - t75));
    wr32(sp0 - 0x30u, self + 0x17cu);
    g->eax = self + 0x17cu;
    g->esp = sp0 - 0x28u;
    t76 = cow_fastcall(g, COW_IMG(0x10212050u), ecx, ((edx | t71) & 0xffff0000u) | (uint16_t)(t72 + (uint16_t)(t68 + (uint16_t)(t69 + t70))), 2, self + 0x17cu, rd32(sp0 - 0x2cu));
    eax = t76;
    COW_AT(10215eac)
    if ((uint8_t)eax != 1u)
    {
        ebx = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_10215ecc;
    }
    ebx = rd32(sp0 - 0x10u);
    goto L_10215eb4;
L_10215e26: ;
    COW_AT(10215e26)
    if (rd8(self + 0x1c3u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x1c3u);
        ebx = 0x80404040u;
        goto L_10215e47;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x1c3u);
    COW_AT(10215e30)
    eax = (eax & 0xffffff00u) | rd8(self + 0x1c4u);
L_10215e3e: ;
    COW_AT(10215e3e)
    if ((uint8_t)eax == 0u)
    {
        ebx = 0x80404040u;
        goto L_10215e47;
    }
    goto L_10215e42;
L_10215e38: ;
    COW_AT(10215e38)
    eax = (eax & 0xffffff00u) | rd8(self + 0x1c5u);
    goto L_10215e3e;
L_10215f4d: ;
    COW_AT(10215f4d)
    if (ecx == 0u) goto L_10215f7a;
    COW_AT(10215f51)
    wr32(sp0 - 0x24u, 0x17u);
    g->edi = 0u;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10216970u), ecx, 1, 0x17u);
    COW_AT(10215f58)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
L_10215f5e: ;
    COW_AT(10215f5e)
    if (ecx == 0u) goto L_10215f7a;
    COW_AT(10215f62)
    wr32(sp0 - 0x24u, 0x16u);
    g->edi = 0u;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10216970u), ecx, 1, 0x16u);
    COW_AT(10215f69)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
L_10215f6f: ;
    COW_AT(10215f6f)
    if (ecx != 0u)
    {
    COW_AT(10215f73)
        wr32(sp0 - 0x24u, 0x15u);
        g->edi = 0u;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x10216970u), ecx, 1, 0x15u);
    }
L_10215f7a: ;
    COW_AT(10215f7a)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10215a50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10215a5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10215a6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10215a7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10215a99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215aa0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215aaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215ac4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215acdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215ad1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215ad6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215adfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10215ae2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215ae7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215af4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215b03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215b11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215b28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215b2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215b36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215b43u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215b4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215b63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10215b74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10215b85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10215b8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215bb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215bcau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215bd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10215bdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215be7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10215beau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10215c10u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_c;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10215c28u:
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
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x18u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10215c42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10215c59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10215ce8u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215d4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215d63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215d71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215d79u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215d7fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215d83u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215d91u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215dfau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215dffu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215e09u:
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x10215e10u:
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x10215e1au:
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x10215e24u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215e26u:
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x10215e30u:
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x10215e38u:
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x10215e3eu:
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x10215e42u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215e47u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10215eacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215eb4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215ec8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10215eccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215ed2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215ef1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215ef8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215effu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f1au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f21u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f28u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f38u:
    {
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
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f3bu:
    {
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
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f3eu:
    {
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
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f42u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10215f47u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10215f4du:
    {
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
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f51u:
    {
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
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f58u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10215f5eu:
    {
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
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f62u:
    {
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
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f69u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10215f6fu:
    {
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
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f73u:
    {
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
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215f7au:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10215a50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10215a50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
