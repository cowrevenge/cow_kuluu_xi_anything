/* f_0x102bf6a6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102bf6a6(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    unsigned of;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bf6bbu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102bf6bb;
    case 0x102bf6d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf6d7;
    case 0x102bf6e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf6e1;
    case 0x102bf6e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf6e4;
    case 0x102bf6eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf6ea;
    case 0x102bf6f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf6f3;
    case 0x102bf71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf71b;
    case 0x102bf720u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf720;
    case 0x102bf729u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf729;
    case 0x102bf732u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf732;
    case 0x102bf733u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf733;
    case 0x102bf747u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf747;
    case 0x102bf74au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf74a;
    case 0x102bf750u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf750;
    case 0x102bf769u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); goto E_102bf769;
    case 0x102bf76cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf76c;
    case 0x102bf772u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf772;
    case 0x102bf787u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf787;
    case 0x102bf78eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf78e;
    case 0x102bf7a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf7a3;
    case 0x102bf7aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf7aa;
    case 0x102bf7acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf7ac;
    case 0x102bf7b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf7b5;
    case 0x102bf7bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf7bc;
    case 0x102bf7beu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf7be;
    case 0x102bf7ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); goto E_102bf7ce;
    case 0x102bf7d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); goto E_102bf7d3;
    case 0x102bf7e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf7e7;
    case 0x102bf7e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf7e9;
    case 0x102bf7efu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf7ef;
    case 0x102bf7f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf7f9;
    case 0x102bf802u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf802;
    case 0x102bf855u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf855;
    case 0x102bf858u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf858;
    case 0x102bf860u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf860;
    case 0x102bf864u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf864;
    case 0x102bf86eu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf86e;
    case 0x102bf877u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf877;
    case 0x102bf880u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf880;
    case 0x102bf8a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf8a6;
    case 0x102bf8a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf8a9;
    case 0x102bf8afu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf8af;
    case 0x102bf8c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf8c3;
    case 0x102bf8c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf8c5;
    case 0x102bf8cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf8cb;
    case 0x102bf8ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf8eb;
    case 0x102bf8f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf8f7;
    case 0x102bf902u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf902;
    case 0x102bf904u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf904;
    case 0x102bf90au: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf90a;
    case 0x102bf91eu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf91e;
    case 0x102bf920u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf920;
    case 0x102bf926u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf926;
    case 0x102bf941u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf941;
    case 0x102bf944u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf944;
    case 0x102bf94au: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf94a;
    case 0x102bf95eu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf95e;
    case 0x102bf960u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf960;
    case 0x102bf966u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf966;
    case 0x102bf97au: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf97a;
    case 0x102bf97cu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf97c;
    case 0x102bf982u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf982;
    case 0x102bf996u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; goto E_102bf996;
    case 0x102bf998u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf998;
    case 0x102bf99du: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf99d;
    case 0x102bf9a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf9a2;
    case 0x102bf9b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf9b6;
    case 0x102bf9b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf9b8;
    case 0x102bf9bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf9bf;
    case 0x102bf9deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf9de;
    case 0x102bf9e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf9e1;
    case 0x102bf9e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf9e7;
    case 0x102bf9fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bf9fb;
    case 0x102bf9fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bf9fd;
    case 0x102bfa03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa03;
    case 0x102bfa17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bfa17;
    case 0x102bfa19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa19;
    case 0x102bfa1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa1f;
    case 0x102bfa33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bfa33;
    case 0x102bfa35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa35;
    case 0x102bfa3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa3b;
    case 0x102bfa42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa42;
    case 0x102bfa54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; goto E_102bfa54;
    case 0x102bfa57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa57;
    case 0x102bfa5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa5e;
    case 0x102bfa64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa64;
    case 0x102bfa6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa6b;
    case 0x102bfa71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa71;
    case 0x102bfa9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102bfa9b;
    default: break;
    }
#endif

    COW_AT(102bf6a6)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    if (rd32(arg1 + 0xecu) != 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_3c = in_esi;
        loc_40 = in_edi;
    }
    else
    {
    COW_AT(102bf6bb)
        t1 = rd8(arg1 + 0x124u);
        wr32(sp0 - 0x44u, t1);
        t2 = rd32(arg1 + 0xe4u);
        wr32(sp0 - 0x48u, t2);
        wr32(sp0 - 0x4cu, COW_IMG(0x103c8054u));
        wr32(sp0 - 0x50u, sp0 - 0x38u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x38u, COW_IMG(0x103c8054u), t2, t1, in_edi);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    COW_AT(102bf6d7)
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        wr32(sp0 - 0x58u, arg1);
        g->ecx = ecx;
        g->esp = sp0 - 0x48u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, sp0 - 0x38u, sp0 - 0x38u, COW_IMG(0x103c8054u));
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    COW_AT(102bf6e1)
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
    }
    COW_AT(102bf6e4)
    if ((rd8(arg1 + 0x71u) & 0x10u) != 0u)
    {
    COW_AT(102bf6ea)
        if (rd8(arg1 + 0x108u) != 3u)
        {
    COW_AT(102bf720)
            if (rd16(arg1 + 0x11au) == 0u)
            {
    COW_AT(102bf732)
                wr32(sp0 - 0x44u, 0u);
                loc_44 = 0u;
            }
            else
            {
    COW_AT(102bf729)
                wr32(sp0 - 0x44u, arg1 + 0x18cu);
                loc_44 = arg1 + 0x18cu;
            }
    COW_AT(102bf733)
            t13 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x48u, t13);
            wr32(sp0 - 0x4cu, arg1 + 0x100u);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x102c1c79u), ecx, 3, arg1 + 0x100u, t13, loc_44);
            t14 = g->ecx;
            t15 = g->edx;
            ecx = t14;
            edx = t15;
    COW_AT(102bf747)
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
        }
        else
        {
    COW_AT(102bf6f3)
            t7 = rd16(arg1 + 0x11au);
            wr32(sp0 - 0x44u, t7);
            t8 = rd32(arg1 + 0x188u);
            wr32(sp0 - 0x48u, t8);
            t9 = rd32(arg1 + 0x114u);
            wr32(sp0 - 0x4cu, t9);
            t10 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x50u, t10);
            wr32(sp0 - 0x54u, arg1 + 0x100u);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x102c1a72u), ecx, 5, arg1 + 0x100u, t10, t9, t8, t7);
            t11 = g->ecx;
            t12 = g->edx;
            ecx = t11;
            edx = t12;
    COW_AT(102bf71b)
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
        }
    }
    COW_AT(102bf74a)
    if ((rd8(arg1 + 0x72u) & 4u) != 0u)
    {
    COW_AT(102bf750)
        wr32(sp0 - 0x44u, 0x80u);
        t16 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t16);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->ecx = ecx;
        g->esp = sp0 - 0x3cu;
        cow_call_regs(g, COW_IMG(0x102c32b3u), g->eax, g->ecx, edx, 1, 4, arg1 + 0x100u, t16, 0x80u, loc_40);
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
    COW_AT(102bf769)
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
    }
    COW_AT(102bf76c)
    if ((rd8(arg1 + 0x72u) & 0x60u) != 0u)
    {
    COW_AT(102bf772)
        t19 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x44u, t19);
        wr32(sp0 - 0x48u, arg1 + 0x100u);
        wr32(sp0 - 0x4cu, arg1);
        g->eax = arg1 + 0x100u;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t20 = cow_thiscall_cdecl(g, COW_IMG(0x102c0272u), ecx, 4, arg1, arg1 + 0x100u, t19, loc_40);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    COW_AT(102bf787)
        if (eax == 0u)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
        }
        else
        {
    COW_AT(102bf78e)
            t23 = rd32(arg1 + 0x70u);
            wr8(arg1 + 0x228u, 1u);
            if (t23 == 0x400000u)
            {
    COW_AT(102bf7a3)
                wr32(sp0 - 0x44u, COW_IMG(0x103c802cu));
                wr32(sp0 - 0x48u, arg1);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x40u;
                t24 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c802cu));
                t25 = g->edx;
                eax = t24;
                edx = t25;
    COW_AT(102bf7aa)
                ecx = rd32(sp0 - 0x44u);
            }
    COW_AT(102bf7ac)
            if (rd32(arg1 + 0x70u) != 0x200000u)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_40 = rd32(sp0 - 0x40u);
            }
            else
            {
    COW_AT(102bf7b5)
                wr32(sp0 - 0x44u, COW_IMG(0x103c802cu));
                wr32(sp0 - 0x48u, arg1);
                g->esp = sp0 - 0x38u;
                cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c802cu), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
                t26 = g->edx;
                edx = t26;
    COW_AT(102bf7bc)
                ecx = rd32(sp0 - 0x44u);
                loc_4 = rd32(sp0 - 4u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_40 = rd32(sp0 - 0x40u);
            }
        }
    }
    COW_AT(102bf7be)
    wr32(sp0 - 0x44u, in_ebx);
    if ((rd32(arg1 + 0x70u) & 0x4000u) == 0u)
    {
        loc_44 = in_ebx;
    }
    else
    {
    COW_AT(102bf7ce)
        if ((rd32(arg1 + 0x68u) & 0x800u) != 0u)
        {
            loc_44 = in_ebx;
        }
        else
        {
    COW_AT(102bf7d3)
            t27 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x48u, t27);
            wr32(sp0 - 0x4cu, arg1 + 0x100u);
            g->ebx = 0x800u;
            g->esp = sp0 - 0x40u;
            cow_call_regs(g, COW_IMG(0x102c0140u), arg1 + 0x100u, ecx, edx, 1, 3, arg1 + 0x100u, t27, in_ebx);
            t28 = g->edx;
            edx = t28;
    COW_AT(102bf7e7)
            ecx = rd32(sp0 - 0x48u);
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
        }
    }
    COW_AT(102bf7e9)
    if ((rd8(arg1 + 0x70u) & 0x80u) != 0u)
    {
    COW_AT(102bf7ef)
        if (rd16(arg1 + 0x11au) != 0u) goto L_102bf802;
    COW_AT(102bf7f9)
        if ((rd8(arg1 + 0x126u) & 4u) == 0u) goto L_102bf858;
L_102bf802: ;
    COW_AT(102bf802)
        t29 = rd32(arg1 + 0x158u);
        wr32(sp0 - 0x48u, t29);
        t30 = rd32(arg1 + 0x178u);
        wr32(sp0 - 0x4cu, t30);
        t31 = rd32(arg1 + 0x174u);
        wr32(sp0 - 0x50u, t31);
        t32 = rd32(arg1 + 0x170u);
        wr32(sp0 - 0x54u, t32);
        t33 = rd32(arg1 + 0x16cu);
        wr32(sp0 - 0x58u, t33);
        t34 = rd32(arg1 + 0x168u);
        wr32(sp0 - 0x5cu, t34);
        t35 = rd32(arg1 + 0x164u);
        wr32(sp0 - 0x60u, t35);
        wr32(sp0 - 0x64u, arg1 + 0x142u);
        wr32(sp0 - 0x68u, arg1 + 0x138u);
        wr32(sp0 - 0x6cu, arg1 + 0x18cu);
        t36 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x70u, t36);
        wr32(sp0 - 0x74u, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_call_regs(g, COW_IMG(0x102c0875u), arg1 + 0x100u, ecx, g->edx, 1, 12, arg1 + 0x100u, t36, arg1 + 0x18cu, arg1 + 0x138u, arg1 + 0x142u, t35, t34, t33, t32, t31, t30, t29);
        t37 = g->ecx;
        t38 = g->edx;
        ecx = t37;
        edx = t38;
    COW_AT(102bf855)
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
    }
L_102bf858: ;
    COW_AT(102bf858)
    if ((rd32(arg1 + 0x70u) >> 8u & 0x20u) != 0u)
    {
        eax = rd32(arg1 + 0x70u);
    COW_AT(102bf860)
        if ((int8_t)eax >= 0) goto L_102bf877;
    COW_AT(102bf864)
        if (rd16(arg1 + 0x11au) != 0u) goto L_102bf8a9;
    COW_AT(102bf86e)
        if ((rd8(arg1 + 0x126u) & 4u) != 0u) goto L_102bf8a9;
L_102bf877: ;
    COW_AT(102bf877)
        if (rd8(arg1 + 0x126u) != 3u)
        {
    COW_AT(102bf880)
            t39 = rd32(arg1 + 0x158u);
            wr32(sp0 - 0x48u, t39);
            t40 = rd32(arg1 + 0x170u);
            wr32(sp0 - 0x4cu, t40);
            t41 = rd32(arg1 + 0x164u);
            wr32(sp0 - 0x50u, t41);
            t42 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x54u, t42);
            wr32(sp0 - 0x58u, arg1 + 0x100u);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x102c1700u), ecx, 6, arg1 + 0x100u, t42, t41, t40, t39, loc_44);
            t43 = g->ecx;
            t44 = g->edx;
            ecx = t43;
            edx = t44;
    COW_AT(102bf8a6)
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
        }
    }
L_102bf8a9: ;
    COW_AT(102bf8a9)
    if ((rd8(arg1 + 0x71u) & 4u) != 0u)
    {
    COW_AT(102bf8af)
        t45 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t45);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x102bfd29u), 2, arg1 + 0x100u, t45);
        t46 = g->edx;
        edx = t46;
    COW_AT(102bf8c3)
        ecx = rd32(sp0 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
    }
    COW_AT(102bf8c5)
    if ((rd8(arg1 + 0x70u) & 0x40u) != 0u)
    {
    COW_AT(102bf8cb)
        t47 = rd32(arg1 + 0x1f0u);
        wr32(sp0 - 0x48u, t47);
        t48 = rd32(arg1 + 0x1ecu);
        wr32(sp0 - 0x4cu, t48);
        t49 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x50u, t49);
        wr32(sp0 - 0x54u, arg1 + 0x100u);
        g->eax = arg1 + 0x100u;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t50 = cow_thiscall_cdecl(g, COW_IMG(0x102c1fccu), ecx, 4, arg1 + 0x100u, t49, t48, t47);
        t51 = g->ecx;
        t52 = g->edx;
        eax = t50;
        ecx = t51;
        edx = t52;
    COW_AT(102bf8eb)
        if (rd32(arg1 + 0x104u) != 0u)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
        }
        else
        {
    COW_AT(102bf8f7)
            wr32(sp0 - 0x48u, COW_IMG(0x103c8008u));
            wr32(sp0 - 0x4cu, arg1);
            g->esp = sp0 - 0x3cu;
            cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c8008u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t53 = g->edx;
            edx = t53;
    COW_AT(102bf902)
            ecx = COW_IMG(0x103c8008u);
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
        }
    }
    COW_AT(102bf904)
    if ((rd8(arg1 + 0x70u) & 0x20u) != 0u)
    {
    COW_AT(102bf90a)
        t54 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t54);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_thiscall_cdecl(g, COW_IMG(0x102c31cau), ecx, 2, arg1 + 0x100u, t54);
        t55 = g->edx;
        edx = t55;
    COW_AT(102bf91e)
        ecx = rd32(sp0 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
    }
    COW_AT(102bf920)
    if ((rd8(arg1 + 0x70u) & 8u) != 0u)
    {
    COW_AT(102bf926)
        wr32(sp0 - 0x48u, arg1 + 0x181u);
        t56 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x4cu, t56);
        wr32(sp0 - 0x50u, arg1 + 0x100u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_call_regs(g, COW_IMG(0x102bfbaeu), arg1 + 0x100u, g->ecx, g->edx, 1, 3, arg1 + 0x100u, t56, arg1 + 0x181u);
        t57 = g->ecx;
        t58 = g->edx;
        ecx = t57;
        edx = t58;
    COW_AT(102bf941)
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
    }
    COW_AT(102bf944)
    if ((rd8(arg1 + 0x70u) & 4u) != 0u)
    {
    COW_AT(102bf94a)
        t59 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t59);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->esp = sp0 - 0x40u;
        cow_call_regs(g, COW_IMG(0x102bfa9fu), g->eax, ecx, edx, 1, 3, arg1 + 0x100u, t59, loc_44);
        t60 = g->edx;
        edx = t60;
    COW_AT(102bf95e)
        ecx = rd32(sp0 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
    }
    COW_AT(102bf960)
    if (rd8(arg1 + 0x70u) & 1u)
    {
    COW_AT(102bf966)
        t61 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t61);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->esp = sp0 - 0x40u;
        cow_call_regs(g, COW_IMG(0x102c3440u), g->eax, g->ecx, edx, 1, 3, arg1 + 0x100u, t61, loc_44);
        t62 = g->edx;
        edx = t62;
    COW_AT(102bf97a)
        ecx = rd32(sp0 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
    }
    COW_AT(102bf97c)
    if (rd8(arg1 + 0x72u) & 1u)
    {
    COW_AT(102bf982)
        t63 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t63);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_thiscall_cdecl(g, COW_IMG(0x102c3266u), ecx, 2, arg1 + 0x100u, t63);
        t64 = g->edx;
        edx = t64;
    COW_AT(102bf996)
        ecx = rd32(sp0 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
    }
    COW_AT(102bf998)
    if ((rd32(arg1 + 0x70u) & 0x4000u) != 0u)
    {
    COW_AT(102bf99d)
        if ((rd32(arg1 + 0x68u) & 0x800u) != 0u)
        {
    COW_AT(102bf9a2)
            t65 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x48u, t65);
            wr32(sp0 - 0x4cu, arg1 + 0x100u);
            g->ebx = 0x800u;
            g->esp = sp0 - 0x40u;
            cow_call_regs(g, COW_IMG(0x102c0140u), arg1 + 0x100u, ecx, edx, 1, 3, arg1 + 0x100u, t65, loc_44);
            t66 = g->edx;
            edx = t66;
    COW_AT(102bf9b6)
            ecx = rd32(sp0 - 0x48u);
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
        }
    }
    COW_AT(102bf9b8)
    if ((rd8(arg1 + 0x71u) & 0x80u) == 0u)
    {
        ebx = loc_44;
    }
    else
    {
        ebx = loc_44;
    COW_AT(102bf9bf)
        t67 = rd32(arg1 + 0x6cu);
        wr32(sp0 - 0x44u, t67);
        t68 = rd16(arg1 + 0x12eu);
        wr32(sp0 - 0x48u, t68);
        t69 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x4cu, t69);
        wr32(sp0 - 0x50u, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_thiscall_cdecl(g, COW_IMG(0x102bff09u), ecx, 5, arg1 + 0x100u, t69, t68, t67, loc_40);
        t70 = g->ecx;
        t71 = g->edx;
        ecx = t70;
        edx = t71;
    COW_AT(102bf9de)
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
    }
    COW_AT(102bf9e1)
    if ((rd8(arg1 + 0x72u) & 8u) != 0u)
    {
    COW_AT(102bf9e7)
        t72 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x44u, t72);
        wr32(sp0 - 0x48u, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_thiscall_cdecl(g, COW_IMG(0x102bfe5fu), ecx, 3, arg1 + 0x100u, t72, loc_40);
        t73 = g->edx;
        edx = t73;
    COW_AT(102bf9fb)
        ecx = rd32(sp0 - 0x44u);
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
    }
    COW_AT(102bf9fd)
    if ((rd8(arg1 + 0x72u) & 2u) != 0u)
    {
    COW_AT(102bfa03)
        t74 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x44u, t74);
        wr32(sp0 - 0x48u, arg1 + 0x100u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_thiscall_cdecl(g, COW_IMG(0x102bfd6du), ecx, 3, arg1 + 0x100u, t74, loc_40);
        t75 = g->edx;
        edx = t75;
    COW_AT(102bfa17)
        ecx = rd32(sp0 - 0x44u);
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
    }
    COW_AT(102bfa19)
    if ((rd8(arg1 + 0x70u) & 0x10u) != 0u)
    {
    COW_AT(102bfa1f)
        t76 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x44u, t76);
        wr32(sp0 - 0x48u, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102c3239u), 2, arg1 + 0x100u, t76);
        t77 = g->edx;
        edx = t77;
    COW_AT(102bfa33)
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
    }
    COW_AT(102bfa35)
    if ((rd8(arg1 + 0x72u) & 0x10u) != 0u)
    {
    COW_AT(102bfa3b)
        if (rd32(arg1 + 0x58u) == 0u)
        {
            eax = rd32(arg1 + 0x58u);
        }
        else
        {
            eax = rd32(arg1 + 0x58u);
    COW_AT(102bfa42)
            t78 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x44u, t78);
            wr32(sp0 - 0x48u, arg1 + 0x100u);
            wr32(sp0 - 0x4cu, arg1);
            g->eax = eax;
            g->esp = sp0 - 0x40u;
            t79 = cow_thiscall_cdecl(g, eax, arg1 + 0x100u, 3, arg1, arg1 + 0x100u, t78);
            eax = t79;
    COW_AT(102bfa54)
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
        }
    COW_AT(102bfa57)
        if (rd8(arg1 + 0x64u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x64u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x64u);
    COW_AT(102bfa5e)
            wr8(arg1 + 0x109u, (uint8_t)eax);
        }
    COW_AT(102bfa64)
        if (rd8(arg1 + 0x65u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x65u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x65u);
    COW_AT(102bfa6b)
            wr8(arg1 + 0x10au, (uint8_t)eax);
        }
    COW_AT(102bfa71)
        t80 = rd8(arg1 + 0x10au);
        t81 = rd32(arg1 + 0x100u);
        eax = (eax & 0xffffff00u) | t80;
        cf = 0u;
        of = 0u;
        { /* imul byte ptr [esi + 0x109] */ uint32_t A = arg1 + 0x109u; { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)rd8(A); eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
        wr8(arg1 + 0x10bu, (uint8_t)eax);
        t82 = (t81 * (uint8_t)eax + 7u) >> 3u;
        wr32(arg1 + 0x104u, t82);
    }
    COW_AT(102bfa9b)
    g->ebx = ebx;
    g->esi = loc_3c;
    g->edi = loc_40;
    g->ebp = loc_4;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bf6a6(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bf6bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bf6d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x50u, sp0 - 0x38u);
        wr32(sp0 - 0x4cu, COW_IMG(0x103c8054u));
        (void)sp0;
        return 1;
    }
    case 0x102bf6e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        wr32(sp0 - 0x50u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x102bf6e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bf6eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bf6f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf71bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf720u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bf729u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf732u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bf733u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf747u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf74au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf750u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf769u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf76cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf772u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf787u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf78eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf7a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = COW_IMG(0x103c802cu);
        (void)sp0;
        return 1;
    }
    case 0x102bf7aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = COW_IMG(0x103c802cu);
        (void)sp0;
        return 1;
    }
    case 0x102bf7acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = COW_IMG(0x103c802cu);
        (void)sp0;
        return 1;
    }
    case 0x102bf7b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = COW_IMG(0x103c802cu);
        (void)sp0;
        return 1;
    }
    case 0x102bf7bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf7beu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf7ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf7d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf7e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf7e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf7efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf7f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf802u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf855u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf858u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf860u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf864u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf86eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf877u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf880u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf8a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x58u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf8a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf8afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf8c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf8c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf8cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf8ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x54u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf8f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf902u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        wr32(sp0 - 0x48u, COW_IMG(0x103c8008u));
        (void)sp0;
        return 1;
    }
    case 0x102bf904u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf90au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf91eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf920u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf926u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf941u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf944u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf94au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf95eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf960u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf966u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf97au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf97cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf982u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf996u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf998u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0x4000u;
        (void)sp0;
        return 1;
    }
    case 0x102bf99du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf9a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = 0x800u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf9b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf9b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf9bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf9deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf9e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf9e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf9fbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bf9fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa03u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa17u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa1fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa35u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa3bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa54u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa5eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bfa6bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102bfa71u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102bfa9bu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
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
void cow_adapter_102bf6a6(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102bf6a6(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
