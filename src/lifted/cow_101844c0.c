/* f_0x101844c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101844c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_100;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_dc;
    uint32_t loc_e4;
    uint32_t loc_ec;
    uint32_t loc_f0;
    uint32_t loc_f4;
    uint32_t loc_f8;
    uint32_t loc_fc;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
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
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 276u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101844deu: eax = g->eax; self = g->ecx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xfcu); in_esi = rd32(sp0 - 0xf8u); in_ebp = rd32(sp0 - 0xf4u); in_ebx = rd32(sp0 - 0xf0u); g->ebp = rd32(sp0 - 0xf4u); g->ebx = rd32(sp0 - 0xf0u); g->edi = rd32(sp0 - 0xfcu); g->esi = rd32(sp0 - 0xf8u); goto E_101844de;
    case 0x101844efu: eax = g->eax; self = g->ecx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xfcu); in_esi = rd32(sp0 - 0xf8u); in_ebp = rd32(sp0 - 0xf4u); in_ebx = rd32(sp0 - 0xf0u); loc_dc = rd32(sp0 - 0xdcu); g->ebp = rd32(sp0 - 0xf4u); g->ebx = rd32(sp0 - 0xf0u); g->edi = rd32(sp0 - 0xfcu); g->esi = rd32(sp0 - 0xf8u); goto E_101844ef;
    case 0x101844f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); goto E_101844f9;
    case 0x10184503u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_dc = rd32(sp0 - 0xdcu); goto E_10184503;
    case 0x1018451du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); goto E_1018451d;
    case 0x10184533u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10184533;
    case 0x10184535u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_dc = rd32(sp0 - 0xdcu); goto E_10184535;
    case 0x10184550u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_dc = rd32(sp0 - 0xdcu); goto E_10184550;
    case 0x10184569u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184569;
    case 0x1018458au: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018458a;
    case 0x10184598u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10184598;
    case 0x101845afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101845af;
    case 0x101845c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101845c9;
    case 0x101845e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); goto E_101845e4;
    case 0x101845ecu: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101845ec;
    case 0x101845f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101845f6;
    case 0x1018460du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1018460d;
    case 0x10184613u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_100 = rd32(sp0 - 0x100u); goto E_10184613;
    case 0x10184627u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); goto E_10184627;
    case 0x1018463bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018463b;
    case 0x10184659u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184659;
    case 0x10184675u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184675;
    case 0x1018468bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018468b;
    case 0x1018469eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018469e;
    case 0x101846b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101846b1;
    case 0x101846c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101846c6;
    case 0x101846cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101846cf;
    case 0x101846dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101846dc;
    case 0x101846e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101846e1;
    case 0x101846f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101846f4;
    case 0x1018470du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018470d;
    case 0x10184725u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184725;
    case 0x1018473du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1018473d;
    case 0x10184754u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184754;
    case 0x1018476cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018476c;
    case 0x10184784u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184784;
    case 0x1018479cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018479c;
    case 0x101847b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101847b4;
    case 0x101847ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101847cc;
    case 0x101847e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101847e4;
    case 0x101847fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101847fc;
    case 0x10184814u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184814;
    case 0x1018482cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018482c;
    case 0x10184844u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184844;
    case 0x1018485cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018485c;
    case 0x10184874u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184874;
    case 0x1018488cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018488c;
    case 0x101848a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101848a4;
    case 0x101848bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101848bc;
    case 0x101848c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101848c8;
    case 0x101848e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101848e0;
    case 0x101848fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_101848fa;
    case 0x10184905u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184905;
    case 0x1018491bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018491b;
    case 0x1018492cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018492c;
    case 0x1018493au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018493a;
    case 0x1018494du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018494d;
    case 0x10184962u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184962;
    case 0x10184978u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184978;
    case 0x10184985u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184985;
    case 0x1018498au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018498a;
    case 0x1018498eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1018498e;
    case 0x10184995u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10184995;
    case 0x101849abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101849ab;
    case 0x101849c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101849c1;
    case 0x101849d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101849d6;
    case 0x101849dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101849da;
    case 0x101849dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101849dc;
    case 0x101849e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101849e5;
    case 0x10184a03u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184a03;
    case 0x10184a0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184a0e;
    case 0x10184a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); goto E_10184a21;
    case 0x10184a36u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_e4 = rd32(sp0 - 0xe4u); goto E_10184a36;
    case 0x10184a39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); goto E_10184a39;
    case 0x10184a44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); goto E_10184a44;
    case 0x10184a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184a56;
    case 0x10184a71u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184a71;
    case 0x10184a89u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184a89;
    case 0x10184aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184aa1;
    case 0x10184ab9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184ab9;
    case 0x10184ac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184ac5;
    case 0x10184acfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184acf;
    case 0x10184adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184adb;
    case 0x10184aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184aee;
    case 0x10184af2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184af2;
    case 0x10184af4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184af4;
    case 0x10184affu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184aff;
    case 0x10184b05u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184b05;
    case 0x10184b0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184b0c;
    case 0x10184b10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184b10;
    case 0x10184b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184b13;
    case 0x10184b28u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184b28;
    case 0x10184b2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184b2a;
    case 0x10184b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184b3f;
    case 0x10184b58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_10184b58;
    case 0x10184b6du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10184b6d;
    case 0x10184b88u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_10184b88;
    case 0x10184b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); goto E_10184b9d;
    case 0x10184bb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); goto E_10184bb6;
    case 0x10184bcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); goto E_10184bcd;
    case 0x10184be6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184be6;
    case 0x10184bffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184bff;
    case 0x10184c15u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184c15;
    case 0x10184c2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184c2b;
    case 0x10184c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184c41;
    case 0x10184c49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_10184c49;
    case 0x10184c64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); goto E_10184c64;
    default: break;
    }
#endif

    COW_AT(101844c0)
    wr32(sp0 - 0xf0u, in_ebx);
    wr32(sp0 - 0xf4u, in_ebp);
    wr32(sp0 - 0xf8u, in_esi);
    wr32(sp0 - 0xfcu, in_edi);
    if (rd32(arg1 + 0x18u) == 0u)
    {
        loc_f0 = in_ebx;
        loc_f4 = in_ebp;
        loc_f8 = in_esi;
        loc_fc = in_edi;
    }
    else
    {
        ebp = rd32(arg1 + 0x18u);
    COW_AT(101844de)
        wr32(sp0 - 0xdcu, 0u);
        if (rd32(COW_IMG(0x106631d4u)) == 0u)
        {
            loc_f0 = in_ebx;
            loc_f4 = in_ebp;
            loc_f8 = in_esi;
            loc_fc = in_edi;
            loc_dc = 0u;
        }
        else
        {
            eax = rd32(COW_IMG(0x106631d4u));
    COW_AT(101844ef)
            wr32(sp0 - 0x100u, 0x31305f6cu);
            g->eax = eax;
            g->esp = sp0 - 0xfcu;
            t1 = cow_stdcall(g, COW_IMG(0x10178760u), 1, 0x31305f6cu);
            eax = t1;
    COW_AT(101844f9)
            wr32(sp0 - 0xdcu, eax);
            if (eax == 0u)
            {
                loc_dc = eax;
    COW_AT(10184535)
                wr32(sp0 - 0x100u, 0u);
                t6 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t6);
                t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x108u, t7);
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, rd32(rd32(t7) + 0xb8u), t6, 3, t7, t6, 0u);
                loc_f0 = rd32(sp0 - 0xf0u);
                loc_f4 = rd32(sp0 - 0xf4u);
                loc_f8 = rd32(sp0 - 0xf8u);
                loc_fc = rd32(sp0 - 0xfcu);
                loc_dc = rd32(sp0 - 0xdcu);
            }
            else
            {
                edi = eax;
                loc_dc = eax;
    COW_AT(10184503)
                wr32(sp0 - 0x100u, 1u);
                t2 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t2);
                t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x108u, t3);
                g->edx = t2;
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, rd32(rd32(t3) + 0xb8u), rd32(t3), 3, t3, t2, 1u);
                t4 = g->edx;
                edx = t4;
    COW_AT(1018451d)
                wr32(sp0 - 0x100u, edi + 8u);
                t5 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t5);
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t5, edi + 8u);
    COW_AT(10184533)
                loc_f0 = rd32(sp0 - 0xf0u);
                loc_f4 = rd32(sp0 - 0xf4u);
                loc_f8 = rd32(sp0 - 0xf8u);
                loc_fc = rd32(sp0 - 0xfcu);
                loc_dc = rd32(sp0 - 0xdcu);
            }
        }
    COW_AT(10184550)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0x89u);
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t8);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t9 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x89u, 1u);
        t10 = g->edx;
        edx = t10;
    COW_AT(10184569)
        edi = sp0 - 0xd0u;
        eax = 0u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(self + 0x394a4u) == 0u)
        {
            ecx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(101845ec)
            wr32(sp0 - 0x100u, 0u);
            wr32(sp0 - 0x104u, 0u);
            wr32(sp0 - 0x108u, sp0 - 0xd0u);
            g->eax = sp0 - 0xd0u;
            g->esp = sp0 - 0xfcu;
            t17 = cow_thiscall(g, COW_IMG(0x1018b9a0u), ecx, 3, sp0 - 0xd0u, 0u, 0u);
            eax = t17;
    COW_AT(101845f6)
            wr32(sp0 - 0x100u, sp0 - 0xd0u);
            t18 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x104u, t18);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t18, sp0 - 0xd0u);
    COW_AT(1018460d)
            edx = rd32(self + 0x394a8u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(1018458a)
            wr32(sp0 - 0x100u, sp0 - 0x68u);
            wr32(sp0 - 0x104u, sp0 - 0xd0u);
            g->eax = sp0 - 0xd0u;
            g->esp = sp0 - 0xfcu;
            t11 = cow_thiscall(g, COW_IMG(0x10188b70u), ecx, 2, sp0 - 0xd0u, sp0 - 0x68u);
            eax = t11;
    COW_AT(10184598)
            wr32(sp0 - 0x100u, sp0 - 0xd0u);
            t12 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x104u, t12);
            g->edx = t12;
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t12, sp0 - 0xd0u);
            t13 = g->edx;
            edx = t13;
    COW_AT(101845af)
            wr32(sp0 - 0x100u, sp0 - 0x68u);
            t14 = rd32(self + 0x394acu);
            wr32(sp0 - 0x104u, t14);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t14, sp0 - 0x68u);
    COW_AT(101845c9)
            wr32(sp0 - 0x100u, 1u);
            t15 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x104u, t15);
            t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t16);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(t16) + 0xb8u), rd32(t16), 3, t16, t15, 1u);
    COW_AT(101845e4)
            edx = rd32(self + 0x394acu);
        }
    COW_AT(10184613)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, edx);
        t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t19);
        g->edx = edx;
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t19) + 0xb8u), rd32(t19), 3, t19, edx, 1u);
        t20 = g->edx;
        edx = t20;
    COW_AT(10184627)
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0u);
        wr32(sp0 - 0x108u, sp0 - 0xe8u);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, COW_IMG(0x1018b9e0u), rd32(COW_IMG(0x1065cb04u)), 3, sp0 - 0xe8u, 0u, 0u);
    COW_AT(1018463b)
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0u);
        wr32(sp0 - 0x108u, sp0 - 0xe0u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, COW_IMG(0x1018ba20u), rd32(COW_IMG(0x1065cb04u)), 5, sp0 - 0xd8u, sp0 - 0xd4u, sp0 - 0xe0u, 0u, 0u);
    COW_AT(10184659)
        t21 = rd32(sp0 - 0xe8u);
        wr32(sp0 - 0x100u, t21);
        wr32(sp0 - 0x104u, 0x8bu);
        t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t22);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), t21, 3, t22, 0x8bu, t21);
    COW_AT(10184675)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0x1cu);
        t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t23);
        t24 = rd32(t23);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(t24 + 0xc8u), t24, 3, t23, 0x1cu, 1u);
        t25 = g->ecx;
        ecx = t25;
    COW_AT(1018468b)
        if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du) == 0u)
        {
            eax = rd32(COW_IMG(0x1045666cu));
            ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
            goto L_1018492c;
        }
        eax = rd32(COW_IMG(0x1045666cu));
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
    COW_AT(1018469e)
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0x8cu);
        t26 = rd32(eax + 0xcu);
        wr32(sp0 - 0x108u, t26);
        g->edx = rd32(t26);
        t27 = rd32(t26);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(t27 + 0xc8u), ecx, 3, t26, 0x8cu, 0u);
        t28 = g->edx;
        edx = t28;
    COW_AT(101846b1)
        wr32(sp0 - 0x100u, 3u);
        wr32(sp0 - 0x104u, 0x23u);
        t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t29);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t29) + 0xc8u), rd32(t29), 3, t29, 0x23u, 3u);
    COW_AT(101846c6)
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = rd32(COW_IMG(0x1045666cu));
L_101846cf: ;
    COW_AT(101846cf)
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0x30u);
        wr32(sp0 - 0x108u, eax);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x30u, 0u);
L_101846dc: ;
    COW_AT(101846dc)
        eax = rd32(COW_IMG(0x1045666cu));
L_101846e1: ;
    COW_AT(101846e1)
        t37 = rd32(sp0 - 0xd8u);
        wr32(sp0 - 0x100u, t37);
        wr32(sp0 - 0x104u, 0x22u);
        t38 = rd32(eax + 0xcu);
        wr32(sp0 - 0x108u, t38);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(rd32(eax + 0xcu)) + 0xc8u), t37, 3, t38, 0x22u, t37);
    COW_AT(101846f4)
        t39 = rd32(sp0 - 0xe0u);
        wr32(sp0 - 0x100u, t39);
        wr32(sp0 - 0x104u, 0x24u);
        t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t40);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t40, 0x24u, t39);
    COW_AT(1018470d)
        t41 = rd32(sp0 - 0xd4u);
        wr32(sp0 - 0x100u, t41);
        wr32(sp0 - 0x104u, 0x25u);
        t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t42);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t42) + 0xc8u), rd32(t42), 3, t42, 0x25u, t41);
    COW_AT(10184725)
        wr32(sp0 - 0x100u, self + 0x3913cu);
        t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x104u, t43);
        g->edx = self + 0x3913cu;
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t43) + 0xa8u), rd32(t43), 2, t43, self + 0x3913cu);
        t44 = g->edx;
        edx = t44;
    COW_AT(1018473d)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0x11u);
        wr32(sp0 - 0x108u, 0u);
        t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t45);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t45) + 0xfcu), rd32(t45), 4, t45, 0u, 0x11u, 1u);
    COW_AT(10184754)
        wr32(sp0 - 0x100u, 2u);
        wr32(sp0 - 0x104u, 0x10u);
        wr32(sp0 - 0x108u, 0u);
        t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t46);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t46) + 0xfcu), rd32(t46), 4, t46, 0u, 0x10u, 2u);
    COW_AT(1018476c)
        wr32(sp0 - 0x100u, 5u);
        wr32(sp0 - 0x104u, 1u);
        wr32(sp0 - 0x108u, 0u);
        t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t47);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t47) + 0xfcu), rd32(t47), 4, t47, 0u, 1u, 5u);
    COW_AT(10184784)
        wr32(sp0 - 0x100u, 2u);
        wr32(sp0 - 0x104u, 2u);
        wr32(sp0 - 0x108u, 0u);
        t48 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t48);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t48) + 0xfcu), rd32(t48), 4, t48, 0u, 2u, 2u);
    COW_AT(1018479c)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 3u);
        wr32(sp0 - 0x108u, 0u);
        t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t49);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t49) + 0xfcu), rd32(t49), 4, t49, 0u, 3u, 1u);
    COW_AT(101847b4)
        wr32(sp0 - 0x100u, 6u);
        wr32(sp0 - 0x104u, 4u);
        wr32(sp0 - 0x108u, 0u);
        t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t50);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t50) + 0xfcu), rd32(t50), 4, t50, 0u, 4u, 6u);
    COW_AT(101847cc)
        wr32(sp0 - 0x100u, 2u);
        wr32(sp0 - 0x104u, 5u);
        wr32(sp0 - 0x108u, 0u);
        t51 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t51);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t51, 0u, 5u, 2u);
    COW_AT(101847e4)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 6u);
        wr32(sp0 - 0x108u, 0u);
        t52 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t52);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t52) + 0xfcu), rd32(t52), 4, t52, 0u, 6u, 1u);
    COW_AT(101847fc)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 4u);
        wr32(sp0 - 0x108u, 1u);
        t53 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t53);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t53) + 0xfcu), rd32(t53), 4, t53, 1u, 4u, 1u);
    COW_AT(10184814)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 1u);
        wr32(sp0 - 0x108u, 1u);
        t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t54);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t54) + 0xfcu), rd32(t54), 4, t54, 1u, 1u, 1u);
    COW_AT(1018482c)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 1u);
        wr32(sp0 - 0x108u, 2u);
        t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t55);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 4, t55, 2u, 1u, 1u);
    COW_AT(10184844)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 4u);
        wr32(sp0 - 0x108u, 2u);
        t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t56);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 4, t56, 2u, 4u, 1u);
    COW_AT(1018485c)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0xdu);
        wr32(sp0 - 0x108u, 0u);
        t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t57);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t57) + 0xfcu), rd32(t57), 4, t57, 0u, 0xdu, 1u);
    COW_AT(10184874)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0xeu);
        wr32(sp0 - 0x108u, 0u);
        t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t58);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t58) + 0xfcu), rd32(t58), 4, t58, 0u, 0xeu, 1u);
    COW_AT(1018488c)
        wr32(sp0 - 0x100u, 3u);
        wr32(sp0 - 0x104u, 0xdu);
        wr32(sp0 - 0x108u, 1u);
        t59 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t59);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t59) + 0xfcu), rd32(t59), 4, t59, 1u, 0xdu, 3u);
    COW_AT(101848a4)
        wr32(sp0 - 0x100u, 3u);
        wr32(sp0 - 0x104u, 0xeu);
        wr32(sp0 - 0x108u, 1u);
        t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x10cu, t60);
        g->eax = t60;
        t61 = rd32(t60);
        g->esp = sp0 - 0xfcu;
        t62 = cow_thiscall(g, rd32(t61 + 0xfcu), t61, 4, t60, 1u, 0xeu, 3u);
        t63 = g->ecx;
        eax = t62;
        ecx = t63;
    COW_AT(101848bc)
        wr32(sp0 - 0x100u, rd32(COW_IMG(0x10632038u)));
        g->edx = rd32(COW_IMG(0x10632038u));
        t64 = rd32(COW_IMG(0x10632038u));
        g->esp = sp0 - 0xfcu;
        cow_cdecl(g, COW_IMG(0x10177400u), 1, t64);
        t65 = g->edx;
        edx = t65;
    COW_AT(101848c8)
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0x104u, 0x1bu);
        t66 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t66);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, rd32(rd32(t66) + 0xc8u), rd32(t66), 3, t66, 0x1bu, 0u);
    COW_AT(101848e0)
        if (arg2 == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1018498a)
            wr32(sp0 - 0x100u, 0u);
            wr32(sp0 - 0x104u, 0xfu);
            loc_100 = 0u;
            loc_104 = 0xfu;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(101848fa)
            wr32(sp0 - 0x100u, 1u);
            wr32(sp0 - 0x104u, 0xfu);
            wr32(sp0 - 0x108u, eax);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0xfu, 1u);
    COW_AT(10184905)
            wr32(sp0 - 0x100u, 5u);
            wr32(sp0 - 0x104u, 0x19u);
            t67 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t67);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(t67) + 0xc8u), rd32(t67), 3, t67, 0x19u, 5u);
    COW_AT(1018491b)
            wr32(sp0 - 0x100u, 0x60u);
            wr32(sp0 - 0x104u, 0x18u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            loc_100 = 0x60u;
            loc_104 = 0x18u;
        }
    COW_AT(1018498e)
        wr32(sp0 - 0x108u, eax);
        g->esp = sp0 - 0x104u;
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 1, eax);
    COW_AT(10184995)
        wr32(sp0 - 0x108u, 5u);
        wr32(sp0 - 0x10cu, 0x13u);
        t68 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x110u, t68);
        g->esp = sp0 - 0x104u;
        cow_thiscall(g, rd32(rd32(t68) + 0xc8u), rd32(t68), 3, t68, 0x13u, 5u);
    COW_AT(101849ab)
        wr32(sp0 - 0x108u, 6u);
        wr32(sp0 - 0x10cu, 0x14u);
        t69 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x110u, t69);
        g->esp = sp0 - 0x104u;
        cow_thiscall(g, rd32(rd32(t69) + 0xc8u), rd32(t69), 3, t69, 0x14u, 6u);
    COW_AT(101849c1)
        if (rd16(arg1 + 0xd4u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(101849da)
            wr32(sp0 - 0x108u, 3u);
            loc_108 = 3u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(101849d6)
            wr32(sp0 - 0x108u, 2u);
            loc_108 = 2u;
        }
    COW_AT(101849dc)
        wr32(sp0 - 0x10cu, 0x16u);
        wr32(sp0 - 0x110u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xfcu;
        t70 = cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 5, eax, 0x16u, loc_108, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
        t71 = g->edx;
        eax = t70;
        edx = t71;
    COW_AT(101849e5)
        wr32(self + 0x39120u, 0u);
        wr32(sp0 - 0x100u, arg1 + 0x40u);
        wr32(sp0 - 0x104u, 0x100u);
        g->esp = sp0 - 0xfcu;
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, arg1 + 0x40u);
    COW_AT(10184a03)
        if (rd32(ebp + 0x60u) == 0u)
        {
            loc_f0 = rd32(sp0 - 0xf0u);
            loc_f4 = rd32(sp0 - 0xf4u);
            loc_f8 = rd32(sp0 - 0xf8u);
            loc_fc = rd32(sp0 - 0xfcu);
        }
        else
        {
            edi = rd32(ebp + 0x60u);
    COW_AT(10184a0e)
            wr32(sp0 - 0xe4u, 0u);
            if ((int32_t)rd32(ebp + 0x44u) <= 0) goto L_10184bcd;
            loc_e4 = 0u;
L_10184a21: ;
    COW_AT(10184a21)
            wr32(sp0 - 0xecu, 0u);
            if ((int32_t)rd32(edi) > 0)
            {
                esi = rd32(edi + 4u);
    COW_AT(10184a36)
                esi = esi + 4u;
                loc_ec = 0u;
L_10184a39: ;
    COW_AT(10184a39)
                if (rd32(esi + 0x24u) != 0u)
                {
                    eax = rd32(esi + 0x24u);
    COW_AT(10184a44)
                    wr32(sp0 - 0x100u, sp0 - 0xd0u);
                    wr32(sp0 - 0x104u, 0u);
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, 0u, sp0 - 0xd0u);
    COW_AT(10184a56)
                    t72 = rd32(sp0 - 0xe8u);
                    wr32(sp0 - 0x100u, t72);
                    wr32(sp0 - 0x104u, 0x8bu);
                    t73 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t73);
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, rd32(rd32(t73) + 0xc8u), rd32(t73), 3, t73, 0x8bu, t72);
    COW_AT(10184a71)
                    t74 = rd32(sp0 - 0xd8u);
                    wr32(sp0 - 0x100u, t74);
                    wr32(sp0 - 0x104u, 0x22u);
                    t75 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t75);
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, rd32(rd32(t75) + 0xc8u), rd32(t75), 3, t75, 0x22u, t74);
    COW_AT(10184a89)
                    t76 = rd32(sp0 - 0xe0u);
                    wr32(sp0 - 0x100u, t76);
                    wr32(sp0 - 0x104u, 0x24u);
                    t77 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t77);
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, rd32(rd32(t77) + 0xc8u), rd32(t77), 3, t77, 0x24u, t76);
    COW_AT(10184aa1)
                    t78 = rd32(sp0 - 0xd4u);
                    wr32(sp0 - 0x100u, t78);
                    wr32(sp0 - 0x104u, 0x25u);
                    t79 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t79);
                    g->edx = t78;
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, rd32(rd32(t79) + 0xc8u), rd32(t79), 3, t79, 0x25u, t78);
                    t80 = g->edx;
                    edx = t80;
    COW_AT(10184ab9)
                    if ((uint32_t)(int16_t)rd16(esi + 0x20u) != rd32(self + 0x39120u))
                    {
                        eax = (uint32_t)(int16_t)rd16(esi + 0x20u);
    COW_AT(10184ac5)
                        wr32(self + 0x39120u, eax);
                        if (eax == 0u)
                        {
    COW_AT(10184adb)
                            if (rd32(self + 0x390fcu) == 0u)
                            {
                                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10184af2)
                                wr32(sp0 - 0x100u, 3u);
                                loc_100 = 3u;
                            }
                            else
                            {
                                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10184aee)
                                wr32(sp0 - 0x100u, 2u);
                                loc_100 = 2u;
                            }
                        }
                        else
                        {
    COW_AT(10184acf)
                            wr32(sp0 - 0x100u, 1u);
                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            loc_100 = 1u;
                        }
    COW_AT(10184af4)
                        wr32(sp0 - 0x104u, 0x16u);
                        wr32(sp0 - 0x108u, eax);
                        g->edx = edx;
                        g->esp = sp0 - 0xfcu;
                        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, loc_100);
                        t81 = g->edx;
                        edx = t81;
                    }
    COW_AT(10184aff)
                    if (rd32(esi) == 0u)
                    {
    COW_AT(10184b2a)
                        wr32(sp0 - 0x100u, 0u);
                        wr32(sp0 - 0x104u, 0u);
                        t83 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x108u, t83);
                        g->esp = sp0 - 0xfcu;
                        cow_thiscall(g, rd32(rd32(t83) + 0xf4u), rd32(t83), 3, t83, 0u, 0u);
                    }
                    else
                    {
                        eax = rd32(esi);
    COW_AT(10184b05)
                        if (rd32(eax + 0x40u) == 0u)
                        {
    COW_AT(10184b10)
                            eax = rd32(eax + 0x44u);
                        }
                        else
                        {
                            ecx = rd32(eax + 0x40u);
    COW_AT(10184b0c)
                            eax = ecx;
                        }
    COW_AT(10184b13)
                        wr32(sp0 - 0x100u, eax);
                        wr32(sp0 - 0x104u, 0u);
                        t82 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x108u, t82);
                        g->esp = sp0 - 0xfcu;
                        cow_thiscall(g, rd32(rd32(t82) + 0xf4u), t82, 3, t82, 0u, eax);
    COW_AT(10184b28)
                    }
    COW_AT(10184b3f)
                    t84 = (uint32_t)(int16_t)rd16(esi + 0x1cu);
                    wr32(sp0 - 0x100u, t84);
                    wr32(sp0 - 0x104u, 0x1bu);
                    t85 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t85);
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t85, 0x1bu, t84);
    COW_AT(10184b58)
                    t86 = rd32(ebp + 0x20u);
                    wr32(sp0 - 0x100u, t86);
                    t87 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x104u, t87);
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, rd32(rd32(t87) + 0x130u), rd32(t87), 2, t87, t86);
    COW_AT(10184b6d)
                    t88 = rd32(ebp + 0x24u);
                    wr32(sp0 - 0x100u, t88);
                    t89 = rd32(esi + 0x24u);
                    wr32(sp0 - 0x104u, t89);
                    wr32(sp0 - 0x108u, 0u);
                    t90 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x10cu, t90);
                    g->edx = t89;
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, rd32(rd32(t90) + 0x14cu), rd32(t90), 4, t90, 0u, t89, t88);
                    t91 = g->edx;
                    edx = t91;
    COW_AT(10184b88)
                    t92 = rd32(esi + 0x14u);
                    wr32(sp0 - 0x100u, t92);
                    wr32(sp0 - 0x104u, 0u);
                    t93 = rd32(ebp + 0x2cu);
                    wr32(sp0 - 0x108u, t93);
                    g->ebx = self;
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t93, 0u, t92);
                    loc_e4 = rd32(sp0 - 0xe4u);
                    loc_ec = rd32(sp0 - 0xecu);
                }
    COW_AT(10184b9d)
                wr32(sp0 - 0xecu, loc_ec + 1u);
                if ((int32_t)(loc_ec + 1u) < (int32_t)rd32(edi))
                {
                    esi = esi + 0xc0u;
                    loc_ec = loc_ec + 1u;
                    goto L_10184a39;
                }
            }
    COW_AT(10184bb6)
            wr32(sp0 - 0xe4u, loc_e4 + 1u);
            if ((int32_t)(loc_e4 + 1u) < (int32_t)rd32(ebp + 0x44u))
            {
                edi = edi + 0x24u;
                loc_e4 = loc_e4 + 1u;
                goto L_10184a21;
            }
L_10184bcd: ;
    COW_AT(10184bcd)
            wr32(sp0 - 0x100u, 0u);
            wr32(sp0 - 0x104u, 0x8bu);
            t94 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t94);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(t94) + 0xc8u), rd32(t94), 3, t94, 0x8bu, 0u);
    COW_AT(10184be6)
            wr32(sp0 - 0x100u, 1u);
            wr32(sp0 - 0x104u, 0x89u);
            t95 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t95);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(t95) + 0xc8u), rd32(t95), 3, t95, 0x89u, 1u);
    COW_AT(10184bff)
            wr32(sp0 - 0x100u, 0u);
            wr32(sp0 - 0x104u, 0x1bu);
            t96 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t96);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(t96) + 0xc8u), rd32(t96), 3, t96, 0x1bu, 0u);
    COW_AT(10184c15)
            wr32(sp0 - 0x100u, 1u);
            wr32(sp0 - 0x104u, 0xfu);
            t97 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t97);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(t97) + 0xc8u), rd32(t97), 3, t97, 0xfu, 1u);
    COW_AT(10184c2b)
            wr32(sp0 - 0x100u, 1u);
            wr32(sp0 - 0x104u, 0x16u);
            t98 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t98);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(t98) + 0xc8u), rd32(t98), 3, t98, 0x16u, 1u);
    COW_AT(10184c41)
            if (rd32(sp0 - 0xdcu) == 0u)
            {
                loc_f0 = rd32(sp0 - 0xf0u);
                loc_f4 = rd32(sp0 - 0xf4u);
                loc_f8 = rd32(sp0 - 0xf8u);
                loc_fc = rd32(sp0 - 0xfcu);
            }
            else
            {
    COW_AT(10184c49)
                wr32(sp0 - 0x100u, 0u);
                t99 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t99);
                t100 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x108u, t100);
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, rd32(rd32(t100) + 0xb8u), rd32(t100), 3, t100, t99, 0u);
                loc_f0 = rd32(sp0 - 0xf0u);
                loc_f4 = rd32(sp0 - 0xf4u);
                loc_f8 = rd32(sp0 - 0xf8u);
                loc_fc = rd32(sp0 - 0xfcu);
            }
        }
    }
    COW_AT(10184c64)
    g->ebx = loc_f0;
    g->esi = loc_f8;
    g->edi = loc_fc;
    g->ebp = loc_f4;
    return;
L_1018492c: ;
    COW_AT(1018492c)
    if (rd8(eax + 0x92eu) == 0u) goto L_101846e1;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x92eu);
    COW_AT(1018493a)
    wr32(sp0 - 0x100u, 3u);
    wr32(sp0 - 0x104u, 0x8cu);
    t30 = rd32(eax + 0xcu);
    wr32(sp0 - 0x108u, t30);
    g->edx = rd32(t30);
    t31 = rd32(t30);
    g->esp = sp0 - 0xfcu;
    cow_thiscall(g, rd32(t31 + 0xc8u), ecx, 3, t30, 0x8cu, 3u);
    t32 = g->edx;
    edx = t32;
    COW_AT(1018494d)
    wr32(sp0 - 0x100u, 0u);
    wr32(sp0 - 0x104u, 0x23u);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x108u, t33);
    g->edx = edx;
    t34 = rd32(t33);
    g->esp = sp0 - 0xfcu;
    cow_thiscall(g, rd32(t34 + 0xc8u), t34, 3, t33, 0x23u, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    ecx = t35;
    edx = t36;
    COW_AT(10184962)
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        goto L_101846cf;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu);
    COW_AT(10184978)
    wr32(sp0 - 0x100u, 1u);
    wr32(sp0 - 0x104u, 0x30u);
    wr32(sp0 - 0x108u, eax);
    g->esp = sp0 - 0xfcu;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), ecx, 3, eax, 0x30u, 1u);
    COW_AT(10184985)
    goto L_101846dc;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101844c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101844deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xfcu);
        in_esi = rd32(sp0 - 0xf8u);
        in_ebp = rd32(sp0 - 0xf4u);
        in_ebx = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xfcu;
        g->ebx = self;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101844efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_dc;
        eax = g->eax;
        self = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xfcu);
        in_esi = rd32(sp0 - 0xf8u);
        in_ebp = rd32(sp0 - 0xf4u);
        in_ebx = rd32(sp0 - 0xf0u);
        loc_dc = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xfcu;
        g->ebx = self;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101844f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184503u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_dc = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018451du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184533u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184535u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_dc = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184550u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_dc;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_dc = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184569u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018458au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->eax = sp0 - 0xd0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184598u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xd0u);
        wr32(sp0 - 0x100u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x101845afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x100u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x101845c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x100u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x101845e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101845ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->eax = sp0 - 0xd0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101845f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x108u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x1018460du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x108u, sp0 - 0xd0u);
        wr32(sp0 - 0x100u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10184613u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184627u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018463bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x108u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x10184659u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        wr32(sp0 - 0x108u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x10184675u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x1018468bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x1018469eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x101846b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x101846c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x101846cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x101846dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x101846e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x101846f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x1018470du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x10184725u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x1018473du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x10184754u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1018476cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10184784u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1018479cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101847b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101847ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101847e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101847fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10184814u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1018482cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10184844u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1018485cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10184874u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1018488cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101848a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101848bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101848c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x100u;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101848e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101848fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10184905u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1018491bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1018492cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x1018493au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x1018494du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x10184962u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x10184978u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x10184985u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x1018498au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1018498eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x104u;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10184995u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x104u;
        g->esi = arg1;
        wr32(sp0 - 0x110u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101849abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x104u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101849c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x104u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101849d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x104u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101849dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x104u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101849dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x108u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101849e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184a03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184a0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184a21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_e4;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184a36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0xfcu;
        wr32(sp0 - 0xecu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10184a39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_e4;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184a44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_e4;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184a56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        wr32(sp0 - 0x100u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10184a71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184a89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184aa1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184ab9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184ac5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184acfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184adbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184aeeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184af2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184af4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10184affu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b2au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184b9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_e4;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184bb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_e4;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184bcdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_e4;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184be6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184bffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184c15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184c2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184c41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184c49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184c64u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101844c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101844c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
