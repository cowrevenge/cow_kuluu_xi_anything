/* f_0x1001bc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001bc80(Guest* g)
{
    double d2;
    double d31;
    double d35;
    double d39;
    double d4;
    double d43;
    double d47;
    double d51;
    double d56;
    double d65;
    double d66;
    double d67;
    double d68;
    double d7;
    double d71;
    double d72;
    double d73;
    double d75;
    double d76;
    double d77;
    double d79;
    double d8;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d87;
    double d88;
    double d9;
    double d91;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_64;
    double loc_74_f;
    double loc_78_f;
    uint32_t loc_7c;
    double loc_90_f;
    uint32_t loc_94;
    double loc_94_f;
    double loc_98_f;
    uint32_t loc_9c;
    double loc_9c_f;
    uint32_t loc_a0;
    double loc_a0_f;
    uint32_t loc_a4;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t69;
    uint32_t t70;
    uint32_t t74;
    uint32_t t78;
    uint32_t t86;
    uint32_t t89;
    uint32_t t90;
    uint32_t t92;
    uint32_t t93;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 248u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001bc96u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1001bc96;
    case 0x1001bc9au: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1001bc9a;
    case 0x1001bc9cu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_1001bc9c;
    case 0x1001bca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001bca1;
    case 0x1001bcd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001bcd2;
    case 0x1001bd13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001bd13;
    case 0x1001bd32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001bd32;
    case 0x1001bd3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); goto E_1001bd3c;
    case 0x1001bd43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); goto E_1001bd43;
    case 0x1001bd4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bd4b;
    case 0x1001bd5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bd5c;
    case 0x1001bd66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bd66;
    case 0x1001bd6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bd6e;
    case 0x1001bd81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bd81;
    case 0x1001bd94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bd94;
    case 0x1001bd9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bd9d;
    case 0x1001bdabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bdab;
    case 0x1001bdb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bdb9;
    case 0x1001bdc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bdc7;
    case 0x1001bdd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bdd8;
    case 0x1001bdffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); goto E_1001bdff;
    case 0x1001be03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); goto E_1001be03;
    case 0x1001be26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); goto E_1001be26;
    case 0x1001be49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); loc_64 = rd32(sp0 - 0x64u); goto E_1001be49;
    case 0x1001be68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001be68;
    case 0x1001be87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001be87;
    case 0x1001bea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001bea6;
    case 0x1001bec8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001bec8;
    case 0x1001beeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001beea;
    case 0x1001bf09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001bf09;
    case 0x1001bf29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1001bf29;
    case 0x1001bf2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1001bf2e;
    case 0x1001bf43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bf43;
    case 0x1001bf57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bf57;
    case 0x1001bf65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); goto E_1001bf65;
    case 0x1001bf69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); goto E_1001bf69;
    case 0x1001bf70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); goto E_1001bf70;
    case 0x1001bf82u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); goto E_1001bf82;
    case 0x1001bf87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bf87;
    case 0x1001bf8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bf8f;
    case 0x1001bf91u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); goto E_1001bf91;
    case 0x1001bf96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bf96;
    case 0x1001bf98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001bf98;
    case 0x1001bf9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); goto E_1001bf9a;
    case 0x1001bfb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bfb2;
    case 0x1001bfb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bfb9;
    case 0x1001bfc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bfc7;
    case 0x1001bfd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bfd0;
    case 0x1001bfd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001bfd3;
    case 0x1001c01cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001c01c;
    case 0x1001c076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_7c = rd32(sp0 - 0x7cu); goto E_1001c076;
    case 0x1001c079u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_7c = rd32(sp0 - 0x7cu); goto E_1001c079;
    case 0x1001c090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_7c = rd32(sp0 - 0x7cu); goto E_1001c090;
    case 0x1001c095u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_98_f = rdf32(sp0 - 0x98u); loc_90_f = rdf32(sp0 - 0x90u); loc_7c = rd32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); goto E_1001c095;
    case 0x1001c0d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001c0d1;
    case 0x1001c129u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1001c129;
    case 0x1001c13au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1001c13a;
    case 0x1001c155u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1001c155;
    case 0x1001c172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1001c172;
    case 0x1001c176u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_90_f = rdf32(sp0 - 0x90u); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1001c176;
    case 0x1001c1a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_7c = rd32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); goto E_1001c1a0;
    case 0x1001c1abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_7c = rd32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); goto E_1001c1ab;
    case 0x1001c1b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_7c = rd32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); goto E_1001c1b0;
    case 0x1001c1bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_7c = rd32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); goto E_1001c1bf;
    case 0x1001c1c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_98_f = rdf32(sp0 - 0x98u); loc_90_f = rdf32(sp0 - 0x90u); loc_7c = rd32(sp0 - 0x7cu); loc_78_f = rdf32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); goto E_1001c1c3;
    case 0x1001c1dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001c1dc;
    case 0x1001c1e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001c1e1;
    case 0x1001c1e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001c1e8;
    case 0x1001c1f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001c1f8;
    case 0x1001c1feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001c1fe;
    case 0x1001c202u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001c202;
    case 0x1001c20bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001c20b;
    case 0x1001c20eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001c20e;
    case 0x1001c221u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001c221;
    case 0x1001c250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001c250;
    default: break;
    }
#endif

    COW_AT(1001bc80)
    wr32(sp0 - 0xa8u, in_ebx);
    wr32(sp0 - 0xacu, in_ebp);
    wr32(sp0 - 0xb0u, in_esi);
    wr32(sp0 - 0xb4u, in_edi);
    if (rd32(self + 0x14c0u) == 0u)
    {
        eax = rd32(self + 0x14c0u);
    COW_AT(1001bc9a)
        ebp = 0u;
    }
    else
    {
        eax = rd32(self + 0x14c0u);
    COW_AT(1001bc96)
        ebp = rd32(eax);
    }
    COW_AT(1001bc9c)
    g->edx = in_edx;
    g->esp = sp0 - 0xb4u;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t1 = g->edx;
    d2 = cow_take_float(g);
    edx = t1;
    x0 = d2;
    COW_AT(1001bca1)
    t3 = rd32(self + 0x14a0u);
    d4 = fr(g, fr(g, x0 * (double)rdf32(self + 0x14bcu)) + (double)rdf32(self + 0x14b8u));
    wr32(sp0 - 0xa4u, t3);
    wr32(sp0 - 0x90u, ebp + 0x30u);
    wrf32(self + 0x14b8u, (float)d4);
    if ((int32_t)t3 >= (int32_t)rd8(ebp + 0x30u))
    {
        x0 = d4;
        goto L_1001bf98;
    }
    edi = ebp + 0x30u;
    x0 = d4;
    COW_AT(1001bcd2)
    t5 = rd8(ebp + 0x31u);
    wr32(sp0 - 0xa0u, t5);
    t6 = rd8(ebp + 0x40u);
    wr32(sp0 - 0xa0u, t6);
    d7 = fr(g, (double)rdf32(COW_IMG(0x10329fd8u)) / (double)(int32_t)t5);
    wrf32(sp0 - 0x9cu, (float)(double)(float)d7);
    wrf32(sp0 - 0x98u, (float)(double)(float)(double)(int32_t)t6);
    d8 = fr(g, fr(g, (double)(int32_t)rd32(sp0 - 0xa4u) * (double)(float)d7) + (double)(float)(double)(int32_t)t6);
    if (!(d8 <= x0))
    {
        edx = t5;
        goto L_1001bf98;
    }
    edx = t5;
    ebx = 0u;
    loc_9c_f = (double)(float)d7;
    loc_98_f = (double)(float)(double)(int32_t)t6;
    loc_a4 = rd32(sp0 - 0xa4u);
L_1001bd13: ;
    COW_AT(1001bd13)
    wr32(sp0 - 0xa4u, loc_a4 + 1u);
    d9 = fr(g, fr(g, (double)(int32_t)(loc_a4 + 1u) * loc_9c_f) + loc_98_f);
    if (d9 <= x0)
    {
        ebx = ebx + 1u;
        loc_a4 = loc_a4 + 1u;
        goto L_1001bd13;
    }
    eax = (loc_a4 + 1u & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, x0, 1u);
    ebx = ebx + 1u;
    COW_AT(1001bd32)
    if (ebx == 0u) goto L_1001bf9a;
    COW_AT(1001bd3c)
    if (ebx == 1u) goto L_1001bf9a;
    ebx = ebx - 1u;
    COW_AT(1001bd43)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t10 = cow_thiscall(g, COW_IMG(0x10081550u), self + 0x34u, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(1001bd4b)
    wr32(sp0 - 0xa0u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t12 = cow_thiscall(g, COW_IMG(0x1002b5a0u), eax + 0x674u, 0);
    t13 = g->edx;
    edx = t13;
    ebp = eax;
    eax = t12;
    COW_AT(1001bd5c)
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_1001c250;
    }
    eax = rd32(eax);
    COW_AT(1001bd66)
    g->eax = eax;
    g->esp = sp0 - 0xb4u;
    t14 = cow_thiscall(g, COW_IMG(0x1001b1a0u), eax + 0x24u, 0);
    eax = t14;
L_1001bd6e: ;
    COW_AT(1001bd6e)
    wr32(sp0 - 0xb8u, sp0 - 0x60u);
    t15 = rd32(self + 0x14a0u);
    wr32(sp0 - 0xbcu, t15);
    g->edx = t15;
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, COW_IMG(0x1001d000u), edi, 2, t15, sp0 - 0x60u);
    t16 = g->edx;
    edx = t16;
    COW_AT(1001bd81)
    wr32(sp0 - 0xb8u, sp0 - 0x50u);
    t17 = rd32(self + 0x14a0u);
    wr32(sp0 - 0xbcu, t17);
    g->eax = sp0 - 0x50u;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t18 = cow_thiscall(g, COW_IMG(0x1001d050u), edi, 2, t17, sp0 - 0x50u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(1001bd94)
    g->eax = eax;
    g->esp = sp0 - 0xb4u;
    t20 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    eax = t20;
    COW_AT(1001bd9d)
    wr32(sp0 - 0xb8u, sp0 - 0x40u);
    wr32(sp0 - 0xbcu, 0u);
    g->ebx = ebx;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, COW_IMG(0x100d4a20u), ebp, 2, 0u, sp0 - 0x40u);
    t21 = g->edx;
    edx = t21;
    COW_AT(1001bdab)
    wr32(sp0 - 0xb8u, sp0 - 0x60u);
    g->eax = sp0 - 0x60u;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t22 = cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x60u);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(1001bdb9)
    wr32(sp0 - 0xb8u, sp0 - 0x50u);
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x50u);
    COW_AT(1001bdc7)
    wr32(sp0 - 0xb8u, sp0 - 0x50u);
    wr32(sp0 - 0xbcu, sp0 - 0x60u);
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, COW_IMG(0x1001baf0u), self, 2, sp0 - 0x60u, sp0 - 0x50u);
    COW_AT(1001bdd8)
    t24 = rd32(self + 0x14a0u) + 1u;
    t25 = rd32(self + 0x14acu);
    t26 = rd32(self + 0x14b4u);
    wr32(self + 0x14a0u, t24);
    wr32(sp0 - 0x94u, ebx - 1u);
    if ((int32_t)t26 < 3)
    {
        eax = t25;
        edx = t24;
        ebx = ebx - 1u;
    COW_AT(1001bf65)
        if (eax != 0u)
        {
    COW_AT(1001bf69)
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            cow_thiscall(g, COW_IMG(0x1001c260u), self, 0);
            t59 = g->edx;
            edx = t59;
        }
    }
    else
    {
        eax = t25;
        loc_94 = ebx - 1u;
    COW_AT(1001bdff)
        if (eax == 0u)
        {
    COW_AT(1001be03)
            wr32(sp0 - 0xb8u, self + 0x14dcu);
            wr32(sp0 - 0xbcu, self + 0x14ccu);
            wr32(sp0 - 0xc0u, self + 0x1470u);
            wr32(sp0 - 0xc4u, self + 0x1440u);
            g->esp = sp0 - 0xb4u;
            cow_thiscall(g, COW_IMG(0x1001b990u), self, 4, self + 0x1440u, self + 0x1470u, self + 0x14ccu, self + 0x14dcu);
            loc_94 = rd32(sp0 - 0x94u);
        }
    COW_AT(1001be26)
        wr32(sp0 - 0xa4u, 0x3e800000u);
        wr32(sp0 - 0x64u, 0x3f800000u);
        wr32(sp0 - 0x80u, 0x3f800000u);
        ebx = 4u;
        loc_64 = 0x3f800000u;
L_1001be49: ;
    COW_AT(1001be49)
        t27 = rd32(self + 0x1460u);
        wr32(sp0 - 0xb8u, t27);
        t28 = rd32(self + 0x1450u);
        wr32(sp0 - 0xbcu, t28);
        t29 = rd32(self + 0x1440u);
        wr32(sp0 - 0xc0u, t29);
        t30 = rd32(sp0 - 0xa4u);
        wr32(sp0 - 0xc4u, t30);
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, t30, t29, t28, t27);
        d31 = cow_take_float(g);
        edi = t30;
        x0 = d31;
    COW_AT(1001be68)
        t32 = rd32(self + 0x1464u);
        wr32(sp0 - 0xc8u, t32);
        wrf32(sp0 - 0x70u, (float)(double)(float)x0);
        t33 = rd32(self + 0x1454u);
        wr32(sp0 - 0xccu, t33);
        t34 = rd32(self + 0x1444u);
        wr32(sp0 - 0xd0u, t34);
        wr32(sp0 - 0xd4u, edi);
        g->esp = sp0 - 0xc4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, edi, t34, t33, t32);
        d35 = cow_take_float(g);
        x0 = d35;
    COW_AT(1001be87)
        t36 = rd32(self + 0x1468u);
        wr32(sp0 - 0xd8u, t36);
        wrf32(sp0 - 0x6cu, (float)(double)(float)x0);
        t37 = rd32(self + 0x1458u);
        wr32(sp0 - 0xdcu, t37);
        t38 = rd32(self + 0x1448u);
        wr32(sp0 - 0xe0u, t38);
        wr32(sp0 - 0xe4u, edi);
        g->esp = sp0 - 0xd4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, edi, t38, t37, t36);
        d39 = cow_take_float(g);
        x0 = d39;
    COW_AT(1001bea6)
        t40 = rd32(self + 0x1490u);
        wr32(sp0 - 0xe8u, t40);
        wrf32(sp0 - 0x68u, (float)(double)(float)x0);
        t41 = rd32(self + 0x1480u);
        wr32(sp0 - 0xecu, t41);
        t42 = rd32(self + 0x1470u);
        wr32(sp0 - 0xf0u, t42);
        wr32(sp0 - 0xf4u, edi);
        g->esp = sp0 - 0xe4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, edi, t42, t41, t40);
        d43 = cow_take_float(g);
        x0 = d43;
    COW_AT(1001bec8)
        wrf32(sp0 - 0x8cu, (float)(double)(float)x0);
        t44 = rd32(self + 0x1494u);
        wr32(sp0 - 0xb8u, t44);
        t45 = rd32(self + 0x1484u);
        wr32(sp0 - 0xbcu, t45);
        t46 = rd32(self + 0x1474u);
        wr32(sp0 - 0xc0u, t46);
        wr32(sp0 - 0xc4u, edi);
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, edi, t46, t45, t44);
        d47 = cow_take_float(g);
        x0 = d47;
    COW_AT(1001beea)
        t48 = rd32(self + 0x1498u);
        wr32(sp0 - 0xc8u, t48);
        wrf32(sp0 - 0x88u, (float)(double)(float)x0);
        t49 = rd32(self + 0x1488u);
        wr32(sp0 - 0xccu, t49);
        t50 = rd32(self + 0x1478u);
        wr32(sp0 - 0xd0u, t50);
        wr32(sp0 - 0xd4u, edi);
        g->esp = sp0 - 0xc4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, edi, t50, t49, t48);
        d51 = cow_take_float(g);
        x0 = d51;
    COW_AT(1001bf09)
        wrf32(sp0 - 0x84u, (float)(double)(float)x0);
        wr32(sp0 - 0xb8u, self + 0x14dcu);
        wr32(sp0 - 0xbcu, self + 0x14ccu);
        wr32(sp0 - 0xc0u, sp0 - 0x8cu);
        wr32(sp0 - 0xc4u, sp0 - 0x70u);
        g->eax = sp0 - 0x70u;
        g->edx = sp0 - 0x8cu;
        g->esp = sp0 - 0xb4u;
        t52 = cow_thiscall(g, COW_IMG(0x1001b990u), self, 4, sp0 - 0x70u, sp0 - 0x8cu, self + 0x14ccu, self + 0x14dcu);
        t53 = g->ecx;
        t54 = g->edx;
        eax = t52;
        ecx = t53;
        edx = t54;
    COW_AT(1001bf29)
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x1001c260u), ecx, 0);
        t55 = g->edx;
        edx = t55;
    COW_AT(1001bf2e)
        d56 = fr(g, (double)rdf32(sp0 - 0xa4u) + rdf64(COW_IMG(0x1032a338u)));
        wrf32(sp0 - 0xa4u, (float)(double)(float)d56);
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            loc_94 = rd32(sp0 - 0x94u);
            loc_64 = rd32(sp0 - 0x64u);
            goto L_1001be49;
        }
    COW_AT(1001bf43)
        t57 = rd32(self + 0x14b4u) - 1u;
        wr32(self + 0x14b4u, t57);
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x1001bbb0u), self, 0);
        t58 = g->edx;
        edx = t58;
    COW_AT(1001bf57)
        ebx = rd32(sp0 - 0x94u);
        ebp = rd32(sp0 - 0xa0u);
        edi = rd32(sp0 - 0x90u);
    }
    COW_AT(1001bf70)
    if ((int32_t)rd32(self + 0x14a0u) >= (int32_t)rd8(edi))
    {
        eax = rd32(self + 0x14a0u);
        goto L_1001bf91;
    }
    eax = rd32(self + 0x14a0u);
    COW_AT(1001bf82)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t60 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t61 = g->edx;
    eax = t60;
    edx = t61;
    COW_AT(1001bf87)
    if (ebx != 0u) goto L_1001bd6e;
    COW_AT(1001bf8f)
L_1001bfb9: ;
    COW_AT(1001bfb9)
    if (rd32(self + 0x14acu) != 0u)
    {
    COW_AT(1001bfc7)
        if ((int32_t)(rd32(self + 0x14a8u) - 1u) >= 0)
        {
            ebx = rd32(self + 0x14a8u) - 1u;
        }
        else
        {
            ebx = rd32(self + 0x14a8u) - 1u;
    COW_AT(1001bfd0)
            ebx = ebx + 0x50u;
        }
    COW_AT(1001bfd3)
        d65 = fr(g, (double)rdf32(ebx * 0x10u + self + 0x40u) - (double)rdf32(ebx * 0x10u + self + 0x540u));
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        wrf32(sp0 - 0x8cu, (float)(double)(float)d65);
        d66 = fr(g, (double)rdf32(ebx * 0x10u + self + 0x44u) - (double)rdf32(ebx * 0x10u + self + 0x544u));
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wrf32(sp0 - 0x88u, (float)(double)(float)d66);
        d67 = fr(g, (double)rdf32(ebx * 0x10u + self + 0x48u) - (double)rdf32(ebx * 0x10u + self + 0x548u));
        wrf32(sp0 - 0x84u, (float)(double)(float)d67);
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x8cu, sp0 - 0x8cu);
        d68 = cow_take_float(g);
        edi = ebx * 0x10u + self;
        x0 = d68;
    COW_AT(1001c01c)
        t69 = rd32(edi + 0xa4cu);
        wr32(sp0 - 0x9cu, t69);
        t70 = rd32(edi + 0xf4cu);
        wr32(sp0 - 0x7cu, t70);
        d71 = (double)(float)fr(g, sqrt(x0));
        wrf32(sp0 - 0x98u, (float)d71);
        d72 = fr(g, fr(g, (double)rdf32(ebx * 0x10u + self + 0xa40u) + (double)rdf32(edi + 0xa48u)) + (double)rdf32(edi + 0xa44u));
        wrf32(sp0 - 0x94u, (float)(double)(float)d72);
        d73 = fr(g, fr(g, (double)rdf32(ebx * 0x10u + self + 0xf40u) + (double)rdf32(edi + 0xf48u)) + (double)rdf32(edi + 0xf44u));
        wrf32(sp0 - 0xa0u, (float)(double)(float)d73);
        if ((int32_t)(ebx - 1u) >= 0)
        {
            eax = ebx * 0x10u + 0xa40u;
            ebx = ebx - 1u;
            loc_9c = t69;
            loc_7c = t70;
            loc_98_f = d71;
            loc_94_f = (double)(float)d72;
            loc_a0_f = (double)(float)d73;
        }
        else
        {
            eax = ebx * 0x10u + 0xa40u;
            ebx = ebx - 1u;
            loc_9c = t69;
            loc_7c = t70;
            loc_98_f = d71;
            loc_94_f = (double)(float)d72;
            loc_a0_f = (double)(float)d73;
    COW_AT(1001c076)
            ebx = ebx + 0x50u;
        }
    COW_AT(1001c079)
        t74 = rd32(self + 0x14acu);
        wr32(sp0 - 0xa4u, t74);
        if ((int32_t)(t74 - 1u) <= 0)
        {
            ecx = t74;
            edx = t74 - 1u;
        }
        else
        {
            edx = t74 - 1u;
            loc_a4 = t74;
    COW_AT(1001c090)
            ebp = 0u;
            edi = ebx << 4u;
L_1001c095: ;
    COW_AT(1001c095)
            d75 = fr(g, (double)rdf32(edi + self + 0x40u) - (double)rdf32(edi + self + 0x540u));
            wr32(sp0 - 0xb8u, sp0 - 0x8cu);
            wr32(sp0 - 0xbcu, sp0 - 0x8cu);
            wrf32(sp0 - 0x8cu, (float)(double)(float)d75);
            d76 = fr(g, (double)rdf32(edi + self + 0x44u) - (double)rdf32(edi + self + 0x544u));
            wrf32(sp0 - 0x88u, (float)(double)(float)d76);
            d77 = fr(g, (double)rdf32(edi + self + 0x48u) - (double)rdf32(edi + self + 0x548u));
            wrf32(sp0 - 0x84u, (float)(double)(float)d77);
            g->eax = sp0 - 0x8cu;
            g->esp = sp0 - 0xb4u;
            t78 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x8cu, sp0 - 0x8cu);
            d79 = cow_take_float(g);
            eax = t78;
            x0 = d79;
    COW_AT(1001c0d1)
            d80 = (double)(float)(double)rdf32(edi + self + 0xf4cu);
            wrf32(sp0 - 0x78u, (float)d80);
            d81 = fr(g, fr(g, (double)rdf32(edi + self + 0xa40u) + (double)rdf32(edi + self + 0xa48u)) + (double)rdf32(edi + self + 0xa44u));
            wrf32(sp0 - 0x74u, (float)(double)(float)d81);
            d82 = fr(g, fr(g, (double)rdf32(edi + self + 0xf40u) + (double)rdf32(edi + self + 0xf48u)) + (double)rdf32(edi + self + 0xf44u));
            wrf32(sp0 - 0x90u, (float)(double)(float)d82);
            if (!(fr(g, sqrt(x0)) < (double)rdf32(COW_IMG(0x1032a334u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a334u)), 2u);
                loc_78_f = d80;
                loc_74_f = (double)(float)d81;
                loc_90_f = (double)(float)d82;
                x1 = (double)rdf32(edi + self + 0xa4cu);
                x0 = fr(g, sqrt(x0));
                goto L_1001c13a;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a334u)), 2u);
            loc_78_f = d80;
            loc_74_f = (double)(float)d81;
            loc_90_f = (double)(float)d82;
            x1 = (double)rdf32(edi + self + 0xa4cu);
            x0 = fr(g, sqrt(x0));
    COW_AT(1001c129)
            d83 = (double)rdf32(sp0 - 0x98u);
            if (d83 < (double)rdf32(COW_IMG(0x1032a334u))) goto L_1001c172;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x1032a334u)), 2u);
L_1001c13a: ;
    COW_AT(1001c13a)
            d84 = fr(g, fr(g, fr(g, loc_78_f + x1) + (double)rdf32(sp0 - 0x7cu)) + (double)rdf32(sp0 - 0x9cu));
            if (d84 <= (double)rdf32(COW_IMG(0x103295d8u))) goto L_1001c172;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d84, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1001c155)
            d85 = fr(g, fr(g, fr(g, loc_90_f + loc_74_f) + (double)rdf32(sp0 - 0xa0u)) + (double)rdf32(sp0 - 0x94u));
            if (!(d85 <= (double)rdf32(COW_IMG(0x103295d8u))))
            {
                loc_a4 = rd32(sp0 - 0xa4u);
                goto L_1001c176;
            }
L_1001c172: ;
    COW_AT(1001c172)
            t86 = rd32(sp0 - 0xa4u);
            wr32(sp0 - 0xa4u, t86 - 1u);
            loc_a4 = t86 - 1u;
L_1001c176: ;
    COW_AT(1001c176)
            wr32(sp0 - 0x94u, cow_f2bits(loc_74_f));
            wrf32(sp0 - 0x98u, (float)(double)(float)x0);
            wrf32(sp0 - 0x9cu, (float)(double)(float)x1);
            wr32(sp0 - 0x7cu, cow_f2bits(loc_78_f));
            wr32(sp0 - 0xa0u, cow_f2bits(loc_90_f));
            if ((int32_t)(ebx - 1u) >= 0)
            {
                eax = ebx - 1u;
                ebp = ebp + 1u;
                loc_94 = cow_f2bits(loc_74_f);
                loc_98_f = (double)(float)x0;
                loc_9c_f = (double)(float)x1;
                loc_7c = cow_f2bits(loc_78_f);
                loc_a0 = cow_f2bits(loc_90_f);
    COW_AT(1001c1ab)
                ebx = eax;
                edi = edi - 0x10u;
            }
            else
            {
                eax = ebx - 1u;
                ebp = ebp + 1u;
                loc_94 = cow_f2bits(loc_74_f);
                loc_98_f = (double)(float)x0;
                loc_9c_f = (double)(float)x1;
                loc_7c = cow_f2bits(loc_78_f);
                loc_a0 = cow_f2bits(loc_90_f);
    COW_AT(1001c1a0)
                ebx = eax + 0x50u;
                edi = edi + 0x4f0u;
            }
    COW_AT(1001c1b0)
            if ((int32_t)ebp < (int32_t)(rd32(self + 0x14acu) - 1u))
            {
                edx = rd32(self + 0x14acu) - 1u;
                goto L_1001c095;
            }
            edx = rd32(self + 0x14acu) - 1u;
    COW_AT(1001c1bf)
            ecx = loc_a4;
        }
    COW_AT(1001c1c3)
        d87 = (double)rdf32(self + 0x14c4u);
        d88 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(self + 0x14acu, ecx);
        if (d87 <= d88)
        {
    COW_AT(1001c1dc)
            if ((int32_t)ecx <= 1)
            {
    COW_AT(1001c1e1)
                wr8(self + 0x14a4u, 1u);
            }
        }
    }
L_1001c1e8: ;
    COW_AT(1001c1e8)
    if ((int32_t)rd32(self + 0x14acu) <= (int32_t)rd32(self + 0x14b0u))
    {
        eax = rd32(self + 0x14acu);
        ecx = rd32(self + 0x14b0u);
    }
    else
    {
        eax = rd32(self + 0x14acu);
        ecx = rd32(self + 0x14b0u);
    COW_AT(1001c1f8)
        wr32(self + 0x14b0u, eax);
    }
    COW_AT(1001c1fe)
    if (eax != 0u)
    {
    COW_AT(1001c202)
        if ((int32_t)(rd32(self + 0x14a8u) - 1u) >= 0)
        {
            eax = rd32(self + 0x14a8u) - 1u;
        }
        else
        {
            eax = rd32(self + 0x14a8u) - 1u;
    COW_AT(1001c20b)
            eax = eax + 0x50u;
        }
    COW_AT(1001c20e)
        t89 = eax * 0x10u + self + 0x40u;
        wr32(sp0 - 0xb8u, t89);
        wr32(sp0 - 0xbcu, sp0 - 0x70u);
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0x70u, t89);
        t90 = g->edx;
        edx = t90;
    COW_AT(1001c221)
        d91 = fr(g, (double)rdf32(sp0 - 0x68u) * (double)rdf32(sp0 - 0x64u));
        wr32(self + 0x153cu, self);
        wr32(self + 0x1538u, COW_IMG(0x1001c930u));
        wr32(sp0 - 0xb8u, self + 0x1530u);
        wrf32(self + 0x1530u, (float)d91);
        g->eax = self + 0x1530u;
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        t92 = cow_thiscall(g, COW_IMG(0x100553c0u), rd32(COW_IMG(0x1047bc94u)), 1, rd32(sp0 - 0xb8u));
        t93 = g->edx;
        eax = t92;
        edx = t93;
    }
L_1001c250: ;
    COW_AT(1001c250)
    g->ebx = rd32(sp0 - 0xa8u);
    g->esi = rd32(sp0 - 0xb0u);
    g->edi = rd32(sp0 - 0xb4u);
    g->ebp = rd32(sp0 - 0xacu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1001bf91: ;
    COW_AT(1001bf91)
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t62 = g->edx;
    edx = t62;
    COW_AT(1001bf96)
    goto L_1001bfb9;
L_1001bf98: ;
    COW_AT(1001bf98)
L_1001bf9a: ;
    COW_AT(1001bf9a)
    t63 = rd32(self + 0x14acu);
    wr32(self + 0x14c4u, 0u);
    if (t63 == 0u) goto L_1001c1e8;
    eax = t63;
    COW_AT(1001bfb2)
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, COW_IMG(0x1001c260u), self, 0);
    t64 = g->edx;
    edx = t64;
    goto L_1001bfb9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001bc80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001bc96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1001bc9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1001bc9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1001bca1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bcd2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001bd13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bd32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bd3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bd43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bd4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bd5cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bd66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bd6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bd81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xb8u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x1001bd94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xb8u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001bd9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xb8u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001bdabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xb8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1001bdb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xb8u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x1001bdc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xb8u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001bdd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x60u);
        wr32(sp0 - 0xb8u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001bdffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001be03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001be26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001be49u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x14dcu;
        (void)sp0;
        return 1;
    }
    case 0x1001be68u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0x14dcu;
        (void)sp0;
        return 1;
    }
    case 0x1001be87u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd4u;
        g->ebp = self + 0x14dcu;
        (void)sp0;
        return 1;
    }
    case 0x1001bea6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe4u;
        g->ebp = self + 0x14dcu;
        (void)sp0;
        return 1;
    }
    case 0x1001bec8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf4u;
        g->ebp = self + 0x14dcu;
        (void)sp0;
        return 1;
    }
    case 0x1001beeau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0x14dcu;
        (void)sp0;
        return 1;
    }
    case 0x1001bf09u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd4u;
        g->ebp = self + 0x14dcu;
        (void)sp0;
        return 1;
    }
    case 0x1001bf29u:
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x14dcu;
        wr32(sp0 - 0xc4u, sp0 - 0x70u);
        wr32(sp0 - 0xc0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001bf2eu:
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x14dcu;
        wr32(sp0 - 0xc4u, sp0 - 0x70u);
        wr32(sp0 - 0xc0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001bf43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc4u, sp0 - 0x70u);
        wr32(sp0 - 0xc0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001bf57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf70u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_94;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xb4u;
        g->ecx = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf8fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_94;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xb4u;
        g->ecx = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bf9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bfb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bfb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bfc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bfd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001bfd3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001c01cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xbcu;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c076u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_7c;
        double loc_94_f;
        double loc_98_f;
        uint32_t loc_9c;
        double loc_a0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c079u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_7c;
        double loc_94_f;
        double loc_98_f;
        uint32_t loc_9c;
        double loc_a0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c090u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_7c;
        double loc_94_f;
        double loc_98_f;
        uint32_t loc_9c;
        double loc_a0_f;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xb4u;
        g->ebp = 0u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c095u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        uint32_t loc_7c;
        double loc_90_f;
        double loc_98_f;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c0d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xbcu;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c129u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        double loc_90_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c13au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        double loc_90_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c155u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        double loc_90_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c172u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        double loc_90_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c176u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        double loc_90_f;
        uint32_t loc_a4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c1a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        uint32_t loc_7c;
        double loc_90_f;
        uint32_t loc_94;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c1abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        uint32_t loc_7c;
        double loc_90_f;
        uint32_t loc_94;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c1b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        uint32_t loc_7c;
        double loc_90_f;
        uint32_t loc_94;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c1bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        uint32_t loc_7c;
        double loc_90_f;
        uint32_t loc_94;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c1c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double loc_78_f;
        uint32_t loc_7c;
        double loc_90_f;
        double loc_98_f;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x1001c1dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001c1e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001c1e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001c1f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001c1feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001c202u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001c20bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001c20eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1001c221u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        wr32(sp0 - 0xbcu, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x1001c250u:
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
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001bc80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1001bc80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
