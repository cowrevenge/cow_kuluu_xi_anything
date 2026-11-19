/* f_0x10199850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10199850(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
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
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10199860u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199860;
    case 0x1019986bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019986b;
    case 0x10199876u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199876;
    case 0x10199881u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199881;
    case 0x10199890u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199890;
    case 0x1019989fu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019989f;
    case 0x101998a6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101998a6;
    case 0x101998b7u: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101998b7;
    case 0x101998c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101998c8;
    case 0x101998f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101998f0;
    case 0x10199918u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199918;
    case 0x10199940u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199940;
    case 0x10199968u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199968;
    case 0x10199972u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199972;
    case 0x10199988u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199988;
    case 0x1019998eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019998e;
    case 0x1019999du: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019999d;
    case 0x101999a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101999a4;
    case 0x101999cdu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101999cd;
    case 0x101999d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101999d4;
    case 0x101999d7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101999d7;
    case 0x101999dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101999df;
    case 0x101999e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101999e0;
    case 0x101999f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101999f0;
    case 0x101999fcu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101999fc;
    case 0x10199a05u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a05;
    case 0x10199a14u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a14;
    case 0x10199a1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a1b;
    case 0x10199a44u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a44;
    case 0x10199a4bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a4b;
    case 0x10199a55u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a55;
    case 0x10199a5eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a5e;
    case 0x10199a66u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a66;
    case 0x10199a71u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a71;
    case 0x10199a78u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a78;
    case 0x10199a88u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a88;
    case 0x10199a94u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a94;
    case 0x10199a9du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199a9d;
    case 0x10199aacu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199aac;
    case 0x10199ab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199ab3;
    case 0x10199ad9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199ad9;
    case 0x10199ae1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199ae1;
    case 0x10199b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b07;
    case 0x10199b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b18;
    case 0x10199b24u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b24;
    case 0x10199b2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b2c;
    case 0x10199b3au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b3a;
    case 0x10199b46u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b46;
    case 0x10199b4fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b4f;
    case 0x10199b5eu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b5e;
    case 0x10199b65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b65;
    case 0x10199b8bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b8b;
    case 0x10199b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199b92;
    case 0x10199ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199ba0;
    case 0x10199ba9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199ba9;
    case 0x10199bb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199bb1;
    case 0x10199bd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199bd7;
    case 0x10199be8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199be8;
    case 0x10199bf1u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199bf1;
    case 0x10199bf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199bf8;
    case 0x10199c09u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10199c09;
    default: break;
    }
#endif

    COW_AT(10199850)
    if (rd8(self + 0x20u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x20u);
        ecx = self;
        goto L_10199988;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x20u);
    COW_AT(10199860)
    if (rd8(self + 0x21u) != 0u)
    {
        ecx = (self & 0xffffff00u) | rd8(self + 0x21u);
        goto L_10199988;
    }
    ecx = (self & 0xffffff00u) | rd8(self + 0x21u);
    COW_AT(1019986b)
    if (rd8(self + 0x22u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x22u);
        goto L_10199988;
    }
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x22u);
    COW_AT(10199876)
    if (rd8(self + 0x23u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x23u);
        goto L_10199988;
    }
    COW_AT(10199881)
    if ((uint16_t)arg1 != 5u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_10199968;
    }
    COW_AT(10199890)
    if ((uint32_t)(int16_t)arg2 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_10199c09;
    }
    COW_AT(1019989f)
    t1 = rd32(COW_IMG(0x10199c10u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101998a6u: goto L_101998a6;
    case 0x101998b7u: goto L_101998b7;
    case 0x101998c8u: goto L_101998c8;
    case 0x101998f0u: goto L_101998f0;
    case 0x10199918u: goto L_10199918;
    case 0x10199940u: goto L_10199940;
    default: rt_fatal(g, COW_IMG(0x1019989fu), "switch");
    }
    return 0;
L_101998a6: ;
    COW_AT(101998a6)
    g->eax = rd32(self);
    g->edx = in_edx;
    t21 = rd32(self);
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, rd32(t21 + 0x44u), self, 2, 0xeu, 0u);
    t23 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t23;
    return t22;
L_101998b7: ;
    COW_AT(101998b7)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = rd32(self);
    t18 = rd32(self);
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, rd32(t18 + 0x44u), self, 2, 0xeu, 1u);
    t20 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t20;
    return t19;
L_101998c8: ;
    COW_AT(101998c8)
    t14 = rd32(self + 0x3cu);
    t15 = rd32(self + 8u);
    wr8(self + 0x22u, 1u);
    wr32(self + 0x2cu, t14);
    wr8(t15 + 0x62u, 0u);
    t16 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t17 = rd32(self + 8u);
    wr32(self + 0x30u, t16);
    wr8(t17 + 0x85u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t16;
    return t17;
L_101998f0: ;
    COW_AT(101998f0)
    t10 = rd32(self + 0x40u);
    t11 = rd32(self + 8u);
    wr8(self + 0x23u, 1u);
    wr32(self + 0x2cu, t10);
    wr8(t11 + 0x62u, 0u);
    t12 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t13 = rd32(self + 8u);
    wr32(self + 0x30u, t12);
    wr8(t13 + 0x85u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t12;
    return t13;
L_10199918: ;
    COW_AT(10199918)
    t6 = rd32(self + 0x28u);
    t7 = rd32(self + 8u);
    wr8(self + 0x21u, 1u);
    wr32(self + 0x2cu, t6);
    wr8(t7 + 0x62u, 0u);
    t8 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t9 = rd32(self + 8u);
    wr32(self + 0x30u, t8);
    wr8(t9 + 0x85u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return t9;
L_10199940: ;
    COW_AT(10199940)
    t2 = rd32(self + 0x24u);
    t3 = rd32(self + 8u);
    wr8(self + 0x20u, 1u);
    wr32(self + 0x2cu, t2);
    wr8(t3 + 0x62u, 0u);
    t4 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t5 = rd32(self + 8u);
    wr32(self + 0x30u, t4);
    wr8(t5 + 0x85u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t4;
    return t5;
L_10199968: ;
    COW_AT(10199968)
    if ((uint16_t)eax != 6u)
    {
        edx = in_edx;
        goto L_10199c09;
    }
    COW_AT(10199972)
    t24 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t25 = cow_call_regs(g, COW_IMG(0x1015e790u), t24, COW_IMG(0x10621838u), g->edx, 0, 2, t24, 1u);
    t26 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t26;
    return t25;
L_10199988: ;
    COW_AT(10199988)
    if ((uint8_t)eax != 1u) goto L_101999fc;
    COW_AT(1019998e)
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10199c09;
    }
    COW_AT(1019999d)
    t27 = rd32(COW_IMG(0x10199c28u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t27 - RD)
    {
    case 0x101999a4u: goto L_101999a4;
    case 0x101999cdu: goto L_101999cd;
    case 0x101999d7u: goto L_101999d7;
    case 0x10199bf1u: goto L_10199bf1;
    default: rt_fatal(g, COW_IMG(0x1019999du), "switch");
    }
    return 0;
L_101999a4: ;
    COW_AT(101999a4)
    t32 = rd32(self + 0x2cu) + 3u;
    g->eax = t32;
    g->esp = sp0 - 0xcu;
    t33 = cow_thiscall(g, rd32(rd32(self) + 0x44u), self, 2, 0x11u, t32);
    t34 = rd32(self + 8u);
    wr8(self + 0x20u, 0u);
    wr8(t34 + 0x62u, 1u);
    t35 = rd32(self + 8u);
    wr8(t35 + 0x85u, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t35;
    return t33;
L_101999cd: ;
    COW_AT(101999cd)
    if ((int32_t)rd32(self + 0x2cu) <= 0)
    {
        eax = rd32(self + 0x2cu);
        edx = in_edx;
        goto L_101999f0;
    }
    eax = rd32(self + 0x2cu);
    COW_AT(101999d4)
    eax = eax - 1u;
L_101999e0: ;
    COW_AT(101999e0)
    t28 = rd32(self);
    wr32(self + 0x2cu, eax);
    g->eax = eax + 3u;
    g->edx = t28;
    g->esp = sp0 - 0xcu;
    t29 = cow_thiscall(g, rd32(t28 + 0x44u), self, 2, 0x11u, eax + 3u);
    t30 = g->edx;
    eax = t29;
    edx = t30;
L_101999f0: ;
    COW_AT(101999f0)
    t31 = (eax & 0xffff0000u) | rd16(self + 0x30u);
    eax = t31;
    loc_14 = t31;
L_10199bf8: ;
    COW_AT(10199bf8)
    t87 = rd32(self + 8u);
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t88 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t87, g->edx, 0, 2, loc_14, 0u);
    t89 = g->edx;
    g->edi = t87;
    g->edx = t89;
    t90 = cow_thiscall(g, COW_IMG(0x101186a0u), t87, 0);
    t91 = g->edx;
    eax = t90;
    edx = t91;
L_10199c09: ;
    COW_AT(10199c09)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_101999d7: ;
    COW_AT(101999d7)
    if ((int32_t)rd32(self + 0x2cu) >= 27)
    {
        eax = rd32(self + 0x2cu);
        edx = in_edx;
        goto L_101999f0;
    }
    eax = rd32(self + 0x2cu);
    COW_AT(101999df)
    eax = eax + 1u;
    goto L_101999e0;
L_101999fc: ;
    COW_AT(101999fc)
    if (rd8(self + 0x21u) != 1u) goto L_10199a94;
    COW_AT(10199a05)
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10199c09;
    }
    COW_AT(10199a14)
    t36 = rd32(COW_IMG(0x10199c40u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t36 - RD)
    {
    case 0x10199a1bu: goto L_10199a1b;
    case 0x10199a44u: goto L_10199a44;
    case 0x10199a5eu: goto L_10199a5e;
    case 0x10199be8u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_10199be8;
    default: rt_fatal(g, COW_IMG(0x10199a14u), "switch");
    }
    return 0;
L_10199a1b: ;
    COW_AT(10199a1b)
    t42 = rd32(self + 0x2cu);
    g->eax = t42;
    g->esp = sp0 - 0xcu;
    t43 = cow_thiscall(g, rd32(rd32(self) + 0x44u), self, 2, 0x9cu, t42);
    t44 = rd32(self + 8u);
    wr8(self + 0x21u, 0u);
    wr8(t44 + 0x62u, 1u);
    t45 = rd32(self + 8u);
    wr8(t45 + 0x85u, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t45;
    return t43;
L_10199a44: ;
    COW_AT(10199a44)
    if ((int32_t)rd32(self + 0x2cu) <= 0)
    {
        eax = rd32(self + 0x2cu);
        edx = in_edx;
        goto L_10199a88;
    }
    eax = rd32(self + 0x2cu);
    COW_AT(10199a4b)
    wr32(self + 0x2cu, eax - 0xau);
    if ((int32_t)(eax - 0xau) < 0)
    {
    COW_AT(10199a55)
        wr32(self + 0x2cu, 0u);
    }
L_10199a78: ;
    COW_AT(10199a78)
    t37 = rd32(self + 0x2cu);
    g->eax = rd32(self);
    g->edx = in_edx;
    t38 = rd32(self);
    g->esp = sp0 - 0xcu;
    t39 = cow_thiscall(g, rd32(t38 + 0x44u), self, 2, 0x9cu, t37);
    t40 = g->edx;
    eax = t39;
    edx = t40;
L_10199a88: ;
    COW_AT(10199a88)
    t41 = (edx & 0xffff0000u) | rd16(self + 0x30u);
    edx = t41;
    loc_14 = t41;
    goto L_10199bf8;
L_10199a5e: ;
    COW_AT(10199a5e)
    if ((int32_t)rd32(self + 0x2cu) >= 100)
    {
        eax = rd32(self + 0x2cu);
        edx = in_edx;
        goto L_10199a88;
    }
    eax = rd32(self + 0x2cu);
    COW_AT(10199a66)
    wr32(self + 0x2cu, eax + 0xau);
    if ((int32_t)(eax + 0xau) > 100)
    {
    COW_AT(10199a71)
        wr32(self + 0x2cu, 0x64u);
    }
    goto L_10199a78;
L_10199a94: ;
    COW_AT(10199a94)
    if (rd8(self + 0x22u) != 1u) goto L_10199b46;
    COW_AT(10199a9d)
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10199c09;
    }
    COW_AT(10199aac)
    t46 = rd32(COW_IMG(0x10199c58u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t46 - RD)
    {
    case 0x10199ab3u: goto L_10199ab3;
    case 0x10199ad9u: goto L_10199ad9;
    case 0x10199b24u: goto L_10199b24;
    case 0x10199bf1u: goto L_10199bf1;
    default: rt_fatal(g, COW_IMG(0x10199aacu), "switch");
    }
    return 0;
L_10199ab3: ;
    COW_AT(10199ab3)
    t64 = rd32(self + 0x2cu);
    g->eax = t64;
    g->esp = sp0 - 0xcu;
    t65 = cow_thiscall(g, rd32(rd32(self) + 0x44u), self, 2, 0xfu, t64);
    t66 = rd32(self + 8u);
    wr8(self + 0x22u, 0u);
    wr8(t66 + 0x62u, 1u);
    t67 = rd32(self + 8u);
    wr8(t67 + 0x85u, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t67;
    return t65;
L_10199ad9: ;
    COW_AT(10199ad9)
    if ((int32_t)rd32(self + 0x2cu) <= 4)
    {
        eax = rd32(self + 0x2cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x2cu);
    COW_AT(10199ae1)
        t51 = rd32(self);
        wr32(self + 0x2cu, eax - 1u);
        g->edx = t51;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t51 + 0x44u), self, 2, 0xfu, eax - 1u);
        t52 = g->edx;
        g->eax = rd32(self);
        t53 = rd32(self);
        t54 = cow_thiscall(g, rd32(t53 + 0x48u), self, 1, 0x10u);
        g->edx = rd32(self);
        t55 = rd32(self);
        t56 = cow_thiscall(g, rd32(t55 + 0x48u), self, 1, 0xfu);
        t57 = g->edx;
        if ((int32_t)t54 <= (int32_t)t56)
        {
            eax = t56;
            edx = t57;
        }
        else
        {
            eax = t56;
            edx = t57;
    COW_AT(10199b07)
            g->eax = eax;
            g->edx = edx;
            t58 = rd32(self);
            g->esp = sp0 - 0xcu;
            t59 = cow_thiscall(g, rd32(t58 + 0x48u), self, 1, 0xfu);
            t60 = g->edx;
            g->edx = t60;
            t61 = cow_thiscall(g, rd32(t58 + 0x44u), self, 2, 0x10u, t59);
            t62 = g->edx;
            eax = t61;
            edx = t62;
        }
    }
    COW_AT(10199b18)
    t63 = (eax & 0xffff0000u) | rd16(self + 0x30u);
    eax = t63;
    loc_14 = t63;
    goto L_10199bf8;
L_10199b24: ;
    COW_AT(10199b24)
    if ((int32_t)rd32(self + 0x2cu) >= 20)
    {
        eax = rd32(self + 0x2cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x2cu);
    COW_AT(10199b2c)
        t47 = rd32(self);
        wr32(self + 0x2cu, eax + 1u);
        g->eax = eax + 1u;
        g->edx = t47;
        g->esp = sp0 - 0xcu;
        t48 = cow_thiscall(g, rd32(t47 + 0x44u), self, 2, 0xfu, eax + 1u);
        t49 = g->edx;
        eax = t48;
        edx = t49;
    }
    COW_AT(10199b3a)
    t50 = (eax & 0xffff0000u) | rd16(self + 0x30u);
    eax = t50;
    loc_14 = t50;
    goto L_10199bf8;
L_10199b46: ;
    COW_AT(10199b46)
    if (rd8(self + 0x23u) != 1u)
    {
        edx = in_edx;
        goto L_10199c09;
    }
    COW_AT(10199b4f)
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10199c09;
    }
    COW_AT(10199b5e)
    t68 = rd32(COW_IMG(0x10199c70u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t68 - RD)
    {
    case 0x10199b65u: goto L_10199b65;
    case 0x10199b8bu: goto L_10199b8b;
    case 0x10199ba9u: goto L_10199ba9;
    case 0x10199bf1u: goto L_10199bf1;
    default: rt_fatal(g, COW_IMG(0x10199b5eu), "switch");
    }
    return 0;
L_10199b65: ;
    COW_AT(10199b65)
    t92 = rd32(self + 0x2cu);
    g->eax = t92;
    g->esp = sp0 - 0xcu;
    t93 = cow_thiscall(g, rd32(rd32(self) + 0x44u), self, 2, 0x10u, t92);
    t94 = rd32(self + 8u);
    wr8(self + 0x23u, 0u);
    wr8(t94 + 0x62u, 1u);
    t95 = rd32(self + 8u);
    wr8(t95 + 0x85u, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t95;
    return t93;
L_10199b8b: ;
    COW_AT(10199b8b)
    if ((int32_t)rd32(self + 0x2cu) <= 0)
    {
        eax = rd32(self + 0x2cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x2cu);
    COW_AT(10199b92)
        t83 = rd32(self);
        wr32(self + 0x2cu, eax - 1u);
        g->eax = eax - 1u;
        g->edx = t83;
        g->esp = sp0 - 0xcu;
        t84 = cow_thiscall(g, rd32(t83 + 0x44u), self, 2, 0x10u, eax - 1u);
        t85 = g->edx;
        eax = t84;
        edx = t85;
    }
    COW_AT(10199ba0)
    t86 = (eax & 0xffff0000u) | rd16(self + 0x30u);
    eax = t86;
    loc_14 = t86;
    goto L_10199bf8;
L_10199ba9: ;
    COW_AT(10199ba9)
    if ((int32_t)rd32(self + 0x2cu) >= 20)
    {
        eax = rd32(self + 0x2cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x2cu);
    COW_AT(10199bb1)
        t70 = rd32(self);
        wr32(self + 0x2cu, eax + 1u);
        g->edx = t70;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t70 + 0x44u), self, 2, 0x10u, eax + 1u);
        t71 = g->edx;
        g->eax = rd32(self);
        t72 = rd32(self);
        t73 = cow_thiscall(g, rd32(t72 + 0x48u), self, 1, 0x10u);
        g->edx = rd32(self);
        t74 = rd32(self);
        t75 = cow_thiscall(g, rd32(t74 + 0x48u), self, 1, 0xfu);
        t76 = g->edx;
        if ((int32_t)t75 >= (int32_t)t73)
        {
            eax = t75;
            edx = t76;
        }
        else
        {
            eax = t75;
            edx = t76;
    COW_AT(10199bd7)
            g->eax = eax;
            g->edx = edx;
            t77 = rd32(self);
            g->esp = sp0 - 0xcu;
            t78 = cow_thiscall(g, rd32(t77 + 0x48u), self, 1, 0x10u);
            t79 = g->edx;
            g->edx = t79;
            t80 = cow_thiscall(g, rd32(t77 + 0x44u), self, 2, 0xfu, t78);
            t81 = g->edx;
            eax = t80;
            edx = t81;
        }
    }
L_10199be8: ;
    COW_AT(10199be8)
    t82 = (eax & 0xffff0000u) | rd16(self + 0x30u);
    eax = t82;
    loc_14 = t82;
    goto L_10199bf8;
L_10199bf1: ;
    COW_AT(10199bf1)
    t69 = (ecx & 0xffff0000u) | rd16(self + 0x30u);
    eax = (uint32_t)(int16_t)arg1 - 1u;
    edx = in_edx;
    loc_14 = t69;
    goto L_10199bf8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10199850(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10199860u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1019986bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10199876u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10199881u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10199890u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1019989fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101998a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101998b7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101998c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101998f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10199918u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10199940u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10199968u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10199972u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10199988u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1019998eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1019999du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x101999a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x101999cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x101999d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x101999d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x101999dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x101999e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x101999f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x101999fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a14u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199a9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199aacu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199ab3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199ad9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199ae1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b5eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199b92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199ba0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199ba9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199bb1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199bd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199be8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199bf1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10199bf8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10199c09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10199850(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10199850(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
