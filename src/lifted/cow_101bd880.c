/* f_0x101bd880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bd880(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_3ef4;
    uint32_t loc_3ef8;
    uint32_t loc_3f00;
    uint32_t loc_3f04;
    uint32_t loc_3f08;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 16184u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101bd88au: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; goto E_101bd88a;
    case 0x101bd8a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101bd8a3;
    case 0x101bd8b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101bd8b2;
    case 0x101bd8b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101bd8b7;
    case 0x101bd8bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bd8bb;
    case 0x101bd8cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101bd8cb;
    case 0x101bd8d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101bd8d2;
    case 0x101bd8e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101bd8e9;
    case 0x101bd8efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101bd8ef;
    case 0x101bd8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bd8fc;
    case 0x101bd90au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bd90a;
    case 0x101bd917u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bd917;
    case 0x101bd933u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bd933;
    case 0x101bd93eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f04 = rd32(sp0 - 0x3f04u); goto E_101bd93e;
    case 0x101bd946u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f04 = rd32(sp0 - 0x3f04u); goto E_101bd946;
    case 0x101bd968u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; goto E_101bd968;
    case 0x101bd98eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bd98e;
    case 0x101bd9a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bd9a0;
    case 0x101bd9aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bd9aa;
    case 0x101bd9b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bd9b6;
    case 0x101bd9d7u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bd9d7;
    case 0x101bd9e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bd9e2;
    case 0x101bd9f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bd9f0;
    case 0x101bd9f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bd9f6;
    case 0x101bd9fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bd9fc;
    case 0x101bda01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda01;
    case 0x101bda07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda07;
    case 0x101bda0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda0c;
    case 0x101bda12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda12;
    case 0x101bda15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda15;
    case 0x101bda1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda1e;
    case 0x101bda22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda22;
    case 0x101bda2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda2d;
    case 0x101bda3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda3c;
    case 0x101bda4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda4a;
    case 0x101bda4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda4c;
    case 0x101bda52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda52;
    case 0x101bda5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda5d;
    case 0x101bda68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); goto E_101bda68;
    case 0x101bda70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bda70;
    case 0x101bda79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bda79;
    case 0x101bda87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bda87;
    case 0x101bda92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bda92;
    case 0x101bdaa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdaa0;
    case 0x101bdaa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdaa6;
    case 0x101bdaacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdaac;
    case 0x101bdab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdab2;
    case 0x101bdab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdab8;
    case 0x101bdabeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdabe;
    case 0x101bdac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdac4;
    case 0x101bdad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdad4;
    case 0x101bdae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdae7;
    case 0x101bdaeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdaee;
    case 0x101bdaf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdaf5;
    case 0x101bdafcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdafc;
    case 0x101bdb03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdb03;
    case 0x101bdb0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdb0a;
    case 0x101bdb1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdb1c;
    case 0x101bdb28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdb28;
    case 0x101bdb4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdb4a;
    case 0x101bdb52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdb52;
    case 0x101bdb72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3ef8 = rd32(sp0 - 0x3ef8u); goto E_101bdb72;
    case 0x101bdb81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3ef8 = rd32(sp0 - 0x3ef8u); goto E_101bdb81;
    case 0x101bdb96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdb96;
    case 0x101bdbacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdbac;
    case 0x101bdbb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdbb0;
    case 0x101bdbc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdbc8;
    case 0x101bdbd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdbd2;
    case 0x101bdbd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdbd7;
    case 0x101bdbd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdbd9;
    case 0x101bdbdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdbdf;
    case 0x101bdbf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdbf4;
    case 0x101bdc0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc0e;
    case 0x101bdc16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc16;
    case 0x101bdc22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc22;
    case 0x101bdc2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc2e;
    case 0x101bdc36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc36;
    case 0x101bdc45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc45;
    case 0x101bdc68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc68;
    case 0x101bdc6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc6c;
    case 0x101bdc81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc81;
    case 0x101bdc9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdc9c;
    case 0x101bdca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdca4;
    case 0x101bdcb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdcb9;
    case 0x101bdccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdccf;
    case 0x101bdcd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdcd7;
    case 0x101bdce5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdce5;
    case 0x101bdcedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdced;
    case 0x101bdcfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdcfc;
    case 0x101bdd07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd07;
    case 0x101bdd23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd23;
    case 0x101bdd31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd31;
    case 0x101bdd3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd3c;
    case 0x101bdd58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd58;
    case 0x101bdd64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd64;
    case 0x101bdd6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd6c;
    case 0x101bdd85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd85;
    case 0x101bdd9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd9b;
    case 0x101bdd9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdd9f;
    case 0x101bdda9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdda9;
    case 0x101bddadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bddad;
    case 0x101bddb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bddb8;
    case 0x101bddc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bddc3;
    case 0x101bddceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bddce;
    case 0x101bdde7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdde7;
    case 0x101bddebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bddeb;
    case 0x101bddf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bddf8;
    case 0x101bddffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bddff;
    case 0x101bde0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bde0f;
    case 0x101bde21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bde21;
    case 0x101bde28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bde28;
    case 0x101bde45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bde45;
    case 0x101bde4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bde4a;
    case 0x101bde60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bde60;
    case 0x101bde64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bde64;
    case 0x101bde88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bde88;
    case 0x101bde8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bde8a;
    case 0x101bdea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdea4;
    case 0x101bdeb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdeb1;
    case 0x101bdec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdec2;
    case 0x101bded3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bded3;
    case 0x101bdedfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdedf;
    case 0x101bdeebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdeeb;
    case 0x101bdef8u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdef8;
    case 0x101bdf07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf07;
    case 0x101bdf15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf15;
    case 0x101bdf1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf1b;
    case 0x101bdf1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf1d;
    case 0x101bdf23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf23;
    case 0x101bdf34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf34;
    case 0x101bdf39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf39;
    case 0x101bdf49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf49;
    case 0x101bdf54u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf54;
    case 0x101bdf5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf5d;
    case 0x101bdf5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf5f;
    case 0x101bdf69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf69;
    case 0x101bdf6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf6e;
    case 0x101bdf70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf70;
    case 0x101bdf78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf78;
    case 0x101bdf7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf7f;
    case 0x101bdf85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf85;
    case 0x101bdf8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf8c;
    case 0x101bdf92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf92;
    case 0x101bdf99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf99;
    case 0x101bdf9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdf9f;
    case 0x101bdfa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdfa6;
    case 0x101bdfacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdfac;
    case 0x101bdfb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdfb3;
    case 0x101bdfb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdfb9;
    case 0x101bdfbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdfbe;
    case 0x101bdfc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdfc7;
    case 0x101bdfd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_3f08 = rd32(sp0 - 0x3f08u); loc_3f00 = rd32(sp0 - 0x3f00u); loc_3ef8 = rd32(sp0 - 0x3ef8u); loc_3ef4 = rd32(sp0 - 0x3ef4u); goto E_101bdfd2;
    case 0x101bdfe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101bdfe4;
    case 0x101bdfe9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101bdfe9;
    case 0x101bdff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101bdff7;
    case 0x101be005u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101be005;
    case 0x101be00du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101be00d;
    case 0x101be018u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101be018;
    default: break;
    }
#endif

    COW_AT(101bd880)
    COW_AT(101bd88a)
    wr32(sp0 - 0x3f10u, in_esi);
    wr32(sp0 - 0x3f14u, in_edi);
    wr32(sp0 - 0x3efcu, self);
    wr32(sp0 - 0x3f18u, arg1);
    g->eax = 0x3f0cu;
    g->edx = in_edx;
    g->esp = sp0 - 0x3f14u;
    t1 = cow_thiscall(g, COW_IMG(0x101c4c80u), rd32(COW_IMG(0x10662dccu)), 1, arg1);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101bd8a3)
    wr32(sp0 - 0x3f18u, arg1);
    if ((uint8_t)eax == 0u)
    {
        ecx = rd32(COW_IMG(0x10662dccu));
        goto L_101bdfe4;
    }
    ecx = rd32(COW_IMG(0x10662dccu));
    COW_AT(101bd8b2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3f14u;
    t3 = cow_thiscall(g, COW_IMG(0x101c4b50u), ecx, 1, arg1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(101bd8b7)
    if (eax != 0u) goto L_101bd8cb;
    COW_AT(101bd8bb)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x3f10u);
    g->edi = rd32(sp0 - 0x3f14u);
    g->ebp = in_ebp;
    return 1u;
L_101bd8cb: ;
    COW_AT(101bd8cb)
    if ((int32_t)eax > 9200) goto L_101bd8ef;
    COW_AT(101bd8d2)
    wr32(sp0 - 0x3f18u, 0u);
    wr32(sp0 - 0x3f1cu, eax);
    wr32(sp0 - 0x3f20u, sp0 - 0x23f0u);
    wr32(sp0 - 0x3f24u, arg1);
    g->eax = eax;
    g->edx = sp0 - 0x23f0u;
    t6 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x3f14u;
    t7 = cow_thiscall(g, COW_IMG(0x101c47c0u), t6, 4, arg1, sp0 - 0x23f0u, eax, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(101bd8e9)
    if (eax != 0u)
    {
        esi = eax;
        goto L_101bd917;
    }
L_101bd8ef: ;
    COW_AT(101bd8ef)
    wr32(sp0 - 0x3f18u, arg1);
    wr32(sp0 - 0x3f1cu, 0x15bu);
    wr32(sp0 - 0x3f20u, 9u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3f18u;
    t71 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x15bu);
    t72 = g->ecx;
    t73 = g->edx;
    eax = t71;
    ecx = t72;
    edx = t73;
    COW_AT(101bd8fc)
    wr32(sp0 - 0x3f1cu, eax);
    wr32(sp0 - 0x3f20u, sp0 - 0x3ef0u);
    g->eax = sp0 - 0x3ef0u;
    g->edx = edx;
    g->esp = sp0 - 0x3f0cu;
    t74 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x3ef0u, eax, rd32(sp0 - 0x3f18u), rd32(sp0 - 0x3f14u), rd32(sp0 - 0x3f10u));
    t75 = g->edx;
    eax = t74;
    edx = t75;
    COW_AT(101bd90a)
    wr32(sp0 - 0x3f18u, sp0 - 0x3ef0u);
L_101be00d: ;
    COW_AT(101be00d)
    g->eax = eax;
    g->esp = sp0 - 0x3f14u;
    t82 = cow_thiscall(g, COW_IMG(0x10129eb0u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x3ef0u);
    eax = t82;
    COW_AT(101be018)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x3f10u);
    g->edi = rd32(sp0 - 0x3f14u);
    g->ebp = in_ebp;
    return 0xffffffffu;
L_101bd917: ;
    COW_AT(101bd917)
    wr32(sp0 - 0x3f18u, 0u);
    wr32(sp0 - 0x3f1cu, 0u);
    wr32(sp0 - 0x3f20u, esi);
    wr32(sp0 - 0x3f24u, sp0 - 0x23f0u);
    wr32(sp0 - 0x3f28u, 0u);
    wr32(sp0 - 0x3f2cu, 0xfde9u);
    g->eax = eax;
    g->edx = sp0 - 0x23f0u;
    t10 = rd32(COW_IMG(0x10329144u));
    g->esp = sp0 - 0x3f14u;
    t11 = cow_stdcall(g, t10, 6, 0xfde9u, 0u, sp0 - 0x23f0u, esi, 0u, 0u);   /* kernel32.dll!MultiByteToWideChar */
    t12 = g->edx;
    eax = t11;
    edx = t12;
    edi = t10;
    COW_AT(101bd933)
    wr32(sp0 - 0x3f04u, eax);
    if ((int32_t)eax <= 3200)
    {
        loc_3f04 = eax;
    }
    else
    {
    COW_AT(101bd93e)
        wr32(sp0 - 0x3f04u, 0xc80u);
        loc_3f04 = 0xc80u;
    }
    COW_AT(101bd946)
    wr32(sp0 - 0x3f18u, in_ebx);
    wr32(sp0 - 0x3f1cu, in_ebp);
    wr32(sp0 - 0x3f20u, loc_3f04);
    wr32(sp0 - 0x3f24u, sp0 - 0x3cf0u);
    wr32(sp0 - 0x3f28u, esi);
    wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
    wr32(sp0 - 0x3f30u, 0u);
    wr32(sp0 - 0x3f34u, 0xfde9u);
    g->esp = sp0 - 0x3f1cu;
    cow_thiscall(g, edi, sp0 - 0x23f0u, 6, 0xfde9u, 0u, sp0 - 0x23f0u, esi, sp0 - 0x3cf0u, loc_3f04);
    t13 = g->ecx;
    ecx = t13;
    ebx = loc_3f04;
    COW_AT(101bd968)
    wr32(sp0 - 0x3f08u, 0u);
    wr8(sp0 - 0x3f09u, 0u);
    wr32(sp0 - 0x3ef8u, 0u);
    wr32(sp0 - 0x3ef4u, 0u);
    wr32(sp0 - 0x3f00u, 0u);
    if ((int32_t)ebx <= 0)
    {
        esi = 0u;
        goto L_101bdf49;
    }
    ebp = 0u;
    esi = 0u;
    loc_3f08 = 0u;
    loc_3ef8 = 0u;
    loc_3ef4 = 0u;
    loc_3f00 = 0u;
L_101bd98e: ;
    COW_AT(101bd98e)
    if (rd16(ebp * 2u + sp0 - 0x3cf0u) == 0xdu) goto L_101bded3;
    ecx = (ecx & 0xffff0000u) | rd16(ebp * 2u + sp0 - 0x3cf0u);
    COW_AT(101bd9a0)
    if ((uint16_t)ecx == 0xau) goto L_101bded3;
    COW_AT(101bd9aa)
    if (loc_3f08 != 0u)
    {
        eax = loc_3f08;
        goto L_101bda70;
    }
    eax = loc_3f08;
    COW_AT(101bd9b6)
    wr8(sp0 - 0x3f09u, (uint8_t)eax);
    wr32(sp0 - 0x3ef8u, 0u);
    wr8(arg2 + esi * 0x64u + 0x42u, 0u);
    wr32(sp0 - 0x3ef4u, 0u);
    if ((uint16_t)ecx != 0x28u)
    {
        eax = esi * 5u;
        goto L_101bda4c;
    }
    edi = arg2 + esi * 0x64u;
    COW_AT(101bd9d7)
    if ((int32_t)(ebp + 1u) >= (int32_t)rd32(sp0 - 0x3f04u))
    {
        ecx = ebp + 1u;
        goto L_101bda1e;
    }
    eax = rd32(sp0 - 0x3f04u);
    ecx = ebp + 1u;
    edx = 0u;
L_101bd9e2: ;
    COW_AT(101bd9e2)
    if (rd16(ecx * 2u + sp0 - 0x3cf0u) == 0xdu) goto L_101bda1e;
    eax = (eax & 0xffff0000u) | rd16(ecx * 2u + sp0 - 0x3cf0u);
    COW_AT(101bd9f0)
    if ((uint16_t)eax == 0xau) goto L_101bda1e;
    COW_AT(101bd9f6)
    if ((uint16_t)eax != 0x69u) goto L_101bda01;
    COW_AT(101bd9fc)
    edx = edx | 4u;
L_101bda15: ;
    COW_AT(101bda15)
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(sp0 - 0x3f04u))
    {
        eax = rd32(sp0 - 0x3f04u);
        ecx = ecx + 1u;
        goto L_101bd9e2;
    }
    ecx = ecx + 1u;
L_101bda1e: ;
    COW_AT(101bda1e)
    edx = 0u;
L_101bda3c: ;
    COW_AT(101bda3c)
    t14 = rd32(sp0 - 0x3f04u);
    wr32(edi, edx);
    if ((int32_t)ebp >= (int32_t)t14) goto L_101bdf34;
    eax = t14;
    COW_AT(101bda4a)
    loc_3ef8 = 0u;
    loc_3ef4 = 0u;
L_101bda79: ;
    COW_AT(101bda79)
    if (rd16(ebp * 2u + sp0 - 0x3cf0u) != 0x5cu)
    {
        ecx = (ecx & 0xffff0000u) | rd16(ebp * 2u + sp0 - 0x3cf0u);
        goto L_101bdae7;
    }
    ecx = (ecx & 0xffff0000u) | rd16(ebp * 2u + sp0 - 0x3cf0u);
    COW_AT(101bda87)
    if ((int32_t)(ebp + 1u) >= (int32_t)rd32(sp0 - 0x3f04u))
    {
        eax = rd32(sp0 - 0x3f04u);
        goto L_101bdae7;
    }
    eax = rd32(sp0 - 0x3f04u);
    COW_AT(101bda92)
    if (rd16(ebp * 2u + sp0 - 0x3ceeu) == 0x28u) goto L_101bdac4;
    eax = (eax & 0xffff0000u) | rd16(ebp * 2u + sp0 - 0x3ceeu);
    COW_AT(101bdaa0)
    if ((uint16_t)eax == 0x29u) goto L_101bdac4;
    COW_AT(101bdaa6)
    if ((uint16_t)eax == 0x5bu) goto L_101bdac4;
    COW_AT(101bdaac)
    if ((uint16_t)eax == 0x5du) goto L_101bdac4;
    COW_AT(101bdab2)
    if ((uint16_t)eax == 0x5eu) goto L_101bdac4;
    COW_AT(101bdab8)
    if ((uint16_t)eax == 0x2du) goto L_101bdac4;
    COW_AT(101bdabe)
    if ((uint16_t)eax != 0x2eu) goto L_101bdae7;
L_101bdac4: ;
    COW_AT(101bdac4)
    if ((int32_t)(loc_3f08 + 1u) >= 31)
    {
        ecx = loc_3f08;
    }
    else
    {
        ecx = loc_3f08;
    COW_AT(101bdad4)
        wr8(arg2 + ecx + esi * 0x64u + 0x43u, 1u);
    }
L_101bdf23: ;
    COW_AT(101bdf23)
    wr32(sp0 - 0x3f00u, ebp + 1u);
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(sp0 - 0x3f04u))
    {
        loc_3f00 = ebp + 1u;
        ebp = ebp + 1u;
        goto L_101bd98e;
    }
L_101bdf34: ;
    COW_AT(101bdf34)
    if ((int32_t)esi < 100) goto L_101bdf49;
L_101bdf39: ;
    COW_AT(101bdf39)
    wr32(arg3, 0x64u);
L_101bdf54: ;
    COW_AT(101bdf54)
    if (rd32(arg3) != 0u)
    {
        eax = rd32(arg3);
    COW_AT(101bdf5d)
        esi = arg2;
        edi = 0u;
L_101bdf5f: ;
    COW_AT(101bdf5f)
        if (rd8(esi + 0x42u) == 1u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 0x42u);
            ecx = esi + 4u;
    COW_AT(101bdf69)
            if ((rd8(esi) & 4u) != 0u)
            {
    COW_AT(101bdf6e)
                edx = 0u;
L_101bdf70: ;
    COW_AT(101bdf70)
                if (rd16(ecx) == 0u) goto L_101bdfc7;
                eax = (eax & 0xffff0000u) | rd16(ecx);
    COW_AT(101bdf78)
                if (rd8(edx + esi + 0x43u) == 1u) goto L_101bdfc7;
    COW_AT(101bdf7f)
                if ((uint16_t)eax != 0xff3bu)
                {
    COW_AT(101bdf8c)
                    if ((uint16_t)eax != 0xff3du)
                    {
    COW_AT(101bdf99)
                        if ((uint16_t)eax != 0xff3eu)
                        {
    COW_AT(101bdfa6)
                            if ((uint16_t)eax != 0xff0du)
                            {
    COW_AT(101bdfb3)
                                if ((uint16_t)eax == 0xff0eu)
                                {
    COW_AT(101bdfb9)
                                    wr16(ecx, 0x2eu);
                                }
                            }
                            else
                            {
    COW_AT(101bdfac)
                                wr16(ecx, 0x2du);
                            }
                        }
                        else
                        {
    COW_AT(101bdf9f)
                            wr16(ecx, 0x5eu);
                        }
                    }
                    else
                    {
    COW_AT(101bdf92)
                        wr16(ecx, 0x5du);
                    }
                }
                else
                {
    COW_AT(101bdf85)
                    wr16(ecx, 0x5bu);
                }
    COW_AT(101bdfbe)
                if ((int32_t)(edx + 1u) < 31)
                {
                    ecx = ecx + 2u;
                    edx = edx + 1u;
                    goto L_101bdf70;
                }
            }
        }
L_101bdfc7: ;
    COW_AT(101bdfc7)
        if (edi + 1u < rd32(arg3))
        {
            eax = rd32(arg3);
            esi = esi + 0x64u;
            edi = edi + 1u;
            goto L_101bdf5f;
        }
    }
    COW_AT(101bdfd2)
    g->ebx = rd32(sp0 - 0x3f18u);
    g->esi = rd32(sp0 - 0x3f10u);
    g->edi = rd32(sp0 - 0x3f14u);
    g->ebp = rd32(sp0 - 0x3f1cu);
    return 1u;
L_101bda01: ;
    COW_AT(101bda01)
    if ((uint16_t)eax != 0x73u) goto L_101bda0c;
    COW_AT(101bda07)
    edx = edx | 2u;
    goto L_101bda15;
L_101bda0c: ;
    COW_AT(101bda0c)
    if ((uint16_t)eax != 0x6eu) goto L_101bda22;
    COW_AT(101bda12)
    edx = edx | 8u;
    goto L_101bda15;
L_101bda22: ;
    COW_AT(101bda22)
    if (rd16(ecx * 2u + sp0 - 0x3cf0u) != 0x29u) goto L_101bda1e;
    COW_AT(101bda2d)
    wr32(sp0 - 0x3f00u, ecx + 1u);
    wr8(rd32(sp0 - 0x3efcu) + 4u, 1u);
    ebp = ecx + 1u;
    loc_3f00 = ecx + 1u;
    goto L_101bda3c;
L_101bda4c: ;
    COW_AT(101bda4c)
    if ((uint16_t)ecx != 0x5cu)
    {
        loc_3ef8 = 0u;
        loc_3ef4 = 0u;
    }
    else
    {
    COW_AT(101bda52)
        if ((int32_t)(ebp + 1u) >= (int32_t)rd32(sp0 - 0x3f04u))
        {
            eax = ebp + 1u;
            ecx = rd32(sp0 - 0x3f04u);
            loc_3ef8 = 0u;
            loc_3ef4 = 0u;
        }
        else
        {
            eax = ebp + 1u;
            ecx = rd32(sp0 - 0x3f04u);
    COW_AT(101bda5d)
            if (rd16(ebp * 2u + sp0 - 0x3ceeu) != 0x28u)
            {
                loc_3ef8 = 0u;
                loc_3ef4 = 0u;
            }
            else
            {
    COW_AT(101bda68)
                wr32(sp0 - 0x3f00u, eax);
                ebp = eax;
                loc_3ef8 = 0u;
                loc_3ef4 = 0u;
                loc_3f00 = eax;
            }
        }
    }
    goto L_101bda79;
L_101bda70: ;
    COW_AT(101bda70)
    if ((int32_t)eax >= 31) goto L_101bdf23;
    goto L_101bda79;
L_101bdae7: ;
    COW_AT(101bdae7)
    if ((uint16_t)ecx == 0xff3bu) goto L_101bdb0a;
    COW_AT(101bdaee)
    if ((uint16_t)ecx == 0xff3du) goto L_101bdb0a;
    COW_AT(101bdaf5)
    if ((uint16_t)ecx == 0xff3eu) goto L_101bdb0a;
    COW_AT(101bdafc)
    if ((uint16_t)ecx == 0xff0du) goto L_101bdb0a;
    COW_AT(101bdb03)
    if ((uint16_t)ecx != 0xff0eu) goto L_101bdb1c;
L_101bdb0a: ;
    COW_AT(101bdb0a)
    wr8(arg2 + esi * 0x64u + loc_3f08 + 0x43u, 1u);
    eax = loc_3f08;
L_101bdb1c: ;
    COW_AT(101bdb1c)
    if (rd8(sp0 - 0x3f09u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x3f09u);
    COW_AT(101bdde7)
        if ((uint8_t)eax == 1u)
        {
    COW_AT(101bddeb)
            wr8(arg2 + esi * 0x64u + 0x42u, 0u);
            ecx = esi * 0x19u;
        }
    }
    else
    {
    COW_AT(101bdb28)
        t15 = (loc_3f08 & 0xffffff00u) | rd8(arg2 + esi * 0x64u + loc_3f08 + 0x43u);
        wr32(sp0 - 0x3f20u, t15);
        wr32(sp0 - 0x3f24u, ecx);
        g->eax = t15;
        g->ecx = rd32(sp0 - 0x3efcu);
        g->edx = esi * 0x64u + loc_3f08;
        t16 = rd32(sp0 - 0x3efcu);
        g->esp = sp0 - 0x3f1cu;
        t17 = cow_stdcall(g, COW_IMG(0x101be1c0u), 2, ecx, t15);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
        ebp = arg2 + esi * 0x64u + loc_3f08;
        edi = esi * 0x64u;
    COW_AT(101bdb4a)
        if ((uint8_t)eax == 0u)
        {
            eax = rd32(sp0 - 0x3f00u);
    COW_AT(101bdb96)
            t22 = (edx & 0xffffff00u) | rd8(ebp + 0x43u);
            wr32(sp0 - 0x3f20u, t22);
            t23 = (ecx & 0xffff0000u) | rd16(eax * 2u + sp0 - 0x3cf0u);
            wr32(sp0 - 0x3f24u, t23);
            g->eax = eax;
            g->ecx = rd32(sp0 - 0x3efcu);
            g->edx = t22;
            t24 = rd32(sp0 - 0x3efcu);
            g->esp = sp0 - 0x3f1cu;
            t25 = cow_stdcall(g, COW_IMG(0x101be1e0u), 2, t23, t22);
            t26 = g->ecx;
            t27 = g->edx;
            eax = t25;
            ecx = t26;
            edx = t27;
    COW_AT(101bdbac)
            if ((uint8_t)eax == 0u)
            {
    COW_AT(101bdbf4)
                t30 = (eax & 0xffffff00u) | rd8(ebp + 0x43u);
                wr32(sp0 - 0x3f20u, t30);
                t31 = (ecx & 0xffff0000u) | rd16(sp0 + rd32(sp0 - 0x3f00u) * 2u - 0x3cf0u);
                wr32(sp0 - 0x3f24u, t31);
                g->eax = t30;
                g->edx = edx;
                t32 = rd32(sp0 - 0x3f00u);
                g->esp = sp0 - 0x3f1cu;
                t33 = cow_stdcall(g, COW_IMG(0x101be200u), 2, t31, t30);
                t34 = g->edx;
                eax = t33;
                edx = t34;
                edi = t32;
    COW_AT(101bdc0e)
                if ((uint8_t)eax == 0u) goto L_101bdcb9;
    COW_AT(101bdc16)
                if ((int32_t)rd32(sp0 - 0x3f08u) <= 0) goto L_101bddce;
                ecx = rd32(sp0 - 0x3f08u);
    COW_AT(101bdc22)
                if ((int32_t)(ecx + 1u) >= 31) goto L_101bddce;
    COW_AT(101bdc2e)
                if ((int32_t)edi <= 0) goto L_101bddce;
    COW_AT(101bdc36)
                if ((int32_t)(edi + 1u) >= (int32_t)rd32(sp0 - 0x3f04u)) goto L_101bddce;
                edx = rd32(sp0 - 0x3f04u);
    COW_AT(101bdc45)
                t35 = (edx & 0xffffff00u) | rd8(ebp + 0x42u);
                wr32(sp0 - 0x3f20u, t35);
                t36 = (t35 & 0xffff0000u) | rd16(arg2 + ecx * 2u + esi * 0x64u + 2u);
                wr32(sp0 - 0x3f24u, t36);
                g->eax = esi * 0x19u;
                g->edx = t36;
                t37 = rd32(sp0 - 0x3efcu);
                g->esp = sp0 - 0x3f1cu;
                t38 = cow_thiscall(g, COW_IMG(0x101be140u), t37, 2, t36, t35);
                t39 = g->ecx;
                t40 = g->edx;
                eax = t38;
                ecx = t39;
                edx = t40;
    COW_AT(101bdc68)
                if ((uint8_t)eax == 0u)
                {
    COW_AT(101bdc81)
                    t41 = (eax & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x3ceeu);
                    wr32(sp0 - 0x3f20u, t41);
                    t42 = (ecx & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x3cf2u);
                    wr32(sp0 - 0x3f24u, t42);
                    g->ecx = rd32(sp0 - 0x3efcu);
                    t43 = rd32(sp0 - 0x3efcu);
                    g->esp = sp0 - 0x3f1cu;
                    t44 = cow_call_regs(g, COW_IMG(0x101be130u), t41, g->ecx, g->edx, 0, 2, t42, t41);
                    t45 = g->ecx;
                    eax = t44;
                    ecx = t45;
    COW_AT(101bdc9c)
                    if ((uint8_t)eax != 0u)
                    {
                        loc_3ef8 = rd32(sp0 - 0x3ef8u);
                        loc_3ef4 = rd32(sp0 - 0x3ef4u);
                        loc_3f08 = rd32(sp0 - 0x3f08u);
                        loc_3f00 = rd32(sp0 - 0x3f00u);
                    }
                    else
                    {
    COW_AT(101bdca4)
                        wr8(sp0 - 0x3f09u, 1u);
                        wr8(arg2 + esi * 0x64u + 0x42u, 0u);
                        ecx = esi * 0x19u;
                        loc_3ef8 = rd32(sp0 - 0x3ef8u);
                        loc_3ef4 = rd32(sp0 - 0x3ef4u);
                        loc_3f08 = rd32(sp0 - 0x3f08u);
                        loc_3f00 = rd32(sp0 - 0x3f00u);
                    }
                }
                else
                {
    COW_AT(101bdc6c)
                    wr8(sp0 - 0x3f09u, 1u);
                    wr8(arg2 + esi * 0x64u + 0x42u, 0u);
                    ecx = esi * 0x19u;
                    loc_3ef8 = rd32(sp0 - 0x3ef8u);
                    loc_3ef4 = rd32(sp0 - 0x3ef4u);
                    loc_3f08 = rd32(sp0 - 0x3f08u);
                    loc_3f00 = rd32(sp0 - 0x3f00u);
                }
            }
            else
            {
    COW_AT(101bdbb0)
                t28 = rd32(sp0 - 0x3ef4u) + 1u;
                t29 = rd32(sp0 - 0x3ef4u);
                wr32(sp0 - 0x3ef4u, t28);
                if (rd32(sp0 - 0x3ef8u) != t29 + 1u)
                {
                    ecx = rd32(sp0 - 0x3ef8u);
                    cf = rd32(sp0 - 0x3ef8u) < t29 + 1u;
                    loc_3ef4 = t28;
                }
                else
                {
                    eax = t28;
                    ecx = rd32(sp0 - 0x3ef8u);
                    loc_3ef4 = t28;
    COW_AT(101bdbc8)
                    if ((int32_t)(rd32(sp0 - 0x3f08u) + 1u) < 31)
                    {
    COW_AT(101bdbd2)
                        wr8(arg2 + edi + 0x42u, 1u);
                    }
    COW_AT(101bdbd7)
                    cf = ecx < eax;
                }
    COW_AT(101bdbd9)
                if (!cf)
                {
                    loc_3ef8 = rd32(sp0 - 0x3ef8u);
                    loc_3f08 = rd32(sp0 - 0x3f08u);
                    loc_3f00 = rd32(sp0 - 0x3f00u);
                }
                else
                {
    COW_AT(101bdbdf)
                    wr8(sp0 - 0x3f09u, 1u);
                    wr8(arg2 + esi * 0x64u + 0x42u, 0u);
                    ecx = esi * 0x19u;
                    loc_3ef8 = rd32(sp0 - 0x3ef8u);
                    loc_3f08 = rd32(sp0 - 0x3f08u);
                    loc_3f00 = rd32(sp0 - 0x3f00u);
                }
            }
        }
        else
        {
            eax = rd32(sp0 - 0x3f00u);
    COW_AT(101bdb52)
            t20 = rd32(sp0 - 0x3f04u);
            wr8(arg2 + edi + 0x42u, 0u);
            t21 = rd32(sp0 - 0x3ef8u) + 1u;
            wr32(sp0 - 0x3ef8u, t21);
            if ((int32_t)(eax + 1u) >= (int32_t)t20)
            {
                loc_3ef8 = t21;
                goto L_101bdb81;
            }
            ecx = eax + 1u;
            loc_3ef8 = t21;
    COW_AT(101bdb72)
            if (rd16(eax * 2u + sp0 - 0x3ceeu) != 0x5du)
            {
                loc_3ef4 = rd32(sp0 - 0x3ef4u);
                loc_3f08 = rd32(sp0 - 0x3f08u);
                loc_3f00 = rd32(sp0 - 0x3f00u);
                goto L_101bddff;
            }
L_101bdb81: ;
    COW_AT(101bdb81)
            wr8(sp0 - 0x3f09u, 1u);
            wr8(arg2 + esi * 0x64u + 0x42u, 0u);
            ecx = esi * 0x19u;
            loc_3ef4 = rd32(sp0 - 0x3ef4u);
            loc_3f08 = rd32(sp0 - 0x3f08u);
            loc_3f00 = rd32(sp0 - 0x3f00u);
        }
    }
L_101bddff: ;
    COW_AT(101bddff)
    if ((rd8(arg2 + esi * 0x64u) & 2u) == 0u)
    {
        eax = (esi * 5u & 0xffffff00u) | rd8(arg2 + esi * 0x64u);
        edi = arg2 + esi * 0x64u;
        goto L_101bde45;
    }
    edx = esi * 0x19u;
    edi = arg2 + esi * 0x64u;
    COW_AT(101bde0f)
    t60 = (ecx & 0xffff0000u) | rd16(loc_3f00 * 2u + sp0 - 0x3cf0u);
    wr32(sp0 - 0x3f20u, t60);
    g->eax = loc_3f00;
    g->esp = sp0 - 0x3f14u;
    t61 = cow_call_regs(g, COW_IMG(0x10312beeu), g->eax, t60, edx, 1, 3, t60, rd32(sp0 - 0x3f1cu), rd32(sp0 - 0x3f18u));
    eax = t61;
    COW_AT(101bde21)
    if (eax == 0u)
    {
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        goto L_101bde45;
    }
    COW_AT(101bde28)
    t62 = rd32(sp0 - 0x3f08u);
    t63 = rd32(sp0 - 0x3f00u);
    wr16(arg2 + esi * 0x64u + t62 * 2u + 4u, 0u);
    ecx = esi * 0x32u + t62;
    ebp = t63;
    loc_3f08 = rd32(sp0 - 0x3f08u);
    loc_3ef8 = rd32(sp0 - 0x3ef8u);
    loc_3ef4 = rd32(sp0 - 0x3ef4u);
    goto L_101bdf23;
L_101bdcb9: ;
    COW_AT(101bdcb9)
    t46 = (edx & 0xffffff00u) | rd8(ebp + 0x43u);
    wr32(sp0 - 0x3f20u, t46);
    t47 = (eax & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x3cf0u);
    wr32(sp0 - 0x3f24u, t47);
    g->eax = t47;
    g->ecx = rd32(sp0 - 0x3efcu);
    g->edx = t46;
    t48 = rd32(sp0 - 0x3efcu);
    g->esp = sp0 - 0x3f1cu;
    t49 = cow_stdcall(g, COW_IMG(0x101be220u), 2, t47, t46);
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(101bdccf)
    if ((uint8_t)eax == 0u) goto L_101bdd85;
    COW_AT(101bdcd7)
    if ((int32_t)(rd32(sp0 - 0x3f08u) + 1u) >= 31) goto L_101bddce;
    COW_AT(101bdce5)
    if ((int32_t)edi <= 0) goto L_101bddce;
    COW_AT(101bdced)
    if ((int32_t)(edi + 1u) >= (int32_t)rd32(sp0 - 0x3f04u)) goto L_101bddce;
    ecx = rd32(sp0 - 0x3f04u);
    edx = edi + 1u;
    COW_AT(101bdcfc)
    if (rd16(edi * 2u + sp0 - 0x3cf2u) == 0x5bu) goto L_101bdd23;
    COW_AT(101bdd07)
    wr8(sp0 - 0x3f09u, 1u);
    wr8(arg2 + esi * 0x64u + 0x42u, 0u);
    ecx = esi * 0x19u;
    loc_3ef8 = rd32(sp0 - 0x3ef8u);
    loc_3ef4 = rd32(sp0 - 0x3ef4u);
    loc_3f08 = rd32(sp0 - 0x3f08u);
    loc_3f00 = rd32(sp0 - 0x3f00u);
    goto L_101bddff;
L_101bdd23: ;
    COW_AT(101bdd23)
    if (rd16(edi * 2u + sp0 - 0x3ceeu) != 0x5cu)
    {
        eax = (eax & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x3ceeu);
        goto L_101bdd58;
    }
    COW_AT(101bdd31)
    if ((int32_t)(edi + 2u) <= (int32_t)ecx) goto L_101bddf8;
    COW_AT(101bdd3c)
    wr8(sp0 - 0x3f09u, 1u);
    wr8(arg2 + esi * 0x64u + 0x42u, 0u);
    ecx = esi * 0x19u;
    loc_3ef8 = rd32(sp0 - 0x3ef8u);
    loc_3ef4 = rd32(sp0 - 0x3ef4u);
    loc_3f08 = rd32(sp0 - 0x3f08u);
    loc_3f00 = rd32(sp0 - 0x3f00u);
    goto L_101bddff;
L_101bdd58: ;
    COW_AT(101bdd58)
    wr32(sp0 - 0x3f20u, 0u);
    wr32(sp0 - 0x3f24u, eax);
    g->eax = eax;
    t52 = rd32(sp0 - 0x3efcu);
    g->esp = sp0 - 0x3f1cu;
    t53 = cow_thiscall(g, COW_IMG(0x101be140u), t52, 2, eax, 0u);
    t54 = g->ecx;
    eax = t53;
    ecx = t54;
    COW_AT(101bdd64)
    if ((uint8_t)eax == 0u) goto L_101bddf8;
    COW_AT(101bdd6c)
    wr8(sp0 - 0x3f09u, 1u);
    wr8(arg2 + esi * 0x64u + 0x42u, 0u);
    ecx = esi * 0x19u;
    loc_3ef8 = rd32(sp0 - 0x3ef8u);
    loc_3ef4 = rd32(sp0 - 0x3ef4u);
    loc_3f08 = rd32(sp0 - 0x3f08u);
    loc_3f00 = rd32(sp0 - 0x3f00u);
    goto L_101bddff;
L_101bdd85: ;
    COW_AT(101bdd85)
    t55 = (eax & 0xffffff00u) | rd8(ebp + 0x43u);
    wr32(sp0 - 0x3f20u, t55);
    t56 = (ecx & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x3cf0u);
    wr32(sp0 - 0x3f24u, t56);
    g->eax = t55;
    g->ecx = rd32(sp0 - 0x3efcu);
    t57 = rd32(sp0 - 0x3efcu);
    g->esp = sp0 - 0x3f1cu;
    t58 = cow_stdcall(g, COW_IMG(0x101be240u), 2, t56, t55);
    t59 = g->ecx;
    eax = t58;
    ecx = t59;
    COW_AT(101bdd9b)
    if ((uint8_t)eax == 0u) goto L_101bddf8;
    COW_AT(101bdd9f)
    if ((int32_t)(rd32(sp0 - 0x3f08u) + 1u) >= 31) goto L_101bddce;
    COW_AT(101bdda9)
    if ((int32_t)edi <= 0) goto L_101bddce;
    COW_AT(101bddad)
    if ((int32_t)(edi + 1u) >= (int32_t)rd32(sp0 - 0x3f04u)) goto L_101bddce;
    ecx = rd32(sp0 - 0x3f04u);
    COW_AT(101bddb8)
    if (rd16(edi * 2u + sp0 - 0x3cf2u) != 0x5bu) goto L_101bddce;
    COW_AT(101bddc3)
    if (rd16(edi * 2u + sp0 - 0x3ceeu) == 0x5du) goto L_101bddf8;
L_101bddce: ;
    COW_AT(101bddce)
    wr8(sp0 - 0x3f09u, 1u);
    wr8(arg2 + esi * 0x64u + 0x42u, 0u);
    ecx = esi * 0x19u;
    loc_3ef8 = rd32(sp0 - 0x3ef8u);
    loc_3ef4 = rd32(sp0 - 0x3ef4u);
    loc_3f08 = rd32(sp0 - 0x3f08u);
    loc_3f00 = rd32(sp0 - 0x3f00u);
    goto L_101bddff;
L_101bddf8: ;
    COW_AT(101bddf8)
    loc_3ef8 = rd32(sp0 - 0x3ef8u);
    loc_3ef4 = rd32(sp0 - 0x3ef4u);
    loc_3f08 = rd32(sp0 - 0x3f08u);
    loc_3f00 = rd32(sp0 - 0x3f00u);
    goto L_101bddff;
L_101bde45: ;
    COW_AT(101bde45)
    if ((rd8(edi) & 4u) == 0u) goto L_101bde8a;
    COW_AT(101bde4a)
    t64 = (eax & 0xffff0000u) | rd16(loc_3f00 * 2u + sp0 - 0x3cf0u);
    wr32(sp0 - 0x3f20u, t64);
    g->esp = sp0 - 0x3f1cu;
    t65 = cow_call_regs(g, COW_IMG(0x101be030u), t64, g->ecx, g->edx, 0, 1, t64);
    eax = t65;
    COW_AT(101bde60)
    if ((uint8_t)eax == 0u)
    {
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        goto L_101bde8a;
    }
    COW_AT(101bde64)
    t66 = (esi * 5u & 0xffff0000u) | rd16(sp0 + rd32(sp0 - 0x3f00u) * 2u - 0x3cf0u);
    wr32(sp0 - 0x3f20u, t66);
    g->eax = t66;
    g->ecx = rd32(sp0 - 0x3efcu);
    t67 = rd32(sp0 - 0x3efcu);
    t68 = rd32(sp0 - 0x3f08u);
    g->esp = sp0 - 0x3f1cu;
    t69 = cow_stdcall(g, COW_IMG(0x101be0b0u), 1, t66);
    t70 = g->ecx;
    eax = t69;
    ecx = t70;
    ebp = t68;
    edi = esi * 0x32u + t68;
    COW_AT(101bde88)
    loc_3ef8 = rd32(sp0 - 0x3ef8u);
    loc_3ef4 = rd32(sp0 - 0x3ef4u);
    loc_3f00 = rd32(sp0 - 0x3f00u);
L_101bdea4: ;
    COW_AT(101bdea4)
    wr16(arg2 + edi * 2u + 4u, (uint16_t)eax);
    if ((int32_t)(ebp + 1u) >= 31)
    {
        eax = ebp + 1u;
    COW_AT(101bdec2)
        wr16(arg2 + edi * 2u + 4u, 0u);
        wr32(sp0 - 0x3f08u, eax);
        ebp = loc_3f00;
        loc_3f08 = eax;
    }
    else
    {
        eax = ebp + 1u;
    COW_AT(101bdeb1)
        wr16(arg2 + edi * 2u + 6u, 0u);
        wr32(sp0 - 0x3f08u, eax);
        ebp = loc_3f00;
        loc_3f08 = eax;
    }
    goto L_101bdf23;
L_101bde8a: ;
    COW_AT(101bde8a)
    eax = (esi * 5u & 0xffff0000u) | rd16(loc_3f00 * 2u + sp0 - 0x3cf0u);
    ecx = esi * 0x19u;
    ebp = loc_3f08;
    edi = esi * 0x32u + loc_3f08;
    goto L_101bdea4;
L_101bded3: ;
    COW_AT(101bded3)
    if ((int32_t)loc_3f08 < 31)
    {
        eax = esi * 5u;
        ecx = loc_3f08;
    COW_AT(101bdeeb)
        wr16(arg2 + eax * 0x14u + ecx * 2u + 4u, 0u);
    }
    else
    {
        eax = esi * 5u;
    COW_AT(101bdedf)
        wr16(arg2 + eax * 0x14u + 0x40u, 0u);
    }
    COW_AT(101bdef8)
    wr32(sp0 - 0x3f08u, 0u);
    if ((int32_t)(ebp + 1u) >= (int32_t)rd32(sp0 - 0x3f04u))
    {
        ecx = rd32(sp0 - 0x3f04u);
    }
    else
    {
        eax = ebp + 1u;
        ecx = rd32(sp0 - 0x3f04u);
    COW_AT(101bdf07)
        if (rd16(ebp * 2u + sp0 - 0x3ceeu) == 0xdu)
        {
            ecx = (ecx & 0xffff0000u) | rd16(ebp * 2u + sp0 - 0x3ceeu);
            goto L_101bdf1b;
        }
        ecx = (ecx & 0xffff0000u) | rd16(ebp * 2u + sp0 - 0x3ceeu);
    COW_AT(101bdf15)
        if ((uint16_t)ecx != 0xau) goto L_101bdf1d;
L_101bdf1b: ;
    COW_AT(101bdf1b)
        ebp = eax;
    }
L_101bdf1d: ;
    COW_AT(101bdf1d)
    if ((int32_t)(esi + 1u) >= 100) goto L_101bdf39;
    esi = esi + 1u;
    loc_3f08 = 0u;
    goto L_101bdf23;
L_101bdf49: ;
    COW_AT(101bdf49)
    wr32(arg3, esi + 1u);
    goto L_101bdf54;
L_101bdfe4: ;
    COW_AT(101bdfe4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3f18u;
    t76 = cow_thiscall(g, COW_IMG(0x101c4c60u), ecx, 0);
    t77 = g->ecx;
    t78 = g->edx;
    eax = t76;
    ecx = t77;
    edx = t78;
    COW_AT(101bdfe9)
    wr32(sp0 - 0x3f1cu, eax);
    wr32(sp0 - 0x3f20u, arg1);
    wr32(sp0 - 0x3f24u, 0x15au);
    wr32(sp0 - 0x3f28u, 9u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x3f20u;
    t79 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x15au);
    t80 = g->ecx;
    eax = t79;
    ecx = t80;
    COW_AT(101bdff7)
    wr32(sp0 - 0x3f24u, eax);
    wr32(sp0 - 0x3f28u, sp0 - 0x3ef0u);
    g->edx = sp0 - 0x3ef0u;
    g->esp = sp0 - 0x3f14u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x3ef0u, eax, rd32(sp0 - 0x3f20u), rd32(sp0 - 0x3f1cu), rd32(sp0 - 0x3f18u));
    t81 = g->edx;
    edx = t81;
    COW_AT(101be005)
    wr32(sp0 - 0x3f18u, sp0 - 0x3ef0u);
    eax = sp0 - 0x3ef0u;
    goto L_101be00d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101bd880(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101bd88au:
    {
        uint32_t cf;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f0cu;
        g->eax = 0x3f0cu;
        (void)sp0;
        return 1;
    }
    case 0x101bd8a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101bd8b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x3f18u;
        g->edi = arg1;
        wr32(sp0 - 0x3f18u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x101bd8b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101bd8bbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        (void)sp0;
        return 1;
    }
    case 0x101bd8cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101bd8d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101bd8e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        g->edi = arg1;
        wr32(sp0 - 0x3f20u, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd8efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101bd8fcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f20u;
        (void)sp0;
        return 1;
    }
    case 0x101bd90au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f20u;
        wr32(sp0 - 0x3f20u, sp0 - 0x3ef0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd917u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        wr32(sp0 - 0x3f20u, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd933u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        wr32(sp0 - 0x3f24u, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd93eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t loc_3f04;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f04 = rd32(sp0 - 0x3f04u);
        g->esp = sp0 - 0x3f14u;
        wr32(sp0 - 0x3f24u, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd946u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t loc_3f04;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f04 = rd32(sp0 - 0x3f04u);
        g->esp = sp0 - 0x3f14u;
        wr32(sp0 - 0x3f24u, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd968u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->esi = 0u;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3f24u, sp0 - 0x3cf0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd98eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd9a0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd9aau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd9b6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd9d7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->edx = 0u;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd9e2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd9f0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd9f6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bd9fcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda01u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda07u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda0cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda12u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda15u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda1eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda22u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda2du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda3cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda4au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda4cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda52u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda5du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3ef8u, 0u);
        wr32(sp0 - 0x3ef4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda70u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda79u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda87u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bda92u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdaa0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdaa6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdaacu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdab2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdab8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdabeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdac4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdad4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdae7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdaeeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdaf5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdafcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdb03u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdb0au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdb1cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdb28u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdb4au:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdb52u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdb72u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdb81u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdb96u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdbacu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdbb0u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdbc8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdbd2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdbd7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdbd9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdbdfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdbf4u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc0eu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc16u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc22u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc2eu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc36u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc45u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc6cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc81u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdc9cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdca4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdcb9u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdccfu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdcd7u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdce5u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdcedu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdcfcu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd07u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd23u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd31u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd3cu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd58u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd64u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd6cu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd85u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd9bu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdd9fu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdda9u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bddadu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bddb8u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bddc3u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bddceu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdde7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bddebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bddf8u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bddffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bde0fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bde21u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f20u;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bde28u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bde45u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bde4au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bde60u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bde64u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bde88u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bde8au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdea4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdeb1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdec2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bded3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdedfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdeebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdef8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->eax = 0u;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf07u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3f08u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf15u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3f08u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf1bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3f08u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf1du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        wr32(sp0 - 0x3f08u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf23u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf34u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf39u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf49u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf54u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf5du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->edi = 0u;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf5fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf69u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf6eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf70u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf78u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf7fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf85u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf8cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf92u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf99u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdf9fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdfa6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdfacu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdfb3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdfb9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdfbeu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdfc7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        g->ebp = arg3;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdfd2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3ef4;
        uint32_t loc_3ef8;
        uint32_t loc_3f00;
        uint32_t loc_3f08;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_3f08 = rd32(sp0 - 0x3f08u);
        loc_3f00 = rd32(sp0 - 0x3f00u);
        loc_3ef8 = rd32(sp0 - 0x3ef8u);
        loc_3ef4 = rd32(sp0 - 0x3ef4u);
        g->esp = sp0 - 0x3f1cu;
        wr32(sp0 - 0x3f2cu, sp0 - 0x23f0u);
        (void)sp0;
        return 1;
    }
    case 0x101bdfe4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x3f18u;
        g->edi = arg1;
        wr32(sp0 - 0x3f18u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x101bdfe9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x3f18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101bdff7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f28u;
        (void)sp0;
        return 1;
    }
    case 0x101be005u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f28u;
        wr32(sp0 - 0x3f28u, sp0 - 0x3ef0u);
        (void)sp0;
        return 1;
    }
    case 0x101be00du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f18u;
        wr32(sp0 - 0x3f18u, sp0 - 0x3ef0u);
        (void)sp0;
        return 1;
    }
    case 0x101be018u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x3f14u;
        wr32(sp0 - 0x3f18u, sp0 - 0x3ef0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101bd880(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101bd880(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
