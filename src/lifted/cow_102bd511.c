/* f_0x102bd511 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102bd511(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bd51fu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd51f;
    case 0x102bd526u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd526;
    case 0x102bd533u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd533;
    case 0x102bd53du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd53d;
    case 0x102bd54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd54e;
    case 0x102bd555u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd555;
    case 0x102bd55cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd55c;
    case 0x102bd55fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd55f;
    case 0x102bd562u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd562;
    case 0x102bd565u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd565;
    case 0x102bd56cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd56c;
    case 0x102bd579u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd579;
    case 0x102bd57eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd57e;
    case 0x102bd587u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd587;
    case 0x102bd594u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd594;
    case 0x102bd59du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd59d;
    case 0x102bd5a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd5a8;
    case 0x102bd5bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd5bc;
    case 0x102bd5c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd5c5;
    case 0x102bd5cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd5cd;
    case 0x102bd5d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd5d5;
    case 0x102bd5deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd5de;
    case 0x102bd5e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd5e7;
    case 0x102bd5ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd5ec;
    case 0x102bd5f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd5f4;
    case 0x102bd604u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd604;
    case 0x102bd609u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd609;
    case 0x102bd60du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd60d;
    case 0x102bd615u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd615;
    case 0x102bd61eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd61e;
    case 0x102bd627u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd627;
    case 0x102bd62cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd62c;
    case 0x102bd634u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd634;
    case 0x102bd63du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd63d;
    case 0x102bd642u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd642;
    case 0x102bd648u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd648;
    case 0x102bd654u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd654;
    case 0x102bd660u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd660;
    case 0x102bd662u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd662;
    case 0x102bd668u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd668;
    case 0x102bd675u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102bd675;
    case 0x102bd691u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd691;
    case 0x102bd69au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd69a;
    case 0x102bd6a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd6a2;
    case 0x102bd6a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd6a8;
    case 0x102bd6d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd6d5;
    case 0x102bd6e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd6e2;
    case 0x102bd705u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_102bd705;
    case 0x102bd712u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bd712;
    case 0x102bd71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bd71b;
    case 0x102bd71du: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd71d;
    case 0x102bd738u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd738;
    case 0x102bd73bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd73b;
    case 0x102bd751u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd751;
    case 0x102bd760u: eax = g->eax; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd760;
    case 0x102bd764u: eax = g->eax; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd764;
    case 0x102bd76eu: eax = g->eax; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd76e;
    case 0x102bd773u: eax = g->eax; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd773;
    case 0x102bd77cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd77c;
    case 0x102bd788u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd788;
    case 0x102bd78au: eax = g->eax; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd78a;
    case 0x102bd792u: eax = g->eax; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd792;
    case 0x102bd797u: eax = g->eax; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd797;
    case 0x102bd79fu: eax = g->eax; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd79f;
    case 0x102bd7acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd7ac;
    case 0x102bd7b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd7b4;
    case 0x102bd810u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd810;
    case 0x102bd828u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); goto E_102bd828;
    case 0x102bd84eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102bd84e;
    case 0x102bd857u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102bd857;
    case 0x102bd867u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102bd867;
    case 0x102bd86eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102bd86e;
    case 0x102bd875u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102bd875;
    case 0x102bd87eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102bd87e;
    case 0x102bd884u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102bd884;
    case 0x102bd88du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102bd88d;
    case 0x102bd894u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102bd894;
    case 0x102bd899u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102bd899;
    case 0x102bd8b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_102bd8b3;
    case 0x102bd8b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_102bd8b8;
    case 0x102bd8cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102bd8cb;
    case 0x102bd8d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102bd8d5;
    case 0x102bd8e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_102bd8e2;
    case 0x102bd8e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_102bd8e7;
    case 0x102bd8ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bd8eb;
    case 0x102bd8f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_102bd8f4;
    case 0x102bd906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102bd906;
    case 0x102bd91au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102bd91a;
    default: break;
    }
#endif

    COW_AT(102bd511)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if ((rd8(arg1 + 0x6cu) & 0x40u) != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(102bd51f)
        wr32(sp0 - 0x10u, arg1);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x102c6d9fu), self, 3, arg1, in_edi, in_esi);
        t2 = g->edx;
        eax = t1;
        ecx = arg1;
        edx = t2;
    }
    COW_AT(102bd526)
    if (rd8(arg1 + 0x123u) == 0u) goto L_102bd660;
    COW_AT(102bd533)
    if ((rd8(arg1 + 0x70u) & 2u) == 0u) goto L_102bd660;
    COW_AT(102bd53d)
    if (rd8(arg1 + 0x124u) == 0u)
    {
        eax = rd8(arg1 + 0x124u);
        goto L_102bd634;
    }
    eax = rd8(arg1 + 0x124u);
    COW_AT(102bd54e)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102bd615;
    }
    eax = eax - 1u;
    COW_AT(102bd555)
    if (eax == 1u) goto L_102bd5f4;
    eax = eax - 1u;
    COW_AT(102bd55c)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102bd5d5;
    }
    eax = eax - 1u;
    COW_AT(102bd55f)
    if (eax == 1u) goto L_102bd5a8;
    eax = eax - 1u;
    COW_AT(102bd562)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102bd57e;
    }
    eax = eax - 1u;
    COW_AT(102bd565)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_102bd662;
    }
    eax = eax - 1u;
    COW_AT(102bd56c)
    if (rd8(arg1 + 0xe4u) & 1u) goto L_102bd662;
    COW_AT(102bd579)
L_102bd654: ;
    COW_AT(102bd654)
    wr32(sp0 - 0x10u, arg1);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102c6b68u), ecx, 3, arg1, in_edi, in_esi);
    ebx = in_ebx;
L_102bd91a: ;
    COW_AT(102bd91a)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102bd57e: ;
    COW_AT(102bd57e)
    if (rd8(arg1 + 0xe4u) & 1u) goto L_102bd594;
    COW_AT(102bd587)
    if (rd32(arg1 + 0xc8u) >= 2u) goto L_102bd662;
L_102bd594: ;
    COW_AT(102bd594)
    if (arg3 == 0u) goto L_102bd654;
    COW_AT(102bd59d)
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x10342f4cu)));
    loc_10 = rd32(COW_IMG(0x10342f4cu));
L_102bd648: ;
    COW_AT(102bd648)
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x102c63eeu), 5, arg1, arg3, loc_10, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    goto L_102bd654;
L_102bd5a8: ;
    COW_AT(102bd5a8)
    t3 = rd32(arg1 + 0xe4u);
    if ((t3 & 3u) == 2u)
    {
        eax = t3;
        ecx = t3 & 3u;
        goto L_102bd662;
    }
    eax = t3;
    ecx = t3 & 3u;
    COW_AT(102bd5bc)
    if (arg3 == 0u) goto L_102bd654;
    COW_AT(102bd5c5)
    if ((eax & 2u) == 0u) goto L_102bd654;
    COW_AT(102bd5cd)
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x10342f48u)));
    loc_10 = rd32(COW_IMG(0x10342f48u));
    goto L_102bd648;
L_102bd5d5: ;
    COW_AT(102bd5d5)
    if ((rd8(arg1 + 0xe4u) & 3u) != 0u) goto L_102bd5e7;
    COW_AT(102bd5de)
    if (rd32(arg1 + 0xc8u) >= 3u) goto L_102bd662;
L_102bd5e7: ;
    COW_AT(102bd5e7)
    if (arg3 == 0u) goto L_102bd654;
    COW_AT(102bd5ec)
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x10342f44u)));
    loc_10 = rd32(COW_IMG(0x10342f44u));
    goto L_102bd648;
L_102bd5f4: ;
    COW_AT(102bd5f4)
    t4 = rd32(arg1 + 0xe4u);
    if ((t4 & 7u) == 4u)
    {
        eax = t4;
        ecx = t4 & 7u;
        goto L_102bd662;
    }
    eax = t4;
    ecx = t4 & 7u;
    COW_AT(102bd604)
    if (arg3 == 0u) goto L_102bd654;
    COW_AT(102bd609)
    if ((eax & 4u) == 0u) goto L_102bd654;
    COW_AT(102bd60d)
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x10342f40u)));
    loc_10 = rd32(COW_IMG(0x10342f40u));
    goto L_102bd648;
L_102bd615: ;
    COW_AT(102bd615)
    if ((rd8(arg1 + 0xe4u) & 7u) != 0u) goto L_102bd627;
    COW_AT(102bd61e)
    if (rd32(arg1 + 0xc8u) >= 5u) goto L_102bd662;
L_102bd627: ;
    COW_AT(102bd627)
    if (arg3 == 0u) goto L_102bd654;
    COW_AT(102bd62c)
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x10342f3cu)));
    loc_10 = rd32(COW_IMG(0x10342f3cu));
    goto L_102bd648;
L_102bd634: ;
    COW_AT(102bd634)
    if ((rd8(arg1 + 0xe4u) & 7u) == 0u) goto L_102bd662;
    COW_AT(102bd63d)
    if (arg3 == 0u) goto L_102bd654;
    COW_AT(102bd642)
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x10342f38u)));
    loc_10 = rd32(COW_IMG(0x10342f38u));
    goto L_102bd648;
L_102bd660: ;
    COW_AT(102bd660)
L_102bd662: ;
    COW_AT(102bd662)
    if ((rd8(arg1 + 0x68u) & 4u) == 0u)
    {
    COW_AT(102bd668)
        wr32(sp0 - 0x10u, COW_IMG(0x103c7f1cu));
        wr32(sp0 - 0x14u, arg1);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7f1cu), in_edi, in_esi);
        t8 = g->edx;
        ecx = COW_IMG(0x103c7f1cu);
        edx = t8;
    }
    COW_AT(102bd675)
    wr32(sp0 - 0x10u, in_ebx);
    t9 = rd32(arg1 + 0xecu);
    wr32(arg1 + 0x80u, t9);
    t10 = rd32(arg1 + 0xdcu);
    wr32(arg1 + 0x84u, t10);
    eax = t10;
    loc_4 = in_ebp;
    loc_8 = in_esi;
    loc_c = in_edi;
    loc_10 = in_ebx;
L_102bd691: ;
    COW_AT(102bd691)
    if (rd32(arg1 + 0x78u) == 0u)
    {
    COW_AT(102bd69a)
        if (rd32(arg1 + 0x10cu) == 0u)
        {
    COW_AT(102bd6a2)
L_102bd6a8: ;
    COW_AT(102bd6a8)
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, arg1);
            g->ecx = ecx;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, loc_10, loc_c, loc_8);
            t11 = g->ecx;
            t12 = g->edx;
            wr32(sp0 - 0x1cu, 4u);
            wr32(sp0 - 0x20u, sp0 + 4u);
            wr32(sp0 - 0x24u, arg1);
            g->ecx = t11;
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x102c3c7du), g->eax, g->ecx, t12, 1, 3, arg1, sp0 + 4u, 4u);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(sp0 - 0x28u, sp0 + 4u);
            g->eax = sp0 + 4u;
            g->ecx = t13;
            g->edx = t14;
            g->esp = sp0 - 0x24u;
            t15 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
            t16 = g->ecx;
            t17 = g->edx;
            wr32(arg1 + 0x10cu, t15);
            if (t15 <= 0x7fffffffu)
            {
                eax = t15;
                ecx = t16;
                edx = t17;
            }
            else
            {
                eax = t15;
                ecx = t16;
                edx = t17;
    COW_AT(102bd6d5)
                wr32(sp0 - 0x14u, COW_IMG(0x103c7e40u));
                wr32(sp0 - 0x18u, arg1);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t18 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7e40u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t19 = g->edx;
                eax = t18;
                ecx = COW_IMG(0x103c7e40u);
                edx = t19;
            }
    COW_AT(102bd6e2)
            wr32(sp0 - 0x14u, arg1);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t20 = cow_cdecl(g, COW_IMG(0x102c3647u), 1, arg1);
            t21 = g->ecx;
            t22 = g->edx;
            wr32(sp0 - 0x18u, 4u);
            wr32(sp0 - 0x1cu, arg1 + 0x11cu);
            wr32(sp0 - 0x20u, arg1);
            g->ecx = t21;
            g->esp = sp0 - 0xcu;
            t23 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t22, 1, 5, arg1, arg1 + 0x11cu, 4u, arg1, rd32(sp0 - 0x10u));
            t24 = g->ecx;
            t25 = g->edx;
            wr32(sp0 - 0x24u, 4u);
            wr32(sp0 - 0x28u, COW_IMG(0x10342e0cu));
            wr32(sp0 - 0x2cu, arg1 + 0x11cu);
            g->edx = t25;
            g->esp = sp0 - 0x20u;
            t26 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), t24, 3, arg1 + 0x11cu, COW_IMG(0x10342e0cu), 4u);
            t27 = g->ecx;
            t28 = g->edx;
            if (t26 == 0u)
            {
                eax = t26;
                ecx = t27;
                edx = t28;
            }
            else
            {
                eax = t26;
                ecx = t27;
                edx = t28;
    COW_AT(102bd705)
                wr32(sp0 - 0x14u, COW_IMG(0x103c7f04u));
                wr32(sp0 - 0x18u, arg1);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t29 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7f04u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t30 = g->edx;
                eax = t29;
                ecx = COW_IMG(0x103c7f04u);
                edx = t30;
            }
    COW_AT(102bd712)
            if (rd32(arg1 + 0x10cu) == 0u)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
                goto L_102bd6a8;
            }
    COW_AT(102bd71b)
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
    COW_AT(102bd71d)
        t31 = rd32(arg1 + 0xb0u);
        t32 = rd32(arg1 + 0xacu);
        t33 = rd32(arg1 + 0x10cu);
        t34 = rd32(arg1 + 0xb0u);
        wr32(arg1 + 0x78u, t31);
        wr32(arg1 + 0x74u, t32);
        if (t34 <= t33)
        {
            eax = t31;
            ecx = t32;
            edx = t33;
        }
        else
        {
            eax = t31;
            ecx = t32;
            edx = t33;
    COW_AT(102bd738)
            wr32(arg1 + 0x78u, edx);
        }
    COW_AT(102bd73b)
        t35 = rd32(arg1 + 0x78u);
        wr32(sp0 - 0x14u, t35);
        wr32(sp0 - 0x18u, ecx);
        wr32(sp0 - 0x1cu, arg1);
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, ecx, t35, loc_10, loc_c);
        t36 = g->ecx;
        t37 = g->edx;
        t38 = rd32(arg1 + 0x78u);
        wr32(arg1 + 0x10cu, rd32(arg1 + 0x10cu) - t38);
        eax = t38;
        ecx = t36;
        edx = t37;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(102bd751)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, arg1 + 0x74u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_cdecl(g, COW_IMG(0x102c3e9eu), 3, arg1 + 0x74u, 1u, loc_10);
    t40 = g->edx;
    if (t39 == 1u)
    {
        eax = t39;
        edx = t40;
        goto L_102bd78a;
    }
    eax = t39;
    edx = t40;
    COW_AT(102bd760)
    if (eax == 0u)
    {
        ecx = 1u;
    }
    else
    {
    COW_AT(102bd764)
        if (rd32(arg1 + 0x8cu) != 0u)
        {
            eax = rd32(arg1 + 0x8cu);
        }
        else
        {
    COW_AT(102bd76e)
            eax = COW_IMG(0x103c7ef0u);
        }
    COW_AT(102bd773)
        wr32(sp0 - 0x14u, eax);
        wr32(sp0 - 0x18u, arg1);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t41 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, eax, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t42 = g->edx;
        eax = t41;
        ecx = rd32(sp0 - 0x14u);
        edx = t42;
    }
    COW_AT(102bd77c)
    if (rd32(arg1 + 0x84u) != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102bd691;
    }
    COW_AT(102bd788)
L_102bd7b4: ;
    COW_AT(102bd7b4)
    t45 = rd8(arg1 + 0x126u);
    t46 = rd8(arg1 + 0x12au);
    wr8(arg1 + 0x10au, (uint8_t)t46);
    t47 = rd8(arg1 + 0x127u);
    wr8(arg1 + 0x109u, (uint8_t)t47);
    t48 = rd8(arg1 + 0x129u);
    wr8(arg1 + 0x10bu, (uint8_t)t48);
    wr8(arg1 + 0x108u, (uint8_t)t45);
    t49 = rd32(arg1 + 0xe0u);
    t50 = rd32(arg1 + 0xe0u);
    wr32(arg1 + 0x100u, t49);
    t51 = ((uint8_t)t48 * t50 + 7u) >> 3u;
    t52 = rd32(arg1 + 0xecu);
    wr32(arg1 + 0x104u, t51);
    if (rd8(t52) == 0u)
    {
        ecx = (t51 & 0xffffff00u) | rd8(t52);
    }
    else
    {
        eax = t52;
        ecx = (t51 & 0xffffff00u) | rd8(t52);
    COW_AT(102bd810)
        wr32(sp0 - 0x14u, (uint8_t)ecx);
        t53 = rd32(arg1 + 0xe8u) + 1u;
        wr32(sp0 - 0x18u, t53);
        wr32(sp0 - 0x1cu, eax + 1u);
        wr32(sp0 - 0x20u, arg1 + 0x100u);
        wr32(sp0 - 0x24u, arg1);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102c69efu), g->eax, t53, edx, 1, 7, arg1, arg1 + 0x100u, eax + 1u, t53, (uint8_t)ecx, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t54 = g->ecx;
        t55 = g->edx;
        ecx = t54;
        edx = t55;
    }
    COW_AT(102bd828)
    t56 = rd32(arg1 + 0xd8u) + 1u;
    wr32(sp0 - 0x14u, t56);
    t57 = rd32(arg1 + 0xecu);
    wr32(sp0 - 0x18u, t57);
    t58 = rd32(arg1 + 0xe8u);
    wr32(sp0 - 0x1cu, t58);
    wr32(sp0 - 0x20u, arg1);
    g->eax = t56;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t59 = cow_cdecl(g, COW_IMG(0x102c44e4u), 6, arg1, t58, t57, t56, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t60 = g->ecx;
    t61 = g->edx;
    if ((rd8(arg1 + 0x230u) & 4u) == 0u)
    {
        eax = t59;
        ecx = t60;
        edx = t61;
    }
    else
    {
        eax = t59;
        ecx = t60;
        edx = t61;
    COW_AT(102bd84e)
        if (rd8(arg1 + 0x238u) == 0x40u)
        {
    COW_AT(102bd857)
            t62 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x14u, t62);
            wr32(sp0 - 0x18u, arg1 + 0x100u);
            g->eax = t62;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t63 = cow_thiscall_cdecl(g, COW_IMG(0x102c26c3u), ecx, 3, arg1 + 0x100u, t62, rd32(sp0 - 0x10u));
            t64 = g->edx;
            eax = t63;
            ecx = rd32(sp0 - 0x14u);
            edx = t64;
        }
    }
    COW_AT(102bd867)
    if (rd32(arg1 + 0x70u) != 0u)
    {
    COW_AT(102bd86e)
        wr32(sp0 - 0x14u, arg1);
        g->ebx = 0u;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t65 = cow_call_regs(g, COW_IMG(0x102bf6a6u), g->eax, ecx, edx, 1, 3, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t66 = g->edx;
        eax = t65;
        ecx = arg1;
        edx = t66;
    }
    COW_AT(102bd875)
    if (rd8(arg1 + 0x123u) == 0u) goto L_102bd8cb;
    COW_AT(102bd87e)
    if ((rd8(arg1 + 0x70u) & 2u) == 0u) goto L_102bd8cb;
    COW_AT(102bd884)
    if (rd8(arg1 + 0x124u) < 6u)
    {
    COW_AT(102bd88d)
        wr32(sp0 - 0x14u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t67 = cow_cdecl(g, COW_IMG(0x102c665au), 3, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t68 = g->edx;
        eax = t67;
        ecx = arg1;
        edx = t68;
    }
    COW_AT(102bd894)
    if (arg3 != 0u)
    {
    COW_AT(102bd899)
        t69 = rd32(COW_IMG(0x10342f38u) + rd8(arg1 + 0x124u) * 4u);
        wr32(sp0 - 0x14u, t69);
        wr32(sp0 - 0x18u, arg3);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = rd8(arg1 + 0x124u);
        g->ecx = ecx;
        g->edx = edx;
        t70 = rd8(arg1 + 0x124u);
        g->esp = sp0 - 8u;
        t71 = cow_cdecl(g, COW_IMG(0x102c63eeu), 5, arg1, arg3, t69, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t72 = g->ecx;
        t73 = g->edx;
        eax = t71;
        ecx = t72;
        edx = t73;
    }
    COW_AT(102bd8b3)
    if (arg2 == 0u) goto L_102bd8f4;
    COW_AT(102bd8b8)
    t74 = rd32(COW_IMG(0x10342f1cu) + rd8(arg1 + 0x124u) * 4u);
    wr32(sp0 - 0x14u, t74);
    wr32(sp0 - 0x18u, arg2);
    eax = rd8(arg1 + 0x124u);
    loc_18 = arg2;
    loc_14 = t74;
L_102bd8eb: ;
    COW_AT(102bd8eb)
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t78 = cow_cdecl(g, COW_IMG(0x102c63eeu), 5, arg1, loc_18, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t79 = g->ecx;
    t80 = g->edx;
    eax = t78;
    ecx = t79;
    edx = t80;
L_102bd8f4: ;
    COW_AT(102bd8f4)
    wr32(sp0 - 0x14u, arg1);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x102c6b68u), ecx, 3, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t81 = g->edx;
    if (rd32(arg1 + 0x198u) == 0u)
    {
        ebx = rd32(sp0 - 0x10u);
    }
    else
    {
        eax = rd32(arg1 + 0x198u);
        edx = t81;
        ebx = rd32(sp0 - 0x10u);
    COW_AT(102bd906)
        t82 = rd8(arg1 + 0x124u);
        wr32(sp0 - 0x10u, t82);
        t83 = rd32(arg1 + 0xe4u);
        wr32(sp0 - 0x14u, t83);
        wr32(sp0 - 0x18u, arg1);
        g->esp = sp0 - 0xcu;
        cow_thiscall_cdecl(g, eax, t82, 3, arg1, t83, t82);
    }
    goto L_102bd91a;
L_102bd78a: ;
    COW_AT(102bd78a)
    if (rd32(arg1 + 0x84u) != 0u) goto L_102bd79f;
    COW_AT(102bd792)
    if (rd32(arg1 + 0x78u) != 0u) goto L_102bd79f;
    COW_AT(102bd797)
    if (rd32(arg1 + 0x10cu) == 0u)
    {
        ecx = 1u;
        goto L_102bd7ac;
    }
L_102bd79f: ;
    COW_AT(102bd79f)
    wr32(sp0 - 0x14u, COW_IMG(0x103c7ed8u));
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t43 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7ed8u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t44 = g->edx;
    eax = t43;
    ecx = COW_IMG(0x103c7ed8u);
    edx = t44;
L_102bd7ac: ;
    COW_AT(102bd7ac)
    wr32(arg1 + 0x68u, rd32(arg1 + 0x68u) | 8u);
    wr32(arg1 + 0x6cu, rd32(arg1 + 0x6cu) | 0x20u);
    goto L_102bd7b4;
L_102bd8cb: ;
    COW_AT(102bd8cb)
    if (arg2 != 0u)
    {
    COW_AT(102bd8d5)
        wr32(sp0 - 0x14u, 0xffu);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t75 = cow_cdecl(g, COW_IMG(0x102c63eeu), 5, arg1, arg2, 0xffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t76 = g->ecx;
        t77 = g->edx;
        eax = t75;
        ecx = t76;
        edx = t77;
    }
    COW_AT(102bd8e2)
    if (arg3 == 0u) goto L_102bd8f4;
    COW_AT(102bd8e7)
    wr32(sp0 - 0x14u, 0xffu);
    wr32(sp0 - 0x18u, arg3);
    loc_18 = arg3;
    loc_14 = 0xffu;
    goto L_102bd8eb;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bd511(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bd51fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd526u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd533u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd53du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd54eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd555u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd55cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd55fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd562u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd565u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd56cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd579u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd57eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd587u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd594u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd59du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd5a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd5bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd5c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd5cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd5d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd5deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd5e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd5ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd5f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd604u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd609u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd60du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd615u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd61eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd627u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd62cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd634u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd63du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd642u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd648u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd654u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd660u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd662u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd668u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd675u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd691u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd69au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd6a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd6a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x102bd6d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x11cu;
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd6e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x11cu;
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bd705u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x102bd712u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x102bd71bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd71du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd738u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd73bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd751u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd760u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd764u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd76eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd773u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd77cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd788u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd78au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd792u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd797u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bd79fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd7acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd7b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd810u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102bd828u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102bd84eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102bd857u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102bd867u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd86eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd875u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd87eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd884u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd88du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd894u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd899u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd8b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd8b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd8cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd8d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102bd8e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102bd8e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102bd8ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd8f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd906u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bd91au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102bd511(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102bd511(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
